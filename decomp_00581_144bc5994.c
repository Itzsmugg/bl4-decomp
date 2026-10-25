// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144bc5994 FUN_144bc5994 body=73 status=ok
// SIG undefined FUN_144bc5994(void)

int FUN_144bc5994(int param_1)

{
  int iVar1;
  uint local_res8 [8];
  
  if ((param_1 - 1U < 2) && (iVar1 = FUN_144f35bf0(local_res8), iVar1 == 0)) {
    local_res8[0] = local_res8[0] + 7 & 0xfffffff8;
    iVar1 = FUN_144f306ac(param_1);
    return iVar1 + local_res8[0] + 0x46e0;
  }
  return 0;
}



// FUNCTION 144bc59e0 FUN_144bc59e0 body=662 status=ok
// SIG undefined FUN_144bc59e0(void)

undefined1 * FUN_144bc59e0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  uint local_res10 [2];
  
  if (((((param_2 == 48000) || (param_2 == 24000)) || (param_2 == 16000)) ||
      ((param_2 == 12000 || (param_2 == 8000)))) &&
     ((param_3 - 1U < 2 && (((param_4 - 0x800U & 0xfffffffc) == 0 && (param_4 != 0x802)))))) {
    iVar1 = FUN_144bc5994(param_3);
    memset(param_1,0,(longlong)iVar1);
    iVar1 = FUN_144f35bf0(local_res10);
    if (iVar1 == 0) {
      param_1[1] = 0x46e0;
      local_res10[0] = local_res10[0] + 7 & 0xfffffff8;
      param_1[0x1c] = param_3;
      lVar2 = (longlong)(int)(local_res10[0] + 0x46e0) + (longlong)param_1;
      *param_1 = local_res10[0] + 0x46e0;
      param_1[0xddc] = param_3;
      param_1[0x24] = param_2;
      iVar1 = FUN_144f2f804();
      param_1[0x2d] = iVar1;
      iVar1 = FUN_144f35bfc(param_1 + 0x11b8,iVar1,param_1 + 2);
      if (iVar1 == 0) {
        param_1[10] = 0;
        param_1[0xc] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0x13] = 0;
        param_1[4] = param_1[0x24];
        param_1[5] = 16000;
        param_1[7] = 16000;
        param_1[2] = param_3;
        param_1[3] = param_3;
        param_1[6] = 8000;
        param_1[8] = 0x14;
        param_1[9] = 25000;
        param_1[0xb] = 9;
        iVar1 = FUN_144f32ccc(lVar2,param_2,param_3,param_1[0x2d]);
        if (iVar1 == 0) {
          FUN_144f3037c(lVar2,0x2720,0);
          FUN_144f3037c(lVar2,0xfaa,param_1[0xb]);
          param_1[0x23] = -1;
          param_1[0x29] = -1000;
          param_1[0x1f] = -1000;
          param_1[0x20] = -1000;
          param_1[0x1e] = -1000;
          param_1[0x22] = -1000;
          param_1[0x25] = 1;
          param_1[0x26] = 1;
          param_1[0x1b] = param_4;
          param_1[0x2b] = param_1[0x24] / 100;
          param_1[0x21] = 0x451;
          param_1[0x28] = param_2 * param_3 + 3000;
          param_1[0x2a] = 0x18;
          param_1[0x27] = 5000;
          *(undefined2 *)(param_1 + 0xddd) = 0x4000;
          param_1[0x1d] = param_1[0x24] / 0xfa;
          param_1[0xddf] = 0x3f800000;
          iVar1 = FUN_144f39688(0x3c);
          param_1[0xdde] = iVar1 << 8;
          param_1[0xdeb] = 1;
          param_1[0xde4] = 0x3e9;
          param_1[0xde8] = 0x451;
          FUN_144f377f0(param_1 + 0x2f,param_1[0x24]);
          param_1[0x30] = param_1[0x1b];
          return (undefined1 *)0x0;
        }
      }
      return &DAT_fffffffd;
    }
  }
  return (undefined1 *)0xffffffff;
}



// FUNCTION 144bc5c78 FUN_144bc5c78 body=297 status=ok
// SIG undefined FUN_144bc5c78(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bc5c78(longlong param_1,short *param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  float *pfVar4;
  ulonglong uVar5;
  short *psVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uStack_a0;
  undefined1 auStack_98 [32];
  undefined4 auStack_78 [4];
  undefined8 local_68;
  int local_60 [8];
  undefined8 local_40;
  undefined4 local_38 [4];
  ulonglong local_28 [2];
  
  puVar7 = auStack_98;
  local_28[0] = DAT_14c707940 ^ (ulonglong)local_28;
  uStack_a0 = 0x144bc5cc5;
  iVar2 = FUN_144bc6660(param_3,*(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0x90));
  if (0 < iVar2) {
    iVar8 = *(int *)(param_1 + 0x70);
    uVar3 = (longlong)(iVar8 * iVar2) * 4;
    uVar5 = uVar3 + 0xf;
    if (uVar5 <= uVar3) {
      uVar5 = 0xffffffffffffff0;
    }
    uStack_a0 = 0x144bc5d03;
    lVar1 = -(uVar5 & 0xfffffffffffffff0);
    puVar7 = auStack_98 + lVar1;
    iVar9 = 0;
    pfVar4 = (float *)((longlong)local_28 + lVar1);
    psVar6 = param_2;
    if (0 < iVar8 * iVar2) {
      do {
        iVar9 = iVar9 + 1;
        *pfVar4 = (float)(int)*psVar6 * 3.0517578e-05;
        iVar8 = *(int *)(param_1 + 0x70);
        pfVar4 = pfVar4 + 1;
        psVar6 = psVar6 + 1;
      } while (iVar9 < iVar8 * iVar2);
    }
    *(undefined4 *)((longlong)local_38 + lVar1) = 0;
    *(code **)((longlong)&local_40 + lVar1) = FUN_144bc650c;
    *(int *)((longlong)local_60 + lVar1 + 0x18) = iVar8;
    *(undefined4 *)((longlong)local_60 + lVar1 + 0x10) = 0xfffffffe;
    *(undefined4 *)((longlong)local_60 + lVar1 + 8) = 0;
    *(undefined4 *)((longlong)local_60 + lVar1) = param_3;
    *(short **)((longlong)&local_68 + lVar1) = param_2;
    *(undefined4 *)((longlong)auStack_78 + lVar1 + 8) = 0x10;
    *(undefined4 *)((longlong)auStack_78 + lVar1) = param_5;
    *(undefined8 *)(auStack_98 + lVar1 + -8) = 0x144bc5d95;
    FUN_144bc672c(param_1,(float *)((longlong)local_28 + lVar1),iVar2,param_4);
  }
  uVar5 = local_28[0] ^ (ulonglong)local_28;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar7 + -8) = &UNK_144bc5da1;
  FUN_144d8e3a0(uVar5);
}



// FUNCTION 144bc5db8 FUN_144bc5db8 body=1661 status=ok
// SIG undefined FUN_144bc5db8(void)

void FUN_144bc5db8(int *param_1,int param_2,uint *param_3)

{
  int *_Dst;
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint local_res18;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = (longlong)*param_1 + (longlong)param_1;
  local_res18 = (uint)param_3;
  if (0x271f < param_2) {
    if (param_2 == 0x2728) {
      param_1[0x2c] = local_res18;
      FUN_144f3037c(lVar4,0x2728);
      goto LAB_144bc6425;
    }
    if (param_2 != 0x272a) {
      if (param_2 == 0x2afa) {
        if ((local_res18 - 1000 < 3) || (local_res18 == 0xfffffc18)) {
          param_1[0x22] = local_res18;
        }
        goto LAB_144bc6425;
      }
      if (param_2 == 0x2b0a) {
        if (local_res18 + 1 < 0x66) {
          param_1[0x23] = local_res18;
        }
        goto LAB_144bc6425;
      }
      if (param_2 != 0x2b0b) goto switchD_144bc5e2b_caseD_fb2;
      if (param_3 == (uint *)0x0) goto LAB_144bc6425;
      uVar1 = param_1[0x23];
      goto LAB_144bc5e77;
    }
    uVar3 = 0x272a;
    *(uint **)(param_1 + 0xdec) = param_3;
LAB_144bc637c:
    FUN_144f3037c(lVar4,uVar3);
    goto LAB_144bc6425;
  }
  if (param_2 == 0x271f) {
    if (param_3 == (uint *)0x0) goto LAB_144bc6425;
    uVar3 = 0x271f;
    goto LAB_144bc637c;
  }
  switch(param_2) {
  case 4000:
    if ((((local_res18 - 0x800 & 0xfffffffc) == 0) && (local_res18 != 0x802)) &&
       ((param_1[0xdeb] != 0 || (param_1[0x1b] == local_res18)))) {
      param_1[0x1b] = local_res18;
      param_1[0x30] = local_res18;
    }
    break;
  case 0xfa1:
    if (param_3 == (uint *)0x0) break;
    uVar1 = param_1[0x1b];
    goto LAB_144bc5e77;
  case 0xfa2:
    if ((local_res18 != 0xfffffc18) && (local_res18 != 0xffffffff)) {
      if ((int)local_res18 < 1) break;
      if ((int)local_res18 < 0x1f5) {
        local_res18 = 500;
      }
      else if (param_1[0x1c] * 300000 < (int)local_res18) {
        local_res18 = param_1[0x1c] * 300000;
      }
    }
    param_1[0x29] = local_res18;
    break;
  case 0xfa3:
    if (param_3 != (uint *)0x0) {
      uVar1 = FUN_144bc8ec4(param_1,param_1[0xde7],0x4fc);
      *param_3 = uVar1;
    }
    break;
  case 0xfa4:
    if (4 < local_res18 - 0x44d) break;
    param_1[0x21] = local_res18;
    goto LAB_144bc5f32;
  case 0xfa5:
    if (param_3 == (uint *)0x0) break;
    uVar1 = param_1[0x21];
    goto LAB_144bc5e77;
  case 0xfa6:
    if (local_res18 < 2) {
      param_1[0x25] = local_res18;
      param_1[0xf] = 1 - local_res18;
    }
    break;
  case 0xfa7:
    if (param_3 == (uint *)0x0) break;
    uVar1 = param_1[0x25];
    goto LAB_144bc5e77;
  case 0xfa8:
    if ((4 < local_res18 - 0x44d) && (local_res18 != 0xfffffc18)) break;
    param_1[0x20] = local_res18;
LAB_144bc5f32:
    if (local_res18 == 0x44d) {
      param_1[5] = 8000;
    }
    else {
      iVar2 = 16000;
      if (local_res18 == 0x44e) {
        iVar2 = 12000;
      }
      param_1[5] = iVar2;
    }
    break;
  case 0xfa9:
    if (param_3 == (uint *)0x0) break;
    uVar1 = param_1[0xde8];
    goto LAB_144bc5e77;
  case 0xfaa:
    if (10 < local_res18) break;
    param_1[0xb] = local_res18;
    uVar3 = 0xfaa;
    goto LAB_144bc5ff9;
  case 0xfab:
    if (param_3 == (uint *)0x0) break;
    uVar1 = param_1[0xb];
    goto LAB_144bc5e77;
  case 0xfac:
    if (local_res18 < 2) {
      param_1[0xc] = local_res18;
    }
    break;
  case 0xfad:
    if (param_3 == (uint *)0x0) break;
    uVar1 = param_1[0xc];
    goto LAB_144bc5e77;
  case 0xfae:
    if (100 < local_res18) break;
    param_1[10] = local_res18;
    uVar3 = 0xfae;
    goto LAB_144bc5ff9;
  case 0xfaf:
    if (param_3 == (uint *)0x0) break;
    uVar1 = param_1[10];
    goto LAB_144bc5e77;
  case 0xfb0:
    if (local_res18 < 2) {
      param_1[0x2e] = local_res18;
    }
    break;
  case 0xfb1:
    if (param_3 == (uint *)0x0) break;
    uVar1 = param_1[0x2e];
    goto LAB_144bc5e77;
  default:
switchD_144bc5e2b_caseD_fb2:
    break;
  case 0xfb4:
    if (local_res18 < 2) {
      param_1[0x26] = local_res18;
    }
    break;
  case 0xfb5:
    if (param_3 == (uint *)0x0) break;
    uVar1 = param_1[0x26];
    goto LAB_144bc5e77;
  case 0xfb6:
    if (((0 < (int)local_res18) && ((int)local_res18 <= param_1[0x1c])) ||
       (local_res18 == 0xfffffc18)) {
      param_1[0x1e] = local_res18;
    }
    break;
  case 0xfb7:
    if (param_3 == (uint *)0x0) break;
    uVar1 = param_1[0x1e];
    goto LAB_144bc5e77;
  case 0xfb8:
    if ((local_res18 == 0xfffffc18) || (local_res18 - 0xbb9 < 2)) {
      param_1[0x1f] = local_res18;
    }
    break;
  case 0xfb9:
    if (param_3 == (uint *)0x0) break;
    uVar1 = param_1[0x1f];
    goto LAB_144bc5e77;
  case 0xfbb:
    if (param_3 != (uint *)0x0) {
      iVar2 = param_1[0x24];
      *param_3 = iVar2 / 400;
      if (param_1[0x1b] != 0x803) {
        *param_3 = param_1[0x1d] + iVar2 / 400;
      }
    }
    break;
  case 0xfbc:
    iVar2 = param_1[1];
    FUN_144f37828(param_1 + 0x2f);
    _Dst = param_1 + 0xddc;
    memset(_Dst,0,(longlong)param_1 + (0x46e0 - (longlong)_Dst));
    FUN_144f3037c(lVar4,0xfbc);
    FUN_144f35bfc((longlong)iVar2 + (longlong)param_1,param_1[0x2d],local_a8);
    *_Dst = param_1[0x1c];
    param_1[0xdeb] = 1;
    *(undefined2 *)(param_1 + 0xddd) = 0x4000;
    param_1[0xddf] = 0x3f800000;
    param_1[0xde4] = 0x3e9;
    param_1[0xde8] = 0x451;
    iVar2 = FUN_144f39688(0x3c);
    param_1[0xdde] = iVar2 << 8;
    break;
  case 0xfbd:
    if (param_3 == (uint *)0x0) break;
    uVar1 = param_1[0x24];
    goto LAB_144bc5e77;
  case 0xfbf:
    if (param_3 == (uint *)0x0) break;
    uVar1 = param_1[0x11b7];
    goto LAB_144bc5e77;
  case 0xfc4:
    if (local_res18 - 8 < 0x11) {
      param_1[0x2a] = local_res18;
    }
    break;
  case 0xfc5:
    if (param_3 == (uint *)0x0) break;
    uVar1 = param_1[0x2a];
    goto LAB_144bc5e77;
  case 0xfc8:
    if (local_res18 - 5000 < 10) {
      param_1[0x27] = local_res18;
    }
    break;
  case 0xfc9:
    if (param_3 == (uint *)0x0) break;
    uVar1 = param_1[0x27];
    goto LAB_144bc5e77;
  case 0xfca:
    if (local_res18 < 2) {
      param_1[0x13] = local_res18;
    }
    break;
  case 0xfcb:
    if (param_3 == (uint *)0x0) break;
    uVar1 = param_1[0x13];
LAB_144bc5e77:
    *param_3 = uVar1;
    break;
  case 0xfce:
    if (1 < local_res18) break;
    uVar3 = 0xfce;
LAB_144bc5ff9:
    FUN_144f3037c(lVar4,uVar3);
    break;
  case 0xfcf:
    if (param_3 != (uint *)0x0) {
      FUN_144f3037c(lVar4,0xfcf);
    }
    break;
  case 0xfd1:
    if (param_3 != (uint *)0x0) {
      if ((param_1[0xe] == 0) || (param_1[0xde5] != 1000 && param_1[0xde5] != 0x3e9)) {
        if (param_1[0x2e] == 0) {
          *param_3 = 0;
          break;
        }
        iVar2 = param_1[0x11b4];
      }
      else {
        lVar4 = (longlong)param_1[1];
        iVar2 = *(int *)(lVar4 + 0x17d8 + (longlong)param_1);
        *param_3 = (uint)(9 < iVar2);
        if (((iVar2 < 10) || (param_1[3] != 2)) ||
           (*(int *)(lVar4 + 0x4f24 + (longlong)param_1) != 0)) break;
        iVar2 = *(int *)(lVar4 + 0x3f40 + (longlong)param_1);
      }
      *param_3 = (uint)(9 < iVar2);
    }
  }
LAB_144bc6425:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
}



// FUNCTION 144bc650c FUN_144bc650c body=236 status=ok
// SIG undefined FUN_144bc650c(void)

void FUN_144bc650c(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,int param_6
                  ,int param_7)

{
  short sVar1;
  longlong lVar2;
  short *psVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  float fVar9;
  
  lVar4 = (longlong)param_3;
  lVar6 = 0;
  if (0 < lVar4) {
    param_5 = param_4 * param_7 + param_5;
    lVar5 = lVar6;
    do {
      lVar2 = (longlong)param_5;
      param_5 = param_5 + param_7;
      *(float *)(param_2 + lVar5 * 4) = (float)(int)*(short *)(param_1 + lVar2 * 2);
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar4);
  }
  if (param_6 < 0) {
    if ((param_6 == -2) && (0 < lVar4)) {
      iVar7 = param_4 * param_7 + 1;
      do {
        if (1 < param_7) {
          fVar9 = *(float *)(param_2 + lVar6 * 4);
          uVar8 = (ulonglong)(param_7 - 1);
          psVar3 = (short *)(param_1 + (longlong)iVar7 * 2);
          do {
            sVar1 = *psVar3;
            psVar3 = psVar3 + 1;
            fVar9 = fVar9 + (float)(int)sVar1;
            *(float *)(param_2 + lVar6 * 4) = fVar9;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        iVar7 = iVar7 + param_7;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar4);
    }
  }
  else if (0 < lVar4) {
    param_6 = param_4 * param_7 + param_6;
    do {
      lVar5 = (longlong)param_6;
      param_6 = param_6 + param_7;
      *(float *)(param_2 + lVar6 * 4) =
           (float)(int)*(short *)(param_1 + lVar5 * 2) + *(float *)(param_2 + lVar6 * 4);
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar4);
  }
  return;
}



// FUNCTION 144bc65f8 FUN_144bc65f8 body=102 status=ok
// SIG undefined FUN_144bc65f8(void)

bool FUN_144bc65f8(float *param_1,int param_2,int param_3,byte param_4)

{
  float fVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = 0.0;
  fVar3 = 0.0;
  if (0 < param_2 * param_3) {
    uVar2 = (ulonglong)(uint)(param_2 * param_3);
    do {
      fVar1 = *param_1;
      if (fVar4 <= fVar1) {
        fVar4 = fVar1;
      }
      if (fVar1 <= fVar3) {
        fVar3 = fVar1;
      }
      param_1 = param_1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (fVar4 <= -fVar3) {
    fVar4 = -fVar3;
  }
  return fVar4 <= 1.0 / (float)(1 << (param_4 & 0x1f));
}



// FUNCTION 144bc6660 FUN_144bc6660 body=203 status=ok
// SIG undefined FUN_144bc6660(void)

int FUN_144bc6660(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 < param_3 / 400) {
    return -1;
  }
  if (param_2 != 5000) {
    if (8 < param_2 - 0x1389U) {
      return -1;
    }
    if (param_2 < 0x138e) {
      iVar2 = param_3 / 400 << ((byte)(param_2 - 0x1389U) & 0x1f);
    }
    else {
      iVar2 = ((param_2 + -0x138b) * param_3) / 0x32;
    }
    bVar1 = param_1 < iVar2;
    param_1 = iVar2;
    if (bVar1) {
      return -1;
    }
  }
  if ((((((param_1 * 400 != param_3) && (param_1 * 200 != param_3)) && (param_1 * 100 != param_3))
       && ((iVar2 = param_1 * 0x32, iVar2 != param_3 && (param_1 * 0x19 != param_3)))) &&
      ((iVar2 != param_3 * 3 && ((iVar2 != param_3 << 2 && (iVar2 != param_3 * 5)))))) &&
     (iVar2 != param_3 * 6)) {
    return -1;
  }
  return param_1;
}



// FUNCTION 144bc672c FUN_144bc672c body=8471 status=ok
// SIG undefined FUN_144bc672c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bc672c(int *param_1,undefined8 param_2,float param_3,byte *param_4,int param_5,
                  int param_6,undefined8 param_7,undefined4 param_8,int param_9,int param_10,
                  int param_11,undefined8 param_12,int param_13)

{
  void *pvVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  float *pfVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  int iVar15;
  int *piVar16;
  longlong lVar17;
  byte *_Src;
  uint uVar18;
  undefined2 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  uint uVar23;
  int iVar24;
  undefined4 *puVar25;
  longlong lVar26;
  void *pvVar27;
  undefined8 uVar28;
  size_t sVar29;
  longlong lVar30;
  ulonglong uVar31;
  byte *pbVar32;
  longlong lVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  float fVar37;
  double dVar38;
  undefined1 auVar39 [12];
  float fVar40;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [32];
  byte *local_2a8;
  longlong local_2a0;
  int local_298 [2];
  undefined8 local_290;
  int local_288 [4];
  undefined8 local_278;
  int *local_270;
  int local_268;
  int local_264;
  uint local_260;
  int iStack_25c;
  uint local_258;
  int local_254;
  uint local_250;
  longlong local_248;
  void *local_240;
  float local_238;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  byte *local_220;
  int local_218;
  uint local_214;
  int local_210;
  undefined2 *local_208;
  undefined8 local_200;
  longlong local_1f8;
  longlong local_1f0;
  int local_1e8;
  int local_1e4;
  undefined1 local_1e0 [24];
  int local_1c8;
  uint local_1c0;
  byte *local_1a8;
  int local_198 [5];
  float local_184;
  float local_180;
  float local_17c;
  int local_178;
  float local_174;
  undefined1 local_158 [112];
  int local_e8 [6];
  int local_d0 [2];
  ulonglong local_c8;
  
  local_c8 = DAT_14c707940 ^ (ulonglong)&local_268;
  local_260 = 0;
  local_22c = 0;
  local_254 = param_5;
  if (0x4fc < param_5) {
    local_254 = 0x4fc;
  }
  local_258 = 0;
  local_268 = 0;
  local_250 = 0;
  local_210 = 0;
  local_214 = 0;
  local_240 = (void *)CONCAT44(local_240._4_4_,0xffffffff);
  local_224 = -1;
  local_230 = 0;
  param_1[0x11b7] = 0;
  puVar22 = auStack_2c8;
  local_238 = param_3;
  local_220 = param_4;
  local_200 = param_2;
  if ((((int)param_3 < 1) || (puVar22 = auStack_2c8, local_254 < 1)) ||
     ((local_254 == 1 && (puVar22 = auStack_2c8, param_1[0x24] == (int)param_3 * 10))))
  goto LAB_144bc8834;
  local_1f8 = (longlong)param_1[1] + (longlong)param_1;
  local_248 = (longlong)*param_1 + (longlong)param_1;
  if (param_1[0x1b] == 0x803) {
    iStack_25c = 0;
  }
  else {
    iStack_25c = param_1[0x1d];
  }
  if (param_1[0x2a] <= param_6) {
    param_6 = param_1[0x2a];
  }
  uStack_2d0 = 0x144bc6867;
  local_264 = param_6;
  FUN_144f3037c(local_248,0x271f,&local_1f0);
  local_198[0] = 0;
  if ((param_1[0xb] < 7) || (iVar34 = param_1[0x24], iVar34 < 16000)) {
    if (param_1[0x778] != 0) {
      uStack_2d0 = 0x144bc69a3;
      FUN_144f37828(param_1 + 0x2f);
    }
LAB_144bc69a3:
    param_1[0x23] = -1;
  }
  else {
    uStack_2d0 = 0x144bc68a4;
    local_230 = FUN_144bc65f8(param_2,param_3,param_1[0x1c],param_6);
    local_240 = (void *)CONCAT44(local_240._4_4_,param_1[0x775]);
    local_224 = param_1[0x776];
    local_270 = local_198;
    local_278 = param_12;
    local_290._0_4_ = param_11;
    local_298[0] = param_10;
    local_2a0._0_4_ = param_9;
    local_2a8 = (byte *)CONCAT44(local_2a8._4_4_,param_3);
    uStack_2d0 = 0x144bc6910;
    local_288[0] = iVar34;
    local_288[2] = param_6;
    FUN_144f37c94(param_1 + 0x2f,local_1f0,param_7,param_8);
    if (local_230 == 0) {
      if (0.1 < local_174) {
        iVar34 = param_1[0x1c];
        uStack_2d0 = 0x144bc693e;
        fVar37 = (float)FUN_144f37488(param_2,param_2,(int)param_3 * iVar34);
        fVar40 = (float)param_1[0x11b5] * 0.999;
        if (fVar40 <= fVar37 / (float)((int)param_3 * iVar34)) {
          iVar34 = param_1[0x1c];
          uStack_2d0 = 0x144bc6973;
          fVar40 = (float)FUN_144f37488(param_2,param_2,(int)param_3 * iVar34);
          fVar40 = fVar40 / (float)((int)param_3 * iVar34);
        }
        param_1[0x11b5] = (int)fVar40;
      }
      goto LAB_144bc69a3;
    }
  }
  uVar18 = 0;
  param_1[0x11b3] = 0;
  iVar34 = 0x3ea;
  if (local_198[0] != 0) {
    if (param_1[0x1f] == -1000) {
      if ((param_1[0xde5] != 0) && (local_184 = local_180, param_1[0xde5] == 0x3ea)) {
        local_184 = local_17c;
      }
      uStack_2d0 = 0x144bc6a2e;
      dVar38 = floor((double)((1.0 - local_184) * 100.0) + 0.5);
      param_1[0x23] = (int)dVar38;
    }
    iVar4 = 0x44f;
    if (local_178 < 0xd) {
      param_1[0x11b3] = 0x44d;
    }
    else if (local_178 < 0xf) {
      param_1[0x11b3] = 0x44e;
    }
    else {
      if (0x10 < local_178) {
        iVar4 = (0x12 < local_178) + 0x450;
      }
      param_1[0x11b3] = iVar4;
    }
  }
  if ((param_1[0x1c] == 2) && (param_1[0x1e] != 1)) {
    uStack_2d0 = 0x144bc6aaf;
    fVar37 = (float)FUN_144bc8f28(local_200,param_3,param_1[0x24],param_1 + 0xdee);
  }
  else {
    fVar37 = 0.0;
  }
  iVar35 = local_254;
  uStack_2d0 = 0x144bc6ac9;
  iVar4 = FUN_144bc8ec4(param_1,param_3,local_254);
  param_1[0x28] = iVar4;
  uVar14 = (longlong)param_1[0x24] / (longlong)(int)param_3;
  iVar6 = (int)uVar14;
  uVar14 = uVar14 & 0xffffffff;
  if (param_1[0x25] == 0) {
    iVar24 = (param_1[0x24] * 0xc) / (int)param_3;
    local_254 = (iVar24 / 2 + ((int)((iVar4 * 0xc >> 0x1f & 7U) + iVar4 * 0xc) >> 3)) / iVar24;
    if (iVar35 <= local_254) {
      local_254 = iVar35;
    }
    iVar4 = (local_254 * iVar24 * 8) / 0xc;
    param_1[0x28] = iVar4;
    iVar35 = local_254;
    if (local_254 < 1) {
      iVar35 = 1;
      local_254 = 1;
    }
  }
  local_228 = iVar6;
  if (((iVar35 < 3) || (iVar4 < iVar6 * 0x18)) ||
     ((iVar6 < 0x32 && ((iVar6 * iVar35 < 300 || (iVar4 < 0x960)))))) {
    iVar4 = param_1[0xde8];
    if (iVar4 == 0) {
      iVar4 = 0x44d;
    }
    bVar2 = 0;
    iVar35 = param_1[0xde4];
    if (param_1[0xde4] == 0) {
      iVar35 = 1000;
    }
    if (100 < iVar6) {
      iVar35 = iVar34;
    }
    uVar23 = 0;
    if (iVar6 == 0x19) {
      if (iVar35 != 1000) {
        uVar14 = 0x32;
        uVar23 = 1;
        goto LAB_144bc8760;
      }
LAB_144bc87a3:
      if (0x44f < iVar4) {
        iVar4 = 0x44f;
      }
    }
    else {
LAB_144bc8760:
      uVar18 = uVar23;
      iVar34 = (int)uVar14;
      bVar2 = 0;
      if (iVar34 < 0x11) {
        if ((param_5 == 1) || ((iVar35 == 1000 && (iVar34 != 10)))) {
          iVar35 = 1000;
          uVar23 = 0x10;
          if (iVar34 == 0xc) {
            uVar23 = 0x19;
          }
          uVar18 = (uint)(iVar34 < 0xd);
          uVar14 = (ulonglong)uVar23;
          bVar2 = 0;
        }
        else {
          uVar18 = 3;
          uVar14 = 0x32;
          bVar2 = (byte)(0x32 / (longlong)iVar34);
        }
      }
      if (iVar35 == 1000) goto LAB_144bc87a3;
      if (iVar35 == 0x3ea) {
        if (iVar4 == 0x44e) {
          iVar4 = 0x44d;
        }
      }
      else if ((iVar35 == 0x3e9) && (iVar4 < 0x451)) {
        iVar4 = 0x450;
      }
    }
    uStack_2d0 = 0x144bc87e6;
    bVar3 = FUN_144bc8890(iVar35,uVar14,iVar4,param_1[0xddc]);
    *local_220 = bVar3 | (byte)uVar18;
    iVar4 = (1 < uVar18) + 1;
    iVar34 = iVar4;
    if (iVar4 < local_254) {
      iVar34 = local_254;
    }
    if (uVar18 == 3) {
      local_220[1] = bVar2;
    }
    puVar22 = auStack_2c8;
    if (param_1[0x25] == 0) {
      uStack_2d0 = 0x144bc8823;
      FUN_144f36eac(local_220,iVar4,iVar34);
      puVar22 = auStack_2c8;
    }
    goto LAB_144bc8834;
  }
  iVar24 = param_1[0x1c];
  local_218 = iVar6 * iVar35 * 8;
  local_298[0] = param_1[10];
  local_2a0._0_4_ = param_1[0xb];
  local_2a8 = (byte *)((ulonglong)local_2a8 & 0xffffffff00000000);
  uStack_2d0 = 0x144bc6bc7;
  iVar4 = FUN_144bc941c(iVar4,iVar24,uVar14);
  if (param_1[0x1f] == 0xbb9) {
    uVar18 = 0x7f;
  }
  else if (param_1[0x1f] != 0xbba) {
    if (param_1[0x23] < 0) {
      uVar18 = 0x30;
      if (param_1[0x1b] == 0x800) {
        uVar18 = 0x73;
      }
    }
    else {
      uVar23 = param_1[0x23] * 0x147 >> 8;
      uVar18 = uVar23;
      if ((param_1[0x1b] == 0x801) && (uVar18 = 0x73, (int)uVar23 < 0x73)) {
        uVar18 = uVar23;
      }
    }
  }
  iVar5 = param_1[0x1e];
  if (((iVar5 == -1000) || (iVar24 != 2)) && (iVar5 = iVar24, iVar24 == 2)) {
    iVar24 = 16000;
    if (param_1[0xddc] != 2) {
      iVar24 = 18000;
    }
    iVar5 = (((int)(uVar18 * uVar18 * 2000) >> 0xe) + iVar24 < iVar4) + 1;
  }
  param_1[0xddc] = iVar5;
  iVar4 = param_1[0x24];
  iVar24 = param_1[10];
  local_2a0._0_4_ = param_1[0xb];
  local_2a8 = (byte *)((ulonglong)local_2a8 & 0xffffffff00000000);
  uStack_2d0 = 0x144bc6cc3;
  local_298[0] = iVar24;
  iVar5 = FUN_144bc941c(param_1[0x28],iVar5,(longlong)iVar4 / (longlong)(int)param_3 & 0xffffffff,
                        param_1[0x25]);
  if (((param_1[0x2e] == 0) || (local_198[0] != 0)) || (local_230 != 0)) {
    iVar15 = 0;
  }
  else {
    iVar15 = 1;
  }
  param_1[0xe] = iVar15;
  if (param_1[0x1b] == 0x803) {
LAB_144bc6e16:
    param_1[0xde4] = 0x3ea;
    iVar9 = iVar34;
  }
  else {
    iVar9 = param_1[0x22];
    if (iVar9 == -1000) {
      iVar9 = (int)(fVar37 * 10000.0 + (1.0 - fVar37) * 10000.0);
      iVar9 = ((int)(((int)((1.0 - fVar37) * 64000.0 + fVar37 * 44000.0) - iVar9) * uVar18 * uVar18)
              >> 0xe) + iVar9;
      iVar10 = iVar9 + 8000;
      if (param_1[0x1b] != 0x800) {
        iVar10 = iVar9;
      }
      if (param_1[0xde5] == 0x3ea) {
        iVar10 = iVar10 + -4000;
      }
      else if (0 < param_1[0xde5]) {
        iVar10 = iVar10 + 4000;
      }
      iVar9 = 1000;
      if (iVar10 <= iVar5) {
        iVar9 = iVar34;
      }
      param_1[0xde4] = iVar9;
      if ((param_1[0xc] != 0) && ((int)(0x80 - uVar18) >> 4 < iVar24)) {
        param_1[0xde4] = 1000;
        iVar9 = 1000;
      }
      if ((iVar15 != 0) && (100 < (int)uVar18)) {
        param_1[0xde4] = 1000;
        iVar9 = 1000;
      }
      iVar24 = 6000;
      if (0x32 < iVar6) {
        iVar24 = 9000;
      }
      if (iVar35 < (iVar24 * (int)param_3) / (iVar4 << 3)) {
        param_1[0xde4] = 0x3ea;
        iVar9 = iVar34;
      }
    }
    else {
      param_1[0xde4] = iVar9;
    }
    if ((iVar9 != 0x3ea) && ((int)param_3 < iVar4 / 100)) goto LAB_144bc6e16;
  }
  iVar35 = 0;
  if (param_1[0x2c] != 0) {
    param_1[0xde4] = 0x3ea;
    iVar9 = iVar34;
  }
  iVar34 = param_1[0xde5];
  iVar6 = iVar9;
  if (0 < iVar34) {
    if (iVar9 == 0x3ea) {
LAB_144bc6e52:
      iVar6 = 0x3ea;
      if (iVar34 == 0x3ea) goto LAB_144bc6ea8;
    }
    else if (iVar34 != 0x3ea) {
      if (iVar9 != 0x3ea) goto LAB_144bc6ea8;
      goto LAB_144bc6e52;
    }
    local_250 = (uint)(iVar9 != 0x3ea);
    local_258 = 1;
    iVar6 = iVar9;
    if (iVar9 == 0x3ea) {
      if ((int)param_3 < iVar4 / 100) {
        local_258 = 0;
        iVar6 = 0x3ea;
      }
      else {
        param_1[0xde4] = iVar34;
        local_210 = 1;
        iVar6 = iVar34;
      }
    }
  }
LAB_144bc6ea8:
  if ((((param_1[0xddc] == 1) && (param_1[0xde6] == 2)) && (param_1[0x11] == 0)) &&
     ((iVar6 != 0x3ea && (iVar34 != 0x3ea)))) {
    param_1[0xddc] = 2;
    iVar35 = 1;
  }
  param_1[0x11] = iVar35;
  iVar34 = param_1[0xde4];
  local_298[0] = param_1[10];
  local_2a0._0_4_ = param_1[0xb];
  local_2a8 = (byte *)CONCAT44(local_2a8._4_4_,iVar34);
  uStack_2d0 = 0x144bc6f1e;
  iVar4 = FUN_144bc941c(param_1[0x28],param_1[0xddc],
                        (longlong)param_1[0x24] / (longlong)(int)param_3 & 0xffffffff,param_1[0x25])
  ;
  local_1e4 = iVar4;
  if (iVar34 == 0x3ea) {
LAB_144bc6f6d:
    iVar34 = 0x451;
    if ((param_1[0x1c] == 2) && (param_1[0x1e] != 1)) {
      piVar16 = &DAT_14997e788;
      puVar25 = &DAT_14997e7a8;
    }
    else {
      piVar16 = &DAT_14997e748;
      puVar25 = &DAT_14997e768;
    }
    lVar26 = (longlong)puVar25 - (longlong)piVar16;
    lVar30 = (longlong)local_e8 - (longlong)piVar16;
    lVar33 = 8;
    do {
      *(int *)(lVar30 + (longlong)piVar16) =
           ((int)((*piVar16 - *(int *)(lVar26 + (longlong)piVar16)) * uVar18 * uVar18) >> 0xe) +
           *(int *)(lVar26 + (longlong)piVar16);
      piVar16 = piVar16 + 1;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    piVar16 = local_d0 + 1;
    lVar26 = 0x451;
    do {
      iVar35 = piVar16[-1];
      if (param_1[0xdeb] == 0) {
        if (param_1[0xde9] < iVar34) {
          iVar35 = iVar35 + *piVar16;
        }
        else {
          iVar35 = iVar35 - *piVar16;
        }
      }
      if (iVar35 <= iVar4) break;
      iVar34 = iVar34 + -1;
      lVar26 = lVar26 + -1;
      piVar16 = piVar16 + -2;
    } while (0x44d < lVar26);
    if (iVar34 == 0x44e) {
      iVar34 = 0x44f;
    }
    param_1[0xde9] = iVar34;
    param_1[0xde8] = iVar34;
    if (((param_1[0xdeb] == 0) && (param_1[0xde4] != 0x3ea)) && (param_1[0x16] == 0)) {
      if (0x44f < iVar34) {
        iVar34 = 0x44f;
      }
      param_1[0xde8] = iVar34;
    }
  }
  else {
    if (param_1[0xde5] == 0x3ea) {
      uStack_2d0 = 0x144bc6f4a;
      FUN_144f35bfc(local_1f8,param_1[0x2d],local_158);
      iVar34 = param_1[0xde4];
      local_22c = 1;
    }
    if (((iVar34 == 0x3ea) || (param_1[0xdeb] != 0)) || (param_1[0x15] != 0)) goto LAB_144bc6f6d;
  }
  iVar34 = param_1[0x21];
  pbVar32 = (byte *)(param_1 + 0xde8);
  iVar35 = *(int *)pbVar32;
  if (iVar34 < *(int *)pbVar32) {
    *(int *)pbVar32 = iVar34;
    iVar35 = iVar34;
  }
  iVar34 = param_1[0x20];
  if (iVar34 != -1000) {
    *(int *)pbVar32 = iVar34;
    iVar35 = iVar34;
  }
  iVar6 = param_1[0xde4];
  iVar24 = iVar35;
  if ((iVar6 != 0x3ea) && (local_218 < 15000)) {
    iVar24 = 0x44f;
    if (iVar35 < 0x44f) {
      iVar24 = iVar35;
    }
    *(int *)pbVar32 = iVar24;
  }
  iVar35 = param_1[0x24];
  if ((iVar35 < 0x5dc1) && (0x450 < iVar24)) {
    pbVar32[0] = 0x50;
    pbVar32[1] = 4;
    pbVar32[2] = 0;
    pbVar32[3] = 0;
    iVar24 = 0x450;
  }
  if ((iVar35 < 0x3e81) && (0x44f < iVar24)) {
    pbVar32[0] = 0x4f;
    pbVar32[1] = 4;
    pbVar32[2] = 0;
    pbVar32[3] = 0;
    iVar24 = 0x44f;
  }
  if ((iVar35 < 0x2ee1) && (0x44e < iVar24)) {
    pbVar32[0] = 0x4e;
    pbVar32[1] = 4;
    pbVar32[2] = 0;
    pbVar32[3] = 0;
    iVar24 = 0x44e;
  }
  if ((iVar35 < 0x1f41) && (0x44d < iVar24)) {
    pbVar32[0] = 0x4d;
    pbVar32[1] = 4;
    pbVar32[2] = 0;
    pbVar32[3] = 0;
  }
  iVar35 = param_1[0x11b3];
  if ((iVar35 != 0) && (iVar34 == -1000)) {
    iVar34 = param_1[0xddc];
    if ((iVar34 * 18000 < iVar4) || (iVar6 != 0x3ea)) {
      if ((iVar34 * 24000 < iVar4) || (iVar6 != 0x3ea)) {
        if (iVar34 * 30000 < iVar4) {
          iVar34 = (iVar34 * 44000 < iVar4) + 0x450;
        }
        else {
          iVar34 = 0x44f;
        }
      }
      else {
        iVar34 = 0x44e;
      }
    }
    else {
      iVar34 = 0x44d;
    }
    if (iVar35 <= iVar34) {
      iVar35 = iVar34;
    }
    param_1[0x11b3] = iVar35;
    iVar34 = *(int *)pbVar32;
    if (iVar35 <= *(int *)pbVar32) {
      iVar34 = iVar35;
    }
    *(int *)pbVar32 = iVar34;
  }
  uStack_2d0 = 0x144bc71a1;
  local_2a8 = pbVar32;
  local_2a0._0_4_ = iVar4;
  iVar34 = FUN_144bc924c(param_1[0xc],param_1[10],param_1[0xd]);
  iVar4 = local_264;
  param_1[0xd] = iVar34;
  uStack_2d0 = 0x144bc71b8;
  FUN_144f3037c(local_248,0xfc4,local_264);
  iVar34 = param_1[0xde4];
  if ((iVar34 == 0x3ea) && (*(int *)pbVar32 == 0x44e)) {
    pbVar32[0] = 0x4f;
    pbVar32[1] = 4;
    pbVar32[2] = 0;
    pbVar32[3] = 0;
  }
  if (param_1[0x2c] == 0) {
    iVar35 = param_1[0xde8];
  }
  else {
    iVar35 = 0x44d;
    pbVar32[0] = 0x4d;
    pbVar32[1] = 4;
    pbVar32[2] = 0;
    pbVar32[3] = 0;
  }
  if ((iVar34 == 1000) && (iVar34 = 1000, 0x44f < iVar35)) {
    param_1[0xde4] = 0x3e9;
    iVar34 = 0x3e9;
  }
  if ((iVar34 == 0x3e9) && (iVar34 = 0x3e9, iVar35 < 0x450)) {
    param_1[0xde4] = 1000;
    iVar34 = 1000;
  }
  iVar6 = param_1[0x24];
  iVar24 = iVar6 / 0x32;
  local_264 = iVar35;
  if (((int)param_3 <= iVar24) || (iVar34 == 1000)) {
    iVar5 = (iVar6 * 3) / 0x32;
    if ((int)param_3 <= iVar5) {
      if (param_1[0xdea] != 0) {
        param_1[0xdea] = 0;
        local_258 = 1;
        local_250 = 1;
        local_22c = 2;
      }
      uVar18 = 0;
      if (iVar34 != 0x3ea) {
        uVar18 = local_258;
      }
      uVar23 = 0;
      if (uVar18 != 0) {
        uStack_2d0 = 0x144bc7375;
        local_258 = uVar18;
        local_268 = FUN_144bc97b8(local_254,param_1[0x28],local_228,param_1[0xddc]);
        uVar23 = -(uint)(local_268 != 0) & uVar18;
      }
      iVar4 = ((int)param_3 * param_1[0x28]) / (iVar6 << 3);
      iVar34 = local_254 - local_268;
      if (iVar4 <= local_254 - local_268) {
        iVar34 = iVar4;
      }
      local_220 = local_220 + 1;
      uStack_2d0 = 0x144bc73c9;
      local_258 = uVar23;
      local_1a8 = local_220;
      FUN_144f35550(local_1e0,local_220,local_254 + -1);
      uVar11 = (longlong)((iStack_25c + (int)param_3) * param_1[0x1c]) * 4;
      uVar14 = uVar11 + 0xf;
      if (uVar14 <= uVar11) {
        uVar14 = 0xffffffffffffff0;
      }
      uStack_2d0 = 0x144bc73fa;
      lVar26 = -(uVar14 & 0xfffffffffffffff0);
      puVar21 = auStack_2c8 + lVar26;
      iVar6 = param_1[0x1c] * iStack_25c;
      iVar24 = param_1[0x2b] - iStack_25c;
      iVar4 = param_1[0x1c];
      local_240 = (void *)((longlong)&local_268 + lVar26);
      *(undefined8 *)(auStack_2c8 + lVar26 + -8) = 0x144bc7430;
      memcpy((void *)((longlong)&local_268 + lVar26),param_1 + (longlong)(iVar24 * iVar4) + 0xdf3,
             (longlong)iVar6 << 2);
      if (param_1[0xde4] == 0x3ea) {
        *(undefined8 *)(auStack_2c8 + lVar26 + -8) = 0x144bc7446;
        iVar4 = FUN_144f39688(0x3c);
        iVar4 = iVar4 << 8;
      }
      else {
        iVar4 = *(int *)(local_1f8 + 8);
      }
      iVar4 = (int)((ulonglong)((longlong)(iVar4 - param_1[0xdde]) * 0x3d7) >> 0x10) +
              param_1[0xdde];
      param_1[0xdde] = iVar4;
      *(undefined8 *)(auStack_2c8 + lVar26 + -8) = 0x144bc7477;
      uVar7 = FUN_144f396e4(iVar4 >> 8);
      uVar28 = local_200;
      iVar4 = param_1[0x1c];
      iVar6 = param_1[0x24];
      pvVar27 = (void *)((longlong)local_240 + (longlong)(iVar4 * iStack_25c) * 4);
      if (param_1[0x1b] == 0x800) {
        *(int *)((longlong)&local_290 + lVar26) = param_1[0x2d];
        uVar28 = local_200;
        *(int *)((longlong)local_298 + lVar26) = iVar6;
        *(int *)((longlong)&local_2a0 + lVar26) = iVar4;
        *(float *)((longlong)&local_2a8 + lVar26) = param_3;
        *(undefined8 *)(auStack_2c8 + lVar26 + -8) = 0x144bc74cb;
        FUN_144bc8a24(uVar28,uVar7);
      }
      else {
        *(int *)((longlong)local_298 + lVar26) = iVar6;
        *(int *)((longlong)&local_2a0 + lVar26) = iVar4;
        *(float *)((longlong)&local_2a8 + lVar26) = param_3;
        *(undefined8 *)(auStack_2c8 + lVar26 + -8) = 0x144bc74ea;
        FUN_144bc8b24(uVar28,3,pvVar27,param_1 + 0xde0);
      }
      if (param_13 != 0) {
        iVar4 = param_1[0x1c];
        pvVar27 = (void *)((longlong)local_240 + (longlong)(iVar4 * iStack_25c) * 4);
        *(undefined8 *)(auStack_2c8 + lVar26 + -8) = 0x144bc7514;
        fVar37 = (float)FUN_144f37488(pvVar27,pvVar27,iVar4 * (int)param_3);
        if ((1e+09 <= fVar37) || (NAN(fVar37))) {
          iVar4 = param_1[0x1c];
          pvVar27 = (void *)((longlong)local_240 + (longlong)(iVar4 * iStack_25c) * 4);
          *(undefined8 *)(auStack_2c8 + lVar26 + -8) = 0x144bc754e;
          memset(pvVar27,0,(longlong)(iVar4 * (int)param_3) << 2);
          param_1[0xde3] = 0;
          param_1[0xde2] = 0;
          param_1[0xde1] = 0;
          param_1[0xde0] = 0;
        }
      }
      iVar4 = param_1[0xde4];
      fVar37 = 1.0;
      if (iVar4 == 0x3ea) {
LAB_144bc7c88:
        lVar26 = local_248;
        uVar28 = 0x15;
        if (local_264 == 0x44d) {
          uVar28 = 0xd;
        }
        else if (0x44d < local_264) {
          if (local_264 < 0x450) {
            uVar28 = 0x11;
          }
          else if (local_264 == 0x450) {
            uVar28 = 0x13;
          }
        }
        *(undefined8 *)(puVar21 + -8) = 0x144bc7cd1;
        FUN_144f3037c(lVar26,0x271c,uVar28);
        iVar34 = param_1[0xddc];
        *(undefined8 *)(puVar21 + -8) = 0x144bc7ce5;
        FUN_144f3037c(lVar26,0x2718,iVar34);
        *(undefined8 *)(puVar21 + -8) = 0x144bc7cf6;
        FUN_144f3037c(lVar26,0xfa2,0xffffffff);
        if (param_1[0xde4] != 1000) {
          fVar40 = 2.0;
          *(undefined8 *)(puVar21 + -8) = 0x144bc7d1b;
          FUN_144f3037c(lVar26,0xfa6,0);
          if (param_1[0x13] != 0) {
            fVar40 = 0.0;
          }
          *(undefined8 *)(puVar21 + -8) = 0x144bc7d37;
          FUN_144f3037c(lVar26,0x2712,(int)fVar40);
          if (param_1[0x25] != 0) {
            if (param_1[0xde4] == 0x3e9) {
              iVar34 = param_1[0x28];
              iVar4 = param_1[9];
              *(undefined8 *)(puVar21 + -8) = 0x144bc7d61;
              FUN_144f3037c(lVar26,0xfa2,iVar34 - iVar4);
              *(undefined8 *)(puVar21 + -8) = 0x144bc7d71;
              FUN_144f3037c(lVar26,0xfb4,0);
            }
            else {
              *(undefined8 *)(puVar21 + -8) = 0x144bc7d83;
              FUN_144f3037c(lVar26,0xfa6,1);
              iVar34 = param_1[0x26];
              *(undefined8 *)(puVar21 + -8) = 0x144bc7d97;
              FUN_144f3037c(lVar26,0xfb4,iVar34);
              iVar34 = param_1[0x28];
              *(undefined8 *)(puVar21 + -8) = 0x144bc7dab;
              FUN_144f3037c(lVar26,0xfa2,iVar34);
            }
          }
        }
        iVar34 = param_1[0x1c];
        iVar4 = param_1[0x24];
        sVar29 = (longlong)((iVar34 * iVar4) / 400) * 4;
        uVar14 = sVar29 + 0xf;
        if (uVar14 <= sVar29) {
          uVar14 = 0xffffffffffffff0;
        }
        *(undefined8 *)(puVar21 + -8) = 0x144bc7def;
        lVar26 = -(uVar14 & 0xfffffffffffffff0);
        puVar20 = puVar21 + lVar26;
        if (((param_1[0xde4] != 1000) && (param_1[0xde4] != param_1[0xde5])) && (0 < param_1[0xde5])
           ) {
          iVar4 = (param_1[0x2b] - iVar4 / 400) - iStack_25c;
          *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc7e47;
          memcpy(puVar21 + lVar26 + 0x60,param_1 + (longlong)(iVar4 * iVar34) + 0xdf3,sVar29);
          iVar34 = param_1[0x1c];
        }
        iVar4 = param_1[0x2b];
        piVar16 = param_1 + 0xdf3;
        iVar35 = ((iVar4 - iStack_25c) - (int)param_3) * iVar34;
        if (iVar35 < 1) {
          iVar35 = iVar4 * iVar34;
          pvVar27 = (void *)((longlong)local_240 +
                            (longlong)(((int)param_3 + (iStack_25c - iVar4)) * iVar34) * 4);
        }
        else {
          *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc7e8a;
          memmove(piVar16,param_1 + (longlong)(iVar34 * (int)param_3) + 0xdf3,(longlong)iVar35 << 2)
          ;
          iVar35 = (iStack_25c + (int)param_3) * param_1[0x1c];
          piVar16 = param_1 + (longlong)
                              (((param_1[0x2b] - iStack_25c) - (int)param_3) * param_1[0x1c]) +
                              0xdf3;
          pvVar27 = local_240;
        }
        pvVar1 = local_240;
        *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc7ee4;
        memcpy(piVar16,pvVar27,(longlong)iVar35 << 2);
        lVar30 = local_1f0;
        if (((float)param_1[0xddf] < 1.0) || (fVar37 < 1.0)) {
          *(int *)(puVar21 + lVar26 + 0x40) = param_1[0x24];
          *(undefined8 *)(puVar21 + lVar26 + 0x38) = *(undefined8 *)(lVar30 + 0x48);
          *(int *)(puVar21 + lVar26 + 0x30) = param_1[0x1c];
          uVar7 = *(undefined4 *)(lVar30 + 4);
          *(float *)(puVar21 + lVar26 + 0x28) = param_3;
          *(undefined4 *)(puVar21 + lVar26 + 0x20) = uVar7;
          *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc7f31;
          FUN_144bc8d80(pvVar1,pvVar1);
        }
        iVar34 = param_1[0xde4];
        param_1[0xddf] = (int)fVar37;
        if ((iVar34 != 0x3e9) || (param_1[0xddc] == 1)) {
          if (local_1e4 < 0x7d01) {
            if (local_1e4 < 16000) {
              param_1[0x17] = 0;
            }
            else {
              param_1[0x17] = ((local_1e4 + -32000) * 0x800) / (local_1e4 + -14000) + 0x4000;
            }
          }
          else {
            param_1[0x17] = 0x4000;
          }
        }
        if (((*(longlong *)(param_1 + 0xdec) == 0) && (param_1[0x1c] == 2)) &&
           ((iVar4 = param_1[0xddd], (short)iVar4 < 0x4000 || (param_1[0x17] < 0x4000)))) {
          iVar34 = param_1[0x17];
          *(int *)(puVar21 + lVar26 + 0x40) = param_1[0x24];
          *(undefined8 *)(puVar21 + lVar26 + 0x38) = *(undefined8 *)(local_1f0 + 0x48);
          uVar7 = *(undefined4 *)(local_1f0 + 4);
          *(undefined4 *)(puVar21 + lVar26 + 0x30) = 2;
          *(float *)(puVar21 + lVar26 + 0x28) = param_3;
          *(undefined4 *)(puVar21 + lVar26 + 0x20) = uVar7;
          *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc8019;
          FUN_144bc8c48(pvVar1,pvVar1,(float)(int)(short)iVar4 * 6.1035156e-05,
                        (float)iVar34 * 6.1035156e-05);
          iVar34 = param_1[0xde4];
          *(short *)(param_1 + 0xddd) = (short)param_1[0x17];
        }
        iVar4 = local_254;
        if (iVar34 == 0x3ea) {
LAB_144bc8122:
          uVar23 = 0;
          local_258 = 0;
LAB_144bc812a:
          if (uVar23 == 0) goto LAB_144bc812e;
        }
        else {
          iVar35 = 0x1f;
          if (local_1c0 != 0) {
            for (; local_1c0 >> iVar35 == 0; iVar35 = iVar35 + -1) {
            }
          }
          iVar6 = 0;
          if (iVar34 == 0x3e9) {
            iVar6 = 0x14;
          }
          if (local_254 * 8 + -8 < (iVar6 - iVar35) + local_1c8 + 0x10) goto LAB_144bc8122;
          if (iVar34 == 0x3e9) {
            *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc8088;
            FUN_144f35680(local_1e0,uVar23,0xc);
            iVar34 = param_1[0xde4];
          }
          uVar18 = local_250;
          if (uVar23 != 0) {
            *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc80ab;
            FUN_144f35680(local_1e0,uVar18,1);
            iVar35 = 0x1f;
            if (local_1c0 != 0) {
              for (; local_1c0 >> iVar35 == 0; iVar35 = iVar35 + -1) {
              }
            }
            iVar34 = param_1[0xde4];
            if (iVar34 == 0x3e9) {
              iVar35 = (local_1c8 - iVar35) + 0x11;
            }
            else {
              iVar35 = (local_1c8 - iVar35) + 6;
            }
            iVar35 = iVar4 - (iVar35 >> 3);
            if (iVar35 <= local_268) {
              local_268 = iVar35 + -1;
            }
            if (local_268 < 2) {
              local_268 = 2;
            }
            if (0x101 < local_268) {
              local_268 = 0x101;
            }
            if (iVar34 == 0x3e9) {
              iVar34 = local_268 + -2;
              *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc811a;
              FUN_144f35770(local_1e0,iVar34,0x100);
              iVar34 = param_1[0xde4];
            }
            goto LAB_144bc812a;
          }
LAB_144bc812e:
          param_1[0xdea] = 0;
          local_268 = 0;
        }
        if (iVar34 == 1000) {
          iVar4 = 0x1f;
          if (local_1c0 != 0) {
            for (; local_1c0 >> iVar4 == 0; iVar4 = iVar4 + -1) {
            }
          }
          uVar18 = (local_1c8 - iVar4) + 6 >> 3;
          local_260 = uVar18;
          *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc8175;
          FUN_144f359ec(local_1e0);
        }
        else {
          uVar18 = (iVar4 - local_268) - 1;
          *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc8189;
          FUN_144f35988(local_1e0,uVar18);
        }
        lVar30 = local_248;
        uVar23 = local_258;
        if ((local_258 != 0) || (param_1[0xde4] != 1000)) {
          *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc81b3;
          FUN_144f3037c(lVar30,0x2726,local_198);
        }
        lVar30 = local_248;
        if (param_1[0xde4] == 0x3e9) {
          local_208 = *(undefined2 **)(param_1 + 0x19);
          *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc81da;
          FUN_144f3037c(lVar30,0x272c,&local_208);
        }
        lVar30 = local_248;
        if ((uVar23 != 0) && (local_250 != 0)) {
          *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc81fe;
          FUN_144f3037c(lVar30,0x271a,0);
          lVar30 = local_248;
          *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc820f;
          FUN_144f3037c(lVar30,0xfa6,0);
          lVar30 = local_248;
          *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc8221;
          FUN_144f3037c(lVar30,0xfa2,0xffffffff);
          iVar35 = local_268;
          iVar4 = param_1[0x24];
          *(undefined8 *)(puVar21 + lVar26 + 0x28) = 0;
          lVar30 = local_248;
          *(int *)(puVar21 + lVar26 + 0x20) = iVar35;
          pvVar27 = local_240;
          pbVar32 = local_220 + (int)uVar18;
          *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc825c;
          iVar4 = FUN_144f306e4(lVar30,pvVar27,iVar4 / 200,pbVar32);
          lVar30 = local_248;
          puVar22 = puVar21 + lVar26;
          if (iVar4 < 0) goto LAB_144bc8834;
          *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc8276;
          FUN_144f3037c(lVar30,0xfbf,&local_214);
          lVar30 = local_248;
          *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc8284;
          FUN_144f3037c(lVar30,0xfbc);
        }
        lVar30 = local_248;
        *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc8298;
        FUN_144f3037c(lVar30,0x271a,-(iVar34 != 0x3ea) & 0x11);
        uVar36 = local_250;
        if (param_1[0xde4] == 1000) {
LAB_144bc83e5:
          lVar30 = local_248;
          iVar34 = local_268;
          if ((uVar23 != 0) && (uVar36 == 0)) {
            iVar4 = param_1[0x24] / 200;
            iVar34 = param_1[0x24] / 400;
            *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc8437;
            FUN_144f3037c(lVar30,0xfbc);
            lVar30 = local_248;
            *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc8448;
            FUN_144f3037c(lVar30,0x271a,0);
            lVar30 = local_248;
            *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc8459;
            FUN_144f3037c(lVar30,0x2712,0);
            lVar30 = local_248;
            *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc846a;
            FUN_144f3037c(lVar30,0xfa6,0);
            lVar30 = local_248;
            *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc847c;
            FUN_144f3037c(lVar30,0xfa2,0xffffffff);
            uVar36 = local_260;
            if (param_1[0xde4] == 0x3e9) {
              *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc8496;
              FUN_144f35988(local_1e0,uVar36);
              uVar18 = uVar36;
            }
            *(undefined8 *)(puVar21 + lVar26 + 0x28) = 0;
            lVar30 = local_248;
            pvVar27 = (void *)((longlong)((((int)param_3 - iVar34) - iVar4) * param_1[0x1c]) * 4 +
                              (longlong)local_240);
            *(undefined4 *)(puVar21 + lVar26 + 0x20) = 2;
            *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc84d2;
            FUN_144f306e4(lVar30,pvVar27,iVar34,&iStack_25c);
            *(undefined8 *)(puVar21 + lVar26 + 0x28) = 0;
            iVar34 = local_268;
            iVar35 = param_1[0x1c];
            pbVar32 = local_220 + (int)uVar18;
            *(int *)(puVar21 + lVar26 + 0x20) = local_268;
            pvVar27 = (void *)((longlong)(((int)param_3 - iVar4) * iVar35) * 4 + (longlong)local_240
                              );
            *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc850a;
            iVar4 = FUN_144f306e4(lVar30,pvVar27,iVar4,pbVar32);
            puVar22 = puVar21 + lVar26;
            if (iVar4 < 0) goto LAB_144bc8834;
            *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc8523;
            FUN_144f3037c(lVar30,0xfbf,&local_214);
          }
        }
        else {
          if ((param_1[0xde4] != param_1[0xde5]) && (0 < param_1[0xde5])) {
            *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc82c5;
            FUN_144f3037c(lVar30,0xfbc);
            *(undefined8 *)(puVar21 + lVar26 + 0x28) = 0;
            iVar34 = param_1[0x24];
            *(undefined4 *)(puVar21 + lVar26 + 0x20) = 2;
            *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc82fb;
            FUN_144f306e4(lVar30,puVar21 + lVar26 + 0x60,iVar34 / 400,&iStack_25c);
            *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc830b;
            FUN_144f3037c(lVar30,0x2712,0);
          }
          uVar36 = local_250;
          iVar34 = 0x1f;
          if (local_1c0 != 0) {
            for (; local_1c0 >> iVar34 == 0; iVar34 = iVar34 + -1) {
            }
          }
          if ((int)(uVar18 * 8) < (local_1c8 - iVar34) + -1) goto LAB_144bc83e5;
          if ((((uVar23 != 0) && (local_250 != 0)) && (param_1[0xde4] == 0x3e9)) &&
             (param_1[0x25] != 0)) {
            iVar34 = param_1[0x28];
            iVar4 = param_1[9];
            *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc8361;
            FUN_144f3037c(lVar30,0xfa2,iVar34 - iVar4);
          }
          iVar34 = param_1[0x25];
          *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc8375;
          FUN_144f3037c(lVar30,0xfa6,iVar34);
          pvVar27 = local_240;
          *(undefined1 **)(puVar21 + lVar26 + 0x28) = local_1e0;
          *(uint *)(puVar21 + lVar26 + 0x20) = uVar18;
          *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc8397;
          local_260 = FUN_144f306e4(lVar30,pvVar27,param_3,0);
          iVar34 = local_268;
          puVar22 = puVar21 + lVar26;
          if ((int)local_260 < 0) goto LAB_144bc8834;
          if (uVar23 != 0) {
            if (((uVar36 != 0) && (param_1[0xde4] == 0x3e9)) && (param_1[0x25] != 0)) {
              sVar29 = (size_t)local_268;
              _Src = local_220 + (int)uVar18;
              pbVar32 = local_220 + (int)local_260;
              *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc83dd;
              memmove(pbVar32,_Src,sVar29);
              uVar18 = uVar18 + iVar34;
            }
            goto LAB_144bc83e5;
          }
        }
        iVar24 = local_264;
        iVar4 = param_1[0x24];
        pbVar32 = local_220 + -1;
        iVar35 = param_1[0xde4];
        iVar6 = param_1[0xddc];
        *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc8559;
        bVar2 = FUN_144bc8890(iVar35,(longlong)iVar4 / (longlong)(int)param_3 & 0xffffffff,iVar24,
                              iVar6);
        uVar28 = local_200;
        *pbVar32 = bVar2;
        param_1[0x11b7] = local_1c0 ^ local_214;
        iVar4 = 0x3ea;
        if (local_210 == 0) {
          iVar4 = param_1[0xde4];
        }
        param_1[0xde5] = iVar4;
        param_1[0xde6] = param_1[0xddc];
        param_1[0xde7] = (int)param_3;
        param_1[0xdeb] = 0;
        if ((param_1[0x2e] == 0) || ((local_198[0] == 0 && (local_230 == 0)))) {
LAB_144bc8663:
          param_1[0x11b4] = 0;
        }
        else {
          fVar37 = (float)param_1[0x11b5];
          if (local_230 == 0) {
            if (local_174 < 0.1) {
              iVar4 = param_1[0x1c];
              *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc85eb;
              fVar40 = (float)FUN_144f37488(uVar28,uVar28,(int)param_3 * iVar4);
              if ((fVar40 / (float)((int)param_3 * iVar4)) * 316.23 <= fVar37) goto LAB_144bc860f;
            }
            goto LAB_144bc8663;
          }
LAB_144bc860f:
          iVar35 = param_1[0x11b4];
          iVar4 = iVar35 + 1;
          param_1[0x11b4] = iVar4;
          if (10 < iVar4) {
            if (iVar35 < 0x1e) {
              iVar34 = param_1[0x24];
              iVar4 = param_1[0xde4];
              iVar35 = param_1[0xddc];
              param_1[0x11b7] = 0;
              *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc865b;
              bVar2 = FUN_144bc8890(iVar4,(longlong)iVar34 / (longlong)(int)param_3 & 0xffffffff,
                                    iVar24,iVar35);
              *pbVar32 = bVar2;
              goto LAB_144bc7c40;
            }
            param_1[0x11b4] = 10;
          }
        }
        iVar35 = local_254;
        iVar4 = 0x1f;
        if (local_1c0 != 0) {
          for (; local_1c0 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        if (local_254 * 8 + -8 < (local_1c8 - iVar4) + -1) {
          puVar22 = puVar21 + lVar26;
          if (local_254 < 2) goto LAB_144bc8834;
          *local_1a8 = 0;
          param_1[0x11b7] = 0;
          uVar18 = 1;
        }
        else {
          uVar18 = local_260;
          if ((param_1[0xde4] == 1000) && (uVar23 == 0)) {
            uVar14 = (ulonglong)(int)local_260;
            uVar11 = uVar14;
            for (; (2 < (longlong)uVar14 && (uVar18 = (uint)uVar11, pbVar32[uVar14] == 0));
                uVar14 = uVar14 - 1) {
              uVar18 = (uint)uVar11 - 1;
              uVar11 = (ulonglong)uVar18;
            }
          }
        }
        puVar22 = puVar21 + lVar26;
        if (param_1[0x25] != 0) goto LAB_144bc8834;
        *(undefined8 *)(puVar21 + lVar26 + -8) = 0x144bc870c;
        iVar34 = FUN_144f36eac(pbVar32,iVar34 + 1 + uVar18,iVar35);
        puVar20 = puVar21 + lVar26;
        puVar22 = puVar21 + lVar26;
        if (iVar34 != 0) goto LAB_144bc8834;
      }
      else {
        uVar18 = param_1[0x1c];
        uVar31 = (ulonglong)uVar18;
        uVar11 = (longlong)(int)(uVar18 * (int)param_3) * 2;
        uVar14 = uVar11 + 0xf;
        if (uVar14 <= uVar11) {
          uVar14 = 0xffffffffffffff0;
        }
        *(undefined8 *)(auStack_2c8 + lVar26 + -8) = 0x144bc75ad;
        local_260 = 0xffffffff;
        lVar30 = -(uVar14 & 0xfffffffffffffff0);
        local_208 = (undefined2 *)((longlong)&local_268 + lVar30 + lVar26);
        if (local_198[0] != 0) {
          local_260 = (uint)(0.1 <= local_174);
        }
        iVar6 = param_1[0x25];
        iVar34 = (iVar34 * 8 + -8) * local_228;
        if (iVar4 == 0x3e9) {
          iVar24 = (int)local_238 * 0x32;
          iVar4 = param_1[0x24];
          *(int *)((longlong)&local_2a0 + lVar30 + lVar26) = param_1[0xddc];
          *(int *)((longlong)&local_2a8 + lVar30 + lVar26) = param_1[0xd];
          *(undefined8 *)(auStack_2c8 + lVar30 + lVar26 + -8) = 0x144bc7623;
          iVar4 = FUN_144bc9318(iVar34,iVar35,iVar4 == iVar24,iVar6);
          param_1[9] = iVar4;
          if (*(longlong *)(param_1 + 0xdec) == 0) {
            *(undefined8 *)(auStack_2c8 + lVar30 + lVar26 + -8) = 0x144bc7657;
            dVar38 = exp((double)((float)(iVar4 - iVar34) * 0.0009765625) * 0.6931471805599453);
            fVar37 = 1.0 - (float)dVar38;
            lVar33 = 0;
            goto LAB_144bc7675;
          }
LAB_144bc767e:
          if ((iVar6 != 0) && (param_1[0x2c] == 0)) {
            iVar34 = *(int *)pbVar32;
            fVar40 = 0.0;
            lVar33 = 0x11;
            if (iVar34 == 0x44d) {
              lVar33 = 0xd;
              iVar35 = 8000;
            }
            else {
              iVar35 = 16000;
              if (iVar34 == 0x44e) {
                lVar33 = 0xf;
                iVar35 = 12000;
              }
            }
            if (0 < (int)uVar18) {
              lVar17 = 0;
              do {
                if ((int)lVar33 != 0) {
                  pfVar12 = (float *)(*(longlong *)(param_1 + 0xdec) + lVar17);
                  lVar8 = lVar33;
                  do {
                    auVar39._4_8_ = 0;
                    auVar39._0_4_ = *pfVar12;
                    if (0.5 <= *pfVar12) {
                      auVar39 = ZEXT412(0x3f000000);
                    }
                    if (auVar39._0_4_ <= -2.0) {
                      auVar39 = ZEXT812(0xc0000000);
                    }
                    if (0.0 < auVar39._0_4_) {
                      auVar39._4_8_ = auVar39._4_8_;
                      auVar39._0_4_ = auVar39._0_4_ * 0.5;
                    }
                    pfVar12 = pfVar12 + 1;
                    fVar40 = fVar40 + auVar39._0_4_;
                    lVar8 = lVar8 + -1;
                  } while (lVar8 != 0);
                }
                lVar17 = lVar17 + 0x54;
                uVar31 = uVar31 - 1;
              } while (uVar31 != 0);
              iVar4 = param_1[9];
            }
            iVar6 = iVar4 * -2;
            iVar6 = iVar6 / 3 + (iVar6 >> 0x1f) +
                    (int)(((longlong)iVar6 / 3 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >> 0x1f);
            iVar35 = (int)(((fVar40 / (float)(int)lVar33) * (float)(int)uVar18 + 0.2) *
                          (float)iVar35);
            if (iVar6 < iVar35) {
              iVar6 = iVar35;
            }
            if (iVar34 - 0x450U < 2) {
              param_1[9] = (iVar6 * 3) / 5 + iVar4;
            }
            else {
              param_1[9] = iVar4 + iVar6;
            }
          }
        }
        else {
          lVar33 = *(longlong *)(param_1 + 0xdec);
          param_1[9] = iVar34;
          iVar4 = iVar34;
LAB_144bc7675:
          if (lVar33 != 0) goto LAB_144bc767e;
        }
        param_3 = local_238;
        param_1[2] = uVar18;
        param_1[8] = ((int)local_238 * 1000) / param_1[0x24];
        param_1[3] = param_1[0xddc];
        if (local_264 == 0x44d) {
          param_1[7] = 8000;
        }
        else if (local_264 == 0x44e) {
          param_1[7] = 12000;
        }
        else {
          if ((param_1[0xde4] != 0x3e9) && (local_264 != 0x44f)) {
            *(undefined8 *)(auStack_2c8 + lVar30 + lVar26 + -8) = 0x144bc7843;
            FUN_144bca940("assertion failed: st->mode == MODE_HYBRID || curr_bandwidth == OPUS_BANDWIDTH_WIDEBAND"
                          ,"../../../third_party/opus/src/src/opus_encoder.c",0x6db);
          }
          param_1[7] = 16000;
        }
        uVar23 = local_258;
        iVar34 = local_264;
        iVar4 = 16000;
        if (param_1[0xde4] != 0x3e9) {
          iVar4 = 8000;
        }
        param_1[6] = iVar4;
        iVar4 = param_1[0xde4];
        param_1[5] = 16000;
        if (iVar4 == 1000) {
          iVar35 = local_218;
          if (0x32 < local_228) {
            iVar35 = local_218 * 2;
            iVar35 = (int)(((longlong)iVar35 / 3 + ((longlong)iVar35 >> 0x3f) & 0xffffffffU) >> 0x1f
                          ) + iVar35 / 3 + (iVar35 >> 0x1f);
          }
          if (iVar35 < 8000) {
            iVar6 = param_1[7];
            param_1[5] = 12000;
            if (12000 < iVar6) {
              iVar6 = 12000;
            }
            param_1[7] = iVar6;
          }
          if (iVar35 < 7000) {
            param_1[5] = 8000;
            iVar35 = param_1[7];
            if (8000 < param_1[7]) {
              iVar35 = 8000;
            }
            param_1[7] = iVar35;
          }
        }
        param_1[0xf] = (uint)(param_1[0x25] == 0);
        iVar35 = local_254 * 8 + -8;
        param_1[0x10] = iVar35;
        if ((local_258 == 0) || (local_268 < 2)) {
LAB_144bc7918:
          if (iVar4 == 0x3e9) {
            if (param_1[0x25] == 0) {
              iVar34 = (param_1[9] * (int)param_3) / param_1[0x24];
              if (iVar34 <= iVar35) {
                iVar35 = iVar34;
              }
              param_1[0x10] = iVar35;
            }
            else {
              iVar4 = param_1[0x24];
              *(int *)((longlong)&local_2a0 + lVar30 + lVar26) = param_1[0xddc];
              *(int *)((longlong)&local_2a8 + lVar30 + lVar26) = param_1[0xd];
              *(undefined8 *)(auStack_2c8 + lVar30 + lVar26 + -8) = 0x144bc7971;
              iVar34 = FUN_144bc9318((longlong)(iVar4 * iVar35) / (longlong)(int)param_3 &
                                     0xffffffff,iVar34,iVar4 == (int)param_3 * 0x32);
              param_1[0x10] = (iVar34 * (int)param_3) / iVar4;
            }
          }
        }
        else {
          iVar35 = iVar35 + local_268 * -8;
          param_1[0x10] = iVar35 + -1;
          if (iVar4 == 0x3e9) {
            iVar35 = iVar35 + -0x15;
            param_1[0x10] = iVar35;
            goto LAB_144bc7918;
          }
        }
        puVar19 = local_208;
        uVar18 = local_260;
        if (local_22c != 0) {
          iVar34 = param_1[0x24];
          iVar4 = param_1[0x1c];
          local_224 = 0;
          *(int *)((longlong)local_288 + lVar30 + lVar26) = iVar34;
          lVar33 = local_1f0;
          iVar34 = iVar34 / 400;
          iVar35 = param_1[0x2b];
          iVar6 = param_1[0x1d];
          *(undefined8 *)((longlong)&local_290 + lVar30 + lVar26) =
               *(undefined8 *)(local_1f0 + 0x48);
          uVar7 = *(undefined4 *)(lVar33 + 4);
          *(int *)((longlong)local_298 + lVar30 + lVar26) = iVar4;
          *(int *)((longlong)&local_2a0 + lVar30 + lVar26) = iVar34;
          *(undefined4 *)((longlong)&local_2a8 + lVar30 + lVar26) = uVar7;
          *(undefined8 *)(auStack_2c8 + lVar30 + lVar26 + -8) = 0x144bc7a19;
          FUN_144bc8d80();
          pfVar12 = (float *)(param_1 + 0xdf3);
          *(undefined8 *)(auStack_2c8 + lVar30 + lVar26 + -8) = 0x144bc7a2d;
          memset(pfVar12,0,(longlong)(((iVar35 - iVar6) - iVar34) * iVar4) * 4);
          lVar33 = local_1f8;
          puVar19 = local_208;
          iVar34 = local_22c;
          uVar18 = local_260;
          iVar4 = 0;
          puVar13 = local_208;
          if (0 < param_1[0x2b] * param_1[0x1c]) {
            do {
              fVar40 = *pfVar12 * 32768.0;
              if (fVar40 <= -32768.0) {
                fVar40 = -32768.0;
              }
              if (32767.0 <= fVar40) {
                fVar40 = 32767.0;
              }
              iVar4 = iVar4 + 1;
              pfVar12 = pfVar12 + 1;
              *puVar13 = (short)(int)ROUND(fVar40);
              puVar13 = puVar13 + 1;
              local_238 = fVar40;
            } while (iVar4 < param_1[0x2b] * param_1[0x1c]);
          }
          *(uint *)((longlong)&local_290 + lVar30 + lVar26) = local_260;
          *(int *)((longlong)local_298 + lVar30 + lVar26) = iVar34;
          *(int **)((longlong)&local_2a0 + lVar30 + lVar26) = &local_224;
          *(undefined8 *)((longlong)&local_2a8 + lVar30 + lVar26) = 0;
          *(undefined8 *)(auStack_2c8 + lVar30 + lVar26 + -8) = 0x144bc7ab9;
          FUN_144f35d54(lVar33,param_1 + 2,puVar19);
          param_1[0x12] = 0;
          uVar23 = local_258;
        }
        lVar33 = local_1f8;
        iVar34 = param_1[0x1c];
        iVar4 = 0;
        puVar13 = puVar19;
        if (0 < iVar34 * (int)param_3) {
          do {
            fVar40 = *(float *)((longlong)local_240 + (longlong)(iVar4 + iVar34 * iStack_25c) * 4) *
                     32768.0;
            if (fVar40 <= -32768.0) {
              fVar40 = -32768.0;
            }
            if (32767.0 <= fVar40) {
              fVar40 = 32767.0;
            }
            iVar4 = iVar4 + 1;
            *puVar13 = (short)(int)ROUND(fVar40);
            iVar34 = param_1[0x1c];
            puVar13 = puVar13 + 1;
            uVar18 = local_260;
            uVar23 = local_258;
            local_238 = fVar40;
          } while (iVar4 < iVar34 * (int)param_3);
        }
        *(uint *)((longlong)&local_290 + lVar30 + lVar26) = uVar18;
        *(undefined4 *)((longlong)local_298 + lVar30 + lVar26) = 0;
        *(int **)((longlong)&local_2a0 + lVar30 + lVar26) = &local_1e8;
        *(undefined1 **)((longlong)&local_2a8 + lVar30 + lVar26) = local_1e0;
        *(undefined8 *)(auStack_2c8 + lVar30 + lVar26 + -8) = 0x144bc7b6f;
        local_260 = FUN_144f35d54(lVar33,param_1 + 2,puVar19,param_3);
        puVar22 = auStack_2c8 + lVar30 + lVar26;
        if (local_260 != 0) goto LAB_144bc8834;
        iVar34 = param_1[0x14];
        if (param_1[0xde4] == 1000) {
          if (iVar34 == 8000) {
            local_264 = 0x44d;
          }
          else if (iVar34 == 12000) {
            local_264 = 0x44e;
          }
          else if (iVar34 == 16000) {
            local_264 = 0x44f;
          }
        }
        else if (iVar34 != 16000) {
          *(undefined8 *)(auStack_2c8 + lVar30 + lVar26 + -8) = 0x144bc7be2;
          FUN_144bca940("assertion failed: st->silk_mode.internalSampleRate == 16000",
                        "../../../third_party/opus/src/src/opus_encoder.c",0x747);
        }
        iVar35 = local_228;
        iVar4 = local_254;
        iVar34 = local_264;
        if ((param_1[0x18] == 0) || (param_1[0x11b6] != 0)) {
          iVar6 = 0;
        }
        else {
          iVar6 = 1;
        }
        param_1[0x12] = iVar6;
        if (local_1e8 != 0) {
          puVar21 = auStack_2c8 + lVar30 + lVar26;
          if (iVar6 != 0) {
            iVar34 = param_1[0xddc];
            iVar6 = param_1[0x28];
            *(undefined8 *)(auStack_2c8 + lVar30 + lVar26 + -8) = 0x144bc7c64;
            local_268 = FUN_144bc97b8(iVar4,iVar6,iVar35,iVar34);
            local_250 = 0;
            param_1[0xdea] = 1;
            local_258 = (uint)(local_268 != 0);
            puVar21 = auStack_2c8 + lVar30 + lVar26;
            uVar23 = local_258;
          }
          goto LAB_144bc7c88;
        }
        iVar4 = param_1[0x24];
        iVar35 = param_1[0xde4];
        iVar6 = param_1[0xddc];
        param_1[0x11b7] = 0;
        *(undefined8 *)(auStack_2c8 + lVar30 + lVar26 + -8) = 0x144bc7c39;
        bVar2 = FUN_144bc8890(iVar35,(longlong)iVar4 / (longlong)(int)param_3 & 0xffffffff,iVar34,
                              iVar6);
        local_220[-1] = bVar2;
        puVar20 = auStack_2c8 + lVar30 + lVar26;
      }
LAB_144bc7c40:
      puVar22 = puVar20;
      goto LAB_144bc8834;
    }
    if (iVar34 == 1000) {
      if (param_3 == (float)((iVar6 * 2) / 0x19)) {
        iVar24 = iVar6 / 0x19;
      }
      else if (param_3 == (float)((iVar6 * 3) / 0x19)) {
        iVar24 = iVar5;
      }
    }
  }
  if ((int)local_240 != -1) {
    param_1[0x775] = (int)local_240;
    param_1[0x776] = local_224;
  }
  local_288[0] = param_13;
  local_290._0_4_ = iVar4;
  local_298[0] = local_210;
  local_2a0._0_4_ = param_5;
  local_2a8 = local_220;
  uStack_2d0 = 0x144bc731f;
  FUN_144bc9508(param_1,local_200,(longlong)(int)param_3 / (longlong)iVar24 & 0xffffffff);
  puVar22 = auStack_2c8;
LAB_144bc8834:
  uVar14 = local_c8 ^ (ulonglong)&local_268;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar22 + -8) = &UNK_144bc8843;
  FUN_144d8e3a0(uVar14);
}



// FUNCTION 144bc8890 FUN_144bc8890 body=128 status=ok
// SIG undefined FUN_144bc8890(void)

undefined8 FUN_144bc8890(int param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  byte bVar3;
  byte bVar4;
  
  uVar1 = 400;
  bVar3 = 0;
  for (; param_2 < 400; param_2 = param_2 * 2) {
    bVar3 = bVar3 + 1;
  }
  if (param_1 == 1000) {
    bVar3 = ((byte)param_3 + 3) * ' ' | (bVar3 - 2) * '\b';
  }
  else if (param_1 == 0x3ea) {
    uVar1 = 0;
    bVar4 = 0;
    if (-1 < param_3 + -0x44e) {
      bVar4 = (byte)(param_3 + -0x44e);
    }
    bVar3 = ((bVar4 | 0xfc) << 2 | bVar3) << 3;
  }
  else {
    bVar3 = (((byte)param_3 | 6) * '\x02' | bVar3 - 2) << 3;
  }
  uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),(param_4 != 2) + -1) & 0xffffffffffffff04;
  return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 | bVar3);
}



// FUNCTION 144bc8910 FUN_144bc8910 body=273 status=ok
// SIG undefined FUN_144bc8910(void)

void FUN_144bc8910(longlong param_1,int *param_2,int *param_3,float *param_4,float *param_5,
                  uint param_6,int param_7)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  float fVar8;
  
  iVar2 = *param_2;
  iVar3 = *param_3;
  iVar4 = param_2[1];
  iVar5 = param_2[2];
  iVar6 = param_3[1];
  if (0 < (int)param_6) {
    uVar7 = (ulonglong)param_6;
    param_1 = param_1 - (longlong)param_5;
    do {
      fVar1 = *(float *)(param_1 + (longlong)param_5);
      fVar8 = (float)iVar2 * 3.7252903e-09 * fVar1 + *param_4;
      *param_4 = (param_4[1] - (float)iVar3 * 3.7252903e-09 * fVar8) +
                 (float)iVar4 * 3.7252903e-09 * fVar1;
      param_4[1] = ((float)iVar5 * 3.7252903e-09 * fVar1 - (float)iVar6 * 3.7252903e-09 * fVar8) +
                   1e-30;
      *param_5 = fVar8;
      param_5 = param_5 + param_7;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 144bc8a24 FUN_144bc8a24 body=254 status=ok
// SIG undefined FUN_144bc8a24(void)

void FUN_144bc8a24(longlong param_1,short param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,int param_6,int param_7)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar1 = (param_2 * 0x9a7) / (param_7 / 1000);
  local_20 = iVar1 * -0x1d7 + 0x10000000;
  local_1c = local_20 * -2;
  lVar2 = (longlong)local_20 >> 6;
  local_28 = (undefined4)
             ((ulonglong)
              (((int)((ulonglong)((longlong)iVar1 * (longlong)iVar1) >> 0x10) + -0x800000) * lVar2)
             >> 0x10);
  local_24 = (undefined4)((ulonglong)(lVar2 * lVar2) >> 0x10);
  local_18 = local_20;
  FUN_144bc8910(param_1,&local_20,&local_28,param_4,param_3,param_5,param_6);
  if (param_6 == 2) {
    FUN_144bc8910(param_1 + 4,&local_20,&local_28,param_4 + 8,param_3 + 4,param_5,2);
  }
  return;
}



// FUNCTION 144bc8b24 FUN_144bc8b24 body=289 status=ok
// SIG undefined FUN_144bc8b24(void)

void FUN_144bc8b24(longlong param_1,int param_2,float *param_3,float *param_4,int param_5,
                  int param_6,int param_7)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar3 = (longlong)param_5;
  fVar5 = *param_4;
  fVar6 = ((float)param_2 * 6.3) / (float)param_7;
  fVar7 = 1.0 - fVar6;
  if (param_6 == 2) {
    fVar8 = param_4[2];
    if (0 < lVar3) {
      pfVar4 = param_3 + 1;
      do {
        fVar1 = *(float *)((param_1 - (longlong)param_3) + -4 + (longlong)pfVar4);
        fVar2 = *(float *)((param_1 - (longlong)param_3) + (longlong)pfVar4);
        pfVar4[-1] = fVar1 - fVar5;
        *pfVar4 = fVar2 - fVar8;
        pfVar4 = pfVar4 + 2;
        fVar5 = fVar1 * fVar6 + 1e-30 + fVar5 * fVar7;
        fVar8 = fVar2 * fVar6 + 1e-30 + fVar8 * fVar7;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    param_4[2] = fVar8;
  }
  else if (0 < lVar3) {
    param_1 = param_1 - (longlong)param_3;
    do {
      fVar8 = *(float *)((longlong)param_3 + param_1);
      *param_3 = fVar8 - fVar5;
      param_3 = param_3 + 1;
      fVar5 = fVar8 * fVar6 + 1e-30 + fVar5 * fVar7;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  *param_4 = fVar5;
  return;
}



// FUNCTION 144bc8c48 FUN_144bc8c48 body=309 status=ok
// SIG undefined FUN_144bc8c48(void)

void FUN_144bc8c48(longlong param_1,longlong param_2,float param_3,float param_4,int param_5,
                  int param_6,int param_7,float *param_8,int param_9)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  ulonglong uVar4;
  int iVar5;
  float fVar6;
  
  iVar1 = (int)(48000 / (longlong)param_9);
  uVar4 = (longlong)param_5 / (longlong)iVar1;
  iVar2 = (int)uVar4;
  uVar4 = uVar4 & 0xffffffff;
  iVar5 = 0;
  if (0 < iVar2) {
    pfVar3 = (float *)(param_2 + 4);
    do {
      fVar6 = *param_8 * *param_8;
      param_8 = param_8 + iVar1;
      fVar6 = ((1.0 - fVar6) * (1.0 - param_3) + fVar6 * (1.0 - param_4)) *
              (*(float *)((param_1 - param_2) + -4 + (longlong)pfVar3) -
              *(float *)((param_1 - param_2) + (longlong)pfVar3)) * 0.5;
      pfVar3[-1] = pfVar3[-1] - fVar6;
      *pfVar3 = fVar6 + *pfVar3;
      pfVar3 = pfVar3 + param_7;
      uVar4 = uVar4 - 1;
      iVar5 = iVar2;
    } while (uVar4 != 0);
  }
  if (iVar5 < param_6) {
    pfVar3 = (float *)(param_2 + ((longlong)(iVar5 * param_7) + 1) * 4);
    uVar4 = (ulonglong)(uint)(param_6 - iVar5);
    do {
      fVar6 = (*(float *)((param_1 - param_2) + -4 + (longlong)pfVar3) -
              *(float *)((param_1 - param_2) + (longlong)pfVar3)) * 0.5 * (1.0 - param_4);
      pfVar3[-1] = pfVar3[-1] - fVar6;
      *pfVar3 = fVar6 + *pfVar3;
      pfVar3 = pfVar3 + param_7;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 144bc8d80 FUN_144bc8d80 body=324 status=ok
// SIG undefined FUN_144bc8d80(void)

void FUN_144bc8d80(longlong param_1,float *param_2,float param_3,float param_4,int param_5,
                  int param_6,int param_7,longlong param_8,int param_9)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  float *pfVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  
  iVar8 = (int)(48000 / (longlong)param_9);
  param_5 = param_5 / iVar8;
  lVar6 = (longlong)param_5;
  iVar5 = 0;
  if (0 < param_5) {
    lVar3 = param_1 - (longlong)param_2;
    iVar7 = 0;
    pfVar4 = param_2;
    iVar5 = 0;
    if (param_7 == 1) {
      do {
        lVar1 = (longlong)iVar7;
        iVar7 = iVar7 + iVar8;
        fVar9 = *(float *)(param_8 + lVar1 * 4);
        fVar9 = fVar9 * fVar9;
        *pfVar4 = ((1.0 - fVar9) * param_3 + fVar9 * param_4) * *(float *)(lVar3 + (longlong)pfVar4)
        ;
        lVar6 = lVar6 + -1;
        pfVar4 = pfVar4 + 1;
      } while (lVar6 != 0);
    }
    else {
      pfVar4 = param_2 + 1;
      do {
        lVar1 = (longlong)iVar7;
        iVar7 = iVar7 + iVar8;
        fVar9 = *(float *)(param_8 + lVar1 * 4);
        fVar9 = fVar9 * fVar9;
        fVar9 = (1.0 - fVar9) * param_3 + fVar9 * param_4;
        pfVar4[-1] = fVar9 * *(float *)(lVar3 + -4 + (longlong)pfVar4);
        *pfVar4 = fVar9 * *(float *)((longlong)pfVar4 + lVar3);
        pfVar4 = pfVar4 + 2;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  do {
    if (param_5 < param_6) {
      pfVar4 = param_2 + (param_5 * param_7 + iVar5);
      uVar2 = (ulonglong)(uint)(param_6 - param_5);
      do {
        *pfVar4 = param_4 * *(float *)((longlong)pfVar4 + (param_1 - (longlong)param_2));
        pfVar4 = pfVar4 + param_7;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < param_7);
  return;
}



// FUNCTION 144bc8ec4 FUN_144bc8ec4 body=98 status=ok
// SIG undefined FUN_144bc8ec4(void)

ulonglong FUN_144bc8ec4(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x90) / 400;
  }
  uVar1 = *(uint *)(param_1 + 0xa4);
  uVar2 = (ulonglong)uVar1;
  if (uVar1 == 0xfffffc18) {
    return (ulonglong)
           (uint)((*(int *)(param_1 + 0x90) * 0x3c) / param_2 +
                 *(int *)(param_1 + 0x70) * *(int *)(param_1 + 0x90));
  }
  if (uVar1 == 0xffffffff) {
    uVar2 = (longlong)(*(int *)(param_1 + 0x90) * param_3 * 8) / (longlong)param_2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 144bc8f28 FUN_144bc8f28 body=802 status=ok
// SIG undefined FUN_144bc8f28(void)

void FUN_144bc8f28(longlong param_1,int param_2,int param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  longlong lVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar19 = 0.0;
  fVar20 = 0.0;
  fVar22 = 0.0;
  param_3 = param_3 / param_2;
  iVar14 = param_3;
  if (param_3 < 0x32) {
    iVar14 = 0x32;
  }
  fVar23 = 1.0 - 25.0 / (float)iVar14;
  if (0 < param_2 + -3) {
    pfVar12 = (float *)(param_1 + 8);
    lVar13 = ((longlong)(param_2 + -3) - 1U >> 2) + 1;
    do {
      fVar21 = pfVar12[1];
      fVar7 = pfVar12[-1];
      fVar8 = *pfVar12;
      fVar9 = *pfVar12;
      pfVar1 = pfVar12 + -2;
      fVar10 = pfVar12[3];
      pfVar2 = pfVar12 + -2;
      pfVar3 = pfVar12 + 2;
      pfVar4 = pfVar12 + 2;
      fVar11 = pfVar12[5];
      pfVar5 = pfVar12 + 4;
      pfVar6 = pfVar12 + 4;
      pfVar12 = pfVar12 + 8;
      fVar22 = fVar22 + fVar11 * *pfVar5 + fVar7 * *pfVar1 + fVar21 * fVar8 + fVar10 * *pfVar3;
      fVar19 = fVar19 + fVar11 * fVar11 + fVar7 * fVar7 + fVar21 * fVar21 + fVar10 * fVar10;
      fVar20 = fVar20 + *pfVar6 * *pfVar6 + *pfVar2 * *pfVar2 + fVar9 * fVar9 + *pfVar4 * *pfVar4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    if ((((1e+09 <= fVar20) || (NAN(fVar20))) || (1e+09 <= fVar19)) || (NAN(fVar19))) {
      fVar19 = 0.0;
      fVar20 = 0.0;
      fVar22 = 0.0;
    }
  }
  fVar21 = (fVar20 - *param_4) * fVar23 + *param_4;
  fVar20 = (fVar19 - param_4[2]) * fVar23 + param_4[2];
  fVar22 = (fVar22 - param_4[1]) * fVar23 + param_4[1];
  fVar19 = 0.0;
  if (0.0 <= fVar21) {
    fVar19 = fVar21;
  }
  fVar23 = 0.0;
  if (0.0 <= fVar20) {
    fVar23 = fVar20;
  }
  fVar20 = 0.0;
  if (0.0 <= fVar22) {
    fVar20 = fVar22;
  }
  *param_4 = fVar19;
  fVar22 = fVar19;
  if (fVar19 <= fVar23) {
    fVar22 = fVar23;
  }
  param_4[2] = fVar23;
  param_4[1] = fVar20;
  if (0.0008 < fVar22) {
    dVar15 = sqrt((double)fVar19);
    dVar16 = sqrt((double)fVar23);
    dVar17 = sqrt((double)(float)dVar15);
    dVar18 = sqrt((double)(float)dVar16);
    fVar19 = (float)dVar16 * (float)dVar15;
    if (fVar19 <= fVar20) {
      fVar20 = fVar19;
    }
    param_4[1] = fVar20;
    fVar20 = fVar20 / (fVar19 + 1e-15);
    dVar15 = sqrt((double)(1.0 - fVar20 * fVar20));
    fVar19 = param_4[4] - 0.02 / (float)param_3;
    fVar20 = ((float)dVar15 *
              (ABS((float)dVar17 - (float)dVar18) / ((float)dVar17 + 1e-15 + (float)dVar18)) -
             param_4[3]) / (float)param_3 + param_4[3];
    if (fVar19 <= fVar20) {
      fVar19 = fVar20;
    }
    param_4[3] = fVar20;
    param_4[4] = fVar19;
  }
  return;
}



// FUNCTION 144bc924c FUN_144bc924c body=203 status=ok
// SIG undefined FUN_144bc924c(void)

undefined8 FUN_144bc924c(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0x3ea)) {
    iVar1 = *param_5;
    iVar2 = 0x19;
    if (param_2 < 0x19) {
      iVar2 = param_2;
    }
    iVar5 = iVar1;
    while( true ) {
      iVar4 = *(int *)(&DAT_14997e7c8 + (longlong)(iVar5 * 2 + -0x89a) * 4) -
              *(int *)(
                      "A requested feature, protocol or option was not found built-in in this libcurl due to a build-time decision."
                      + (longlong)(iVar5 * 2) * 4 + 0x14);
      if (param_3 != 1) {
        iVar4 = *(int *)(&DAT_14997e7c8 + (longlong)(iVar5 * 2 + -0x89a) * 4);
      }
      iVar3 = *(int *)(
                      "A requested feature, protocol or option was not found built-in in this libcurl due to a build-time decision."
                      + (longlong)(iVar5 * 2) * 4 + 0x14) + iVar4;
      if (param_3 != 0) {
        iVar3 = iVar4;
      }
      if ((int)((ulonglong)((longlong)(iVar3 * (0x7d - iVar2)) * 0x28f) >> 0x10) < param_6) {
        return 1;
      }
      if (param_2 < 6) {
        return 0;
      }
      if (iVar5 < 0x44e) break;
      iVar5 = iVar5 + -1;
      *param_5 = iVar5;
    }
    *param_5 = iVar1;
  }
  return 0;
}



// FUNCTION 144bc9318 FUN_144bc9318 body=260 status=ok
// SIG undefined FUN_144bc9318(void)

int FUN_144bc9318(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  param_1 = param_1 / param_6;
  iVar6 = 1;
  piVar3 = &DAT_14c6da034;
  do {
    if (param_1 < *piVar3) break;
    iVar6 = iVar6 + 1;
    piVar3 = piVar3 + 5;
  } while ((longlong)piVar3 < 0x14c6da0ac);
  lVar4 = (longlong)iVar6;
  lVar5 = (longlong)(param_3 + param_5 * 2);
  iVar2 = *(int *)(lVar4 * 0x14 + 0x14c6da00c);
  lVar1 = lVar5 + -3 + lVar4 * 5;
  if (iVar6 == 7) {
    iVar6 = (param_1 - iVar2) / 2 + *(int *)(&DAT_14c6da01c + lVar1 * 4);
  }
  else {
    iVar6 = (*(int *)(&DAT_14c6da020 + (lVar5 + lVar4 * 5 + 1) * 4) * (param_1 - iVar2) +
            (*(int *)(&DAT_14c6da020 + lVar4 * 0x14) - param_1) *
            *(int *)(&DAT_14c6da01c + lVar1 * 4)) /
            (*(int *)(&DAT_14c6da020 + lVar4 * 0x14) - iVar2);
  }
  iVar2 = iVar6 + 100;
  if (param_4 != 0) {
    iVar2 = iVar6;
  }
  iVar6 = iVar2 + 300;
  if (param_2 != 0x450) {
    iVar6 = iVar2;
  }
  iVar6 = iVar6 * param_6;
  if ((param_6 == 2) && (11999 < param_1)) {
    iVar6 = iVar6 + -1000;
  }
  return iVar6;
}



// FUNCTION 144bc941c FUN_144bc941c body=236 status=ok
// SIG undefined FUN_144bc941c(void)

int FUN_144bc941c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  
  if (0x32 < param_3) {
    param_1 = param_1 - (param_2 * 0x28 + 0x14) * (param_3 + -0x32);
  }
  if (param_4 == 0) {
    iVar2 = (int)((ulonglong)((longlong)param_1 * -0x2aaaaaab) >> 0x20);
    param_1 = param_1 + ((iVar2 >> 1) - (iVar2 >> 0x1f));
  }
  iVar2 = ((param_6 + 0x5a) * param_1) / 100;
  if (param_5 - 1000U < 2) {
    if (param_6 < 2) {
      iVar2 = (iVar2 * 4) / 5;
    }
    iVar1 = param_7 * 6 + 10;
  }
  else {
    if (param_5 == 0x3ea) {
      if (4 < param_6) {
        return iVar2;
      }
      return (iVar2 * 9) / 10;
    }
    iVar1 = param_7 * 0xc + 0x14;
  }
  return iVar2 - (iVar2 * param_7) / iVar1;
}



// FUNCTION 144bc9508 FUN_144bc9508 body=656 status=ok
// SIG undefined FUN_144bc9508(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bc9508(longlong param_1,longlong param_2,int param_3,int param_4,undefined8 param_5,
                  int param_6,int param_7,undefined4 param_8,undefined4 param_9)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  undefined8 auStack_2d0 [5];
  int aiStack_2a8 [4];
  undefined8 local_298;
  undefined4 local_290 [8];
  undefined8 local_270;
  undefined4 local_268 [4];
  undefined1 local_258 [376];
  undefined8 uStack_e0;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)&local_68;
  iVar8 = param_3 * 2;
  if (param_3 == 2) {
    iVar8 = 3;
  }
  if (((*(int *)(param_1 + 0x94) == 0) && (*(int *)(param_1 + 0xa4) != -1)) &&
     (iVar4 = (*(int *)(param_1 + 0xa0) * 3) /
              ((*(int *)(param_1 + 0x90) * 0x18) / (param_3 * param_4)), iVar4 < param_6)) {
    param_6 = iVar4;
  }
  iVar4 = (param_6 - iVar8) / param_3 + 1;
  if (0x4fc < iVar4) {
    iVar4 = 0x4fc;
  }
  uVar6 = (longlong)(iVar4 * param_3) + 0xf;
  if (uVar6 <= (ulonglong)(longlong)(iVar4 * param_3)) {
    uVar6 = 0xffffffffffffff0;
  }
  uStack_e0 = 0x144bc95e2;
  lVar3 = -(uVar6 & 0xfffffffffffffff0);
  local_50 = (longlong)&local_68 + lVar3;
  puVar2 = local_258 + lVar3;
  local_68 = param_4;
  local_48 = param_2;
  *(undefined8 *)((longlong)auStack_2d0 + lVar3) = 0x144bc960a;
  FUN_144f36e9c(puVar2,(longlong)(param_6 - iVar8) % (longlong)param_3 & 0xffffffff);
  local_60 = *(undefined4 *)(param_1 + 0x88);
  iVar8 = 0;
  local_64 = *(int *)(param_1 + 0x44);
  local_5c = *(undefined4 *)(param_1 + 0x80);
  local_58 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x3790);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x37a0);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x3770);
  if (local_64 == 0) {
    *(undefined4 *)(param_1 + 0x3798) = *(undefined4 *)(param_1 + 0x3770);
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 1;
  }
  iVar7 = iVar8;
  if (0 < param_3) {
    do {
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(uint *)(param_1 + 0x46d8) = (uint)(iVar8 < param_3 + -1);
      if ((param_7 != 0) && (iVar8 == param_3 + -1)) {
        *(undefined4 *)(param_1 + 0x88) = 0x3ea;
      }
      local_40 = local_50 + iVar7;
      lVar1 = local_48 + (longlong)(*(int *)(param_1 + 0x70) * iVar8 * local_68) * 4;
      *(undefined4 *)((longlong)local_268 + lVar3) = param_9;
      *(undefined8 *)((longlong)&local_270 + lVar3) = 0;
      *(undefined4 *)((longlong)local_290 + lVar3 + 0x18) = 0;
      *(undefined4 *)((longlong)local_290 + lVar3 + 0x10) = 0;
      *(undefined4 *)((longlong)local_290 + lVar3 + 8) = 0;
      *(undefined4 *)((longlong)local_290 + lVar3) = 0;
      *(undefined8 *)((longlong)&local_298 + lVar3) = 0;
      *(undefined4 *)((longlong)aiStack_2a8 + lVar3 + 8) = param_8;
      *(int *)((longlong)aiStack_2a8 + lVar3) = iVar4;
      *(undefined8 *)((longlong)auStack_2d0 + lVar3) = 0x144bc9707;
      iVar5 = FUN_144bc672c(param_1,lVar1);
      lVar1 = local_40;
      if (iVar5 < 0) goto LAB_144bc978c;
      *(undefined8 *)((longlong)auStack_2d0 + lVar3) = 0x144bc971a;
      iVar5 = FUN_144f36ea4(puVar2,lVar1,iVar5);
      if (iVar5 < 0) goto LAB_144bc978c;
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + iVar4;
    } while (iVar8 < param_3);
  }
  iVar8 = local_64;
  *(uint *)((longlong)&local_298 + lVar3) = (uint)(*(int *)(param_1 + 0x94) == 0);
  *(undefined4 *)((longlong)aiStack_2a8 + lVar3 + 8) = 0;
  *(int *)((longlong)aiStack_2a8 + lVar3) = param_6;
  *(undefined8 *)((longlong)auStack_2d0 + lVar3) = 0x144bc9765;
  iVar4 = FUN_144f36f68(puVar2,0,param_3,param_5);
  if (-1 < iVar4) {
    *(undefined4 *)(param_1 + 0x88) = local_60;
    *(undefined4 *)(param_1 + 0x80) = local_5c;
    *(undefined4 *)(param_1 + 0x78) = local_58;
    *(int *)(param_1 + 0x44) = iVar8;
  }
LAB_144bc978c:
  uVar6 = local_38 ^ (ulonglong)&local_68;
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)auStack_2d0 + lVar3) = &UNK_144bc9798;
  FUN_144d8e3a0(uVar6);
}



// FUNCTION 144bc97b8 FUN_144bc97b8 body=153 status=ok
// SIG undefined FUN_144bc97b8(void)

int FUN_144bc97b8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_4 * 0x28 + 0x14;
  iVar1 = (((200 - param_3) * iVar2 + param_2) * 3) / 0xc80;
  iVar2 = ((param_1 * 4 - iVar2) * 0x1e0) / ((int)(48000 / (longlong)param_3) + 0xf0) + iVar2;
  iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  if (param_4 * 8 + 4 < iVar2) {
    if (0x101 < iVar2) {
      iVar2 = 0x101;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



// FUNCTION 144bc9854 FUN_144bc9854 body=103 status=ok
// SIG undefined FUN_144bc9854(void)

int FUN_144bc9854(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 < 1) || (param_1 < param_2)) || (param_2 < 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_144bc4144(2);
    iVar2 = FUN_144bc4144(1);
    iVar1 = ((iVar2 + 7U >> 3) * (param_1 - param_2) + (iVar1 + 7U >> 3) * param_2) * 8 + 0x110;
  }
  return iVar1;
}



// FUNCTION 144bc98bc FUN_144bc98bc body=303 status=ok
// SIG undefined FUN_144bc98bc(void)

undefined8
FUN_144bc98bc(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,longlong param_6)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if ((((param_3 - 1U < 0xff) && (param_5 <= param_4)) && (0 < param_4)) &&
     ((-1 < param_5 && (param_4 <= 0xff - param_5)))) {
    param_1[1] = param_4;
    iVar5 = 0;
    *param_1 = param_3;
    param_1[2] = param_5;
    if (0 < param_3) {
      piVar3 = param_1 + 3;
      do {
        iVar5 = iVar5 + 1;
        *(undefined1 *)piVar3 =
             *(undefined1 *)((param_6 - (longlong)param_1) + -0xc + (longlong)piVar3);
        piVar3 = (int *)((longlong)piVar3 + 1);
      } while (iVar5 < *param_1);
    }
    iVar5 = FUN_144f39748(param_1);
    if (iVar5 != 0) {
      piVar3 = param_1 + 0x44;
      iVar5 = FUN_144bc4144(2);
      iVar1 = FUN_144bc4144(1);
      iVar4 = 0;
      if (0 < param_1[2]) {
        do {
          uVar2 = FUN_144bc4244(piVar3,param_2,2);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          iVar4 = iVar4 + 1;
          piVar3 = (int *)((longlong)piVar3 + (longlong)(int)(iVar5 + 7U & 0xfffffff8));
        } while (iVar4 < param_1[2]);
      }
      while( true ) {
        if (param_1[1] <= iVar4) {
          return 0;
        }
        uVar2 = FUN_144bc4244(piVar3,param_2,1);
        if ((int)uVar2 != 0) break;
        piVar3 = (int *)((longlong)piVar3 + (longlong)(int)(iVar1 + 7U & 0xfffffff8));
        iVar4 = iVar4 + 1;
      }
      return uVar2;
    }
  }
  return 0xffffffff;
}



// FUNCTION 144bc99ec FUN_144bc99ec body=62 status=ok
// SIG undefined FUN_144bc99ec(void)

void FUN_144bc99ec(void)

{
  FUN_144bc9c98();
  return;
}



// FUNCTION 144bc9a2c FUN_144bc9a2c body=32 status=ok
// SIG undefined FUN_144bc9a2c(void)

void FUN_144bc9a2c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_144bc9a4c(param_1,param_2,&local_res18);
  return;
}



// FUNCTION 144bc9a4c FUN_144bc9a4c body=588 status=ok
// SIG undefined FUN_144bc9a4c(void)

int FUN_144bc9a4c(longlong param_1,int param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint local_res8 [2];
  uint local_res10;
  
  iVar6 = 0;
  uVar2 = FUN_144bc4144(2);
  local_res8[0] = uVar2;
  local_res10 = FUN_144bc4144(1);
  lVar5 = param_1 + 0x110;
  if (param_2 < 0xfc8) {
    if ((param_2 != 0xfc7) && (param_2 != 0xfa9)) {
      if (param_2 == 0xfbc) {
        iVar6 = 0;
        if (*(int *)(param_1 + 4) < 1) {
          return 0;
        }
        while( true ) {
          uVar3 = uVar2;
          if (*(int *)(param_1 + 8) <= iVar6) {
            uVar3 = local_res10;
          }
          iVar7 = FUN_144bc44f4(lVar5,0xfbc);
          if (iVar7 != 0) break;
          iVar6 = iVar6 + 1;
          lVar5 = lVar5 + (int)(uVar3 + 7 & 0xfffffff8);
          if (*(int *)(param_1 + 4) <= iVar6) {
            return 0;
          }
        }
        return iVar7;
      }
      if (param_2 != 0xfbd) {
        if (param_2 == 0xfbf) {
          puVar1 = *(uint **)param_3;
          if (puVar1 == (uint *)0x0) {
            return -1;
          }
          *puVar1 = 0;
          iVar6 = 0;
          if (0 < *(int *)(param_1 + 4)) {
            while( true ) {
              uVar3 = uVar2;
              if (*(int *)(param_1 + 8) <= iVar6) {
                uVar3 = local_res10;
              }
              iVar7 = FUN_144bc44f4(lVar5,0xfbf,local_res8);
              if (iVar7 != 0) break;
              iVar6 = iVar6 + 1;
              *puVar1 = *puVar1 ^ local_res8[0];
              lVar5 = lVar5 + (int)(uVar3 + 7 & 0xfffffff8);
              if (*(int *)(param_1 + 4) <= iVar6) {
                return 0;
              }
            }
            return iVar7;
          }
          return 0;
        }
        if (param_2 != 0xfc2) {
          return -5;
        }
LAB_144bc9ad3:
        iVar7 = 0;
        iVar6 = *param_3;
        if (*(int *)(param_1 + 4) < 1) {
          return 0;
        }
        while( true ) {
          uVar2 = local_res10;
          if (iVar7 < *(int *)(param_1 + 8)) {
            uVar2 = local_res8[0];
          }
          iVar4 = FUN_144bc44f4(lVar5,param_2,iVar6);
          if (iVar4 != 0) break;
          iVar7 = iVar7 + 1;
          lVar5 = lVar5 + (int)(uVar2 + 7 & 0xfffffff8);
          if (*(int *)(param_1 + 4) <= iVar7) {
            return 0;
          }
        }
        return iVar4;
      }
    }
  }
  else if (param_2 != 0xfcd) {
    if (param_2 == 0xfce) goto LAB_144bc9ad3;
    if (param_2 != 0xfcf) {
      if (param_2 != 0x1402) {
        return -5;
      }
      iVar7 = *param_3;
      if (iVar7 < 0) {
        return -1;
      }
      if (*(int *)(param_1 + 4) <= iVar7) {
        return -1;
      }
      if (*(longlong **)(param_3 + 2) == (longlong *)0x0) {
        return -1;
      }
      if (0 < iVar7) {
        do {
          uVar3 = uVar2;
          if (*(int *)(param_1 + 8) <= iVar6) {
            uVar3 = local_res10;
          }
          iVar6 = iVar6 + 1;
          lVar5 = lVar5 + (int)(uVar3 + 7 & 0xfffffff8);
        } while (iVar6 < iVar7);
      }
      **(longlong **)(param_3 + 2) = lVar5;
      return 0;
    }
  }
  iVar6 = FUN_144bc44f4(lVar5,param_2,*(undefined8 *)param_3);
  return iVar6;
}



// FUNCTION 144bc9c98 FUN_144bc9c98 body=919 status=ok
// SIG undefined FUN_144bc9c98(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bc9c98(int *param_1,longlong param_2,int param_3,undefined8 param_4,code *param_5,
                  int param_6,undefined4 param_7,undefined4 param_8,undefined8 param_9)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  int *piVar9;
  int iVar10;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [32];
  int aiStack_a8 [4];
  longlong local_98 [2];
  undefined4 local_88 [4];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  int *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)&local_78;
  uStack_d0 = 0x144bc9cf2;
  local_78 = param_3;
  local_6c = param_3;
  local_58 = param_4;
  local_40 = param_2;
  FUN_144f39748();
  puVar8 = auStack_c8;
  if (0 < param_6) {
    uStack_d0 = 0x144bc9d11;
    iVar4 = FUN_144bc9a2c(param_1,0xfbd,&local_70);
    if (iVar4 != 0) {
      uStack_d0 = 0x144bc9d2e;
      FUN_144bca940("assertion failed: (opus_multistream_decoder_ctl(st, 4029, ((&Fs) + ((&Fs) - (opus_int32*)(&Fs))))) == OPUS_OK"
                    ,"../../../third_party/opus/src/src/opus_multistream_decoder.c",0xce);
    }
    iVar4 = (local_70 / 0x19) * 3;
    if (iVar4 <= param_6) {
      param_6 = iVar4;
    }
    uVar7 = (longlong)(param_6 * 2) * 4;
    uVar6 = uVar7 + 0xf;
    if (uVar6 <= uVar7) {
      uVar6 = 0xffffffffffffff0;
    }
    uStack_d0 = 0x144bc9d6e;
    local_48 = param_1 + 0x44;
    lVar1 = -(uVar6 & 0xfffffffffffffff0);
    local_60 = (longlong)&local_78 + lVar1;
    *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x144bc9d8f;
    local_50 = FUN_144bc4144(2);
    *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x144bc9d9c;
    local_68 = FUN_144bc4144(1);
    puVar8 = auStack_c8 + lVar1;
    if (-1 < param_3) {
      if (param_3 != 0) {
        iVar4 = param_1[1];
        puVar8 = auStack_c8 + lVar1;
        if (param_3 < iVar4 * 2 + -1) goto LAB_144bca023;
        *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x144bc9dd4;
        iVar4 = FUN_144bca054(param_2,param_3,iVar4,local_70);
        puVar8 = auStack_c8 + lVar1;
        if ((iVar4 < 0) || (puVar8 = auStack_c8 + lVar1, param_6 < iVar4)) goto LAB_144bca023;
      }
      iVar4 = param_1[1];
      iVar10 = 0;
      if (0 < iVar4) {
        do {
          piVar9 = local_48;
          lVar2 = local_60;
          iVar5 = local_68;
          if (iVar10 < param_1[2]) {
            iVar5 = local_50;
          }
          local_48 = (int *)((longlong)local_48 + (longlong)(int)(iVar5 + 7U & 0xfffffff8));
          if ((local_6c != 0) && (puVar8 = auStack_c8 + lVar1, param_3 < 1)) goto LAB_144bca023;
          local_74 = 0;
          *(undefined4 *)((longlong)local_88 + lVar1) = param_8;
          *(int **)((longlong)local_98 + lVar1 + 8) = &local_74;
          *(uint *)((longlong)local_98 + lVar1) = (uint)(iVar10 != iVar4 + -1);
          *(undefined4 *)((longlong)aiStack_a8 + lVar1 + 8) = param_7;
          *(int *)((longlong)aiStack_a8 + lVar1) = param_6;
          *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x144bc9e7d;
          param_6 = FUN_144bc4770(piVar9,param_2,param_3,lVar2);
          if (local_6c != 0) {
            local_40 = param_2 + local_74;
            local_78 = param_3 - local_74;
            param_3 = local_78;
          }
          puVar8 = auStack_c8 + lVar1;
          if (param_6 < 1) goto LAB_144bca023;
          if (iVar10 < param_1[2]) {
            *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x144bc9eb8;
            iVar4 = FUN_144f39788();
            lVar2 = local_60;
            uVar3 = local_58;
            while (local_58 = uVar3, iVar4 != -1) {
              iVar5 = *param_1;
              *(undefined8 *)((longlong)local_98 + lVar1) = param_9;
              *(int *)((longlong)aiStack_a8 + lVar1 + 8) = param_6;
              *(undefined4 *)((longlong)aiStack_a8 + lVar1) = 2;
              *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x144bc9ee6;
              (*param_5)(uVar3,iVar5,iVar4,lVar2);
              *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x144bc9ef4;
              iVar4 = FUN_144f39788(param_1,iVar10,iVar4);
              uVar3 = local_58;
              param_3 = local_78;
            }
            *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x144bc9f0d;
            iVar4 = FUN_144f397c4(param_1,iVar10,0xffffffff);
            lVar2 = local_60;
            uVar3 = local_58;
            while (local_58 = uVar3, iVar4 != -1) {
              iVar5 = *param_1;
              *(undefined8 *)((longlong)local_98 + lVar1) = param_9;
              *(int *)((longlong)aiStack_a8 + lVar1 + 8) = param_6;
              *(undefined4 *)((longlong)aiStack_a8 + lVar1) = 2;
              *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x144bc9f47;
              (*param_5)(uVar3,iVar5,iVar4,lVar2 + 4);
              *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x144bc9f55;
              iVar4 = FUN_144f397c4(param_1,iVar10,iVar4);
              uVar3 = local_58;
              param_3 = local_78;
            }
          }
          else {
            *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x144bc9f63;
            iVar4 = FUN_144f39804(param_1,iVar10,0xffffffff);
            lVar2 = local_60;
            uVar3 = local_58;
            while (local_60 = lVar2, local_58 = uVar3, iVar4 != -1) {
              iVar5 = *param_1;
              *(undefined8 *)((longlong)local_98 + lVar1) = param_9;
              *(int *)((longlong)aiStack_a8 + lVar1 + 8) = param_6;
              *(undefined4 *)((longlong)aiStack_a8 + lVar1) = 1;
              *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x144bc9f95;
              (*param_5)(uVar3,iVar5,iVar4,lVar2);
              *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x144bc9fa3;
              iVar4 = FUN_144f39804(param_1,iVar10,iVar4);
              lVar2 = local_60;
              uVar3 = local_58;
              param_3 = local_78;
            }
          }
          iVar4 = param_1[1];
          iVar10 = iVar10 + 1;
          param_2 = local_40;
          param_4 = local_58;
        } while (iVar10 < iVar4);
      }
      iVar4 = *param_1;
      iVar10 = 0;
      puVar8 = auStack_c8 + lVar1;
      if (0 < iVar4) {
        piVar9 = param_1 + 3;
        do {
          if ((char)*piVar9 == -1) {
            *(undefined8 *)((longlong)local_98 + lVar1) = param_9;
            *(int *)((longlong)aiStack_a8 + lVar1 + 8) = param_6;
            *(undefined4 *)((longlong)aiStack_a8 + lVar1) = 0;
            *(undefined8 *)(auStack_c8 + lVar1 + -8) = 0x144bca00f;
            (*param_5)(param_4,iVar4,iVar10,0);
            iVar4 = *param_1;
          }
          iVar10 = iVar10 + 1;
          piVar9 = (int *)((longlong)piVar9 + 1);
          puVar8 = auStack_c8 + lVar1;
        } while (iVar10 < iVar4);
      }
    }
  }
LAB_144bca023:
  uVar6 = local_38 ^ (ulonglong)&local_78;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar8 + -8) = &UNK_144bca02f;
  FUN_144d8e3a0(uVar6);
}



// FUNCTION 144bca054 FUN_144bca054 body=195 status=ok
// SIG undefined FUN_144bca054(void)

void FUN_144bca054(longlong param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  int *local_c0;
  undefined1 local_b8 [4];
  int local_b4 [3];
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar2 = 0;
  iVar3 = 0;
  if (0 < param_3) {
    while (0 < param_2) {
      local_c0 = local_b4;
      local_c8 = 0;
      local_d0 = local_a8;
      local_d8 = 0;
      iVar1 = FUN_144bca560(param_1,param_2,iVar2 != param_3 + -1,local_b8);
      if ((iVar1 < 0) ||
         ((iVar1 = FUN_144bc4720(param_1,local_b4[0],param_4), iVar2 != 0 && (iVar3 != iVar1))))
      break;
      param_2 = param_2 - local_b4[0];
      iVar2 = iVar2 + 1;
      param_1 = param_1 + local_b4[0];
      iVar3 = iVar1;
      if (param_3 <= iVar2) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
}



// FUNCTION 144bca128 FUN_144bca128 body=158 status=ok
// SIG undefined FUN_144bca128(void)

void FUN_144bca128(longlong param_1,int param_2,int param_3,float *param_4,int param_5,uint param_6)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  float fVar3;
  
  uVar1 = (ulonglong)param_6;
  if (0 < (int)param_6) {
    if (param_4 == (float *)0x0) {
      puVar2 = (undefined2 *)(param_1 + (longlong)param_3 * 2);
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + param_2;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    else {
      puVar2 = (undefined2 *)(param_1 + (longlong)param_3 * 2);
      do {
        fVar3 = *param_4 * 32768.0;
        if (fVar3 <= -32768.0) {
          fVar3 = -32768.0;
        }
        if (32767.0 <= fVar3) {
          fVar3 = 32767.0;
        }
        param_4 = param_4 + param_5;
        *puVar2 = (short)(int)ROUND(fVar3);
        puVar2 = puVar2 + param_2;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  return;
}



// FUNCTION 144bca1c8 FUN_144bca1c8 body=123 status=ok
// SIG undefined FUN_144bca1c8(void)

int FUN_144bca1c8(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *param_1;
  if ((char)bVar1 < '\0') {
    param_2 = param_2 << (bVar1 >> 3 & 3);
    iVar2 = param_2 / 400 + (param_2 >> 0x1f);
  }
  else if ((bVar1 & 0x60) == 0x60) {
    if ((bVar1 & 8) == 0) {
      iVar2 = param_2 / 100 + (param_2 >> 0x1f);
    }
    else {
      iVar2 = param_2 / 0x32 + (param_2 >> 0x1f);
    }
  }
  else {
    bVar1 = bVar1 >> 3 & 3;
    if (bVar1 != 3) {
      return (param_2 << bVar1) / 100;
    }
    iVar2 = (param_2 * 0x3c) / 1000 + (param_2 * 0x3c >> 0x1f);
  }
  return iVar2 - (iVar2 >> 0x1f);
}



// FUNCTION 144bca244 FUN_144bca244 body=741 status=ok
// SIG undefined FUN_144bca244(void)

void FUN_144bca244(float *param_1,int param_2,int param_3,float *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  float *pfVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong local_58;
  
  if ((((0 < param_3) && (0 < param_2)) && (param_1 != (float *)0x0)) && (param_4 != (float *)0x0))
  {
    if (0 < param_2 * param_3) {
      uVar8 = (ulonglong)(uint)(param_2 * param_3);
      pfVar5 = param_1;
      do {
        fVar13 = 2.0;
        if (*pfVar5 <= 2.0) {
          fVar13 = *pfVar5;
        }
        if (fVar13 < -2.0) {
          fVar13 = -2.0;
        }
        *pfVar5 = fVar13;
        pfVar5 = pfVar5 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    lVar12 = (longlong)param_3;
    if (0 < param_3) {
      lVar11 = (longlong)param_1 - (longlong)param_4;
      local_58 = lVar12;
      do {
        fVar13 = *param_4;
        pfVar5 = (float *)(lVar11 + (longlong)param_4);
        iVar3 = 0;
        if (0 < param_2) {
          iVar4 = 0;
          do {
            if (0.0 <= pfVar5[iVar4] * fVar13) break;
            iVar3 = iVar3 + 1;
            pfVar5[iVar4] = pfVar5[iVar4] * fVar13 * pfVar5[iVar4] + pfVar5[iVar4];
            iVar4 = iVar4 + param_3;
          } while (iVar3 < param_2);
        }
        fVar13 = *pfVar5;
        iVar3 = 0;
        do {
          iVar4 = iVar3;
          if (iVar3 < param_2) {
            iVar6 = iVar3 * param_3;
            do {
              if ((1.0 < pfVar5[iVar6]) || (pfVar5[iVar6] < -1.0)) break;
              iVar4 = iVar4 + 1;
              iVar6 = iVar6 + param_3;
            } while (iVar4 < param_2);
          }
          if (iVar4 == param_2) {
            fVar14 = 0.0;
            break;
          }
          iVar6 = iVar4 * param_3;
          fVar16 = pfVar5[iVar6];
          fVar14 = ABS(fVar16);
          iVar2 = iVar4;
          iVar10 = iVar4;
          if (0 < iVar4) {
            iVar7 = (iVar4 + -1) * param_3;
            do {
              if (fVar16 * pfVar5[iVar7] < 0.0) break;
              iVar10 = iVar10 + -1;
              iVar7 = iVar7 - param_3;
            } while (0 < iVar10);
          }
          while ((iVar7 = iVar2, iVar2 = iVar4, iVar2 < param_2 && (0.0 <= pfVar5[iVar6] * fVar16)))
          {
            fVar17 = ABS(pfVar5[iVar6]);
            fVar15 = fVar14;
            if (fVar14 < fVar17) {
              fVar15 = fVar17;
            }
            iVar6 = iVar6 + param_3;
            bVar1 = fVar17 <= fVar14;
            iVar4 = iVar2 + 1;
            fVar14 = fVar15;
            if (bVar1) {
              iVar2 = iVar7;
            }
          }
          if ((iVar10 != 0) || (fVar16 * *pfVar5 < 0.0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          fVar14 = (fVar14 - 1.0) / (fVar14 * fVar14);
          fVar14 = fVar14 + fVar14 * 2.4e-07;
          if (0.0 < fVar16) {
            fVar14 = -fVar14;
          }
          if (iVar10 < iVar2) {
            uVar8 = (ulonglong)(uint)(iVar2 - iVar10);
            pfVar9 = pfVar5 + iVar10 * param_3;
            do {
              *pfVar9 = *pfVar9 * fVar14 * *pfVar9 + *pfVar9;
              pfVar9 = pfVar9 + lVar12;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          if ((bVar1) && (1 < iVar7)) {
            fVar16 = fVar13 - *pfVar5;
            fVar17 = fVar16 / (float)iVar7;
            if (iVar3 < iVar7) {
              uVar8 = (ulonglong)(uint)(iVar7 - iVar3);
              pfVar9 = pfVar5 + iVar3 * param_3;
              do {
                fVar16 = fVar16 - fVar17;
                fVar15 = 1.0;
                if (fVar16 + *pfVar9 <= 1.0) {
                  fVar15 = fVar16 + *pfVar9;
                }
                if (fVar15 < -1.0) {
                  fVar15 = -1.0;
                }
                *pfVar9 = fVar15;
                pfVar9 = pfVar9 + lVar12;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
          }
          iVar3 = iVar2;
        } while (iVar2 != param_2);
        *param_4 = fVar14;
        param_4 = param_4 + 1;
        local_58 = local_58 + -1;
      } while (local_58 != 0);
    }
  }
  return;
}



// FUNCTION 144bca52c FUN_144bca52c body=49 status=ok
// SIG undefined FUN_144bca52c(void)

undefined8 FUN_144bca52c(int param_1,byte *param_2)

{
  byte bVar1;
  
  if (param_1 < 0xfc) {
    *param_2 = (byte)param_1;
    return 1;
  }
  bVar1 = ((byte)param_1 & 3) - 4;
  *param_2 = bVar1;
  param_2[1] = (byte)((int)(param_1 - (uint)bVar1) >> 2);
  return 2;
}



// FUNCTION 144bca560 FUN_144bca560 body=949 status=ok
// SIG undefined FUN_144bca560(void)

ulonglong FUN_144bca560(byte *param_1,int param_2,int param_3,byte *param_4,longlong param_5,
                       ushort *param_6,int *param_7,int *param_8)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  ushort *puVar14;
  ushort uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  byte bVar19;
  int local_res8;
  
  bVar19 = 0;
  local_res8 = 0;
  if ((param_6 == (ushort *)0x0) || (param_2 < 0)) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    return 0xfffffffc;
  }
  iVar5 = FUN_144bca1c8(param_1,48000);
  iVar13 = 2;
  iVar18 = 2;
  bVar1 = *param_1;
  uVar10 = param_2 - 1;
  pbVar12 = param_1 + 1;
  uVar15 = 0xffff;
  uVar11 = uVar10;
  if ((bVar1 & 3) == 0) {
    uVar17 = 1;
  }
  else if ((bVar1 & 3) == 1) {
    uVar17 = 2;
    bVar19 = 1;
    if (param_3 == 0) {
      if ((uVar10 & 1) != 0) {
        return 0xfffffffc;
      }
      *param_6 = (ushort)((int)uVar10 / 2);
      uVar10 = (int)uVar10 / 2;
    }
  }
  else {
    uVar4 = 0xffff;
    if ((bVar1 & 3) == 2) {
      uVar17 = 2;
      if ((int)uVar10 < 1) {
        uVar4 = 0xffff;
        iVar13 = -1;
      }
      else if (*pbVar12 < 0xfc) {
        uVar4 = (ushort)*pbVar12;
        iVar13 = 1;
      }
      else if ((int)uVar10 < 2) {
        iVar13 = -1;
      }
      else {
        uVar4 = (ushort)*pbVar12 + (ushort)param_1[2] * 4;
      }
      uVar11 = uVar10 - iVar13;
      *param_6 = uVar4;
      if ((short)uVar4 < 0) {
        return 0xfffffffc;
      }
      if ((int)uVar11 < (int)(short)uVar4) {
        return 0xfffffffc;
      }
      pbVar12 = pbVar12 + iVar13;
      uVar10 = uVar11 - (int)(short)uVar4;
    }
    else {
      if ((int)uVar10 < 1) {
        return 0xfffffffc;
      }
      bVar19 = *pbVar12;
      pbVar12 = param_1 + 2;
      uVar16 = bVar19 & 0x3f;
      uVar17 = (ulonglong)uVar16;
      if ((bVar19 & 0x3f) == 0) {
        return 0xfffffffc;
      }
      if (0x1680 < (int)(uVar16 * iVar5)) {
        return 0xfffffffc;
      }
      uVar11 = param_2 - 2;
      iVar13 = 0;
      if ((bVar19 & 0x40) != 0) {
        do {
          if ((int)uVar11 < 1) {
            return 0xfffffffc;
          }
          bVar2 = *pbVar12;
          uVar8 = (uint)bVar2;
          pbVar12 = pbVar12 + 1;
          if (bVar2 == 0xff) {
            uVar8 = 0xfe;
          }
          local_res8 = local_res8 + uVar8;
          uVar11 = uVar11 + (-1 - uVar8);
        } while (bVar2 == 0xff);
      }
      if ((int)uVar11 < 0) {
        return 0xfffffffc;
      }
      bVar19 = ~(bVar19 >> 7) & 1;
      if (bVar19 == 0) {
        puVar14 = param_6;
        uVar10 = uVar11;
        if (0 < (int)(uVar16 - 1)) {
          do {
            if ((int)uVar11 < 1) {
              uVar3 = 0xffff;
              iVar5 = -1;
            }
            else if (*pbVar12 < 0xfc) {
              uVar3 = (ushort)*pbVar12;
              iVar5 = 1;
            }
            else {
              uVar3 = uVar4;
              iVar5 = -1;
              if (1 < (int)uVar11) {
                uVar3 = (ushort)*pbVar12 + (ushort)pbVar12[1] * 4;
                iVar5 = 2;
              }
            }
            uVar11 = uVar11 - iVar5;
            *puVar14 = uVar3;
            if ((short)uVar3 < 0) {
              return 0xfffffffc;
            }
            if ((int)uVar11 < (int)(short)uVar3) {
              return 0xfffffffc;
            }
            iVar13 = iVar13 + 1;
            pbVar12 = pbVar12 + iVar5;
            uVar10 = uVar10 - ((short)uVar3 + iVar5);
            puVar14 = puVar14 + 1;
          } while (iVar13 < (int)(uVar16 - 1));
        }
        if ((int)uVar10 < 0) {
          return 0xfffffffc;
        }
      }
      else if (param_3 == 0) {
        uVar10 = (int)uVar11 / (int)uVar16;
        if (uVar16 * uVar10 != uVar11) {
          return 0xfffffffc;
        }
        if (0 < (int)(uVar16 - 1)) {
          puVar14 = param_6;
          for (uVar6 = uVar17 * 2 - 2 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar14 = (ushort)uVar10;
            puVar14 = puVar14 + 1;
          }
        }
      }
    }
  }
  if (param_3 == 0) {
    if (0x4fb < (int)uVar10) {
      return 0xfffffffc;
    }
    (param_6 + -1)[uVar17] = (ushort)uVar10;
    goto LAB_144bca898;
  }
  if ((int)uVar11 < 1) {
LAB_144bca7f8:
    iVar18 = -1;
  }
  else if (*pbVar12 < 0xfc) {
    uVar15 = (ushort)*pbVar12;
    iVar18 = 1;
  }
  else {
    if ((int)uVar11 < 2) goto LAB_144bca7f8;
    uVar15 = (ushort)pbVar12[1] * 4 + (ushort)*pbVar12;
  }
  (param_6 + -1)[uVar17] = uVar15;
  lVar7 = 0;
  lVar9 = uVar17 - 1;
  if ((-1 < (short)param_6[lVar9]) &&
     (iVar13 = (int)(short)param_6[lVar9], iVar13 <= (int)(uVar11 - iVar18))) {
    pbVar12 = pbVar12 + iVar18;
    if (bVar19 == 0) {
      if (iVar13 + iVar18 <= (int)uVar10) goto LAB_144bca898;
    }
    else if (iVar13 * (int)uVar17 <= (int)(uVar11 - iVar18)) {
      if (0 < lVar9) {
        do {
          param_6[lVar7] = (param_6 + -1)[uVar17];
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar9);
      }
LAB_144bca898:
      lVar7 = 0;
      if (param_7 != (int *)0x0) {
        *param_7 = (int)pbVar12 - (int)param_1;
      }
      if ((int)uVar17 != 0) {
        do {
          if (param_5 != 0) {
            *(byte **)(param_5 + lVar7 * 8) = pbVar12;
          }
          puVar14 = param_6 + lVar7;
          lVar7 = lVar7 + 1;
          pbVar12 = pbVar12 + (short)*puVar14;
        } while (lVar7 < (longlong)uVar17);
      }
      if (param_8 != (int *)0x0) {
        *param_8 = ((int)pbVar12 - (int)param_1) + local_res8;
      }
      if (param_4 != (byte *)0x0) {
        *param_4 = bVar1;
        return uVar17;
      }
      return uVar17;
    }
  }
  return 0xfffffffc;
}



// FUNCTION 144bca918 FUN_144bca918 body=37 status=ok
// SIG undefined FUN_144bca918(void)

char * FUN_144bca918(int param_1)

{
  if (param_1 + 7U < 8) {
    return (&PTR_s_success_14997ea70)[-(longlong)param_1];
  }
  return "unknown error";
}



// FUNCTION 144bca940 FUN_144bca940 body=67 status=ok
// SIG undefined FUN_144bca940(void)

void FUN_144bca940(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = __acrt_iob_func(2);
  FUN_146c958a0(uVar1,"Fatal (internal) error in %s, line %d: %s\n",param_2,param_3,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



// FUNCTION 144bca984 FUN_144bca984 body=108 status=ok
// SIG undefined FUN_144bca984(void)

undefined8 FUN_144bca984(int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_1 == 8000) {
    uVar2 = 6;
  }
  else if (param_1 == 12000) {
    uVar2 = 4;
  }
  else if (param_1 == 16000) {
    uVar2 = 3;
  }
  else if (param_1 == 24000) {
    uVar2 = 2;
  }
  else {
    if (param_1 != 48000) {
      FUN_144bca940("assertion failed: 0","../../../third_party/opus/src/celt/celt.c",0x54);
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return uVar2;
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 144bca9f0 FUN_144bca9f0 body=846 status=ok
// SIG undefined FUN_144bca9f0(void)

void FUN_144bca9f0(void *param_1,void *param_2,uint param_3,uint param_4,int param_5,float param_6,
                  float param_7,int param_8,int param_9,longlong param_10,int param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if ((param_6 == 0.0) && (param_7 == 0.0)) {
    if (param_2 == param_1) {
      return;
    }
  }
  else {
    lVar9 = (longlong)param_8;
    uVar8 = 0xf;
    if (0xf < (int)param_3) {
      uVar8 = param_3;
    }
    fVar1 = *(float *)(&DAT_14997ea48 + lVar9 * 0xc);
    uVar13 = 0xf;
    if (0xf < (int)param_4) {
      uVar13 = param_4;
    }
    lVar14 = (longlong)param_9;
    fVar2 = *(float *)(&DAT_14997ea4c + lVar9 * 0xc);
    fVar3 = *(float *)(&DAT_14997ea50 + lVar9 * 0xc);
    fVar4 = *(float *)(&DAT_14997ea48 + lVar14 * 0xc);
    fVar5 = *(float *)(&DAT_14997ea4c + lVar14 * 0xc);
    fVar6 = *(float *)(&DAT_14997ea50 + lVar14 * 0xc);
    if (((param_6 == param_7) && (uVar8 == uVar13)) && (param_8 == param_9)) {
      param_11 = 0;
    }
    lVar9 = (longlong)param_11;
    iVar10 = 0;
    if (0 < param_11) {
      lVar12 = (longlong)(int)uVar8;
      lVar11 = lVar12 * 4 - (longlong)param_2;
      pfVar15 = (float *)((longlong)param_2 + lVar12 * -4 + -4);
      lVar14 = lVar9;
      fVar17 = *(float *)((longlong)param_2 + (longlong)(int)~uVar13 * 4);
      fVar19 = *(float *)((longlong)param_2 + (longlong)(int)(-2 - uVar13) * 4);
      fVar7 = *(float *)((longlong)param_2 + (longlong)(int)(1 - uVar13) * 4);
      fVar21 = *(float *)((longlong)param_2 + (longlong)(int)uVar13 * -4);
      do {
        fVar20 = fVar7;
        fVar18 = fVar17;
        fVar17 = *(float *)(param_10 + lVar11 + 4 + (longlong)pfVar15);
        fVar7 = pfVar15[(lVar12 - (int)uVar13) + 3];
        fVar17 = fVar17 * fVar17;
        fVar16 = 1.0 - fVar17;
        *(float *)((longlong)pfVar15 + (longlong)param_1 + lVar11 + 4) =
             (pfVar15[2] + *pfVar15) * fVar16 * param_6 * fVar2 +
             fVar16 * param_6 * fVar1 * pfVar15[1] + pfVar15[lVar12 + 1] +
             (pfVar15[3] + pfVar15[-1]) * fVar16 * param_6 * fVar3 +
             fVar17 * param_7 * fVar4 * fVar21 + fVar17 * param_7 * fVar5 * (fVar18 + fVar20) +
             (fVar7 + fVar19) * fVar17 * param_7 * fVar6;
        pfVar15 = pfVar15 + 1;
        lVar14 = lVar14 + -1;
        fVar17 = fVar21;
        fVar19 = fVar18;
        fVar21 = fVar20;
        iVar10 = param_11;
      } while (lVar14 != 0);
    }
    if (param_7 != 0.0) {
      FUN_144f37614((void *)((longlong)param_1 + (longlong)iVar10 * 4),
                    (void *)((longlong)param_2 + (longlong)iVar10 * 4),uVar13,param_5 - iVar10,
                    param_7 * fVar4,param_7 * fVar5,param_7 * fVar6);
      return;
    }
    if (param_2 == param_1) {
      return;
    }
    param_2 = (void *)((longlong)param_2 + lVar9 * 4);
    param_5 = param_5 - param_11;
    param_1 = (void *)((longlong)param_1 + lVar9 * 4);
  }
  memmove(param_1,param_2,(longlong)param_5 << 2);
  return;
}



// FUNCTION 144bcad40 FUN_144bcad40 body=158 status=ok
// SIG undefined FUN_144bcad40(void)

void FUN_144bcad40(longlong param_1,int *param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar2 = *(int *)(param_1 + 8);
  uVar5 = 0;
  if (0 < iVar2) {
    uVar1 = uVar5;
    do {
      iVar3 = (int)uVar5;
      uVar4 = iVar3 + 1;
      uVar5 = (ulonglong)uVar4;
      *param_2 = (int)(((int)*(short *)(uVar1 + 2 + *(longlong *)(param_1 + 0x20)) -
                        (int)*(short *)(uVar1 + *(longlong *)(param_1 + 0x20)) <<
                       ((byte)param_3 & 0x1f)) *
                       (*(byte *)((longlong)((param_4 + param_3 * 2 + -1) * iVar2 + iVar3) +
                                 *(longlong *)(param_1 + 0x98)) + 0x40) * param_4) >> 2;
      param_2 = param_2 + 1;
      iVar2 = *(int *)(param_1 + 8);
      uVar1 = uVar1 + 2;
    } while ((int)uVar4 < iVar2);
  }
  return;
}



// FUNCTION 144bcade0 FUN_144bcade0 body=86 status=ok
// SIG undefined FUN_144bcade0(void)

void FUN_144bcade0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (ulonglong *)FUN_1458341fc();
  __stdio_common_vsscanf(*puVar1 | 1,param_1,0xffffffffffffffff,param_2,0,&local_res18);
  return;
}



// FUNCTION 144bcae40 agsCheckDriverVersion body=158 status=ok
// SIG undefined agsCheckDriverVersion(void)

undefined8 agsCheckDriverVersion(longlong param_1,uint param_2)

{
  int iVar1;
  int local_res8 [4];
  uint local_res18 [2];
  uint local_res20 [2];
  
                    /* 0x4bcae40  437  agsCheckDriverVersion */
  if (param_1 != 0) {
    local_res8[0] = 0;
    local_res18[0] = 0;
    local_res20[0] = 0;
    iVar1 = FUN_144bcade0(param_1,"%d.%d.%d",local_res8,local_res18,local_res20);
    if (iVar1 == 2) {
      if ((param_2 & 0xfffff000) < (local_res8[0] << 10 | local_res18[0]) << 0xc) {
        return 0;
      }
    }
    else if ((((2 < iVar1) && (0 < local_res8[0])) && (-1 < (int)local_res18[0])) &&
            (-1 < (int)local_res20[0])) {
      if (param_2 <= ((local_res8[0] << 10 | local_res18[0]) << 0xc | local_res20[0])) {
        return 0;
      }
      return 1;
    }
  }
  return 2;
}



// FUNCTION 144bcaee0 FUN_144bcaee0 body=205 status=ok
// SIG undefined FUN_144bcaee0(void)

void FUN_144bcaee0(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  char *_Dst;
  char *_Src;
  undefined1 auStack_438 [32];
  char local_418 [512];
  char local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_438;
  pcVar1 = *(code **)(param_1 + 200);
  if (pcVar1 == (code *)0x0) {
    pcVar1 = *(code **)(param_1 + 0xc0);
    if (pcVar1 == (code *)0x0) goto LAB_144bcaf9d;
    memset(local_418,0,0x300);
    uVar2 = (*pcVar1)(*(undefined8 *)(param_1 + 8),local_418);
    if (1 < uVar2) goto LAB_144bcaf9d;
    _Dst = (char *)(param_1 + 0x208);
    _Src = local_418;
  }
  else {
    memset(local_418,0,0x400);
    uVar2 = (*pcVar1)(*(undefined8 *)(param_1 + 8),local_418);
    if (1 < uVar2) goto LAB_144bcaf9d;
    strcpy_s((char *)(param_1 + 0x208),0x100,local_418);
    _Dst = (char *)(param_1 + 0x308);
    _Src = local_218;
  }
  strcpy_s(_Dst,0x100,_Src);
LAB_144bcaf9d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_438);
}



// FUNCTION 144bcafc0 FUN_144bcafc0 body=53 status=ok
// SIG undefined FUN_144bcafc0(void)

HMODULE FUN_144bcafc0(LPCSTR param_1,LPCSTR param_2)

{
  HMODULE pHVar1;
  
  if ((param_1 != (LPCSTR)0x0) && (pHVar1 = LoadLibraryA(param_1), pHVar1 != (HMODULE)0x0)) {
    return pHVar1;
  }
  if (param_2 == (LPCSTR)0x0) {
    return (HMODULE)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x000144bcafe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryA(param_2);
  return pHVar1;
}



// FUNCTION 144bcb000 FUN_144bcb000 body=50 status=ok
// SIG undefined FUN_144bcb000(void)

longlong FUN_144bcb000(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_1 != 0) && (lVar1 = FUN_144bcb040(), lVar1 != 0)) {
    return lVar1;
  }
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = FUN_144bcb040(param_2);
  return lVar1;
}



// FUNCTION 144bcb040 FUN_144bcb040 body=99 status=ok
// SIG undefined FUN_144bcb040(void)

void FUN_144bcb040(LPCSTR param_1)

{
  HMODULE hModule;
  undefined1 auStack_438 [32];
  CHAR local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_438;
  hModule = GetModuleHandleA(param_1);
  if (hModule != (HMODULE)0x0) {
    GetModuleFileNameA(hModule,local_418,0x400);
    LoadLibraryA(local_418);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_438);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_438);
}



// FUNCTION 144bcb0c0 agsGetVersionNumber body=6 status=ok
// SIG undefined agsGetVersionNumber(void)

undefined8 agsGetVersionNumber(void)

{
                    /* 0x4bcb0c0  465  agsGetVersionNumber */
  return 0x1800001;
}



// FUNCTION 144bcb0d0 agsInitialize body=795 status=ok
// SIG undefined agsInitialize(void)

void agsInitialize(int param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  longlong *_Dst;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  DWORD iDevNum;
  longlong lVar10;
  undefined1 auStack_1f8 [32];
  _DISPLAY_DEVICEA local_1d8;
  ulonglong local_28;
  
                    /* 0x4bcb0d0  466  agsInitialize */
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if ((param_1 == 0x1800001) && (param_3 != (undefined8 *)0x0)) {
    if ((param_2 != (longlong *)0x0) &&
       (((code *)*param_2 != (code *)0x0 && ((code *)param_2[1] != (code *)0x0)))) {
      DAT_14c7839c8 = (code *)*param_2;
      DAT_14c7839d0 = (code *)param_2[1];
    }
    if (DAT_14c7839c8 == (code *)0x0) {
      _Dst = malloc(0x428);
    }
    else {
      _Dst = (longlong *)(*DAT_14c7839c8)();
    }
    *param_3 = _Dst;
    if (_Dst != (longlong *)0x0) {
      memset(_Dst,0,0x428);
      lVar6 = FUN_144bcafc0("atiadlxx.dll","atiadlxy.dll");
      *_Dst = lVar6;
      if (lVar6 == 0) {
        *param_3 = 0;
        if (DAT_14c7839d0 == (code *)0x0) {
          free(_Dst);
        }
        else {
          (*DAT_14c7839d0)();
        }
      }
      else {
        iVar5 = FUN_144bcb5d0(_Dst);
        pcVar4 = DAT_14c7839d0;
        if (iVar5 == 0) {
          iVar5 = (*(code *)_Dst[2])(&LAB_144bcb5b0,1,_Dst + 1);
          pcVar4 = DAT_14c7839d0;
          if (iVar5 == 0) {
            SetEnvironmentVariableW(L"ADL_4KWORKAROUND_CANCEL",L"TRUE");
            FUN_144f39850(_Dst);
            iDevNum = 0;
            memset(local_1d8.DeviceName,0,0x1a4);
            local_1d8.cb = 0x1a8;
            iVar5 = EnumDisplayDevicesA((LPCSTR)0x0,0,&local_1d8,0);
            while (iVar5 != 0) {
              if (((byte)local_1d8.StateFlags & 4) != 0) {
                iVar5 = 0;
                if (0 < (int)_Dst[0x84]) {
                  lVar6 = 0;
                  do {
                    lVar3 = _Dst[0x83];
                    pcVar7 = (char *)(lVar3 + 0x218 + lVar6);
                    lVar10 = 4 - (longlong)pcVar7;
                    do {
                      cVar1 = *pcVar7;
                      cVar2 = pcVar7[(longlong)&local_1d8 + lVar10];
                      if (cVar1 != cVar2) break;
                      pcVar7 = pcVar7 + 1;
                    } while (cVar2 != '\0');
                    if (cVar1 == cVar2) {
                      lVar10 = 0;
                      if (0 < (int)_Dst[0x82]) {
                        lVar9 = _Dst[0x81];
                        do {
                          lVar8 = (longlong)*(int *)(lVar9 + 0x70) * 0x624;
                          if ((*(int *)(lVar8 + 0x10c + lVar3) == *(int *)(lVar6 + 0x10c + lVar3))
                             && (*(int *)(lVar8 + 0x108 + lVar3) == *(int *)(lVar6 + 0x108 + lVar3))
                             ) {
                            *(uint *)(lVar9 + 0xc) = *(uint *)(lVar9 + 0xc) | 2;
                            break;
                          }
                          lVar10 = lVar10 + 1;
                          lVar9 = lVar9 + 0x78;
                        } while (lVar10 < (int)_Dst[0x82]);
                      }
                    }
                    iVar5 = iVar5 + 1;
                    lVar6 = lVar6 + 0x624;
                  } while (iVar5 < (int)_Dst[0x84]);
                }
                break;
              }
              iDevNum = iDevNum + 1;
              iVar5 = EnumDisplayDevicesA((LPCSTR)0x0,iDevNum,&local_1d8,0);
            }
            if (param_4 != (longlong *)0x0) {
              *param_4 = (longlong)(_Dst + 0x41);
              param_4[1] = (longlong)(_Dst + 0x61);
              param_4[3] = _Dst[0x81];
              *(int *)(param_4 + 2) = (int)_Dst[0x82];
              FUN_144bcaee0(_Dst);
              FUN_144f39c20(_Dst);
              FUN_144f3b4f0(_Dst);
            }
          }
          else {
            *param_3 = 0;
            if (pcVar4 == (code *)0x0) {
              free(_Dst);
            }
            else {
              (*pcVar4)();
            }
          }
        }
        else {
          *param_3 = 0;
          if (pcVar4 == (code *)0x0) {
            free(_Dst);
          }
          else {
            (*pcVar4)();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_1f8);
}



// FUNCTION 144bcb400 agsDeInitialize body=317 status=ok
// SIG undefined agsDeInitialize(void)

undefined4 agsDeInitialize(undefined8 *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
                    /* 0x4bcb400  438  agsDeInitialize */
  if (param_1 == (undefined8 *)0x0) {
    return 2;
  }
  uVar1 = 0;
  uVar3 = uVar1;
  if (0 < *(int *)(param_1 + 0x82)) {
    do {
      puVar4 = (undefined8 *)(param_1[0x81] + 0x50 + uVar1);
      if ((puVar4 != (undefined8 *)0x0) && ((void *)*puVar4 != (void *)0x0)) {
        if (DAT_14c7839d0 == (code *)0x0) {
          free((void *)*puVar4);
        }
        else {
          (*DAT_14c7839d0)();
        }
        *puVar4 = 0;
      }
      uVar2 = (int)uVar3 + 1;
      uVar1 = uVar1 + 0x78;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < *(int *)(param_1 + 0x82));
  }
  puVar4 = param_1 + 0x83;
  if ((puVar4 != (undefined8 *)0x0) && ((void *)*puVar4 != (void *)0x0)) {
    if (DAT_14c7839d0 == (code *)0x0) {
      free((void *)*puVar4);
    }
    else {
      (*DAT_14c7839d0)();
    }
    *puVar4 = 0;
  }
  puVar4 = param_1 + 0x81;
  if ((puVar4 != (undefined8 *)0x0) && ((void *)*puVar4 != (void *)0x0)) {
    if (DAT_14c7839d0 == (code *)0x0) {
      free((void *)*puVar4);
    }
    else {
      (*DAT_14c7839d0)();
    }
    *puVar4 = 0;
  }
  if (((code *)param_1[3] != (code *)0x0) && (param_1[1] != 0)) {
    (*(code *)param_1[3])();
    param_1[1] = 0;
  }
  if ((HMODULE)*param_1 != (HMODULE)0x0) {
    FreeLibrary((HMODULE)*param_1);
    *param_1 = 0;
  }
  if (DAT_14c7839d0 == (code *)0x0) {
    free(param_1);
    return 0;
  }
  (*DAT_14c7839d0)();
  return 0;
}



// FUNCTION 144bcb540 FUN_144bcb540 body=22 status=ok
// SIG undefined FUN_144bcb540(void)

void FUN_144bcb540(size_t param_1)

{
  if (DAT_14c7839c8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144bcb54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14c7839c8)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144bcb54f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  malloc(param_1);
  return;
}



// FUNCTION 144bcb560 FUN_144bcb560 body=67 status=ok
// SIG undefined FUN_144bcb560(void)

void FUN_144bcb560(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) && ((void *)*param_1 != (void *)0x0)) {
    if (DAT_14c7839d0 != (code *)0x0) {
      (*DAT_14c7839d0)();
      *param_1 = 0;
      return;
    }
    free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 144bcb5d0 FUN_144bcb5d0 body=820 status=ok
// SIG undefined FUN_144bcb5d0(void)

undefined8 FUN_144bcb5d0(undefined8 *param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Main_Control_Create");
  param_1[2] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Main_Control_Destroy");
  param_1[3] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Adapter_NumberOfAdapters_Get");
  param_1[4] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Adapter_AdapterInfoX2_Get");
  param_1[5] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Adapter_AdapterInfoX4_Get");
  param_1[6] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Adapter_MemoryInfo_Get");
  param_1[7] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Adapter_MemoryInfo2_Get");
  param_1[8] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Adapter_Graphic_Core_Info_Get");
  param_1[9] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_GcnAsicInfo_Get");
  param_1[10] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Adapter_ASICFamilyType_Get");
  param_1[0xb] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL_Adapter_ObservedGameClockInfo_Get");
  param_1[0xc] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Overdrive_Caps");
  param_1[0xd] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Overdrive6_Capabilities_Get");
  param_1[0xe] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Overdrive6_StateInfo_Get");
  param_1[0xf] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_OverdriveN_Capabilities_Get");
  param_1[0x10] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_OverdriveN_SystemClocks_Get");
  param_1[0x11] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_OverdriveN_MemoryClocks_Get");
  param_1[0x12] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_OverdriveN_PowerLimit_Get");
  param_1[0x13] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_OverdriveN_CapabilitiesX2_Get");
  param_1[0x14] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_OverdriveN_SystemClocksX2_Get");
  param_1[0x15] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_OverdriveN_MemoryClocksX2_Get");
  param_1[0x16] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Overdrive8_Init_Setting_Get");
  param_1[0x17] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Graphics_Versions_Get");
  param_1[0x18] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Graphics_VersionsX2_Get");
  param_1[0x19] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Display_DisplayMapConfig_Get");
  param_1[0x1a] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Display_SLSMapIndex_Get");
  param_1[0x1b] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Display_SLSMapConfig_Get");
  param_1[0x1c] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Display_Modes_Get");
  param_1[0x1d] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Display_SourceContentAttribute_Get");
  param_1[0x1e] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Display_SourceContentAttribute_Set");
  param_1[0x1f] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Display_DDCInfo2_Get");
  param_1[0x20] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Display_DisplayInfo_Get");
  param_1[0x21] = pFVar1;
  pFVar1 = GetProcAddress((HMODULE)*param_1,"ADL2_Display_FreeSync_Cap");
  param_1[0x22] = pFVar1;
  if ((((((param_1[2] != 0) && (param_1[3] != 0)) && (param_1[0x18] != 0)) &&
       ((param_1[4] != 0 && (param_1[5] != 0)))) &&
      ((param_1[7] != 0 && ((param_1[0x1a] != 0 && (param_1[0x1b] != 0)))))) && (param_1[0x1d] != 0)
     ) {
    return 0;
  }
  return 5;
}



// FUNCTION 144bcb910 agsDriverExtensionsDX11_CreateDevice body=959 status=ok
// SIG undefined agsDriverExtensionsDX11_CreateDevice(void)

undefined8
agsDriverExtensionsDX11_CreateDevice
          (longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  int iVar2;
  HMODULE pHVar3;
  FARPROC pFVar4;
  undefined8 uVar5;
  FARPROC pFVar6;
  FARPROC pFVar7;
  FARPROC pFVar8;
  undefined8 *puVar10;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined *local_38;
  ulonglong local_30;
  INT_PTR IVar9;
  
                    /* 0x4bcb910  440  agsDriverExtensionsDX11_CreateDevice */
  if (((param_1 == 0) || (param_2 == (undefined8 *)0x0)) || (param_4 == (undefined8 *)0x0)) {
    return 2;
  }
  puVar10 = (undefined8 *)0x0;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[5] = 0;
  param_4[3] = 0x9100;
  *(undefined4 *)(param_4 + 4) = 1;
  if ((0 < *(int *)(param_1 + 0x410)) && (*(int *)(*(longlong *)(param_1 + 0x408) + 0x10) == 0x1002)
     ) {
    iVar2 = *(int *)(param_3 + 4);
    *(int *)(param_1 + 0x118) = iVar2;
    if ((iVar2 == 1) || (iVar2 == 2)) {
      pHVar3 = (HMODULE)FUN_144bcafc0("aticfx64.dll","aticfx32.dll");
      *(HMODULE *)(param_1 + 0x120) = pHVar3;
      if ((pHVar3 != (HMODULE)0x0) &&
         (pFVar4 = GetProcAddress(pHVar3,"AmdExtRequestMgpuAppControl"), pFVar4 != (FARPROC)0x0)) {
        if (*(int *)(param_1 + 0x118) == 2) {
          uVar5 = 2;
        }
        else {
          if (*(int *)(param_1 + 0x118) != 1) goto LAB_144bcb9e6;
          uVar5 = 3;
        }
        (*pFVar4)(uVar5);
      }
    }
  }
LAB_144bcb9e6:
  uVar5 = FUN_144bcc7e0(param_1);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  pHVar3 = LoadLibraryA("d3d11.dll");
  *(HMODULE *)(param_1 + 0x128) = pHVar3;
  if (pHVar3 == (HMODULE)0x0) {
    return 4;
  }
  pFVar4 = GetProcAddress(pHVar3,"D3D11CreateDeviceAndSwapChain");
  pFVar6 = GetProcAddress(*(HMODULE *)(param_1 + 0x128),"D3D11CreateDevice");
  if ((pFVar6 == (FARPROC)0x0) || (pFVar4 == (FARPROC)0x0)) {
    return 5;
  }
  pFVar7 = GetProcAddress(*(HMODULE *)(param_1 + 0x130),"AmdD3D11CreateDeviceExt");
  pFVar8 = GetProcAddress(*(HMODULE *)(param_1 + 0x130),"AmdD3D11CreateDeviceAndSwapChainExt");
  if ((pFVar7 == (FARPROC)0x0) || (pFVar8 == (FARPROC)0x0)) {
    if (param_2[6] == 0) {
      IVar9 = (*pFVar6)(*param_2,(ulonglong)*(uint *)(param_2 + 1),param_2[2],
                        (ulonglong)*(uint *)(param_2 + 3),param_2[4],*(undefined4 *)(param_2 + 5),
                        *(undefined4 *)((longlong)param_2 + 0x2c),param_4,param_4 + 3,param_4 + 1);
      iVar2 = (int)IVar9;
    }
    else {
      IVar9 = (*pFVar4)();
      iVar2 = (int)IVar9;
    }
  }
  else {
    local_58 = 0;
    local_50 = 0;
    local_48 = (undefined *)0x0;
    local_40 = 0;
    local_38 = (undefined *)0x0;
    local_30 = 0;
    if ((param_3 != (undefined8 *)0x0) &&
       ((puVar1 = (undefined *)*param_3, puVar1 != (undefined *)0x0 || (param_3[1] != 0)))) {
      local_58 = 2;
      puVar10 = &local_58;
      local_48 = &DAT_14997f29c;
      if (puVar1 != (undefined *)0x0) {
        local_48 = puVar1;
      }
      local_40 = (ulonglong)*(uint *)(param_3 + 2);
      local_38 = &DAT_14997f29c;
      if ((undefined *)param_3[1] != (undefined *)0x0) {
        local_38 = (undefined *)param_3[1];
      }
      local_30 = (ulonglong)*(uint *)((longlong)param_3 + 0x14);
    }
    if (param_2[6] == 0) {
      IVar9 = (*pFVar7)(*param_2,(ulonglong)*(uint *)(param_2 + 1),param_2[2],
                        (ulonglong)*(uint *)(param_2 + 3),param_2[4],*(undefined4 *)(param_2 + 5),
                        *(undefined4 *)((longlong)param_2 + 0x2c),param_4,param_4 + 3,param_4 + 1,
                        puVar10);
      iVar2 = (int)IVar9;
    }
    else {
      IVar9 = (*pFVar8)();
      iVar2 = (int)IVar9;
    }
    if (iVar2 == 0) {
      *(uint *)((longlong)param_4 + 0x1c) = *(uint *)((longlong)param_4 + 0x1c) | 0x800;
      goto LAB_144bcbbe3;
    }
  }
  if (iVar2 < 0) {
    return 1;
  }
LAB_144bcbbe3:
  FUN_144bcc860(param_1,param_3,param_4);
  return 0;
}



// FUNCTION 144bcbcd0 agsDriverExtensionsDX11_DestroyDevice body=233 status=ok
// SIG undefined agsDriverExtensionsDX11_DestroyDevice(void)

undefined8
agsDriverExtensionsDX11_DestroyDevice
          (longlong param_1,longlong *param_2,undefined4 *param_3,longlong *param_4,
          undefined4 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
                    /* 0x4bcbcd0  443  agsDriverExtensionsDX11_DestroyDevice */
  if ((param_1 == 0) || (param_2 == (longlong *)0x0)) {
    uVar2 = 2;
  }
  else if (*(longlong **)(param_1 + 0x138) == param_2) {
    FUN_144bccde0();
    if (param_4 != (longlong *)0x0) {
      uVar1 = (**(code **)(*param_4 + 0x10))(param_4);
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = uVar1;
      }
    }
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = uVar1;
    }
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (*(HMODULE *)(param_1 + 0x128) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(param_1 + 0x128));
      *(undefined8 *)(param_1 + 0x128) = 0;
    }
    if (*(HMODULE *)(param_1 + 0x130) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(param_1 + 0x130));
      *(undefined8 *)(param_1 + 0x130) = 0;
    }
    if (*(HMODULE *)(param_1 + 0x120) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(param_1 + 0x120));
      *(undefined8 *)(param_1 + 0x120) = 0;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 144bcbdc0 agsDriverExtensionsDX11_WriteBreadcrumb body=190 status=ok
// SIG undefined agsDriverExtensionsDX11_WriteBreadcrumb(void)

byte agsDriverExtensionsDX11_WriteBreadcrumb(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  undefined8 local_10;
  
                    /* 0x4bcbdc0  457  agsDriverExtensionsDX11_WriteBreadcrumb */
  if (((param_1 != 0) && (param_2 != (undefined8 *)0x0)) &&
     (*(uint *)((longlong)param_2 + 0xc) < *(uint *)(param_1 + 0x1b0))) {
    plVar1 = *(longlong **)(param_1 + 0x198);
    if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x1a0) != 0)) {
      if (*(int *)(param_2 + 1) == 0) {
        local_18 = 1;
      }
      else {
        local_18._0_4_ = 0;
        if (*(int *)(param_2 + 1) == 1) {
          local_18._0_4_ = 2;
        }
        local_18 = (ulonglong)(uint)local_18;
      }
      local_28 = *param_2;
      local_20 = (ulonglong)(*(uint *)((longlong)param_2 + 0xc) * 8);
      local_10 = *(undefined8 *)(param_1 + 0x1a8);
      iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,&local_28);
      return -(iVar2 != 0) & 9;
    }
    return 7;
  }
  return 2;
}



// FUNCTION 144bcbe80 agsDriverExtensionsDX11_IASetPrimitiveTopology body=86 status=ok
// SIG undefined agsDriverExtensionsDX11_IASetPrimitiveTopology(void)

byte agsDriverExtensionsDX11_IASetPrimitiveTopology(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
                    /* 0x4bcbe80  446  agsDriverExtensionsDX11_IASetPrimitiveTopology */
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x138) == 0)) {
    return 2;
  }
  plVar1 = *(longlong **)(param_1 + 0x150);
  if ((plVar1 != (longlong *)0x0) && ((param_2 != 9 || ((*(byte *)(param_1 + 0x148) & 2) != 0)))) {
    iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    return -(iVar2 != 0) & 9;
  }
  return 7;
}



// FUNCTION 144bcbee0 agsDriverExtensionsDX11_BeginUAVOverlap body=116 status=ok
// SIG undefined agsDriverExtensionsDX11_BeginUAVOverlap(void)

undefined8 agsDriverExtensionsDX11_BeginUAVOverlap(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
                    /* 0x4bcbee0  439  agsDriverExtensionsDX11_BeginUAVOverlap */
  if (param_1 == 0) {
    return 2;
  }
  plVar1 = *(longlong **)(param_1 + 0x158);
  if (plVar1 == (longlong *)0x0) {
    return 7;
  }
  if ((*(uint *)(param_1 + 0x148) & 0x4000) == 0) {
    if ((param_2 != 0) && (param_2 != *(longlong *)(param_1 + 0x140))) {
      return 7;
    }
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  else {
    if (param_2 == 0) {
      param_2 = *(longlong *)(param_1 + 0x140);
    }
    uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
  }
  if ((int)uVar2 != 0) {
    return 9;
  }
  return uVar2;
}



// FUNCTION 144bcbf60 agsDriverExtensionsDX11_EndUAVOverlap body=116 status=ok
// SIG undefined agsDriverExtensionsDX11_EndUAVOverlap(void)

undefined8 agsDriverExtensionsDX11_EndUAVOverlap(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
                    /* 0x4bcbf60  444  agsDriverExtensionsDX11_EndUAVOverlap */
  if (param_1 == 0) {
    return 2;
  }
  plVar1 = *(longlong **)(param_1 + 0x158);
  if (plVar1 == (longlong *)0x0) {
    return 7;
  }
  if ((*(uint *)(param_1 + 0x148) & 0x4000) == 0) {
    if ((param_2 != 0) && (param_2 != *(longlong *)(param_1 + 0x140))) {
      return 7;
    }
    uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  else {
    if (param_2 == 0) {
      param_2 = *(longlong *)(param_1 + 0x140);
    }
    uVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  if ((int)uVar2 != 0) {
    return 9;
  }
  return uVar2;
}



// FUNCTION 144bcbfe0 agsDriverExtensionsDX11_SetDepthBounds body=151 status=ok
// SIG undefined agsDriverExtensionsDX11_SetDepthBounds(void)

undefined8
agsDriverExtensionsDX11_SetDepthBounds
          (longlong param_1,longlong param_2,undefined1 param_3,undefined4 param_4,
          undefined4 param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  
                    /* 0x4bcbfe0  453  agsDriverExtensionsDX11_SetDepthBounds */
  if (param_1 == 0) {
    return 2;
  }
  plVar1 = *(longlong **)(param_1 + 0x160);
  if (plVar1 == (longlong *)0x0) {
    return 7;
  }
  if ((*(uint *)(param_1 + 0x148) & 0x8000) == 0) {
    if ((param_2 != 0) && (param_2 != *(longlong *)(param_1 + 0x140))) {
      return 7;
    }
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_3,param_4,param_5);
  }
  else {
    if (param_2 == 0) {
      param_2 = *(longlong *)(param_1 + 0x140);
    }
    uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_3,plVar1,param_5,param_2);
  }
  if ((int)uVar2 != 0) {
    return 9;
  }
  return uVar2;
}



// FUNCTION 144bcc080 agsDriverExtensionsDX11_MultiDrawInstancedIndirect body=200 status=ok
// SIG undefined agsDriverExtensionsDX11_MultiDrawInstancedIndirect(void)

undefined8
agsDriverExtensionsDX11_MultiDrawInstancedIndirect
          (longlong param_1,longlong param_2,int param_3,longlong param_4,undefined4 param_5,
          int param_6)

{
  undefined8 uVar1;
  
                    /* 0x4bcc080  449  agsDriverExtensionsDX11_MultiDrawInstancedIndirect */
  if ((((param_1 != 0) && (param_3 != 0)) && (param_4 != 0)) && (param_6 != 0)) {
    if ((*(uint *)(param_1 + 0x148) & 0x10) == 0) {
      return 7;
    }
    if ((*(uint *)(param_1 + 0x148) >> 0xd & 1) == 0) {
      if ((param_2 != 0) && (param_2 != *(longlong *)(param_1 + 0x140))) {
        return 7;
      }
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x20))
                        (*(longlong **)(param_1 + 0x168),param_3,param_4,param_5,param_6);
    }
    else {
      if (param_2 == 0) {
        param_2 = *(longlong *)(param_1 + 0x140);
      }
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x40))
                        (*(longlong **)(param_1 + 0x168),param_3,param_4,param_5,param_6,param_2);
    }
    if ((int)uVar1 != 0) {
      return 9;
    }
    return uVar1;
  }
  return 2;
}



// FUNCTION 144bcc150 agsDriverExtensionsDX11_MultiDrawIndexedInstancedIndirect body=200 status=ok
// SIG undefined agsDriverExtensionsDX11_MultiDrawIndexedInstancedIndirect(void)

undefined8
agsDriverExtensionsDX11_MultiDrawIndexedInstancedIndirect
          (longlong param_1,longlong param_2,int param_3,longlong param_4,undefined4 param_5,
          int param_6)

{
  undefined8 uVar1;
  
                    /* 0x4bcc150  447  agsDriverExtensionsDX11_MultiDrawIndexedInstancedIndirect */
  if ((((param_1 != 0) && (param_3 != 0)) && (param_4 != 0)) && (param_6 != 0)) {
    if ((*(uint *)(param_1 + 0x148) & 0x10) == 0) {
      return 7;
    }
    if ((*(uint *)(param_1 + 0x148) >> 0xd & 1) == 0) {
      if ((param_2 != 0) && (param_2 != *(longlong *)(param_1 + 0x140))) {
        return 7;
      }
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x28))
                        (*(longlong **)(param_1 + 0x168),param_3,param_4,param_5,param_6);
    }
    else {
      if (param_2 == 0) {
        param_2 = *(longlong *)(param_1 + 0x140);
      }
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x48))
                        (*(longlong **)(param_1 + 0x168),param_3,param_4,param_5,param_6,param_2);
    }
    if ((int)uVar1 != 0) {
      return 9;
    }
    return uVar1;
  }
  return 2;
}



// FUNCTION 144bcc220 agsDriverExtensionsDX11_MultiDrawInstancedIndirectCountIndirect body=247 status=ok
// SIG undefined agsDriverExtensionsDX11_MultiDrawInstancedIndirectCountIndirect(void)

undefined8
agsDriverExtensionsDX11_MultiDrawInstancedIndirectCountIndirect
          (longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,longlong param_5,
          undefined4 param_6,int param_7)

{
  undefined8 uVar1;
  
                    /* 0x4bcc220  450
                       agsDriverExtensionsDX11_MultiDrawInstancedIndirectCountIndirect */
  if ((((param_1 != 0) && (param_3 != 0)) && (param_5 != 0)) && (param_7 != 0)) {
    if ((*(uint *)(param_1 + 0x148) & 0x20) == 0) {
      return 7;
    }
    if ((*(uint *)(param_1 + 0x148) >> 0xd & 1) == 0) {
      if ((param_2 != 0) && (param_2 != *(longlong *)(param_1 + 0x140))) {
        return 7;
      }
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x30))
                        (*(longlong **)(param_1 + 0x168),param_3,param_4,param_5,param_6,param_7);
    }
    else {
      if (param_2 == 0) {
        param_2 = *(longlong *)(param_1 + 0x140);
      }
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x50))
                        (*(longlong **)(param_1 + 0x168),param_3,param_4,param_5,param_6,param_7,
                         param_2);
    }
    if ((int)uVar1 != 0) {
      return 9;
    }
    return uVar1;
  }
  return 2;
}



// FUNCTION 144bcc320 agsDriverExtensionsDX11_MultiDrawIndexedInstancedIndirectCountIndirect body=247 status=ok
// SIG undefined agsDriverExtensionsDX11_MultiDrawIndexedInstancedIndirectCountIndirect(void)

undefined8
agsDriverExtensionsDX11_MultiDrawIndexedInstancedIndirectCountIndirect
          (longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,longlong param_5,
          undefined4 param_6,int param_7)

{
  undefined8 uVar1;
  
                    /* 0x4bcc320  448
                       agsDriverExtensionsDX11_MultiDrawIndexedInstancedIndirectCountIndirect */
  if ((((param_1 != 0) && (param_3 != 0)) && (param_5 != 0)) && (param_7 != 0)) {
    if ((*(uint *)(param_1 + 0x148) & 0x20) == 0) {
      return 7;
    }
    if ((*(uint *)(param_1 + 0x148) >> 0xd & 1) == 0) {
      if ((param_2 != 0) && (param_2 != *(longlong *)(param_1 + 0x140))) {
        return 7;
      }
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x38))
                        (*(longlong **)(param_1 + 0x168),param_3,param_4,param_5,param_6,param_7);
    }
    else {
      if (param_2 == 0) {
        param_2 = *(longlong *)(param_1 + 0x140);
      }
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x58))
                        (*(longlong **)(param_1 + 0x168),param_3,param_4,param_5,param_6,param_7,
                         param_2);
    }
    if ((int)uVar1 != 0) {
      return 9;
    }
    return uVar1;
  }
  return 2;
}



// FUNCTION 144bcc420 agsDriverExtensionsDX11_SetMaxAsyncCompileThreadCount body=63 status=ok
// SIG undefined agsDriverExtensionsDX11_SetMaxAsyncCompileThreadCount(void)

byte agsDriverExtensionsDX11_SetMaxAsyncCompileThreadCount(longlong param_1)

{
  int iVar1;
  
                    /* 0x4bcc420  455  agsDriverExtensionsDX11_SetMaxAsyncCompileThreadCount */
  if (param_1 == 0) {
    return 2;
  }
  if ((*(byte *)(param_1 + 0x148) & 0x80) == 0) {
    return 7;
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x188) + 0x20))();
  return -(iVar1 != 0) & 9;
}



// FUNCTION 144bcc460 agsDriverExtensionsDX11_NumPendingAsyncCompileJobs body=68 status=ok
// SIG undefined agsDriverExtensionsDX11_NumPendingAsyncCompileJobs(void)

byte agsDriverExtensionsDX11_NumPendingAsyncCompileJobs(longlong param_1,longlong param_2)

{
  int iVar1;
  
                    /* 0x4bcc460  451  agsDriverExtensionsDX11_NumPendingAsyncCompileJobs */
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(byte *)(param_1 + 0x148) & 0x80) == 0) {
      return 7;
    }
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x188) + 0x28))();
    return -(iVar1 != 0) & 9;
  }
  return 2;
}



// FUNCTION 144bcc4b0 agsDriverExtensionsDX11_SetDiskShaderCacheEnabled body=73 status=ok
// SIG undefined agsDriverExtensionsDX11_SetDiskShaderCacheEnabled(void)

byte agsDriverExtensionsDX11_SetDiskShaderCacheEnabled(longlong param_1,int param_2)

{
  int iVar1;
  
                    /* 0x4bcc4b0  454  agsDriverExtensionsDX11_SetDiskShaderCacheEnabled */
  if (param_1 == 0) {
    return 2;
  }
  if ((*(byte *)(param_1 + 0x148) & 0x80) == 0) {
    return 7;
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x188) + 0x30))
                    (*(longlong **)(param_1 + 0x188),param_2 == 1);
  return -(iVar1 != 0) & 9;
}



// FUNCTION 144bcc500 agsDriverExtensionsDX11_SetViewBroadcastMasks body=78 status=ok
// SIG undefined agsDriverExtensionsDX11_SetViewBroadcastMasks(void)

byte agsDriverExtensionsDX11_SetViewBroadcastMasks(longlong param_1)

{
  int iVar1;
  
                    /* 0x4bcc500  456  agsDriverExtensionsDX11_SetViewBroadcastMasks */
  if (param_1 == 0) {
    return 2;
  }
  if ((*(uint *)(param_1 + 0x148) & 0x200) == 0) {
    return 7;
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 400) + 0x20))();
  return -(iVar1 != 0) & 9;
}



// FUNCTION 144bcc550 agsDriverExtensionsDX11_GetMaxClipRects body=76 status=ok
// SIG undefined agsDriverExtensionsDX11_GetMaxClipRects(void)

undefined8 agsDriverExtensionsDX11_GetMaxClipRects(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
                    /* 0x4bcc550  445  agsDriverExtensionsDX11_GetMaxClipRects */
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    if ((*(uint *)(param_1 + 0x148) & 0x200) == 0) {
      return 7;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 400) + 0x28))();
    *param_2 = uVar1;
    return 0;
  }
  return 2;
}



// FUNCTION 144bcc5a0 agsDriverExtensionsDX11_SetClipRects body=372 status=ok
// SIG undefined agsDriverExtensionsDX11_SetClipRects(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void agsDriverExtensionsDX11_SetClipRects(longlong param_1,uint param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong _Size;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_48 [32];
  ulonglong local_28 [2];
  
                    /* 0x4bcc5a0  452  agsDriverExtensionsDX11_SetClipRects */
  puVar9 = auStack_48;
  local_28[0] = DAT_14c707940 ^ (ulonglong)local_28;
  uVar7 = (ulonglong)param_2;
  puVar10 = auStack_48;
  if ((param_1 == 0) ||
     (((param_2 != 0 && (puVar10 = auStack_48, param_3 == 0)) ||
      (puVar10 = auStack_48, (*(uint *)(param_1 + 0x148) & 0x200) == 0)))) goto LAB_144bcc708;
  uVar5 = uVar7 * 0x14 + 0x10;
  _Size = 0;
  if (uVar7 * 0x14 < uVar5) {
    _Size = uVar5;
  }
  puVar10 = auStack_48;
  if (_Size == 0) goto LAB_144bcc708;
  if (_Size < 0x401) {
    uVar5 = _Size + 0xf;
    if (uVar5 <= _Size) {
      uVar5 = 0xffffffffffffff0;
    }
    lVar4 = -(uVar5 & 0xfffffffffffffff0);
    puVar10 = auStack_48 + lVar4;
    puVar9 = auStack_48 + lVar4;
    puVar6 = (undefined4 *)((longlong)local_28 + lVar4);
    if (puVar6 == (undefined4 *)0x0) goto LAB_144bcc708;
    *puVar6 = 0xcccc;
LAB_144bcc674:
    puVar8 = puVar6 + 4;
    puVar10 = puVar9;
  }
  else {
    puVar6 = malloc(_Size);
    puVar8 = (undefined4 *)0x0;
    puVar10 = auStack_48;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = 0xdddd;
      goto LAB_144bcc674;
    }
  }
  if (puVar8 != (undefined4 *)0x0) {
    if (param_2 != 0) {
      param_3 = param_3 - (longlong)puVar8;
      puVar6 = puVar8 + 2;
      uVar5 = uVar7;
      do {
        puVar1 = puVar6 + 5;
        puVar6[-2] = (uint)(*(int *)(param_3 + -8 + (longlong)puVar6) == 1);
        puVar6[-1] = *(undefined4 *)(param_3 + -0x18 + (longlong)puVar1);
        *puVar6 = *(undefined4 *)(param_3 + -0x14 + (longlong)puVar1);
        puVar6[1] = *(int *)(param_3 + -0x10 + (longlong)puVar1) +
                    *(int *)(param_3 + -0x18 + (longlong)puVar1);
        puVar6[2] = *(int *)(param_3 + -0xc + (longlong)puVar1) +
                    *(int *)(param_3 + -0x14 + (longlong)puVar1);
        uVar5 = uVar5 - 1;
        puVar6 = puVar1;
      } while (uVar5 != 0);
    }
    plVar2 = *(longlong **)(param_1 + 400);
    pcVar3 = *(code **)(*plVar2 + 0x30);
    *(undefined8 *)(puVar10 + -8) = 0x144bcc6de;
    (*pcVar3)(plVar2,uVar7,puVar8);
    if (puVar8[-4] == 0xdddd) {
      *(undefined8 *)(puVar10 + -8) = 0x144bcc6f3;
      free(puVar8 + -4);
    }
  }
LAB_144bcc708:
  uVar7 = local_28[0] ^ (ulonglong)local_28;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar10 + -8) = &UNK_144bcc714;
  FUN_144d8e3a0(uVar7);
}



// FUNCTION 144bcc730 agsDriverExtensionsDX11_CreateFromDevice body=137 status=ok
// SIG undefined agsDriverExtensionsDX11_CreateFromDevice(void)

undefined8
agsDriverExtensionsDX11_CreateFromDevice
          (longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 uVar1;
  
                    /* 0x4bcc730  441  agsDriverExtensionsDX11_CreateFromDevice */
  if (((param_1 == 0) || (param_4 == (longlong *)0x0)) || (param_2 == 0)) {
    uVar1 = 2;
  }
  else {
    param_4[3] = 0x9100;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[5] = 0;
    *(undefined4 *)(param_4 + 4) = 1;
    *param_4 = param_2;
    uVar1 = FUN_144bcc7e0(param_1);
    if ((int)uVar1 == 0) {
      FUN_144bcc860(param_1,param_3,param_4);
      return 0;
    }
  }
  return uVar1;
}



// FUNCTION 144bcc7c0 agsDriverExtensionsDX11_Destroy body=29 status=ok
// SIG undefined agsDriverExtensionsDX11_Destroy(void)

undefined4 agsDriverExtensionsDX11_Destroy(longlong param_1)

{
                    /* 0x4bcc7c0  442  agsDriverExtensionsDX11_Destroy */
  if (param_1 == 0) {
    return 2;
  }
  FUN_144bccde0();
  return 0;
}



// FUNCTION 144bcc7e0 FUN_144bcc7e0 body=118 status=ok
// SIG undefined FUN_144bcc7e0(void)

undefined8 FUN_144bcc7e0(longlong param_1)

{
  longlong lVar1;
  HMODULE pHVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  lVar1 = FUN_144bcafc0("atidxx64.dll","atidxx32.dll");
  *(longlong *)(param_1 + 0x130) = lVar1;
  if (lVar1 == 0) {
    return 6;
  }
  pHVar2 = LoadLibraryA("d3d11.dll");
  *(HMODULE *)(param_1 + 0x128) = pHVar2;
  if (pHVar2 == (HMODULE)0x0) {
    uVar3 = 4;
  }
  return uVar3;
}



// FUNCTION 144bcc860 FUN_144bcc860 body=1396 status=ok
// SIG undefined FUN_144bcc860(void)

void FUN_144bcc860(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  FARPROC pFVar5;
  INT_PTR IVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  int local_res8 [4];
  undefined8 local_res18;
  int local_res20;
  uint local_res24;
  ulonglong local_58;
  longlong local_50;
  undefined8 local_48;
  
  *(undefined8 *)(param_1 + 0x138) = *param_3;
  *(undefined8 *)(param_1 + 0x140) = param_3[1];
  pFVar5 = GetProcAddress(*(HMODULE *)(param_1 + 0x130),"AmdDxExtCreate11");
  if (pFVar5 != (FARPROC)0x0) {
    plVar1 = (longlong *)(param_1 + 0x150);
    IVar6 = (*pFVar5)(*(undefined8 *)(param_1 + 0x138),plVar1);
    if (((int)IVar6 == 0) && (plVar8 = (longlong *)*plVar1, plVar8 != (longlong *)0x0)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,&local_res20);
      *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 1;
      local_res8[0] = 0;
      iVar2 = (**(code **)(*(longlong *)*plVar1 + 0x48))((longlong *)*plVar1,1,local_res8,4);
      if ((iVar2 == 0) && (local_res8[0] != 0)) {
        *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 2;
      }
      lVar7 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0xf);
      *(longlong *)(param_1 + 0x158) = lVar7;
      if (lVar7 != 0) {
        *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 4;
        local_res18 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x158) + 0x28))
                  (*(longlong **)(param_1 + 0x158),&local_res18);
        if (0x403 < (((uint)local_res18 << 10 | local_res18._4_4_) & 0xfffff)) {
          *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x4000;
        }
      }
      lVar7 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0xb);
      *(longlong *)(param_1 + 0x160) = lVar7;
      if ((lVar7 != 0) &&
         (*(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 8,
         0x2400fff < (local_res20 << 10 | local_res24) << 0xc)) {
        local_res18 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x160) + 0x20))
                  (*(longlong **)(param_1 + 0x160),&local_res18);
        if (0x400 < (((uint)local_res18 << 10 | local_res18._4_4_) & 0xfffff)) {
          *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x8000;
        }
      }
      lVar7 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0x11);
      *(longlong *)(param_1 + 0x168) = lVar7;
      if (lVar7 != 0) {
        *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x10;
        local_res18 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x168) + 0x18))
                  (*(longlong **)(param_1 + 0x168),&local_res18);
        uVar3 = ((uint)local_res18 << 10 | local_res18._4_4_) << 0xc;
        if (0x401fff < uVar3) {
          *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x20;
        }
        if (0x403fff < uVar3) {
          *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x2000;
        }
      }
      plVar8 = (longlong *)(**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0x18);
      *(longlong **)(param_1 + 0x188) = plVar8;
      if (plVar8 != (longlong *)0x0) {
        local_res18 = 0;
        (**(code **)(*plVar8 + 0x18))(plVar8,&local_res18);
        if (0x3ff < (((uint)local_res18 << 10 | local_res18._4_4_) & 0xfffff)) {
          *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x80;
        }
      }
      uVar9 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0x17);
      *(undefined8 *)(param_1 + 400) = uVar9;
      plVar8 = (longlong *)(**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0x15);
      *(longlong **)(param_1 + 0x180) = plVar8;
      if (plVar8 != (longlong *)0x0) {
        local_res18 = 0;
        iVar2 = (**(code **)(*plVar8 + 0x18))(plVar8,&local_res18);
        if ((iVar2 == 0) && (1 < (uint)local_res18)) {
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x28))
                            (*(longlong **)(param_1 + 0x180),1);
          if (((iVar2 == 0) &&
              (((iVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x28))
                                   (*(longlong **)(param_1 + 0x180),2), iVar2 == 0 &&
                (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x28))
                                   (*(longlong **)(param_1 + 0x180),3), iVar2 == 0)) &&
               (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x28))
                                  (*(longlong **)(param_1 + 0x180),4), iVar2 == 0)))) &&
             ((((iVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x28))
                                   (*(longlong **)(param_1 + 0x180),5), iVar2 == 0 &&
                (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x28))
                                   (*(longlong **)(param_1 + 0x180),6), iVar2 == 0)) &&
               (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x28))
                                  (*(longlong **)(param_1 + 0x180),8), iVar2 == 0)) &&
              (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x28))
                                 (*(longlong **)(param_1 + 0x180),9), iVar2 == 0)))) {
            *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x100;
          }
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x28))
                            (*(longlong **)(param_1 + 0x180),0xb);
          if ((iVar2 == 0) &&
             (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x28))
                                (*(longlong **)(param_1 + 0x180),0xc), iVar2 == 0)) {
            *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x400;
          }
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x28))
                            (*(longlong **)(param_1 + 0x180),0xd);
          if ((iVar2 == 0) &&
             (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x28))
                                (*(longlong **)(param_1 + 0x180),0xe), iVar2 == 0)) {
            *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x10000;
          }
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x28))
                            (*(longlong **)(param_1 + 0x180),10);
          if ((iVar2 == 0) && (*(longlong *)(param_1 + 400) != 0)) {
            *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x200;
          }
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x28))
                            (*(longlong **)(param_1 + 0x180),0xf);
          if (iVar2 == 0) {
            *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x20000;
          }
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x28))
                            (*(longlong **)(param_1 + 0x180),0x10);
          if (iVar2 == 0) {
            *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x80000;
          }
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x28))
                            (*(longlong **)(param_1 + 0x180),0x11);
          if (iVar2 == 0) {
            *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x40000;
          }
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x30))();
          if ((iVar2 != 0) ||
             (((param_2 != 0 && (*(int *)(param_2 + 0x1c) != 0)) &&
              (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x38))(), iVar2 != 0)))) {
            *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) & 0xfff0f8ff;
          }
        }
      }
      lVar7 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0x14);
      *(longlong *)(param_1 + 0x170) = lVar7;
      if (lVar7 != 0) {
        *(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x40;
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x170) + 0x48))();
        *(undefined4 *)(param_3 + 4) = uVar4;
        (**(code **)(**(longlong **)(param_1 + 0x170) + 0x18))
                  (*(longlong **)(param_1 + 0x170),&local_res18);
        *(uint *)(param_1 + 0x178) = ((uint)local_res18 << 10 | local_res18._4_4_) << 0xc;
        if (*(int *)(param_1 + 0x118) == 1) {
          (**(code **)(**(longlong **)(param_1 + 0x170) + 0x20))();
        }
      }
      lVar7 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0x1d);
      *(longlong *)(param_1 + 0x198) = lVar7;
      if (((lVar7 != 0) &&
          (*(uint *)((longlong)param_3 + 0x1c) = *(uint *)((longlong)param_3 + 0x1c) | 0x1000,
          param_2 != 0)) && (*(int *)(param_2 + 0x18) != 0)) {
        lVar10 = (ulonglong)(uint)(*(int *)(param_2 + 0x18) * 8) + 0x1000;
        lVar7 = FUN_144bcb540(lVar10);
        *(longlong *)(param_1 + 0x1a0) = lVar7;
        local_48 = 0;
        local_58 = lVar7 + 0xfffU & 0xfffffffffffff000;
        param_3[5] = local_58;
        local_50 = lVar10;
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x198) + 0x20))
                          (*(longlong **)(param_1 + 0x198),&local_58);
        if (iVar2 == 0) {
          *(undefined8 *)(param_1 + 0x1a8) = local_48;
          *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x18);
        }
        else {
          param_3[5] = 0;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x118) == 2) {
    *(undefined4 *)(param_3 + 4) = 1;
  }
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)((longlong)param_3 + 0x1c);
  return;
}



// FUNCTION 144bccde0 FUN_144bccde0 body=314 status=ok
// SIG undefined FUN_144bccde0(void)

void FUN_144bccde0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong **)(param_1 + 0x158) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x158) + 8))();
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  if (*(longlong **)(param_1 + 0x160) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x160) + 8))();
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  if (*(longlong **)(param_1 + 0x168) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x168) + 8))();
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x170) + 8))();
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  if (*(longlong **)(param_1 + 0x180) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x180) + 8))();
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
  if (*(longlong **)(param_1 + 0x188) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x188) + 8))();
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  if (*(longlong **)(param_1 + 400) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 400) + 8))();
    *(undefined8 *)(param_1 + 400) = 0;
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_144bcb560();
  }
  plVar1 = *(longlong **)(param_1 + 0x198);
  if (plVar1 != (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,param_1 + 0x1a8);
      plVar1 = *(longlong **)(param_1 + 0x198);
      *(undefined8 *)(param_1 + 0x1a8) = 0;
    }
    (**(code **)(*plVar1 + 8))();
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x150) + 8))();
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  return;
}



// FUNCTION 144bccf20 agsDriverExtensionsDX12_CreateDevice body=520 status=ok
// SIG undefined agsDriverExtensionsDX12_CreateDevice(void)

undefined8
agsDriverExtensionsDX12_CreateDevice
          (longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  FARPROC pFVar4;
  INT_PTR IVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *local_res8;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  ulonglong local_30;
  undefined *local_28;
  ulonglong local_20;
  
                    /* 0x4bccf20  458  agsDriverExtensionsDX12_CreateDevice */
  if ((((param_1 == 0) || (param_4 == (undefined8 *)0x0)) || (param_2 == (longlong *)0x0)) ||
     (*param_2 == 0)) {
    return 2;
  }
  puVar7 = (undefined8 *)0x0;
  *param_4 = 0;
  *(undefined4 *)(param_4 + 1) = 0;
  uVar3 = FUN_144bcd460(param_1,*param_2);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  iVar2 = -0x7fffbffb;
  pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x1c0),"AmdExtD3DCreateInterface");
  if (pFVar4 != (FARPROC)0x0) {
    local_res8 = (longlong *)0x0;
    (*pFVar4)(0,&DAT_14997f378,&local_res8);
    if (local_res8 != (longlong *)0x0) {
      local_48 = 0;
      local_40 = 0;
      local_38 = (undefined *)0x0;
      local_30 = 0;
      local_28 = (undefined *)0x0;
      local_20 = 0;
      puVar6 = puVar7;
      if ((param_3 != (undefined8 *)0x0) &&
         ((puVar1 = (undefined *)*param_3, puVar1 != (undefined *)0x0 ||
          (puVar6 = (undefined8 *)0x0, param_3[1] != 0)))) {
        local_48 = 1;
        local_38 = &DAT_14997f29c;
        if (puVar1 != (undefined *)0x0) {
          local_38 = puVar1;
        }
        local_30 = (ulonglong)*(uint *)(param_3 + 2);
        local_28 = &DAT_14997f29c;
        if ((undefined *)param_3[1] != (undefined *)0x0) {
          local_28 = (undefined *)param_3[1];
        }
        puVar6 = &local_48;
        local_20 = (ulonglong)*(uint *)((longlong)param_3 + 0x14);
      }
      iVar2 = (**(code **)(*local_res8 + 0x18))
                        (local_res8,*param_2,(int)param_2[3],param_2 + 1,param_1 + 0x1c8,puVar6);
      if (iVar2 == 0) {
        *(uint *)(param_4 + 1) = *(uint *)(param_4 + 1) | 8;
      }
      (**(code **)(*local_res8 + 0x10))();
      if (iVar2 == 0) goto LAB_144bcd0ee;
    }
  }
  pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x1b8),"D3D12CreateDevice");
  if (pFVar4 != (FARPROC)0x0) {
    IVar5 = (*pFVar4)(*param_2,(ulonglong)*(uint *)(param_2 + 3),param_2 + 1,param_1 + 0x1c8);
    iVar2 = (int)IVar5;
  }
  if (iVar2 != 0) {
    return 1;
  }
LAB_144bcd0ee:
  *param_4 = *(undefined8 *)(param_1 + 0x1c8);
  if (param_3 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)(ulonglong)*(uint *)(param_3 + 3);
  }
  FUN_144bcd650(param_1,puVar7,param_4);
  return 0;
}



// FUNCTION 144bcd130 agsDriverExtensionsDX12_DestroyDevice body=191 status=ok
// SIG undefined agsDriverExtensionsDX12_DestroyDevice(void)

undefined8
agsDriverExtensionsDX12_DestroyDevice(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
                    /* 0x4bcd130  461  agsDriverExtensionsDX12_DestroyDevice */
  if ((param_1 != 0) && (param_2 != (longlong *)0x0)) {
    if (*(longlong **)(param_1 + 0x1c8) != param_2) {
      return 1;
    }
    FUN_144bcd920();
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = uVar1;
    }
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    if (*(HMODULE *)(param_1 + 0x1b8) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(param_1 + 0x1b8));
      *(undefined8 *)(param_1 + 0x1b8) = 0;
    }
    if (*(HMODULE *)(param_1 + 0x1c0) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(param_1 + 0x1c0));
      *(undefined8 *)(param_1 + 0x1c0) = 0;
    }
    return 0;
  }
  return 2;
}



// FUNCTION 144bcd1f0 agsDriverExtensionsDX12_PushMarker body=62 status=ok
// SIG undefined agsDriverExtensionsDX12_PushMarker(void)

undefined4 agsDriverExtensionsDX12_PushMarker(longlong param_1,longlong param_2,longlong param_3)

{
                    /* 0x4bcd1f0  463  agsDriverExtensionsDX12_PushMarker */
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    if (*(longlong **)(param_1 + 0x1f0) == (longlong *)0x0) {
      return 7;
    }
    (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x20))();
    return 0;
  }
  return 2;
}



// FUNCTION 144bcd230 agsDriverExtensionsDX12_PopMarker body=57 status=ok
// SIG undefined agsDriverExtensionsDX12_PopMarker(void)

undefined4 agsDriverExtensionsDX12_PopMarker(longlong param_1,longlong param_2)

{
                    /* 0x4bcd230  462  agsDriverExtensionsDX12_PopMarker */
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(longlong **)(param_1 + 0x1f0) == (longlong *)0x0) {
      return 7;
    }
    (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x28))();
    return 0;
  }
  return 2;
}



// FUNCTION 144bcd270 agsDriverExtensionsDX12_SetMarker body=62 status=ok
// SIG undefined agsDriverExtensionsDX12_SetMarker(void)

undefined4 agsDriverExtensionsDX12_SetMarker(longlong param_1,longlong param_2,longlong param_3)

{
                    /* 0x4bcd270  464  agsDriverExtensionsDX12_SetMarker */
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    if (*(longlong **)(param_1 + 0x1f0) == (longlong *)0x0) {
      return 7;
    }
    (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x30))();
    return 0;
  }
  return 2;
}



// FUNCTION 144bcd2b0 FUN_144bcd2b0 body=140 status=ok
// SIG undefined FUN_144bcd2b0(void)

void FUN_144bcd2b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  lVar3 = lVar1;
  plVar4 = *(longlong **)(lVar1 + 8);
  if (*(char *)((longlong)*(longlong **)(lVar1 + 8) + 0x19) == '\0') {
    do {
      FUN_144bcd340(param_1,plVar4[2],param_3,param_4,uVar5);
      plVar2 = (longlong *)*plVar4;
      thunk_FUN_1400020a8(plVar4,0x30);
      plVar4 = plVar2;
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + 8) = lVar1;
  *(longlong *)*param_1 = lVar1;
  *(longlong *)(*param_1 + 0x10) = lVar1;
  param_1[1] = 0;
  return;
}



// FUNCTION 144bcd340 FUN_144bcd340 body=85 status=ok
// SIG undefined FUN_144bcd340(void)

void FUN_144bcd340(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  while (cVar1 == '\0') {
    FUN_144bcd340(param_1,param_2[2]);
    plVar2 = (longlong *)*param_2;
    thunk_FUN_1400020a8(param_2,0x30);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 144bcd3a0 agsDriverExtensionsDX12_CreateFromDevice body=155 status=ok
// SIG undefined agsDriverExtensionsDX12_CreateFromDevice(void)

undefined8
agsDriverExtensionsDX12_CreateFromDevice
          (longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  undefined8 uVar1;
  
                    /* 0x4bcd3a0  459  agsDriverExtensionsDX12_CreateFromDevice */
  if (((param_1 == 0) || (param_4 == (longlong *)0x0)) || (param_2 == 0)) {
    uVar1 = 2;
  }
  else {
    *(undefined4 *)(param_4 + 1) = 0;
    *param_4 = param_2;
    *(longlong *)(param_1 + 0x1c8) = param_2;
    uVar1 = FUN_144bcd460(param_1,0);
    if ((int)uVar1 == 0) {
      if (param_3 != 0) {
        FUN_144bcd650(param_1,*(undefined4 *)(param_3 + 0x18),param_4);
        return 0;
      }
      FUN_144bcd650(param_1,0,param_4);
      return 0;
    }
  }
  return uVar1;
}



// FUNCTION 144bcd440 agsDriverExtensionsDX12_Destroy body=29 status=ok
// SIG undefined agsDriverExtensionsDX12_Destroy(void)

undefined4 agsDriverExtensionsDX12_Destroy(longlong param_1)

{
                    /* 0x4bcd440  460  agsDriverExtensionsDX12_Destroy */
  if (param_1 == 0) {
    return 2;
  }
  FUN_144bcd920();
  return 0;
}



// FUNCTION 144bcd460 FUN_144bcd460 body=473 status=ok
// SIG undefined FUN_144bcd460(void)

void FUN_144bcd460(longlong param_1,longlong *param_2)

{
  int iVar1;
  HMODULE pHVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  INT_PTR IVar5;
  undefined1 auStack_3c8 [32];
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 *local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined4 local_388;
  undefined1 local_378 [296];
  undefined8 local_250;
  undefined4 local_248;
  WCHAR local_244 [262];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  pHVar2 = LoadLibraryA("d3d12.dll");
  *(HMODULE *)(param_1 + 0x1b8) = pHVar2;
  if (pHVar2 != (HMODULE)0x0) {
    pHVar2 = (HMODULE)0x0;
    if (param_2 == (longlong *)0x0) {
      pHVar2 = (HMODULE)FUN_144bcb000("amdxc64.dll","amdxc32.dll");
    }
    else {
      hModule = LoadLibraryA("gdi32.dll");
      iVar1 = 0;
      memset(local_244,0,0x208);
      local_248 = 3;
      if (hModule != (HMODULE)0x0) {
        pFVar3 = GetProcAddress(hModule,"D3DKMTQueryAdapterInfo");
        pFVar4 = GetProcAddress(hModule,"D3DKMTOpenAdapterFromLuid");
        iVar1 = 0;
        if ((pFVar3 != (FARPROC)0x0) && (iVar1 = 0, pFVar4 != (FARPROC)0x0)) {
          local_390 = 0;
          local_388 = 0;
          memset(local_378,0,0x130);
          (**(code **)(*param_2 + 0x40))(param_2,local_378);
          local_390 = local_250;
          IVar5 = (*pFVar4)(&local_390);
          iVar1 = (int)IVar5;
          if (-1 < iVar1) {
            local_3a8 = local_388;
            local_3a0 = &local_248;
            local_398 = 0x20c;
            local_3a4 = 1;
            IVar5 = (*pFVar3)(&local_3a8);
            iVar1 = (int)IVar5;
          }
        }
        FreeLibrary(hModule);
      }
      if (iVar1 == 0) {
        pHVar2 = LoadLibraryW(local_244);
      }
    }
    *(HMODULE *)(param_1 + 0x1c0) = pHVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_3c8);
}



// FUNCTION 144bcd650 FUN_144bcd650 body=707 status=ok
// SIG undefined FUN_144bcd650(void)

void FUN_144bcd650(longlong param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  FARPROC pFVar4;
  INT_PTR IVar5;
  
  pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x1c0),"AmdExtD3DCreateInterface");
  if (((pFVar4 != (FARPROC)0x0) &&
      (IVar5 = (*pFVar4)(*(undefined8 *)(param_1 + 0x1c8),&DAT_14997f318,param_1 + 0x1d8),
      (int)IVar5 == 0)) && (plVar2 = *(longlong **)(param_1 + 0x1d8), plVar2 != (longlong *)0x0)) {
    plVar1 = (longlong *)(param_1 + 0x1e0);
    iVar3 = (**(code **)(*plVar2 + 0x18))
                      (plVar2,*(undefined8 *)(param_1 + 0x1c8),&DAT_14997f328,plVar1);
    if ((iVar3 == 0) && (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
      iVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,1);
      if ((((iVar3 == 0) &&
           ((iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,2), iVar3 == 0
            && (iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,3),
               iVar3 == 0)))) &&
          (iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,4), iVar3 == 0))
         && ((((iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,5),
               iVar3 == 0 &&
               (iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,6),
               iVar3 == 0)) &&
              (iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,7), iVar3 == 0
              )) && (iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,8),
                    iVar3 == 0)))) {
        *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 1;
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,9);
      if ((iVar3 == 0) &&
         (iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,10), iVar3 == 0)) {
        *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 2;
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0xe);
      if ((iVar3 == 0) &&
         (iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0xf), iVar3 == 0))
      {
        *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 0x20;
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0x10);
      if (iVar3 == 0) {
        *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 0x80;
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0x11);
      if (iVar3 == 0) {
        *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 0x40;
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0x13);
      if (iVar3 == 0) {
        *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 0x100;
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0x12);
      if (iVar3 == 0) {
        *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 0x200;
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0x14);
      if (iVar3 == 0) {
        *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 0x400;
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0x15);
      if (iVar3 == 0) {
        *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 0x800;
      }
      (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x18))
                (*(longlong **)(param_1 + 0x1d8),*(undefined8 *)(param_1 + 0x1c8),&DAT_14997f338,
                 param_1 + 0x1e8);
      if ((*(longlong *)(param_1 + 0x1e8) != 0) &&
         (*(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 0x10, param_2 != 0)) {
        (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x30))
                  (*(longlong **)(param_1 + 0x1e8),param_2,0);
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x28))();
      if (iVar3 != 0) {
        *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) & 0xfffff00c;
      }
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x18))
                      (*(longlong **)(param_1 + 0x1d8),*(undefined8 *)(param_1 + 0x1c8),
                       &DAT_14997f348,param_1 + 0x1f0);
    if ((iVar3 == 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) {
      *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 4;
    }
  }
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_3 + 8);
  return;
}



// FUNCTION 144bcd920 FUN_144bcd920 body=282 status=ok
// SIG undefined FUN_144bcd920(void)

void FUN_144bcd920(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x200) != 0) {
    plVar4 = (longlong *)**(longlong **)(param_1 + 0x1f8);
    if (plVar4 != *(longlong **)(param_1 + 0x1f8)) {
      do {
        if ((longlong *)plVar4[5] != (longlong *)0x0) {
          (**(code **)(*(longlong *)plVar4[5] + 0x10))();
        }
        plVar2 = (longlong *)plVar4[2];
        if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x19);
          plVar4 = plVar2;
          plVar2 = (longlong *)*plVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar2 + 0x19);
            plVar4 = plVar2;
            plVar2 = (longlong *)*plVar2;
          }
        }
        else {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar3 = (longlong *)plVar4[1];
          plVar2 = plVar4;
          while ((plVar4 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
            cVar1 = *(char *)(plVar4[1] + 0x19);
            plVar3 = (longlong *)plVar4[1];
            plVar2 = plVar4;
          }
        }
      } while (plVar4 != *(longlong **)(param_1 + 0x1f8));
    }
    FUN_144bcd2b0(param_1 + 0x1f8);
  }
  if (*(longlong **)(param_1 + 0x1e8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x10))();
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  if (*(longlong **)(param_1 + 0x1e0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x10))();
    *(undefined8 *)(param_1 + 0x1e0) = 0;
  }
  if (*(longlong **)(param_1 + 0x1f0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x10))();
    *(undefined8 *)(param_1 + 0x1f0) = 0;
  }
  if (*(longlong **)(param_1 + 0x1d8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x10))();
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  return;
}



// FUNCTION 144bcda40 FUN_144bcda40 body=37 status=ok
// SIG undefined FUN_144bcda40(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_144bcda40(void)

{
  undefined8 uVar1;
  
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0xb8) != (code *)0x0)) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 0xb8))();
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bcda70 FUN_144bcda70 body=37 status=ok
// SIG undefined FUN_144bcda70(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_144bcda70(void)

{
  undefined8 uVar1;
  
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0xc0) != (code *)0x0)) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 0xc0))();
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bcdaa0 FUN_144bcdaa0 body=69 status=ok
// SIG undefined FUN_144bcdaa0(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_144bcdaa0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0x98) != (code *)0x0)) {
    (**(code **)(DAT_14c7839f8 + 0x98))(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



// FUNCTION 144bcdaf0 FUN_144bcdaf0 body=69 status=ok
// SIG undefined FUN_144bcdaf0(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_144bcdaf0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0xa0) != (code *)0x0)) {
    (**(code **)(DAT_14c7839f8 + 0xa0))(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



// FUNCTION 144bcdb40 FUN_144bcdb40 body=99 status=ok
// SIG undefined FUN_144bcdb40(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_144bcdb40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0xa8) != (code *)0x0)) {
    (**(code **)(DAT_14c7839f8 + 0xa8))
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}



// FUNCTION 144bcdbb0 FUN_144bcdbb0 body=99 status=ok
// SIG undefined FUN_144bcdbb0(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_144bcdbb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0xb0) != (code *)0x0)) {
    (**(code **)(DAT_14c7839f8 + 0xb0))
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}



// FUNCTION 144bcdc20 FUN_144bcdc20 body=39 status=ok
// SIG undefined FUN_144bcdc20(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_144bcdc20(void)

{
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 200) != (code *)0x0)) {
    (**(code **)(DAT_14c7839f8 + 200))();
  }
  return;
}



// FUNCTION 144bcdc50 FUN_144bcdc50 body=49 status=ok
// SIG undefined FUN_144bcdc50(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_144bcdc50(void)

{
  undefined8 uVar1;
  
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0xd0) != (code *)0x0)) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 0xd0))();
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bcdc90 FUN_144bcdc90 body=49 status=ok
// SIG undefined FUN_144bcdc90(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_144bcdc90(void)

{
  undefined8 uVar1;
  
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0xd8) != (code *)0x0)) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 0xd8))();
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bcdcd0 FUN_144bcdcd0 body=49 status=ok
// SIG undefined FUN_144bcdcd0(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_144bcdcd0(void)

{
  undefined8 uVar1;
  
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0xe0) != (code *)0x0)) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 0xe0))();
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bcdd10 FUN_144bcdd10 body=81 status=ok
// SIG undefined FUN_144bcdd10(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8
FUN_144bcdd10(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0xe8) != (code *)0x0)) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 0xe8))(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bcdd70 FUN_144bcdd70 body=111 status=ok
// SIG undefined FUN_144bcdd70(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8
FUN_144bcdd70(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0x120) != (code *)0x0)) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 0x120))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bcddf0 FUN_144bcddf0 body=111 status=ok
// SIG undefined FUN_144bcddf0(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8
FUN_144bcddf0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0x138) != (code *)0x0)) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 0x138))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bcde70 FUN_144bcde70 body=49 status=ok
// SIG undefined FUN_144bcde70(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_144bcde70(void)

{
  undefined8 uVar1;
  
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0x140) != (code *)0x0)) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 0x140))();
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bcdeb0 FUN_144bcdeb0 body=111 status=ok
// SIG undefined FUN_144bcdeb0(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8
FUN_144bcdeb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0x128) != (code *)0x0)) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 0x128))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bcdf30 FUN_144bcdf30 body=65 status=ok
// SIG undefined FUN_144bcdf30(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8
FUN_144bcdf30(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0xf0) != (code *)0x0)) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 0xf0))(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bcdf80 FUN_144bcdf80 body=39 status=ok
// SIG undefined FUN_144bcdf80(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_144bcdf80(void)

{
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0xf8) != (code *)0x0)) {
    (**(code **)(DAT_14c7839f8 + 0xf8))();
  }
  return;
}



// FUNCTION 144bcdfb0 FUN_144bcdfb0 body=39 status=ok
// SIG undefined FUN_144bcdfb0(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_144bcdfb0(void)

{
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0x100) != (code *)0x0)) {
    (**(code **)(DAT_14c7839f8 + 0x100))();
  }
  return;
}



// FUNCTION 144bcdfe0 FUN_144bcdfe0 body=39 status=ok
// SIG undefined FUN_144bcdfe0(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_144bcdfe0(void)

{
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0x108) != (code *)0x0)) {
    (**(code **)(DAT_14c7839f8 + 0x108))();
  }
  return;
}



// FUNCTION 144bce040 FUN_144bce040 body=55 status=ok
// SIG undefined FUN_144bce040(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_144bce040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0x118) != (code *)0x0)) {
    (**(code **)(DAT_14c7839f8 + 0x118))(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 144bce0e0 FUN_144bce0e0 body=49 status=ok
// SIG undefined FUN_144bce0e0(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_144bce0e0(void)

{
  undefined8 uVar1;
  
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0x150) != (code *)0x0)) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 0x150))();
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bce120 FUN_144bce120 body=71 status=ok
// SIG undefined FUN_144bce120(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_144bce120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0x158) != (code *)0x0)) {
    (**(code **)(DAT_14c7839f8 + 0x158))(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



// FUNCTION 144bce170 FUN_144bce170 body=39 status=ok
// SIG undefined FUN_144bce170(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_144bce170(void)

{
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0x160) != (code *)0x0)) {
    (**(code **)(DAT_14c7839f8 + 0x160))();
  }
  return;
}



// FUNCTION 144bce1a0 FUN_144bce1a0 body=37 status=ok
// SIG undefined FUN_144bce1a0(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_144bce1a0(void)

{
  undefined8 uVar1;
  
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0x168) != (code *)0x0)) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 0x168))();
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bce1d0 FUN_144bce1d0 body=99 status=ok
// SIG undefined FUN_144bce1d0(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 *
FUN_144bce1d0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0x170) != (code *)0x0)) {
    puVar2 = (undefined8 *)
             (**(code **)(DAT_14c7839f8 + 0x170))(local_18,param_2,param_3,param_4,param_5);
    uVar1 = puVar2[1];
    *param_1 = *puVar2;
    param_1[1] = uVar1;
    return param_1;
  }
  param_1[1] = 0;
  *param_1 = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 144bce240 FUN_144bce240 body=49 status=ok
// SIG undefined FUN_144bce240(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_144bce240(void)

{
  undefined8 uVar1;
  
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0x178) != (code *)0x0)) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 0x178))();
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bce2e0 FUN_144bce2e0 body=37 status=ok
// SIG undefined FUN_144bce2e0(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_144bce2e0(void)

{
  undefined8 uVar1;
  
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0x198) != (code *)0x0)) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 0x198))();
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bce340 FUN_144bce340 body=3507 status=ok
// SIG undefined FUN_144bce340(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_144bce340(undefined1 param_1)

{
  BOOL BVar1;
  int iVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  void *pvVar4;
  int local_res20 [2];
  
  BVar1 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_14c7839f0,0,local_res20,(LPVOID *)0x0);
  if (BVar1 == 0) {
    return 0x80004005;
  }
  if (local_res20[0] == 0) {
    return 0;
  }
  if (DAT_14c7839f8 == (undefined8 *)0x0) {
    DAT_14c7839f8 = malloc(0x298);
    if (DAT_14c7839f8 == (undefined8 *)0x0) {
      InitOnceComplete((LPINIT_ONCE)&DAT_14c7839f0,0,(LPVOID)0x0);
      return 0x80004005;
    }
    memset(DAT_14c7839f8,0,0x298);
    hModule = (HMODULE)FUN_144bcf780(param_1);
    *DAT_14c7839f8 = hModule;
    if (hModule == (HMODULE)0x0) {
      InitOnceComplete((LPINIT_ONCE)&DAT_14c7839f0,0,(LPVOID)0x0);
      FUN_144bcf100();
      return 0x80004005;
    }
    pFVar3 = GetProcAddress(hModule,"_INTC_D3D11_CreateDeviceExtensionContext");
    DAT_14c7839f8[1] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D11_CreateDeviceExtensionContext1");
    DAT_14c7839f8[2] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"D3D11GetSupportedVersions2");
    DAT_14c7839f8[3] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_CreateDeviceExtensionContext");
    DAT_14c7839f8[4] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_CreateDeviceExtensionContext1");
    DAT_14c7839f8[5] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"D3D12GetSupportedVersions2");
    DAT_14c7839f8[6] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_GetApplicationInfo");
    DAT_14c7839f8[0x32] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_SetApplicationInfo");
    DAT_14c7839f8[0x33] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_CreateDeviceExtensionContext");
    DAT_14c7839f8[7] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_CreateDeviceExtensionContext1");
    DAT_14c7839f8[8] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"D3D11D3D12DestroyDeviceExtensionContext2");
    DAT_14c7839f8[9] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D11_INT_CreateDeviceExtensionContext");
    DAT_14c7839f8[0xc] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_CreateDeviceExtensionContext");
    DAT_14c7839f8[0xd] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_INT_CreateDeviceExtensionContext");
    DAT_14c7839f8[0xe] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"D3D11EnumInternalExtensions");
    DAT_14c7839f8[10] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"D3D12EnumInternalExtensions");
    DAT_14c7839f8[0xb] = pFVar3;
    if ((((((DAT_14c7839f8[1] == 0) || (DAT_14c7839f8[3] == 0)) || (DAT_14c7839f8[4] == 0)) ||
         ((DAT_14c7839f8[6] == 0 || (DAT_14c7839f8[7] == 0)))) ||
        ((DAT_14c7839f8[9] == 0 || ((DAT_14c7839f8[0xc] == 0 || (DAT_14c7839f8[0xd] == 0)))))) ||
       ((DAT_14c7839f8[0xe] == 0 || ((DAT_14c7839f8[10] == 0 || (pFVar3 == (FARPROC)0x0)))))) {
      InitOnceComplete((LPINIT_ONCE)&DAT_14c7839f0,0,(LPVOID)0x0);
      FUN_144bcf100();
      return 0x80004002;
    }
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D11_MultiDrawInstancedIndirect");
    DAT_14c7839f8[0x13] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D11_MultiDrawIndexedInstancedIndirect")
    ;
    DAT_14c7839f8[0x14] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,
                            "_INTC_D3D11_MultiDrawInstancedIndirectCountIndirect");
    DAT_14c7839f8[0x15] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,
                            "_INTC_D3D11_MultiDrawIndexedInstancedIndirectCountIndirect");
    DAT_14c7839f8[0x16] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D11_BeginUAVOverlap");
    DAT_14c7839f8[0x17] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D11_EndUAVOverlap");
    DAT_14c7839f8[0x18] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D11_SetDepthBounds");
    DAT_14c7839f8[0x19] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D11_CreateTexture2D");
    DAT_14c7839f8[0x1a] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_CreateCommandQueue");
    DAT_14c7839f8[0x1b] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_CreateComputePipelineState");
    DAT_14c7839f8[0x1c] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_CreateReservedResource");
    DAT_14c7839f8[0x1d] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_CreateHostRTASResource");
    DAT_14c7839f8[0x1e] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,
                            "_INTC_D3D12_BuildRaytracingAccelerationStructure_Host");
    DAT_14c7839f8[0x1f] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,
                            "_INTC_D3D12_CopyRaytracingAccelerationStructure_Host");
    DAT_14c7839f8[0x20] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,
                            "_INTC_D3D12_EmitRaytracingAccelerationStructurePostbuildInfo_Host");
    DAT_14c7839f8[0x21] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,
                            "_INTC_D3D12_GetRaytracingAccelerationStructurePrebuildInfo_Host");
    DAT_14c7839f8[0x22] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_TransferHostRTAS");
    DAT_14c7839f8[0x23] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_CreateCommittedResource");
    DAT_14c7839f8[0x24] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_CreatePlacedResource");
    DAT_14c7839f8[0x25] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_SetDriverEventMetadata");
    DAT_14c7839f8[0x26] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_CreateCommittedResource1");
    DAT_14c7839f8[0x27] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_CreateHeap");
    DAT_14c7839f8[0x28] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_QueryCpuVisibleVidmem");
    DAT_14c7839f8[0x29] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_CreateStateObject");
    DAT_14c7839f8[0x2a] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,
                            "_INTC_D3D12_BuildRaytracingAccelerationStructure");
    DAT_14c7839f8[0x2b] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,
                            "_INTC_D3D12_GetRaytracingAccelerationStructurePrebuildInfo");
    DAT_14c7839f8[0x2c] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_SetFeatureSupport");
    DAT_14c7839f8[0x2d] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_GetResourceAllocationInfo");
    DAT_14c7839f8[0x2e] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_CheckFeatureSupport");
    DAT_14c7839f8[0x2f] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_AddShaderBinariesPath");
    DAT_14c7839f8[0x30] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_RemoveShaderBinariesPath");
    DAT_14c7839f8[0x31] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_CreateGraphicsPipelineState");
    DAT_14c7839f8[0x34] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_CreateComputePipelineState");
    DAT_14c7839f8[0x35] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_CreateGraphicsPipelineState1");
    DAT_14c7839f8[0x36] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_SetCoarsePixelSizeState");
    DAT_14c7839f8[0x37] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_CreateSampler");
    DAT_14c7839f8[0x38] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_CreateCommittedResource");
    DAT_14c7839f8[0x3a] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_CreatePlacedResource");
    DAT_14c7839f8[0x3b] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_CreateReservedResource");
    DAT_14c7839f8[0x3c] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_CreateGraphicsPipelineState2");
    DAT_14c7839f8[0x3d] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_CreateHeap");
    DAT_14c7839f8[0x39] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_CreateCommittedResource1");
    DAT_14c7839f8[0x3e] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_CreateCommittedResource2");
    DAT_14c7839f8[0x3f] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_ReserveGpuVirtualAddress");
    DAT_14c7839f8[0x40] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_CreatePlacedResource1");
    DAT_14c7839f8[0x41] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_CreateReservedResource1");
    DAT_14c7839f8[0x42] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_CreateReservedResource2");
    DAT_14c7839f8[0x43] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_RSSetViewports");
    DAT_14c7839f8[0x44] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_ResourceBarrier");
    DAT_14c7839f8[0x45] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_CreateShaderResourceView");
    DAT_14c7839f8[0x46] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_CreateRenderTargetView");
    DAT_14c7839f8[0x47] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_CreateUnorderedAccessView");
    DAT_14c7839f8[0x48] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,
                            "_INTC_D3D12_INT_CreateProceduralTextureResourceView");
    DAT_14c7839f8[0x49] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_CopyTextureRegion");
    DAT_14c7839f8[0x4a] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_ClearProceduralTextureView");
    DAT_14c7839f8[0x4b] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_CopyProceduralTextureStatus");
    DAT_14c7839f8[0x4c] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_SetProceduralTextures");
    DAT_14c7839f8[0x4d] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_CreateTexelMaskView");
    DAT_14c7839f8[0x4e] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_GetDefaultTexelMaskGranularity"
                           );
    DAT_14c7839f8[0x4f] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_ClearTexelMaskView");
    DAT_14c7839f8[0x50] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_ResolveTexelMask");
    DAT_14c7839f8[0x51] = pFVar3;
    pFVar3 = GetProcAddress((HMODULE)*DAT_14c7839f8,"_INTC_D3D12_INT_SetRootTMVs");
    DAT_14c7839f8[0x52] = pFVar3;
    InitOnceComplete((LPINIT_ONCE)&DAT_14c7839f0,0,(LPVOID)0x0);
    iVar2 = (*(code *)DAT_14c7839f8[10])(0,DAT_14c7839f8 + 0x10);
    if (iVar2 < 0) {
      return 0x80004005;
    }
    if (*(uint *)(DAT_14c7839f8 + 0x10) != 0) {
      pvVar4 = malloc((ulonglong)*(uint *)(DAT_14c7839f8 + 0x10) * 0x4c);
      DAT_14c7839f8[0xf] = pvVar4;
      iVar2 = (*(code *)DAT_14c7839f8[10])(DAT_14c7839f8 + 0xf,DAT_14c7839f8 + 0x10);
      if (iVar2 < 0) goto LAB_144bcf091;
    }
    iVar2 = (*(code *)DAT_14c7839f8[0xb])(0,DAT_14c7839f8 + 0x12);
    if (-1 < iVar2) {
      if (*(uint *)(DAT_14c7839f8 + 0x12) == 0) {
        return 0;
      }
      pvVar4 = malloc((ulonglong)*(uint *)(DAT_14c7839f8 + 0x12) * 0x4c);
      DAT_14c7839f8[0x11] = pvVar4;
      iVar2 = (*(code *)DAT_14c7839f8[0xb])(DAT_14c7839f8 + 0x11,DAT_14c7839f8 + 0x12);
      if (-1 < iVar2) {
        return 0;
      }
LAB_144bcf091:
      FUN_144bcf100();
      return 0x80070057;
    }
  }
  else {
    BVar1 = InitOnceComplete((LPINIT_ONCE)&DAT_14c7839f0,0,(LPVOID)0x0);
    if (BVar1 != 0) {
      return 0;
    }
  }
  return 0x80004005;
}



// FUNCTION 144bcf100 FUN_144bcf100 body=145 status=ok
// SIG undefined FUN_144bcf100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144bcf100(void)

{
  if (DAT_14c7839f8 != (undefined8 *)0x0) {
    if ((void *)DAT_14c7839f8[0xf] != (void *)0x0) {
      free((void *)DAT_14c7839f8[0xf]);
      DAT_14c7839f8[0xf] = 0;
    }
    if ((void *)DAT_14c7839f8[0x11] != (void *)0x0) {
      free((void *)DAT_14c7839f8[0x11]);
      DAT_14c7839f8[0x11] = 0;
    }
    if ((HMODULE)*DAT_14c7839f8 != (HMODULE)0x0) {
      FreeLibrary((HMODULE)*DAT_14c7839f8);
    }
    free(DAT_14c7839f8);
    DAT_14c7839f8 = (undefined8 *)0x0;
  }
  _DAT_14c7839f0 = 0;
  return;
}



// FUNCTION 144bcf1a0 FUN_144bcf1a0 body=34 status=ok
// SIG undefined FUN_144bcf1a0(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_144bcf1a0(void)

{
  undefined8 uVar1;
  
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0x18) != (code *)0x0)) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 0x18))();
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bcf1d0 FUN_144bcf1d0 body=46 status=ok
// SIG undefined FUN_144bcf1d0(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_144bcf1d0(void)

{
  undefined8 uVar1;
  
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 8) != (code *)0x0)) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 8))();
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bcf210 FUN_144bcf210 body=34 status=ok
// SIG undefined FUN_144bcf210(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_144bcf210(void)

{
  undefined8 uVar1;
  
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0x30) != (code *)0x0)) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 0x30))();
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bcf240 FUN_144bcf240 body=46 status=ok
// SIG undefined FUN_144bcf240(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_144bcf240(void)

{
  undefined8 uVar1;
  
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0x20) != (code *)0x0)) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 0x20))();
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bcf280 FUN_144bcf280 body=46 status=ok
// SIG undefined FUN_144bcf280(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_144bcf280(void)

{
  undefined8 uVar1;
  
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0x28) != (code *)0x0)) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 0x28))();
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bcf2c0 FUN_144bcf2c0 body=69 status=ok
// SIG undefined FUN_144bcf2c0(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_144bcf2c0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((DAT_14c7839f8 != 0) && ((param_1 == 0 || (*(longlong *)(DAT_14c7839f8 + 0x38) != 0)))) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 0x38))(param_1);
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bcf310 FUN_144bcf310 body=48 status=ok
// SIG undefined FUN_144bcf310(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_144bcf310(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  if ((DAT_14c7839f8 != 0) && (*(code **)(DAT_14c7839f8 + 0x48) != (code *)0x0)) {
    uVar1 = (**(code **)(DAT_14c7839f8 + 0x48))();
    return uVar1;
  }
  return 0x80004002;
}



// FUNCTION 144bcf340 FUN_144bcf340 body=291 status=ok
// SIG undefined FUN_144bcf340(void)

void FUN_144bcf340(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char *_Src;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_458 [32];
  undefined8 local_438;
  undefined8 *local_430;
  char local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_458;
  local_res18 = param_3;
  local_res20 = param_4;
  if (DAT_14c7839e8 < param_1) goto LAB_144bcf453;
  memset(local_428,0,0x400);
  if (param_1 == 1) {
    _Src = "[INTC_D3D12][ERROR] ";
LAB_144bcf3b9:
    strcpy_s(local_428,0x400,_Src);
  }
  else {
    if (param_1 == 2) {
      _Src = "[INTC_D3D12][INFO] ";
      goto LAB_144bcf3b9;
    }
    if (param_1 == 3) {
      _Src = "[INTC_D3D12][DEBUG] ";
      goto LAB_144bcf3b9;
    }
  }
  lVar1 = -1;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (local_428[lVar2 + 1] != '\0');
  puVar3 = (undefined8 *)FUN_144737586();
  local_438 = 0;
  local_430 = &local_res18;
  __stdio_common_vsprintf_s(*puVar3,local_428 + lVar2 + 1,0x400 - (lVar2 + 1),param_2);
  strcat_s(local_428,0x400,"\n");
  OutputDebugStringA(local_428);
LAB_144bcf453:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_458);
}



// FUNCTION 144bcf470 FUN_144bcf470 body=674 status=ok
// SIG undefined FUN_144bcf470(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_144bcf470(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  wchar_t *_Memory;
  longlong lVar3;
  undefined2 *puVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined1 auStack_c8 [32];
  int local_a8;
  uint local_98;
  uint local_94;
  undefined1 local_90 [8];
  OLECHAR local_88 [40];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = 0;
  StringFromGUID2((GUID *)&DAT_149e3f484,local_88,0x50);
  iVar1 = (*DAT_14c783a30)(&local_98,local_88,0x200);
  if (iVar1 == 0) {
    _Memory = malloc((ulonglong)local_98 * 2);
    local_94 = (*DAT_14c783a28)(local_88,_Memory,local_98,0x200);
    if (local_94 == 0) {
      uVar6 = (ulonglong)local_98;
      puVar7 = (undefined2 *)0x0;
      FUN_144bcf340(3);
      pwVar5 = _Memory;
      puVar9 = puVar7;
      do {
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (pwVar5[lVar3] != L'\0');
        if (lVar3 != 0) {
          iVar1 = (*DAT_14c783a40)(local_90,pwVar5,0);
          if (iVar1 == 0) {
            puVar4 = malloc(0x3a8);
            *puVar4 = 0;
            puVar4[0x104] = L'\0';
            *(undefined4 *)(puVar4 + 0x1cc) = 0;
            *(undefined8 *)(puVar4 + 0x1d0) = 0;
            if (*param_1 == 0) {
              *param_1 = (longlong)puVar4;
            }
            if (puVar9 != (undefined2 *)0x0) {
              *(undefined2 **)(puVar9 + 0x1d0) = puVar4;
            }
            wcscpy_s(puVar4 + 0x104,200,pwVar5);
            FUN_144bcf340(3,"Device[%d] | DeviceIDString: %S",puVar7,pwVar5);
            puVar9 = puVar4;
          }
          else if (iVar1 == 0xd) {
            FUN_144bcf340(3,"Device[%d] | DeviceIDString: %S | [NO_DEVICE]",puVar7,pwVar5);
          }
          else {
            local_a8 = iVar1;
            FUN_144bcf340(3,"Device[%d] | DeviceIDString: %S | [OTHER: 0x%08x]",puVar7,pwVar5);
          }
        }
        pwVar5 = wcschr(pwVar5,L'\0');
        uVar8 = local_94;
        puVar7 = (undefined2 *)(ulonglong)((int)puVar7 + 1);
        pwVar5 = pwVar5 + 1;
      } while (pwVar5 < _Memory + uVar6);
      if (_Memory != (wchar_t *)0x0) {
        free(_Memory);
      }
      lVar3 = *param_1;
      do {
        uVar2 = (*DAT_14c783a40)(&local_94,lVar3 + 0x208,0);
        if (uVar2 != 0xd) {
          if (uVar2 == 0) {
            *(uint *)(lVar3 + 0x398) = local_94;
          }
          uVar8 = uVar8 | uVar2;
        }
        lVar3 = *(longlong *)(lVar3 + 0x3a0);
      } while (lVar3 != 0);
      (*DAT_14c783a48)(uVar8,2);
    }
    else if (_Memory != (wchar_t *)0x0) {
      free(_Memory);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
}



// FUNCTION 144bcf720 FUN_144bcf720 body=96 status=ok
// SIG undefined FUN_144bcf720(void)

void FUN_144bcf720(void)

{
  if (DAT_14c783a00 != (HMODULE)0x0) {
    FreeLibrary(DAT_14c783a00);
    DAT_14c783a00 = (HMODULE)0x0;
  }
  if (DAT_14c783a08 != (HMODULE)0x0) {
    FreeLibrary(DAT_14c783a08);
    DAT_14c783a08 = (HMODULE)0x0;
  }
  if (DAT_14c783a10 != (HMODULE)0x0) {
    FreeLibrary(DAT_14c783a10);
    DAT_14c783a10 = (HMODULE)0x0;
  }
  return;
}



// FUNCTION 144bcf780 FUN_144bcf780 body=2723 status=ok
// SIG undefined FUN_144bcf780(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_144bcf780(int param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  DWORD DVar3;
  long lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  int *piVar7;
  HMODULE pHVar8;
  void *_Memory;
  wchar_t *pwVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  char *pcVar13;
  uint uVar14;
  longlong lVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  undefined1 uVar19;
  bool bVar20;
  undefined1 auStackY_28f8 [32];
  bool local_28b8;
  size_t local_28b0;
  char *local_28a8;
  uint local_28a0 [2];
  wchar_t *local_2898;
  uint local_2890 [2];
  longlong local_2888;
  wchar_t *local_2880;
  wchar_t *local_2878 [2];
  undefined8 local_2868 [1023];
  short asStack_86a [2];
  undefined1 local_866 [8];
  undefined8 auStack_85e [2];
  undefined8 auStack_84e [62];
  WCHAR local_658 [264];
  char local_448 [1024];
  ulonglong local_48;
  undefined8 uStack_40;
  ulonglong uVar15;
  
  uStack_40 = 0x144bcf7a2;
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_28f8;
  local_2888 = param_2;
  local_28a8 = GetCurrentProcess();
  memset(asStack_86a + 1,0,0x208);
  uVar19 = false;
  local_2898 = (wchar_t *)0x0;
  local_28b8 = false;
  local_28b0 = 0;
  pwVar18 = (wchar_t *)0x0;
  _wgetenv_s(&local_28b0,(wchar_t *)0x0,0,L"INTC_ALT_DRIVER_EXTENSIONS_PATH");
  if (local_28b0 != 0) {
    pwVar5 = malloc(local_28b0 * 2);
    _wgetenv_s(&local_28b0,pwVar5,local_28b0,L"INTC_ALT_DRIVER_EXTENSIONS_PATH");
    if (pwVar5 != (wchar_t *)0x0) {
      DAT_14c7839e0 = pwVar5;
    }
  }
  local_28b0 = 0;
  _wgetenv_s(&local_28b0,(wchar_t *)0x0,0,L"INTC_IGDEXT_DEBUG_LOG_LEVEL");
  if (local_28b0 != 0) {
    pwVar5 = malloc(local_28b0 * 2);
    _wgetenv_s(&local_28b0,pwVar5,local_28b0,L"INTC_IGDEXT_DEBUG_LOG_LEVEL");
    if (pwVar5 != (wchar_t *)0x0) {
      DAT_14c7839e8 = wcstol(pwVar5,(wchar_t **)local_2890,10);
      free(pwVar5);
    }
  }
  lVar16 = -1;
  if (DAT_14c7839e0 == (wchar_t *)0x0) {
LAB_144bcfa06:
    if (param_1 != 0) {
      DVar3 = GetModuleFileNameW((HMODULE)0x0,local_658,0x104);
      if (DVar3 == 0) goto LAB_144bd020f;
      wcscpy_s(asStack_86a + 1,0x104,local_658);
      pwVar5 = wcsrchr(asStack_86a + 1,L'\\');
      if (pwVar5 == (wchar_t *)0x0) {
        wcscpy_s(asStack_86a + 1,0xc,L"igdext64.dll");
      }
      else {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (pwVar5[lVar6] != L'\0');
        lVar11 = -1;
        pwVar9 = pwVar5 + 1;
        if (lVar6 == 0) {
          pwVar9 = pwVar5;
        }
        do {
          lVar12 = lVar11 + 1;
          lVar17 = lVar11 + 2;
          lVar11 = lVar12;
        } while (asStack_86a[lVar17] != 0);
        if ((ulonglong)(lVar12 + (0xd - lVar6)) < 0x105) {
          if (pwVar9 == (wchar_t *)0x0) {
            piVar7 = _errno();
            *piVar7 = 0x16;
            _invalid_parameter_noinfo();
            pwVar18 = (wchar_t *)0x0;
          }
          else {
            *(undefined8 *)pwVar9 = 0x65006400670069;
            builtin_wcsncpy((wchar_t *)((longlong)pwVar9 + 8),L"xt64",4);
            builtin_wcsncpy((wchar_t *)((longlong)pwVar9 + 0x10),L".dll",4);
            *(wchar_t *)((longlong)pwVar9 + 0x18) = L'\0';
          }
        }
        else {
          wcscpy_s(asStack_86a + 1,0xc,L"igdext64.dll");
          pwVar18 = local_2898;
        }
      }
      FUN_144bcf340(3);
      iVar2 = _waccess(asStack_86a + 1,0);
      if (iVar2 == 0) {
        uVar19 = true;
        pwVar5 = pwVar18;
        goto joined_r0x000144bcfb49;
      }
      FUN_144bcf340(1,
                    "Cannot load Intel Extensions library from: \"%S\"! Cannot access the path specified. Trying default method..."
                   );
    }
    DAT_14c783a00 = LoadLibraryW(L"shlwapi.dll");
    if (((((((DAT_14c783a00 == (HMODULE)0x0) ||
            (DAT_14c783a18 = GetProcAddress(DAT_14c783a00,"PathRemoveFileSpecW"),
            DAT_14c783a18 == (FARPROC)0x0)) ||
           (DAT_14c783a08 = LoadLibraryW(L"setupapi.dll"), DAT_14c783a08 == (HMODULE)0x0)) ||
          ((DAT_14c783a20 = GetProcAddress(DAT_14c783a08,"SetupGetInfDriverStoreLocationW"),
           DAT_14c783a20 == (FARPROC)0x0 ||
           (DAT_14c783a10 = LoadLibraryW(L"cfgmgr32.dll"), DAT_14c783a10 == (HMODULE)0x0)))) ||
         ((DAT_14c783a28 = GetProcAddress(DAT_14c783a10,"CM_Get_Device_ID_ListW"),
          DAT_14c783a28 == (FARPROC)0x0 ||
          ((DAT_14c783a30 = GetProcAddress(DAT_14c783a10,"CM_Get_Device_ID_List_SizeW"),
           DAT_14c783a30 == (FARPROC)0x0 ||
           (DAT_14c783a38 = GetProcAddress(DAT_14c783a10,"CM_Get_DevNode_PropertyW"),
           DAT_14c783a38 == (FARPROC)0x0)))))) ||
        (DAT_14c783a40 = GetProcAddress(DAT_14c783a10,"CM_Locate_DevNodeW"),
        DAT_14c783a40 == (FARPROC)0x0)) ||
       (DAT_14c783a48 = GetProcAddress(DAT_14c783a10,"CM_MapCrToWin32Err"),
       DAT_14c783a48 == (FARPROC)0x0)) {
      FUN_144bcf720();
      goto LAB_144bd020f;
    }
    iVar2 = FUN_144bcf470(&local_2898);
    pwVar5 = local_2898;
    pwVar18 = local_2898;
    if (iVar2 < 0) {
      while (pwVar18 != (wchar_t *)0x0) {
        pwVar5 = *(wchar_t **)(pwVar18 + 0x1d0);
        free(pwVar18);
        pwVar18 = pwVar5;
      }
      goto LAB_144bd020f;
    }
    if (local_2898 != (wchar_t *)0x0) {
LAB_144bcfd60:
      uVar1 = *(undefined4 *)(pwVar18 + 0x1cc);
      local_2890[0] = 0;
      iVar2 = (*DAT_14c783a38)(uVar1,&DAT_149e3f4f8,&local_28b0,0);
      if (iVar2 == 0x1a) {
        _Memory = malloc((ulonglong)local_2890[0]);
        iVar2 = (*DAT_14c783a38)(uVar1);
        if ((iVar2 == 0) && (iVar2 = (*DAT_14c783a20)(_Memory), iVar2 != 0)) {
          free(_Memory);
          (*DAT_14c783a18)(pwVar18);
        }
        else {
          free(_Memory);
        }
      }
      if ((param_2 == 0) || (param_3 == 0)) goto LAB_144bcfec4;
      lVar6 = 0;
      lVar11 = 0;
      pwVar9 = wcsstr(pwVar18 + 0x104,L"VEN_");
      if ((pwVar9 != (wchar_t *)0x0) && (pwVar9 + 4 != (wchar_t *)0x0)) {
        lVar4 = wcstol(pwVar9 + 4,&local_2880,0x10);
        lVar6 = (longlong)lVar4;
      }
      pwVar9 = wcsstr(pwVar18 + 0x104,L"DEV_");
      if ((pwVar9 != (wchar_t *)0x0) && (pwVar9 + 4 != (wchar_t *)0x0)) {
        lVar4 = wcstol(pwVar9 + 4,local_2878,0x10);
        lVar11 = (longlong)lVar4;
      }
      lVar17 = local_2888;
      param_2 = local_2888;
      if ((lVar6 != local_2888) || (lVar11 != param_3)) goto LAB_144bcfec4;
      wcscpy_s(asStack_86a + 1,0x104,pwVar18);
      do {
        lVar6 = lVar16;
        lVar16 = lVar6 + 1;
      } while (*(short *)(local_866 + lVar6 * 2) != 0);
      if (asStack_86a[lVar6 + 2] != 0x5c) {
        asStack_86a[lVar6 + 2] = 0x5c;
        if (0x207 < lVar16 * 2 + 2U) goto LAB_144bd0239;
        *(undefined2 *)(local_866 + lVar16 * 2) = 0;
      }
      if ((undefined8 *)(local_866 + lVar16 * 2) == (undefined8 *)0x0) {
        piVar7 = _errno();
        *piVar7 = 0x16;
        _invalid_parameter_noinfo();
      }
      else {
        *(undefined8 *)(local_866 + lVar16 * 2) = 0x65006400670069;
        *(undefined8 *)((longlong)auStack_85e + lVar16 * 2) = 0x34003600740078;
        *(undefined8 *)((longlong)auStack_84e + (lVar6 + -3) * 2) = 0x6c006c0064002e;
        *(undefined2 *)((longlong)auStack_84e + lVar16 * 2) = 0;
      }
      FUN_144bcf340(3,
                    "Loading Intel Extensions library using VendorID=0x%04x DeviceID=0x%04x: \"%S\"... "
                    ,lVar17,param_3);
      uVar19 = true;
      FUN_144bcf720();
      goto joined_r0x000144bcfb49;
    }
LAB_144bcfeda:
    FUN_144bcf720();
    pcVar13 = local_28a8;
    if (!(bool)uVar19) {
      iVar2 = K32EnumProcessModules(local_28a8,local_2868,0x2000,local_28a0);
      uVar15 = 0;
      if ((iVar2 != 0) && ((local_28a0[0] & 0xfffffff8) != 0)) {
        do {
          iVar2 = K32GetModuleFileNameExW(pcVar13,local_2868[uVar15],local_658,0x104);
          if ((iVar2 != 0) && (pwVar18 = pwVar5, pcVar13 = local_28a8, pwVar5 != (wchar_t *)0x0)) {
LAB_144bcff50:
            pwVar9 = wcsstr(local_658,pwVar18);
            if ((pwVar9 == (wchar_t *)0x0) ||
               (pwVar9 = wcsstr(local_658,L"DriverStore\\FileRepository"), pwVar9 == (wchar_t *)0x0)
               ) goto LAB_144bcff80;
            wcscpy_s(asStack_86a + 1,0x104,local_658);
            pwVar18 = wcsrchr(asStack_86a + 1,L'\\');
            if (pwVar18 == (wchar_t *)0x0) {
              wcscpy_s(asStack_86a + 1,0xc,L"igdext64.dll");
            }
            else {
              lVar6 = -1;
              do {
                lVar6 = lVar6 + 1;
              } while (pwVar18[lVar6] != L'\0');
              pwVar9 = pwVar18 + 1;
              if (lVar6 == 0) {
                pwVar9 = pwVar18;
              }
              do {
                lVar17 = lVar16 + 1;
                lVar11 = lVar16 + 2;
                lVar16 = lVar17;
              } while (asStack_86a[lVar11] != 0);
              if ((ulonglong)(lVar17 + (0xd - lVar6)) < 0x105) {
                if (pwVar9 == (wchar_t *)0x0) {
                  piVar7 = _errno();
                  *piVar7 = 0x16;
                  _invalid_parameter_noinfo();
                }
                else {
                  *(undefined8 *)pwVar9 = 0x65006400670069;
                  builtin_wcsncpy((wchar_t *)((longlong)pwVar9 + 8),L"xt64",4);
                  builtin_wcsncpy((wchar_t *)((longlong)pwVar9 + 0x10),L".dll",4);
                  *(wchar_t *)((longlong)pwVar9 + 0x18) = L'\0';
                }
              }
              else {
                wcscpy_s(asStack_86a + 1,0xc,L"igdext64.dll");
                pwVar5 = local_2898;
              }
            }
            FUN_144bcf340(3);
            uVar19 = true;
            break;
          }
LAB_144bcff91:
          uVar14 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar14;
        } while (uVar14 < local_28a0[0] >> 3);
      }
    }
  }
  else {
    lVar6 = -1;
    do {
      lVar11 = lVar6;
      lVar6 = lVar11 + 1;
    } while (DAT_14c7839e0[lVar6] != L'\0');
    if (lVar11 + 0xdU < 0x105) {
      wcscpy_s(asStack_86a + 1,0x104,DAT_14c7839e0);
      lVar6 = -1;
      do {
        lVar11 = lVar6;
        lVar6 = lVar11 + 1;
      } while (asStack_86a[lVar11 + 2] != 0);
      puVar10 = (undefined8 *)(local_866 + lVar11 * 2);
      if (asStack_86a[lVar11 + 1] != 0x5c) {
        *(undefined2 *)puVar10 = 0x5c;
        if (0x207 < lVar11 * 2 + 4U) {
LAB_144bd0239:
                    /* WARNING: Subroutine does not return */
          FUN_144e2bb84();
        }
        *(undefined2 *)(local_866 + lVar11 * 2 + 2) = 0;
        puVar10 = (undefined8 *)(local_866 + lVar11 * 2 + 2);
      }
      if (puVar10 == (undefined8 *)0x0) {
        piVar7 = _errno();
        *piVar7 = 0x16;
        _invalid_parameter_noinfo();
      }
      else {
        *puVar10 = 0x65006400670069;
        puVar10[1] = 0x34003600740078;
        puVar10[2] = 0x6c006c0064002e;
        *(undefined2 *)(puVar10 + 3) = 0;
      }
      FUN_144bcf340(3);
      iVar2 = _waccess(asStack_86a + 1,0);
      bVar20 = iVar2 != 0;
      if (bVar20) {
        FUN_144bcf340(1);
      }
      local_28b8 = !bVar20;
      uVar19 = !bVar20;
    }
    if (DAT_14c7839e0 != (wchar_t *)0x0) {
      free(DAT_14c7839e0);
      DAT_14c7839e0 = (wchar_t *)0x0;
    }
    pwVar5 = (wchar_t *)0x0;
    if (!(bool)uVar19) goto LAB_144bcfa06;
  }
joined_r0x000144bcfb49:
  while (pwVar5 != (wchar_t *)0x0) {
    pwVar18 = *(wchar_t **)(pwVar5 + 0x1d0);
    free(pwVar5);
    pwVar5 = pwVar18;
  }
  if ((bool)uVar19) {
    pHVar8 = LoadLibraryExW(asStack_86a + 1,(HANDLE)0x0,0);
    if (pHVar8 == (HMODULE)0x0) {
      FUN_144bcf340(1,"Cannot load Intel Extensions library from: \"%S\"!",asStack_86a + 1);
      DVar3 = GetLastError();
      if (DVar3 != 0) {
        local_28a8 = (char *)0x0;
        FormatMessageA(0x1300,(LPCVOID)0x0,DVar3,0x400,(LPSTR)&local_28a8,0,(va_list *)0x0);
        strcpy_s(local_448,0x400,local_28a8);
        FUN_144bcf340(1,"GetLastError reason: %s",local_448);
        LocalFree(local_28a8);
      }
    }
    else {
      FUN_144bcf340(2,"Intel Extensions library loaded: \"%S\"!",asStack_86a + 1);
    }
  }
LAB_144bd020f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStackY_28f8);
LAB_144bcfec4:
  pwVar9 = pwVar18 + 0x1d0;
  pwVar18 = *(wchar_t **)pwVar9;
  uVar19 = local_28b8;
  if (*(wchar_t **)pwVar9 == (wchar_t *)0x0) goto LAB_144bcfeda;
  goto LAB_144bcfd60;
LAB_144bcff80:
  pwVar9 = pwVar18 + 0x1d0;
  pwVar18 = *(wchar_t **)pwVar9;
  pcVar13 = local_28a8;
  if (*(wchar_t **)pwVar9 == (wchar_t *)0x0) goto LAB_144bcff91;
  goto LAB_144bcff50;
}



// FUNCTION 144bd0240 FUN_144bd0240 body=160 status=ok
// SIG undefined FUN_144bd0240(void)

ulonglong FUN_144bd0240(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if ((*(short *)(param_1 + 0x70) == 0x1d) || ((char)*(uint *)(param_1 + 0x1b8) < '\0')) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x1b8) >> 0x17 & 1) == 0) {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x58);
    if (pcVar1 != (code *)0x0) {
      iVar2 = (*pcVar1)();
      if (iVar2 != 0) {
        return 1;
      }
      param_1 = FUN_144bd68e0(param_1);
    }
    if (*(int *)(param_1 + 0x1a0) == -1) {
      return 0xffffffff;
    }
    iVar2 = FUN_144bd0b20(param_1,0,2);
    uVar4 = 1;
    if (iVar2 != 0) {
      uVar4 = 0xffffffff;
    }
    uVar3 = (ulonglong)uVar4;
  }
  else {
    uVar3 = FUN_144bd0240(*(undefined8 *)(param_1 + 0x88));
    if (-1 < (int)uVar3) {
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x1000000;
      return 1;
    }
  }
  return uVar3;
}



// FUNCTION 144bd02e0 FUN_144bd02e0 body=566 status=ok
// SIG undefined FUN_144bd02e0(void)

void FUN_144bd02e0(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *(undefined8 *)(param_1 + 0x178);
  lVar3 = *(longlong *)(param_1 + 0x78);
  local_40 = 0;
  lVar10 = lVar3 + 0xa0 + (longlong)*(char *)(param_1 + 0x1c7) * 0xa8;
  if ((*(uint *)(param_1 + 0x1b8) & 0x800000) == 0) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      local_58 = 1;
      iVar8 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170) + 8))
                        (param_1,0x23,*(undefined8 *)(param_1 + 0x130),&local_48);
      if (iVar8 != 0) goto LAB_144bd0509;
    }
    FUN_144bd09b0(param_1);
    iVar8 = *(int *)(param_1 + 0x1a0);
    lVar11 = (longlong)iVar8;
    pcVar4 = *(code **)(*(longlong *)(lVar3 + 0x3d0) + 0x50);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(param_1,0x8000000b);
    }
    if (iVar8 != -1) {
      puVar1 = (undefined4 *)
               (*(longlong *)(lVar10 + 0x48) + (ulonglong)(*(int *)(lVar10 + 0x9c) - 1) * 0x10);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(*(longlong *)(lVar10 + 0x48) + lVar11 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      FUN_144f3c350(lVar3,param_1,iVar8);
      lVar9 = FUN_144f3bf50(lVar3,(longlong)*(int *)(*(longlong *)(lVar10 + 0x48) + lVar11 * 0x10));
      if (lVar9 == 0) {
        local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(lVar10 + 0x9c));
        FUN_144bd5aa0(1,"no wsi for fd %d at pos %d, pt->fds_count=%d\n",
                      *(undefined4 *)(*(longlong *)(lVar10 + 0x48) + lVar11 * 0x10),iVar8);
      }
      else {
        *(int *)(lVar9 + 0x1a0) = iVar8;
      }
      FUN_144f3c040(lVar3,*(undefined8 *)(param_1 + 0x178));
      *(undefined4 *)(param_1 + 0x1a0) = 0xffffffff;
    }
    if ((*(longlong *)(param_1 + 0x178) != -1) && (*(longlong *)(param_1 + 0x80) != 0)) {
      local_58 = 0;
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170) + 8))
                (param_1,0x21,*(undefined8 *)(param_1 + 0x130),&local_48);
    }
    if (((*(byte *)(lVar3 + 0x4d0) & 2) == 0) &&
       (*(uint *)(lVar10 + 0x9c) < *(int *)(lVar3 + 0x4b4) - 1U)) {
      FUN_144bd0c40(lVar3,lVar10,1);
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      local_58 = 1;
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170) + 8))
                (param_1,0x24,*(undefined8 *)(param_1 + 0x130),&local_48);
    }
  }
  else {
    FUN_144bd09b0();
  }
LAB_144bd0509:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 144bd0520 FUN_144bd0520 body=508 status=ok
// SIG undefined FUN_144bd0520(void)

void FUN_144bd0520(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = *(undefined8 *)(param_2 + 0x178);
  lVar2 = param_1 + 0xa0 + (longlong)*(char *)(param_2 + 0x1c7) * 0xa8;
  local_50 = 9;
  if (*(uint *)(lVar2 + 0x9c) < *(uint *)(param_1 + 0x4b4)) {
    if (*(longlong *)(param_2 + 0x80) != 0) {
      local_68 = 1;
      iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x170) + 8))
                        (param_2,0x23,*(undefined8 *)(param_2 + 0x130),&local_58);
      if (iVar1 != 0) goto LAB_144bd070f;
    }
    *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + 1;
    FUN_144f3bfc0(param_1,param_2);
    iVar1 = *(int *)(lVar2 + 0x9c);
    *(int *)(param_2 + 0x1a0) = iVar1;
    *(undefined8 *)(*(longlong *)(lVar2 + 0x48) + (longlong)iVar1 * 0x10) =
         *(undefined8 *)(param_2 + 0x178);
    *(undefined2 *)(*(longlong *)(lVar2 + 0x48) + 8 + (longlong)*(int *)(param_2 + 0x1a0) * 0x10) =
         9;
    local_50 = CONCAT44(local_50._4_4_,
                        (int)*(short *)(*(longlong *)(lVar2 + 0x48) + 8 +
                                       (ulonglong)*(uint *)(lVar2 + 0x9c) * 0x10));
    FUN_144f3c390(param_1,param_2);
    if (*(longlong *)(param_2 + 0x80) != 0) {
      local_68 = 0;
      (**(code **)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x170) + 8))
                (param_2,0x20,*(undefined8 *)(param_2 + 0x130),&local_58);
    }
    if (*(int *)(lVar2 + 0x9c) == *(int *)(param_1 + 0x4b4) + -1) {
      for (lVar2 = *(longlong *)(param_1 + 0x378); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x150))
      {
        if (*(longlong *)(lVar2 + 0x158) != 0) {
          FUN_144bd0740(*(longlong *)(lVar2 + 0x158),9,0,local_48);
        }
      }
    }
    if (*(longlong *)(param_2 + 0x80) != 0) {
      local_68 = 1;
      (**(code **)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x170) + 8))
                (param_2,0x24,*(undefined8 *)(param_2 + 0x130),&local_58);
    }
  }
  else {
    FUN_144bd5aa0(1,"Too many fds (%d vs %d)\n",*(undefined4 *)(param_1 + 0x490));
  }
LAB_144bd070f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
}



// FUNCTION 144bd0730 thunk_FUN_144bd0b20 body=5 status=ok
// SIG undefined thunk_FUN_144bd0b20(void)

void thunk_FUN_144bd0b20(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  undefined1 auStack_28 [16];
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_1 != 0) &&
      (((*(longlong *)(param_1 + 0xa0) != 0 || ((*(uint *)(param_1 + 0x1b8) & 0x10000000) != 0)) &&
       (*(int *)(param_1 + 0x1a0) != -1)))) && (lVar2 = FUN_144bd68d0(), lVar2 != 0)) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      uStack_38 = 0;
      iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170) + 8))
                        (param_1,0x23,*(undefined8 *)(param_1 + 0x130),auStack_28);
      if (iVar1 != 0) goto LAB_144bd0c1c;
    }
    FUN_144bd0740(param_1,param_2,param_3,auStack_28);
    if (*(longlong *)(param_1 + 0x80) != 0) {
      uStack_38 = 0;
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170) + 8))
                (param_1,0x24,*(undefined8 *)(param_1 + 0x130),auStack_28);
    }
  }
LAB_144bd0c1c:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 144bd0740 FUN_144bd0740 body=624 status=ok
// SIG undefined FUN_144bd0740(void)

undefined8 FUN_144bd0740(longlong param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ushort uVar7;
  longlong lVar8;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x1a0) == -1)) {
    return 0;
  }
  if (((*(char *)(param_1 + 0x1ce) != '\0') && (param_2 == 0)) && (param_3 == 2)) {
    *(undefined1 *)(param_1 + 0x1cf) = 1;
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x78);
  lVar8 = lVar2 + 0xa0 + (longlong)*(char *)(param_1 + 0x1c7) * 0xa8;
  *(undefined1 *)(lVar8 + 0xa1) = 1;
  if (*(char *)(lVar8 + 0xa0) == '\0') {
    *(undefined1 *)(lVar8 + 0xa1) = 0;
    lVar8 = (longlong)*(int *)(param_1 + 0x1a0) * 0x10 + *(longlong *)(lVar8 + 0x48);
    *param_4 = *(undefined8 *)(param_1 + 0x178);
    *(int *)((longlong)param_4 + 0xc) = (int)*(short *)(lVar8 + 8);
    uVar7 = *(ushort *)(lVar8 + 8) & ~(ushort)param_2 | (ushort)param_3;
    *(ushort *)(lVar8 + 8) = uVar7;
    *(int *)(param_4 + 1) = (int)(short)uVar7;
    if ((*(byte *)(param_1 + 0x1b8) & 2) == 0) {
      if ((*(longlong *)(param_1 + 0x80) != 0) &&
         (iVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170) + 8))
                            (param_1,0x22,*(undefined8 *)(param_1 + 0x130),param_4,0), iVar4 != 0))
      {
        return 0xffffffff;
      }
      pcVar3 = *(code **)(*(longlong *)(lVar2 + 0x3d0) + 0x50);
      if (pcVar3 != (code *)0x0) {
        if ((param_2 & 9) != 0) {
          (*pcVar3)(param_1,9);
        }
        if ((param_3 & 9) != 0) {
          (**(code **)(*(longlong *)(lVar2 + 0x3d0) + 0x50))(param_1,5);
        }
        if ((param_2 & 2) != 0) {
          (**(code **)(*(longlong *)(lVar2 + 0x3d0) + 0x50))(param_1,10);
        }
        if ((param_3 & 2) != 0) {
          (**(code **)(*(longlong *)(lVar2 + 0x3d0) + 0x50))(param_1,6);
        }
      }
      if (*(int *)((longlong)param_4 + 0xc) == *(int *)(param_4 + 1)) {
        return 0;
      }
      iVar4 = FUN_144f3c410(lVar2,param_1,lVar8);
      if (iVar4 != 0) {
        return 0xffffffff;
      }
      iVar4 = *(int *)(lVar2 + 0x4d4);
      if (iVar4 == 0) {
        return 0;
      }
      if (*(longlong *)(param_1 + 0x80) == 0) {
        return 0;
      }
      iVar5 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170) + 8))
                        (param_1,0x1f,0,0,0);
      if (iVar5 == -1) {
        return 0xffffffff;
      }
      if (iVar5 != iVar4) {
        thunk_FUN_144f3c2f0(param_1);
        return 0;
      }
      return 0;
    }
  }
  else {
    puVar6 = (undefined8 *)thunk_FUN_144f3cee0(0,0x18,&DAT_1499805cc);
    if (puVar6 == (undefined8 *)0x0) {
      *(undefined1 *)(lVar8 + 0xa1) = 0;
      return 0xffffffff;
    }
    *(uint *)((longlong)puVar6 + 0xc) = param_2;
    *(uint *)(puVar6 + 2) = param_3;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 0x1a0);
    plVar1 = (longlong *)(lVar8 + 0x50);
    *puVar6 = 0;
    lVar2 = *plVar1;
    while (lVar2 != 0) {
      plVar1 = (longlong *)*plVar1;
      lVar2 = *plVar1;
    }
    *plVar1 = (longlong)puVar6;
    *(undefined1 *)(lVar8 + 0xa1) = 0;
    thunk_FUN_144f3c2f0(param_1);
  }
  return 0;
}



// FUNCTION 144bd09b0 FUN_144bd09b0 body=97 status=ok
// SIG undefined FUN_144bd09b0(void)

void FUN_144bd09b0(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x80) != 0) && ((*(uint *)(param_1 + 0x1b8) & 0x20000000) != 0)) {
    if (*(undefined8 **)(param_1 + 0xa8) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0xb0);
    }
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
    }
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xdfffffff;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 144bd0a20 FUN_144bd0a20 body=243 status=ok
// SIG undefined FUN_144bd0a20(void)

void FUN_144bd0a20(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0xa8);
  if ((puVar3 != (undefined8 *)0x0) || (*(longlong *)(param_1 + 0xb0) != 0)) {
    if ((*(longlong *)(param_1 + 0x80) != 0) && ((*(uint *)(param_1 + 0x1b8) & 0x20000000) != 0)) {
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = *(undefined8 *)(param_1 + 0xb0);
      }
      if (*(longlong *)(param_1 + 0xb0) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xdfffffff;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
    FUN_144bd5aa0(4,"Attempted to attach wsi twice to same vh prot\n");
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  lVar2 = (longlong)param_2 * 8;
  plVar1 = (longlong *)(param_1 + 0xb0);
  *(longlong *)(param_1 + 0xa8) = *(longlong *)(lVar4 + 400) + lVar2;
  *plVar1 = *(longlong *)(lVar2 + *(longlong *)(lVar4 + 400));
  *(longlong *)(lVar2 + *(longlong *)(lVar4 + 400)) = param_1;
  if (*plVar1 != 0) {
    *(longlong **)(*plVar1 + 0xa8) = plVar1;
  }
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x20000000;
  return;
}



// FUNCTION 144bd0b20 FUN_144bd0b20 body=265 status=ok
// SIG undefined FUN_144bd0b20(void)

void FUN_144bd0b20(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_1 != 0) &&
      (((*(longlong *)(param_1 + 0xa0) != 0 || ((*(uint *)(param_1 + 0x1b8) & 0x10000000) != 0)) &&
       (*(int *)(param_1 + 0x1a0) != -1)))) && (lVar2 = FUN_144bd68d0(), lVar2 != 0)) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      local_38 = 0;
      iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170) + 8))
                        (param_1,0x23,*(undefined8 *)(param_1 + 0x130),local_28);
      if (iVar1 != 0) goto LAB_144bd0c1c;
    }
    FUN_144bd0740(param_1,param_2,param_3,local_28);
    if (*(longlong *)(param_1 + 0x80) != 0) {
      local_38 = 0;
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170) + 8))
                (param_1,0x24,*(undefined8 *)(param_1 + 0x130),local_28);
    }
  }
LAB_144bd0c1c:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 144bd0c40 FUN_144bd0c40 body=607 status=ok
// SIG undefined FUN_144bd0c40(void)

void FUN_144bd0c40(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x378);
  do {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
    }
    lVar3 = *(longlong *)(lVar2 + 0x158);
    if (lVar3 != 0) {
      if (param_3 == 0) {
        FUN_144bd0740(lVar3,9,0,&local_48);
      }
      else if (*(int *)(lVar3 + 0x1a0) != -1) {
        lVar4 = *(longlong *)(lVar3 + 0x78);
        lVar10 = lVar4 + 0xa0 + (longlong)*(char *)(lVar3 + 0x1c7) * 0xa8;
        *(undefined1 *)(lVar10 + 0xa1) = 1;
        if (*(char *)(lVar10 + 0xa0) == '\0') {
          *(undefined1 *)(lVar10 + 0xa1) = 0;
          local_48 = *(undefined8 *)(lVar3 + 0x178);
          lVar10 = (longlong)*(int *)(lVar3 + 0x1a0) * 0x10 + *(longlong *)(lVar10 + 0x48);
          local_3c = (int)*(short *)(lVar10 + 8);
          uVar6 = *(ushort *)(lVar10 + 8) | 9;
          *(ushort *)(lVar10 + 8) = uVar6;
          local_40 = (int)(short)uVar6;
          if ((*(byte *)(lVar3 + 0x1b8) & 2) == 0) {
            if (*(longlong *)(lVar3 + 0x80) != 0) {
              local_58 = 0;
              iVar7 = (**(code **)(*(longlong *)(*(longlong *)(lVar3 + 0x80) + 0x170) + 8))
                                (lVar3,0x22,*(undefined8 *)(lVar3 + 0x130),&local_48);
              if (iVar7 != 0) goto LAB_144bd0e63;
            }
            pcVar5 = *(code **)(*(longlong *)(lVar4 + 0x3d0) + 0x50);
            if (pcVar5 != (code *)0x0) {
              (*pcVar5)(lVar3,5);
            }
            if ((((local_3c != local_40) && (iVar7 = FUN_144f3c410(lVar4,lVar3), iVar7 == 0)) &&
                (iVar7 = *(int *)(lVar4 + 0x4d4), iVar7 != 0)) && (*(longlong *)(lVar3 + 0x80) != 0)
               ) {
              local_58 = 0;
              iVar8 = (**(code **)(*(longlong *)(*(longlong *)(lVar3 + 0x80) + 0x170) + 8))
                                (lVar3,0x1f);
              if ((iVar8 != -1) && (iVar8 != iVar7)) {
                thunk_FUN_144f3c2f0(lVar3);
              }
            }
          }
        }
        else {
          puVar9 = (undefined8 *)thunk_FUN_144f3cee0(0,0x18);
          if (puVar9 == (undefined8 *)0x0) {
            *(undefined1 *)(lVar10 + 0xa1) = 0;
          }
          else {
            *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
            *(undefined4 *)(puVar9 + 2) = 9;
            *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(lVar3 + 0x1a0);
            plVar1 = (longlong *)(lVar10 + 0x50);
            *puVar9 = 0;
            lVar4 = *plVar1;
            while (lVar4 != 0) {
              plVar1 = (longlong *)*plVar1;
              lVar4 = *plVar1;
            }
            *plVar1 = (longlong)puVar9;
            *(undefined1 *)(lVar10 + 0xa1) = 0;
            thunk_FUN_144f3c2f0(lVar3);
          }
        }
      }
    }
LAB_144bd0e63:
    lVar2 = *(longlong *)(lVar2 + 0x150);
  } while( true );
}



// FUNCTION 144bd0eb0 FUN_144bd0eb0 body=114 status=ok
// SIG undefined FUN_144bd0eb0(void)

undefined8 FUN_144bd0eb0(undefined8 param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (param_2 != 0xc) {
    if (param_2 == 0xf) {
      iVar1 = FUN_144f3e9f0();
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
    else if (param_2 == 0x43) {
      FUN_144bd5aa0(4,"LWS_CALLBACK_SSL_INFO: where: 0x%x, ret: 0x%x\n",*param_4,param_4[1]);
      return 0;
    }
    return 0;
  }
  iVar1 = FUN_144f3db60(param_1,0x194,0);
  if ((iVar1 == 0) && (iVar1 = FUN_144f3e9f0(param_1), iVar1 == 0)) {
    return 0;
  }
  return 0xffffffff;
}



// FUNCTION 144bd0f30 FUN_144bd0f30 body=685 status=ok
// SIG undefined FUN_144bd0f30(void)

undefined8 FUN_144bd0f30(longlong param_1)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 local_1f8 [120];
  longlong local_180;
  longlong local_178;
  longlong local_158;
  
  bVar5 = false;
  lVar3 = *(longlong *)(param_1 + 0x378);
  if ((*(uint *)(param_1 + 0x4d0) & 0x40) == 0) {
    *(uint *)(param_1 + 0x4d0) = *(uint *)(param_1 + 0x4d0) | 0x40;
    memset(local_1f8,0,0x1d0);
    local_180 = param_1;
    for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x150)) {
      local_178 = lVar3;
      if (((*(byte *)(lVar3 + 0x248) & 1) == 0) && ((*(uint *)(lVar3 + 0x22c) & 0x2000000) == 0)) {
        iVar11 = 0;
        if (0 < *(int *)(lVar3 + 0x230)) {
          do {
            lVar9 = (longlong)iVar11;
            lVar10 = lVar9 * 0x38;
            local_158 = *(longlong *)(lVar3 + 0x170) + lVar10;
            lVar8 = *(longlong *)(*(longlong *)(lVar3 + 0x170) + lVar10);
            if (lVar8 != 0) {
              plVar13 = *(longlong **)(lVar3 + 0x180);
              if (plVar13 != (longlong *)0x0) {
LAB_144bd1040:
                pcVar7 = (char *)plVar13[2];
                lVar12 = lVar8 - (longlong)pcVar7;
                do {
                  cVar1 = *pcVar7;
                  cVar2 = pcVar7[lVar12];
                  if (cVar1 != cVar2) break;
                  pcVar7 = pcVar7 + 1;
                } while (cVar2 != '\0');
                if (cVar1 != cVar2) goto code_r0x000144bd106b;
                for (puVar4 = (undefined8 *)plVar13[1]; puVar4 != (undefined8 *)0x0;
                    puVar4 = (undefined8 *)*puVar4) {
                  lVar8 = 0;
                  do {
                    lVar12 = lVar8 + 1;
                    if (*(char *)(puVar4[2] + lVar8) != "default"[lVar8]) goto LAB_144bd11ab;
                    lVar8 = lVar12;
                  } while (lVar12 != 8);
                  *(char *)(lVar3 + 0x24c) = (char)iVar11;
LAB_144bd11ab:
                  lVar8 = 0;
                  do {
                    lVar12 = lVar8 + 1;
                    if (*(char *)(puVar4[2] + lVar8) != (&DAT_1499806ec)[lVar8]) goto LAB_144bd11cc;
                    lVar8 = lVar12;
                  } while (lVar12 != 4);
                  *(char *)(lVar3 + 0x24d) = (char)iVar11;
LAB_144bd11cc:
                }
                lVar8 = plVar13[1];
                goto LAB_144bd1076;
              }
LAB_144bd1073:
              lVar8 = 0;
LAB_144bd1076:
              bVar5 = (bool)(bVar5 | *(longlong *)(lVar3 + 0x1b0) != 0);
              iVar6 = (**(code **)(*(longlong *)(lVar3 + 0x170) + 8 + lVar10))
                                (local_1f8,0x1b,0,lVar8,0);
              if (iVar6 != 0) {
                thunk_FUN_144f3cee0(*(undefined8 *)(*(longlong *)(lVar3 + 0x178) + lVar9 * 8),0,
                                    "lws_free");
                *(undefined8 *)(*(longlong *)(lVar3 + 0x178) + lVar9 * 8) = 0;
                FUN_144bd5aa0(1,"%s: protocol %s failed init\n","lws_protocol_init",
                              *(undefined8 *)(*(longlong *)(lVar3 + 0x170) + lVar10));
              }
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)(lVar3 + 0x230));
        }
        *(uint *)(lVar3 + 0x248) = *(uint *)(lVar3 + 0x248) | 1;
      }
    }
    *(uint *)(param_1 + 0x4d0) = *(uint *)(param_1 + 0x4d0) & 0xffffffbf;
    if ((*(byte *)(param_1 + 0x4d0) & 0x20) == 0) {
      FUN_144bd5f80(param_1);
    }
    *(uint *)(param_1 + 0x4d0) = *(uint *)(param_1 + 0x4d0) | 0x20;
    if (bVar5) {
      FUN_144f41d80(param_1);
    }
  }
  return 0;
code_r0x000144bd106b:
  plVar13 = (longlong *)*plVar13;
  if (plVar13 == (longlong *)0x0) goto LAB_144bd1073;
  goto LAB_144bd1040;
}



// FUNCTION 144bd11e0 FUN_144bd11e0 body=1529 status=ok
// SIG undefined FUN_144bd11e0(void)

longlong FUN_144bd11e0(longlong param_1)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  __time64_t _Var8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined **ppuVar16;
  
  iVar6 = FUN_144f3c490();
  if (iVar6 != 0) {
    return 0;
  }
  lVar7 = FUN_144f3cf20(0x4f0,"context");
  if (lVar7 == 0) {
    FUN_144bd5aa0(1,"No memory for websocket context\n");
    return 0;
  }
  *(undefined ***)(lVar7 + 0x98) = &PTR_LAB_149c0c770;
  if (*(int *)(param_1 + 0xd8) == 0) {
    *(undefined4 *)(lVar7 + 0x4bc) = 0x1000;
  }
  else {
    *(int *)(lVar7 + 0x4bc) = *(int *)(param_1 + 0xd8);
  }
  uVar15 = 0;
  *(undefined8 *)(lVar7 + 0x30) = FUN_144f3bce0;
  *(code **)(lVar7 + 0x38) = FUN_144f3be10;
  *(code **)(lVar7 + 0x40) = FUN_144f3be50;
  *(code **)(lVar7 + 0x48) = FUN_144f3be70;
  *(code **)(lVar7 + 0x50) = FUN_144f3bee0;
  *(undefined8 *)(lVar7 + 0x58) = 0;
  *(undefined8 **)(lVar7 + 0x28) = (undefined8 *)(lVar7 + 0x30);
  if (*(longlong *)(param_1 + 0x130) != 0) {
    *(longlong *)(lVar7 + 0x88) = *(longlong *)(param_1 + 0x130);
  }
  *(undefined8 *)(lVar7 + 0x3b8) = *(undefined8 *)(param_1 + 0xf8);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    *(longlong *)(lVar7 + 0x3a0) = *(longlong *)(param_1 + 0x100);
  }
  _Var8 = _time64((__time64_t *)0x0);
  *(__time64_t *)(lVar7 + 0x10) = _Var8;
  *(undefined8 *)(lVar7 + 0x90) = *(undefined8 *)(param_1 + 0x198);
  *(undefined4 *)(lVar7 + 0x4c8) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(lVar7 + 0x490) = 30000;
  if (*(int *)(param_1 + 0x8c) == 0) {
    *(undefined2 *)(lVar7 + 0x4dc) = 1;
  }
  else {
    *(undefined2 *)(lVar7 + 0x4dc) = *(undefined2 *)(param_1 + 0x8c);
  }
  if (1 < *(short *)(lVar7 + 0x4dc)) {
    *(undefined2 *)(lVar7 + 0x4dc) = 1;
  }
  *(undefined8 *)(lVar7 + 0x3a8) = *(undefined8 *)(param_1 + 0x20);
  uVar12 = *(uint *)(param_1 + 100);
  *(uint *)(lVar7 + 0x4b0) = uVar12;
  *(undefined ***)(lVar7 + 0x3d0) = &PTR_DAT_14c70f440;
  if ((uVar12 & 0x200410) != 0) {
    FUN_144bd5aa0(1,"Requested event library support not configured, available:\n");
    ppuVar16 = &PTR_PTR_14c6da0e0;
    puVar2 = (undefined8 *)PTR_PTR_14c6da0e0;
    while (puVar2 != (undefined8 *)0x0) {
      FUN_144bd5aa0(1,"  - %s\n",*puVar2);
      ppuVar1 = ppuVar16 + 1;
      ppuVar16 = ppuVar16 + 1;
      puVar2 = (undefined8 *)*ppuVar1;
    }
    thunk_FUN_144f3cee0(lVar7,0,"lws_free");
    return 0;
  }
  _time64((__time64_t *)(lVar7 + 0x400));
  if (*(longlong *)(param_1 + 0x180) == 0) {
    bVar5 = true;
    ppuVar16 = &PTR_PTR_14c6da0f0;
    puVar13 = (undefined1 *)(lVar7 + 0x3d8);
    puVar3 = PTR_PTR_14c6da0f0;
    while (puVar3 != (undefined *)0x0) {
      puVar3 = *ppuVar16;
      ppuVar16 = ppuVar16 + 1;
      if (*(longlong *)(puVar3 + 8) != 0) {
        if (!bVar5) {
          *puVar13 = 0x2c;
          puVar13 = puVar13 + 1;
        }
        iVar6 = FUN_144bd6620(puVar13,(lVar7 - (longlong)puVar13) + 0x3f6,&DAT_149dfbe46,
                              *(undefined8 *)(puVar3 + 8));
        puVar13 = puVar13 + iVar6;
        bVar5 = false;
      }
      puVar3 = *ppuVar16;
    }
    *(undefined1 **)(lVar7 + 0x3f8) = (undefined1 *)(lVar7 + 0x3d8);
  }
  else {
    *(longlong *)(lVar7 + 0x3f8) = *(longlong *)(param_1 + 0x180);
  }
  iVar6 = 0x14;
  if (*(int *)(param_1 + 0x94) != 0) {
    iVar6 = *(int *)(param_1 + 0x94);
  }
  *(int *)(lVar7 + 0x4b8) = iVar6;
  *(undefined2 *)(lVar7 + 0x4e4) = *(undefined2 *)(param_1 + 0xe8);
  if (*(short *)(param_1 + 0x88) == 0) {
    iVar6 = 0x1000;
    if (*(int *)(param_1 + 0xdc) != 0) {
      iVar6 = *(int *)(param_1 + 0xdc);
    }
    *(int *)(lVar7 + 0x4c0) = iVar6;
  }
  else {
    *(int *)(lVar7 + 0x4c0) = (int)*(short *)(param_1 + 0x88);
  }
  iVar6 = (int)*(short *)(param_1 + 0x8a);
  if (*(short *)(param_1 + 0x8a) == 0) {
    iVar6 = *(int *)(lVar7 + 0x490);
  }
  *(int *)(lVar7 + 0x4c4) = iVar6;
  iVar6 = *(int *)(param_1 + 0x90);
  if (iVar6 == 0) {
    iVar6 = *(int *)(lVar7 + 0x490) / (int)*(short *)(lVar7 + 0x4dc);
  }
  *(int *)(lVar7 + 0x4b4) = iVar6;
  uVar14 = uVar15;
  if (0 < *(short *)(lVar7 + 0x4dc)) {
    do {
      lVar9 = thunk_FUN_144f3cee0(0,*(undefined4 *)(lVar7 + 0x4bc),"pt_serv_buf");
      lVar10 = (longlong)(int)uVar14 * 0xa8;
      *(longlong *)(lVar10 + 0xa8 + lVar7) = lVar9;
      if (lVar9 == 0) {
        FUN_144bd5aa0(1,&DAT_1499807a4);
        return 0;
      }
      *(char *)(lVar10 + 0x142 + lVar7) = (char)uVar14;
      uVar12 = (int)uVar14 + 1;
      *(longlong *)(lVar10 + 0xa0 + lVar7) = lVar7;
      *(undefined8 *)(lVar10 + 0x118 + lVar7) = 0;
      *(undefined4 *)(lVar10 + 300 + lVar7) = 0;
      uVar14 = (ulonglong)uVar12;
    } while ((int)uVar12 < (int)*(short *)(lVar7 + 0x4dc));
  }
  if ((*(int *)(param_1 + 0x78) == 0) && (0 < *(int *)(param_1 + 0x70))) {
    FUN_144bd5aa0(1,"info->ka_interval can\'t be 0 if ka_time used\n");
  }
  else {
    lVar9 = FUN_144f3cf20((longlong)
                          ((int)*(short *)(lVar7 + 0x4dc) * *(int *)(lVar7 + 0x4b4) * 0x10),
                          "fds table");
    *(longlong *)(lVar7 + 0xe8) = lVar9;
    if (lVar9 == 0) {
      FUN_144bd5aa0(1,"OOM allocating %d fds\n",*(undefined4 *)(lVar7 + 0x490));
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0xd0);
      if (lVar9 != 0) {
        *(longlong *)(lVar7 + 0x488) = lVar9;
        lVar10 = -1;
        do {
          lVar10 = lVar10 + 1;
        } while (*(char *)(lVar9 + lVar10) != '\0');
        *(short *)(lVar7 + 0x4e2) = (short)lVar10;
      }
      iVar6 = FUN_144f3ca70(lVar7,param_1);
      if ((iVar6 == 0) &&
         ((pcVar4 = *(code **)(*(longlong *)(lVar7 + 0x3d0) + 8), pcVar4 == (code *)0x0 ||
          (iVar6 = (*pcVar4)(lVar7,param_1), iVar6 == 0)))) {
        if ((*(longlong *)(*(longlong *)(lVar7 + 0x3d0) + 0x28) != 0) &&
           (uVar14 = uVar15, 0 < *(short *)(lVar7 + 0x4dc))) {
          do {
            uVar11 = uVar15;
            if (*(longlong *)(param_1 + 0x188) != 0) {
              uVar11 = *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)(int)uVar14 * 8);
            }
            iVar6 = (**(code **)(*(longlong *)(lVar7 + 0x3d0) + 0x28))(lVar7,uVar11,uVar14);
            if (iVar6 != 0) goto LAB_144bd15e6;
            uVar12 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar12;
          } while ((int)uVar12 < (int)*(short *)(lVar7 + 0x4dc));
        }
        iVar6 = FUN_144bd2610(lVar7);
        if (iVar6 == 0) {
          FUN_144f411f0(param_1);
          *(undefined8 *)(lVar7 + 0x3b0) = *(undefined8 *)(param_1 + 0x68);
          if (((*(uint *)(param_1 + 100) & 0x2000) == 0) &&
             (lVar9 = FUN_144bd19d0(lVar7,param_1), lVar9 == 0)) {
            FUN_144bd5aa0(1,"Failed to create default vhost\n");
            if (0 < *(short *)(lVar7 + 0x4dc)) {
              do {
                lVar9 = ((longlong)(int)uVar15 + 1) * 0xa8;
                thunk_FUN_144f3cee0(*(undefined8 *)(lVar9 + lVar7),0,&DAT_1499809d8);
                *(undefined8 *)(lVar9 + lVar7) = 0;
                uVar12 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar12;
              } while ((int)uVar12 < (int)*(short *)(lVar7 + 0x4dc));
            }
            thunk_FUN_144f3cee0(*(undefined8 *)(lVar7 + 0xe8),0,&DAT_1499809d8);
            *(undefined8 *)(lVar7 + 0xe8) = 0;
            FUN_144f3c570(lVar7);
            thunk_FUN_144f3cee0(lVar7,0,&DAT_1499809d8);
            return 0;
          }
          *(undefined8 *)(lVar7 + 0x408) = 0x6e776f6e6b6e75;
          FUN_144f3ff40(lVar7,param_1);
          *(undefined4 *)(lVar7 + 0x49c) = *(undefined4 *)(param_1 + 0x60);
          *(undefined4 *)(lVar7 + 0x4a0) = *(undefined4 *)(param_1 + 0x5c);
          if ((*(uint *)(param_1 + 100) & 0x2000) == 0) {
            FUN_144f3cb70(param_1);
          }
          FUN_144bd2050(lVar7);
          return lVar7;
        }
      }
    }
LAB_144bd15e6:
    FUN_144bd17e0(lVar7);
  }
  return 0;
}



// FUNCTION 144bd17e0 FUN_144bd17e0 body=496 status=ok
// SIG undefined FUN_144bd17e0(void)

void FUN_144bd17e0(longlong param_1)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 local_1e8 [120];
  longlong local_170;
  
  if (param_1 != 0) {
    uVar5 = *(uint *)(param_1 + 0x4d0);
    if ((uVar5 >> 8 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x3d0) + 0x18);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)();
      }
      FUN_144bd2b50(param_1);
      return;
    }
    if ((uVar5 & 4) == 0) {
      *(uint *)(param_1 + 0x4d0) = uVar5 | 0x16;
      memset(local_1e8,0,0x1d0);
      lVar7 = (longlong)*(short *)(param_1 + 0x4dc);
      local_170 = param_1;
      if (lVar7 != 0) {
        puVar6 = (undefined8 *)(param_1 + 0xf0 + lVar7 * 0xa8);
        do {
          puVar1 = puVar6 + -0x15;
          lVar7 = lVar7 + -1;
          puVar3 = (undefined8 *)*puVar1;
          while (puVar3 != (undefined8 *)0x0) {
            puVar2 = (undefined8 *)*puVar3;
            thunk_FUN_144f3cee0(puVar3,0,"lws_free");
            puVar3 = puVar2;
          }
          *puVar1 = 0;
          uVar5 = 0;
          if (*(int *)((longlong)puVar6 + -0x5c) != 0) {
            do {
              lVar4 = FUN_144f3bf50(param_1);
              if (lVar4 != 0) {
                if ((*(uint *)(lVar4 + 0x1b8) & 0x10000000) == 0) {
                  thunk_FUN_144bd6da0(lVar4,9999,"ctx destroy");
                }
                else {
                  FUN_144bd27d0();
                }
                uVar5 = uVar5 - 1;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < *(uint *)((longlong)puVar6 + -0x5c));
          }
          puVar6 = puVar1;
        } while (lVar7 != 0);
      }
      if ((*(byte *)(param_1 + 0x4d0) & 0x20) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x378);
        while (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x150);
          FUN_144bd2330();
        }
      }
      FUN_144f3c510(param_1);
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x3d0) + 0x10);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144bd19bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1);
        return;
      }
    }
    else if ((uVar5 & 8) != 0) {
      FUN_144bd2b50();
      return;
    }
    FUN_144bd2840();
  }
  return;
}



// FUNCTION 144bd19d0 FUN_144bd19d0 body=1623 status=ok
// SIG undefined FUN_144bd19d0(void)

void FUN_144bd19d0(longlong param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  void *_Dst;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined **ppuVar13;
  size_t _Size;
  undefined **_Src;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined *local_50;
  undefined8 local_48;
  char acStack_40 [4];
  undefined4 uStack_3c;
  undefined2 local_38;
  undefined1 local_36;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = FUN_144f3cf20(0x250);
  ppuVar13 = *(undefined ***)(param_2 + 4);
  plVar16 = (longlong *)(param_1 + 0x378);
  if (lVar6 == 0) goto LAB_144bd201a;
  *(longlong *)(lVar6 + 0x148) = param_1;
  _Src = &PTR_s_http_only_149980650;
  if (ppuVar13 != (undefined **)0x0) {
    _Src = ppuVar13;
  }
  pcVar7 = *(char **)(param_2 + 0x28);
  if (pcVar7 == (char *)0x0) {
    pcVar7 = "default";
  }
  *(char **)(lVar6 + 0x160) = pcVar7;
  *(undefined8 *)(lVar6 + 0x108) = *(undefined8 *)(param_2 + 0x5e);
  *(undefined8 *)(lVar6 + 0x168) = *(undefined8 *)(param_2 + 2);
  *(undefined4 *)(lVar6 + 0x230) = 0;
  if (_Src[1] != (undefined *)0x0) {
    iVar12 = 0;
    do {
      iVar12 = iVar12 + 1;
      *(int *)(lVar6 + 0x230) = iVar12;
    } while (_Src[(longlong)iVar12 * 7 + 1] != (undefined *)0x0);
  }
  ppuVar13 = &PTR_PTR_14c6da0f0;
  *(int *)(lVar6 + 0x22c) = param_2[0x19];
  *(undefined8 *)(lVar6 + 0x180) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(lVar6 + 0x188) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(lVar6 + 0x220) = *(undefined8 *)(param_2 + 0x1a);
  puVar3 = PTR_PTR_14c6da0f0;
  while (puVar3 != (undefined *)0x0) {
    puVar3 = *ppuVar13;
    ppuVar13 = ppuVar13 + 1;
    if ((*(code **)(puVar3 + 0x20) != (code *)0x0) &&
       (iVar12 = (**(code **)(puVar3 + 0x20))(lVar6,param_2), iVar12 != 0)) goto LAB_144bd201a;
    puVar3 = *ppuVar13;
  }
  iVar12 = 5;
  if (param_2[0x2e] != 0) {
    iVar12 = param_2[0x2e];
  }
  *(int *)(lVar6 + 0x240) = iVar12;
  iVar12 = 10;
  if (param_2[0x55] != 0) {
    iVar12 = param_2[0x55];
  }
  *(int *)(lVar6 + 0x244) = iVar12;
  *(undefined8 *)(lVar6 + 0x1c0) = *(undefined8 *)(param_2 + 0x60);
  *(int *)(lVar6 + 0x210) = param_2[0x54];
  if (*(longlong *)(param_2 + 0x26) != 0) {
    FUN_144bd66a0(lVar6 + 0x1e0,*(longlong *)(param_2 + 0x26),0x10);
  }
  iVar12 = 0;
  if (*(longlong *)(param_2 + 0xc) != 0) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (*(char *)(*(longlong *)(param_2 + 0xc) + lVar8) != '\0');
    iVar12 = (int)lVar8 + 1;
  }
  if (*(longlong *)(param_2 + 0xe) != 0) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (*(char *)(*(longlong *)(param_2 + 0xe) + lVar8) != '\0');
    iVar12 = iVar12 + 1 + (int)lVar8;
  }
  if (iVar12 != 0) {
    _Dst = (void *)thunk_FUN_144f3cee0(0,(longlong)iVar12,"vh paths");
    *(void **)(lVar6 + 0x1d0) = _Dst;
    *(void **)(lVar6 + 0x1d8) = _Dst;
    pvVar9 = *(void **)(param_2 + 0xc);
    if (pvVar9 != (void *)0x0) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (*(char *)((longlong)pvVar9 + lVar8) != '\0');
      _Size = (size_t)((int)lVar8 + 1);
      memcpy(_Dst,pvVar9,_Size);
      *(longlong *)(lVar6 + 0x1d8) = *(longlong *)(lVar6 + 0x1d8) + _Size;
    }
    pvVar9 = *(void **)(param_2 + 0xe);
    lVar8 = -1;
    if (pvVar9 != (void *)0x0) {
      do {
        lVar14 = lVar8;
        lVar8 = lVar14 + 1;
      } while (*(char *)((longlong)pvVar9 + lVar14 + 1) != '\0');
      memcpy(*(void **)(lVar6 + 0x1d8),pvVar9,lVar14 + 2);
    }
  }
  pvVar9 = (void *)FUN_144f3cf20((longlong)
                                 (*(int *)(lVar6 + 0x230) + *(short *)(param_1 + 0x4de) + 1) * 0x38,
                                 "vhost-specific plugin table");
  if (pvVar9 == (void *)0x0) {
    FUN_144bd5aa0(1,&DAT_1499807a4);
    goto LAB_144bd201a;
  }
  memcpy(pvVar9,_Src,(longlong)*(int *)(lVar6 + 0x230) * 0x38);
  if ((*(uint *)(param_1 + 0x4b0) & 0x2000) == 0) {
    *(undefined ***)(lVar6 + 0x170) = _Src;
    thunk_FUN_144f3cee0(pvVar9,0,"lws_free");
  }
  else {
    *(void **)(lVar6 + 0x170) = pvVar9;
  }
  uVar10 = FUN_144f3cf20((longlong)*(int *)(lVar6 + 0x230) << 3,"same vh list");
  *(undefined8 *)(lVar6 + 400) = uVar10;
  *(undefined8 *)(lVar6 + 0x100) = *(undefined8 *)(param_2 + 0x32);
  if (*param_2 == -2) {
    builtin_strncpy(acStack_40,"ener",4);
    uStack_3c._0_1_ = ')';
    uStack_3c._1_1_ = '\0';
    local_48 = 0x7473696c206f6e28;
  }
  else if (*param_2 == -1) {
    local_38 = 0x2964;
    local_36 = 0;
    local_48 = 0x676e697672657328;
    builtin_strncpy(acStack_40," dis",4);
    uStack_3c._0_1_ = 'a';
    uStack_3c._1_1_ = 'b';
    uStack_3c._2_1_ = 'l';
    uStack_3c._3_1_ = 'e';
  }
  else {
    FUN_144bd6620(&local_48,0x14,"port %u");
  }
  if (((*(byte *)(*(longlong *)(lVar6 + 0x148) + 0x4b0) & 0x20) != 0) ||
     (local_50 = &DAT_14a17993d, (*(byte *)(lVar6 + 0x22c) & 0x20) != 0)) {
    local_50 = &DAT_14a179940;
  }
  local_58 = *(undefined4 *)(lVar6 + 0x230);
  FUN_144bd5aa0(4,"Creating Vhost \'%s\' %s, %d protocols, IPv6 %s\n",*(undefined8 *)(lVar6 + 0x160)
               );
  for (puVar11 = *(undefined8 **)(param_2 + 0x32); puVar11 != (undefined8 *)0x0;
      puVar11 = (undefined8 *)*puVar11) {
    for (puVar4 = (undefined8 *)puVar11[7]; puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)*puVar4) {
      iVar12 = 0;
      if (0 < *(int *)(lVar6 + 0x230)) {
        plVar15 = *(longlong **)(lVar6 + 0x170);
        do {
          pcVar7 = (char *)puVar4[3];
          do {
            cVar1 = *pcVar7;
            cVar2 = pcVar7[*plVar15 - (longlong)puVar4[3]];
            if (cVar1 != cVar2) break;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
            puVar4[3] = (longlong)iVar12;
            break;
          }
          iVar12 = iVar12 + 1;
          plVar15 = plVar15 + 7;
        } while (iVar12 < *(int *)(lVar6 + 0x230));
      }
      if (iVar12 == *(int *)(lVar6 + 0x230)) {
        FUN_144bd5aa0(1,"ignoring unknown interp pr %s\n",puVar4[3]);
      }
    }
  }
  *(int *)(lVar6 + 0x228) = *param_2;
  *(undefined4 *)(lVar6 + 0x110) = 0;
  *(undefined1 *)(lVar6 + 0x80) = 0;
  if (*(longlong *)(param_2 + 0x14) == 0) {
    pcVar7 = getenv("http_proxy");
    if (pcVar7 != (char *)0x0) goto LAB_144bd1ec3;
  }
  else {
    iVar12 = *(int *)(lVar6 + 0x110);
    if (param_2[0x16] != 0) {
      iVar12 = param_2[0x16];
    }
    *(int *)(lVar6 + 0x110) = iVar12;
    pcVar7 = *(char **)(param_2 + 0x14);
LAB_144bd1ec3:
    FUN_144bd5fe0(lVar6,pcVar7);
  }
  *(int *)(lVar6 + 0x234) = param_2[0x1c];
  *(int *)(lVar6 + 0x23c) = param_2[0x1e];
  *(int *)(lVar6 + 0x238) = param_2[0x1d];
  if ((*(uint *)(lVar6 + 0x22c) & 0x8000) != 0) {
    FUN_144bd5aa0(4,"   STS enabled\n");
  }
  iVar12 = FUN_144f42540(param_2,lVar6);
  if (iVar12 == 0) {
    iVar12 = FUN_144f42880(param_2,lVar6);
    if (iVar12 != 0) {
      pcVar7 = "%s: lws_context_init_client_ssl failed\n";
      goto LAB_144bd1f94;
    }
    iVar12 = FUN_144f3f980(param_2,lVar6);
    if (-1 < iVar12) {
      lVar8 = *plVar16;
      while (lVar8 != 0) {
        plVar16 = (longlong *)(*plVar16 + 0x150);
        lVar8 = *plVar16;
      }
      *plVar16 = lVar6;
      if (((*(byte *)(param_1 + 0x4d0) & 0x20) == 0) ||
         (iVar12 = FUN_144bd0f30(param_1), iVar12 == 0)) goto LAB_144bd201a;
      pcVar7 = "%s: lws_protocol_init failed\n";
      goto LAB_144bd1f94;
    }
    FUN_144bd5aa0(1,"init server failed\n");
  }
  else {
    pcVar7 = "%s: lws_context_init_server_ssl failed\n";
LAB_144bd1f94:
    FUN_144bd5aa0(1,pcVar7,"lws_create_vhost");
  }
  puVar11 = (undefined8 *)thunk_FUN_144f3cee0(0,0x18,"deferred free");
  if (puVar11 != (undefined8 *)0x0) {
    FUN_144bd2330(lVar6);
    *puVar11 = *(undefined8 *)(*(longlong *)(lVar6 + 0x148) + 0x398);
    uVar5 = FUN_144bd6890();
    puVar11[1] = (ulonglong)uVar5;
    puVar11[2] = lVar6;
    *(undefined8 **)(*(longlong *)(lVar6 + 0x148) + 0x398) = puVar11;
  }
  FUN_144bd2970(lVar6);
LAB_144bd201a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 144bd2040 thunk_FUN_144f3c2f0 body=5 status=ok
// SIG undefined thunk_FUN_144f3c2f0(void)

undefined8 thunk_FUN_144f3c2f0(longlong param_1)

{
  WSASetEvent(**(undefined8 **)
                ((longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + 0xf8 + *(longlong *)(param_1 + 0x78))
             );
  return 0;
}



// FUNCTION 144bd2050 FUN_144bd2050 body=87 status=ok
// SIG undefined FUN_144bd2050(void)

void FUN_144bd2050(longlong param_1)

{
  short sVar1;
  longlong *plVar2;
  
  sVar1 = *(short *)(param_1 + 0x4dc);
  if (((*(byte *)(param_1 + 0x4d0) & 4) == 0) && (sVar1 != 0)) {
    plVar2 = (longlong *)(param_1 + 0x110);
    do {
      sVar1 = sVar1 + -1;
      if (*plVar2 != 0) {
        FUN_144f3c2f0();
      }
      plVar2 = plVar2 + 0x15;
    } while (sVar1 != 0);
  }
  return;
}



// FUNCTION 144bd20b0 FUN_144bd20b0 body=626 status=ok
// SIG undefined FUN_144bd20b0(void)

undefined8 FUN_144bd20b0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  void *_Dst;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined **ppuVar11;
  longlong *plVar12;
  
  uVar8 = FUN_144bd6890();
  plVar12 = (longlong *)(param_1 + 0x398);
  lVar2 = *plVar12;
  do {
    if (lVar2 == 0) {
      return 0;
    }
    if ((param_2 == 0) &&
       (iVar9 = FUN_144bd68b0(param_1,uVar8,*(undefined8 *)(*plVar12 + 8)), iVar9 < 6)) {
      plVar12 = (longlong *)*plVar12;
    }
    else {
      plVar3 = (longlong *)*plVar12;
      *plVar12 = *plVar3;
      FUN_144bd5aa0(4,"deferred vh %p destroy\n",plVar3[2]);
      _Dst = (void *)plVar3[2];
      lVar2 = *(longlong *)((longlong)_Dst + 0x148);
      lVar10 = *(longlong *)(lVar2 + 0x398);
      plVar1 = (longlong *)(lVar2 + 0x398);
      while (lVar10 != 0) {
        plVar4 = (longlong *)*plVar1;
        if ((void *)plVar4[2] == _Dst) {
          *plVar1 = *plVar4;
          thunk_FUN_144f3cee0(plVar4,0,"lws_free");
          break;
        }
        plVar1 = plVar4;
        lVar10 = *plVar4;
      }
      plVar1 = (longlong *)(lVar2 + 0x388);
      lVar10 = *plVar1;
      while (lVar10 != 0) {
        pvVar5 = (void *)*plVar1;
        if (pvVar5 == _Dst) {
          *plVar1 = *(longlong *)((longlong)pvVar5 + 0x150);
          break;
        }
        plVar1 = (longlong *)((longlong)pvVar5 + 0x150);
        lVar10 = *plVar1;
      }
      if ((*(longlong *)((longlong)_Dst + 0x170) != 0) &&
         (iVar9 = 0, 0 < *(int *)((longlong)_Dst + 0x230))) {
        lVar10 = 0;
        do {
          if ((*(longlong *)((longlong)_Dst + 0x178) != 0) &&
             (lVar6 = *(longlong *)(lVar10 + *(longlong *)((longlong)_Dst + 0x178)), lVar6 != 0)) {
            thunk_FUN_144f3cee0(lVar6,0,"lws_free");
            *(undefined8 *)(lVar10 + *(longlong *)((longlong)_Dst + 0x178)) = 0;
          }
          iVar9 = iVar9 + 1;
          lVar10 = lVar10 + 8;
        } while (iVar9 < *(int *)((longlong)_Dst + 0x230));
      }
      if (*(longlong *)((longlong)_Dst + 0x178) != 0) {
        thunk_FUN_144f3cee0(*(longlong *)((longlong)_Dst + 0x178),0,"lws_free");
      }
      FUN_144f41380(_Dst);
      thunk_FUN_144f3cee0(*(undefined8 *)((longlong)_Dst + 400),0,"lws_free");
      if ((*(longlong *)(lVar2 + 0x390) != 0) || ((*(uint *)(lVar2 + 0x4b0) & 0x2000) != 0)) {
        thunk_FUN_144f3cee0(*(undefined8 *)((longlong)_Dst + 0x170),0,"lws_free");
      }
      ppuVar11 = &PTR_PTR_14c6da0f0;
      puVar7 = PTR_PTR_14c6da0f0;
      while (puVar7 != (undefined *)0x0) {
        puVar7 = *ppuVar11;
        ppuVar11 = ppuVar11 + 1;
        if (*(code **)(puVar7 + 0x28) != (code *)0x0) {
          (**(code **)(puVar7 + 0x28))(_Dst);
        }
        puVar7 = *ppuVar11;
      }
      thunk_FUN_144f3cee0(*(undefined8 *)((longlong)_Dst + 0x1d0),0,&DAT_1499809d8);
      *(undefined8 *)((longlong)_Dst + 0x1d0) = 0;
      memset(_Dst,0,0x250);
      thunk_FUN_144f3cee0(_Dst,0,"lws_free");
      thunk_FUN_144f3cee0(plVar3,0,"lws_free");
    }
    lVar2 = *plVar12;
  } while( true );
}



// FUNCTION 144bd2330 FUN_144bd2330 body=729 status=ok
// SIG undefined FUN_144bd2330(void)

void FUN_144bd2330(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 local_1e8 [120];
  undefined8 local_170;
  longlong local_168;
  longlong local_148;
  
  lVar5 = *(longlong *)(param_1 + 0x148);
  sVar4 = *(short *)(lVar5 + 0x4dc);
  lVar9 = (longlong)sVar4;
  if ((*(uint *)(param_1 + 0x248) & 2) == 0) {
    uVar11 = 0;
    *(uint *)(param_1 + 0x248) = *(uint *)(param_1 + 0x248) | 2;
    if (*(longlong *)(param_1 + 0x158) != 0) {
      for (lVar7 = *(longlong *)(lVar5 + 0x378); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x150)) {
        if (((lVar7 != param_1) && ((*(byte *)(lVar7 + 0x248) & 2) == 0)) &&
           (*(int *)(lVar7 + 0x228) == *(int *)(param_1 + 0x228))) {
          pcVar6 = *(char **)(lVar7 + 0x168);
          if (pcVar6 == (char *)0x0) {
            if (*(longlong *)(param_1 + 0x168) == 0) {
LAB_144bd2405:
              *(longlong *)(lVar7 + 0x158) = *(longlong *)(param_1 + 0x158);
              *(undefined8 *)(param_1 + 0x158) = 0;
              if (*(longlong *)(lVar7 + 0x158) != 0) {
                *(longlong *)(*(longlong *)(lVar7 + 0x158) + 0x80) = lVar7;
              }
              FUN_144bd5aa0(4,"%s: listen skt from %s to %s\n","lws_vhost_destroy1",
                            *(undefined8 *)(param_1 + 0x160),*(undefined8 *)(lVar7 + 0x160));
              break;
            }
          }
          else if (*(longlong *)(param_1 + 0x168) != 0) {
            lVar12 = *(longlong *)(param_1 + 0x168) - (longlong)pcVar6;
            do {
              cVar2 = *pcVar6;
              cVar3 = pcVar6[lVar12];
              if (cVar2 != cVar3) break;
              pcVar6 = pcVar6 + 1;
            } while (cVar3 != '\0');
            if (cVar2 == cVar3) goto LAB_144bd2405;
          }
        }
      }
    }
    if (sVar4 != 0) {
      puVar10 = (uint *)(lVar5 + 0x13c + lVar9 * 0xa8);
      do {
        lVar9 = lVar9 + -1;
        puVar10 = puVar10 + -0x2a;
        uVar8 = uVar11;
        if (*puVar10 != 0) {
          do {
            lVar7 = FUN_144f3bf50(lVar5);
            if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x80) == param_1)) {
              thunk_FUN_144bd6da0(lVar7,9999,"vh destroy");
              uVar8 = uVar8 - 1;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *puVar10);
        }
      } while (lVar9 != 0);
    }
    lVar9 = *(longlong *)(param_1 + 0x218);
    while (lVar9 != 0) {
      FUN_144bd75d0(param_1);
      lVar9 = *(longlong *)(param_1 + 0x218);
    }
    memset(local_1e8,0,0x1d0);
    lVar9 = *(longlong *)(param_1 + 0x170);
    local_170 = *(undefined8 *)(param_1 + 0x148);
    if (((lVar9 != 0) && ((*(byte *)(param_1 + 0x248) & 1) != 0)) &&
       (local_168 = param_1, 0 < *(int *)(param_1 + 0x230))) {
      do {
        local_148 = lVar9;
        (**(code **)(lVar9 + 8))(local_1e8,0x1c,0,0,0);
        lVar9 = lVar9 + 0x38;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < *(int *)(param_1 + 0x230));
    }
    plVar1 = (longlong *)(lVar5 + 0x378);
    lVar5 = *plVar1;
    while (lVar5 != 0) {
      if (*plVar1 == param_1) {
        *plVar1 = *(longlong *)(param_1 + 0x150);
        break;
      }
      plVar1 = (longlong *)(*plVar1 + 0x150);
      lVar5 = *plVar1;
    }
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x388);
    *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x388) = param_1;
  }
  return;
}



// FUNCTION 144bd2610 FUN_144bd2610 body=318 status=ok
// SIG undefined FUN_144bd2610(void)

undefined8 FUN_144bd2610(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(short *)(param_1 + 0x4dc)) {
    do {
      lVar4 = (longlong)iVar5 * 0xa8;
      if (*(longlong *)(lVar4 + 0x110 + param_1) == 0) {
        lVar3 = FUN_144f3cf20(0x1d0,"event pipe wsi");
        if (lVar3 == 0) {
          FUN_144bd5aa0(1,"Out of mem\n");
          return 1;
        }
        *(longlong *)(lVar3 + 0x78) = param_1;
        FUN_144bd7670(lVar3,0,0x200,&PTR_DAT_14c70f570);
        *(uint *)(lVar3 + 0x1b8) = *(uint *)(lVar3 + 0x1b8) | 0x10000000;
        *(undefined8 *)(lVar3 + 0xa0) = 0;
        *(char *)(lVar3 + 0x1c7) = (char)iVar5;
        *(undefined8 *)(lVar3 + 0x80) = 0;
        *(undefined8 *)(lVar3 + 0x178) = 0xffffffffffffffff;
        *(longlong *)(lVar4 + 0x110 + param_1) = lVar3;
        *(int *)(param_1 + 0x4a8) = *(int *)(param_1 + 0x4a8) + 1;
        iVar2 = FUN_144f3c2e0(lVar3);
        if (iVar2 == 0) {
          *(undefined8 *)(lVar3 + 0x178) = *(undefined8 *)(lVar4 + 0x100 + param_1);
          pcVar1 = *(code **)(*(longlong *)(param_1 + 0x3d0) + 0x48);
          if (pcVar1 != (code *)0x0) {
            (*pcVar1)(lVar3);
          }
          iVar2 = FUN_144bd0520(param_1,lVar3);
          if (iVar2 != 0) {
            return 1;
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(short *)(param_1 + 0x4dc));
  }
  return 0;
}



// FUNCTION 144bd2750 FUN_144bd2750 body=115 status=ok
// SIG undefined FUN_144bd2750(void)

undefined8 FUN_144bd2750(undefined8 param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined **ppuVar7;
  
  if (param_2 != 0) {
    ppuVar7 = &PTR_PTR_14c6da0f0;
    puVar3 = PTR_PTR_14c6da0f0;
    while (puVar3 != (undefined *)0x0) {
      puVar3 = *ppuVar7;
      ppuVar7 = ppuVar7 + 1;
      pcVar4 = *(char **)(puVar3 + 8);
      if (pcVar4 != (char *)0x0) {
        lVar6 = param_2 - (longlong)pcVar4;
        do {
          cVar1 = *pcVar4;
          cVar2 = pcVar4[lVar6];
          if (cVar1 != cVar2) break;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        if ((cVar1 == cVar2) && (*(longlong *)(puVar3 + 0x78) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000144bd27bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(puVar3 + 0x78))(param_1,param_2);
          return uVar5;
        }
      }
      puVar3 = *ppuVar7;
    }
  }
  return 0;
}



// FUNCTION 144bd27d0 FUN_144bd27d0 body=106 status=ok
// SIG undefined FUN_144bd27d0(void)

void FUN_144bd27d0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  
  FUN_144bd02e0();
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x3d0);
  pcVar3 = *(code **)(lVar2 + 0x30);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1);
    FUN_144f3c330(param_1);
    return;
  }
  pcVar3 = *(code **)(lVar2 + 0x68);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1);
  }
  FUN_144f3c330(param_1);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x78) + 0x4a8);
  *piVar1 = *piVar1 + -1;
  thunk_FUN_144f3cee0(param_1,0,"lws_free");
  return;
}



// FUNCTION 144bd2840 FUN_144bd2840 body=296 status=ok
// SIG undefined FUN_144bd2840(void)

void FUN_144bd2840(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  *(uint *)(param_1 + 0x4d0) = *(uint *)(param_1 + 0x4d0) | 8;
  iVar5 = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    thunk_FUN_144f3cee0(*(longlong *)(param_1 + 0xe8),0,&DAT_1499809d8);
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x378);
  while (lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x150);
    FUN_144bd2970();
  }
  lVar1 = *(longlong *)(param_1 + 0x388);
  while (lVar1 != 0) {
    FUN_144bd2970(*(undefined8 *)(param_1 + 0x388));
    lVar1 = *(longlong *)(param_1 + 0x388);
  }
  FUN_144f413c0(param_1);
  FUN_144f3c570(param_1);
  if (*(void **)(param_1 + 0x3a0) != (void *)0x0) {
    free(*(void **)(param_1 + 0x3a0));
  }
  FUN_144bd20b0(param_1,1);
  pcVar2 = *(code **)(*(longlong *)(param_1 + 0x3d0) + 0x18);
  if ((pcVar2 != (code *)0x0) && (iVar3 = (*pcVar2)(param_1), iVar3 != 0)) {
    *(uint *)(param_1 + 0x4d0) = *(uint *)(param_1 + 0x4d0) | 0x100;
    return;
  }
  pbVar4 = (byte *)(param_1 + 0x144);
  if (((*pbVar4 & 2) == 0) && (0 < *(short *)(param_1 + 0x4dc))) {
    do {
      if ((*pbVar4 & 1) != 0) {
        return;
      }
      iVar5 = iVar5 + 1;
      pbVar4 = pbVar4 + 0xa8;
    } while (iVar5 < *(short *)(param_1 + 0x4dc));
  }
  FUN_144bd2b50(param_1);
  return;
}



// FUNCTION 144bd2970 FUN_144bd2970 body=471 status=ok
// SIG undefined FUN_144bd2970(void)

void FUN_144bd2970(void *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  void *pvVar5;
  undefined *puVar6;
  uint uVar7;
  ulonglong uVar9;
  undefined **ppuVar10;
  ulonglong uVar8;
  
  lVar2 = *(longlong *)((longlong)param_1 + 0x148);
  lVar3 = *(longlong *)(lVar2 + 0x398);
  plVar1 = (longlong *)(lVar2 + 0x398);
  while (lVar3 != 0) {
    plVar4 = (longlong *)*plVar1;
    if ((void *)plVar4[2] == param_1) {
      *plVar1 = *plVar4;
      thunk_FUN_144f3cee0(plVar4,0,"lws_free");
      break;
    }
    plVar1 = plVar4;
    lVar3 = *plVar4;
  }
  plVar1 = (longlong *)(lVar2 + 0x388);
  lVar3 = *plVar1;
  do {
    if (lVar3 == 0) {
LAB_144bd29f9:
      uVar8 = 0;
      if ((*(longlong *)((longlong)param_1 + 0x170) != 0) &&
         (uVar9 = uVar8, 0 < *(int *)((longlong)param_1 + 0x230))) {
        do {
          if ((*(longlong *)((longlong)param_1 + 0x178) != 0) &&
             (lVar3 = *(longlong *)(uVar9 + *(longlong *)((longlong)param_1 + 0x178)), lVar3 != 0))
          {
            thunk_FUN_144f3cee0(lVar3,0,"lws_free");
            *(undefined8 *)(uVar9 + *(longlong *)((longlong)param_1 + 0x178)) = 0;
          }
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
          uVar9 = uVar9 + 8;
        } while ((int)uVar7 < *(int *)((longlong)param_1 + 0x230));
      }
      if (*(longlong *)((longlong)param_1 + 0x178) != 0) {
        thunk_FUN_144f3cee0(*(longlong *)((longlong)param_1 + 0x178),0,"lws_free");
      }
      FUN_144f41380(param_1);
      thunk_FUN_144f3cee0(*(undefined8 *)((longlong)param_1 + 400),0,"lws_free");
      if ((*(longlong *)(lVar2 + 0x390) != 0) || ((*(uint *)(lVar2 + 0x4b0) & 0x2000) != 0)) {
        thunk_FUN_144f3cee0(*(undefined8 *)((longlong)param_1 + 0x170),0,"lws_free");
      }
      ppuVar10 = &PTR_PTR_14c6da0f0;
      puVar6 = PTR_PTR_14c6da0f0;
      while (puVar6 != (undefined *)0x0) {
        puVar6 = *ppuVar10;
        ppuVar10 = ppuVar10 + 1;
        if (*(code **)(puVar6 + 0x28) != (code *)0x0) {
          (**(code **)(puVar6 + 0x28))(param_1);
        }
        puVar6 = *ppuVar10;
      }
      thunk_FUN_144f3cee0(*(undefined8 *)((longlong)param_1 + 0x1d0),0,&DAT_1499809d8);
      *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
      memset(param_1,0,0x250);
      thunk_FUN_144f3cee0(param_1,0,"lws_free");
      return;
    }
    pvVar5 = (void *)*plVar1;
    if (pvVar5 == param_1) {
      *plVar1 = *(longlong *)((longlong)pvVar5 + 0x150);
      goto LAB_144bd29f9;
    }
    plVar1 = (longlong *)((longlong)pvVar5 + 0x150);
    lVar3 = *plVar1;
  } while( true );
}



// FUNCTION 144bd2b50 FUN_144bd2b50 body=220 status=ok
// SIG undefined FUN_144bd2b50(void)

void FUN_144bd2b50(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x90);
  iVar5 = 0;
  if (0 < *(short *)(param_1 + 0x4dc)) {
    plVar4 = (longlong *)(param_1 + 0x118);
    do {
      pcVar2 = *(code **)(*(longlong *)(param_1 + 0x3d0) + 0x60);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(param_1,iVar5);
      }
      thunk_FUN_144f3cee0(plVar4[-0xe],0,&DAT_1499809d8);
      plVar4[-0xe] = 0;
      lVar3 = *plVar4;
      while (lVar3 != 0) {
        FUN_144f42b20(plVar4 + -0xf);
        lVar3 = *plVar4;
      }
      iVar5 = iVar5 + 1;
      plVar4 = plVar4 + 0x15;
    } while (iVar5 < *(short *)(param_1 + 0x4dc));
  }
  thunk_FUN_144f3cee0(param_1,0,"lws_free");
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 144bd2c30 FUN_144bd2c30 body=983 status=ok
// SIG undefined FUN_144bd2c30(void)

longlong FUN_144bd2c30(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  lVar5 = param_1[6];
  if ((*(uint *)(*param_1 + 0x4d0) & 0x10) != 0) {
    return 0;
  }
  if ((*(uint *)(*param_1 + 0x4d0) & 0x20) == 0) {
    FUN_144bd0f30();
  }
  if (param_1[0x11] != 0) {
    lVar5 = param_1[0x11];
  }
  lVar4 = FUN_144f3cf20(0x1d0,"client wsi");
  if (lVar4 != 0) {
    *(longlong *)(lVar4 + 0x78) = *param_1;
    FUN_144bd7670(lVar4,0x10000000,0x200,&PTR_DAT_14c70f4c0);
    *(undefined8 *)(lVar4 + 0x178) = 0xffffffffffffffff;
    if ((param_1[10] == 0) && (iVar3 = FUN_144f44690(param_1,lVar4), iVar3 != 0)) {
      return 0;
    }
    *(undefined8 *)(lVar4 + 0x130) = 0;
    *(undefined1 *)(lVar4 + 0x1c6) = 0;
    *(undefined4 *)(lVar4 + 0x1a0) = 0xffffffff;
    *(short *)(lVar4 + 0x1c0) = (short)param_1[2];
    lVar1 = param_1[0xe];
    *(longlong *)(lVar4 + 0x80) = lVar1;
    if (lVar1 == 0) {
      *(undefined8 *)(lVar4 + 0x80) = *(undefined8 *)(*param_1 + 0x378);
    }
    if (*(longlong *)(lVar4 + 0x80) == 0) {
      FUN_144bd5aa0(1,"At least one vhost in the context is required\n");
    }
    else {
      *(undefined8 *)(lVar4 + 0xa0) = *(undefined8 *)(*(longlong *)(lVar4 + 0x80) + 0x170);
      *(uint *)(lVar4 + 0x1bc) =
           *(uint *)(lVar4 + 0x1bc) ^
           (*(uint *)((longlong)param_1 + 0x14) >> 7 ^ *(uint *)(lVar4 + 0x1bc)) & 0x200;
      FUN_144bd7670(lVar4,0x10000000,0x200,&PTR_DAT_14c70f4c0);
      if ((lVar5 != 0) && (lVar5 = FUN_144bd5ee0(*(undefined8 *)(lVar4 + 0x80),lVar5), lVar5 != 0))
      {
        *(longlong *)(lVar4 + 0xa0) = lVar5;
      }
      if ((*(longlong *)(lVar4 + 0x130) == 0) && (param_1[8] != 0)) {
        *(uint *)(lVar4 + 0x1b8) = *(uint *)(lVar4 + 0x1b8) | 0x40;
        *(longlong *)(lVar4 + 0x130) = param_1[8];
      }
      else if ((param_1[10] != 0) && (iVar3 = FUN_144bd76e0(lVar4), iVar3 != 0)) goto LAB_144bd2e1d;
      *(undefined4 *)(lVar4 + 0x170) = *(undefined4 *)((longlong)param_1 + 0x14);
      lVar5 = FUN_144f3cf20(0x40,"client stash");
      *(longlong *)(lVar4 + 0xf0) = lVar5;
      if (lVar5 == 0) {
        FUN_144bd5aa0(1,"%s: OOM\n","lws_client_connect_via_info");
      }
      else {
        uVar6 = FUN_144bd3f50(param_1[1]);
        **(undefined8 **)(lVar4 + 0xf0) = uVar6;
        uVar6 = FUN_144bd3f50(param_1[3]);
        *(undefined8 *)(*(longlong *)(lVar4 + 0xf0) + 8) = uVar6;
        uVar6 = FUN_144bd3f50(param_1[4]);
        *(undefined8 *)(*(longlong *)(lVar4 + 0xf0) + 0x10) = uVar6;
        plVar2 = *(longlong **)(lVar4 + 0xf0);
        if (((*plVar2 != 0) && (plVar2[1] != 0)) && (plVar2[2] != 0)) {
          if (param_1[5] != 0) {
            uVar6 = FUN_144bd3f50();
            *(undefined8 *)(*(longlong *)(lVar4 + 0xf0) + 0x18) = uVar6;
            if (*(longlong *)(*(longlong *)(lVar4 + 0xf0) + 0x18) == 0) goto LAB_144bd2e15;
          }
          if (param_1[6] != 0) {
            uVar6 = FUN_144bd3f50();
            *(undefined8 *)(*(longlong *)(lVar4 + 0xf0) + 0x20) = uVar6;
            if (*(longlong *)(*(longlong *)(lVar4 + 0xf0) + 0x20) == 0) goto LAB_144bd2e15;
          }
          if (param_1[10] != 0) {
            uVar6 = FUN_144bd3f50();
            *(undefined8 *)(*(longlong *)(lVar4 + 0xf0) + 0x28) = uVar6;
            if (*(longlong *)(*(longlong *)(lVar4 + 0xf0) + 0x28) == 0) goto LAB_144bd2e15;
          }
          if (param_1[0x10] != 0) {
            uVar6 = FUN_144bd3f50();
            *(undefined8 *)(*(longlong *)(lVar4 + 0xf0) + 0x30) = uVar6;
            if (*(longlong *)(*(longlong *)(lVar4 + 0xf0) + 0x30) == 0) goto LAB_144bd2e15;
          }
          if ((param_1[10] == 0) && (param_1[0x12] == 0)) {
            pcVar7 = "http/1.1";
LAB_144bd2f87:
            uVar6 = FUN_144bd3f50(pcVar7);
            *(undefined8 *)(*(longlong *)(lVar4 + 0xf0) + 0x38) = uVar6;
            if (*(longlong *)(*(longlong *)(lVar4 + 0xf0) + 0x38) == 0) goto LAB_144bd2e15;
          }
          else {
            pcVar7 = (char *)param_1[0x12];
            if (pcVar7 != (char *)0x0) goto LAB_144bd2f87;
          }
          if ((longlong *)param_1[0xf] != (longlong *)0x0) {
            *(longlong *)param_1[0xf] = lVar4;
          }
          iVar3 = FUN_144f43530(lVar4,0);
          if (-1 < iVar3) {
            if (param_1[0xb] != 0) {
              *(longlong *)(lVar4 + 0x88) = param_1[0xb];
              *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(param_1[0xb] + 0x90);
              *(longlong *)(param_1[0xb] + 0x90) = lVar4;
            }
            return lVar4;
          }
          goto LAB_144bd2e2e;
        }
      }
LAB_144bd2e15:
      FUN_144bd3de0(lVar4);
    }
  }
LAB_144bd2e1d:
  thunk_FUN_144f3cee0(lVar4,0,"lws_free");
LAB_144bd2e2e:
  if ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xf] = 0;
  }
  return 0;
}



// FUNCTION 144bd3010 FUN_144bd3010 body=2318 status=ok
// SIG undefined FUN_144bd3010(void)

void FUN_144bd3010(longlong param_1)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  char *pcVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pcVar15 = "";
  lVar4 = *(longlong *)(param_1 + 0x78);
  uVar16 = 0;
  lVar17 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + lVar4;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar9 = FUN_144f438d0(param_1,0x5c);
    if (lVar9 != 0) {
      lVar14 = 0;
      do {
        lVar13 = lVar14 + 1;
        if (*(char *)(lVar9 + lVar14) != (&DAT_14b4fcdd9)[lVar14]) {
          lVar14 = 0;
          goto LAB_144bd30d0;
        }
        lVar14 = lVar13;
      } while (lVar13 != 4);
    }
    goto LAB_144bd30e7;
  }
  pcVar15 = "ah was NULL at cc2";
  FUN_144bd5aa0(1,&DAT_149980abc,"ah was NULL at cc2");
LAB_144bd377e:
  if ((*(uint *)(param_1 + 0x70) & 0x10000200) == 0x10000000) {
    local_98 = -1;
    do {
      local_98 = local_98 + 1;
    } while (pcVar15[local_98] != '\0');
    (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
              (param_1,1,*(undefined8 *)(param_1 + 0x130),pcVar15);
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x20000;
  }
  if (*(int *)(param_1 + 0x1a0) == -1) {
    FUN_144bd7620(param_1);
    thunk_FUN_144f43630(param_1,0);
    FUN_144bd3de0(param_1);
    thunk_FUN_144f3cee0(*(undefined8 *)(param_1 + 0xf8),0,&DAT_1499809d8);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    thunk_FUN_144f3cee0(param_1,0,"lws_free");
    goto LAB_144bd390e;
  }
  goto LAB_144bd38f0;
  while (lVar14 = lVar13, lVar13 != 5) {
LAB_144bd30d0:
    lVar13 = lVar14 + 1;
    if (*(char *)(lVar9 + lVar14) != (&DAT_149980ac0)[lVar14]) goto LAB_144bd3188;
  }
LAB_144bd30e7:
  if ((*(uint *)(param_1 + 0x1bc) & 0x200) == 0) {
LAB_144bd3188:
    if (*(longlong *)(param_1 + 0xf8) == 0) {
      FUN_144f438d0(param_1,0x58);
      uVar12 = FUN_144bd3f50();
      *(undefined8 *)(param_1 + 0xf8) = uVar12;
    }
    if (lVar9 != 0) {
      lVar14 = 0;
      do {
        lVar13 = lVar14 + 1;
        if (*(char *)(lVar9 + lVar14) != (&DAT_14b4fcdd9)[lVar14]) {
          lVar14 = 0;
          goto LAB_144bd3223;
        }
        lVar14 = lVar13;
      } while (lVar13 != 4);
      goto LAB_144bd3236;
    }
    goto LAB_144bd3270;
  }
  pcVar10 = (char *)FUN_144f438d0(param_1,0x58);
  lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x1a8);
  do {
    do {
      lVar13 = lVar14;
      if (lVar13 == 0) goto LAB_144bd3188;
      lVar14 = *(longlong *)(lVar13 + 8);
    } while ((lVar13 + -0x100 == param_1) || (*(longlong *)(lVar13 + -8) == 0));
    pcVar11 = pcVar10;
    do {
      cVar1 = *pcVar11;
      cVar2 = pcVar11[*(longlong *)(lVar13 + -8) - (longlong)pcVar10];
      if (cVar1 != cVar2) break;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
  } while (((cVar1 != cVar2) || (((*(uint *)(lVar13 + 0x70) ^ *(uint *)(param_1 + 0x170)) & 1) != 0)
           ) || (*(short *)(param_1 + 0x1c0) != *(short *)(lVar13 + 0xc0)));
  if ((*(uint *)(lVar13 + 0xbc) & 0x100) != 0) goto LAB_144bd3188;
  FUN_144bd63a0(param_1 + 0x120,lVar13 + 0x10);
  if ((*(longlong *)(param_1 + 0x120) != 0) || (*(longlong *)(param_1 + 0x128) != 0)) {
    *(undefined2 *)(param_1 + 0x70) = 0x12;
    FUN_144bd0240(lVar13 + -0x100);
    goto LAB_144bd390e;
  }
LAB_144bd3873:
  *(undefined2 *)(param_1 + 0x70) = 0x11;
  FUN_144bd6160(param_1,8,0x14);
  local_58 = *(undefined8 *)(param_1 + 0x178);
  local_50 = 0x90009;
  iVar7 = FUN_144bd81d0(lVar4,&local_58);
  if (-1 < iVar7) goto LAB_144bd390e;
  pcVar15 = "first service failed";
  goto LAB_144bd38b7;
  while (lVar14 = lVar13, lVar13 != 5) {
LAB_144bd3223:
    lVar13 = lVar14 + 1;
    if (*(char *)(lVar9 + lVar14) != (&DAT_149980ac0)[lVar14]) goto LAB_144bd3270;
  }
LAB_144bd3236:
  if (((*(longlong *)(param_1 + 0x120) == 0) && (*(longlong *)(param_1 + 0x128) == 0)) &&
     ((*(longlong *)(param_1 + 0x100) == 0 && (*(longlong *)(param_1 + 0x108) == 0)))) {
    FUN_144bd63a0((longlong *)(param_1 + 0x100),*(longlong *)(param_1 + 0x80) + 0x1a0);
  }
LAB_144bd3270:
  lVar9 = *(longlong *)(param_1 + 0x80);
  if (((*(byte *)(*(longlong *)(lVar9 + 0x148) + 0x4b0) & 0x20) == 0) &&
     ((*(byte *)(lVar9 + 0x22c) & 0x20) == 0)) {
    uVar6 = 0x400000;
  }
  else {
    uVar6 = 0;
  }
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xffbfffff;
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | uVar6;
  if (*(int *)(lVar9 + 0x110) == 0) {
    lVar9 = FUN_144f438d0(param_1,0x58);
  }
  else {
    uVar3 = *(undefined2 *)(param_1 + 0x1c0);
    uVar12 = FUN_144f438d0(param_1,0x58);
    iVar7 = FUN_1424c2e40(*(undefined8 *)(lVar17 + 0xa8),
                          "CONNECT %s:%u HTTP/1.0\r\nUser-agent: libwebsockets\r\n",uVar12,uVar3);
    lVar9 = (longlong)iVar7;
    if (**(char **)(param_1 + 0x80) != '\0') {
      iVar7 = FUN_1424c2e40(*(longlong *)(lVar17 + 0xa8) + lVar9,"Proxy-authorization: basic %s\r\n"
                           );
      lVar9 = lVar9 + iVar7;
    }
    iVar7 = FUN_1424c2e40(*(longlong *)(lVar17 + 0xa8) + lVar9,&DAT_149e01eb0);
    uVar16 = lVar9 + iVar7;
    lVar9 = *(longlong *)(param_1 + 0x80) + 0x80;
  }
  if (*(longlong *)(param_1 + 0x180) == 0) {
    FUN_1424c2e40(local_48,&DAT_149980b20);
    local_80 = 1;
    local_88 = 0x200000008;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    if ((*(uint *)(param_1 + 0x1b8) & 0x400000) != 0) {
      local_88 = 0xc08;
    }
    iVar7 = getaddrinfo(lVar9,local_48,&local_88,param_1 + 0x180);
    if (iVar7 != 0) {
      FUN_144bd5aa0(4,"%s: getaddrinfo failed %d\n","lws_client_connect_2",iVar7);
      pcVar15 = "getaddrinfo failed";
      goto LAB_144bd377e;
    }
    *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x180);
  }
  lVar9 = *(longlong *)(param_1 + 0x188);
  while (lVar9 != 0) {
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x188) + 4);
    if ((iVar7 == 2) || (((*(uint *)(param_1 + 0x1b8) & 0x400000) != 0 && (iVar7 == 0x17)))) {
      if (*(longlong *)(param_1 + 0x178) == -1) {
        pcVar5 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x3d0) + 0x38);
        if ((pcVar5 != (code *)0x0) && (iVar7 = (*pcVar5)(param_1), iVar7 != 0)) {
          pcVar15 = "waiting for event loop watcher to close";
          goto LAB_144bd377e;
        }
        lVar9 = Ordinal_23(*(undefined4 *)(*(longlong *)(param_1 + 0x188) + 4),
                           *(undefined4 *)(*(longlong *)(param_1 + 0x188) + 8),0);
        *(longlong *)(param_1 + 0x178) = lVar9;
        if (lVar9 == -1) {
          if (*(longlong *)(*(longlong *)(param_1 + 0x188) + 0x28) != 0) goto LAB_144bd36ae;
          FUN_144bd5aa0(2,"Unable to open socket\n");
          pcVar15 = "unable to open socket";
          goto LAB_144bd377e;
        }
        iVar7 = FUN_144f3c110(*(undefined8 *)(param_1 + 0x80),lVar9);
        if (iVar7 != 0) {
          FUN_144bd5aa0(1,"Failed to set wsi socket options\n");
          Ordinal_3(*(undefined8 *)(param_1 + 0x178));
          pcVar15 = "set socket opts failed";
          goto LAB_144bd377e;
        }
        *(undefined2 *)(param_1 + 0x70) = 0x201;
        pcVar5 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x3d0) + 0x48);
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(param_1);
        }
        iVar7 = FUN_144bd0520(*(undefined8 *)(param_1 + 0x78),param_1);
        if (iVar7 != 0) {
          Ordinal_3(*(undefined8 *)(param_1 + 0x178));
          pcVar15 = "insert wsi failed";
          goto LAB_144bd377e;
        }
        thunk_FUN_144bd0b20(param_1,0,9);
        if (*(longlong *)(param_1 + 0xa0) == 0) {
          *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x170);
        }
        local_98 = 0;
        (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                  (param_1,0x1d,*(undefined8 *)(param_1 + 0x130));
        FUN_144bd6160(param_1);
        lVar9 = FUN_144f438d0(param_1,0x5d);
        if ((lVar9 == 0) ||
           (iVar7 = FUN_144bd69e0(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x178)),
           -1 < iVar7)) goto LAB_144bd35cc;
        if (*(longlong *)(*(longlong *)(param_1 + 0x188) + 0x28) == 0) {
          pcVar15 = "unable to bind socket";
          goto LAB_144bd38b7;
        }
      }
      else {
LAB_144bd35cc:
        iVar7 = Ordinal_4(*(undefined8 *)(param_1 + 0x178),
                          *(undefined8 *)(*(longlong *)(param_1 + 0x188) + 0x20));
        if ((iVar7 != -1) && (iVar7 = Ordinal_111(), iVar7 != 0x2748)) break;
        iVar7 = Ordinal_111();
        if ((((iVar7 == 0x2735) || (iVar7 = Ordinal_111(), iVar7 == 0x2734)) ||
            (iVar7 = Ordinal_111(), iVar7 == 0x2733)) || (iVar7 = Ordinal_111(), iVar7 == 0x2726)) {
          iVar7 = FUN_144f3c270(param_1);
          if (iVar7 == 0) {
            iVar7 = thunk_FUN_144bd0b20(param_1,0,2);
            if (iVar7 == 0) goto LAB_144bd390e;
            pcVar15 = "POLLOUT set failed";
            goto LAB_144bd38b7;
          }
          if (*(longlong *)(*(longlong *)(param_1 + 0x188) + 0x28) == 0) {
            pcVar15 = "socket connect failed";
            goto LAB_144bd38b7;
          }
        }
        else {
          iVar7 = Ordinal_111();
          if (iVar7 == 0x2748) break;
          if (*(longlong *)(*(longlong *)(param_1 + 0x188) + 0x28) == 0) {
            uVar8 = Ordinal_111();
            FUN_144bd5aa0(4,"Connect failed errno=%d\n",uVar8);
            pcVar15 = "connect failed";
            goto LAB_144bd38b7;
          }
        }
      }
      FUN_144bd02e0(param_1);
      Ordinal_3(*(undefined8 *)(param_1 + 0x178));
    }
LAB_144bd36ae:
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x28);
    *(longlong *)(param_1 + 0x188) = lVar9;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x110) == 0) goto LAB_144bd3873;
  iVar7 = FUN_144f43900(param_1,0x58,*(longlong *)(param_1 + 0x80) + 0x80);
  if (iVar7 == 0) {
    *(undefined2 *)(param_1 + 0x1c0) = *(undefined2 *)(*(longlong *)(param_1 + 0x80) + 0x110);
    iVar7 = Ordinal_19(*(undefined8 *)(param_1 + 0x178),*(undefined8 *)(lVar17 + 0xa8),
                       uVar16 & 0xffffffff,0);
    if (-1 < iVar7) {
      FUN_144bd6160(param_1,1,0x14);
      *(undefined2 *)(param_1 + 0x70) = 0x202;
      goto LAB_144bd390e;
    }
    pcVar15 = "proxy write failed";
  }
LAB_144bd38b7:
  local_98 = -1;
  do {
    local_98 = local_98 + 1;
  } while (pcVar15[local_98] != '\0');
  (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
            (param_1,1,*(undefined8 *)(param_1 + 0x130),pcVar15);
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x20000;
LAB_144bd38f0:
  thunk_FUN_144bd6da0(param_1,0,"client_connect2");
LAB_144bd390e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
}



// FUNCTION 144bd3940 FUN_144bd3940 body=855 status=ok
// SIG undefined FUN_144bd3940(void)

void FUN_144bd3940(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined2 param_4,
                  char *param_5,undefined8 param_6)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_318 [32];
  char local_2f8 [384];
  char local_178 [304];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_318;
  memset(local_2f8 + 0x50,0,300);
  memset(local_178,0,300);
  lVar4 = *param_1;
  local_2f8[0x10] = '\0';
  local_2f8[0x11] = '\0';
  local_2f8[0x12] = '\0';
  local_2f8[0x13] = '\0';
  local_2f8[0x14] = '\0';
  local_2f8[0x15] = '\0';
  local_2f8[0x16] = '\0';
  local_2f8[0x17] = '\0';
  local_2f8[0x18] = '\0';
  local_2f8[0x19] = '\0';
  local_2f8[0x1a] = '\0';
  local_2f8[0x1b] = '\0';
  local_2f8[0x1c] = '\0';
  local_2f8[0x1d] = '\0';
  local_2f8[0x1e] = '\0';
  local_2f8[0x1f] = '\0';
  local_2f8[0x20] = '\0';
  local_2f8[0x21] = '\0';
  local_2f8[0x22] = '\0';
  local_2f8[0x23] = '\0';
  local_2f8[0x24] = '\0';
  local_2f8[0x25] = '\0';
  local_2f8[0x26] = '\0';
  local_2f8[0x27] = '\0';
  local_2f8[0x28] = '\0';
  local_2f8[0x29] = '\0';
  local_2f8[0x2a] = '\0';
  local_2f8[0x2b] = '\0';
  local_2f8[0x2c] = '\0';
  local_2f8[0x2d] = '\0';
  local_2f8[0x2e] = '\0';
  local_2f8[0x2f] = 0;
  local_2f8[0] = '\0';
  local_2f8[1] = '\0';
  local_2f8[2] = '\0';
  local_2f8[3] = '\0';
  local_2f8[4] = '\0';
  local_2f8[5] = '\0';
  local_2f8[6] = '\0';
  local_2f8[7] = '\0';
  local_2f8[8] = '\0';
  local_2f8[9] = '\0';
  local_2f8[10] = '\0';
  local_2f8[0xb] = '\0';
  local_2f8[0xc] = '\0';
  local_2f8[0xd] = '\0';
  local_2f8[0xe] = '\0';
  local_2f8[0xf] = 0;
  local_2f8[0x30] = '\0';
  local_2f8[0x31] = '\0';
  local_2f8[0x32] = '\0';
  local_2f8[0x33] = '\0';
  local_2f8[0x34] = '\0';
  local_2f8[0x35] = '\0';
  local_2f8[0x36] = '\0';
  local_2f8[0x37] = '\0';
  local_2f8[0x38] = '\0';
  local_2f8[0x39] = '\0';
  local_2f8[0x3a] = '\0';
  local_2f8[0x3b] = '\0';
  local_2f8[0x3c] = '\0';
  local_2f8[0x3d] = '\0';
  local_2f8[0x3e] = '\0';
  local_2f8[0x3f] = '\0';
  local_2f8[0x40] = '\0';
  local_2f8[0x41] = '\0';
  local_2f8[0x42] = '\0';
  local_2f8[0x43] = '\0';
  local_2f8[0x44] = '\0';
  local_2f8[0x45] = '\0';
  local_2f8[0x46] = '\0';
  local_2f8[0x47] = '\0';
  local_2f8[0x48] = '\0';
  local_2f8[0x49] = '\0';
  local_2f8[0x4a] = '\0';
  local_2f8[0x4b] = '\0';
  local_2f8[0x4c] = '\0';
  local_2f8[0x4d] = '\0';
  local_2f8[0x4e] = '\0';
  local_2f8[0x4f] = 0;
  if (*(char *)(lVar4 + 0x1c9) == '\x03') {
    FUN_144bd5aa0(1,"%s: Too many redirects\n","lws_client_reset");
  }
  else {
    *(char *)(lVar4 + 0x1c9) = *(char *)(lVar4 + 0x1c9) + '\x01';
    lVar3 = FUN_144f438d0(lVar4,0x5b);
    if (lVar3 != 0) {
      FUN_144bd66a0(local_2f8 + 0x50,lVar3,300);
    }
    lVar3 = FUN_144f438d0(lVar4,0x57);
    if (lVar3 != 0) {
      FUN_144bd66a0(local_178,lVar3,300);
    }
    lVar3 = FUN_144f438d0(lVar4,0x5c);
    if (lVar3 != 0) {
      FUN_144bd66a0(local_2f8 + 0x10,lVar3,0x20);
    }
    lVar3 = FUN_144f438d0(lVar4,0x5d);
    if (lVar3 != 0) {
      FUN_144bd66a0(local_2f8,lVar3,0x10);
    }
    lVar3 = FUN_144f438d0(lVar4,0x5e);
    if (lVar3 != 0) {
      FUN_144bd66a0(local_2f8 + 0x30,lVar3,0x20);
    }
    FUN_144f412b0(lVar4);
    pcVar1 = *(code **)(*(longlong *)(*(longlong *)(lVar4 + 0x78) + 0x3d0) + 0x40);
    if (pcVar1 == (code *)0x0) {
      Ordinal_3(*(undefined8 *)(lVar4 + 0x178));
    }
    else {
      (*pcVar1)(lVar4);
    }
    FUN_144bd02e0(lVar4);
    *(uint *)(lVar4 + 0x1b8) = *(uint *)(lVar4 + 0x1b8) & 0xfffffffe;
    *(undefined2 *)(lVar4 + 0x70) = 0x200;
    *(undefined4 *)(lVar4 + 0x170) = param_2;
    *(undefined8 *)(lVar4 + 0x178) = 0xffffffffffffffff;
    *(undefined8 *)(lVar4 + 0xa0) = 0;
    *(undefined1 *)(lVar4 + 0x1c6) = 0;
    *(undefined2 *)(lVar4 + 0x1c0) = param_4;
    FUN_144f42ad0(*(undefined8 *)(lVar4 + 8));
    iVar2 = FUN_144f43900(lVar4,0x58,param_3);
    if ((((iVar2 == 0) && (iVar2 = FUN_144f43900(lVar4,0x5a,param_6), iVar2 == 0)) &&
        ((local_2f8[0x50] == '\0' ||
         (iVar2 = FUN_144f43900(lVar4,0x5b,local_2f8 + 0x50), iVar2 == 0)))) &&
       ((((local_178[0] == '\0' || (iVar2 = FUN_144f43900(lVar4,0x57,local_178), iVar2 == 0)) &&
         ((local_2f8[0x10] == '\0' ||
          (iVar2 = FUN_144f43900(lVar4,0x5c,local_2f8 + 0x10), iVar2 == 0)))) &&
        (((local_2f8[0] == '\0' || (iVar2 = FUN_144f43900(lVar4,0x5d,local_2f8), iVar2 == 0)) &&
         ((local_2f8[0x30] == '\0' ||
          (iVar2 = FUN_144f43900(lVar4,0x5e,local_2f8 + 0x30), iVar2 == 0)))))))) {
      local_2f8[0x50] = '/';
      strncpy(local_2f8 + 0x51,param_5,0x12a);
      iVar2 = FUN_144f43900(lVar4,0x59,local_2f8 + 0x50);
      if (iVar2 == 0) {
        lVar4 = FUN_144bd3010(lVar4);
        *param_1 = lVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_318);
}



// FUNCTION 144bd3cc0 FUN_144bd3cc0 body=279 status=ok
// SIG undefined FUN_144bd3cc0(void)

longlong FUN_144bd3cc0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0xf0);
  if (puVar2 == (undefined8 *)0x0) {
    return param_1;
  }
  iVar3 = FUN_144f43900(param_1,0x58,*puVar2);
  if (((iVar3 != 0) || (iVar3 = FUN_144f43900(param_1,0x59,puVar2[1]), iVar3 != 0)) ||
     (iVar3 = FUN_144f43900(param_1,0x5a,puVar2[2]), iVar3 != 0)) {
    return 0;
  }
  if ((puVar2[3] != 0) && (iVar3 = FUN_144f43900(param_1,0x5b), iVar3 != 0)) {
    return 0;
  }
  if ((puVar2[4] != 0) && (iVar3 = FUN_144f43900(param_1,0x57), iVar3 != 0)) {
    return 0;
  }
  if ((puVar2[5] != 0) && (iVar3 = FUN_144f43900(param_1,0x5c), iVar3 != 0)) {
    return 0;
  }
  if ((puVar2[6] != 0) && (iVar3 = FUN_144f43900(param_1,0x5d), iVar3 != 0)) {
    return 0;
  }
  if ((puVar2[7] != 0) && (iVar3 = FUN_144f43900(param_1,0x5e), iVar3 != 0)) {
    return 0;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x78) + 0x4a8);
  *piVar1 = *piVar1 + 1;
  lVar4 = FUN_144bd3010(param_1);
  return lVar4;
}



// FUNCTION 144bd3de0 FUN_144bd3de0 body=358 status=ok
// SIG undefined FUN_144bd3de0(void)

void FUN_144bd3de0(longlong param_1)

{
  if ((param_1 != 0) && (*(undefined8 **)(param_1 + 0xf0) != (undefined8 *)0x0)) {
    thunk_FUN_144f3cee0(**(undefined8 **)(param_1 + 0xf0),0,&DAT_1499809d8);
    **(undefined8 **)(param_1 + 0xf0) = 0;
    thunk_FUN_144f3cee0(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 8),0,&DAT_1499809d8);
    *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 8) = 0;
    thunk_FUN_144f3cee0(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x10),0,&DAT_1499809d8);
    *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x10) = 0;
    thunk_FUN_144f3cee0(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x18),0,&DAT_1499809d8);
    *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x18) = 0;
    thunk_FUN_144f3cee0(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x20),0,&DAT_1499809d8);
    *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x20) = 0;
    thunk_FUN_144f3cee0(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x28),0,&DAT_1499809d8);
    *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x28) = 0;
    thunk_FUN_144f3cee0(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x30),0,&DAT_1499809d8);
    *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x30) = 0;
    thunk_FUN_144f3cee0(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x38),0,&DAT_1499809d8);
    *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x38) = 0;
    thunk_FUN_144f3cee0(*(undefined8 *)(param_1 + 0xf0),0,&DAT_1499809d8);
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 144bd3f50 FUN_144bd3f50 body=84 status=ok
// SIG undefined FUN_144bd3f50(void)

void FUN_144bd3f50(char *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = -1;
  do {
    lVar3 = lVar2;
    lVar2 = lVar3 + 1;
  } while (param_1[lVar2] != '\0');
  lVar2 = thunk_FUN_144f3cee0(0,lVar3 + 2,"strdup");
  if (lVar2 != 0) {
    lVar2 = lVar2 - (longlong)param_1;
    do {
      cVar1 = *param_1;
      param_1[lVar2] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  return;
}



// FUNCTION 144bd3fb0 FUN_144bd3fb0 body=841 status=ok
// SIG undefined FUN_144bd3fb0(void)

int FUN_144bd3fb0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 local_38;
  uint local_30;
  
  uVar3 = 0;
  cVar5 = '\0';
  if (*(longlong *)(param_2 + 0x60) == 0) {
    FUN_144bd5aa0(1,"ws role wsi with no ws\n");
    return 1;
  }
  uVar1 = *(uint *)(param_2 + 0x70) & 0xffff;
  if (uVar1 == 0x209) {
    *(uint *)(param_2 + 0x1b8) = *(uint *)(param_2 + 0x1b8) | 0x80;
  }
  else {
    local_38 = 0;
    local_30 = 0;
    if (uVar1 != 0x201) {
      if ((((*(byte *)(param_3 + 10) & 2) != 0) && ((*(uint *)(param_2 + 0x70) >> 8 & 1) != 0)) &&
         (iVar2 = FUN_144bd83d0(param_2,param_3), iVar2 != 0)) {
        if (*(short *)(param_2 + 0x70) == 0x11a) {
          *(undefined2 *)(param_2 + 0x70) = 0x11c;
        }
        return 5;
      }
      if (*(ushort *)(param_2 + 0x70) - 0x119 < 2) {
        FUN_144bd61d0(param_2,1);
      }
      if (*(char *)(param_2 + 0x1ca) != '\0') {
        return 4;
      }
      do {
        local_30 = FUN_144bd64e0(param_2 + 0x140,&local_38);
        if (local_30 == 0) {
          if (((*(byte *)(param_3 + 8) & *(byte *)(param_3 + 10) & 9) == 0) &&
             (*(longlong *)(param_2 + 8) == 0)) {
            return 4;
          }
          if (*(char *)(param_2 + 0x1ca) != '\0') {
            return 4;
          }
          if (((*(uint *)(param_2 + 0x70) >> 0x1c & 1) == 0) ||
             ((uVar1 = (*(uint *)(param_2 + 0x70) & 0xffff) - 0x10e, uVar1 < 0xe &&
              ((0x2201U >> (uVar1 & 0x1f) & 1) != 0)))) {
            local_38 = *(undefined8 *)(param_1 + 8);
            cVar5 = '\0';
            if (*(undefined ***)(param_2 + 0x68) == &PTR_DAT_14c6da110) {
              local_30 = *(uint *)(*(longlong *)(param_2 + 0x60) + 0xb4);
            }
            else {
              local_30 = *(uint *)(*(longlong *)(param_2 + 0x78) + 0x4bc);
            }
            uVar1 = *(uint *)(*(longlong *)(param_2 + 0x78) + 0x4bc);
            if (uVar1 < local_30) {
              local_30 = uVar1;
            }
            if ((int)local_30 < (int)uVar3) {
              uVar3 = local_30;
            }
            uVar1 = local_30;
            if (uVar3 != 0) {
              uVar1 = uVar3;
            }
            local_30 = FUN_144f40f60(param_2,local_38,uVar1);
            if (local_30 == 0xfffffffc) {
              return 4;
            }
            if (local_30 == 0xffffffff) {
              return 5;
            }
            if (local_30 == 0) {
              return 5;
            }
            if ((*(short *)(*(longlong *)(param_2 + 0x78) + 0x4e4) != 0) &&
               (*(undefined ***)(param_2 + 0x68) == &PTR_DAT_14c6da110)) {
              uVar3 = FUN_144bd6890();
              *(ulonglong *)(*(longlong *)(param_2 + 0x60) + 0xa0) = (ulonglong)uVar3;
            }
            local_30 = local_30 & 0x7fffffff;
            goto LAB_144bd422a;
          }
        }
        else {
          cVar5 = '\x01';
LAB_144bd422a:
          if (local_30 != 0) {
            iVar2 = FUN_144f3d190(param_2,local_38,(longlong)(int)local_30);
            if (iVar2 < 0) {
              return 3;
            }
            iVar2 = FUN_144bd8820(param_2,&local_38,iVar2,cVar5);
            if (iVar2 != 0) {
              return 5;
            }
          }
        }
        local_38 = 0;
        local_30 = 0;
        if ((*(longlong *)(param_2 + 8) != 0) && ((*(uint *)(param_2 + 0x1bc) & 0x400) == 0)) {
          thunk_FUN_144f43630(param_2,0);
        }
        uVar3 = FUN_144f411d0(param_2);
        if (uVar3 == 0) {
          if ((cVar5 != '\0') && (lVar4 = FUN_144bd64e0(param_2 + 0x140,0), lVar4 == 0)) {
            FUN_144bd7850(param_2);
          }
          return 4;
        }
        uVar1 = *(uint *)(*(longlong *)(param_2 + 0x78) + 0x4bc);
        if (uVar1 < uVar3) {
          uVar3 = uVar1;
        }
      } while( true );
    }
    if (((*(byte *)(param_3 + 10) & 2) == 0) || (iVar2 = FUN_144bd83d0(param_2,param_3), iVar2 == 0)
       ) {
      iVar2 = FUN_144f45070(param_2,param_3,0);
      return 4 - (uint)(iVar2 != 0);
    }
  }
  return 5;
}



// FUNCTION 144bd4300 FUN_144bd4300 body=463 status=ok
// SIG undefined FUN_144bd4300(void)

byte FUN_144bd4300(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  uVar6 = 6;
  uVar4 = *(uint *)(param_1 + 0x70) & 0xffff;
  if (uVar4 == 0x119) {
    FUN_144bd5ce0(0x10,*(longlong *)(param_1 + 0x60) + 0x18,
                  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xbd));
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xffefffff;
    iVar2 = FUN_144bd8dc0(param_1,*(longlong *)(param_1 + 0x60) + 0x18,
                          *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xbd),4);
    if (iVar2 < 0) {
      return 1;
    }
    if ((*(uint *)(param_1 + 0x1b8) >> 0x15 & 1) == 0) {
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xffdfffff;
      *(undefined2 *)(param_1 + 0x70) = 0x11a;
      return 1;
    }
    *(undefined2 *)(param_1 + 0x70) = 0x11b;
    FUN_144bd6160(param_1,6,5);
    return 0;
  }
  if (*(undefined ***)(param_1 + 0x68) == &PTR_DAT_14c6da110) {
    lVar5 = *(longlong *)(param_1 + 0x60);
    uVar3 = *(uint *)(lVar5 + 0xc4);
    if ((char)uVar3 < '\0') goto LAB_144bd43eb;
  }
  if (uVar4 == 0x11a) {
    lVar5 = *(longlong *)(param_1 + 0x60);
    uVar3 = *(uint *)(lVar5 + 0xc4);
    if ((uVar3 & 0x40) != 0) {
LAB_144bd43eb:
      if ((uVar3 & 0x40) == 0) {
        if (*(int *)(param_1 + 0x74) != 0) {
          *(uint *)(lVar5 + 0xc4) = uVar3 & 0xffffff7f;
          return 0;
        }
      }
      else {
        uVar6 = 4;
      }
      iVar2 = FUN_144bd8dc0(param_1,lVar5 + 0x18,*(undefined1 *)(lVar5 + 0xb8),uVar6);
      if (iVar2 < 0) {
        return 1;
      }
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar1 = *puVar1 & 0xffffff7f;
      return *(byte *)(*(longlong *)(param_1 + 0x60) + 0xc4) >> 6 & 1;
    }
  }
  if ((*(byte *)(param_1 + 0x1b8) & 0x80) == 0) {
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
    if ((uVar4 >> 0xd & 1) != 0) {
      *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4) = uVar4 & 0xffffdfff;
      iVar2 = FUN_144bd8dc0(param_1,*(longlong *)(param_1 + 0x60) + 0x18,0,5);
      if (iVar2 < 0) {
        return 1;
      }
      FUN_144bd6160(param_1,0x11,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x4b8));
      return 0;
    }
  }
  return 2;
}



// FUNCTION 144bd44d0 FUN_144bd44d0 body=352 status=ok
// SIG undefined FUN_144bd44d0(void)

undefined8 FUN_144bd44d0(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if ((*(short *)(param_1 + 0x4e4) != 0) && (*(longlong *)(param_1 + 8) < param_3 + 10)) {
    lVar2 = *(longlong *)(param_1 + 0x378);
    *(longlong *)(param_1 + 8) = param_3;
    for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x150)) {
      iVar5 = 0;
      if (0 < *(int *)(lVar2 + 0x230)) {
        lVar6 = 0;
        do {
          for (lVar3 = *(longlong *)(lVar6 + *(longlong *)(lVar2 + 400)); lVar3 != 0;
              lVar3 = *(longlong *)(lVar3 + 0xb0)) {
            if ((((*(undefined ***)(lVar3 + 0x68) == &PTR_DAT_14c6da110) &&
                 ((*(byte *)(lVar3 + 0x1b8) & 0x80) == 0)) &&
                ((*(uint *)(*(longlong *)(lVar3 + 0x60) + 0xc4) & 0x2000) == 0)) &&
               ((*(longlong *)(*(longlong *)(lVar3 + 0x60) + 0xa0) != 0 &&
                (iVar4 = FUN_144bd68b0(param_1,param_3),
                (int)(uint)*(ushort *)(param_1 + 0x4e4) < iVar4)))) {
              puVar1 = (uint *)(*(longlong *)(lVar3 + 0x60) + 0xc4);
              *puVar1 = *puVar1 | 0x2000;
              FUN_144bd6160(lVar3,0x10,*(undefined4 *)(param_1 + 0x4b8));
              FUN_144bd0240(lVar3);
              *(longlong *)(*(longlong *)(lVar3 + 0x60) + 0xa0) = param_3;
            }
          }
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + 8;
        } while (iVar5 < *(int *)(lVar2 + 0x230));
      }
    }
  }
  return 0;
}



// FUNCTION 144bd4630 FUN_144bd4630 body=3 status=ok
// SIG undefined FUN_144bd4630(void)

undefined8 FUN_144bd4630(void)

{
  return 0;
}



// FUNCTION 144bd4640 FUN_144bd4640 body=129 status=ok
// SIG undefined FUN_144bd4640(void)

undefined8 FUN_144bd4640(longlong param_1,int param_2)

{
  if (*(char *)(*(longlong *)(param_1 + 0x60) + 0xbd) == '\0') {
    if ((param_2 == 0) || (param_2 == 9999)) {
      return 0;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xbd) = 2;
    *(char *)(*(longlong *)(param_1 + 0x60) + 0x18) = (char)((uint)param_2 >> 8);
    *(char *)(*(longlong *)(param_1 + 0x60) + 0x19) = (char)param_2;
  }
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x300000;
  *(undefined2 *)(param_1 + 0x70) = 0x119;
  FUN_144bd7fb0(param_1,0x18,5);
  FUN_144bd0240(param_1);
  return 1;
}



// FUNCTION 144bd46d0 FUN_144bd46d0 body=111 status=ok
// SIG undefined FUN_144bd46d0(void)

undefined8 FUN_144bd46d0(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  thunk_FUN_144f3cee0(**(undefined8 **)(param_2 + 0x60),0,&DAT_1499809d8);
  **(undefined8 **)(param_2 + 0x60) = 0;
  if (*(longlong *)(param_2 + 0x148) != 0) {
    thunk_FUN_144f3cee0(*(longlong *)(param_2 + 0x148),0,&DAT_1499809d8);
    *(undefined8 *)(param_2 + 0x148) = 0;
  }
  *(undefined1 *)(*(longlong *)(param_2 + 0x60) + 0xb8) = 0;
  puVar1 = (uint *)(*(longlong *)(param_2 + 0x60) + 0xc4);
  *puVar1 = *puVar1 & 0xffffff7f;
  return 0;
}



// FUNCTION 144bd4740 FUN_144bd4740 body=1040 status=ok
// SIG undefined FUN_144bd4740(void)

ulonglong FUN_144bd4740(longlong param_1,longlong param_2,ulonglong param_3,uint *param_4)

{
  char *pcVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  byte *pbVar9;
  byte bVar10;
  ulonglong uVar11;
  uint uVar12;
  byte bVar13;
  ulonglong uVar14;
  undefined4 *local_res8;
  
  bVar10 = 0;
  bVar13 = 0;
  uVar12 = *(uint *)(param_1 + 0x70) >> 0x1c & 1;
  local_res8 = (undefined4 *)0x0;
  iVar4 = 0;
  if ((*(short *)(*(longlong *)(param_1 + 0x78) + 0x4e4) != 0) &&
     (*(undefined ***)(param_1 + 0x68) == &PTR_DAT_14c6da110)) {
    uVar3 = FUN_144bd6890();
    *(ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa0) = (ulonglong)uVar3;
  }
  uVar7 = 0;
  uVar14 = param_3;
  if (((*param_4 & 0x1f) != 3) && (uVar7 = 0, 2 < (*param_4 & 0x1f) - 7)) {
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
    uVar7 = 0;
    if ((uVar3 & 0x10) == 0) {
      *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4) = uVar3 | 0x20;
      if ((2 < *param_4 - 4) && ((int)param_3 != 0)) {
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
        if ((uVar3 >> 0xc & 1) != 0) {
          *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4) = uVar3 & 0xffffefff;
          *param_4 = (uint)*(byte *)(*(longlong *)(param_1 + 0x60) + 0xbf) | *param_4 & 0xc0;
        }
      }
      uVar14 = (ulonglong)(int)param_3;
      if (param_2 == 0) {
        FUN_144bd5aa0(1,"null buf (%d)\n",param_3 & 0xffffffff);
        return 0xffffffff;
      }
      uVar7 = 0;
      if (*(char *)(*(longlong *)(param_1 + 0x60) + 0xc1) == '\r') {
        if (uVar12 != 0) {
          local_res8 = (undefined4 *)(param_2 + -4);
          iVar4 = 4;
          bVar13 = 0x80;
        }
        switch(*param_4 & 0xf) {
        case 0:
          bVar10 = 1;
          break;
        case 1:
          bVar10 = 2;
          break;
        case 2:
          break;
        default:
          FUN_144bd5aa0(2,"lws_write: unknown write opc / wp\n");
          return 0xffffffff;
        case 4:
          bVar10 = 8;
          break;
        case 5:
          bVar10 = 9;
          break;
        case 6:
          bVar10 = 10;
        }
        if ((*param_4 & 0x40) == 0) {
          bVar10 = bVar10 | 0x80;
        }
        if (uVar14 < 0x7e) {
          uVar7 = (ulonglong)(iVar4 + 2U);
          *(byte *)(param_2 - uVar7) = bVar10;
          *(byte *)((int)(1 - (iVar4 + 2U)) + param_2) = (byte)param_3 | bVar13;
        }
        else {
          uVar8 = (undefined1)(param_3 >> 8);
          if (uVar14 < 0x10000) {
            uVar3 = iVar4 + 4;
            uVar7 = (ulonglong)uVar3;
            *(byte *)(param_2 - uVar7) = bVar10;
            *(byte *)((int)(1 - uVar3) + param_2) = bVar13 | 0x7e;
            *(undefined1 *)((int)(2 - uVar3) + param_2) = uVar8;
            iVar4 = 3 - uVar3;
          }
          else {
            uVar3 = iVar4 + 10;
            uVar7 = (ulonglong)uVar3;
            *(byte *)(param_2 - uVar7) = bVar10;
            *(byte *)((int)(1 - uVar3) + param_2) = bVar13 | 0x7f;
            *(undefined1 *)((int)(2 - uVar3) + param_2) = 0;
            *(undefined1 *)((int)(3 - uVar3) + param_2) = 0;
            *(undefined1 *)((int)(4 - uVar3) + param_2) = 0;
            *(undefined1 *)((int)(5 - uVar3) + param_2) = 0;
            *(char *)((int)(6 - uVar3) + param_2) = (char)(param_3 >> 0x18);
            *(char *)((int)(7 - uVar3) + param_2) = (char)(param_3 >> 0x10);
            iVar4 = 9 - uVar3;
            *(undefined1 *)((int)(8 - uVar3) + param_2) = uVar8;
          }
          *(byte *)(iVar4 + param_2) = (byte)param_3;
        }
      }
    }
    if (uVar12 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x60);
      if ((*(byte *)(lVar6 + 0xc4) & 0x10) == 0) {
        uVar5 = FUN_144bd68d0(param_1);
        iVar4 = FUN_144f3bc80(uVar5,lVar6 + 0x95,4);
        if (iVar4 != 4) {
          FUN_144bd5aa0(1,"frame mask generation failed\n");
          return 0xffffffff;
        }
        *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xb9) = 0;
      }
      if (local_res8 != (undefined4 *)0x0) {
        if (4 < (int)uVar14 + 4) {
          uVar11 = uVar14 & 0xffffffff;
          pbVar9 = (byte *)(local_res8 + 1);
          do {
            *pbVar9 = *pbVar9 ^ *(byte *)((ulonglong)
                                          (*(byte *)(*(longlong *)(param_1 + 0x60) + 0xb9) & 3) +
                                          0x95 + *(longlong *)(param_1 + 0x60));
            pcVar1 = (char *)(*(longlong *)(param_1 + 0x60) + 0xb9);
            *pcVar1 = *pcVar1 + '\x01';
            uVar11 = uVar11 - 1;
            pbVar9 = pbVar9 + 1;
          } while (uVar11 != 0);
        }
        *local_res8 = *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x95);
      }
    }
    if ((*(uint *)(param_1 + 0x70) & 0xf000000) == 0x1000000) {
      lVar6 = FUN_144bd68e0(param_1);
      uVar7 = (**(code **)(*(longlong *)(lVar6 + 0x68) + 0x68))
                        (param_1,param_2 - uVar7,uVar7 + uVar14,param_4);
      return uVar7;
    }
    if ((((byte)*param_4 & 0x1f) < 3) && ((*(byte *)(param_1 + 0x1b8) & 8) == 0)) {
      uVar12 = FUN_144bd8e90(param_1,param_2 - uVar7,uVar7 + uVar14);
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar2 = *puVar2 | 0x10;
      if (0 < (int)uVar12) {
        if (uVar12 == (int)uVar14 + (int)uVar7) {
          puVar2 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
          *puVar2 = *puVar2 & 0xffffffef;
          return param_3 & 0xffffffff;
        }
        uVar12 = uVar12 - (int)uVar7;
      }
      return (ulonglong)uVar12;
    }
  }
  uVar7 = FUN_144bd8e90(param_1,param_2 - uVar7,uVar7 + uVar14);
  return uVar7;
}



// FUNCTION 144bd4b90 FUN_144bd4b90 body=3 status=ok
// SIG undefined FUN_144bd4b90(void)

undefined8 FUN_144bd4b90(void)

{
  return 0;
}



// FUNCTION 144bd4ba0 FUN_144bd4ba0 body=3 status=ok
// SIG undefined FUN_144bd4ba0(void)

undefined8 FUN_144bd4ba0(void)

{
  return 0;
}



// FUNCTION 144bd4bb0 FUN_144bd4bb0 body=43 status=ok
// SIG undefined FUN_144bd4bb0(void)

undefined8 FUN_144bd4bb0(longlong param_1)

{
  thunk_FUN_144f3cee0(*(undefined8 *)(param_1 + 0x60),0,&DAT_1499809d8);
  *(undefined8 *)(param_1 + 0x60) = 0;
  return 0;
}



// FUNCTION 144bd4be0 FUN_144bd4be0 body=92 status=ok
// SIG undefined FUN_144bd4be0(void)

void FUN_144bd4be0(longlong param_1,undefined4 param_2,undefined1 *param_3,longlong param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  *(char *)(lVar2 + 0x18) = (char)((uint)param_2 >> 8);
  *(char *)(lVar2 + 0x19) = (char)param_2;
  puVar3 = (undefined1 *)(lVar2 + 0x1a);
  if ((param_3 != (undefined1 *)0x0) && (param_4 != 0)) {
    do {
      param_4 = param_4 + -1;
      if ((undefined1 *)(lVar2 + 0x95U) <= puVar3) break;
      uVar1 = *param_3;
      param_3 = param_3 + 1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (param_4 != 0);
  }
  *(char *)(*(longlong *)(param_1 + 0x60) + 0xbd) = (char)puVar3 - ((char)lVar2 + '\x18');
  return;
}



// FUNCTION 144bd4c40 FUN_144bd4c40 body=12 status=ok
// SIG undefined FUN_144bd4c40(void)

undefined8 FUN_144bd4c40(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0xa8);
}



// FUNCTION 144bd4c50 FUN_144bd4c50 body=32 status=ok
// SIG undefined FUN_144bd4c50(void)

undefined8 FUN_144bd4c50(longlong param_1)

{
  if (((*(byte *)(*(longlong *)(param_1 + 0x60) + 0xc4) & 1) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xa8) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144bd4c70 FUN_144bd4c70 body=16 status=ok
// SIG undefined FUN_144bd4c70(void)

uint FUN_144bd4c70(longlong param_1)

{
  return *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4) >> 1 & 1;
}



// FUNCTION 144bd4c80 FUN_144bd4c80 body=336 status=ok
// SIG undefined FUN_144bd4c80(void)

undefined8 FUN_144bd4c80(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int local_res8 [8];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  *(undefined2 *)(param_1 + 0x70) = 0x117;
  if ((*(short *)(*(longlong *)(param_1 + 0x78) + 0x4e4) != 0) &&
     (*(undefined ***)(param_1 + 0x68) == &PTR_DAT_14c6da110)) {
    uVar2 = FUN_144bd6890();
    *(ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa0) = (ulonglong)uVar2;
  }
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x18);
  if (iVar3 == 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x4bc);
  }
  local_res8[0] = iVar3 + 0x10;
  uVar4 = thunk_FUN_144f3cee0(0,(longlong)(iVar3 + 0x14),"rx_ubuf");
  **(undefined8 **)(param_1 + 0x60) = uVar4;
  if (**(longlong **)(param_1 + 0x60) == 0) {
    FUN_144bd5aa0(1,"Out of Mem allocating rx buffer %d\n",local_res8[0]);
    return 1;
  }
  *(int *)((longlong)*(longlong **)(param_1 + 0x60) + 0xb4) = local_res8[0];
  if (((*(uint *)(param_1 + 0x1b8) & 0x800008) == 0) &&
     (iVar3 = Ordinal_21(*(undefined8 *)(param_1 + 0x178),0xffff,0x1001,local_res8,CONCAT44(uVar5,4)
                        ), iVar3 != 0)) {
    FUN_144bd5aa0(2,"Failed to set SNDBUF to %d",local_res8[0]);
    return 1;
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0xa0) + 8);
  if ((pcVar1 != (code *)0x0) &&
     (iVar3 = (*pcVar1)(param_1,0,*(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x150),
                        *(uint *)(param_1 + 0x1b8) >> 3 & 1), iVar3 != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144bd4dd0 FUN_144bd4dd0 body=60 status=ok
// SIG undefined FUN_144bd4dd0(void)

void FUN_144bd4dd0(longlong param_1)

{
  uint uVar1;
  
  if ((*(short *)(*(longlong *)(param_1 + 0x78) + 0x4e4) != 0) &&
     (*(undefined ***)(param_1 + 0x68) == &PTR_DAT_14c6da110)) {
    uVar1 = FUN_144bd6890();
    *(ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa0) = (ulonglong)uVar1;
  }
  return;
}



// FUNCTION 144bd4e10 FUN_144bd4e10 body=3025 status=ok
// SIG undefined FUN_144bd4e10(void)

ulonglong FUN_144bd4e10(longlong param_1,byte param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  int *piVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ushort uVar9;
  longlong lVar10;
  uint uVar11;
  char *pcVar12;
  longlong lVar13;
  byte bVar14;
  longlong *plVar15;
  char *pcVar16;
  undefined2 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  
  uVar8 = 0;
  iVar6 = 6;
  uVar7 = 0;
  uVar18 = 0;
  if ((*(byte *)(param_1 + 0x1b8) & 0x80) != 0) {
    return 0xffffffff;
  }
  bVar14 = (byte)param_3;
  switch(*(undefined1 *)(param_1 + 0x1c4)) {
  case 0:
    cVar4 = *(char *)(*(longlong *)(param_1 + 0x60) + 0xc1);
    if (cVar4 != '\r') {
      FUN_144bd5aa0(2,"lws_ws_rx_sm: unknown spec version %d\n",cVar4);
      return 0;
    }
    puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
    *puVar3 = *puVar3 | 4;
  case 4:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0xba) = bVar14 & 0xf;
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0xbb) = bVar14 & 0x70;
    *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4) =
         (uint)((param_3 & 0xff) >> 7) |
         *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4) & 0xfffffffe;
    puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
    *puVar3 = *puVar3 & 0xfffff7ff;
    lVar13 = *(longlong *)(param_1 + 0x60);
    if (((*(byte *)(lVar13 + 0xba) & 8) != 0) && ((*(byte *)(lVar13 + 0xc4) & 1) == 0)) {
      puVar17 = (undefined2 *)(lVar13 + 0x18);
      lVar10 = 8;
      *puVar17 = 0xea03;
      pcVar16 = "frag ctl";
      pcVar12 = (char *)(lVar13 + 0x1a);
      do {
        lVar10 = lVar10 + -1;
        if ((char *)(lVar13 + 0x95U) <= pcVar12) break;
        cVar4 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        *pcVar12 = cVar4;
        pcVar12 = pcVar12 + 1;
      } while (lVar10 != 0);
      goto LAB_144bd5299;
    }
    switch(*(byte *)(lVar13 + 0xba)) {
    case 0:
      if ((*(uint *)(lVar13 + 0xc4) & 0x100) == 0) {
        puVar17 = (undefined2 *)(lVar13 + 0x18);
        lVar10 = 8;
        *puVar17 = 0xea03;
        pcVar16 = "bad cont";
        pcVar12 = (char *)(lVar13 + 0x1a);
        do {
          lVar10 = lVar10 + -1;
          if ((char *)(lVar13 + 0x95U) <= pcVar12) break;
          cVar4 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          *pcVar12 = cVar4;
          pcVar12 = pcVar12 + 1;
        } while (lVar10 != 0);
        goto LAB_144bd5299;
      }
      break;
    case 1:
      *(uint *)(lVar13 + 0xc4) =
           *(uint *)(lVar13 + 0xc4) ^
           (*(int *)(*(longlong *)(param_1 + 0x78) + 0x4b0) << 2 ^ *(uint *)(lVar13 + 0xc4)) & 0x400
      ;
    case 2:
      if (*(char *)(*(longlong *)(param_1 + 0x60) + 0xba) == '\x02') {
        puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
        *puVar3 = *puVar3 & 0xfffffbff;
      }
      lVar13 = *(longlong *)(param_1 + 0x60);
      if ((*(uint *)(lVar13 + 0xc4) & 0x100) == 0) {
        *(byte *)(lVar13 + 0xbc) = bVar14 & 0x70;
        lVar13 = *(longlong *)(param_1 + 0x60);
        if (*(char *)(lVar13 + 0xba) == '\x02') {
          uVar7 = 2;
        }
        *(uint *)(lVar13 + 0xc4) = uVar7 | *(uint *)(lVar13 + 0xc4) & 0xfffffffd;
        puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
        *puVar3 = *puVar3 | 0x4000;
        uVar7 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
        *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4) = (~(uVar7 << 8) ^ uVar7) & 0x100 ^ uVar7;
        break;
      }
      puVar17 = (undefined2 *)(lVar13 + 0x18);
      lVar10 = 8;
      *puVar17 = 0xea03;
      pcVar16 = "bad cont";
      pcVar12 = (char *)(lVar13 + 0x1a);
      do {
        lVar10 = lVar10 + -1;
        if ((char *)(lVar13 + 0x95U) <= pcVar12) break;
        cVar4 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        *pcVar12 = cVar4;
        pcVar12 = pcVar12 + 1;
      } while (lVar10 != 0);
      goto LAB_144bd5299;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
      puVar17 = (undefined2 *)(lVar13 + 0x18);
      lVar10 = 7;
      *puVar17 = 0xea03;
      pcVar16 = "bad opc";
      pcVar12 = (char *)(lVar13 + 0x1a);
      do {
        lVar10 = lVar10 + -1;
        if ((char *)(lVar13 + 0x95U) <= pcVar12) break;
        cVar4 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        *pcVar12 = cVar4;
        pcVar12 = pcVar12 + 1;
      } while (lVar10 != 0);
      goto LAB_144bd513c;
    case 8:
      *(uint *)(lVar13 + 0xc4) = *(uint *)(lVar13 + 0xc4) & 0xfffffbff;
      *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xbe) = 0;
    }
    lVar13 = *(longlong *)(param_1 + 0x60);
    uVar7 = *(uint *)(lVar13 + 0xc4);
    if (((uVar7 >> 9 & 1) == 0) || (1 < (byte)(*(char *)(lVar13 + 0xba) - 1U))) {
      if (((*(byte *)(lVar13 + 0xba) & 8) == 0) && ((uVar7 & 1) != 0)) {
        *(uint *)(lVar13 + 0xc4) = uVar7 & 0xfffffeff;
        puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
        *puVar3 = *puVar3 & 0xfffffdff;
      }
      uVar7 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4) = uVar7 | 0x200;
      }
      lVar13 = *(longlong *)(param_1 + 0x60);
      *(undefined1 *)(param_1 + 0x1c4) = 5;
      uVar8 = uVar18;
      if ((*(byte *)(lVar13 + 0xbb) != 0) && ((*(byte *)(lVar13 + 0xbb) & 0xbf) != 0)) {
        puVar17 = (undefined2 *)(lVar13 + 0x18);
        *(undefined2 *)(lVar13 + 0x18) = 0xea03;
        lVar10 = 8;
        pcVar16 = "rsv bits";
        pcVar12 = (char *)(lVar13 + 0x1a);
        do {
          lVar10 = lVar10 + -1;
          if ((char *)(lVar13 + 0x95U) <= pcVar12) break;
          cVar4 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          *pcVar12 = cVar4;
          pcVar12 = pcVar12 + 1;
        } while (lVar10 != 0);
LAB_144bd5299:
        *(char *)(*(longlong *)(param_1 + 0x60) + 0xbd) = (char)pcVar12 - (char)puVar17;
        uVar8 = 0xffffffff;
      }
    }
    else {
      puVar17 = (undefined2 *)(lVar13 + 0x18);
      *(undefined2 *)(lVar13 + 0x18) = 0xea03;
      lVar10 = 7;
      pcVar16 = "bad fin";
      pcVar12 = (char *)(lVar13 + 0x1a);
      do {
        lVar10 = lVar10 + -1;
        if ((char *)(lVar13 + 0x95U) <= pcVar12) break;
        cVar4 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        *pcVar12 = cVar4;
        pcVar12 = pcVar12 + 1;
      } while (lVar10 != 0);
LAB_144bd513c:
      *(char *)(*(longlong *)(param_1 + 0x60) + 0xbd) = (char)pcVar12 - (char)puVar17;
      uVar8 = 0xffffffff;
    }
    break;
  case 1:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x96) = bVar14;
    if (bVar14 != 0) {
      puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar3 = *puVar3 & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 2;
    uVar8 = uVar18;
    break;
  case 2:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x97) = bVar14;
    if (bVar14 != 0) {
      puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar3 = *puVar3 & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 3;
    uVar8 = uVar18;
    break;
  case 3:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x98) = bVar14;
    if (bVar14 != 0) {
      puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar3 = *puVar3 & 0xfffffffb;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xb9) = 0;
    *(undefined1 *)(param_1 + 0x1c4) = 4;
    uVar8 = uVar18;
    break;
  case 5:
    lVar13 = *(longlong *)(param_1 + 0x60);
    uVar11 = (uint)(param_3 & 0xff) & 0x7f;
    puVar3 = (uint *)(lVar13 + 0xc4);
    *puVar3 = *puVar3 & 0xfffffff7;
    puVar3 = (uint *)(lVar13 + 0xc4);
    *puVar3 = *puVar3 | (uint)((param_3 & 0xff) >> 4) & 0xffffff8;
    lVar13 = *(longlong *)(param_1 + 0x60);
    if (uVar11 == 0x7e) {
      if ((*(byte *)(lVar13 + 0xba) & 8) == 0) {
        *(undefined1 *)(param_1 + 0x1c4) = 6;
        return 0;
      }
    }
    else {
      if (uVar11 != 0x7f) {
        *(ulonglong *)(lVar13 + 0xa8) = (ulonglong)((uint)param_3 & 0x7f);
        plVar15 = *(longlong **)(param_1 + 0x60);
        if ((*(byte *)((longlong)plVar15 + 0xc4) & 8) != 0) {
          *(undefined1 *)(param_1 + 0x1c4) = 0x10;
          return 0;
        }
        if (plVar15[0x15] != 0) {
          *(undefined1 *)(param_1 + 0x1c4) = 0x14;
          return 0;
        }
        goto LAB_144bd55c1;
      }
      if ((*(byte *)(lVar13 + 0xba) & 8) == 0) {
        *(undefined1 *)(param_1 + 0x1c4) = 8;
        return 0;
      }
    }
    FUN_144bd5aa0(2,"Control frame with xtended length is illegal\n");
    uVar8 = 0xffffffff;
    break;
  case 6:
    *(ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa8) = (param_3 & 0xff) << 8;
    *(undefined1 *)(param_1 + 0x1c4) = 7;
    uVar8 = uVar18;
    break;
  case 7:
  case 0xf:
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
    *puVar1 = *puVar1 | param_3 & 0xff;
    *(byte *)(param_1 + 0x1c4) = ~(*(byte *)(*(longlong *)(param_1 + 0x60) + 0xc4) >> 1) & 4 | 0x10;
    uVar8 = uVar18;
    break;
  case 8:
    if ((char)bVar14 < '\0') {
      FUN_144bd5aa0(2,"b63 of length must be zero\n");
      uVar8 = 0xffffffff;
    }
    else {
      *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0xa8) = 0;
      *(undefined1 *)(param_1 + 0x1c4) = 9;
      uVar8 = uVar18;
    }
    break;
  case 9:
    *(undefined1 *)(param_1 + 0x1c4) = 10;
    uVar8 = uVar18;
    break;
  case 10:
    *(undefined1 *)(param_1 + 0x1c4) = 0xb;
    uVar8 = uVar18;
    break;
  case 0xb:
    *(undefined1 *)(param_1 + 0x1c4) = 0xc;
    uVar8 = uVar18;
    break;
  case 0xc:
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
    *puVar1 = *puVar1 | (param_3 & 0xff) << 0x18;
    *(undefined1 *)(param_1 + 0x1c4) = 0xd;
    uVar8 = uVar18;
    break;
  case 0xd:
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
    *puVar1 = *puVar1 | (param_3 & 0xff) << 0x10;
    *(undefined1 *)(param_1 + 0x1c4) = 0xe;
    uVar8 = uVar18;
    break;
  case 0xe:
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
    *puVar1 = *puVar1 | (param_3 & 0xff) << 8;
    *(undefined1 *)(param_1 + 0x1c4) = 0xf;
    uVar8 = uVar18;
    break;
  case 0x10:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x95) = bVar14;
    if (bVar14 != 0) {
      puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar3 = *puVar3 & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 0x11;
    uVar8 = uVar18;
    break;
  case 0x11:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x96) = bVar14;
    if (bVar14 != 0) {
      puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar3 = *puVar3 & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 0x12;
    uVar8 = uVar18;
    break;
  case 0x12:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x97) = bVar14;
    if (bVar14 != 0) {
      puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar3 = *puVar3 & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 0x13;
    uVar8 = uVar18;
    break;
  case 0x13:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x98) = bVar14;
    if (bVar14 != 0) {
      puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar3 = *puVar3 & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 0x14;
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xb9) = 0;
    plVar15 = *(longlong **)(param_1 + 0x60);
    if (plVar15[0x15] != 0) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 0;
    goto LAB_144bd5606;
  case 0x14:
    plVar15 = *(longlong **)(param_1 + 0x60);
    uVar11 = (int)plVar15[0x16] + 0x10;
    if (*(uint *)((longlong)plVar15 + 0xb4) <= uVar11) {
      FUN_144bd5aa0(1,"Attempted overflow \n");
      return 0xffffffff;
    }
    if ((param_2 & 1) == 0) {
      if ((*(byte *)((longlong)plVar15 + 0xc4) & 4) == 0) {
        *(byte *)((ulonglong)uVar11 + *plVar15) =
             *(byte *)((ulonglong)(*(byte *)((longlong)plVar15 + 0xb9) & 3) + 0x95 +
                      (longlong)plVar15) ^ bVar14;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x60) + 0xb0);
        *piVar2 = *piVar2 + 1;
        pcVar12 = (char *)(*(longlong *)(param_1 + 0x60) + 0xb9);
        *pcVar12 = *pcVar12 + '\x01';
      }
      else {
        *(byte *)((ulonglong)uVar11 + *plVar15) = bVar14;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x60) + 0xb0);
        *piVar2 = *piVar2 + 1;
      }
      plVar15 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
      *plVar15 = *plVar15 + -1;
    }
    plVar15 = *(longlong **)(param_1 + 0x60);
    if (plVar15[0x15] == 0) {
LAB_144bd55c1:
      *(undefined1 *)(param_1 + 0x1c4) = 0;
    }
    else {
      uVar20 = *(ulonglong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
      if (uVar20 == 0) {
        if ((int)plVar15[0x16] != *(int *)(*(longlong *)(param_1 + 0x78) + 0x4bc)) {
          return 0;
        }
      }
      else if (*(uint *)(plVar15 + 0x16) != uVar20) {
        return 0;
      }
    }
LAB_144bd5606:
    bVar14 = *(byte *)((longlong)plVar15 + 0xba);
    if (bVar14 < 3) {
LAB_144bd5658:
      plVar15 = *(longlong **)(param_1 + 0x60);
      uVar7 = *(uint *)(plVar15 + 0x16);
      lVar13 = (longlong)(int)uVar7;
      uVar20 = *plVar15 + 0x10;
      if ((((*(char *)((longlong)plVar15 + 0xba) != '\n') || (uVar19 = uVar8, uVar7 != 0)) &&
          (uVar19 = uVar18, 1 < *(ushort *)(param_1 + 0x70) - 0x11a)) && (uVar7 != 0)) {
        if (((*(uint *)((longlong)plVar15 + 0xc4) >> 10 & 1) != 0) &&
           ((*(uint *)((longlong)plVar15 + 0xc4) >> 0xb & 1) == 0)) {
          iVar5 = FUN_144bd7ca0((longlong)plVar15 + 0xbe,uVar20,lVar13);
          if (iVar5 == 0) {
            lVar10 = *(longlong *)(param_1 + 0x60);
            if (((*(longlong *)(lVar10 + 0xa8) != 0) || ((*(byte *)(lVar10 + 0xc4) & 1) == 0)) ||
               (*(char *)(lVar10 + 0xbe) == '\0')) goto LAB_144bd595f;
            *(undefined2 *)(lVar10 + 0x18) = 0xef03;
            lVar13 = 0xc;
            pcVar16 = "partial utf8";
            pcVar12 = (char *)(lVar10 + 0x1a);
            do {
              lVar13 = lVar13 + -1;
              if ((char *)(lVar10 + 0x95U) <= pcVar12) break;
              cVar4 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              *pcVar12 = cVar4;
              pcVar12 = pcVar12 + 1;
            } while (lVar13 != 0);
            *(char *)(*(longlong *)(param_1 + 0x60) + 0xbd) =
                 (char)pcVar12 - ((char)lVar10 + '\x18');
            uVar8 = uVar20;
          }
          else {
            lVar13 = *(longlong *)(param_1 + 0x60);
            pcVar16 = "bad utf8";
            lVar10 = 8;
            *(undefined2 *)(lVar13 + 0x18) = 0xef03;
            pcVar12 = (char *)(lVar13 + 0x1a);
            do {
              lVar10 = lVar10 + -1;
              if ((char *)(lVar13 + 0x95U) <= pcVar12) break;
              cVar4 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              *pcVar12 = cVar4;
              pcVar12 = pcVar12 + 1;
            } while (lVar10 != 0);
            *(char *)(*(longlong *)(param_1 + 0x60) + 0xbd) =
                 (char)pcVar12 - ((char)lVar13 + '\x18');
            uVar8 = uVar20;
          }
LAB_144bd5939:
          FUN_144bd5aa0(4,"utf8 error\n");
          FUN_144bd5ce0(4,uVar8,(longlong)(int)uVar7);
          goto LAB_144bd595a;
        }
LAB_144bd595f:
        if ((*(int *)(param_1 + 0x74) == 0) && ((-1 < (int)uVar7 || (iVar6 == 7)))) {
          *(undefined1 *)(lVar13 + uVar20) = 0;
          lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 8);
          uVar19 = uVar8;
          if ((lVar10 != 0) && (uVar19 = uVar18, (param_2 & 2) == 0)) {
            uVar7 = FUN_144bd7680(lVar10,param_1,iVar6,*(undefined8 *)(param_1 + 0x130),uVar20,
                                  lVar13);
            uVar19 = (ulonglong)uVar7;
          }
          puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
          *puVar3 = *puVar3 & 0xffffbfff;
        }
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0xb0) = 0;
      uVar8 = uVar19;
    }
    else {
      if (bVar14 == 8) {
        if ((*(uint *)((longlong)plVar15 + 0xc4) >> 0xf & 1) != 0) goto LAB_144bd5658;
        *(uint *)((longlong)plVar15 + 0xc4) = *(uint *)((longlong)plVar15 + 0xc4) | 0x8000;
        plVar15 = *(longlong **)(param_1 + 0x60);
        lVar13 = *plVar15;
        if ((((*(uint *)(*(longlong *)(param_1 + 0x78) + 0x4b0) & 0x100) == 0) ||
            (*(uint *)(plVar15 + 0x16) < 3)) ||
           (iVar6 = FUN_144bd7ca0((longlong)plVar15 + 0xbe,lVar13 + 0x12,
                                  *(uint *)(plVar15 + 0x16) - 2), iVar6 == 0)) {
          uVar7 = *(uint *)(param_1 + 0x70) & 0xffff;
          if ((uVar7 != 0x11b) && (uVar7 != 0x11a)) {
            iVar6 = FUN_144bd68f0(param_1);
            if (iVar6 != 0) {
              *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
              return 0xffffffff;
            }
            if (1 < *(uint *)(*(longlong *)(param_1 + 0x60) + 0xb0)) {
              uVar9 = CONCAT11(*(undefined1 *)(lVar13 + 0x10),*(undefined1 *)(lVar13 + 0x11));
              if ((((0xb < (ushort)(uVar9 - 1000)) ||
                   ((0xf8fU >> ((ushort)(uVar9 - 1000) & 0x1f) & 1) == 0)) && (uVar9 < 0x3f8)) ||
                 ((ushort)(uVar9 - 0x3f8) < 0x7c0)) {
                *(undefined2 *)(lVar13 + 0x10) = 0xea03;
              }
            }
            iVar6 = FUN_144bd7680(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 8),param_1,0x26,
                                  *(undefined8 *)(param_1 + 0x130),
                                  **(longlong **)(param_1 + 0x60) + 0x10,
                                  (int)(*(longlong **)(param_1 + 0x60))[0x16]);
            if (iVar6 == 0) {
              *(undefined2 *)(param_1 + 0x70) = 0x11a;
              puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
              *puVar3 = *puVar3 | 0x40;
              goto LAB_144bd587a;
            }
          }
          goto LAB_144bd595a;
        }
        goto LAB_144bd5939;
      }
      if (bVar14 == 9) {
        if ((*(byte *)((longlong)plVar15 + 0xc4) & 0x80) != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0xb0) = 0;
          return 0;
        }
LAB_144bd587a:
        plVar15 = *(longlong **)(param_1 + 0x60);
        if (*(uint *)(plVar15 + 0x16) < 0x7e) {
          memcpy(plVar15 + 3,(void *)(*plVar15 + 0x10),(ulonglong)*(uint *)(plVar15 + 0x16));
          *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xb8) =
               *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xb0);
          puVar3 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
          *puVar3 = *puVar3 | 0x80;
          FUN_144bd0240(param_1);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0xb0) = 0;
        return 0;
      }
      if (bVar14 == 10) {
        FUN_144bd5eb0(*plVar15 + 0x10,(int)plVar15[0x16]);
        if (*(char *)(param_1 + 0x1c6) == '\x11') {
          FUN_144bd6160(param_1,0,0);
        }
        iVar6 = 7;
        goto LAB_144bd5658;
      }
LAB_144bd595a:
      uVar8 = 0xffffffff;
    }
  }
  return uVar8;
}



// FUNCTION 144bd5a80 FUN_144bd5a80 body=3 status=ok
// SIG undefined FUN_144bd5a80(void)

void FUN_144bd5a80(void)

{
  return;
}



// FUNCTION 144bd5a90 FUN_144bd5a90 body=3 status=ok
// SIG undefined FUN_144bd5a90(void)

void FUN_144bd5a90(void)

{
  return;
}



// FUNCTION 144bd5aa0 FUN_144bd5aa0 body=34 status=ok
// SIG undefined FUN_144bd5aa0(void)

void FUN_144bd5aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_144bd5ad0(param_1,param_2,&local_res18);
  return;
}



// FUNCTION 144bd5ad0 FUN_144bd5ad0 body=168 status=ok
// SIG undefined FUN_144bd5ad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144bd5ad0(uint param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong *puVar2;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((_DAT_14c6da1c0 & param_1) == 0) goto LAB_144bd5b63;
  puVar2 = (ulonglong *)FUN_144737586();
  local_138 = 0;
  local_130 = param_3;
  iVar1 = __stdio_common_vsprintf(*puVar2 | 2,local_128,0xff,param_2);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if (iVar1 < 0x100) {
    if (0 < iVar1) goto LAB_144bd5b45;
  }
  else {
    iVar1 = 0xff;
LAB_144bd5b45:
    if (0xff < (ulonglong)(longlong)iVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_144e2bb84();
    }
    local_128[iVar1] = 0;
  }
  (*(code *)PTR_FUN_14c6da1c8)(param_1,local_128);
LAB_144bd5b63:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_158);
}



// FUNCTION 144bd5b90 FUN_144bd5b90 body=321 status=ok
// SIG undefined FUN_144bd5b90(void)

undefined8 FUN_144bd5b90(int param_1,undefined1 *param_2,int param_3)

{
  undefined1 auVar1 [16];
  tm *ptVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  __time64_t local_res10;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  local_res10 = _time64((__time64_t *)0x0);
  ptVar2 = _localtime64(&local_res10);
  *param_2 = 0;
  iVar6 = 0;
  do {
    if (param_1 == 1 << ((byte)iVar6 & 0x1f)) {
      uVar3 = FUN_144f3cb80();
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar3;
      lVar5 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
      uVar3 = (uVar3 - lVar5 >> 1) + lVar5 >> 6;
      if (ptVar2 != (tm *)0x0) {
        uVar4 = FUN_144bd6620(param_2,(longlong)param_3,"[%04d/%02d/%02d %02d:%02d:%02d:%04d] %s: ",
                              ptVar2->tm_year + 0x76c,ptVar2->tm_mon + 1,
                              CONCAT44(uVar7,ptVar2->tm_mday),ptVar2->tm_hour,ptVar2->tm_min,
                              ptVar2->tm_sec,(int)uVar3 + (int)(uVar3 / 10000) * -10000,
                              (&PTR_DAT_149980f70)[iVar6]);
        return uVar4;
      }
      uVar4 = FUN_144bd6620(param_2,(longlong)param_3,"[%llu:%04d] %s: ",uVar3 / 10000,
                            (int)uVar3 + (int)(uVar3 / 10000) * -10000,(&PTR_DAT_149980f70)[iVar6]);
      return uVar4;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xb);
  return 0;
}



// FUNCTION 144bd5ce0 FUN_144bd5ce0 body=439 status=ok
// SIG undefined FUN_144bd5ce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144bd5ce0(ulonglong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [80];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((_DAT_14c6da1c0 & (uint)param_1) != 0) && (param_3 != 0)) && (param_2 != 0)) {
    FUN_144bd5aa0(param_1,&DAT_149dfc0af);
    uVar3 = 0;
    if (param_3 != 0) {
      do {
        iVar1 = FUN_1424c2e40(local_88,"%04X: ",uVar3);
        puVar4 = local_88 + iVar1;
        uVar7 = 0;
        uVar9 = uVar3;
        do {
          if (param_3 <= uVar9) {
            if (uVar7 < 0x10) {
              uVar8 = (ulonglong)(0x10 - uVar7);
              do {
                iVar1 = FUN_1424c2e40(puVar4,&DAT_149981310);
                puVar4 = puVar4 + iVar1;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            break;
          }
          iVar1 = FUN_1424c2e40(puVar4,"%02X ",*(undefined1 *)(uVar9 + param_2));
          uVar9 = (ulonglong)((int)uVar9 + 1);
          puVar4 = puVar4 + iVar1;
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0x10);
        iVar1 = FUN_1424c2e40(puVar4,&DAT_149981310);
        uVar7 = 0;
        pcVar5 = puVar4 + iVar1;
        do {
          if (param_3 <= uVar3) {
            pcVar6 = pcVar5;
            if (uVar7 < 0x10) {
              uVar3 = (ulonglong)(0x10 - uVar7);
              pcVar6 = pcVar5 + uVar3;
              for (; uVar3 != 0; uVar3 = uVar3 - 1) {
                *pcVar5 = ' ';
                pcVar5 = pcVar5 + 1;
              }
            }
            break;
          }
          cVar2 = '.';
          if ((byte)(*(char *)(uVar3 + param_2) - 0x20U) < 0x5f) {
            cVar2 = *(char *)(uVar3 + param_2);
          }
          uVar7 = uVar7 + 1;
          *pcVar5 = cVar2;
          uVar3 = (ulonglong)((int)uVar3 + 1);
          pcVar6 = pcVar5 + 1;
          pcVar5 = pcVar6;
        } while (uVar7 < 0x10);
        pcVar6[0] = '\n';
        pcVar6[1] = '\0';
        FUN_144bd5aa0(param_1 & 0xffffffff,&DAT_149dfbe46,local_88);
        uVar3 = uVar9;
      } while (uVar9 < param_3);
    }
    FUN_144bd5aa0(param_1 & 0xffffffff,&DAT_149dfc0af);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144bd5eb0 FUN_144bd5eb0 body=3 status=ok
// SIG undefined FUN_144bd5eb0(void)

void FUN_144bd5eb0(void)

{
  return;
}



// FUNCTION 144bd5ec0 FUN_144bd5ec0 body=28 status=ok
// SIG undefined FUN_144bd5ec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144bd5ec0(undefined4 param_1,undefined *param_2)

{
  _DAT_14c6da1c0 = param_1;
  if (param_2 != (undefined *)0x0) {
    PTR_FUN_14c6da1c8 = param_2;
  }
  return;
}



// FUNCTION 144bd5ee0 FUN_144bd5ee0 body=146 status=ok
// SIG undefined FUN_144bd5ee0(void)

longlong * FUN_144bd5ee0(longlong param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x230)) {
    plVar5 = *(longlong **)(param_1 + 0x170);
    uVar6 = uVar4;
    do {
      pcVar3 = param_2;
      do {
        cVar1 = *pcVar3;
        cVar2 = pcVar3[*plVar5 - (longlong)param_2];
        if (cVar1 != cVar2) break;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        return *(longlong **)(param_1 + 0x170) + (longlong)(int)uVar6 * 7;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
      uVar4 = uVar4 + 1;
      plVar5 = plVar5 + 7;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x230));
  }
  return (longlong *)0x0;
}



// FUNCTION 144bd5f80 FUN_144bd5f80 body=88 status=ok
// SIG undefined FUN_144bd5f80(void)

void FUN_144bd5f80(longlong param_1)

{
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8 [92];
  undefined4 local_17c;
  undefined4 local_178;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_178 = *(undefined4 *)(param_1 + 0x49c);
  local_17c = *(undefined4 *)(param_1 + 0x4a0);
  if ((*(uint *)(param_1 + 0x4b0) & 0x2000) != 0) {
    FUN_144f3cb70(local_1d8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1f8);
}



// FUNCTION 144bd5fe0 FUN_144bd5fe0 body=361 status=ok
// SIG undefined FUN_144bd5fe0(void)

void FUN_144bd5fe0(undefined1 *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined1 auStack_a8 [32];
  char local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == (char *)0x0) goto LAB_144bd6139;
  iVar1 = strncmp(param_2,"http://",7);
  if (iVar1 == 0) {
    param_2 = param_2 + 7;
  }
  pcVar2 = strrchr(param_2,0x40);
  if (pcVar2 == (char *)0x0) {
    *param_1 = 0;
LAB_144bd60bc:
    strncpy(param_1 + 0x80,param_2,0x7f);
    param_1[0xff] = 0;
    pcVar2 = strchr(param_1 + 0x80,0x3a);
    if (pcVar2 == (char *)0x0) {
      if (*(int *)(param_1 + 0x110) == 0) {
        FUN_144bd5aa0(1,"http_proxy needs to be ads:port\n");
      }
    }
    else {
      *pcVar2 = '\0';
      iVar1 = atoi(pcVar2 + 1);
      *(int *)(param_1 + 0x110) = iVar1;
    }
  }
  else {
    uVar3 = (int)pcVar2 - (int)param_2;
    if (uVar3 < 0x60) {
      strncpy(local_88,param_2,(longlong)pcVar2 - (longlong)param_2);
      local_88[(longlong)pcVar2 - (longlong)param_2] = '\0';
      iVar1 = FUN_144f455c0(local_88,uVar3,param_1,0x80);
      if (-1 < iVar1) {
        param_2 = pcVar2 + 1;
        goto LAB_144bd60bc;
      }
    }
    FUN_144bd5aa0(1,"proxy auth too long\n");
  }
LAB_144bd6139:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144bd6160 FUN_144bd6160 body=104 status=ok
// SIG undefined FUN_144bd6160(void)

void FUN_144bd6160(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == -2) {
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
        **(longlong **)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xb8);
      }
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 8) = *(undefined8 *)(param_1 + 0xc0);
      }
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    FUN_144bd6da0(param_1,0,"to sync kill");
    return;
  }
  iVar1 = 0;
  if (param_3 != -1) {
    iVar1 = param_3;
  }
  FUN_144bd7fb0(param_1,param_2,iVar1);
  return;
}



// FUNCTION 144bd61d0 FUN_144bd61d0 body=178 status=ok
// SIG undefined FUN_144bd61d0(void)

undefined8 FUN_144bd61d0(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (((*(byte *)(param_1 + 0x1b8) & 2) == 0) &&
     ((*(uint *)(param_1 + 0x70) & 0xf000000) != 0x1000000)) {
    uVar3 = param_2;
    if (((param_2 >> 0xe & 1) == 0) && (uVar3 = 0x4001, (param_2 & 1) != 0)) {
      uVar3 = 0x6001;
    }
    if ((uVar3 >> 0xd & 1) == 0) {
      *(byte *)(param_1 + 0x1ca) = *(byte *)(param_1 + 0x1ca) | (byte)uVar3;
    }
    else {
      *(byte *)(param_1 + 0x1ca) = *(byte *)(param_1 + 0x1ca) & ~(byte)uVar3;
    }
    uVar3 = *(uint *)(param_1 + 0x1b8);
    if (3 - (*(char *)(param_1 + 0x1ca) != '\0') != (uVar3 >> 8 & 3)) {
      uVar1 = 0x200;
      if (*(char *)(param_1 + 0x1ca) == '\0') {
        uVar1 = 0x300;
      }
      *(uint *)(param_1 + 0x1b8) = uVar1 | uVar3 & 0xfffffeff;
      if (((param_2 >> 0xc & 1) != 0) || ((uVar3 >> 0x1b & 1) == 0)) {
        uVar2 = FUN_144bd7850(param_1);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 144bd6290 FUN_144bd6290 body=251 status=ok
// SIG undefined FUN_144bd6290(void)

void FUN_144bd6290(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  int local_68 [2];
  undefined1 local_60 [4];
  undefined1 local_5c [12];
  undefined1 local_50 [8];
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = 2;
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1;
  }
  if ((*(uint *)(lVar7 + 0x1b8) & 0x800000) != 0) {
    lVar7 = *(longlong *)(lVar7 + 0x88);
  }
  if (((*(byte *)(*(longlong *)(*(longlong *)(lVar7 + 0x80) + 0x148) + 0x4b0) & 0x20) == 0) &&
     ((*(byte *)(*(longlong *)(lVar7 + 0x80) + 0x22c) & 0x20) == 0)) {
    iVar2 = 0x1c;
    puVar4 = local_50;
    puVar6 = local_48;
    uVar5 = 0x17;
  }
  else {
    iVar2 = 0x10;
    puVar4 = local_60;
    puVar6 = local_5c;
  }
  local_68[0] = iVar2;
  iVar1 = Ordinal_5(*(undefined8 *)(lVar7 + 0x178),puVar4,local_68);
  if ((iVar1 < 0) || (iVar2 < local_68[0])) {
    iVar2 = Ordinal_111();
    pcVar3 = strerror(iVar2);
    FUN_144bd5aa0(2,"getpeername: %s\n",pcVar3);
  }
  else {
    FUN_144f3cbc0(uVar5,puVar6,param_2,param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
}



// FUNCTION 144bd63a0 FUN_144bd63a0 body=30 status=ok
// SIG undefined FUN_144bd63a0(void)

void FUN_144bd63a0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 == 0) {
    puVar1 = *(undefined8 **)(param_2 + 8);
    param_1[1] = (longlong)puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_1;
    }
    *param_1 = param_2;
    *(longlong **)(param_2 + 8) = param_1;
  }
  return;
}



// FUNCTION 144bd63c0 FUN_144bd63c0 body=46 status=ok
// SIG undefined FUN_144bd63c0(void)

void FUN_144bd63c0(longlong *param_1)

{
  if (*param_1 != 0) {
    if ((longlong *)param_1[1] != (longlong *)0x0) {
      *(longlong *)param_1[1] = *param_1;
    }
    if (*param_1 != 0) {
      *(longlong *)(*param_1 + 8) = param_1[1];
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 144bd63f0 FUN_144bd63f0 body=227 status=ok
// SIG undefined FUN_144bd63f0(void)

ulonglong FUN_144bd63f0(longlong *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  
  lVar1 = *param_1;
  uVar4 = (ulonglong)(lVar1 == 0);
  iVar5 = 0x400;
  while( true ) {
    if (lVar1 == 0) {
      puVar3 = (undefined8 *)thunk_FUN_144f3cee0(0,param_3 + 0x20,"lws_buflist_append_segment");
      if (puVar3 == (undefined8 *)0x0) {
        FUN_144bd5aa0(1,"%s: OOM\n","lws_buflist_append_segment");
        uVar4 = 0xffffffff;
      }
      else {
        puVar3[1] = param_3;
        puVar3[2] = 0;
        *puVar3 = 0;
        memcpy(puVar3 + 3,param_2,param_3);
        *param_1 = (longlong)puVar3;
      }
      return uVar4;
    }
    iVar5 = iVar5 + -1;
    if ((iVar5 == 0) || (plVar2 = (longlong *)*param_1, param_1 == plVar2)) break;
    lVar1 = *plVar2;
    param_1 = plVar2;
  }
  FUN_144bd5aa0(1,"%s: corrupt list points to self\n","lws_buflist_append_segment");
  return 0xffffffff;
}



// FUNCTION 144bd64e0 FUN_144bd64e0 body=136 status=ok
// SIG undefined FUN_144bd64e0(void)

longlong FUN_144bd64e0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    if (param_2 != (longlong *)0x0) {
      *param_2 = 0;
    }
    return 0;
  }
  if ((plVar1[1] == 0) && (*plVar1 != 0)) {
    FUN_144bd8130();
  }
  lVar2 = *param_1;
  if (lVar2 == 0) {
    if (param_2 != (longlong *)0x0) {
      *param_2 = 0;
    }
    return 0;
  }
  if (param_2 != (longlong *)0x0) {
    *param_2 = lVar2 + 0x18 + *(longlong *)(lVar2 + 0x10);
  }
  return *(longlong *)(*param_1 + 8) - *(longlong *)(*param_1 + 0x10);
}



// FUNCTION 144bd6570 FUN_144bd6570 body=84 status=ok
// SIG undefined FUN_144bd6570(void)

int FUN_144bd6570(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *(longlong *)(*param_1 + 0x10) = *(longlong *)(*param_1 + 0x10) + param_2;
  plVar1 = (longlong *)*param_1;
  if (plVar1[2] == plVar1[1]) {
    *param_1 = *plVar1;
    *plVar1 = 0;
    thunk_FUN_144f3cee0(plVar1,0,"lws_free");
  }
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return 0;
  }
  return *(int *)(lVar2 + 8) - *(int *)(lVar2 + 0x10);
}



// FUNCTION 144bd65d0 FUN_144bd65d0 body=79 status=ok
// SIG undefined FUN_144bd65d0(void)

void FUN_144bd65d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    *puVar2 = 0;
    thunk_FUN_144f3cee0(puVar2,0,"lws_free");
    puVar2 = puVar1;
  }
  *param_1 = 0;
  return;
}



// FUNCTION 144bd6620 FUN_144bd6620 body=118 status=ok
// SIG undefined FUN_144bd6620(void)

ulonglong FUN_144bd6620(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 local_res20;
  
  if (param_2 == 0) {
    return 0;
  }
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_144737586();
  uVar1 = __stdio_common_vsprintf(*puVar2 | 2,param_1,param_2,param_3,0,&local_res20);
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  uVar3 = (ulonglong)uVar1;
  if ((int)param_2 <= (int)uVar1) {
    uVar3 = param_2 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 144bd66a0 FUN_144bd66a0 body=44 status=ok
// SIG undefined FUN_144bd66a0(void)

char * FUN_144bd66a0(char *param_1,char *param_2,longlong param_3)

{
  strncpy(param_1,param_2,param_3 - 1);
  param_1[param_3 + -1] = '\0';
  return param_1;
}



// FUNCTION 144bd66d0 FUN_144bd66d0 body=8 status=ok
// SIG undefined FUN_144bd66d0(void)

undefined8 FUN_144bd66d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



// FUNCTION 144bd66e0 FUN_144bd66e0 body=419 status=ok
// SIG undefined FUN_144bd66e0(void)

undefined8
FUN_144bd66e0(char *param_1,undefined8 *param_2,longlong *param_3,int *param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  
  *param_2 = param_1;
  pcVar6 = param_1;
  if (*param_1 == '\0') {
LAB_144bd6727:
    *param_2 = pcVar6;
  }
  else {
    do {
      if (((*pcVar6 == ':') && (pcVar6[1] == '/')) && (pcVar6[2] == '/')) break;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    if (*pcVar6 == '\0') goto LAB_144bd6727;
    *pcVar6 = '\0';
    param_1 = pcVar6 + 3;
  }
  *param_3 = (longlong)param_1;
  pcVar6 = (char *)*param_2;
  lVar3 = 0;
  lVar4 = lVar3;
  do {
    lVar5 = lVar4 + 1;
    if (pcVar6[lVar4] != (&DAT_149981314)[lVar4]) {
      lVar4 = lVar3;
      if (((*pcVar6 != 'w') || (pcVar6[1] != 's')) || (pcVar6[2] != '\0')) goto LAB_144bd67a0;
      *param_4 = 0x50;
      goto LAB_144bd67da;
    }
    lVar4 = lVar5;
  } while (lVar5 != 5);
  *param_4 = 0x50;
  goto LAB_144bd67da;
  while (lVar4 = lVar5, lVar5 != 6) {
LAB_144bd67a0:
    lVar5 = lVar4 + 1;
    if (pcVar6[lVar4] != (&DAT_14998131c)[lVar4]) goto LAB_144bd67c0;
  }
  goto LAB_144bd67d4;
  while (lVar3 = lVar4, lVar4 != 4) {
LAB_144bd67c0:
    lVar4 = lVar3 + 1;
    if (pcVar6[lVar3] != (&DAT_14b43c0c0)[lVar3]) goto LAB_144bd67da;
  }
LAB_144bd67d4:
  *param_4 = 0x1bb;
LAB_144bd67da:
  cVar1 = *param_1;
  if (cVar1 == '[') {
    *param_3 = *param_3 + 1;
    if (*param_1 != '\0') {
      do {
        if (*param_1 == ']') break;
        param_1 = param_1 + 1;
      } while (*param_1 != '\0');
      if (*param_1 != '\0') {
        *param_1 = '\0';
        param_1 = param_1 + 1;
      }
    }
  }
  else {
    while (((cVar1 != '\0' && (cVar1 != ':')) && (cVar1 != '/'))) {
      pcVar6 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar1 = *pcVar6;
    }
  }
  if (*param_1 == ':') {
    *param_1 = '\0';
    param_1 = param_1 + 1;
    iVar2 = atoi(param_1);
    *param_4 = iVar2;
    cVar1 = *param_1;
    while ((cVar1 != '\0' && (cVar1 != '/'))) {
      pcVar6 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar1 = *pcVar6;
    }
  }
  *param_5 = PTR_u__Disabled_14c6da1d0;
  if (*param_1 != '\0') {
    *param_1 = '\0';
    pcVar6 = (char *)*param_5;
    if (param_1[1] != '\0') {
      pcVar6 = param_1 + 1;
    }
    *param_5 = pcVar6;
  }
  return 0;
}



// FUNCTION 144bd6890 FUN_144bd6890 body=25 status=ok
// SIG undefined FUN_144bd6890(void)

undefined4 FUN_144bd6890(void)

{
  undefined4 local_res8 [8];
  
  FUN_144f458c0(local_res8,0);
  return local_res8[0];
}



// FUNCTION 144bd68b0 FUN_144bd68b0 body=28 status=ok
// SIG undefined FUN_144bd68b0(void)

ulonglong FUN_144bd68b0(longlong param_1,longlong param_2,longlong param_3)

{
  if (param_2 < *(longlong *)(param_1 + 0x18)) {
    param_2 = param_2 + *(longlong *)(param_1 + 0x20);
  }
  if (param_3 < *(longlong *)(param_1 + 0x18)) {
    param_3 = param_3 + *(longlong *)(param_1 + 0x20);
  }
  return param_2 - param_3 & 0xffffffff;
}



// FUNCTION 144bd68d0 FUN_144bd68d0 body=5 status=ok
// SIG undefined FUN_144bd68d0(void)

undefined8 FUN_144bd68d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// FUNCTION 144bd68e0 FUN_144bd68e0 body=4 status=ok
// SIG undefined FUN_144bd68e0(void)

undefined8 FUN_144bd68e0(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 144bd68f0 FUN_144bd68f0 body=12 status=ok
// SIG undefined FUN_144bd68f0(void)

bool FUN_144bd68f0(longlong param_1)

{
  return *(int *)(param_1 + 0x1ac) != 0;
}



// FUNCTION 144bd6900 FUN_144bd6900 body=10 status=ok
// SIG undefined FUN_144bd6900(void)

uint FUN_144bd6900(longlong param_1)

{
  return *(uint *)(param_1 + 0x170) & 1;
}



// FUNCTION 144bd6910 FUN_144bd6910 body=5 status=ok
// SIG undefined FUN_144bd6910(void)

undefined8 FUN_144bd6910(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 144bd6920 FUN_144bd6920 body=4 status=ok
// SIG undefined FUN_144bd6920(void)

undefined4 FUN_144bd6920(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// FUNCTION 144bd6930 FUN_144bd6930 body=113 status=ok
// SIG undefined FUN_144bd6930(void)

void FUN_144bd6930(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x178) != -1) {
    iVar1 = FUN_144f412b0();
    if (iVar1 == 0) {
      Ordinal_3(*(undefined8 *)(param_1 + 0x178));
      *(undefined8 *)(param_1 + 0x178) = 0xffffffffffffffff;
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170) + 8))
              (param_1,0x1e,*(undefined8 *)(param_1 + 0x130),0,0);
  }
  FUN_144bd7460(param_1);
  return;
}



// FUNCTION 144bd69b0 FUN_144bd69b0 body=36 status=ok
// SIG undefined FUN_144bd69b0(void)

ulonglong FUN_144bd69b0(int param_1)

{
  if ((byte)((char)param_1 - 0x30U) < 10) {
    return (ulonglong)(param_1 - 0x30);
  }
  if ((byte)((char)param_1 + 0x9fU) < 6) {
    return (ulonglong)(param_1 - 0x57);
  }
  if ((byte)(param_1 + -0x41) < 6) {
    return (ulonglong)(param_1 - 0x37);
  }
  return CONCAT71((uint7)(uint3)((uint)(param_1 + -0x41) >> 8),0xff);
}



// FUNCTION 144bd69e0 FUN_144bd69e0 body=496 status=ok
// SIG undefined FUN_144bd69e0(void)

void FUN_144bd69e0(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_128 [32];
  int local_108;
  undefined4 local_100;
  undefined4 local_f8 [2];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [2];
  undefined2 local_b6;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f8[0] = 0x80;
  lVar1 = *(longlong *)(param_1 + 0x148);
  if (((*(byte *)(lVar1 + 0x4b0) & 0x20) == 0) && ((*(byte *)(param_1 + 0x22c) & 0x20) == 0)) {
    puVar7 = &local_e0;
    local_e0 = 0;
    uVar6 = 0x1c;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    if (param_4 != 0) {
      iVar3 = FUN_144f3bbe0((byte)~*(byte *)(lVar1 + 0x4b0) >> 5 & 1,param_4,&local_e0,0x1c);
      if ((iVar3 == -2) || (iVar3 == -1)) goto LAB_144bd6bc0;
      local_c8 = FUN_144bd6bf0(param_4);
    }
    local_e0 = CONCAT62(local_e0._2_6_,0x17);
    uVar2 = Ordinal_9(param_3 & 0xffff);
    local_e0._0_4_ = CONCAT22(uVar2,(undefined2)local_e0);
  }
  else {
    uVar4 = 0;
    puVar7 = &local_f0;
    uVar6 = 0x10;
    local_f0 = 2;
    local_e8 = 0;
    if (param_4 != 0) {
      if (((*(byte *)(lVar1 + 0x4b0) & 0x20) == 0) && ((*(byte *)(param_1 + 0x22c) & 0x20) == 0)) {
        uVar4 = 1;
      }
      iVar3 = FUN_144f3bbe0(uVar4,param_4,&local_f0,0x10);
      if ((iVar3 == -2) || (iVar3 == -1)) goto LAB_144bd6bc0;
    }
    uVar2 = Ordinal_9(param_3 & 0xffff);
    local_f0._0_4_ = CONCAT22(uVar2,(undefined2)local_f0);
  }
  if (param_2 != -1) {
    iVar3 = Ordinal_2(param_2,puVar7,uVar6);
    if (iVar3 < 0) {
      local_100 = Ordinal_111();
      local_108 = iVar3;
      FUN_144bd5aa0(1,"ERROR on binding fd %d to port %d (%d %d)\n",param_2,param_3);
    }
    else {
      iVar3 = Ordinal_6(param_2,local_b8,local_f8);
      if (iVar3 == -1) {
        iVar3 = Ordinal_111();
        pcVar5 = strerror(iVar3);
        FUN_144bd5aa0(2,"getsockname: %s\n",pcVar5);
      }
      else {
        Ordinal_15(local_b6);
      }
    }
  }
LAB_144bd6bc0:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_128);
}



// FUNCTION 144bd6bf0 FUN_144bd6bf0 body=383 status=ok
// SIG undefined FUN_144bd6bf0(void)

void FUN_144bd6bf0(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  short *psVar5;
  int iVar6;
  undefined1 *_Memory;
  char *pcVar7;
  undefined1 *puVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 auStack_478 [32];
  uint *local_458;
  uint local_448 [4];
  char local_438 [1040];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_478;
  puVar11 = (undefined1 *)0x0;
  local_448[0] = 0;
  _Memory = puVar11;
  puVar8 = puVar11;
  do {
    local_458 = local_448;
    iVar6 = GetAdaptersAddresses(0x17,0x10,0,_Memory);
    if (iVar6 == 0) {
      puVar8 = _Memory;
      if (_Memory == (undefined1 *)0x0) goto LAB_144bd6d5c;
      goto LAB_144bd6cd7;
    }
    if (iVar6 == 0xe8) break;
    if (iVar6 != 0x6f) {
      if (_Memory != (undefined1 *)0x0) {
        free(_Memory);
        _Memory = puVar11;
      }
      FUN_144bd5aa0(1,"Failed to get IPv6 address table (%d)",iVar6);
      break;
    }
    if (_Memory != (undefined1 *)0x0) {
      free(_Memory);
    }
    _Memory = malloc((ulonglong)local_448[0]);
    uVar9 = (int)puVar8 + 1;
    puVar8 = (undefined1 *)(ulonglong)uVar9;
  } while (uVar9 < 5);
  goto LAB_144bd6d4e;
LAB_144bd6cd7:
  do {
    if ((int)puVar11 != 0) break;
    for (lVar4 = *(longlong *)(puVar8 + 0x18); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 8)) {
      psVar5 = *(short **)(lVar4 + 0x10);
      if (*psVar5 == 0x17) {
        FUN_144f3cbc0(*psVar5,psVar5 + 4,local_438,0x401);
        pcVar7 = local_438;
        lVar10 = param_1 - (longlong)pcVar7;
        do {
          cVar2 = *pcVar7;
          cVar3 = pcVar7[lVar10];
          if (cVar2 != cVar3) break;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
        if (cVar2 == cVar3) {
          puVar11 = &DAT_00000001;
          break;
        }
      }
    }
    puVar1 = (undefined8 *)(puVar8 + 8);
    puVar8 = (undefined1 *)*puVar1;
  } while ((undefined1 *)*puVar1 != (undefined1 *)0x0);
LAB_144bd6d4e:
  if (_Memory != (undefined1 *)0x0) {
    free(_Memory);
  }
LAB_144bd6d5c:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_478);
}



// FUNCTION 144bd6d90 thunk_FUN_144bd6da0 body=5 status=ok
// SIG undefined thunk_FUN_144bd6da0(void)

void thunk_FUN_144bd6da0(longlong param_1,int param_2)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (param_1 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    freeaddrinfo();
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  cVar1 = *(char *)(param_1 + 0x1c7);
  lVar9 = *(longlong *)(param_1 + 0x78);
  thunk_FUN_144f3cee0(*(undefined8 *)(param_1 + 0xf8),0,&DAT_1499809d8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    if (*(longlong **)(param_1 + 0x108) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0x108) = *(longlong *)(param_1 + 0x100);
    }
    if (*(longlong *)(param_1 + 0x100) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x100) + 8) = *(undefined8 *)(param_1 + 0x108);
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x118);
    while (lVar10 != 0) {
      lVar4 = *(longlong *)(lVar10 + 8);
      FUN_144bd6da0(lVar10 + -0x120,0xffffffff,"trans q leader closing");
      lVar10 = lVar4;
    }
    if (*(longlong *)(param_1 + 0x120) != 0) {
      if (*(longlong **)(param_1 + 0x128) != (longlong *)0x0) {
        **(longlong **)(param_1 + 0x128) = *(longlong *)(param_1 + 0x120);
      }
      if (*(longlong *)(param_1 + 0x120) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 8) = *(undefined8 *)(param_1 + 0x128);
      }
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    do {
      lVar4 = *(longlong *)(lVar10 + 0x98);
      *(uint *)(lVar10 + 0x1b8) = *(uint *)(lVar10 + 0x1b8) | 0x80;
      *(undefined8 *)(lVar10 + 0x88) = 0;
      FUN_144bd6da0(lVar10,param_2,"general child recurse");
      lVar10 = lVar4;
    } while (lVar4 != 0);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(undefined ***)(param_1 + 0x68) == &PTR_s_raw_file_14c70f6d0) {
    FUN_144bd8090();
    FUN_144bd02e0(param_1);
    (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
              (param_1,*(undefined2 *)(*(longlong *)(param_1 + 0x68) + 0xa4),
               *(undefined8 *)(param_1 + 0x130),0,0);
    goto LAB_144bd7411;
  }
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
  FUN_144bd3de0(param_1);
  if (*(undefined ***)(param_1 + 0x68) == &PTR_s_raw_skt_14c70f620) {
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
  }
  else {
    if (((*(undefined ***)(param_1 + 0x68) == &PTR_DAT_14c70f4c0) &&
        ((*(uint *)(param_1 + 0x70) & 0x20000000) != 0)) && (*(longlong *)(param_1 + 0x28) != 0)) {
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 8))();
    }
    uVar7 = *(uint *)(param_1 + 0x70) & 0xffff;
    if (uVar7 == 0x1e) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x1b8);
    if (((-1 < (char)uVar3) && (param_2 != 9999)) && (uVar7 != 0x1d)) {
      uVar6 = *(uint *)(param_1 + 0x74) & 0xffff;
      if (uVar6 == 0x1e) {
        return;
      }
      if (uVar6 < 0x119) {
LAB_144bd7048:
        if (*(int *)(param_1 + 0x1ac) != 0) {
          *(undefined2 *)(param_1 + 0x70) = 0x11c;
          FUN_144bd7fb0(param_1,0xc,5);
          return;
        }
        if ((uVar7 != 0x201) && (uVar7 != 0x11)) {
          if (((uVar3 >> 0x12 & 1) == 0) &&
             ((((*(undefined ***)(param_1 + 0x68) == &PTR_DAT_14c70f4c0 &&
                ((*(uint *)(param_1 + 0x70) >> 0x1d & 1) != 0)) &&
               (*(longlong *)(param_1 + 0x130) != 0)) &&
              ((*(longlong *)(param_1 + 0xa0) != 0 && (0x7fffffff < uVar3)))))) {
            (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                      (param_1,0x32,*(longlong *)(param_1 + 0x130),0,0);
            *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0x7fffffff;
          }
          pcVar5 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x80);
          if ((pcVar5 != (code *)0x0) && (iVar8 = (*pcVar5)(param_1,param_2), iVar8 != 0)) {
            return;
          }
        }
      }
      else if (0x11b < uVar6) {
        if (uVar6 != 0x11c) goto LAB_144bd7048;
        if (*(int *)(param_1 + 0x1ac) != 0) {
          FUN_144bd0240(param_1);
          return;
        }
      }
    }
  }
  pcVar5 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x90);
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(param_1,param_2);
  }
  FUN_144bd8090(param_1);
  if ((((*(uint *)(param_1 + 0x1b8) >> 0x12 & 1) == 0) && (*(longlong *)(param_1 + 0x130) != 0)) &&
     (0x7fffffff < *(uint *)(param_1 + 0x1b8))) {
    (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
              (param_1,0x32,*(longlong *)(param_1 + 0x130),0,0);
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0x7fffffff;
  }
  uVar7 = *(uint *)(param_1 + 0x70) & 0xffff;
  if (((uVar7 == 0x20a) || (uVar7 == 0x201)) && ((*(uint *)(param_1 + 0x1b8) & 0x20000) == 0)) {
    (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))(param_1,1,*(undefined8 *)(param_1 + 0x130),0,0)
    ;
  }
  if (((*(undefined ***)(param_1 + 0x68) != &PTR_s_raw_skt_14c70f620) &&
      ((*(uint *)(param_1 + 0x70) >> 0x1c & 1) == 0)) &&
     ((uVar7 = *(uint *)(param_1 + 0x70) & 0xffff, uVar7 != 0x1d &&
      (((uVar7 != 0x200 && (param_2 != 9999)) && (-1 < (char)*(uint *)(param_1 + 0x1b8))))))) {
    if (((*(byte *)(param_1 + 0x170) & 1) == 0) || (*(longlong *)(param_1 + 0x150) == 0)) {
      if (*(longlong *)(param_1 + 0x178) != -1) {
        *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
        Ordinal_22(*(longlong *)(param_1 + 0x178),1);
      }
    }
    else {
      FUN_144f41760(param_1);
    }
    if ((((*(byte *)(param_1 + 0x1b8) & 0x80) == 0) && (*(longlong *)(param_1 + 0x178) != -1)) &&
       ((*(short *)(param_1 + 0x70) != 0x1d &&
        ((*(byte *)(*(longlong *)(lVar9 + 0x3d0) + 0x70) & 1) != 0)))) {
      FUN_144bd0b20(param_1,2,9);
      *(undefined2 *)(param_1 + 0x70) = 0x1d;
      FUN_144bd7fb0(param_1,0xd,*(undefined4 *)(lVar9 + 0x4b8));
      return;
    }
  }
  FUN_144f41bd0(param_1);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xb8);
    }
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 8) = *(undefined8 *)(param_1 + 0xc0);
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0xd0) = *(longlong *)(param_1 + 200);
    }
    if (*(longlong *)(param_1 + 200) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 200) + 8) = *(undefined8 *)(param_1 + 0xd0);
    }
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if ((*(uint *)(param_1 + 0x1b8) & 0x80000) != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x178) == -1) {
    FUN_144bd09b0(param_1);
  }
  else {
    FUN_144bd02e0();
  }
  *(undefined2 *)(param_1 + 0x70) = 0x1e;
  FUN_144bd65d0(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xd8);
    }
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 8) = *(undefined8 *)(param_1 + 0xe0);
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  pcVar5 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x88);
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(lVar9 + 0xa0 + (longlong)cVar1 * 0xa8,param_1);
  }
  if (((*(uint *)(param_1 + 0x74) & 0x200) == 0) && ((*(uint *)(param_1 + 0x1b8) >> 0x12 & 1) == 0))
  {
    sVar2 = *(short *)(*(longlong *)(param_1 + 0x68) + 0xa4 +
                      (ulonglong)(*(uint *)(param_1 + 0x70) >> 0x1d & 1) * 2);
    if (sVar2 != 0) {
      lVar9 = *(longlong *)(param_1 + 0xa0);
      if (lVar9 == 0) {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170);
      }
      if (((*(uint *)(param_1 + 0x1b8) & 4) == 0) || ((*(uint *)(param_1 + 0x70) >> 0x1c & 1) == 0))
      {
        (**(code **)(lVar9 + 8))(param_1,sVar2,*(undefined8 *)(param_1 + 0x130),0,0);
      }
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x40000;
    }
  }
LAB_144bd7411:
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
  pcVar5 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x3d0) + 0x30);
  if ((pcVar5 == (code *)0x0) || (iVar8 = (*pcVar5)(param_1), iVar8 == 0)) {
    FUN_144bd6930(param_1);
  }
  return;
}



// FUNCTION 144bd6da0 FUN_144bd6da0 body=1717 status=ok
// SIG undefined FUN_144bd6da0(void)

void FUN_144bd6da0(longlong param_1,int param_2)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (param_1 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    freeaddrinfo();
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  cVar1 = *(char *)(param_1 + 0x1c7);
  lVar9 = *(longlong *)(param_1 + 0x78);
  thunk_FUN_144f3cee0(*(undefined8 *)(param_1 + 0xf8),0,&DAT_1499809d8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    if (*(longlong **)(param_1 + 0x108) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0x108) = *(longlong *)(param_1 + 0x100);
    }
    if (*(longlong *)(param_1 + 0x100) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x100) + 8) = *(undefined8 *)(param_1 + 0x108);
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x118);
    while (lVar10 != 0) {
      lVar4 = *(longlong *)(lVar10 + 8);
      FUN_144bd6da0(lVar10 + -0x120,0xffffffff,"trans q leader closing");
      lVar10 = lVar4;
    }
    if (*(longlong *)(param_1 + 0x120) != 0) {
      if (*(longlong **)(param_1 + 0x128) != (longlong *)0x0) {
        **(longlong **)(param_1 + 0x128) = *(longlong *)(param_1 + 0x120);
      }
      if (*(longlong *)(param_1 + 0x120) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 8) = *(undefined8 *)(param_1 + 0x128);
      }
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    do {
      lVar4 = *(longlong *)(lVar10 + 0x98);
      *(uint *)(lVar10 + 0x1b8) = *(uint *)(lVar10 + 0x1b8) | 0x80;
      *(undefined8 *)(lVar10 + 0x88) = 0;
      FUN_144bd6da0(lVar10,param_2,"general child recurse");
      lVar10 = lVar4;
    } while (lVar4 != 0);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(undefined ***)(param_1 + 0x68) == &PTR_s_raw_file_14c70f6d0) {
    FUN_144bd8090();
    FUN_144bd02e0(param_1);
    (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
              (param_1,*(undefined2 *)(*(longlong *)(param_1 + 0x68) + 0xa4),
               *(undefined8 *)(param_1 + 0x130),0,0);
    goto LAB_144bd7411;
  }
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
  FUN_144bd3de0(param_1);
  if (*(undefined ***)(param_1 + 0x68) == &PTR_s_raw_skt_14c70f620) {
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
  }
  else {
    if (((*(undefined ***)(param_1 + 0x68) == &PTR_DAT_14c70f4c0) &&
        ((*(uint *)(param_1 + 0x70) & 0x20000000) != 0)) && (*(longlong *)(param_1 + 0x28) != 0)) {
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 8))();
    }
    uVar7 = *(uint *)(param_1 + 0x70) & 0xffff;
    if (uVar7 == 0x1e) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x1b8);
    if (((-1 < (char)uVar3) && (param_2 != 9999)) && (uVar7 != 0x1d)) {
      uVar6 = *(uint *)(param_1 + 0x74) & 0xffff;
      if (uVar6 == 0x1e) {
        return;
      }
      if (uVar6 < 0x119) {
LAB_144bd7048:
        if (*(int *)(param_1 + 0x1ac) != 0) {
          *(undefined2 *)(param_1 + 0x70) = 0x11c;
          FUN_144bd7fb0(param_1,0xc,5);
          return;
        }
        if ((uVar7 != 0x201) && (uVar7 != 0x11)) {
          if (((uVar3 >> 0x12 & 1) == 0) &&
             ((((*(undefined ***)(param_1 + 0x68) == &PTR_DAT_14c70f4c0 &&
                ((*(uint *)(param_1 + 0x70) >> 0x1d & 1) != 0)) &&
               (*(longlong *)(param_1 + 0x130) != 0)) &&
              ((*(longlong *)(param_1 + 0xa0) != 0 && (0x7fffffff < uVar3)))))) {
            (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                      (param_1,0x32,*(longlong *)(param_1 + 0x130),0,0);
            *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0x7fffffff;
          }
          pcVar5 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x80);
          if ((pcVar5 != (code *)0x0) && (iVar8 = (*pcVar5)(param_1,param_2), iVar8 != 0)) {
            return;
          }
        }
      }
      else if (0x11b < uVar6) {
        if (uVar6 != 0x11c) goto LAB_144bd7048;
        if (*(int *)(param_1 + 0x1ac) != 0) {
          FUN_144bd0240(param_1);
          return;
        }
      }
    }
  }
  pcVar5 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x90);
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(param_1,param_2);
  }
  FUN_144bd8090(param_1);
  if ((((*(uint *)(param_1 + 0x1b8) >> 0x12 & 1) == 0) && (*(longlong *)(param_1 + 0x130) != 0)) &&
     (0x7fffffff < *(uint *)(param_1 + 0x1b8))) {
    (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
              (param_1,0x32,*(longlong *)(param_1 + 0x130),0,0);
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0x7fffffff;
  }
  uVar7 = *(uint *)(param_1 + 0x70) & 0xffff;
  if (((uVar7 == 0x20a) || (uVar7 == 0x201)) && ((*(uint *)(param_1 + 0x1b8) & 0x20000) == 0)) {
    (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))(param_1,1,*(undefined8 *)(param_1 + 0x130),0,0)
    ;
  }
  if (((*(undefined ***)(param_1 + 0x68) != &PTR_s_raw_skt_14c70f620) &&
      ((*(uint *)(param_1 + 0x70) >> 0x1c & 1) == 0)) &&
     ((uVar7 = *(uint *)(param_1 + 0x70) & 0xffff, uVar7 != 0x1d &&
      (((uVar7 != 0x200 && (param_2 != 9999)) && (-1 < (char)*(uint *)(param_1 + 0x1b8))))))) {
    if (((*(byte *)(param_1 + 0x170) & 1) == 0) || (*(longlong *)(param_1 + 0x150) == 0)) {
      if (*(longlong *)(param_1 + 0x178) != -1) {
        *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
        Ordinal_22(*(longlong *)(param_1 + 0x178),1);
      }
    }
    else {
      FUN_144f41760(param_1);
    }
    if ((((*(byte *)(param_1 + 0x1b8) & 0x80) == 0) && (*(longlong *)(param_1 + 0x178) != -1)) &&
       ((*(short *)(param_1 + 0x70) != 0x1d &&
        ((*(byte *)(*(longlong *)(lVar9 + 0x3d0) + 0x70) & 1) != 0)))) {
      FUN_144bd0b20(param_1,2,9);
      *(undefined2 *)(param_1 + 0x70) = 0x1d;
      FUN_144bd7fb0(param_1,0xd,*(undefined4 *)(lVar9 + 0x4b8));
      return;
    }
  }
  FUN_144f41bd0(param_1);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xb8);
    }
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 8) = *(undefined8 *)(param_1 + 0xc0);
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0xd0) = *(longlong *)(param_1 + 200);
    }
    if (*(longlong *)(param_1 + 200) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 200) + 8) = *(undefined8 *)(param_1 + 0xd0);
    }
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if ((*(uint *)(param_1 + 0x1b8) & 0x80000) != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x178) == -1) {
    FUN_144bd09b0(param_1);
  }
  else {
    FUN_144bd02e0();
  }
  *(undefined2 *)(param_1 + 0x70) = 0x1e;
  FUN_144bd65d0(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xd8);
    }
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 8) = *(undefined8 *)(param_1 + 0xe0);
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  pcVar5 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x88);
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(lVar9 + 0xa0 + (longlong)cVar1 * 0xa8,param_1);
  }
  if (((*(uint *)(param_1 + 0x74) & 0x200) == 0) && ((*(uint *)(param_1 + 0x1b8) >> 0x12 & 1) == 0))
  {
    sVar2 = *(short *)(*(longlong *)(param_1 + 0x68) + 0xa4 +
                      (ulonglong)(*(uint *)(param_1 + 0x70) >> 0x1d & 1) * 2);
    if (sVar2 != 0) {
      lVar9 = *(longlong *)(param_1 + 0xa0);
      if (lVar9 == 0) {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170);
      }
      if (((*(uint *)(param_1 + 0x1b8) & 4) == 0) || ((*(uint *)(param_1 + 0x70) >> 0x1c & 1) == 0))
      {
        (**(code **)(lVar9 + 8))(param_1,sVar2,*(undefined8 *)(param_1 + 0x130),0,0);
      }
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x40000;
    }
  }
LAB_144bd7411:
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
  pcVar5 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x3d0) + 0x30);
  if ((pcVar5 == (code *)0x0) || (iVar8 = (*pcVar5)(param_1), iVar8 == 0)) {
    FUN_144bd6930(param_1);
  }
  return;
}



// FUNCTION 144bd7460 FUN_144bd7460 body=368 status=ok
// SIG undefined FUN_144bd7460(void)

void FUN_144bd7460(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  
  if (param_1 != 0) {
    if ((((*(longlong *)(param_1 + 0xa0) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x10) != 0)) &&
        (*(longlong *)(param_1 + 0x130) != 0)) && ((*(byte *)(param_1 + 0x1b8) & 0x40) == 0)) {
      thunk_FUN_144f3cee0(*(longlong *)(param_1 + 0x130),0,"lws_free");
    }
    puVar5 = *(undefined8 **)(param_1 + 0x140);
    while (puVar5 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar5;
      *puVar5 = 0;
      thunk_FUN_144f3cee0(puVar5,0,"lws_free");
      puVar5 = puVar2;
    }
    *(undefined8 *)(param_1 + 0x140) = 0;
    thunk_FUN_144f3cee0(*(undefined8 *)(param_1 + 0x148),0,&DAT_1499809d8);
    *(undefined8 *)(param_1 + 0x148) = 0;
    thunk_FUN_144f3cee0(*(undefined8 *)(param_1 + 0xe8),0,&DAT_1499809d8);
    lVar3 = *(longlong *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x158) == param_1)) {
      *(undefined8 *)(lVar3 + 0x158) = 0;
    }
    pcVar4 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x98);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(param_1);
    }
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
        **(longlong **)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xb8);
      }
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 8) = *(undefined8 *)(param_1 + 0xc0);
      }
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    pcVar4 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x3d0) + 0x68);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(param_1);
    }
    piVar1 = (int *)(*(longlong *)(param_1 + 0x78) + 0x4a8);
    *piVar1 = *piVar1 + -1;
    thunk_FUN_144f3cee0(param_1,0,"lws_free");
  }
  return;
}



// FUNCTION 144bd75d0 FUN_144bd75d0 body=77 status=ok
// SIG undefined FUN_144bd75d0(void)

undefined8 FUN_144bd75d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x218);
  plVar3 = (longlong *)(param_1 + 0x218);
  while( true ) {
    if (lVar1 == 0) {
      return 1;
    }
    plVar2 = (longlong *)*plVar3;
    if (plVar2 == param_2) break;
    lVar1 = *plVar2;
    plVar3 = plVar2;
  }
  *plVar3 = *param_2;
  thunk_FUN_144f3cee0(param_2,0,"lws_free");
  return 0;
}



// FUNCTION 144bd7620 FUN_144bd7620 body=67 status=ok
// SIG undefined FUN_144bd7620(void)

void FUN_144bd7620(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xb8);
    }
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 8) = *(undefined8 *)(param_1 + 0xc0);
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 144bd7670 FUN_144bd7670 body=16 status=ok
// SIG undefined FUN_144bd7670(void)

void FUN_144bd7670(longlong param_1,uint param_2,uint param_3,longlong param_4)

{
  *(uint *)(param_1 + 0x70) = param_2 | param_3;
  if (param_4 != 0) {
    *(longlong *)(param_1 + 0x68) = param_4;
  }
  return;
}



// FUNCTION 144bd7680 FUN_144bd7680 body=91 status=ok
// SIG undefined FUN_144bd7680(void)

void FUN_144bd7680(code *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  *(uint *)(param_2 + 0x1b8) = *(uint *)(param_2 + 0x1b8) | 0x8000000;
  iVar1 = (*param_1)(param_2,param_3,param_4,param_5,param_6);
  *(uint *)(param_2 + 0x1b8) = *(uint *)(param_2 + 0x1b8) & 0xf7ffffff;
  if (iVar1 == 0) {
    FUN_144bd7850(param_2);
  }
  return;
}



// FUNCTION 144bd76e0 FUN_144bd76e0 body=105 status=ok
// SIG undefined FUN_144bd76e0(void)

undefined8 FUN_144bd76e0(longlong param_1)

{
  longlong lVar1;
  
  if (((*(longlong *)(param_1 + 0xa0) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x10), lVar1 != 0)) &&
     (*(longlong *)(param_1 + 0x130) == 0)) {
    lVar1 = FUN_144f3cf20(lVar1,"user space");
    *(longlong *)(param_1 + 0x130) = lVar1;
    if (lVar1 == 0) {
      FUN_144bd5aa0(1,"%s: OOM\n","lws_ensure_user_space");
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144bd7750 FUN_144bd7750 body=229 status=ok
// SIG undefined FUN_144bd7750(void)

void FUN_144bd7750(uint param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar4 = 10;
  if (DAT_14c6da1c4 == 0) {
    iVar1 = _isatty(2);
    DAT_14c6da1c4 = (byte)iVar1 | 2;
  }
  FUN_144bd5b90(param_1,local_48,0x32);
  if (DAT_14c6da1c4 == 3) {
    uVar2 = 0x400;
    do {
      if ((param_1 & uVar2) != 0) break;
      iVar4 = iVar4 + -1;
      uVar2 = (int)uVar2 >> 1;
    } while (uVar2 != 0);
    uVar3 = __acrt_iob_func(2);
    local_58 = 0x1b;
    local_68 = local_48;
    local_60 = param_2;
    FUN_146c958a0(uVar3,"%c%s%s%s%c[0m",0x1b,(&PTR_s__31_1m_149980ff0)[iVar4]);
  }
  else {
    uVar3 = __acrt_iob_func(2);
    FUN_146c958a0(uVar3,&DAT_14ab676e8,local_48,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
}



// FUNCTION 144bd7850 FUN_144bd7850 body=251 status=ok
// SIG undefined FUN_144bd7850(void)

undefined8 FUN_144bd7850(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (((*(byte *)(param_1 + 0x1b8) & 2) == 0) &&
     ((*(uint *)(param_1 + 0x70) & 0xf000000) != 0x1000000)) {
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x98)) {
      if ((*(uint *)(lVar1 + 0x1b8) & 0x200) != 0) {
        FUN_144bd7850(lVar1);
      }
    }
    if ((*(uint *)(param_1 + 0x1b8) & 0x200) != 0) {
      plVar2 = *(longlong **)(param_1 + 0x140);
      if (plVar2 != (longlong *)0x0) {
        if ((plVar2[1] == 0) && (*plVar2 != 0)) {
          FUN_144bd8130(param_1 + 0x140);
        }
        lVar1 = *(longlong *)(param_1 + 0x140);
        if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != *(longlong *)(lVar1 + 0x10))) {
          FUN_144bd0240(param_1);
          return 0;
        }
      }
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xfffffdff;
      if ((*(uint *)(param_1 + 0x1b8) & 0x100) == 0) {
        uVar5 = 0;
        uVar4 = 9;
      }
      else {
        uVar4 = 0;
        uVar5 = 9;
      }
      iVar3 = FUN_144bd0b20(param_1,uVar4,uVar5);
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}



// FUNCTION 144bd7950 FUN_144bd7950 body=524 status=ok
// SIG undefined FUN_144bd7950(void)

undefined8 FUN_144bd7950(longlong param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  longlong *plVar7;
  
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x170);
  if ((*(longlong *)(param_1 + 0xa0) != 0) && (0x7fffffff < *(uint *)(param_1 + 0x1b8))) {
    (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
              (param_1,0x32,*(undefined8 *)(param_1 + 0x130),0,0);
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0x7fffffff;
  }
  if ((*(byte *)(param_1 + 0x1b8) & 0x40) == 0) {
    thunk_FUN_144f3cee0(*(undefined8 *)(param_1 + 0x130),0,&DAT_1499809d8);
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  FUN_144bd09b0(param_1);
  *(longlong **)(param_1 + 0xa0) = param_2;
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  iVar5 = FUN_144bd76e0(param_1);
  if (iVar5 == 0) {
    if ((plVar3 < param_2) &&
       (param_2 < plVar3 + (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x230) * 7)) {
      FUN_144bd0a20(param_1,((longlong)param_2 - (longlong)plVar3) / 0x38);
    }
    else {
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x230);
      if (iVar5 != 0) {
        pcVar4 = (char *)*param_2;
        plVar7 = plVar3;
        do {
          iVar5 = iVar5 + -1;
          if ((pcVar4 != (char *)0x0) && (*plVar7 != 0)) {
            pcVar6 = pcVar4;
            do {
              cVar1 = *pcVar6;
              cVar2 = pcVar6[*plVar7 - (longlong)pcVar4];
              if (cVar1 != cVar2) break;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            if (cVar1 == cVar2) {
              FUN_144bd0a20(param_1,((longlong)plVar7 - (longlong)plVar3) / 0x38);
              goto LAB_144bd7aec;
            }
          }
          plVar7 = plVar7 + 7;
        } while (iVar5 != 0);
      }
      FUN_144bd5aa0(1,"%s: %p is not in vhost \'%s\' protocols list\n","lws_bind_protocol",param_2,
                    *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x160));
    }
LAB_144bd7aec:
    iVar5 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                      (param_1,0x31,*(undefined8 *)(param_1 + 0x130),0,0);
    if (iVar5 == 0) {
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80000000;
      return 0;
    }
  }
  return 1;
}



// FUNCTION 144bd7b60 FUN_144bd7b60 body=79 status=ok
// SIG undefined FUN_144bd7b60(void)

int FUN_144bd7b60(char *param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 >> 8 & 1) != 0) {
    iVar1 = _open(param_1,param_2);
    FUN_144f3c340(iVar1);
    return iVar1;
  }
  iVar1 = _open(param_1,param_2);
  FUN_144f3c340(iVar1);
  return iVar1;
}



// FUNCTION 144bd7bb0 FUN_144bd7bb0 body=234 status=ok
// SIG undefined FUN_144bd7bb0(void)

longlong FUN_144bd7bb0(longlong param_1,char *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  int iVar5;
  size_t _MaxCount;
  
  *param_3 = 0;
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return param_1;
  }
  pcVar4 = param_2;
  if (param_2 != (char *)0x0) {
    while (*pcVar4 != '\0') {
      if (*pcVar4 == '/') {
        for (lVar1 = *(longlong *)(param_1 + 0x58); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x58))
        {
          iVar5 = 0;
          puVar3 = (undefined8 *)(lVar1 + 0x28);
          do {
            if ((char *)*puVar3 == (char *)0x0) break;
            if ((param_2 + *(byte *)(puVar3 + 1) <= pcVar4) &&
               (_MaxCount = (size_t)(int)(*(byte *)(puVar3 + 1) - 1),
               iVar2 = strncmp(pcVar4 + -_MaxCount,(char *)*puVar3,_MaxCount), iVar2 == 0)) {
              *param_3 = (longlong)(pcVar4 + 1);
              return lVar1;
            }
            iVar5 = iVar5 + 1;
            puVar3 = puVar3 + 2;
          } while (iVar5 < 3);
        }
      }
      pcVar4 = pcVar4 + 1;
      if (pcVar4 == (char *)0x0) {
        return param_1;
      }
    }
  }
  return param_1;
}



// FUNCTION 144bd7ca0 FUN_144bd7ca0 body=165 status=ok
// SIG undefined FUN_144bd7ca0(void)

undefined8 FUN_144bd7ca0(byte *param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = *param_1;
  while( true ) {
    while( true ) {
      if (param_3 == 0) {
        *param_1 = bVar2;
        return 0;
      }
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
      if (bVar2 != 0) break;
      bVar2 = 0;
      if (0x7f < bVar1) {
        if (0x32 < (byte)(bVar1 + 0x3e)) {
          return 1;
        }
        if (bVar1 < 0xe0) {
          bVar2 = 0x8c;
        }
        else {
          bVar2 = (&DAT_149980fd8)[(int)(bVar1 - 0xe0)];
        }
      }
    }
    if (bVar1 < (bVar2 & 0xf0)) break;
    if ((bVar2 & 0xf0) + (bVar2 & 0xc) * 4 + 0x10 <= (uint)bVar1) {
      return 1;
    }
    bVar2 = (&DAT_149980fed)[bVar2 & 3];
  }
  return 1;
}



// FUNCTION 144bd7d50 FUN_144bd7d50 body=242 status=ok
// SIG undefined FUN_144bd7d50(void)

undefined4 FUN_144bd7d50(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_1e8 [120];
  longlong local_170;
  longlong local_168;
  undefined8 *local_148;
  
  lVar1 = *(longlong *)(param_1 + 0x378);
  uVar4 = 0;
  memset(local_1e8,0,0x1d0);
  local_170 = param_1;
  for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x150)) {
    iVar5 = 0;
    if (0 < *(int *)(lVar1 + 0x230)) {
      puVar3 = (undefined8 *)(*(longlong *)(lVar1 + 0x170) + 8);
      local_168 = lVar1;
      do {
        local_148 = puVar3 + -1;
        if (((code *)*puVar3 != (code *)0x0) &&
           (iVar2 = (*(code *)*puVar3)(local_1e8,param_2,0,param_3,param_4), iVar2 != 0)) {
          uVar4 = 1;
        }
        puVar3 = puVar3 + 7;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar1 + 0x230));
    }
  }
  return uVar4;
}



// FUNCTION 144bd7e50 FUN_144bd7e50 body=344 status=ok
// SIG undefined FUN_144bd7e50(void)

longlong FUN_144bd7e50(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res8;
  int local_resc;
  
  FUN_144f458c0(&local_res8,0);
  lVar4 = (longlong)local_res8;
  lVar5 = (longlong)local_resc;
  plVar1 = *(longlong **)(param_1 + 0x28);
  while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar2[1];
    if (lVar4 * 1000000 + lVar5 < plVar2[0x19]) break;
    if (*plVar2 != 0) {
      if ((longlong *)plVar2[1] != (longlong *)0x0) {
        *(longlong *)plVar2[1] = *plVar2;
      }
      if (*plVar2 != 0) {
        *(longlong *)(*plVar2 + 8) = plVar2[1];
      }
      *plVar2 = 0;
      plVar2[1] = 0;
    }
    if ((plVar2[-5] != 0) &&
       (iVar3 = (**(code **)(plVar2[-5] + 8))(plVar2 + -0x19,0x49,plVar2[0xd],0,0), iVar3 != 0)) {
      FUN_144bd6da0(plVar2 + -0x19,0,"timer cb errored");
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 == 0) {
    return 0x7fffffffffffffff;
  }
  FUN_144f458c0(&local_res8,0);
  lVar5 = (longlong)local_res8 * 1000000 + (longlong)local_resc;
  lVar4 = *(longlong *)(lVar4 + 200);
  if (lVar5 <= lVar4) {
    return lVar4 - lVar5;
  }
  return 0;
}



// FUNCTION 144bd7fb0 FUN_144bd7fb0 body=220 status=ok
// SIG undefined FUN_144bd7fb0(void)

void FUN_144bd7fb0(longlong param_1,int param_2,undefined2 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  __time64_t local_res8;
  
  lVar2 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + *(longlong *)(param_1 + 0x78);
  _time64(&local_res8);
  *(__time64_t *)(param_1 + 0x198) = local_res8;
  *(undefined2 *)(param_1 + 0x1c2) = param_3;
  *(char *)(param_1 + 0x1c6) = (char)param_2;
  if (param_2 == 0) {
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
        **(longlong **)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xb8);
      }
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + 8) = *(undefined8 *)(param_1 + 0xc0);
      }
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
  }
  else {
    plVar3 = (longlong *)(param_1 + 0xb8);
    if (*plVar3 == 0) {
      puVar1 = *(undefined8 **)(lVar2 + 0xb8);
      *(undefined8 **)(param_1 + 0xc0) = puVar1;
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = plVar3;
      }
      *plVar3 = lVar2 + 0xb0;
      *(longlong **)(lVar2 + 0xb8) = plVar3;
    }
  }
  return;
}



// FUNCTION 144bd8090 FUN_144bd8090 body=157 status=ok
// SIG undefined FUN_144bd8090(void)

void FUN_144bd8090(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x88);
  if (lVar2 != 0) {
    plVar1 = (longlong *)(lVar2 + 0x90);
    lVar3 = *plVar1;
    while (lVar3 != 0) {
      if (*plVar1 == param_1) {
        if (*(longlong *)(lVar2 + 0xa0) != 0) {
          (**(code **)(*(longlong *)(lVar2 + 0xa0) + 8))
                    (param_1,0x45,*(undefined8 *)(lVar2 + 0x130),param_1,0);
        }
        *plVar1 = *(longlong *)(param_1 + 0x98);
        goto LAB_144bd80e4;
      }
      plVar1 = (longlong *)(*plVar1 + 0x98);
      lVar3 = *plVar1;
    }
    FUN_144bd5aa0(1,"%s: failed to detach from parent\n","lws_remove_child_from_any_parent");
LAB_144bd80e4:
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  return;
}



// FUNCTION 144bd8130 FUN_144bd8130 body=60 status=ok
// SIG undefined FUN_144bd8130(void)

bool FUN_144bd8130(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  *param_1 = *plVar1;
  *plVar1 = 0;
  thunk_FUN_144f3cee0(plVar1,0,"lws_free");
  return *param_1 == 0;
}



// FUNCTION 144bd8170 FUN_144bd8170 body=87 status=ok
// SIG undefined FUN_144bd8170(void)

undefined8 FUN_144bd8170(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 1;
  }
  *(byte *)(param_1 + 0x144) = *(byte *)(param_1 + 0x144) | 1;
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x3d0) + 0x58);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,0);
    *(byte *)(param_1 + 0x144) = *(byte *)(param_1 + 0x144) & 0xfe;
    return 1;
  }
  uVar2 = FUN_144f3c630();
  *(byte *)(param_1 + 0x144) = *(byte *)(param_1 + 0x144) & 0xfe;
  return uVar2;
}



// FUNCTION 144bd81d0 FUN_144bd81d0 body=8 status=ok
// SIG undefined FUN_144bd81d0(void)

void FUN_144bd81d0(undefined8 param_1,undefined8 param_2)

{
  FUN_144bd81e0(param_1,param_2,0);
  return;
}



// FUNCTION 144bd81e0 FUN_144bd81e0 body=353 status=ok
// SIG undefined FUN_144bd81e0(void)

undefined8 FUN_144bd81e0(longlong param_1,undefined8 *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_3 * 0xa8 + param_1;
  if ((param_1 == 0) || ((*(byte *)(param_1 + 0x4d0) & 4) != 0)) {
    return 0xffffffff;
  }
  iVar2 = FUN_144bd8980();
  if (iVar2 != 0) {
    return 0;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 0;
  }
  lVar3 = FUN_144f3bf50(param_1,*param_2);
  if (lVar3 == 0) {
    return 0;
  }
  uVar1 = *(ushort *)((longlong)param_2 + 10);
  if ((((byte)uVar1 & *(byte *)(param_2 + 1) & 9) != 0) || ((uVar1 & 0x20) == 0)) {
    if ((uVar1 & 2) != 0) {
      *(uint *)(lVar3 + 0x1bc) = *(uint *)(lVar3 + 0x1bc) & 0xffffefff;
    }
    if ((((byte)*(ushort *)((longlong)param_2 + 10) & *(byte *)(param_2 + 1) & 9) != 0) ||
       ((*(ushort *)((longlong)param_2 + 10) & 0x20) == 0)) {
      if ((*(short *)(lVar3 + 0x70) == 0x1d) &&
         (((iVar2 = FUN_144bd6900(lVar3), iVar2 != 0 && (*(longlong *)(lVar3 + 0x150) != 0)) &&
          (iVar2 = FUN_144f41760(lVar3), -5 < iVar2)))) {
        if (iVar2 < -1) goto LAB_144bd830a;
        if (iVar2 < 1) goto LAB_144bd8262;
      }
      *(uint *)(lVar3 + 0x1bc) = *(uint *)(lVar3 + 0x1bc) & 0xfffffffe;
      iVar2 = (**(code **)(*(longlong *)(lVar3 + 0x68) + 0x40))(lVar4 + 0xa0,lVar3,param_2);
      if (iVar2 == 3) {
        return 1;
      }
      if (iVar2 != 5) {
LAB_144bd830a:
        *(undefined2 *)((longlong)param_2 + 10) = 0;
        FUN_144bd7e50(lVar4 + 0xa0);
        return 0;
      }
      goto LAB_144bd8262;
    }
  }
  *(uint *)(lVar3 + 0x1b8) = *(uint *)(lVar3 + 0x1b8) | 0x80;
LAB_144bd8262:
  thunk_FUN_144bd6da0(lVar3,0,"close_and_handled");
  return 1;
}



// FUNCTION 144bd8350 FUN_144bd8350 body=126 status=ok
// SIG undefined FUN_144bd8350(void)

undefined4 FUN_144bd8350(longlong param_1,undefined4 param_2,int param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  
  param_1 = (longlong)param_3 * 0xa8 + param_1;
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0xa0) + 0x98);
  if (((puVar1 == (undefined8 *)0x0) || (pcVar2 = (code *)*puVar1, pcVar2 == (code *)0x0)) ||
     (iVar4 = (*pcVar2)(param_1 + 0xa0), iVar4 == 0)) {
    lVar3 = *(longlong *)(param_1 + 0xd8);
    while( true ) {
      if (lVar3 == 0) {
        return param_2;
      }
      if (*(short *)(lVar3 + -0x68) != 0x10f) break;
      lVar3 = *(longlong *)(lVar3 + 8);
    }
  }
  return 0;
}



// FUNCTION 144bd83d0 FUN_144bd83d0 body=406 status=ok
// SIG undefined FUN_144bd83d0(void)

ulonglong FUN_144bd83d0(longlong param_1,longlong param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  *(uint *)(param_1 + 0x1bc) = *(uint *)(param_1 + 0x1bc) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x1cf) = 0;
  *(undefined1 *)(param_1 + 0x1ce) = 1;
  if (*(int *)(param_1 + 0x1ac) == 0) {
    if (*(short *)(param_1 + 0x70) == 0x11c) {
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
    }
    else {
      pcVar2 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x48);
      if ((pcVar2 == (code *)0x0) || (iVar3 = (*pcVar2)(), iVar3 == 0)) goto LAB_144bd8418;
      if (iVar3 != 1) {
        if ((*(uint *)(param_1 + 0x1b8) & 0x800000) != 0) {
          *(undefined1 *)(param_1 + 0x1ce) = 0;
          *(undefined1 *)(param_1 + 0x1cf) = 0;
          uVar5 = FUN_144bd8700(param_1);
          return uVar5;
        }
        if (param_2 != 0) {
          cVar1 = *(char *)(param_1 + 0x1cf);
          if (((cVar1 == '\0') && (iVar3 = thunk_FUN_144bd0b20(param_1,2), iVar3 != 0)) ||
             ((*(undefined1 *)(param_1 + 0x1ce) = 0, cVar1 == '\0' &&
              ((*(char *)(param_1 + 0x1cf) != '\0' &&
               (iVar3 = thunk_FUN_144bd0b20(param_1,0,2), iVar3 != 0)))))) goto LAB_144bd8445;
          *(undefined1 *)(param_1 + 0x1cf) = 0;
        }
        if (((((*(uint *)(param_1 + 0x70) >> 0x1c & 1) == 0) ||
             ((*(byte *)(param_1 + 0x1b8) & 1) != 0)) ||
            (uVar4 = *(uint *)(param_1 + 0x70) & 0xffff, uVar4 == 0x10e)) || (uVar4 == 0x13)) {
          pcVar2 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x50);
          if (pcVar2 == (code *)0x0) {
            *(undefined1 *)(param_1 + 0x1cf) = 0;
            uVar4 = FUN_144bd8700(param_1);
            *(undefined1 *)(param_1 + 0x1ce) = 0;
            if (*(char *)(param_1 + 0x1cf) != '\0') {
              thunk_FUN_144bd0b20(param_1,0,2);
            }
            return (ulonglong)uVar4;
          }
          iVar3 = (*pcVar2)();
          if (iVar3 == -1) goto LAB_144bd8445;
        }
LAB_144bd8418:
        uVar5 = 0;
        goto LAB_144bd841a;
      }
    }
  }
  else {
    iVar3 = FUN_144bd8e90(param_1,(ulonglong)*(uint *)(param_1 + 0x1a8) +
                                  *(longlong *)(param_1 + 0x148),*(int *)(param_1 + 0x1ac));
    if (-1 < iVar3) goto LAB_144bd8418;
  }
LAB_144bd8445:
  uVar5 = 0xffffffff;
LAB_144bd841a:
  *(undefined1 *)(param_1 + 0x1ce) = 0;
  *(undefined1 *)(param_1 + 0x1cf) = 0;
  return uVar5;
}



// FUNCTION 144bd8570 FUN_144bd8570 body=189 status=ok
// SIG undefined FUN_144bd8570(void)

undefined4 FUN_144bd8570(longlong param_1,ulonglong param_2,int param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong local_res8;
  
  cVar1 = *(char *)(param_1 + 0x1c7);
  lVar2 = *(longlong *)(param_1 + 0x78);
  uVar5 = 0;
  lVar4 = FUN_144bd64e0(param_1 + 0x140,&local_res8);
  if (lVar4 != 0) {
    if ((local_res8 <= param_2) && (param_2 + (longlong)param_4 <= local_res8 + lVar4)) {
      return 1;
    }
    uVar5 = 1;
  }
  iVar3 = FUN_144bd63f0(param_1 + 0x140,param_2 + (longlong)param_3,(longlong)(param_4 - param_3));
  if (iVar3 < 0) {
    uVar5 = 0xffffffff;
  }
  else if (iVar3 != 0) {
    FUN_144bd63a0(param_1 + 0xd8,(longlong)cVar1 * 0xa8 + lVar2 + 0xd0);
  }
  return uVar5;
}



// FUNCTION 144bd8630 FUN_144bd8630 body=195 status=ok
// SIG undefined FUN_144bd8630(void)

uint FUN_144bd8630(longlong param_1,int param_2)

{
  ushort *puVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  param_1 = (longlong)param_2 * 0xa8 + param_1;
  lVar3 = *(longlong *)(param_1 + 0xd8);
  do {
    uVar6 = 0;
    if (lVar3 == 0) {
LAB_144bd866d:
      uVar5 = (*(code *)PTR_FUN_14c6da148)();
      uVar6 = uVar6 | uVar5;
      lVar3 = *(longlong *)(param_1 + 0xe0);
      while (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 0x168);
        lVar7 = (longlong)*(int *)(lVar3 + 0x1a0) * 0x10 + *(longlong *)(param_1 + 0xe8);
        puVar1 = (ushort *)(lVar7 + 10);
        *puVar1 = *puVar1 | *(ushort *)(lVar7 + 8) & 9;
        piVar2 = (int *)(lVar3 + 0x1a0);
        lVar3 = lVar4;
        if ((*(byte *)(*(longlong *)(param_1 + 0xe8) + 10 + (longlong)*piVar2 * 0x10) & 9) != 0) {
          uVar6 = 1;
          FUN_144f41bd0();
        }
      }
      return uVar6;
    }
    if (*(short *)(lVar3 + -0x68) != 0x10f) {
      uVar6 = 1;
      goto LAB_144bd866d;
    }
    lVar3 = *(longlong *)(lVar3 + 8);
  } while( true );
}



// FUNCTION 144bd8700 FUN_144bd8700 body=73 status=ok
// SIG undefined FUN_144bd8700(void)

void FUN_144bd8700(longlong param_1)

{
  FUN_144bd7680(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 8),param_1,
                *(undefined2 *)
                 (*(longlong *)(param_1 + 0x68) + 0xa0 +
                 (ulonglong)(*(uint *)(param_1 + 0x70) >> 0x1d & 1) * 2),
                *(undefined8 *)(param_1 + 0x130),0,0);
  return;
}



// FUNCTION 144bd8750 FUN_144bd8750 body=205 status=ok
// SIG undefined FUN_144bd8750(void)

undefined8 FUN_144bd8750(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_144bd64e0(param_2 + 0x140,0);
  *param_3 = *(undefined8 *)(param_1 + 8);
  iVar2 = FUN_144f40f60(param_2,*(undefined8 *)(param_1 + 8),
                        *(undefined4 *)(*(longlong *)(param_2 + 0x78) + 0x4bc));
  *(int *)(param_3 + 1) = iVar2;
  if (iVar2 == -4) {
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    if ((iVar2 < 1) || (iVar1 == 0)) {
      return 0;
    }
    iVar1 = FUN_144bd63f0(param_2 + 0x140,*param_3,(longlong)iVar2);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    if (iVar1 != 0) {
      FUN_144bd63a0(param_2 + 0xd8,param_1 + 0x30);
    }
  }
  uVar3 = FUN_144bd64e0(param_2 + 0x140,param_3);
  *(undefined4 *)(param_3 + 1) = uVar3;
  return 1;
}



// FUNCTION 144bd8820 FUN_144bd8820 body=183 status=ok
// SIG undefined FUN_144bd8820(void)

undefined8 FUN_144bd8820(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 0x1c7);
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (param_3 == 0) {
    if (param_4 != 0) {
      return 0;
    }
  }
  else if (param_4 != 0) {
    iVar3 = FUN_144bd6570(param_1 + 0x140,(longlong)param_3);
    if (iVar3 != 0) {
      return 0;
    }
    FUN_144bd63c0(param_1 + 0xd8);
    return 0;
  }
  if (param_3 != (int)param_2[1]) {
    iVar3 = FUN_144bd63f0(param_1 + 0x140,(longlong)param_3 + *param_2,
                          (longlong)((int)param_2[1] - param_3));
    if (iVar3 < 0) {
      return 1;
    }
    if (iVar3 != 0) {
      FUN_144bd63a0(param_1 + 0xd8,(longlong)cVar1 * 0xa8 + lVar2 + 0xd0);
    }
  }
  return 0;
}



// FUNCTION 144bd88e0 FUN_144bd88e0 body=147 status=ok
// SIG undefined FUN_144bd88e0(void)

undefined8 FUN_144bd88e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    iVar1 = FUN_144bd68b0(*(undefined8 *)(param_1 + 0x78),param_2,*(undefined8 *)(param_1 + 0x198));
    if ((int)(uint)*(ushort *)(param_1 + 0x1c2) < iVar1) {
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
      if ((*(short *)(param_1 + 0x70) == 0x203) && (*(longlong *)(param_1 + 0xa0) != 0)) {
        (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                  (param_1,1,*(undefined8 *)(param_1 + 0x130),"Timed out waiting SSL",0x15);
      }
      FUN_144bd6da0(param_1,0,"timeout");
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144bd8980 FUN_144bd8980 body=1063 status=ok
// SIG undefined FUN_144bd8980(void)

void FUN_144bd8980(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  char *pcVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_158 [2];
  undefined1 local_148 [255];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar14 = (longlong)param_3;
  lVar13 = 0;
  bVar7 = false;
  if (((*(byte *)(param_1 + 0x9a) & 0x20) != 0) || (iVar8 = FUN_144bd0f30(), iVar8 == 0)) {
    _time64(local_158);
    if ((param_1[2] < 0x57442252) && (0x57442252 < local_158[0])) {
      param_1[2] = local_158[0];
    }
    lVar1 = *param_1;
    if ((lVar1 != 0) && (lVar10 = local_158[0] - lVar1, 100 < lVar10)) {
      param_1[3] = local_158[0];
      param_1[4] = lVar10;
      local_168 = lVar10;
      FUN_144bd5aa0(4,"time discontiguity: at old time %llus, new time %llus: +%llus\n",lVar1,
                    local_158[0]);
      *param_1 = local_158[0] + -1;
    }
    iVar8 = FUN_144bd68b0(param_1,*param_1);
    if (iVar8 != 0) {
      *param_1 = local_158[0];
      FUN_144f3c400(param_1);
      FUN_144bd20b0(param_1,0);
      if (param_2 != (longlong *)0x0) {
        lVar13 = *param_2;
      }
      lVar1 = param_1[lVar14 * 0x15 + 0x17];
      while (lVar1 != 0) {
        lVar10 = *(longlong *)(lVar1 + 8);
        lVar2 = *(longlong *)(lVar1 + 0xc0);
        iVar8 = FUN_144bd88e0(lVar1 + -0xb8,local_158[0]);
        lVar1 = lVar10;
        if ((iVar8 != 0) && (lVar2 == lVar13)) {
          bVar7 = true;
        }
      }
      puVar3 = (undefined8 *)param_1[lVar14 * 0x15 + 0x23];
      while (puVar3 != (undefined8 *)0x0) {
        if ((((*(char *)((longlong)puVar3 + 0x3b2) == '\0') || (lVar1 = puVar3[1], lVar1 == 0)) ||
            (puVar3[99] == 0)) ||
           ((*(longlong *)(lVar1 + 0x80) != 0 &&
            (iVar8 = FUN_144bd68b0(param_1,local_158[0]),
            iVar8 < *(int *)(*(longlong *)(lVar1 + 0x80) + 0x244) + 0x168)))) {
          puVar3 = (undefined8 *)*puVar3;
        }
        else {
          local_148[0] = 0;
          FUN_144bd6290(lVar1,local_148,0x100);
          local_168 = CONCAT44(local_168._4_4_,*(undefined4 *)(puVar3 + 0x74));
          FUN_144bd5aa0(4,"ah excessive hold: wsi %p\n  peer address: %s\n  ah pos %u\n",lVar1,
                        local_148);
          local_148[0] = 0;
          iVar8 = 0;
          pcVar11 = (char *)FUN_144f3d720(0);
          while ((pcVar11 != (char *)0x0 && (*pcVar11 != '\0'))) {
            iVar9 = FUN_144f429b0(lVar1,iVar8);
            if ((iVar9 != 0) &&
               ((iVar9 < 0x100 && (iVar9 = FUN_144f429f0(lVar1,local_148,0x100,iVar8), 0 < iVar9))))
            {
              local_49 = 0;
              FUN_144bd5aa0(4,"   %s = %s\n",pcVar11,local_148);
            }
            iVar8 = iVar8 + 1;
            pcVar11 = (char *)FUN_144f3d720(iVar8);
          }
          thunk_FUN_144f43630(lVar1,0);
          bVar6 = bVar7;
          if ((*(longlong *)(lVar1 + 0x178) != lVar13) || (bVar6 = true, !bVar7)) {
            FUN_144bd6da0(lVar1,0,"excessive ah");
          }
          puVar3 = (undefined8 *)param_1[lVar14 * 0x15 + 0x23];
          bVar7 = bVar6;
        }
      }
      lVar13 = param_1[0x6f];
      lVar14 = 0;
      if (lVar13 != 0) {
        do {
          puVar3 = *(undefined8 **)(lVar13 + 0x218);
          while (puVar3 != (undefined8 *)0x0) {
            if (local_158[0] < (longlong)puVar3[2]) {
              puVar3 = (undefined8 *)*puVar3;
            }
            else {
              if (lVar14 == 0) {
                lVar14 = FUN_144f3cf20(0x1d0,"cbwsi");
              }
              *(longlong **)(lVar14 + 0x78) = param_1;
              *(longlong *)(lVar14 + 0x80) = lVar13;
              *(undefined8 *)(lVar14 + 0xa0) = puVar3[1];
              local_168 = 0;
              (**(code **)(puVar3[1] + 8))(lVar14,*(undefined4 *)(puVar3 + 3),0,0);
              puVar4 = (undefined8 *)*puVar3;
              FUN_144bd75d0(lVar13,puVar3);
              puVar3 = puVar4;
            }
          }
          lVar13 = *(longlong *)(lVar13 + 0x150);
        } while (lVar13 != 0);
        if (lVar14 != 0) {
          thunk_FUN_144f3cee0(lVar14,0,"lws_free");
        }
      }
      plVar12 = param_1 + 0x70;
      lVar13 = *plVar12;
      while (lVar13 != 0) {
        lVar13 = *plVar12;
        iVar8 = FUN_144f3f980(0,lVar13);
        if (iVar8 == 0) {
          FUN_144bd5aa0(4,"vh %s: became connected\n",*(undefined8 *)(lVar13 + 0x160));
          *plVar12 = *(longlong *)(lVar13 + 0x198);
          *(undefined8 *)(lVar13 + 0x198) = 0;
          break;
        }
        plVar12 = (longlong *)(*plVar12 + 0x198);
        lVar13 = *plVar12;
      }
      (*(code *)PTR_FUN_14c6da140)(param_1,param_3,local_158[0]);
      if ((param_1[0x13] != 0) && (pcVar5 = *(code **)(param_1[0x13] + 8), pcVar5 != (code *)0x0)) {
        (*pcVar5)(param_1,local_158[0]);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_188);
}



// FUNCTION 144bd8dc0 FUN_144bd8dc0 body=203 status=ok
// SIG undefined FUN_144bd8dc0(void)

ulonglong FUN_144bd8dc0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  ulonglong uVar5;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  undefined4 local_10;
  
  if ((*(uint *)(param_1 + 0x1b8) & 0x800000) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x88);
    local_28 = param_1;
    local_20 = param_2;
    local_18 = param_3;
    local_10 = param_4;
    iVar4 = (**(code **)(*(longlong *)(lVar2 + 0xa0) + 8))
                      (lVar2,0x44,*(undefined8 *)(lVar2 + 0x130),&local_28,0);
    param_3 = param_3 & 0xffffffff;
    if (iVar4 != 0) {
      param_3 = 1;
    }
    return param_3;
  }
  if ((int)param_3 < 0) {
    FUN_144bd5aa0(1,"%s: suspicious len int %d, ulong %lu\n","lws_write",param_3 & 0xffffffff,
                  param_3 & 0xffffffff);
    return 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x80) + 0x120);
    *plVar1 = *plVar1 + param_3;
  }
  pcVar3 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x68);
  if (pcVar3 == (code *)0x0) {
    uVar5 = FUN_144bd8e90();
    return uVar5;
  }
  uVar5 = (*pcVar3)();
  return uVar5;
}



// FUNCTION 144bd8e90 FUN_144bd8e90 body=834 status=ok
// SIG undefined FUN_144bd8e90(void)

ulonglong FUN_144bd8e90(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  size_t _Size;
  int iVar6;
  ulonglong uVar7;
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 uVar8;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  lVar5 = FUN_144bd68d0();
  iVar6 = (int)param_3;
  if ((*(byte *)(param_1 + 0x1bc) & 1) != 0) {
    FUN_144bd5ce0(1,param_2,param_3);
    FUN_144bd5aa0(1,
                  "** %p: vh: %s, prot: %s, role %s: Illegal back-to-back write of %lu detected...\n"
                  ,param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x160),
                  **(undefined8 **)(param_1 + 0xa0),**(undefined8 **)(param_1 + 0x68),iVar6);
    return 0xffffffff;
  }
  if (param_3 == 0) {
    return 0;
  }
  if ((*(short *)(param_1 + 0x70) == 0x11c) && (*(int *)(param_1 + 0x1ac) == 0)) {
    return param_3 & 0xffffffff;
  }
  if ((*(uint *)(param_1 + 0x1ac) != 0) &&
     ((param_2 < *(ulonglong *)(param_1 + 0x148) ||
      ((ulonglong)*(uint *)(param_1 + 0x1ac) +
       (ulonglong)*(uint *)(param_1 + 0x1a8) + *(ulonglong *)(param_1 + 0x148) < param_2)))) {
    FUN_144bd5ce0(1,param_2,param_3);
    FUN_144bd5aa0(1,
                  "** %p: vh: %s, prot: %s, Sending new %lu, pending truncated ...\n   It\'s illegal to do an lws_write outside of\n   the writable callback: fix your code\n"
                  ,param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x160),
                  **(undefined8 **)(param_1 + 0xa0),CONCAT44(uVar8,iVar6));
    return 0xffffffff;
  }
  if (((*(byte *)(param_1 + 0x1b8) & 2) == 0) && (*(longlong *)(param_1 + 0x178) == -1)) {
    FUN_144bd5aa0(2,"** error invalid sock but expected to send\n");
  }
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if (*(longlong *)(lVar1 + 0x30) == 0) {
    iVar4 = *(int *)(lVar1 + 0x18);
    if (iVar4 == 0) {
      iVar4 = *(int *)(lVar5 + 0x4bc);
    }
  }
  else {
    iVar4 = *(int *)(lVar1 + 0x30);
  }
  uVar7 = (ulonglong)(iVar4 + 0x14U);
  if (param_3 < iVar4 + 0x14U) {
    uVar7 = param_3 & 0xffffffff;
  }
  uVar3 = FUN_144f410d0(param_1,param_2,uVar7);
  *(uint *)(param_1 + 0x1bc) = *(uint *)(param_1 + 0x1bc) | 1;
  uVar7 = (ulonglong)uVar3;
  if (uVar3 == 0xfffffffc) {
    uVar7 = 0;
  }
  else if (uVar3 == 0xffffffff) {
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
    return 0xffffffff;
  }
  iVar4 = (int)uVar7;
  if (*(int *)(param_1 + 0x1ac) == 0) {
    if (uVar7 != param_3) {
      if ((*(longlong *)(param_1 + 0x148) == 0) ||
         (_Size = param_3 - uVar7, *(uint *)(param_1 + 0x1a4) < _Size)) {
        thunk_FUN_144f3cee0(*(longlong *)(param_1 + 0x148),0,"lws_free");
        _Size = param_3 - uVar7;
        *(int *)(param_1 + 0x1a4) = iVar6 - iVar4;
        lVar5 = thunk_FUN_144f3cee0(0,_Size,"truncated send alloc");
        *(longlong *)(param_1 + 0x148) = lVar5;
        if (lVar5 == 0) {
          FUN_144bd5aa0(1,"truncated send: unable to malloc %lu\n",iVar6 - iVar4);
          return 0xffffffff;
        }
      }
      *(undefined4 *)(param_1 + 0x1a8) = 0;
      *(int *)(param_1 + 0x1ac) = iVar6 - iVar4;
      memcpy(*(void **)(param_1 + 0x148),(void *)(uVar7 + param_2),_Size);
      puVar2 = *(undefined4 **)(param_1 + 0xe8);
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[5] = *puVar2;
        puVar2[6] = puVar2[1];
        puVar2[7] = puVar2[2];
        puVar2[8] = puVar2[3];
        *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x24) =
             *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x10);
      }
      FUN_144bd0240(param_1);
      uVar7 = param_3 & 0xffffffff;
    }
    return uVar7;
  }
  *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + iVar4;
  iVar4 = *(int *)(param_1 + 0x1ac) - iVar4;
  *(int *)(param_1 + 0x1ac) = iVar4;
  if (iVar4 == 0) {
    uVar7 = param_3 & 0xffffffff;
    if (*(short *)(param_1 + 0x70) == 0x11c) {
      return 0xffffffff;
    }
    if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
      FUN_144bd5aa0(4,"%s: partial completed, doing deferred transaction completed\n",
                    "lws_issue_raw");
      *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xfffffffe;
      uVar7 = FUN_144f3e9f0(param_1);
      return uVar7;
    }
  }
  FUN_144bd0240(param_1);
  return uVar7;
}



// FUNCTION 144bd91e0 FUN_144bd91e0 body=203 status=ok
// SIG undefined FUN_144bd91e0(void)

int FUN_144bd91e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    iVar2 = Ordinal_16(*(undefined8 *)(param_1 + 0x178),param_2,param_3,0);
  }
  else {
    *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x10) = 0x10;
    iVar2 = Ordinal_17(*(undefined8 *)(param_1 + 0x178),param_2,param_3,0,
                       *(longlong *)(param_1 + 0xe8),*(longlong *)(param_1 + 0xe8) + 0x10);
  }
  if (-1 < iVar2) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x80) + 0x118);
      *plVar1 = *plVar1 + (longlong)iVar2;
    }
    return iVar2;
  }
  iVar2 = Ordinal_111();
  if (iVar2 != 0x2733) {
    iVar2 = Ordinal_111();
    if (iVar2 != 0x2733) {
      iVar2 = Ordinal_111();
      if (iVar2 != 0x2714) {
        uVar3 = Ordinal_111();
        FUN_144bd5aa0(4,"error on reading from skt : %d\n",uVar3);
        return -1;
      }
    }
  }
  return -4;
}



// FUNCTION 144bd92b0 FUN_144bd92b0 body=180 status=ok
// SIG undefined FUN_144bd92b0(void)

undefined8 FUN_144bd92b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0xe8);
  if (lVar3 == 0) {
    uVar2 = Ordinal_19(*(undefined8 *)(param_1 + 0x178),param_2,param_3,0);
  }
  else {
    if (*(int *)(param_1 + 0x1ac) == 0) {
      uVar4 = *(undefined4 *)(lVar3 + 0x10);
    }
    else {
      uVar4 = *(undefined4 *)(lVar3 + 0x24);
      lVar3 = lVar3 + 0x14;
    }
    uVar2 = Ordinal_20(*(undefined8 *)(param_1 + 0x178),param_2,param_3,0,lVar3,uVar4);
  }
  if ((int)uVar2 < 0) {
    iVar1 = Ordinal_111();
    if (iVar1 != 0x2733) {
      iVar1 = Ordinal_111();
      if (iVar1 != 0x2733) {
        iVar1 = Ordinal_111();
        if (iVar1 != 0x2714) {
          return 0xffffffff;
        }
      }
    }
    iVar1 = Ordinal_111();
    if (iVar1 == 0x2733) {
      *(uint *)(param_1 + 0x1bc) = *(uint *)(param_1 + 0x1bc) | 0x1000;
    }
    uVar2 = 0xfffffffc;
  }
  return uVar2;
}



// FUNCTION 144bd9370 FUN_144bd9370 body=38 status=ok
// SIG undefined FUN_144bd9370(void)

int * FUN_144bd9370(int *param_1,ulonglong param_2)

{
  if ((((0x27 < param_2) && (param_1 != (int *)0x0)) && (*param_1 == 0x52414441)) &&
     ((*(byte *)(param_1 + 2) < 2 && (*(byte *)((longlong)param_1 + 9) < 0x21)))) {
    return param_1;
  }
  return (int *)0x0;
}



// FUNCTION 144bd93a0 FUN_144bd93a0 body=329 status=ok
// SIG undefined FUN_144bd93a0(void)

void FUN_144bd93a0(longlong param_1,ulonglong param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_3 != (undefined4 *)0x0) && (0x27 < param_2)) {
    uVar3 = (ulonglong)*(ushort *)(param_1 + 10);
    uVar5 = 0;
    uVar9 = *(byte *)(param_1 + 9) + 1 >> 1;
    local_58 = param_1 + 0x28U;
    if (*(short *)(param_1 + 0x20) == 0) {
      local_58 = uVar5;
    }
    uVar4 = local_58 + 0x40;
    if (local_58 == 0) {
      uVar4 = param_1 + 0x28U;
    }
    if ((uVar3 - param_1) + uVar4 <= param_2) {
      bVar6 = 0;
      bVar8 = (byte)uVar9;
      uVar7 = uVar5;
      if (bVar8 != 0) {
        do {
          if (uVar3 < 0x40) goto LAB_144bd94dc;
          lVar1 = FUN_144f45c40(uVar4,uVar3);
          uVar7 = uVar7 + (lVar1 + 7U & 0xfffffffffffffff8);
          local_50 = 0;
          local_48 = 0;
          uVar2 = FUN_144f46000(uVar4,uVar3,&local_50);
          if ((uVar2 == 0) || (uVar3 < uVar2)) goto LAB_144bd94dc;
          uVar3 = uVar3 - uVar2;
          uVar4 = uVar4 + uVar2;
          bVar6 = bVar6 + 1;
        } while (bVar6 < bVar8);
      }
      uVar7 = uVar7 + ((ulonglong)uVar9 + 6) * 8;
      if (local_58 != 0) {
        if (*(ushort *)(param_1 + 0x20) != 0) {
          uVar5 = (ulonglong)
                  ((((uint)*(byte *)(param_1 + 0xe) + (uint)*(byte *)(param_1 + 0xd)) *
                    (uint)*(ushort *)(param_1 + 0x20) + 0x3f >> 6) << 3);
        }
        uVar7 = uVar7 + 0x40 + uVar5;
      }
      if (uVar7 < 0xffffffff) {
        *param_3 = (int)uVar7;
      }
    }
  }
LAB_144bd94dc:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 144bd9510 FUN_144bd9510 body=952 status=ok
// SIG undefined FUN_144bd9510(void)

void FUN_144bd9510(int *param_1,ulonglong param_2,undefined8 *param_3,ulonglong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *_Dst;
  byte bVar13;
  byte bVar14;
  undefined1 auStack_a8 [32];
  ulonglong *local_88;
  ulonglong local_78;
  uint local_70;
  ulonglong local_68;
  int *local_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = param_4;
  local_58 = param_2;
  if ((((0x2f < param_4) && (0x27 < param_2)) && (param_1 != (int *)0x0)) &&
     (((*param_1 == 0x52414441 && (*(byte *)(param_1 + 2) < 2)) &&
      (*(byte *)((longlong)param_1 + 9) < 0x21)))) {
    uVar2 = *(undefined8 *)(param_1 + 2);
    *param_3 = *(undefined8 *)param_1;
    param_3[1] = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 6);
    param_3[2] = *(undefined8 *)(param_1 + 4);
    param_3[3] = uVar2;
    param_3[4] = *(undefined8 *)(param_1 + 8);
    uVar1 = *(ushort *)((longlong)param_3 + 10);
    uVar9 = (ulonglong)uVar1;
    uVar8 = uVar1 + 0x28;
    if (*(ushort *)(param_3 + 4) != 0) {
      uVar8 = uVar1 + 0x68 +
              (((uint)*(byte *)((longlong)param_3 + 0xe) + (uint)*(byte *)((longlong)param_3 + 0xd))
               * (uint)*(ushort *)(param_3 + 4) + 0x3f >> 6) * 8;
    }
    if ((uVar8 <= param_2) &&
       (local_70 = *(byte *)((longlong)param_3 + 9) + 1 >> 1, (uint)uVar1 <= local_70 << 7)) {
      uVar11 = (ulonglong)*(ushort *)((longlong)param_1 + 10);
      uVar8 = *(byte *)((longlong)param_1 + 9) + 1 >> 1;
      local_60 = param_1 + 10;
      if ((short)param_1[8] == 0) {
        local_60 = (int *)0x0;
      }
      piVar10 = local_60 + 0x10;
      if (local_60 == (int *)0x0) {
        piVar10 = param_1 + 10;
      }
      if ((longlong)piVar10 + (uVar11 - (longlong)param_1) <= param_2) {
        bVar13 = 0;
        uVar7 = 0;
        local_78 = 0;
        bVar14 = (byte)uVar8;
        if (bVar14 != 0) {
          do {
            if (uVar11 < 0x40) goto LAB_144bd98bb;
            lVar3 = FUN_144f45c40(piVar10,uVar11);
            local_78 = local_78 + (lVar3 + 7U & 0xfffffffffffffff8);
            local_50 = 0;
            local_48 = 0;
            uVar4 = FUN_144f46000(piVar10,uVar11,&local_50);
            if ((uVar4 == 0) || (uVar11 < uVar4)) goto LAB_144bd98bb;
            uVar11 = uVar11 - uVar4;
            piVar10 = (int *)((longlong)piVar10 + uVar4);
            bVar13 = bVar13 + 1;
          } while (bVar13 < bVar14);
        }
        uVar11 = local_78 + ((ulonglong)uVar8 + 6) * 8;
        if (local_60 != (int *)0x0) {
          if (*(ushort *)(param_1 + 8) != 0) {
            uVar7 = (((uint)*(byte *)((longlong)param_1 + 0xe) +
                     (uint)*(byte *)((longlong)param_1 + 0xd)) * (uint)*(ushort *)(param_1 + 8) +
                     0x3f >> 6) << 3;
          }
          uVar11 = uVar11 + 0x40 + (ulonglong)uVar7;
        }
        if (((uVar11 < 0xffffffff) && ((uVar11 & 0xffffffff) <= local_68)) &&
           (puVar12 = param_3 + (ulonglong)(uint)((int)(*(byte *)((longlong)param_3 + 9) + 1) >> 1)
                                + 6, (longlong)puVar12 + uVar9 < local_68 + (longlong)param_3)) {
          lVar3 = 0x28;
          if (*(short *)(param_3 + 4) != 0) {
            lVar3 = 0x68;
          }
          bVar13 = 0;
          lVar3 = lVar3 + (longlong)param_1;
          if ((char)local_70 != '\0') {
            do {
              if (((uint)uVar9 < 0x40) ||
                 (lVar5 = FUN_144f45c40(lVar3,uVar9),
                 local_68 + (longlong)param_3 < (ulonglong)(lVar5 + (longlong)puVar12)))
              goto LAB_144bd98bb;
              local_88 = &local_78;
              local_78 = 0;
              lVar6 = FUN_144f45cc0(lVar3,uVar9,puVar12,lVar5);
              param_3[(ulonglong)bVar13 + 6] = lVar6;
              if ((lVar6 == 0) || (uVar9 < local_78)) goto LAB_144bd98bb;
              lVar3 = lVar3 + local_78;
              uVar9 = (ulonglong)((uint)uVar9 - (int)local_78);
              bVar13 = bVar13 + 1;
              puVar12 = (undefined8 *)((longlong)puVar12 + (lVar5 + 7U & 0xfffffffffffffff8));
            } while (bVar13 < (byte)local_70);
          }
          _Dst = (undefined8 *)0x0;
          if (((*param_1 == 0x52414441) && (*(byte *)(param_1 + 2) < 2)) &&
             ((*(byte *)((longlong)param_1 + 9) < 0x21 &&
              ((((short)param_1[8] != 0 && (0x67 < local_58)) && (param_1 + 10 != (int *)0x0)))))) {
            param_3[5] = (longlong)puVar12 - (longlong)param_3;
            uVar2 = *(undefined8 *)(param_1 + 0xc);
            if ((longlong)puVar12 - (longlong)param_3 == 0) {
              puVar12 = _Dst;
            }
            *puVar12 = *(undefined8 *)(param_1 + 10);
            puVar12[1] = uVar2;
            uVar2 = *(undefined8 *)(param_1 + 0x10);
            puVar12[2] = *(undefined8 *)(param_1 + 0xe);
            puVar12[3] = uVar2;
            uVar2 = *(undefined8 *)(param_1 + 0x14);
            puVar12[4] = *(undefined8 *)(param_1 + 0x12);
            puVar12[5] = uVar2;
            uVar2 = *(undefined8 *)(param_1 + 0x18);
            puVar12[6] = *(undefined8 *)(param_1 + 0x16);
            puVar12[7] = uVar2;
            if (*(ushort *)(param_1 + 8) == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = (((uint)*(byte *)((longlong)param_1 + 0xe) +
                       (uint)*(byte *)((longlong)param_1 + 0xd)) * (uint)*(ushort *)(param_1 + 8) +
                       0x3f >> 6) << 3;
              param_1 = (int *)((longlong)param_1 +
                               (ulonglong)*(ushort *)((longlong)param_1 + 10) + 0x68);
            }
            if (param_3[5] != 0) {
              _Dst = (undefined8 *)((longlong)param_3 + param_3[5] + 0x40);
            }
            memcpy(_Dst,param_1,(ulonglong)uVar8);
          }
        }
      }
    }
  }
LAB_144bd98bb:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144bd98e0 FUN_144bd98e0 body=152 status=ok
// SIG undefined FUN_144bd98e0(void)

undefined8 FUN_144bd98e0(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
    if (*(ulonglong *)(param_1 + 0x10) <= param_2) {
      param_2 = *(ulonglong *)(param_1 + 0x10) - 1;
    }
    lVar1 = *(longlong *)(param_1 + 0x28) + param_1;
    if (*(ushort *)(param_1 + 0x20) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (((uint)*(byte *)(param_1 + 0xe) + (uint)*(byte *)(param_1 + 0xd)) *
               (uint)*(ushort *)(param_1 + 0x20) + 0x3f >> 6) << 3;
    }
    uVar2 = FUN_144bd9d90(param_1,lVar1,lVar1 + 0x40,iVar3,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144bd9980 FUN_144bd9980 body=243 status=ok
// SIG undefined FUN_144bd9980(void)

undefined8 FUN_144bd9980(longlong param_1,int *param_2,ulonglong param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  ulonglong uVar4;
  ushort uVar5;
  
  if (param_3 < 9) {
    if (param_4 == (uint *)0x0) {
      return 1;
    }
    *param_4 = 9;
    return 1;
  }
  if (*param_2 == 0x52414441) {
    uVar2 = param_2[1];
    if (param_4 != (uint *)0x0) {
      *param_4 = uVar2;
    }
    if (uVar2 <= param_3) {
      return 0;
    }
    return 1;
  }
  if ((char)*param_2 == 'U') {
    puVar3 = (ushort *)((longlong)param_2 + 1);
    uVar4 = param_3 - 1;
    uVar5 = 0;
    if (2 < *(byte *)(param_1 + 9)) {
      uVar5 = *puVar3;
      puVar3 = (ushort *)((longlong)param_2 + 3);
      uVar4 = param_3 - 3;
    }
    iVar1 = FUN_144f46120(*(undefined8 *)(param_1 + 0x30),puVar3,uVar4);
    if (iVar1 < 0) {
      if (iVar1 == -2) {
        if (param_4 == (uint *)0x0) {
          return 1;
        }
        *param_4 = 0x12;
        return 1;
      }
    }
    else {
      uVar2 = (uint)uVar5 + iVar1;
      if (uVar2 <= *(ushort *)(param_1 + 0x22)) {
        if (param_4 != (uint *)0x0) {
          *param_4 = ((int)param_3 - (int)uVar4) + uVar2;
        }
        if (uVar4 < uVar2) {
          return 1;
        }
        if (uVar4 <= uVar2) {
          return 0;
        }
        if (*(char *)((ulonglong)uVar2 + (longlong)puVar3) == 'U') {
          return 0;
        }
      }
    }
  }
  return 2;
}



// FUNCTION 144bd9a80 FUN_144bd9a80 body=66 status=ok
// SIG undefined FUN_144bd9a80(void)

void FUN_144bd9a80(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  uVar1 = *(byte *)(param_1 + 9) + 1 >> 1;
  if ((char)uVar1 != '\0') {
    puVar2 = (undefined8 *)(param_1 + 0x30);
    uVar3 = (ulonglong)uVar1;
    do {
      FUN_144f461e0(*puVar2);
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 144bd9ad0 FUN_144bd9ad0 body=375 status=ok
// SIG undefined FUN_144bd9ad0(void)

ulonglong FUN_144bd9ad0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       longlong param_5,longlong *param_6)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong local_res18;
  longlong local_48;
  longlong local_40;
  
  lVar7 = param_2 + 1;
  uVar4 = param_3 - 1;
  bVar8 = (byte)(*(byte *)(param_1 + 9) + 1 >> 1);
  if (bVar8 < 2) {
    uVar3 = 0;
    if (bVar8 == 0) goto LAB_144bd9c01;
  }
  else {
    lVar7 = param_2 + 3;
    uVar4 = param_3 - 3;
  }
  uVar6 = 0;
  local_48 = param_4;
  uVar3 = 0;
  do {
    local_40 = local_48 + param_5 * 4;
    lVar9 = local_40 + param_5 * 4;
    uVar1 = FUN_144f46120(*(undefined8 *)(param_1 + 0x30 + uVar6 * 8),lVar7,uVar4);
    if (uVar4 < uVar1) {
      return 0xfffffffe;
    }
    local_res18 = 0;
    iVar2 = FUN_144f46080(*(undefined8 *)(param_1 + uVar6 * 8 + 0x30),lVar7,uVar4,&local_res18,
                          &local_48,0x400);
    if (iVar2 == -1) {
      *param_6 = 0;
      return 0xffffffff;
    }
    if (iVar2 < 0) {
      return 0xfffffffe;
    }
    if (uVar3 != 0) {
      if (iVar2 != (short)uVar3) {
        return 0xfffffffe;
      }
      if (0x400 < (short)uVar3) {
        return 0xfffffffe;
      }
    }
    uVar3 = (ushort)iVar2;
    if (uVar4 < local_res18) {
      return 0xfffffffe;
    }
    lVar7 = lVar7 + local_res18;
    uVar4 = uVar4 - local_res18;
    bVar5 = (char)uVar6 + 1;
    uVar6 = (ulonglong)bVar5;
    local_48 = lVar9;
  } while (bVar5 < bVar8);
LAB_144bd9c01:
  *param_6 = lVar7 - param_2;
  return (ulonglong)uVar3;
}



// FUNCTION 144bd9c50 FUN_144bd9c50 body=177 status=ok
// SIG undefined FUN_144bd9c50(void)

undefined8
FUN_144bd9c50(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
             ulonglong *param_5)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  param_4 = param_4 & 0xffffffff;
  uVar5 = param_3 >> 6;
  lVar6 = param_3 + uVar5 * -0x40;
  if (param_2 <= uVar5) {
    return 0;
  }
  uVar4 = 0x40 - lVar6;
  if (param_4 <= uVar4) {
    uVar4 = param_4;
  }
  bVar1 = (byte)uVar4;
  uVar3 = (ulonglong)(*(longlong *)(param_1 + uVar5 * 8) << ((0x40 - bVar1) - (char)lVar6 & 0x3f))
          >> (0x40 - bVar1 & 0x3f);
  if (uVar4 != param_4) {
    if (param_2 <= uVar5 + 1) {
      return 0;
    }
    bVar2 = (bVar1 - (char)param_4) + 0x40;
    uVar3 = uVar3 | ((ulonglong)(*(longlong *)(param_1 + (uVar5 + 1) * 8) << (bVar2 & 0x3f)) >>
                    (bVar2 & 0x3f)) << (bVar1 & 0x3f);
  }
  *param_5 = uVar3;
  return 1;
}


