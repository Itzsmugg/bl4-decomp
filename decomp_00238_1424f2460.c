// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1424f2460 png_create_read_struct_2 body=829 status=ok
// SIG undefined png_create_read_struct_2(void)

void png_create_read_struct_2
               (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  HANDLE hProcess;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  undefined1 local_d8 [32];
  undefined8 local_b8;
  int local_a4;
  longlong local_a0;
  undefined1 local_98 [64];
  undefined1 local_58 [16];
  ulonglong local_48;
  
                    /* 0x24f2460  641  png_create_read_struct_2 */
  local_48 = DAT_14c707940 ^ (ulonglong)local_58;
  local_a4 = 0;
  local_a0 = FUN_1424f5d70(1,param_6,param_5);
  if (local_a0 == 0) goto LAB_1424f2791;
  *(undefined4 *)(local_a0 + 0x45c) = 1000000;
  *(undefined4 *)(local_a0 + 0x460) = 1000000;
  *(undefined4 *)(local_a0 + 0x464) = 0;
  uVar4 = png_set_longjmp_fn(local_a0,longjmp,0x100);
  iVar2 = __intrinsic_setjmp(uVar4,local_d8);
  if (iVar2 != 0) {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,0);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  png_set_mem_fn(local_a0,param_5,param_6,param_7);
  png_set_error_fn(local_a0,param_2,param_3,param_4);
  if (param_1 == (char *)0x0) {
    *(byte *)(local_a0 + 0x15a) = *(byte *)(local_a0 + 0x15a) | 2;
  }
  else {
    lVar7 = 0;
    do {
      cVar1 = param_1[lVar7];
      lVar5 = png_get_header_ver(0);
      if (cVar1 != *(char *)(lVar5 + lVar7)) {
        *(byte *)(local_a0 + 0x15a) = *(byte *)(local_a0 + 0x15a) | 2;
      }
      lVar5 = png_get_header_ver(0);
      pcVar6 = (char *)(lVar5 + lVar7);
      lVar7 = lVar7 + 1;
    } while (*pcVar6 != '\0');
  }
  if ((*(byte *)(local_a0 + 0x15a) & 2) != 0) {
    if ((param_1 != (char *)0x0) &&
       (cVar1 = *param_1, pcVar6 = (char *)png_get_header_ver(0), cVar1 == *pcVar6)) {
      cVar1 = *param_1;
      if (cVar1 == '1') {
        cVar1 = param_1[2];
        lVar7 = png_get_header_ver(0);
        if (cVar1 != *(char *)(lVar7 + 2)) goto LAB_1424f25ef;
        cVar1 = *param_1;
      }
      if ((cVar1 != '0') || ('8' < param_1[2])) goto LAB_1424f262e;
    }
LAB_1424f25ef:
    if (param_1 != (char *)0x0) {
      local_b8 = png_get_header_ver(0);
      FUN_1424ef650(local_98,0x50,"Application built with libpng-%.20s but running with %.20s",
                    param_1);
      png_warning(local_a0,local_98);
    }
    local_a4 = 1;
  }
LAB_1424f262e:
  if (local_a4 == 0) {
    *(undefined4 *)(local_a0 + 0x1c0) = 0x2000;
    uVar4 = png_malloc_warn(local_a0,*(undefined4 *)(local_a0 + 0x1c0));
    *(undefined8 *)(local_a0 + 0x1b8) = uVar4;
    if (*(longlong *)(local_a0 + 0x1b8) == 0) {
      local_a4 = 1;
    }
  }
  *(code **)(local_a0 + 400) = FUN_1424ef760;
  *(code **)(local_a0 + 0x198) = png_free;
  *(longlong *)(local_a0 + 0x1a0) = local_a0;
  if (local_a4 == 0) {
    uVar3 = FUN_144b4fcd0(local_a0 + 0x160,"1.2.8",0x58);
    switch(uVar3) {
    case 0:
      goto switchD_1424f26e3_caseD_0;
    case 0xfffffffa:
      pcVar6 = "zlib version error";
      break;
    default:
      pcVar6 = "Unknown zlib error";
      break;
    case 0xfffffffc:
      pcVar6 = "zlib memory error";
      break;
    case 0xfffffffe:
      pcVar6 = "zlib stream error";
    }
    png_warning(local_a0,pcVar6);
    local_a4 = 1;
  }
switchD_1424f26e3_caseD_0:
  if (local_a4 == 0) {
    *(undefined8 *)(local_a0 + 0x170) = *(undefined8 *)(local_a0 + 0x1b8);
    *(undefined4 *)(local_a0 + 0x178) = *(undefined4 *)(local_a0 + 0x1c0);
    png_set_read_fn(local_a0,0,0);
  }
  else {
    png_free();
    *(undefined8 *)(local_a0 + 0x1b8) = 0;
    FUN_1424f5e20(local_a0,param_7,param_5);
  }
LAB_1424f2791:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)local_58);
}



// FUNCTION 1424f27d0 png_read_info body=924 status=ok
// SIG undefined png_read_info(void)

void png_read_info(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  
                    /* 0x24f27d0  737  png_read_info */
  if ((param_1 == 0) || (param_2 == 0)) {
    return;
  }
  FUN_14258fe20(param_1,param_2);
  piVar1 = (int *)(param_1 + 0x254);
LAB_1424f281e:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar4 = FUN_14258fed0(param_1);
          if ((*(int *)(param_1 + 0x254) == 0x54414449) && ((*(uint *)(param_1 + 0x154) & 8) != 0))
          {
            *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 0x2000;
          }
          if (*piVar1 != 0x52444849) break;
          FUN_142590540(param_1,param_2,uVar4);
        }
        if (*piVar1 != 0x444e4549) break;
        FUN_1425908e0(param_1,param_2,uVar4);
      }
      iVar5 = png_handle_as_unknown(param_1,piVar1);
      if (iVar5 == 0) break;
      if (*piVar1 == 0x54414449) {
        *(byte *)(param_1 + 0x154) = *(byte *)(param_1 + 0x154) | 4;
      }
      FUN_142592c80(param_1,param_2,uVar4);
      if (*(int *)(param_1 + 0x254) == 0x45544c50) {
        *(byte *)(param_1 + 0x154) = *(byte *)(param_1 + 0x154) | 2;
      }
      else if (*piVar1 == 0x54414449) {
        if ((*(uint *)(param_1 + 0x154) & 1) == 0) {
LAB_1424f2b64:
          pcVar6 = "Missing IHDR before IDAT";
        }
        else {
          if ((*(uint *)(param_1 + 0x154) & 2) != 0) {
            return;
          }
          if (*(char *)(param_1 + 0x25e) != '\x03') {
            return;
          }
LAB_1424f2b6d:
          pcVar6 = "Missing PLTE before IDAT";
        }
        png_error(param_1,pcVar6);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    if (*piVar1 != 0x45544c50) {
      if (*piVar1 == 0x54414449) {
        uVar2 = *(uint *)(param_1 + 0x154);
        if ((uVar2 & 1) == 0) goto LAB_1424f2b64;
        if (((uVar2 & 2) != 0) || (*(char *)(param_1 + 0x25e) != '\x03')) {
          *(undefined4 *)(param_1 + 0x240) = uVar4;
          *(uint *)(param_1 + 0x154) = uVar2 | 4;
          return;
        }
        goto LAB_1424f2b6d;
      }
      if (*piVar1 == 0x44474b62) {
        FUN_142591a60(param_1,param_2,uVar4);
      }
      else if (*piVar1 == 0x4d524863) {
        FUN_142590c20(param_1,param_2,uVar4);
      }
      else if (*piVar1 == 0x414d4167) {
        FUN_142590940(param_1,param_2,uVar4);
      }
      else if (*piVar1 == 0x54534968) {
        FUN_142591c50(param_1,param_2,uVar4);
      }
      else if (*piVar1 == 0x7346466f) {
        FUN_142591e90(param_1,param_2,uVar4);
      }
      else if (*piVar1 == 0x4c414370) {
        FUN_142591f80(param_1,param_2,uVar4);
      }
      else if (*piVar1 == 0x4c414373) {
        FUN_142592260(param_1,param_2,uVar4);
      }
      else if (*piVar1 == 0x73594870) {
        FUN_142591da0(param_1,param_2,uVar4);
      }
      else if (*piVar1 == 0x54494273) {
        FUN_142590ac0(param_1,param_2,uVar4);
      }
      else if (*piVar1 == 0x42475273) {
        FUN_142591090(param_1,param_2,uVar4);
      }
      else if (*piVar1 == 0x50434369) {
        FUN_1425912a0(param_1,param_2,uVar4);
      }
      else if (*piVar1 == 0x544c5073) {
        FUN_142591530(param_1,param_2,uVar4);
      }
      else if (*piVar1 == 0x74584574) {
        FUN_142592540(param_1,param_2,uVar4);
      }
      else if (*piVar1 == 0x454d4974) {
        FUN_142592440(param_1,param_2,uVar4);
      }
      else if (*piVar1 == 0x534e5274) {
        FUN_142591820(param_1,param_2,uVar4);
      }
      else if (*piVar1 == 0x7458547a) {
        FUN_142592750(param_1,param_2,uVar4);
      }
      else if (*piVar1 == 0x74585469) {
        FUN_1425929a0(param_1,param_2,uVar4);
      }
      else {
        FUN_142592c80(param_1,param_2,uVar4);
      }
      goto LAB_1424f281e;
    }
    FUN_1425906f0(param_1,param_2,uVar4);
  } while( true );
}



// FUNCTION 1424f2b80 png_read_update_info body=75 status=ok
// SIG undefined png_read_update_info(void)

void png_read_update_info(longlong param_1,undefined8 param_2)

{
                    /* 0x24f2b80  741  png_read_update_info */
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x158) & 0x40) == 0) {
      FUN_142594860(param_1);
    }
    else {
      png_warning(param_1,"Ignoring extra png_read_update_info() call; row buffer not reallocated");
    }
    FUN_1424faa00(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1424f2bd0 png_start_read_image body=32 status=ok
// SIG undefined png_start_read_image(void)

void png_start_read_image(longlong param_1)

{
                    /* 0x24f2bd0  827  png_start_read_image */
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x158) & 0x40) == 0) {
    FUN_142594860();
    return;
  }
  png_warning(param_1,"Ignoring extra png_start_read_image() call; row buffer not reallocated");
  return;
}



// FUNCTION 1424f2bf0 png_read_row body=1140 status=ok
// SIG undefined png_read_row(void)

void png_read_row(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
                    /* 0x24f2bf0  739  png_read_row */
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x158) & 0x40) == 0) {
    FUN_142594860(param_1);
  }
  if ((*(char *)(param_1 + 0x25b) != '\0') && ((*(byte *)(param_1 + 0x15c) & 2) != 0)) {
    uVar4 = *(uint *)(param_1 + 500);
    switch(*(undefined1 *)(param_1 + 0x25c)) {
    case 0:
      if ((uVar4 & 7) != 0) {
        if (param_3 == 0) goto LAB_1424f301b;
LAB_1424f2f9e:
        uVar9 = 0xff;
LAB_1424f3016:
        FUN_142592e30(param_1,param_3,uVar9);
LAB_1424f301b:
        FUN_1425945a0(param_1);
        return;
      }
      break;
    case 1:
      if (((uVar4 & 7) != 0) || (*(uint *)(param_1 + 0x1d8) < 5)) {
        if (param_3 == 0) goto LAB_1424f301b;
        uVar9 = 0xf;
        goto LAB_1424f3016;
      }
      break;
    case 2:
      if ((uVar4 & 7) != 4) {
        if (param_3 == 0) goto LAB_1424f301b;
        uVar4 = uVar4 & 4;
joined_r0x0001424f2f7b:
        if (uVar4 == 0) goto LAB_1424f301b;
        goto LAB_1424f2f9e;
      }
      break;
    case 3:
      if (((uVar4 & 3) != 0) || (*(uint *)(param_1 + 0x1d8) < 3)) {
        if (param_3 == 0) goto LAB_1424f301b;
        uVar9 = 0x33;
        goto LAB_1424f3016;
      }
      break;
    case 4:
      if ((uVar4 & 3) != 2) {
        if (param_3 == 0) goto LAB_1424f301b;
        uVar4 = uVar4 & 2;
        goto joined_r0x0001424f2f7b;
      }
      break;
    case 5:
      if (((uVar4 & 1) != 0) || (*(uint *)(param_1 + 0x1d8) < 2)) {
        if (param_3 == 0) goto LAB_1424f301b;
        uVar9 = 0x55;
        goto LAB_1424f3016;
      }
      break;
    default:
      if ((uVar4 & 1) == 0) goto LAB_1424f301b;
    }
  }
  if ((*(byte *)(param_1 + 0x154) & 4) == 0) {
    pcVar6 = "Invalid attempt to read row data";
LAB_1424f303d:
    png_error(param_1,pcVar6);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x200);
  bVar1 = *(byte *)(param_1 + 0x261);
  if ((ulonglong)bVar1 < 8) {
    iVar3 = (int)((ulonglong)*(uint *)(param_1 + 0x1f0) * (ulonglong)bVar1 + 7 >> 3);
  }
  else {
    iVar3 = (uint)(bVar1 >> 3) * *(uint *)(param_1 + 0x1f0);
  }
  *(int *)(param_1 + 0x178) = iVar3 + 1;
  do {
    if (*(int *)(param_1 + 0x168) == 0) {
      uVar4 = *(uint *)(param_1 + 0x240);
      while (uVar4 == 0) {
        FUN_142590010(param_1,0);
        uVar4 = FUN_14258fed0(param_1);
        *(uint *)(param_1 + 0x240) = uVar4;
        if (*(int *)(param_1 + 0x254) != 0x54414449) {
          pcVar6 = "Not enough image data";
          goto LAB_1424f303d;
        }
      }
      uVar7 = *(uint *)(param_1 + 0x1c0);
      *(uint *)(param_1 + 0x168) = uVar7;
      *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x1b8);
      if (uVar4 < uVar7) {
        *(uint *)(param_1 + 0x168) = uVar4;
        uVar7 = uVar4;
      }
      FUN_14258ffd0(param_1,*(undefined8 *)(param_1 + 0x1b8),uVar7);
      *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) - *(int *)(param_1 + 0x168);
    }
    iVar3 = FUN_144b4e2a0(param_1 + 0x160,1);
    if (iVar3 != 0) {
      if (iVar3 != 1) {
        pcVar6 = "Decompression error";
        if (*(char **)(param_1 + 0x180) != (char *)0x0) {
          pcVar6 = *(char **)(param_1 + 0x180);
        }
        goto LAB_1424f303d;
      }
      if (((*(int *)(param_1 + 0x178) != 0) || (*(int *)(param_1 + 0x168) != 0)) ||
         (*(int *)(param_1 + 0x240) != 0)) {
        png_benign_error(param_1,"Extra compressed data");
      }
      *(byte *)(param_1 + 0x154) = *(byte *)(param_1 + 0x154) | 8;
      *(byte *)(param_1 + 0x158) = *(byte *)(param_1 + 0x158) | 0x20;
      break;
    }
  } while (*(int *)(param_1 + 0x178) != 0);
  *(undefined2 *)(param_1 + 0x238) = *(undefined2 *)(param_1 + 0x25e);
  uVar4 = *(uint *)(param_1 + 0x1f0);
  *(uint *)(param_1 + 0x228) = uVar4;
  *(undefined1 *)(param_1 + 0x23a) = *(undefined1 *)(param_1 + 0x262);
  bVar1 = *(byte *)(param_1 + 0x261);
  *(byte *)(param_1 + 0x23b) = bVar1;
  if ((ulonglong)bVar1 < 8) {
    uVar5 = (ulonglong)bVar1 * (ulonglong)uVar4 + 7 >> 3;
  }
  else {
    uVar5 = (ulonglong)(bVar1 >> 3) * (ulonglong)uVar4;
  }
  *(ulonglong *)(param_1 + 0x230) = uVar5;
  pcVar6 = *(char **)(param_1 + 0x200);
  if (*pcVar6 != '\0') {
    FUN_142593650(param_1,param_1 + 0x228,pcVar6 + 1,*(longlong *)(param_1 + 0x1f8) + 1,*pcVar6);
    pcVar6 = *(char **)(param_1 + 0x200);
  }
  memcpy(*(void **)(param_1 + 0x1f8),pcVar6,*(longlong *)(param_1 + 0x1e8) + 1);
  if (((*(byte *)(param_1 + 0x418) & 4) != 0) && (*(char *)(param_1 + 0x41c) == '@')) {
    FUN_1424ff1a0(param_1 + 0x228,*(longlong *)(param_1 + 0x200) + 1);
  }
  if (*(int *)(param_1 + 0x15c) != 0) {
    FUN_1424fac60(param_1);
  }
  if ((*(char *)(param_1 + 0x25b) == '\0') || ((*(byte *)(param_1 + 0x15c) & 2) == 0)) {
    if (param_2 != 0) {
      FUN_142592e30(param_1,param_2,0xff);
    }
    if (param_3 == 0) goto LAB_1424f2f25;
    uVar8 = 0xff;
    param_2 = param_3;
  }
  else {
    if (*(byte *)(param_1 + 0x25c) < 6) {
      FUN_1425931b0(param_1);
    }
    if (param_3 != 0) {
      FUN_142592e30(param_1,param_3,
                    *(undefined4 *)(&DAT_14996f5c0 + (ulonglong)*(byte *)(param_1 + 0x25c) * 4));
    }
    if (param_2 == 0) goto LAB_1424f2f25;
    uVar8 = *(undefined4 *)(&DAT_14996f5e0 + (ulonglong)*(byte *)(param_1 + 0x25c) * 4);
  }
  FUN_142592e30(param_1,param_2,uVar8);
LAB_1424f2f25:
  FUN_1425945a0(param_1);
  if (*(code **)(param_1 + 0x300) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001424f2f53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x300))
            (param_1,*(undefined4 *)(param_1 + 500),*(undefined1 *)(param_1 + 0x25c));
  return;
}



// FUNCTION 1424f3080 png_read_rows body=194 status=ok
// SIG undefined png_read_rows(void)

void png_read_rows(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
                    /* 0x24f3080  740  png_read_rows */
  if (param_1 != 0) {
    if ((param_2 == 0) || (param_3 == 0)) {
      if (param_2 == 0) {
        if ((param_3 != 0) && (param_4 != 0)) {
          lVar1 = 0;
          do {
            png_read_row(param_1,0,*(undefined8 *)(param_3 + lVar1 * 8));
            lVar1 = lVar1 + 1;
          } while (param_4 != (int)lVar1);
        }
      }
      else if (param_4 != 0) {
        lVar1 = 0;
        do {
          png_read_row(param_1,*(undefined8 *)(param_2 + lVar1 * 8),0);
          lVar1 = lVar1 + 1;
        } while (param_4 != (int)lVar1);
      }
    }
    else if (param_4 != 0) {
      lVar1 = 0;
      do {
        png_read_row(param_1,*(undefined8 *)(param_2 + lVar1 * 8),
                     *(undefined8 *)(param_3 + lVar1 * 8));
        lVar1 = lVar1 + 1;
      } while (param_4 != (int)lVar1);
    }
  }
  return;
}



// FUNCTION 1424f3150 png_read_image body=237 status=ok
// SIG undefined png_read_image(void)

void png_read_image(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
                    /* 0x24f3150  736  png_read_image */
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x158) & 0x40) == 0) {
      iVar2 = png_set_interlace_handling(param_1);
      if ((*(byte *)(param_1 + 0x158) & 0x40) == 0) {
        FUN_142594860(param_1);
      }
      else {
        png_warning(param_1,"Ignoring extra png_start_read_image() call; row buffer not reallocated"
                   );
      }
    }
    else {
      if ((*(char *)(param_1 + 0x25b) != '\0') && ((*(byte *)(param_1 + 0x15c) & 2) == 0)) {
        png_warning(param_1,"Interlace handling should be turned on when using png_read_image");
        *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1dc);
      }
      iVar2 = png_set_interlace_handling(param_1);
    }
    if (0 < iVar2) {
      iVar1 = *(int *)(param_1 + 0x1dc);
      iVar4 = 0;
      do {
        if (iVar1 != 0) {
          lVar3 = 0;
          do {
            png_read_row(param_1,*(undefined8 *)(param_2 + lVar3 * 8),0);
            lVar3 = lVar3 + 1;
          } while (iVar1 != (int)lVar3);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != iVar2);
    }
  }
  return;
}



// FUNCTION 1424f3240 png_read_end body=1177 status=ok
// SIG undefined png_read_end(void)

/* WARNING: Type propagation algorithm not settling */

void png_read_end(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
                    /* 0x24f3240  735  png_read_end */
  if (param_1 != 0) {
    FUN_142590010(param_1,0);
    piVar1 = (int *)(param_1 + 0x254);
    do {
      while (iVar3 = FUN_14258fed0(param_1), *(int *)(param_1 + 0x254) != 0x52444849) {
        if (*piVar1 == 0x444e4549) {
          FUN_1425908e0(param_1,param_2,iVar3);
          bVar2 = *(byte *)(param_1 + 0x154);
          goto joined_r0x0001424f34a2;
        }
        iVar4 = png_handle_as_unknown(param_1,piVar1);
        bVar5 = *(int *)(param_1 + 0x254) == 0x54414449;
        if (iVar4 != 0) {
          if ((bVar5) && ((iVar3 != 0 || ((*(byte *)(param_1 + 0x155) & 0x20) != 0)))) {
            png_benign_error(param_1,"Too many IDATs found");
          }
          FUN_142592c80(param_1,param_2,iVar3);
          if (*(int *)(param_1 + 0x254) == 0x45544c50) {
            *(byte *)(param_1 + 0x154) = *(byte *)(param_1 + 0x154) | 2;
            bVar2 = *(byte *)(param_1 + 0x154);
          }
          else {
            bVar2 = *(byte *)(param_1 + 0x154);
          }
          goto joined_r0x0001424f34a2;
        }
        if (bVar5) {
          if ((iVar3 != 0) || ((*(byte *)(param_1 + 0x155) & 0x20) != 0)) {
            png_benign_error(param_1,"Too many IDATs found");
          }
          FUN_142590010(param_1,iVar3);
          bVar2 = *(byte *)(param_1 + 0x154);
          goto joined_r0x0001424f34a2;
        }
        if (*piVar1 == 0x45544c50) {
          FUN_1425906f0(param_1,param_2,iVar3);
          bVar2 = *(byte *)(param_1 + 0x154);
          goto joined_r0x0001424f34a2;
        }
        if (*piVar1 == 0x44474b62) {
          FUN_142591a60(param_1,param_2,iVar3);
          bVar2 = *(byte *)(param_1 + 0x154);
          goto joined_r0x0001424f34a2;
        }
        if (*piVar1 == 0x4d524863) {
          FUN_142590c20(param_1,param_2,iVar3);
          bVar2 = *(byte *)(param_1 + 0x154);
          goto joined_r0x0001424f34a2;
        }
        if (*piVar1 == 0x414d4167) {
          FUN_142590940(param_1,param_2,iVar3);
          bVar2 = *(byte *)(param_1 + 0x154);
          goto joined_r0x0001424f34a2;
        }
        if (*piVar1 == 0x54534968) {
          FUN_142591c50(param_1,param_2,iVar3);
          bVar2 = *(byte *)(param_1 + 0x154);
          goto joined_r0x0001424f34a2;
        }
        if (*piVar1 == 0x7346466f) {
          FUN_142591e90(param_1,param_2,iVar3);
          bVar2 = *(byte *)(param_1 + 0x154);
        }
        else if (*piVar1 == 0x4c414370) {
          FUN_142591f80(param_1,param_2,iVar3);
          bVar2 = *(byte *)(param_1 + 0x154);
        }
        else if (*piVar1 == 0x4c414373) {
          FUN_142592260(param_1,param_2,iVar3);
          bVar2 = *(byte *)(param_1 + 0x154);
        }
        else {
          if (*piVar1 != 0x73594870) {
            if (*piVar1 == 0x54494273) {
              FUN_142590ac0(param_1,param_2,iVar3);
              bVar2 = *(byte *)(param_1 + 0x154);
            }
            else if (*piVar1 == 0x42475273) {
              FUN_142591090(param_1,param_2,iVar3);
              bVar2 = *(byte *)(param_1 + 0x154);
            }
            else if (*piVar1 == 0x50434369) {
              FUN_1425912a0(param_1,param_2,iVar3);
              bVar2 = *(byte *)(param_1 + 0x154);
            }
            else {
              if (*piVar1 != 0x544c5073) {
                if (*piVar1 == 0x74584574) {
                  FUN_142592540(param_1,param_2,iVar3);
                  bVar2 = *(byte *)(param_1 + 0x154);
                }
                else if (*piVar1 == 0x454d4974) {
                  FUN_142592440(param_1,param_2,iVar3);
                  bVar2 = *(byte *)(param_1 + 0x154);
                }
                else if (*piVar1 == 0x534e5274) {
                  FUN_142591820(param_1,param_2,iVar3);
                  bVar2 = *(byte *)(param_1 + 0x154);
                }
                else {
                  if (*piVar1 != 0x7458547a) {
                    if (*piVar1 == 0x74585469) {
                      FUN_1425929a0(param_1,param_2,iVar3);
                      bVar2 = *(byte *)(param_1 + 0x154);
                    }
                    else {
                      FUN_142592c80(param_1,param_2,iVar3);
                      bVar2 = *(byte *)(param_1 + 0x154);
                    }
                    goto joined_r0x0001424f34a2;
                  }
                  FUN_142592750(param_1,param_2,iVar3);
                  bVar2 = *(byte *)(param_1 + 0x154);
                }
                goto joined_r0x0001424f3662;
              }
              FUN_142591530(param_1,param_2,iVar3);
              bVar2 = *(byte *)(param_1 + 0x154);
            }
            goto joined_r0x0001424f34a2;
          }
          FUN_142591da0(param_1,param_2,iVar3);
          bVar2 = *(byte *)(param_1 + 0x154);
        }
joined_r0x0001424f3662:
        if ((bVar2 & 0x10) != 0) {
          return;
        }
      }
      FUN_142590540(param_1,param_2,iVar3);
      bVar2 = *(byte *)(param_1 + 0x154);
joined_r0x0001424f34a2:
    } while ((bVar2 & 0x10) == 0);
  }
  return;
}



// FUNCTION 1424f36f0 png_destroy_read_struct body=241 status=ok
// SIG undefined png_destroy_read_struct(void)

void png_destroy_read_struct(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
                    /* 0x24f36f0  646  png_destroy_read_struct */
  if (param_1 == (longlong *)0x0) {
    return;
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x420);
    uVar3 = *(undefined8 *)(lVar1 + 0x430);
    if (param_2 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *param_2;
    }
    if (param_3 == (longlong *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *param_3;
    }
    FUN_1424f37f0(lVar1,lVar4,lVar5);
    if (lVar4 != 0) {
      png_free_data(lVar1,lVar4,0x4000,0xffffffff);
      FUN_1424f5e20(lVar4,uVar3,uVar2);
      *param_2 = 0;
    }
    if (lVar5 != 0) {
      png_free_data(lVar1,lVar5,0x4000,0xffffffff);
      FUN_1424f5e20(lVar5,uVar3,uVar2);
      *param_3 = 0;
    }
    FUN_1424f5e20(lVar1,uVar3,uVar2);
    *param_1 = 0;
    return;
  }
  return;
}



// FUNCTION 1424f37f0 FUN_1424f37f0 body=754 status=ok
// SIG undefined FUN_1424f37f0(void)

void FUN_1424f37f0(void *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_168 [32];
  undefined1 local_148 [264];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_2 != 0) {
    FUN_1424ef990(param_1);
  }
  if (param_3 != 0) {
    FUN_1424ef990(param_1,param_3);
  }
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x1b8));
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x438));
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x1f8));
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x4a0));
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x398));
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x3a0));
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x2a8));
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x2b0));
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x2b8));
  uVar6 = *(uint *)((longlong)param_1 + 1000);
  if ((uVar6 & 0x1000) != 0) {
    png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x248));
    uVar6 = *(uint *)((longlong)param_1 + 1000);
  }
  uVar5 = uVar6 & 0xffffefff;
  *(uint *)((longlong)param_1 + 1000) = uVar5;
  if ((uVar6 & 0x2000) != 0) {
    png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x2e8));
    uVar5 = *(uint *)((longlong)param_1 + 1000);
  }
  uVar6 = uVar5 & 0xffffdfff;
  *(uint *)((longlong)param_1 + 1000) = uVar6;
  if ((uVar5 & 8) != 0) {
    png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x3a8));
    uVar6 = *(uint *)((longlong)param_1 + 1000);
  }
  *(uint *)((longlong)param_1 + 1000) = uVar6 & 0xfffffff7;
  lVar8 = *(longlong *)((longlong)param_1 + 0x2c0);
  if (lVar8 != 0) {
    iVar7 = 8 - *(int *)((longlong)param_1 + 0x298);
    if (iVar7 != 0x1f) {
      lVar9 = 0;
      do {
        png_free(param_1,*(undefined8 *)(lVar8 + lVar9 * 8));
        lVar9 = lVar9 + 1;
        lVar8 = *(longlong *)((longlong)param_1 + 0x2c0);
      } while (lVar9 < 1 << ((byte)iVar7 & 0x1f));
    }
    png_free(param_1);
  }
  lVar8 = *(longlong *)((longlong)param_1 + 0x2c8);
  if (lVar8 != 0) {
    iVar7 = 8 - *(int *)((longlong)param_1 + 0x298);
    if (iVar7 != 0x1f) {
      lVar9 = 0;
      do {
        png_free(param_1,*(undefined8 *)(lVar8 + lVar9 * 8));
        lVar9 = lVar9 + 1;
        lVar8 = *(longlong *)((longlong)param_1 + 0x2c8);
      } while (lVar9 < 1 << ((byte)iVar7 & 0x1f));
    }
    png_free(param_1);
  }
  lVar8 = *(longlong *)((longlong)param_1 + 0x2d0);
  if (lVar8 != 0) {
    iVar7 = 8 - *(int *)((longlong)param_1 + 0x298);
    if (iVar7 != 0x1f) {
      lVar9 = 0;
      do {
        png_free(param_1,*(undefined8 *)(lVar8 + lVar9 * 8));
        lVar9 = lVar9 + 1;
        lVar8 = *(longlong *)((longlong)param_1 + 0x2d0);
      } while (lVar9 < 1 << ((byte)iVar7 & 0x1f));
    }
    png_free(param_1);
  }
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x3e0));
  FUN_144b4fb40((longlong)param_1 + 0x160);
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x330));
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x388));
  memcpy(local_148,param_1,0x100);
  uVar3 = *(undefined8 *)((longlong)param_1 + 0x108);
  uVar4 = *(undefined8 *)((longlong)param_1 + 0x110);
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x118);
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x430);
  memset((void *)((longlong)param_1 + 0x100),0,0x3b0);
  *(undefined8 *)((longlong)param_1 + 0x108) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x110) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x118) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x430) = uVar2;
  memcpy(param_1,local_148,0x100);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_168);
}



// FUNCTION 1424f3b00 png_set_read_status_fn body=13 status=ok
// SIG undefined png_set_read_status_fn(void)

void png_set_read_status_fn(longlong param_1,undefined8 param_2)

{
                    /* 0x24f3b00  796  png_set_read_status_fn */
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x300) = param_2;
  }
  return;
}



// FUNCTION 1424f3b10 png_read_png body=711 status=ok
// SIG undefined png_read_png(void)

/* WARNING: Type propagation algorithm not settling */

void png_read_png(longlong param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
                    /* 0x24f3b10  738  png_read_png */
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1 != 0) && (param_2 != 0)) {
    png_read_info(param_1,param_2);
    if (0x1fffffff < *(uint *)(param_2 + 4)) {
      png_error(param_1,"Image is too high to process with png_read_png()");
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((param_3 & 1) != 0) {
      png_set_strip_16(param_1);
    }
    if ((param_3 & 2) != 0) {
      png_set_strip_alpha(param_1);
    }
    if ((param_3 & 8) != 0) {
      png_set_packswap(param_1);
    }
    if (((param_3 & 0x10) != 0) &&
       (((*(byte *)(param_1 + 0x25f) < 8 || (*(char *)(param_1 + 0x25e) == '\x03')) ||
        (iVar2 = png_get_valid(param_1,param_2,0x10), iVar2 != 0)))) {
      png_set_expand(param_1);
    }
    if ((param_3 & 0x20) != 0) {
      png_set_invert_mono(param_1);
    }
    if (((param_3 & 0x40) != 0) && (iVar2 = png_get_valid(param_1,param_2,2), iVar2 != 0)) {
      local_28 = 0;
      png_get_sBIT(param_1,param_2,&local_28);
      png_set_shift(param_1,local_28);
    }
    if ((char)param_3 < '\0') {
      png_set_bgr(param_1);
    }
    if ((param_3 & 0x100) != 0) {
      png_set_swap_alpha(param_1);
    }
    if ((param_3 & 0x200) != 0) {
      png_set_swap(param_1);
    }
    if ((param_3 & 0x400) != 0) {
      png_set_invert_alpha(param_1);
    }
    if ((param_3 & 0x2000) != 0) {
      png_set_gray_to_rgb(param_1);
    }
    png_set_interlace_handling(param_1);
    if ((*(byte *)(param_1 + 0x158) & 0x40) == 0) {
      FUN_142594860(param_1);
    }
    else {
      png_warning(param_1,"Ignoring extra png_read_update_info() call; row buffer not reallocated");
    }
    FUN_1424faa00(param_1,param_2);
    png_free_data(param_1,param_2,0x40,0);
    if (*(longlong *)(param_2 + 0x138) == 0) {
      puVar4 = (undefined8 *)png_malloc(param_1,(ulonglong)*(uint *)(param_2 + 4) << 3);
      *(undefined8 **)(param_2 + 0x138) = puVar4;
      if (*(int *)(param_2 + 4) == 0) {
        *(byte *)(param_2 + 0xec) = *(byte *)(param_2 + 0xec) | 0x40;
      }
      else {
        *puVar4 = 0;
        uVar3 = *(uint *)(param_2 + 4);
        if (1 < uVar3) {
          uVar6 = 1;
          do {
            *(undefined8 *)(*(longlong *)(param_2 + 0x138) + uVar6 * 8) = 0;
            uVar6 = uVar6 + 1;
            uVar3 = *(uint *)(param_2 + 4);
          } while (uVar6 < uVar3);
        }
        *(byte *)(param_2 + 0xec) = *(byte *)(param_2 + 0xec) | 0x40;
        if (0 < (int)uVar3) {
          lVar7 = 0;
          do {
            uVar5 = png_get_rowbytes(param_1,param_2);
            uVar5 = png_malloc(param_1,uVar5);
            *(undefined8 *)(*(longlong *)(param_2 + 0x138) + lVar7 * 8) = uVar5;
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)(param_2 + 4));
        }
      }
    }
    png_read_image(param_1,*(undefined8 *)(param_2 + 0x138));
    *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 0x80;
    png_read_end(param_1,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424f3de0 png_write_info_before_PLTE body=590 status=ok
// SIG undefined png_write_info_before_PLTE(void)

/* WARNING: Type propagation algorithm not settling */

void png_write_info_before_PLTE(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
                    /* 0x24f3de0  837  png_write_info_before_PLTE */
  if (((param_1 != 0) && (param_2 != (undefined4 *)0x0)) && ((*(byte *)(param_1 + 0x155) & 4) == 0))
  {
    png_write_sig(param_1);
    if (((*(byte *)(param_1 + 0x155) & 0x10) != 0) && (*(int *)(param_1 + 0x418) != 0)) {
      png_warning(param_1,"MNG features are not allowed in a PNG datastream");
      *(undefined4 *)(param_1 + 0x418) = 0;
    }
    FUN_142595e90(param_1,*param_2,param_2[1],*(undefined1 *)(param_2 + 9),
                  *(undefined1 *)((longlong)param_2 + 0x25),
                  *(undefined1 *)((longlong)param_2 + 0x26),
                  *(undefined1 *)((longlong)param_2 + 0x27),*(undefined1 *)(param_2 + 10));
    uVar1 = param_2[2];
    if ((uVar1 & 1) != 0) {
      FUN_1425965f0(param_1,param_2[0xd]);
      uVar1 = param_2[2];
    }
    if ((uVar1 & 0x800) != 0) {
      FUN_142596660(param_1,*(undefined1 *)(param_2 + 0xe));
      uVar1 = param_2[2];
    }
    if ((uVar1 & 0x1000) != 0) {
      FUN_1425966d0(param_1,*(undefined8 *)(param_2 + 0x40),0,*(undefined8 *)(param_2 + 0x42),
                    param_2[0x44]);
      uVar1 = param_2[2];
    }
    if ((uVar1 & 2) != 0) {
      FUN_142597220(param_1,param_2 + 0x16,*(undefined1 *)((longlong)param_2 + 0x25));
      uVar1 = param_2[2];
    }
    if ((uVar1 & 4) != 0) {
      FUN_142597310(param_1,param_2[0x2a],param_2[0x2b],param_2[0x2c],param_2[0x2d],param_2[0x2e],
                    param_2[0x2f],param_2[0x30],param_2[0x31]);
    }
    if ((param_2[0x3e] != 0) && (0 < (int)param_2[0x3e])) {
      uVar3 = *(ulonglong *)(param_2 + 0x3c);
      do {
        iVar2 = png_handle_as_unknown(param_1,uVar3);
        if ((((iVar2 != 1) && (*(byte *)(uVar3 + 0x18) != 0)) &&
            ((*(byte *)(uVar3 + 0x18) & 6) == 0)) &&
           (((iVar2 == 3 || ((*(byte *)(uVar3 + 3) & 0x20) != 0)) ||
            ((*(byte *)(param_1 + 0x15a) & 1) != 0)))) {
          lVar4 = *(longlong *)(uVar3 + 0x10);
          if (lVar4 == 0) {
            png_warning(param_1,"Writing zero-length unknown chunk");
            lVar4 = *(longlong *)(uVar3 + 0x10);
          }
          png_write_chunk(param_1,uVar3,*(undefined8 *)(uVar3 + 8),lVar4);
        }
        uVar3 = uVar3 + 0x20;
      } while (uVar3 < (ulonglong)
                       ((longlong)(int)param_2[0x3e] * 0x20 + *(longlong *)(param_2 + 0x3c)));
    }
    *(byte *)(param_1 + 0x155) = *(byte *)(param_1 + 0x155) | 4;
  }
  return;
}



// FUNCTION 1424f4030 png_write_info body=1000 status=ok
// SIG undefined png_write_info(void)

/* WARNING: Type propagation algorithm not settling */

void png_write_info(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong in_stack_ffffffffffffffb8;
  undefined4 uVar11;
  undefined8 in_stack_ffffffffffffffc0;
  
                    /* 0x24f4030  836  png_write_info */
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  png_write_info_before_PLTE(param_1,param_2);
  uVar11 = (undefined4)(in_stack_ffffffffffffffb8 >> 0x20);
  uVar2 = *(uint *)(param_2 + 8);
  if ((uVar2 & 8) == 0) {
    if (*(char *)(param_2 + 0x25) == '\x03') {
      png_error(param_1,"Valid palette required for paletted images");
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  else {
    FUN_142596290(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined2 *)(param_2 + 0x20));
    uVar11 = (undefined4)(in_stack_ffffffffffffffb8 >> 0x20);
    uVar2 = *(uint *)(param_2 + 8);
  }
  if ((uVar2 & 0x10) != 0) {
    if ((((*(byte *)(param_1 + 0x15e) & 8) != 0) && (*(char *)(param_2 + 0x25) == '\x03')) &&
       (*(short *)(param_2 + 0x22) != 0)) {
      uVar9 = 0;
      do {
        pbVar1 = (byte *)(*(longlong *)(param_2 + 0x68) + uVar9);
        *pbVar1 = ~*pbVar1;
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(ushort *)(param_2 + 0x22));
    }
    in_stack_ffffffffffffffb8 = CONCAT44(uVar11,(uint)*(byte *)(param_2 + 0x25));
    FUN_1425974d0(param_1,*(undefined8 *)(param_2 + 0x68),param_2 + 0x70,
                  *(undefined2 *)(param_2 + 0x22),in_stack_ffffffffffffffb8);
    uVar2 = *(uint *)(param_2 + 8);
  }
  if ((uVar2 & 0x20) != 0) {
    FUN_142597620(param_1,param_2 + 0x7a,*(undefined1 *)(param_2 + 0x25));
    uVar2 = *(uint *)(param_2 + 8);
  }
  if ((uVar2 & 0x40) != 0) {
    FUN_142597770(param_1,*(undefined8 *)(param_2 + 0xa0),*(undefined2 *)(param_2 + 0x20));
    uVar2 = *(uint *)(param_2 + 8);
  }
  if ((uVar2 & 0x100) == 0) {
    uVar11 = (undefined4)(in_stack_ffffffffffffffb8 >> 0x20);
  }
  else {
    FUN_142598010(param_1,*(undefined4 *)(param_2 + 0x84),*(undefined4 *)(param_2 + 0x88),
                  *(undefined1 *)(param_2 + 0x8c));
    uVar11 = (undefined4)(in_stack_ffffffffffffffb8 >> 0x20);
    uVar2 = *(uint *)(param_2 + 8);
  }
  if ((uVar2 & 0x400) != 0) {
    in_stack_ffffffffffffffb8 = CONCAT44(uVar11,(uint)*(byte *)(param_2 + 0xe8));
    FUN_1425980c0(param_1,*(undefined8 *)(param_2 + 200),*(undefined4 *)(param_2 + 0xd0),
                  *(undefined4 *)(param_2 + 0xd4),in_stack_ffffffffffffffb8,
                  CONCAT44(uVar6,(uint)*(byte *)(param_2 + 0xe9)),*(undefined4 *)(param_2 + 0xd8),
                  *(undefined4 *)(param_2 + 0xe0));
    uVar2 = *(uint *)(param_2 + 8);
  }
  if ((uVar2 & 0x4000) == 0) {
    cVar5 = (char)uVar2;
  }
  else {
    FUN_142598420(param_1,*(undefined1 *)(param_2 + 0x124),*(undefined8 *)(param_2 + 0x128),
                  *(undefined8 *)(param_2 + 0x130));
    uVar2 = *(uint *)(param_2 + 8);
    cVar5 = (char)uVar2;
  }
  if (cVar5 < '\0') {
    FUN_142598530(param_1,*(undefined4 *)(param_2 + 0x90),*(undefined4 *)(param_2 + 0x94),
                  *(undefined1 *)(param_2 + 0x98));
    uVar2 = *(uint *)(param_2 + 8);
  }
  if ((uVar2 & 0x200) != 0) {
    FUN_1425985e0(param_1,param_2 + 0x50);
    *(byte *)(param_1 + 0x155) = *(byte *)(param_1 + 0x155) | 2;
    uVar2 = *(uint *)(param_2 + 8);
  }
  if (((uVar2 & 0x2000) != 0) && (0 < *(int *)(param_2 + 0x120))) {
    lVar10 = 0;
    lVar8 = 0;
    do {
      FUN_142596f70(param_1,*(longlong *)(param_2 + 0x118) + lVar10);
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + 0x20;
    } while (lVar8 < *(int *)(param_2 + 0x120));
  }
  if (0 < *(int *)(param_2 + 0x3c)) {
    lVar8 = 0;
    lVar10 = 0;
    do {
      lVar3 = *(longlong *)(param_2 + 0x48);
      iVar7 = *(int *)(lVar3 + lVar8);
      if (iVar7 < 1) {
        if (iVar7 == -1) {
          FUN_1425978e0(param_1,*(undefined8 *)(lVar3 + 8 + lVar8),
                        *(undefined8 *)(lVar3 + 0x10 + lVar8),0);
          goto LAB_1424f4361;
        }
        if (iVar7 == 0) {
          in_stack_ffffffffffffffb8 = in_stack_ffffffffffffffb8 & 0xffffffff00000000;
          FUN_142597aa0(param_1,*(undefined8 *)(lVar3 + 8 + lVar8),
                        *(undefined8 *)(lVar3 + 0x10 + lVar8),0,in_stack_ffffffffffffffb8);
          uVar6 = 0xfffffffe;
          goto LAB_1424f4366;
        }
      }
      else {
        in_stack_ffffffffffffffb8 = *(ulonglong *)(lVar3 + 0x30 + lVar8);
        FUN_142597cd0(param_1,iVar7,*(undefined8 *)(lVar3 + 8 + lVar8),
                      *(undefined8 *)(lVar3 + 0x28 + lVar8),in_stack_ffffffffffffffb8,
                      *(undefined8 *)(lVar3 + 0x10 + lVar8));
LAB_1424f4361:
        uVar6 = 0xfffffffd;
LAB_1424f4366:
        *(undefined4 *)(*(longlong *)(param_2 + 0x48) + lVar8) = uVar6;
      }
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + 0x38;
    } while (lVar10 < *(int *)(param_2 + 0x3c));
  }
  if ((*(int *)(param_2 + 0xf8) != 0) && (0 < *(int *)(param_2 + 0xf8))) {
    uVar9 = *(ulonglong *)(param_2 + 0xf0);
    do {
      iVar7 = png_handle_as_unknown(param_1,uVar9);
      if (((iVar7 != 1) && ((*(byte *)(uVar9 + 0x18) & 6) == 2)) &&
         ((iVar7 == 3 ||
          (((*(byte *)(uVar9 + 3) & 0x20) != 0 || ((*(byte *)(param_1 + 0x15a) & 1) != 0)))))) {
        png_write_chunk(param_1,uVar9,*(undefined8 *)(uVar9 + 8),*(undefined8 *)(uVar9 + 0x10));
      }
      uVar9 = uVar9 + 0x20;
    } while (uVar9 < (ulonglong)
                     ((longlong)*(int *)(param_2 + 0xf8) * 0x20 + *(longlong *)(param_2 + 0xf0)));
  }
  return;
}



// FUNCTION 1424f4430 png_write_end body=412 status=ok
// SIG undefined png_write_end(void)

void png_write_end(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
                    /* 0x24f4430  833  png_write_end */
  if (param_1 == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x154) & 4) == 0) {
    png_error(param_1,"No IDATs written into file");
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (param_2 != 0) {
    if (((*(uint *)(param_1 + 0x154) & 0x200) == 0) && ((*(uint *)(param_2 + 8) & 0x200) != 0)) {
      FUN_1425985e0(param_1,param_2 + 0x50);
    }
    if (0 < *(int *)(param_2 + 0x3c)) {
      lVar5 = 0;
      lVar7 = 0;
      do {
        lVar1 = *(longlong *)(param_2 + 0x48);
        iVar4 = *(int *)(lVar1 + lVar5);
        if (iVar4 < 1) {
          if (-1 < iVar4) {
            FUN_142597aa0(param_1,*(undefined8 *)(lVar1 + 8 + lVar5),
                          *(undefined8 *)(lVar1 + 0x10 + lVar5),0,iVar4);
            uVar3 = 0xfffffffe;
            goto LAB_1424f4513;
          }
          if (iVar4 == -1) {
            FUN_1425978e0(param_1,*(undefined8 *)(lVar1 + 8 + lVar5),
                          *(undefined8 *)(lVar1 + 0x10 + lVar5),0);
            goto LAB_1424f44e1;
          }
        }
        else {
          FUN_142597cd0(param_1,iVar4,*(undefined8 *)(lVar1 + 8 + lVar5),
                        *(undefined8 *)(lVar1 + 0x28 + lVar5),*(undefined8 *)(lVar1 + 0x30 + lVar5),
                        *(undefined8 *)(lVar1 + 0x10 + lVar5));
LAB_1424f44e1:
          uVar3 = 0xfffffffd;
LAB_1424f4513:
          *(undefined4 *)(*(longlong *)(param_2 + 0x48) + lVar5) = uVar3;
        }
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + 0x38;
      } while (lVar7 < *(int *)(param_2 + 0x3c));
    }
    if ((*(int *)(param_2 + 0xf8) != 0) && (0 < *(int *)(param_2 + 0xf8))) {
      uVar6 = *(ulonglong *)(param_2 + 0xf0);
      do {
        iVar4 = png_handle_as_unknown(param_1,uVar6);
        if (((iVar4 != 1) && ((*(byte *)(uVar6 + 0x18) & 8) != 0)) &&
           ((iVar4 == 3 ||
            (((*(byte *)(uVar6 + 3) & 0x20) != 0 || ((*(byte *)(param_1 + 0x15a) & 1) != 0)))))) {
          png_write_chunk(param_1,uVar6,*(undefined8 *)(uVar6 + 8),*(undefined8 *)(uVar6 + 0x10));
        }
        uVar6 = uVar6 + 0x20;
      } while (uVar6 < (ulonglong)
                       ((longlong)*(int *)(param_2 + 0xf8) * 0x20 + *(longlong *)(param_2 + 0xf0)));
    }
  }
  *(byte *)(param_1 + 0x154) = *(byte *)(param_1 + 0x154) | 8;
  FUN_1425965a0(param_1);
  return;
}



// FUNCTION 1424f45e0 png_convert_from_struct_tm body=43 status=ok
// SIG undefined png_convert_from_struct_tm(void)

void png_convert_from_struct_tm(short *param_1,undefined1 *param_2)

{
                    /* 0x24f45e0  636  png_convert_from_struct_tm */
  *param_1 = (short)*(undefined4 *)(param_2 + 0x14) + 0x76c;
  *(char *)(param_1 + 1) = param_2[0x10] + '\x01';
  *(undefined1 *)((longlong)param_1 + 3) = param_2[0xc];
  *(undefined1 *)(param_1 + 2) = param_2[8];
  *(undefined1 *)((longlong)param_1 + 5) = param_2[4];
  *(undefined1 *)(param_1 + 3) = *param_2;
  return;
}



// FUNCTION 1424f4610 png_convert_from_time_t body=95 status=ok
// SIG undefined png_convert_from_time_t(void)

void png_convert_from_time_t(short *param_1,__time64_t param_2)

{
  tm *ptVar1;
  undefined1 auStack_38 [32];
  __time64_t local_18;
  ulonglong local_10;
  
                    /* 0x24f4610  637  png_convert_from_time_t */
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  ptVar1 = _gmtime64(&local_18);
  *param_1 = (short)ptVar1->tm_year + 0x76c;
  *(char *)(param_1 + 1) = (char)ptVar1->tm_mon + '\x01';
  *(char *)((longlong)param_1 + 3) = (char)ptVar1->tm_mday;
  *(char *)(param_1 + 2) = (char)ptVar1->tm_hour;
  *(char *)((longlong)param_1 + 5) = (char)ptVar1->tm_min;
  *(char *)(param_1 + 3) = (char)ptVar1->tm_sec;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424f4680 png_create_write_struct body=32 status=ok
// SIG undefined png_create_write_struct(void)

void png_create_write_struct(void)

{
                    /* 0x24f4680  642  png_create_write_struct */
  png_create_write_struct_2();
  return;
}



// FUNCTION 1424f46a0 png_create_write_struct_2 body=705 status=ok
// SIG undefined png_create_write_struct_2(void)

void png_create_write_struct_2
               (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  HANDLE hProcess;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 local_d8 [32];
  undefined8 local_b8;
  int local_a4;
  longlong local_a0;
  undefined1 local_98 [64];
  undefined1 local_58 [16];
  ulonglong local_48;
  
                    /* 0x24f46a0  643  png_create_write_struct_2 */
  local_48 = DAT_14c707940 ^ (ulonglong)local_58;
  local_a4 = 0;
  local_a0 = FUN_1424f5d70(1,param_6,param_5);
  if (local_a0 == 0) goto LAB_1424f4955;
  *(undefined4 *)(local_a0 + 0x45c) = 1000000;
  *(undefined4 *)(local_a0 + 0x460) = 1000000;
  uVar3 = png_set_longjmp_fn(local_a0,longjmp,0x100);
  iVar2 = __intrinsic_setjmp(uVar3,local_d8);
  if (iVar2 != 0) {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,0);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  png_set_mem_fn(local_a0,param_5,param_6,param_7);
  png_set_error_fn(local_a0,param_2,param_3,param_4);
  if (param_1 != (char *)0x0) {
    lVar6 = 0;
    do {
      cVar1 = param_1[lVar6];
      lVar4 = png_get_header_ver(0);
      if (cVar1 != *(char *)(lVar4 + lVar6)) {
        *(byte *)(local_a0 + 0x15a) = *(byte *)(local_a0 + 0x15a) | 2;
      }
      lVar4 = png_get_header_ver(0);
      pcVar5 = (char *)(lVar4 + lVar6);
      lVar6 = lVar6 + 1;
    } while (*pcVar5 != '\0');
  }
  if ((*(byte *)(local_a0 + 0x15a) & 2) != 0) {
    if ((param_1 != (char *)0x0) &&
       (cVar1 = *param_1, pcVar5 = (char *)png_get_header_ver(0), cVar1 == *pcVar5)) {
      cVar1 = *param_1;
      if (cVar1 == '1') {
        cVar1 = param_1[2];
        lVar6 = png_get_header_ver(0);
        if (cVar1 != *(char *)(lVar6 + 2)) goto LAB_1424f4812;
        cVar1 = *param_1;
      }
      if ((cVar1 != '0') || ('8' < param_1[2])) goto LAB_1424f4851;
    }
LAB_1424f4812:
    if (param_1 != (char *)0x0) {
      local_b8 = png_get_header_ver(0);
      FUN_1424ef650(local_98,0x50,"Application built with libpng-%.20s but running with %.20s",
                    param_1);
      png_warning(local_a0,local_98);
    }
    local_a4 = 1;
  }
LAB_1424f4851:
  *(undefined4 *)(local_a0 + 0x1c0) = 0x2000;
  if (local_a4 == 0) {
    uVar3 = png_malloc_warn(local_a0,*(undefined4 *)(local_a0 + 0x1c0));
    *(undefined8 *)(local_a0 + 0x1b8) = uVar3;
    if (*(longlong *)(local_a0 + 0x1b8) == 0) {
      local_a4 = 1;
    }
  }
  if (local_a4 == 0) {
    png_set_write_fn(local_a0,0,0,0);
    lVar6 = local_a0;
    *(undefined2 *)(local_a0 + 0x3b0) = 1;
    if (*(longlong *)(local_a0 + 0x3b8) != 0) {
      *(undefined8 *)(local_a0 + 0x3b8) = 0;
      png_free(local_a0);
    }
    if (*(longlong *)(lVar6 + 0x3c0) != 0) {
      *(undefined8 *)(lVar6 + 0x3c0) = 0;
      png_free(lVar6);
    }
    if (*(longlong *)(lVar6 + 0x3c8) != 0) {
      *(undefined8 *)(lVar6 + 0x3c8) = 0;
      png_free(lVar6);
    }
  }
  else {
    png_free(local_a0,*(undefined8 *)(local_a0 + 0x1b8));
    *(undefined8 *)(local_a0 + 0x1b8) = 0;
    FUN_1424f5e20(local_a0,param_7,param_5);
  }
LAB_1424f4955:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)local_58);
}



// FUNCTION 1424f4980 png_write_rows body=62 status=ok
// SIG undefined png_write_rows(void)

void png_write_rows(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
                    /* 0x24f4980  840  png_write_rows */
  if ((param_1 != 0) && (param_3 != 0)) {
    lVar1 = 0;
    do {
      png_write_row(param_1,*(undefined8 *)(param_2 + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (param_3 != (int)lVar1);
  }
  return;
}



// FUNCTION 1424f49c0 png_write_row body=609 status=ok
// SIG undefined png_write_row(void)

void png_write_row(longlong param_1,void *param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  byte bVar5;
  size_t _Size;
  
                    /* 0x24f49c0  839  png_write_row */
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 500) == 0) && (*(char *)(param_1 + 0x25c) == '\0')) {
      if ((*(byte *)(param_1 + 0x155) & 4) == 0) {
        png_error(param_1,"png_write_info was never called before png_write_row");
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      FUN_142598690(param_1);
      cVar2 = *(char *)(param_1 + 0x25b);
    }
    else {
      cVar2 = *(char *)(param_1 + 0x25b);
    }
    if ((cVar2 != '\0') && ((*(byte *)(param_1 + 0x15c) & 2) != 0)) {
      switch(*(undefined1 *)(param_1 + 0x25c)) {
      case 0:
        if ((*(byte *)(param_1 + 500) & 7) != 0) goto LAB_1424f4c01;
        break;
      case 1:
        if (((*(byte *)(param_1 + 500) & 7) != 0) || (*(uint *)(param_1 + 0x1d8) < 5))
        goto LAB_1424f4c01;
        break;
      case 2:
        if ((*(uint *)(param_1 + 500) & 7) != 4) goto LAB_1424f4c01;
        break;
      case 3:
        if (((*(byte *)(param_1 + 500) & 3) != 0) || (*(uint *)(param_1 + 0x1d8) < 3))
        goto LAB_1424f4c01;
        break;
      case 4:
        if ((*(uint *)(param_1 + 500) & 3) != 2) goto LAB_1424f4c01;
        break;
      case 5:
        if (((*(byte *)(param_1 + 500) & 1) != 0) || (*(uint *)(param_1 + 0x1d8) < 2))
        goto LAB_1424f4c01;
        break;
      case 6:
        if ((*(byte *)(param_1 + 500) & 1) == 0) goto LAB_1424f4c01;
      }
    }
    *(undefined1 *)(param_1 + 0x238) = *(undefined1 *)(param_1 + 0x25e);
    uVar3 = *(uint *)(param_1 + 0x1e4);
    *(uint *)(param_1 + 0x228) = uVar3;
    *(char *)(param_1 + 0x23a) = *(char *)(param_1 + 0x263);
    *(char *)(param_1 + 0x239) = *(char *)(param_1 + 0x260);
    bVar5 = *(char *)(param_1 + 0x260) * *(char *)(param_1 + 0x263);
    *(byte *)(param_1 + 0x23b) = bVar5;
    if (bVar5 < 8) {
      _Size = (ulonglong)bVar5 * (ulonglong)uVar3 + 7 >> 3;
    }
    else {
      _Size = (ulonglong)(bVar5 >> 3) * (ulonglong)uVar3;
    }
    lVar1 = param_1 + 0x228;
    *(size_t *)(param_1 + 0x230) = _Size;
    memcpy((void *)(*(longlong *)(param_1 + 0x200) + 1),param_2,_Size);
    if ((((*(char *)(param_1 + 0x25b) != '\0') && (*(byte *)(param_1 + 0x25c) < 6)) &&
        ((*(byte *)(param_1 + 0x15c) & 2) != 0)) &&
       (FUN_142598a60(lVar1,*(longlong *)(param_1 + 0x200) + 1), *(int *)(param_1 + 0x228) == 0)) {
LAB_1424f4c01:
      FUN_142598840(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x15c) != 0) {
      FUN_14259e210(param_1);
    }
    if (((*(byte *)(param_1 + 0x418) & 4) != 0) && (*(char *)(param_1 + 0x41c) == '@')) {
      FUN_14259ed50(lVar1,*(longlong *)(param_1 + 0x200) + 1);
    }
    FUN_14259e190(param_1,lVar1);
    if (*(code **)(param_1 + 0x308) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424f4b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x308))
                (param_1,*(undefined4 *)(param_1 + 500),*(undefined1 *)(param_1 + 0x25c));
      return;
    }
  }
  return;
}



// FUNCTION 1424f4c40 png_write_image body=109 status=ok
// SIG undefined png_write_image(void)

void png_write_image(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
                    /* 0x24f4c40  835  png_write_image */
  if (param_1 != 0) {
    iVar1 = png_set_interlace_handling();
    if (0 < iVar1) {
      uVar2 = *(uint *)(param_1 + 0x1dc);
      iVar3 = 0;
      do {
        bVar5 = uVar2 != 0;
        uVar2 = 0;
        if (bVar5) {
          lVar4 = 0;
          do {
            png_write_row(param_1,*(undefined8 *)(param_2 + lVar4 * 8));
            uVar2 = *(uint *)(param_1 + 0x1dc);
            lVar4 = lVar4 + 1;
          } while ((uint)lVar4 < uVar2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != iVar1);
    }
  }
  return;
}



// FUNCTION 1424f4cb0 png_set_flush body=19 status=ok
// SIG undefined png_set_flush(void)

void png_set_flush(longlong param_1,int param_2)

{
  int iVar1;
  
                    /* 0x24f4cb0  773  png_set_flush */
  if (param_1 != 0) {
    iVar1 = 0;
    if (-1 < param_2) {
      iVar1 = param_2;
    }
    *(int *)(param_1 + 0x290) = iVar1;
  }
  return;
}



// FUNCTION 1424f4cd0 png_write_flush body=230 status=ok
// SIG undefined png_write_flush(void)

void png_write_flush(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  
                    /* 0x24f4cd0  834  png_write_flush */
  if ((param_1 != 0) && (*(uint *)(param_1 + 500) < *(uint *)(param_1 + 0x1e0))) {
    while( true ) {
      iVar2 = FUN_144b4c2e0(param_1 + 0x160,2);
      if (iVar2 != 0) {
        pcVar3 = *(char **)(param_1 + 0x180);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = "zlib error";
        }
        png_error(param_1,pcVar3);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      iVar2 = *(int *)(param_1 + 0x178);
      if (iVar2 != 0) break;
      FUN_142596440(param_1,*(undefined8 *)(param_1 + 0x1b8));
      *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x1b8);
      *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x1c0);
    }
    if (*(int *)(param_1 + 0x1c0) != iVar2) {
      FUN_142596440(param_1,*(undefined8 *)(param_1 + 0x1b8),*(int *)(param_1 + 0x1c0) - iVar2);
      *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x1b8);
      *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x1c0);
    }
    *(undefined4 *)(param_1 + 0x294) = 0;
    FUN_1424ff420(param_1);
    return;
  }
  return;
}



// FUNCTION 1424f4dc0 png_destroy_write_struct body=233 status=ok
// SIG undefined png_destroy_write_struct(void)

void png_destroy_write_struct(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  
                    /* 0x24f4dc0  647  png_destroy_write_struct */
  if (param_1 == (longlong *)0x0) {
    bVar5 = false;
    lVar2 = 0;
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    lVar2 = *param_1;
    uVar3 = *(undefined8 *)(lVar2 + 0x420);
    uVar4 = *(undefined8 *)(lVar2 + 0x430);
    bVar5 = lVar2 != 0;
  }
  if ((param_2 == (longlong *)0x0) || (lVar1 = *param_2, lVar1 == 0)) {
    if (!bVar5) {
      return;
    }
  }
  else {
    if (!bVar5) {
      FUN_1424f5e20(lVar1,uVar4,uVar3);
      *param_2 = 0;
      return;
    }
    png_free_data(lVar2,lVar1,0x7fff,0xffffffff);
    if (*(int *)(lVar2 + 0x400) != 0) {
      png_free(lVar2,*(undefined8 *)(lVar2 + 0x408));
      *(undefined4 *)(lVar2 + 0x400) = 0;
    }
    FUN_1424f5e20(lVar1,uVar4,uVar3);
    *param_2 = 0;
  }
  FUN_1424f4eb0(lVar2);
  FUN_1424f5e20(lVar2,uVar4,uVar3);
  *param_1 = 0;
  return;
}



// FUNCTION 1424f4eb0 FUN_1424f4eb0 body=422 status=ok
// SIG undefined FUN_1424f4eb0(void)

void FUN_1424f4eb0(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_168 [32];
  undefined1 local_148 [264];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_144b4cd70((longlong)param_1 + 0x160);
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x1b8));
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x200));
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x1f8));
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x208));
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x210));
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x218));
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x220));
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x3e0));
  *(undefined2 *)((longlong)param_1 + 0x3b0) = 1;
  if (*(longlong *)((longlong)param_1 + 0x3b8) != 0) {
    *(undefined8 *)((longlong)param_1 + 0x3b8) = 0;
    png_free(param_1);
  }
  if (*(longlong *)((longlong)param_1 + 0x3c0) != 0) {
    *(undefined8 *)((longlong)param_1 + 0x3c0) = 0;
    png_free(param_1);
  }
  if (*(longlong *)((longlong)param_1 + 0x3c8) != 0) {
    *(undefined8 *)((longlong)param_1 + 0x3c8) = 0;
    png_free(param_1);
  }
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x3d0));
  png_free(param_1,*(undefined8 *)((longlong)param_1 + 0x3d8));
  memcpy(local_148,param_1,0x100);
  uVar3 = *(undefined8 *)((longlong)param_1 + 0x108);
  uVar4 = *(undefined8 *)((longlong)param_1 + 0x110);
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x118);
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x430);
  memset((void *)((longlong)param_1 + 0x100),0,0x3b0);
  *(undefined8 *)((longlong)param_1 + 0x108) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x110) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x118) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x430) = uVar2;
  memcpy(param_1,local_148,0x100);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_168);
}



// FUNCTION 1424f5070 png_set_filter body=542 status=ok
// SIG undefined png_set_filter(void)

/* WARNING: Type propagation algorithm not settling */

void png_set_filter(longlong param_1,int param_2,undefined1 param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  byte bVar4;
  
                    /* 0x24f5070  770  png_set_filter */
  if (param_1 != 0) {
    if ((param_2 != 0) && ((param_2 == 0x40 & (*(byte *)(param_1 + 0x418) & 4) >> 2) == 0)) {
      png_error(param_1,"Unknown custom filter method");
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    bVar4 = 8;
    switch(param_3) {
    case 1:
      bVar4 = 0x10;
      break;
    case 2:
      bVar4 = 0x20;
      break;
    case 3:
      bVar4 = 0x40;
      break;
    case 4:
      bVar4 = 0x80;
      break;
    case 5:
    case 6:
    case 7:
      png_warning(param_1,"Unknown row filter for method 0");
    }
    *(byte *)(param_1 + 0x25d) = bVar4;
    if (*(longlong *)(param_1 + 0x200) != 0) {
      if (((bVar4 & 0x10) != 0) && (*(longlong *)(param_1 + 0x208) == 0)) {
        puVar3 = (undefined1 *)png_malloc(param_1,*(longlong *)(param_1 + 0x1e8) + 1);
        *(undefined1 **)(param_1 + 0x208) = puVar3;
        *puVar3 = 1;
        bVar4 = *(byte *)(param_1 + 0x25d);
      }
      bVar1 = bVar4;
      if (((bVar4 & 0x20) != 0) && (*(longlong *)(param_1 + 0x210) == 0)) {
        if (*(longlong *)(param_1 + 0x1f8) == 0) {
          png_warning(param_1,"Can\'t add Up filter after starting");
          bVar1 = *(byte *)(param_1 + 0x25d);
          bVar4 = bVar1 & 0xdf;
          *(byte *)(param_1 + 0x25d) = bVar4;
        }
        else {
          puVar3 = (undefined1 *)png_malloc(param_1,*(longlong *)(param_1 + 0x1e8) + 1);
          *(undefined1 **)(param_1 + 0x210) = puVar3;
          *puVar3 = 2;
          bVar4 = *(byte *)(param_1 + 0x25d);
          bVar1 = bVar4;
        }
      }
      if (((bVar1 & 0x40) != 0) && (*(longlong *)(param_1 + 0x218) == 0)) {
        if (*(longlong *)(param_1 + 0x1f8) == 0) {
          png_warning(param_1,"Can\'t add Average filter after starting");
          bVar4 = *(byte *)(param_1 + 0x25d) & 0xbf;
          *(byte *)(param_1 + 0x25d) = bVar4;
        }
        else {
          puVar3 = (undefined1 *)png_malloc(param_1,*(longlong *)(param_1 + 0x1e8) + 1);
          *(undefined1 **)(param_1 + 0x218) = puVar3;
          *puVar3 = 3;
          bVar4 = *(byte *)(param_1 + 0x25d);
        }
      }
      if ((char)bVar4 < '\0') {
        if (*(longlong *)(param_1 + 0x220) != 0) {
          return;
        }
        if (*(longlong *)(param_1 + 0x1f8) == 0) {
          png_warning(param_1,"Can\'t add Paeth filter after starting");
          bVar4 = *(byte *)(param_1 + 0x25d) & 0x7f;
          *(byte *)(param_1 + 0x25d) = bVar4;
        }
        else {
          puVar3 = (undefined1 *)png_malloc(param_1,*(longlong *)(param_1 + 0x1e8) + 1);
          *(undefined1 **)(param_1 + 0x220) = puVar3;
          *puVar3 = 4;
          bVar4 = *(byte *)(param_1 + 0x25d);
        }
      }
      if (bVar4 == 0) {
        *(undefined1 *)(param_1 + 0x25d) = 8;
      }
    }
  }
  return;
}



// FUNCTION 1424f52b0 png_set_filter_heuristics body=607 status=ok
// SIG undefined png_set_filter_heuristics(void)

void png_set_filter_heuristics
               (longlong param_1,int param_2,uint param_3,longlong param_4,double *param_5)

{
  double dVar1;
  undefined2 uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
                    /* 0x24f52b0  771  png_set_filter_heuristics */
  iVar3 = FUN_1424f5520();
  if ((param_2 == 2) && (iVar3 != 0)) {
    if (0 < (int)param_3) {
      uVar5 = 0;
      do {
        dVar1 = *(double *)(param_4 + uVar5 * 8);
        if (dVar1 <= 0.0) {
          *(undefined2 *)(*(longlong *)(param_1 + 0x3c0) + uVar5 * 2) = 0x100;
          uVar2 = 0x100;
          plVar4 = (longlong *)(param_1 + 0x3c8);
        }
        else {
          *(short *)(*(longlong *)(param_1 + 0x3c8) + uVar5 * 2) = (short)(int)(dVar1 * 256.0 + 0.5)
          ;
          uVar2 = (undefined2)(int)(256.0 / *(double *)(param_4 + uVar5 * 8) + 0.5);
          plVar4 = (longlong *)(param_1 + 0x3c0);
        }
        *(undefined2 *)(*plVar4 + uVar5 * 2) = uVar2;
        uVar5 = uVar5 + 1;
      } while (param_3 != uVar5);
    }
    if (1.0 <= *param_5) {
      **(undefined2 **)(param_1 + 0x3d8) = (short)(int)(8.0 / *param_5 + 0.5);
      **(undefined2 **)(param_1 + 0x3d0) = (short)(int)(*param_5 * 8.0 + 0.5);
    }
    if (1.0 <= param_5[1]) {
      *(short *)(*(longlong *)(param_1 + 0x3d8) + 2) = (short)(int)(8.0 / param_5[1] + 0.5);
      *(short *)(*(longlong *)(param_1 + 0x3d0) + 2) = (short)(int)(param_5[1] * 8.0 + 0.5);
    }
    if (1.0 <= param_5[2]) {
      *(short *)(*(longlong *)(param_1 + 0x3d8) + 4) = (short)(int)(8.0 / param_5[2] + 0.5);
      *(short *)(*(longlong *)(param_1 + 0x3d0) + 4) = (short)(int)(param_5[2] * 8.0 + 0.5);
    }
    if (1.0 <= param_5[3]) {
      *(short *)(*(longlong *)(param_1 + 0x3d8) + 6) = (short)(int)(8.0 / param_5[3] + 0.5);
      *(short *)(*(longlong *)(param_1 + 0x3d0) + 6) = (short)(int)(param_5[3] * 8.0 + 0.5);
    }
    if (1.0 <= param_5[4]) {
      *(short *)(*(longlong *)(param_1 + 0x3d8) + 8) = (short)(int)(8.0 / param_5[4] + 0.5);
      *(short *)(*(longlong *)(param_1 + 0x3d0) + 8) = (short)(int)(param_5[4] * 8.0 + 0.5);
    }
  }
  return;
}



// FUNCTION 1424f5520 FUN_1424f5520 body=735 status=ok
// SIG undefined FUN_1424f5520(void)

/* WARNING: Removing unreachable block (ram,0x0001424f569e) */

undefined8 FUN_1424f5520(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (param_1 == 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x3b0) = 1;
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    *(undefined8 *)(param_1 + 0x3b8) = 0;
    png_free(param_1);
  }
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    *(undefined8 *)(param_1 + 0x3c0) = 0;
    png_free(param_1);
  }
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    png_free(param_1);
  }
  if (param_2 != 2) {
    if (param_2 < 2) {
      return 1;
    }
    png_warning(param_1,"Unknown filter heuristic method");
    return 0;
  }
  if ((int)param_3 < 1) goto LAB_1424f5735;
  uVar7 = (ulonglong)param_3;
  puVar2 = (undefined1 *)png_malloc(param_1,uVar7);
  *(undefined1 **)(param_1 + 0x3b8) = puVar2;
  *puVar2 = 0xff;
  if (param_3 != 1) {
    uVar1 = param_3 - 1 & 3;
    lVar6 = 1;
    if (2 < uVar7 - 2) {
      lVar3 = 0;
      do {
        lVar6 = lVar3;
        *(undefined1 *)(*(longlong *)(param_1 + 0x3b8) + 1 + lVar6) = 0xff;
        *(undefined1 *)(*(longlong *)(param_1 + 0x3b8) + 2 + lVar6) = 0xff;
        *(undefined1 *)(*(longlong *)(param_1 + 0x3b8) + 3 + lVar6) = 0xff;
        *(undefined1 *)(*(longlong *)(param_1 + 0x3b8) + 4 + lVar6) = 0xff;
        lVar3 = lVar6 + 4;
      } while ((uVar7 - 1) - (ulonglong)uVar1 != lVar6 + 4);
      lVar6 = lVar6 + 5;
    }
    if (uVar1 != 0) {
      lVar3 = -(ulonglong)uVar1;
      do {
        *(undefined1 *)(*(longlong *)(param_1 + 0x3b8) + lVar6) = 0xff;
        lVar6 = lVar6 + 1;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0);
    }
  }
  uVar4 = png_malloc(param_1,param_3 * 2);
  *(undefined8 *)(param_1 + 0x3c0) = uVar4;
  uVar4 = png_malloc(param_1,param_3 * 2);
  *(undefined8 *)(param_1 + 0x3c8) = uVar4;
  if (param_3 == 1) {
    lVar6 = 0;
LAB_1424f5714:
    *(undefined2 *)(*(longlong *)(param_1 + 0x3c0) + lVar6 * 2) = 0x100;
    *(undefined2 *)(*(longlong *)(param_1 + 0x3c8) + lVar6 * 2) = 0x100;
  }
  else {
    lVar6 = 0;
    do {
      *(undefined2 *)(*(longlong *)(param_1 + 0x3c0) + lVar6 * 2) = 0x100;
      *(undefined2 *)(*(longlong *)(param_1 + 0x3c8) + lVar6 * 2) = 0x100;
      *(undefined2 *)(*(longlong *)(param_1 + 0x3c0) + 2 + lVar6 * 2) = 0x100;
      *(undefined2 *)(*(longlong *)(param_1 + 0x3c8) + 2 + lVar6 * 2) = 0x100;
      lVar6 = lVar6 + 2;
    } while (uVar7 - (param_3 & 1) != lVar6);
    if ((ulonglong)(param_3 & 1) != 0) goto LAB_1424f5714;
  }
  *(char *)(param_1 + 0x3b1) = (char)param_3;
LAB_1424f5735:
  puVar5 = *(undefined2 **)(param_1 + 0x3d0);
  if (puVar5 == (undefined2 *)0x0) {
    uVar4 = png_malloc(param_1,10);
    *(undefined8 *)(param_1 + 0x3d0) = uVar4;
    uVar4 = png_malloc(param_1,10);
    *(undefined8 *)(param_1 + 0x3d8) = uVar4;
    puVar5 = *(undefined2 **)(param_1 + 0x3d0);
  }
  *puVar5 = 8;
  **(undefined2 **)(param_1 + 0x3d8) = 8;
  *(undefined2 *)(*(longlong *)(param_1 + 0x3d0) + 2) = 8;
  *(undefined2 *)(*(longlong *)(param_1 + 0x3d8) + 2) = 8;
  *(undefined2 *)(*(longlong *)(param_1 + 0x3d0) + 4) = 8;
  *(undefined2 *)(*(longlong *)(param_1 + 0x3d8) + 4) = 8;
  *(undefined2 *)(*(longlong *)(param_1 + 0x3d0) + 6) = 8;
  *(undefined2 *)(*(longlong *)(param_1 + 0x3d8) + 6) = 8;
  *(undefined2 *)(*(longlong *)(param_1 + 0x3d0) + 8) = 8;
  *(undefined2 *)(*(longlong *)(param_1 + 0x3d8) + 8) = 8;
  *(undefined1 *)(param_1 + 0x3b0) = 2;
  return 1;
}



// FUNCTION 1424f5800 png_set_filter_heuristics_fixed body=548 status=ok
// SIG undefined png_set_filter_heuristics_fixed(void)

void png_set_filter_heuristics_fixed
               (longlong param_1,int param_2,uint param_3,longlong param_4,uint *param_5)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
                    /* 0x24f5800  772  png_set_filter_heuristics_fixed */
  iVar3 = FUN_1424f5520();
  if ((param_2 == 2) && (iVar3 != 0)) {
    if (0 < (int)param_3) {
      uVar5 = 0;
      do {
        iVar3 = *(int *)(param_4 + uVar5 * 4);
        if (iVar3 < 1) {
          *(undefined2 *)(*(longlong *)(param_1 + 0x3c0) + uVar5 * 2) = 0x100;
          uVar2 = 0x100;
          plVar4 = (longlong *)(param_1 + 0x3c8);
        }
        else {
          iVar3 = iVar3 * 0x100 + 50000;
          *(short *)(*(longlong *)(param_1 + 0x3c8) + uVar5 * 2) =
               (short)(uint)((ulonglong)((longlong)iVar3 * 0x14f8b589) >> 0x2d) -
               (short)(iVar3 >> 0x1f);
          iVar3 = *(int *)(param_4 + uVar5 * 4);
          uVar2 = (undefined2)((iVar3 / 2 + 25600000) / iVar3);
          plVar4 = (longlong *)(param_1 + 0x3c0);
        }
        *(undefined2 *)(*plVar4 + uVar5 * 2) = uVar2;
        uVar5 = uVar5 + 1;
      } while (param_3 != uVar5);
    }
    uVar1 = *param_5;
    if (99999 < (int)uVar1) {
      **(undefined2 **)(param_1 + 0x3d8) = (short)(((uVar1 >> 1) + 800000) / uVar1);
      **(undefined2 **)(param_1 + 0x3d0) = (short)((ulonglong)(*param_5 * 8 + 50000 >> 5) / 0xc35);
    }
    uVar1 = param_5[1];
    if (99999 < (int)uVar1) {
      *(short *)(*(longlong *)(param_1 + 0x3d8) + 2) = (short)(((uVar1 >> 1) + 800000) / uVar1);
      *(short *)(*(longlong *)(param_1 + 0x3d0) + 2) =
           (short)((ulonglong)(param_5[1] * 8 + 50000 >> 5) / 0xc35);
    }
    uVar1 = param_5[2];
    if (99999 < (int)uVar1) {
      *(short *)(*(longlong *)(param_1 + 0x3d8) + 4) = (short)(((uVar1 >> 1) + 800000) / uVar1);
      *(short *)(*(longlong *)(param_1 + 0x3d0) + 4) =
           (short)((ulonglong)(param_5[2] * 8 + 50000 >> 5) / 0xc35);
    }
    uVar1 = param_5[3];
    if (99999 < (int)uVar1) {
      *(short *)(*(longlong *)(param_1 + 0x3d8) + 6) = (short)(((uVar1 >> 1) + 800000) / uVar1);
      *(short *)(*(longlong *)(param_1 + 0x3d0) + 6) =
           (short)((ulonglong)(param_5[3] * 8 + 50000 >> 5) / 0xc35);
    }
    uVar1 = param_5[4];
    if (99999 < (int)uVar1) {
      *(short *)(*(longlong *)(param_1 + 0x3d8) + 8) = (short)(((uVar1 >> 1) + 800000) / uVar1);
      *(short *)(*(longlong *)(param_1 + 0x3d0) + 8) =
           (short)((ulonglong)(param_5[4] * 8 + 50000 >> 5) / 0xc35);
    }
  }
  return;
}



// FUNCTION 1424f5a30 png_set_compression_level body=19 status=ok
// SIG undefined png_set_compression_level(void)

void png_set_compression_level(longlong param_1,undefined4 param_2)

{
                    /* 0x24f5a30  759  png_set_compression_level */
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x158) = *(byte *)(param_1 + 0x158) | 2;
    *(undefined4 *)(param_1 + 0x1c4) = param_2;
  }
  return;
}



// FUNCTION 1424f5a50 png_set_compression_mem_level body=19 status=ok
// SIG undefined png_set_compression_mem_level(void)

void png_set_compression_mem_level(longlong param_1,undefined4 param_2)

{
                    /* 0x24f5a50  760  png_set_compression_mem_level */
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x158) = *(byte *)(param_1 + 0x158) | 4;
    *(undefined4 *)(param_1 + 0x1d0) = param_2;
  }
  return;
}



// FUNCTION 1424f5a70 png_set_compression_strategy body=19 status=ok
// SIG undefined png_set_compression_strategy(void)

void png_set_compression_strategy(longlong param_1,undefined4 param_2)

{
                    /* 0x24f5a70  762  png_set_compression_strategy */
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x158) = *(byte *)(param_1 + 0x158) | 1;
    *(undefined4 *)(param_1 + 0x1d4) = param_2;
  }
  return;
}



// FUNCTION 1424f5a90 png_set_compression_window_bits body=97 status=ok
// SIG undefined png_set_compression_window_bits(void)

void png_set_compression_window_bits(longlong param_1,int param_2)

{
  char *pcVar1;
  
                    /* 0x24f5a90  763  png_set_compression_window_bits */
  if (param_1 == 0) {
    return;
  }
  if (param_2 < 0x10) {
    if (7 < param_2) {
      if (param_2 == 8) {
        png_warning(param_1,"Compression window is being reset to 512");
        param_2 = 9;
      }
      goto LAB_1424f5ac2;
    }
    pcVar1 = "Only compression windows >= 256 supported by PNG";
  }
  else {
    pcVar1 = "Only compression windows <= 32k supported by PNG";
  }
  png_warning(param_1,pcVar1);
LAB_1424f5ac2:
  *(byte *)(param_1 + 0x158) = *(byte *)(param_1 + 0x158) | 8;
  *(int *)(param_1 + 0x1cc) = param_2;
  return;
}



// FUNCTION 1424f5b00 png_set_compression_method body=56 status=ok
// SIG undefined png_set_compression_method(void)

void png_set_compression_method(longlong param_1,int param_2)

{
                    /* 0x24f5b00  761  png_set_compression_method */
  if (param_1 != 0) {
    if (param_2 != 8) {
      png_warning(param_1,"Only compression method 8 is supported by PNG");
    }
    *(byte *)(param_1 + 0x158) = *(byte *)(param_1 + 0x158) | 0x10;
    *(int *)(param_1 + 0x1c8) = param_2;
  }
  return;
}



// FUNCTION 1424f5b40 png_set_write_status_fn body=13 status=ok
// SIG undefined png_set_write_status_fn(void)

void png_set_write_status_fn(longlong param_1,undefined8 param_2)

{
                    /* 0x24f5b40  824  png_set_write_status_fn */
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x308) = param_2;
  }
  return;
}



// FUNCTION 1424f5b50 png_set_write_user_transform_fn body=20 status=ok
// SIG undefined png_set_write_user_transform_fn(void)

void png_set_write_user_transform_fn(longlong param_1,undefined8 param_2)

{
                    /* 0x24f5b50  825  png_set_write_user_transform_fn */
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x15e) = *(byte *)(param_1 + 0x15e) | 0x10;
    *(undefined8 *)(param_1 + 0x140) = param_2;
  }
  return;
}



// FUNCTION 1424f5b70 png_write_png body=425 status=ok
// SIG undefined png_write_png(void)

/* WARNING: Type propagation algorithm not settling */

void png_write_png(longlong param_1,longlong param_2,ulonglong param_3)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  
                    /* 0x24f5b70  838  png_write_png */
  if ((param_1 == 0) || (param_2 == 0)) {
    return;
  }
  png_write_info(param_1,param_2);
  if ((param_3 & 0x20) != 0) {
    png_set_invert_mono(param_1);
  }
  if (((param_3 & 0x40) != 0) && ((*(byte *)(param_2 + 8) & 2) != 0)) {
    png_set_shift(param_1,param_2 + 0x58);
  }
  if ((param_3 & 4) == 0) {
    if ((param_3 & 0x100) != 0) goto LAB_1424f5c34;
LAB_1424f5bd1:
    if ((param_3 & 0x1000) != 0) goto LAB_1424f5c44;
LAB_1424f5bd9:
    if ((param_3 & 0x800) == 0) goto joined_r0x0001424f5c60;
    uVar7 = 0;
  }
  else {
    png_set_packing(param_1);
    if ((param_3 & 0x100) == 0) goto LAB_1424f5bd1;
LAB_1424f5c34:
    png_set_swap_alpha(param_1);
    if ((param_3 & 0x1000) == 0) goto LAB_1424f5bd9;
LAB_1424f5c44:
    uVar7 = 1;
  }
  png_set_filler(param_1,0,uVar7);
joined_r0x0001424f5c60:
  if ((char)param_3 < '\0') {
    png_set_bgr(param_1);
  }
  if ((param_3 & 0x200) != 0) {
    png_set_swap(param_1);
  }
  if ((param_3 & 8) != 0) {
    png_set_packswap(param_1);
  }
  if ((param_3 & 0x400) == 0) {
    sVar1 = *(short *)(param_2 + 8);
  }
  else {
    png_set_invert_alpha(param_1);
    sVar1 = *(short *)(param_2 + 8);
  }
  if (sVar1 < 0) {
    lVar2 = *(longlong *)(param_2 + 0x138);
    iVar3 = png_set_interlace_handling(param_1);
    if (0 < iVar3) {
      uVar4 = *(uint *)(param_1 + 0x1dc);
      iVar5 = 0;
      do {
        bVar8 = uVar4 != 0;
        uVar4 = 0;
        if (bVar8) {
          lVar6 = 0;
          do {
            png_write_row(param_1,*(undefined8 *)(lVar2 + lVar6 * 8));
            uVar4 = *(uint *)(param_1 + 0x1dc);
            lVar6 = lVar6 + 1;
          } while ((uint)lVar6 < uVar4);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != iVar3);
    }
  }
  png_write_end(param_1,param_2);
  return;
}



// FUNCTION 1424f5d20 FUN_1424f5d20 body=72 status=ok
// SIG undefined FUN_1424f5d20(void)

void * FUN_1424f5d20(int param_1)

{
  void *_Dst;
  size_t _Size;
  
  if (param_1 == 2) {
    _Size = 0x140;
  }
  else {
    if (param_1 != 1) {
      return (void *)0x0;
    }
    _Size = 0x4b0;
  }
  _Dst = malloc(_Size);
  if (_Dst == (void *)0x0) {
    return (void *)0x0;
  }
  memset(_Dst,0,_Size);
  return _Dst;
}



// FUNCTION 1424f5d70 FUN_1424f5d70 body=138 status=ok
// SIG undefined FUN_1424f5d70(void)

void FUN_1424f5d70(int param_1,code *param_2,undefined8 param_3)

{
  void *_Dst;
  size_t _Size;
  undefined1 auStack_4e8 [32];
  undefined1 local_4c8 [1056];
  undefined8 local_a8;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  if (param_1 == 2) {
    _Size = 0x140;
    if (param_2 != (code *)0x0) goto LAB_1424f5da2;
LAB_1424f5dc8:
    _Dst = malloc(_Size);
  }
  else {
    if (param_1 != 1) goto LAB_1424f5dea;
    _Size = 0x4b0;
    if (param_2 == (code *)0x0) goto LAB_1424f5dc8;
LAB_1424f5da2:
    local_a8 = param_3;
    _Dst = (void *)(*param_2)(local_4c8);
  }
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,_Size);
  }
LAB_1424f5dea:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_4e8);
}



// FUNCTION 1424f5e10 FUN_1424f5e10 body=13 status=ok
// SIG undefined FUN_1424f5e10(void)

void FUN_1424f5e10(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424f5e15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    free(param_1);
    return;
  }
  return;
}



// FUNCTION 1424f5e20 FUN_1424f5e20 body=92 status=ok
// SIG undefined FUN_1424f5e20(void)

void FUN_1424f5e20(longlong param_1,code *param_2,undefined8 param_3)

{
  undefined1 auStack_4e8 [32];
  undefined1 local_4c8 [1056];
  undefined8 local_a8;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  if (param_1 != 0) {
    if (param_2 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_4e8);
    }
    local_a8 = param_3;
    (*param_2)(local_4c8,param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_4e8);
}



// FUNCTION 1424f5ea0 png_calloc body=118 status=ok
// SIG undefined png_calloc(void)

void * png_calloc(longlong param_1,size_t param_2)

{
  code *pcVar1;
  void *_Dst;
  
                    /* 0x24f5ea0  632  png_calloc */
  _Dst = (void *)0x0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(code **)(param_1 + 0x428) == (code *)0x0) {
      _Dst = malloc(param_2);
    }
    else {
      _Dst = (void *)(**(code **)(param_1 + 0x428))(param_1);
    }
    if (_Dst == (void *)0x0) {
      if ((*(byte *)(param_1 + 0x15a) & 0x10) == 0) {
        png_error(param_1,"Out of Memory");
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      _Dst = (void *)0x0;
    }
    else {
      memset(_Dst,0,param_2);
    }
  }
  return _Dst;
}



// FUNCTION 1424f5f20 png_malloc body=92 status=ok
// SIG undefined png_malloc(void)

void * png_malloc(longlong param_1,size_t param_2)

{
  code *pcVar1;
  void *pvVar2;
  
                    /* 0x24f5f20  731  png_malloc */
  pvVar2 = (void *)0x0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(code **)(param_1 + 0x428) == (code *)0x0) {
      pvVar2 = malloc(param_2);
    }
    else {
      pvVar2 = (void *)(**(code **)(param_1 + 0x428))(param_1);
    }
    if (pvVar2 == (void *)0x0) {
      if ((*(byte *)(param_1 + 0x15a) & 0x10) == 0) {
        png_error(param_1,"Out of Memory");
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      pvVar2 = (void *)0x0;
    }
  }
  return pvVar2;
}



// FUNCTION 1424f5f80 png_malloc_default body=23 status=ok
// SIG undefined png_malloc_default(void)

void * png_malloc_default(longlong param_1,size_t param_2)

{
  void *pvVar1;
  
                    /* 0x24f5f80  732  png_malloc_default */
  if ((param_1 != 0) && (param_2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001424f5f8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = malloc(param_2);
    return pvVar1;
  }
  return (void *)0x0;
}



// FUNCTION 1424f5fa0 png_free body=36 status=ok
// SIG undefined png_free(void)

void png_free(longlong param_1,void *param_2)

{
                    /* 0x24f5fa0  649  png_free */
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    if (*(code **)(param_1 + 0x430) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424f5fb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x430))();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001424f5fbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    free(param_2);
    return;
  }
  return;
}



// FUNCTION 1424f5fd0 png_free_default body=21 status=ok
// SIG undefined png_free_default(void)

void png_free_default(longlong param_1,void *param_2)

{
                    /* 0x24f5fd0  651  png_free_default */
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001424f5fdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    free(param_2);
    return;
  }
  return;
}



// FUNCTION 1424f5ff0 png_malloc_warn body=121 status=ok
// SIG undefined png_malloc_warn(void)

void * png_malloc_warn(longlong param_1,size_t param_2)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  
                    /* 0x24f5ff0  733  png_malloc_warn */
  if (param_1 == 0) {
    return (void *)0x0;
  }
  uVar1 = *(uint *)(param_1 + 0x158);
  *(uint *)(param_1 + 0x158) = uVar1 | 0x100000;
  if (param_2 != 0) {
    if (*(code **)(param_1 + 0x428) == (code *)0x0) {
      pvVar3 = malloc(param_2);
    }
    else {
      pvVar3 = (void *)(**(code **)(param_1 + 0x428))(param_1);
    }
    if (pvVar3 != (void *)0x0) goto LAB_1424f6037;
    if ((*(byte *)(param_1 + 0x15a) & 0x10) == 0) {
      png_error(param_1,"Out of Memory");
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  pvVar3 = (void *)0x0;
LAB_1424f6037:
  *(uint *)(param_1 + 0x158) = uVar1;
  return pvVar3;
}



// FUNCTION 1424f6070 png_set_mem_fn body=27 status=ok
// SIG undefined png_set_mem_fn(void)

void png_set_mem_fn(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* 0x24f6070  787  png_set_mem_fn */
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x420) = param_2;
    *(undefined8 *)(param_1 + 0x428) = param_3;
    *(undefined8 *)(param_1 + 0x430) = param_4;
  }
  return;
}



// FUNCTION 1424f6090 png_get_mem_ptr body=16 status=ok
// SIG undefined png_get_mem_ptr(void)

undefined8 png_get_mem_ptr(longlong param_1)

{
                    /* 0x24f6090  684  png_get_mem_ptr */
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x420);
  }
  return 0;
}



// FUNCTION 1424f60a0 png_error body=50 status=ok
// SIG undefined png_error(void)

void png_error(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  
                    /* 0x24f60a0  648  png_error */
  if ((param_1 != 0) && (*(code **)(param_1 + 0x108) != (code *)0x0)) {
    (**(code **)(param_1 + 0x108))(param_1,param_2);
  }
  FUN_1424f60e0(param_1,param_2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1424f60e0 FUN_1424f60e0 body=80 status=ok
// SIG undefined FUN_1424f60e0(void)

void FUN_1424f60e0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  FILE *_File;
  
  uVar2 = __acrt_iob_func(2);
  FUN_146c958a0(uVar2,"libpng error: %s",param_2);
  _File = (FILE *)__acrt_iob_func(2);
  fputc(10,_File);
  png_longjmp(param_1,1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1424f6130 png_warning body=284 status=ok
// SIG undefined png_warning(void)

void png_warning(longlong param_1,char *param_2)

{
  undefined8 uVar1;
  FILE *_File;
  ulonglong uVar2;
  
                    /* 0x24f6130  828  png_warning */
  uVar2 = 0;
  if (param_1 != 0) {
    if (((((*param_2 == '#') && (uVar2 = 1, param_2[1] != ' ')) && (uVar2 = 2, param_2[2] != ' '))
        && ((((uVar2 = 3, param_2[3] != ' ' && (uVar2 = 4, param_2[4] != ' ')) &&
             ((uVar2 = 5, param_2[5] != ' ' &&
              ((uVar2 = 6, param_2[6] != ' ' && (uVar2 = 7, param_2[7] != ' ')))))) &&
            (uVar2 = 8, param_2[8] != ' ')))) &&
       ((((uVar2 = 9, param_2[9] != ' ' && (uVar2 = 10, param_2[10] != ' ')) &&
         (uVar2 = 0xb, param_2[0xb] != ' ')) &&
        ((uVar2 = 0xc, param_2[0xc] != ' ' && (uVar2 = 0xd, param_2[0xd] != ' ')))))) {
      uVar2 = (ulonglong)(param_2[0xe] == ' ' ^ 0xf);
    }
    if (*(code **)(param_1 + 0x110) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424f620a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x110))(param_1,param_2 + uVar2);
      return;
    }
  }
  uVar1 = __acrt_iob_func(2);
  FUN_146c958a0(uVar1,"libpng warning: %s",param_2 + uVar2);
  _File = (FILE *)__acrt_iob_func(2);
  fputc(10,_File);
  return;
}



// FUNCTION 1424f6250 png_benign_error body=29 status=ok
// SIG undefined png_benign_error(void)

void png_benign_error(longlong param_1)

{
  code *pcVar1;
  
                    /* 0x24f6250  630  png_benign_error */
  if ((*(byte *)(param_1 + 0x15a) & 0x80) != 0) {
    png_warning();
    return;
  }
  png_error();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1424f6270 png_chunk_error body=55 status=ok
// SIG undefined png_chunk_error(void)

void png_chunk_error(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 local_68 [88];
  
                    /* 0x24f6270  634  png_chunk_error */
  if (param_1 == 0) {
    png_error(0,param_2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  FUN_1424f62b0(param_1,local_68);
  png_error(param_1,local_68);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1424f62b0 FUN_1424f62b0 body=416 status=ok
// SIG undefined FUN_1424f62b0(void)

void FUN_1424f62b0(longlong param_1,byte *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  byte bVar10;
  ulonglong uVar11;
  
  bVar10 = *(byte *)(param_1 + 0x254);
  if (((byte)(bVar10 + 0xbf) < 0x3a) && (5 < (byte)(bVar10 + 0xa5))) {
    *param_2 = bVar10;
    uVar9 = 1;
  }
  else {
    *param_2 = 0x5b;
    param_2[1] = "0123456789ABCDEFfixed point overflow in "[bVar10 >> 4];
    param_2[2] = "0123456789ABCDEFfixed point overflow in "[bVar10 & 0xf];
    param_2[3] = 0x5d;
    uVar9 = 4;
  }
  bVar10 = *(byte *)(param_1 + 0x255);
  if ((0x39 < (byte)(bVar10 + 0xbf)) || ((byte)(bVar10 + 0xa5) < 6)) {
    uVar8 = (ulonglong)uVar9;
    param_2[uVar8] = 0x5b;
    param_2[uVar8 + 1] = "0123456789ABCDEFfixed point overflow in "[bVar10 >> 4];
    uVar9 = uVar9 + 3;
    param_2[uVar8 | 2] = "0123456789ABCDEFfixed point overflow in "[bVar10 & 0xf];
    bVar10 = 0x5d;
  }
  uVar11 = (ulonglong)uVar9;
  param_2[uVar11] = bVar10;
  uVar8 = uVar11 + 1;
  bVar10 = *(byte *)(param_1 + 0x256);
  if ((0x39 < (byte)(bVar10 + 0xbf)) || ((byte)(bVar10 + 0xa5) < 6)) {
    param_2[uVar8] = 0x5b;
    param_2[uVar11 + 2] = "0123456789ABCDEFfixed point overflow in "[bVar10 >> 4];
    param_2[uVar11 + 3] = "0123456789ABCDEFfixed point overflow in "[bVar10 & 0xf];
    bVar10 = 0x5d;
    uVar8 = (ulonglong)(uVar9 + 4);
  }
  param_2[uVar8] = bVar10;
  uVar11 = uVar8 + 1;
  bVar10 = *(byte *)(param_1 + 599);
  if ((0x39 < (byte)(bVar10 + 0xbf)) || ((byte)(bVar10 + 0xa5) < 6)) {
    param_2[uVar11] = 0x5b;
    param_2[uVar8 + 2] = "0123456789ABCDEFfixed point overflow in "[bVar10 >> 4];
    param_2[uVar8 + 3] = "0123456789ABCDEFfixed point overflow in "[bVar10 & 0xf];
    bVar10 = 0x5d;
    uVar11 = (ulonglong)((int)uVar8 + 4);
  }
  param_2[uVar11] = bVar10;
  if (param_3 == (undefined8 *)0x0) {
    uVar9 = (uint)(uVar11 + 1);
  }
  else {
    param_2[uVar11 + 1] = 0x3a;
    uVar8 = (ulonglong)((int)uVar11 + 3);
    param_2[uVar11 + 2] = 0x20;
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    uVar5 = param_3[4];
    uVar6 = param_3[5];
    uVar7 = param_3[7];
    *(undefined8 *)(param_2 + uVar8 + 0x30) = param_3[6];
    *(undefined8 *)(param_2 + uVar8 + 0x30 + 8) = uVar7;
    *(undefined8 *)(param_2 + uVar8 + 0x20) = uVar5;
    *(undefined8 *)(param_2 + uVar8 + 0x20 + 8) = uVar6;
    *(undefined8 *)(param_2 + uVar8 + 0x10) = uVar3;
    *(undefined8 *)(param_2 + uVar8 + 0x10 + 8) = uVar4;
    *(undefined8 *)(param_2 + uVar8) = uVar1;
    *(undefined8 *)(param_2 + uVar8 + 8) = uVar2;
    uVar9 = (int)uVar11 + 0x42;
  }
  param_2[uVar9] = 0;
  return;
}



// FUNCTION 1424f6450 png_chunk_warning body=130 status=ok
// SIG undefined png_chunk_warning(void)

void png_chunk_warning(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  FILE *_File;
  undefined1 auStack_98 [32];
  undefined1 local_78 [88];
  ulonglong local_20;
  
                    /* 0x24f6450  635  png_chunk_warning */
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == 0) {
    uVar1 = __acrt_iob_func(2);
    FUN_146c958a0(uVar1,"libpng warning: %s",param_2);
    _File = (FILE *)__acrt_iob_func(2);
    fputc(10,_File);
  }
  else {
    FUN_1424f62b0(param_1,local_78,param_2);
    png_warning(param_1,local_78);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 1424f64e0 png_chunk_benign_error body=98 status=ok
// SIG undefined png_chunk_benign_error(void)

void png_chunk_benign_error(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
                    /* 0x24f64e0  633  png_chunk_benign_error */
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_1 + 0x15a) & 0x80) != 0) {
    FUN_1424f62b0(param_1,local_78);
    png_warning(param_1,local_78);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  png_chunk_error(param_1,param_2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1424f6550 FUN_1424f6550 body=134 status=ok
// SIG undefined FUN_1424f6550(void)

void FUN_1424f6550(undefined8 param_1,longlong param_2)

{
  char cVar1;
  code *pcVar2;
  ulonglong uVar3;
  char local_58 [88];
  
  builtin_strncpy(local_58 + 0x10,"flow in ",8);
  builtin_strncpy(local_58,"fixed point over",0x10);
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      if (*(char *)(param_2 + uVar3) == '\0') break;
      local_58[uVar3 + 0x18] = *(char *)(param_2 + uVar3);
      cVar1 = *(char *)(param_2 + 1 + uVar3);
      if (cVar1 == '\0') {
        uVar3 = uVar3 + 1;
        break;
      }
      local_58[uVar3 + 0x19] = cVar1;
      cVar1 = *(char *)(param_2 + 2 + uVar3);
      if (cVar1 == '\0') {
        uVar3 = uVar3 + 2;
        break;
      }
      local_58[uVar3 + 0x1a] = cVar1;
      uVar3 = uVar3 + 3;
    } while (uVar3 < 0x3f);
  }
  local_58[(uVar3 & 0xffffffff) + 0x18] = '\0';
  png_error(0x65786966,local_58);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 1424f65e0 png_set_longjmp_fn body=27 status=ok
// SIG undefined png_set_longjmp_fn(void)

longlong png_set_longjmp_fn(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
                    /* 0x24f65e0  786  png_set_longjmp_fn */
  lVar1 = 0;
  if ((param_1 != 0) && (param_3 == 0x100)) {
    *(undefined8 *)(param_1 + 0x100) = param_2;
    lVar1 = param_1;
  }
  return lVar1;
}



// FUNCTION 1424f6600 png_longjmp body=50 status=ok
// SIG undefined png_longjmp(void)

void png_longjmp(longlong param_1)

{
  HANDLE hProcess;
  
                    /* 0x24f6600  730  png_longjmp */
  if ((param_1 != 0) && (*(code **)(param_1 + 0x100) != (code *)0x0)) {
    (**(code **)(param_1 + 0x100))();
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 1424f6640 png_set_error_fn body=27 status=ok
// SIG undefined png_set_error_fn(void)

void png_set_error_fn(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* 0x24f6640  765  png_set_error_fn */
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x118) = param_2;
    *(undefined8 *)(param_1 + 0x108) = param_3;
    *(undefined8 *)(param_1 + 0x110) = param_4;
  }
  return;
}



// FUNCTION 1424f6660 png_get_error_ptr body=16 status=ok
// SIG undefined png_get_error_ptr(void)

undefined8 png_get_error_ptr(longlong param_1)

{
                    /* 0x24f6660  667  png_get_error_ptr */
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x118);
  }
  return 0;
}



// FUNCTION 1424f6670 png_set_bKGD body=34 status=ok
// SIG undefined png_set_bKGD(void)

void png_set_bKGD(longlong param_1,longlong param_2,undefined8 *param_3)

{
                    /* 0x24f6670  749  png_set_bKGD */
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined2 *)(param_2 + 0x82) = *(undefined2 *)(param_3 + 1);
    *(undefined8 *)(param_2 + 0x7a) = *param_3;
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 0x20;
  }
  return;
}



// FUNCTION 1424f66a0 png_set_cHRM_fixed body=211 status=ok
// SIG undefined png_set_cHRM_fixed(void)

void png_set_cHRM_fixed(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  
                    /* 0x24f66a0  755  png_set_cHRM_fixed */
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = FUN_1424f0090(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
    if (iVar1 != 0) {
      *(undefined4 *)(param_2 + 0xa8) = param_3;
      *(undefined4 *)(param_2 + 0xac) = param_4;
      *(undefined4 *)(param_2 + 0xb0) = param_5;
      *(undefined4 *)(param_2 + 0xb4) = param_6;
      *(undefined4 *)(param_2 + 0xb8) = param_7;
      *(undefined4 *)(param_2 + 0xbc) = param_8;
      *(undefined4 *)(param_2 + 0xc0) = param_9;
      *(undefined4 *)(param_2 + 0xc4) = param_10;
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
    }
  }
  return;
}



// FUNCTION 1424f6780 png_set_cHRM body=506 status=ok
// SIG undefined png_set_cHRM(void)

void png_set_cHRM(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
                    /* 0x24f6780  754  png_set_cHRM */
  uVar1 = FUN_1424f11f0(param_1,param_10,"cHRM Blue Y");
  uVar2 = FUN_1424f11f0(param_1,param_9,"cHRM Blue X");
  uVar3 = FUN_1424f11f0(param_1,param_8,"cHRM Green Y");
  uVar4 = FUN_1424f11f0(param_1,param_7,"cHRM Green X");
  uVar5 = FUN_1424f11f0(param_1,param_6,"cHRM Red Y");
  uVar6 = FUN_1424f11f0(param_1,param_5,"cHRM Red X");
  uVar7 = FUN_1424f11f0(param_1,param_4,"cHRM White Y");
  uVar8 = FUN_1424f11f0(param_1,param_3,"cHRM White X");
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar9 = FUN_1424f0090(param_1,uVar8,uVar7,uVar6,uVar5,uVar4,uVar3,uVar2,uVar1);
    if (iVar9 != 0) {
      *(undefined4 *)(param_2 + 0xa8) = uVar8;
      *(undefined4 *)(param_2 + 0xac) = uVar7;
      *(undefined4 *)(param_2 + 0xb0) = uVar6;
      *(undefined4 *)(param_2 + 0xb4) = uVar5;
      *(undefined4 *)(param_2 + 0xb8) = uVar4;
      *(undefined4 *)(param_2 + 0xbc) = uVar3;
      *(undefined4 *)(param_2 + 0xc0) = uVar2;
      *(undefined4 *)(param_2 + 0xc4) = uVar1;
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
    }
  }
  return;
}



// FUNCTION 1424f6980 png_set_gAMA_fixed body=36 status=ok
// SIG undefined png_set_gAMA_fixed(void)

void png_set_gAMA_fixed(longlong param_1,longlong param_2,int param_3)

{
                    /* 0x24f6980  775  png_set_gAMA_fixed */
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_3 < 1) {
      png_warning(param_1,"Negative or zero gamma ignored");
      return;
    }
    *(int *)(param_2 + 0x34) = param_3;
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 1;
  }
  return;
}



// FUNCTION 1424f69b0 png_set_gAMA body=76 status=ok
// SIG undefined png_set_gAMA(void)

void png_set_gAMA(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  
                    /* 0x24f69b0  774  png_set_gAMA */
  iVar1 = FUN_1424f11f0(param_1,param_3,"png_set_gAMA");
  if ((param_1 != 0) && (param_2 != 0)) {
    if (iVar1 < 1) {
      png_warning(param_1,"Negative or zero gamma ignored");
      return;
    }
    *(int *)(param_2 + 0x34) = iVar1;
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 1;
  }
  return;
}



// FUNCTION 1424f6a00 png_set_hIST body=227 status=ok
// SIG undefined png_set_hIST(void)

void png_set_hIST(longlong param_1,longlong param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  char *pcVar3;
  
                    /* 0x24f6a00  779  png_set_hIST */
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(int *)(param_2 + 0x20) - 1U & 0xffff) < 0x100) {
      png_free_data(param_1,param_2,8,0);
      puVar1 = (undefined2 *)png_malloc_warn(param_1,0x200);
      *(undefined2 **)(param_1 + 0x3a8) = puVar1;
      if (puVar1 != (undefined2 *)0x0) {
        if (*(short *)(param_2 + 0x20) != 0) {
          *puVar1 = *param_3;
          if (1 < *(ushort *)(param_2 + 0x20)) {
            uVar2 = 1;
            do {
              *(undefined2 *)(*(longlong *)(param_1 + 0x3a8) + uVar2 * 2) = param_3[uVar2];
              uVar2 = uVar2 + 1;
            } while (uVar2 < *(ushort *)(param_2 + 0x20));
          }
          puVar1 = *(undefined2 **)(param_1 + 0x3a8);
        }
        *(undefined2 **)(param_2 + 0xa0) = puVar1;
        *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 0x40;
        *(byte *)(param_2 + 0xec) = *(byte *)(param_2 + 0xec) | 8;
        return;
      }
      pcVar3 = "Insufficient memory for hIST chunk data";
    }
    else {
      pcVar3 = "Invalid palette size, hIST allocation skipped";
    }
    png_warning(param_1,pcVar3);
    return;
  }
  return;
}



// FUNCTION 1424f6af0 png_set_IHDR body=249 status=ok
// SIG undefined png_set_IHDR(void)

void png_set_IHDR(longlong param_1,uint *param_2,uint param_3,uint param_4,undefined1 param_5,
                 undefined1 param_6,undefined1 param_7,undefined1 param_8,undefined1 param_9)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  
                    /* 0x24f6af0  746  png_set_IHDR */
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    *param_2 = param_3;
    param_2[1] = param_4;
    *(undefined1 *)(param_2 + 9) = param_5;
    *(undefined1 *)((longlong)param_2 + 0x25) = param_6;
    *(undefined1 *)((longlong)param_2 + 0x26) = param_8;
    *(undefined1 *)((longlong)param_2 + 0x27) = param_9;
    *(undefined1 *)(param_2 + 10) = param_7;
    FUN_1424f0250(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    bVar1 = *(byte *)((longlong)param_2 + 0x25);
    if (bVar1 == 3) {
      *(undefined1 *)((longlong)param_2 + 0x29) = 1;
      bVar2 = 1;
    }
    else {
      bVar2 = bVar1 & 2 | 1;
      *(byte *)((longlong)param_2 + 0x29) = bVar2;
      if ((bVar1 & 4) != 0) {
        bVar2 = bVar2 + 1;
        *(byte *)((longlong)param_2 + 0x29) = bVar2;
      }
    }
    bVar2 = (char)param_2[9] * bVar2;
    *(byte *)((longlong)param_2 + 0x2a) = bVar2;
    if (param_3 < 0x1fffff8f) {
      if (bVar2 < 8) {
        uVar3 = (ulonglong)bVar2 * (ulonglong)param_3 + 7 >> 3;
      }
      else {
        uVar3 = (ulonglong)(bVar2 >> 3) * (ulonglong)param_3;
      }
    }
    else {
      uVar3 = 0;
    }
    *(ulonglong *)(param_2 + 4) = uVar3;
  }
  return;
}



// FUNCTION 1424f6bf0 png_set_oFFs body=39 status=ok
// SIG undefined png_set_oFFs(void)

void png_set_oFFs(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
                    /* 0x24f6bf0  788  png_set_oFFs */
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x84) = param_3;
    *(undefined4 *)(param_2 + 0x88) = param_4;
    *(undefined1 *)(param_2 + 0x8c) = param_5;
    *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 1;
  }
  return;
}



// FUNCTION 1424f6c20 png_set_pCAL body=709 status=ok
// SIG undefined png_set_pCAL(void)

void png_set_pCAL(longlong param_1,longlong param_2,LPCSTR param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,int param_7,LPCSTR param_8,longlong param_9)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  
                    /* 0x24f6c20  789  png_set_pCAL */
  if ((param_1 == 0) || (param_2 == 0)) {
    return;
  }
  iVar2 = MultiByteToWideChar(0,0,param_3,-1,(LPWSTR)0x0,0);
  if (3 < param_6) {
    pcVar6 = "Invalid pCAL equation type";
LAB_1424f6ed0:
    png_error(param_1,pcVar6);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (0 < param_7) {
    lVar7 = 0;
    do {
      MultiByteToWideChar(0,0,*(LPCSTR *)(param_9 + lVar7 * 8),-1,(LPWSTR)0x0,0);
      iVar3 = FUN_1424f06b0();
      if (iVar3 == 0) {
        pcVar6 = "Invalid format for pCAL parameter";
        goto LAB_1424f6ed0;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_7);
  }
  pvVar4 = (void *)png_malloc_warn(param_1,(longlong)(iVar2 + 1));
  *(void **)(param_2 + 200) = pvVar4;
  if (pvVar4 == (void *)0x0) {
    pcVar6 = "Insufficient memory for pCAL purpose";
  }
  else {
    memcpy(pvVar4,param_3,(longlong)(iVar2 + 1));
    *(undefined4 *)(param_2 + 0xd0) = param_4;
    *(undefined4 *)(param_2 + 0xd4) = param_5;
    *(char *)(param_2 + 0xe8) = (char)param_6;
    *(char *)(param_2 + 0xe9) = (char)param_7;
    iVar2 = MultiByteToWideChar(0,0,param_8,-1,(LPWSTR)0x0,0);
    pvVar4 = (void *)png_malloc_warn(param_1,(longlong)(iVar2 + 1));
    *(void **)(param_2 + 0xd8) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      pcVar6 = "Insufficient memory for pCAL units";
    }
    else {
      memcpy(pvVar4,param_8,(longlong)(iVar2 + 1));
      pvVar4 = (void *)png_malloc_warn(param_1);
      *(void **)(param_2 + 0xe0) = pvVar4;
      if (pvVar4 != (void *)0x0) {
        memset(pvVar4,0,(longlong)param_7 * 8 + 8);
        if (0 < param_7) {
          lVar7 = 0;
          do {
            iVar2 = MultiByteToWideChar(0,0,*(LPCSTR *)(param_9 + lVar7 * 8),-1,(LPWSTR)0x0,0);
            uVar5 = png_malloc_warn(param_1,(longlong)(iVar2 + 1));
            *(undefined8 *)(*(longlong *)(param_2 + 0xe0) + lVar7 * 8) = uVar5;
            pvVar4 = *(void **)(*(longlong *)(param_2 + 0xe0) + lVar7 * 8);
            if (pvVar4 == (void *)0x0) {
              pcVar6 = "Insufficient memory for pCAL parameter";
              goto LAB_1424f6eb1;
            }
            memcpy(pvVar4,*(void **)(param_9 + lVar7 * 8),(longlong)(iVar2 + 1));
            lVar7 = lVar7 + 1;
          } while (lVar7 < param_7);
        }
        *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 4;
        *(byte *)(param_2 + 0xec) = *(byte *)(param_2 + 0xec) | 0x80;
        return;
      }
      pcVar6 = "Insufficient memory for pCAL params";
    }
  }
LAB_1424f6eb1:
  png_warning(param_1,pcVar6);
  return;
}



// FUNCTION 1424f6ef0 png_set_sCAL_s body=445 status=ok
// SIG undefined png_set_sCAL_s(void)

void png_set_sCAL_s(longlong param_1,longlong param_2,int param_3,LPCSTR param_4,LPCSTR param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  char *pcVar6;
  size_t sVar7;
  
                    /* 0x24f6ef0  805  png_set_sCAL_s */
  if ((param_1 == 0) || (param_2 == 0)) {
    return;
  }
  if (param_3 - 1U < 2) {
    if (((param_4 != (LPCSTR)0x0) &&
        (iVar2 = MultiByteToWideChar(0,0,param_4,-1,(LPWSTR)0x0,0), iVar2 != 0)) &&
       (*param_4 != '-')) {
      iVar3 = FUN_1424f06b0(param_4,(longlong)iVar2);
      if (iVar3 != 0) {
        if (((param_5 != (LPCSTR)0x0) &&
            (iVar3 = MultiByteToWideChar(0,0,param_5,-1,(LPWSTR)0x0,0), iVar3 != 0)) &&
           (*param_5 != '-')) {
          iVar4 = FUN_1424f06b0(param_5,(longlong)iVar3);
          if (iVar4 != 0) {
            *(char *)(param_2 + 0x124) = (char)param_3;
            sVar7 = (longlong)iVar2 + 1;
            pvVar5 = (void *)png_malloc_warn(param_1,sVar7);
            *(void **)(param_2 + 0x128) = pvVar5;
            if (pvVar5 != (void *)0x0) {
              memcpy(pvVar5,param_4,sVar7);
              sVar7 = (longlong)iVar3 + 1;
              pvVar5 = (void *)png_malloc_warn(param_1,sVar7);
              *(void **)(param_2 + 0x130) = pvVar5;
              if (pvVar5 != (void *)0x0) {
                memcpy(pvVar5,param_5,sVar7);
                *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 0x40;
                *(byte *)(param_2 + 0xed) = *(byte *)(param_2 + 0xed) | 1;
                return;
              }
              png_free(param_1,*(undefined8 *)(param_2 + 0x128));
              *(undefined8 *)(param_2 + 0x128) = 0;
            }
            png_warning(param_1,"Memory allocation failed while processing sCAL");
            return;
          }
        }
        pcVar6 = "Invalid sCAL height";
        goto LAB_1424f70a3;
      }
    }
    pcVar6 = "Invalid sCAL width";
  }
  else {
    pcVar6 = "Invalid sCAL unit";
  }
LAB_1424f70a3:
  png_error(param_1,pcVar6);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1424f70b0 png_set_sCAL body=202 status=ok
// SIG undefined png_set_sCAL(void)

void png_set_sCAL(undefined8 param_1,undefined8 param_2,undefined4 param_3,double param_4,
                 double param_5)

{
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined1 local_78 [32];
  undefined1 local_58 [24];
  ulonglong local_40;
  
                    /* 0x24f70b0  803  png_set_sCAL */
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((0.0 < param_4) && (0.0 < param_5)) {
    local_88._0_4_ = 5;
    FUN_1424f0730(param_1,local_58,0x12);
    local_88 = (undefined1 *)CONCAT44(local_88._4_4_,5);
    FUN_1424f0730(param_1,local_78,0x12,SUB84(param_5,0));
    local_88 = local_78;
    png_set_sCAL_s(param_1,param_2,param_3,local_58);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1424f71b0 png_set_sCAL_fixed body=163 status=ok
// SIG undefined png_set_sCAL_fixed(void)

void png_set_sCAL_fixed(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,
                       int param_5)

{
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
                    /* 0x24f71b0  804  png_set_sCAL_fixed */
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((0 < param_4) && (0 < param_5)) {
    FUN_1424f0f40(param_1,local_58,0x12);
    FUN_1424f0f40(param_1,local_78,0x12,param_5);
    local_88 = local_78;
    png_set_sCAL_s(param_1,param_2,param_3,local_58);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1424f7280 png_set_pHYs body=39 status=ok
// SIG undefined png_set_pHYs(void)

void png_set_pHYs(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
                    /* 0x24f7280  790  png_set_pHYs */
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x90) = param_3;
    *(undefined4 *)(param_2 + 0x94) = param_4;
    *(undefined1 *)(param_2 + 0x98) = param_5;
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 0x80;
  }
  return;
}



// FUNCTION 1424f72b0 png_set_PLTE body=202 status=ok
// SIG undefined png_set_PLTE(void)

void png_set_PLTE(longlong param_1,longlong param_2,void *param_3,uint param_4)

{
  code *pcVar1;
  void *_Dst;
  
                    /* 0x24f72b0  747  png_set_PLTE */
  if ((param_1 != 0) && (param_2 != 0)) {
    if (0x100 < param_4) {
      if (*(char *)(param_2 + 0x25) != '\x03') {
        png_warning(param_1,"Invalid palette length");
        return;
      }
      png_error(param_1,"Invalid palette length");
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    png_free_data(param_1,param_2,0x1000,0);
    _Dst = (void *)png_calloc(param_1,0x300);
    *(void **)(param_1 + 0x248) = _Dst;
    memcpy(_Dst,param_3,(longlong)(int)param_4 * 3);
    *(void **)(param_2 + 0x18) = _Dst;
    *(short *)(param_1 + 0x250) = (short)param_4;
    *(short *)(param_2 + 0x20) = (short)param_4;
    *(byte *)(param_2 + 0xed) = *(byte *)(param_2 + 0xed) | 0x10;
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 8;
  }
  return;
}



// FUNCTION 1424f7380 png_set_sBIT body=28 status=ok
// SIG undefined png_set_sBIT(void)

void png_set_sBIT(longlong param_1,longlong param_2,undefined4 *param_3)

{
                    /* 0x24f7380  802  png_set_sBIT */
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined1 *)(param_2 + 0x5c) = *(undefined1 *)(param_3 + 1);
    *(undefined4 *)(param_2 + 0x58) = *param_3;
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 2;
  }
  return;
}



// FUNCTION 1424f73a0 png_set_sRGB body=19 status=ok
// SIG undefined png_set_sRGB(void)

void png_set_sRGB(longlong param_1,longlong param_2,undefined1 param_3)

{
                    /* 0x24f73a0  807  png_set_sRGB */
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined1 *)(param_2 + 0x38) = param_3;
    *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 8;
  }
  return;
}



// FUNCTION 1424f73c0 png_set_sRGB_gAMA_and_cHRM body=140 status=ok
// SIG undefined png_set_sRGB_gAMA_and_cHRM(void)

void png_set_sRGB_gAMA_and_cHRM(longlong param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  
                    /* 0x24f73c0  808  png_set_sRGB_gAMA_and_cHRM */
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined1 *)(param_2 + 0x38) = param_3;
    *(undefined4 *)(param_2 + 0x34) = 0xb18f;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x801;
    iVar1 = FUN_1424f0090(param_1,0x7a26,0x8084,64000,33000,30000,60000,15000,6000);
    if (iVar1 != 0) {
      *(undefined8 *)(param_2 + 0xa8) = 0x808400007a26;
      *(undefined8 *)(param_2 + 0xb0) = 0x80e80000fa00;
      *(undefined8 *)(param_2 + 0xb8) = 0xea6000007530;
      *(undefined8 *)(param_2 + 0xc0) = 0x177000003a98;
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
    }
  }
  return;
}



// FUNCTION 1424f7450 png_set_iCCP body=321 status=ok
// SIG undefined png_set_iCCP(void)

void png_set_iCCP(longlong param_1,longlong param_2,LPCSTR param_3,undefined1 param_4,void *param_5,
                 uint param_6)

{
  int iVar1;
  void *_Dst;
  void *_Dst_00;
  char *pcVar2;
  
                    /* 0x24f7450  780  png_set_iCCP */
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != (LPCSTR)0x0)) && (param_5 != (void *)0x0))
  {
    iVar1 = MultiByteToWideChar(0,0,param_3,-1,(LPWSTR)0x0,0);
    _Dst = (void *)png_malloc_warn(param_1,(ulonglong)(iVar1 + 1));
    if (_Dst == (void *)0x0) {
      pcVar2 = "Insufficient memory to process iCCP chunk";
    }
    else {
      memcpy(_Dst,param_3,(ulonglong)(iVar1 + 1));
      _Dst_00 = (void *)png_malloc_warn(param_1,(ulonglong)param_6);
      if (_Dst_00 != (void *)0x0) {
        memcpy(_Dst_00,param_5,(ulonglong)param_6);
        png_free_data(param_1,param_2,0x10,0);
        *(uint *)(param_2 + 0x110) = param_6;
        *(void **)(param_2 + 0x100) = _Dst;
        *(void **)(param_2 + 0x108) = _Dst_00;
        *(undefined1 *)(param_2 + 0x114) = param_4;
        *(byte *)(param_2 + 0xec) = *(byte *)(param_2 + 0xec) | 0x10;
        *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 0x10;
        return;
      }
      png_free(param_1,_Dst);
      pcVar2 = "Insufficient memory to process iCCP profile";
    }
    png_warning(param_1,pcVar2);
    return;
  }
  return;
}



// FUNCTION 1424f75a0 png_set_text body=40 status=ok
// SIG undefined png_set_text(void)

void png_set_text(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  
                    /* 0x24f75a0  818  png_set_text */
  iVar2 = FUN_1424f75d0();
  if (iVar2 == 0) {
    return;
  }
  png_error(param_1,"Insufficient memory to store text");
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1424f75d0 FUN_1424f75d0 body=907 status=ok
// SIG undefined FUN_1424f75d0(void)

undefined8 FUN_1424f75d0(longlong param_1,longlong param_2,int *param_3,int param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  LPCSTR lpMultiByteStr;
  int iVar4;
  int iVar5;
  longlong lVar6;
  void *_Dst;
  void *pvVar7;
  size_t sVar8;
  size_t _Size;
  size_t _Size_00;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  size_t local_88;
  
  uVar11 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  lVar6 = (longlong)*(int *)(param_2 + 0x3c) + (longlong)param_4;
  iVar4 = *(int *)(param_2 + 0x40);
  if (iVar4 < (int)lVar6) {
    pvVar7 = *(void **)(param_2 + 0x48);
    if (pvVar7 == (void *)0x0) {
      *(int *)(param_2 + 0x40) = param_4 + 8;
      *(undefined4 *)(param_2 + 0x3c) = 0;
      lVar6 = png_malloc_warn(param_1,(longlong)(param_4 + 8) * 0x38);
      *(longlong *)(param_2 + 0x48) = lVar6;
      if (lVar6 != 0) {
        *(byte *)(param_2 + 0xed) = *(byte *)(param_2 + 0xed) | 0x40;
        goto joined_r0x0001424f792e;
      }
    }
    else {
      lVar6 = lVar6 + 8;
      *(int *)(param_2 + 0x40) = (int)lVar6;
      _Dst = (void *)png_malloc_warn(param_1,lVar6 * 0x38);
      *(void **)(param_2 + 0x48) = _Dst;
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,pvVar7,(longlong)iVar4 * 0x38);
        png_free(param_1,pvVar7);
        goto joined_r0x0001424f792e;
      }
      png_free(param_1,pvVar7);
    }
LAB_1424f7941:
    uVar11 = 1;
  }
  else {
joined_r0x0001424f792e:
    if (0 < param_4) {
      lVar6 = 0;
      do {
        if (*(LPCSTR *)(param_3 + 2) != (LPCSTR)0x0) {
          if (*param_3 + 1U < 4) {
            lVar3 = *(longlong *)(param_2 + 0x48);
            lVar9 = (longlong)*(int *)(param_2 + 0x3c) * 0x38;
            iVar4 = MultiByteToWideChar(0,0,*(LPCSTR *)(param_3 + 2),-1,(LPWSTR)0x0,0);
            if (*param_3 < 1) {
              local_88 = 0;
LAB_1424f7761:
              sVar8 = 0;
            }
            else {
              if (*(LPCSTR *)(param_3 + 10) == (LPCSTR)0x0) {
                local_88 = 0;
              }
              else {
                iVar5 = MultiByteToWideChar(0,0,*(LPCSTR *)(param_3 + 10),-1,(LPWSTR)0x0,0);
                local_88 = (size_t)iVar5;
              }
              if (*(LPCSTR *)(param_3 + 0xc) == (LPCSTR)0x0) goto LAB_1424f7761;
              iVar5 = MultiByteToWideChar(0,0,*(LPCSTR *)(param_3 + 0xc),-1,(LPWSTR)0x0,0);
              sVar8 = (size_t)iVar5;
            }
            piVar1 = (int *)(lVar3 + lVar9);
            _Size = (size_t)iVar4;
            lpMultiByteStr = *(LPCSTR *)(param_3 + 4);
            if ((lpMultiByteStr == (LPCSTR)0x0) || (*lpMultiByteStr == '\0')) {
              if (*param_3 < 1) {
                *piVar1 = -1;
              }
              else {
                *piVar1 = 1;
              }
              _Size_00 = 0;
            }
            else {
              iVar4 = MultiByteToWideChar(0,0,lpMultiByteStr,-1,(LPWSTR)0x0,0);
              _Size_00 = (size_t)iVar4;
              *piVar1 = *param_3;
            }
            pvVar7 = (void *)png_malloc_warn(param_1,_Size_00 + local_88 + _Size + sVar8 + 4);
            *(void **)(lVar3 + 8 + lVar9) = pvVar7;
            if (pvVar7 == (void *)0x0) goto LAB_1424f7941;
            plVar10 = (longlong *)(lVar3 + lVar9 + 8);
            memcpy(pvVar7,*(void **)(param_3 + 2),_Size);
            *(undefined1 *)(*plVar10 + _Size) = 0;
            if (*param_3 < 1) {
              puVar2 = (undefined8 *)(lVar3 + 0x28 + lVar9);
              *puVar2 = 0;
              puVar2[1] = 0;
            }
            else {
              pvVar7 = (void *)(*plVar10 + _Size + 1);
              *(void **)(lVar3 + 0x28 + lVar9) = pvVar7;
              memcpy(pvVar7,*(void **)(param_3 + 10),local_88);
              *(undefined1 *)(*(longlong *)(lVar3 + 0x28 + lVar9) + local_88) = 0;
              pvVar7 = (void *)(*(longlong *)(lVar3 + 0x28 + lVar9) + local_88 + 1);
              plVar10 = (longlong *)(lVar3 + 0x30 + lVar9);
              *(void **)(lVar3 + 0x30 + lVar9) = pvVar7;
              memcpy(pvVar7,*(void **)(param_3 + 0xc),sVar8);
              *(undefined1 *)(*(longlong *)(lVar3 + 0x30 + lVar9) + sVar8) = 0;
              _Size = sVar8;
            }
            pvVar7 = (void *)(*plVar10 + _Size + 1);
            *(void **)(lVar3 + 0x10 + lVar9) = pvVar7;
            if (_Size_00 != 0) {
              memcpy(pvVar7,*(void **)(param_3 + 4),_Size_00);
              pvVar7 = *(void **)(lVar3 + lVar9 + 0x10);
            }
            *(undefined1 *)((longlong)pvVar7 + _Size_00) = 0;
            if (*piVar1 < 1) {
              sVar8 = 0;
            }
            else {
              sVar8 = _Size_00;
              _Size_00 = 0;
            }
            *(size_t *)(lVar3 + 0x18 + lVar9) = _Size_00;
            *(size_t *)(lVar3 + 0x20 + lVar9) = sVar8;
            *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
          }
          else {
            png_warning();
          }
        }
        lVar6 = lVar6 + 1;
        param_3 = param_3 + 0xe;
      } while (lVar6 < param_4);
      uVar11 = 0;
    }
  }
  return uVar11;
}



// FUNCTION 1424f7960 png_set_tIME body=31 status=ok
// SIG undefined png_set_tIME(void)

void png_set_tIME(longlong param_1,longlong param_2,undefined8 *param_3)

{
                    /* 0x24f7960  815  png_set_tIME */
  if (((param_1 != 0) && (param_2 != 0)) && ((*(byte *)(param_1 + 0x155) & 2) == 0)) {
    *(undefined8 *)(param_2 + 0x50) = *param_3;
    *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 2;
  }
  return;
}



// FUNCTION 1424f7980 png_set_tRNS body=268 status=ok
// SIG undefined png_set_tRNS(void)

void png_set_tRNS(longlong param_1,longlong param_2,void *param_3,int param_4,undefined8 *param_5)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  
                    /* 0x24f7980  816  png_set_tRNS */
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (param_3 != (void *)0x0) {
    png_free_data(param_1,param_2,0x2000,0);
    uVar4 = png_malloc(param_1,0x100);
    *(undefined8 *)(param_2 + 0x68) = uVar4;
    *(undefined8 *)(param_1 + 0x2e8) = uVar4;
    if (param_4 - 1U < 0x100) {
      memcpy(*(void **)(param_2 + 0x68),param_3,(longlong)param_4);
    }
  }
  if (param_5 == (undefined8 *)0x0) {
    *(short *)(param_2 + 0x22) = (short)param_4;
    if (param_4 == 0) {
      return;
    }
    goto LAB_1424f7a75;
  }
  iVar3 = 1 << (*(byte *)(param_2 + 0x24) & 0x1f);
  if (*(char *)(param_2 + 0x25) == '\x02') {
    if (((int)(uint)*(ushort *)((longlong)param_5 + 2) <= iVar3) &&
       ((int)(uint)*(ushort *)((longlong)param_5 + 4) <= iVar3)) {
      uVar1 = *(ushort *)((longlong)param_5 + 6);
      goto joined_r0x0001424f7a44;
    }
LAB_1424f7a46:
    png_warning(param_1,"tRNS chunk has out-of-range samples for bit_depth");
  }
  else if (*(char *)(param_2 + 0x25) == '\0') {
    uVar1 = *(ushort *)(param_5 + 1);
joined_r0x0001424f7a44:
    if (iVar3 < (int)(uint)uVar1) goto LAB_1424f7a46;
  }
  *(undefined2 *)(param_2 + 0x78) = *(undefined2 *)(param_5 + 1);
  *(undefined8 *)(param_2 + 0x70) = *param_5;
  uVar2 = 1;
  if (param_4 != 0) {
    uVar2 = (short)param_4;
  }
  *(undefined2 *)(param_2 + 0x22) = uVar2;
LAB_1424f7a75:
  *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 0x10;
  *(byte *)(param_2 + 0xed) = *(byte *)(param_2 + 0xed) | 0x20;
  return;
}



// FUNCTION 1424f7a90 png_set_sPLT body=484 status=ok
// SIG undefined png_set_sPLT(void)

void png_set_sPLT(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  void *pvVar3;
  ulonglong uVar4;
  int *piVar5;
  longlong lVar6;
  void *pvVar7;
  
                    /* 0x24f7a90  806  png_set_sPLT */
  if ((param_1 != 0) && (param_2 != 0)) {
    _Dst = (void *)png_malloc_warn(param_1,(ulonglong)(*(int *)(param_2 + 0x120) + param_4) << 5);
    if (_Dst == (void *)0x0) {
      png_warning(param_1,"No memory for sPLT palettes");
      return;
    }
    pvVar7 = *(void **)(param_2 + 0x118);
    memcpy(_Dst,pvVar7,(ulonglong)*(uint *)(param_2 + 0x120) << 5);
    png_free(param_1,pvVar7);
    *(undefined8 *)(param_2 + 0x118) = 0;
    if (0 < (int)param_4) {
      uVar4 = (ulonglong)param_4;
      piVar5 = (int *)(param_3 + 0x18);
      pvVar7 = _Dst;
      do {
        uVar1 = *(uint *)(param_2 + 0x120);
        iVar2 = MultiByteToWideChar(0,0,*(LPCSTR *)(piVar5 + -6),-1,(LPWSTR)0x0,0);
        pvVar3 = (void *)png_malloc_warn(param_1,(ulonglong)(iVar2 + 1));
        lVar6 = (ulonglong)uVar1 * 0x20;
        *(void **)((longlong)pvVar7 + lVar6) = pvVar3;
        if (pvVar3 == (void *)0x0) {
          png_warning();
        }
        else {
          memcpy(pvVar3,*(void **)(piVar5 + -6),(ulonglong)(iVar2 + 1));
          pvVar3 = (void *)png_malloc_warn(param_1,(longlong)*piVar5 * 10);
          *(void **)((longlong)pvVar7 + lVar6 + 0x10) = pvVar3;
          if (pvVar3 == (void *)0x0) {
            png_warning(param_1,"Out of memory while processing sPLT chunk");
            png_free();
            *(undefined8 *)((longlong)pvVar7 + lVar6) = 0;
          }
          else {
            iVar2 = *piVar5;
            memcpy(pvVar3,*(void **)(piVar5 + -2),(longlong)iVar2 * 10);
            *(int *)((longlong)pvVar7 + lVar6 + 0x18) = iVar2;
            *(char *)((longlong)pvVar7 + lVar6 + 8) = (char)piVar5[-4];
          }
        }
        pvVar7 = (void *)((longlong)pvVar7 + 0x20);
        piVar5 = piVar5 + 8;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    *(void **)(param_2 + 0x118) = _Dst;
    *(int *)(param_2 + 0x120) = *(int *)(param_2 + 0x120) + param_4;
    *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 0x20;
    *(byte *)(param_2 + 0xec) = *(byte *)(param_2 + 0xec) | 0x20;
  }
  return;
}



// FUNCTION 1424f7c90 png_set_unknown_chunks body=402 status=ok
// SIG undefined png_set_unknown_chunks(void)

void png_set_unknown_chunks(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  void *_Dst;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
                    /* 0x24f7c90  820  png_set_unknown_chunks */
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) {
    _Dst = (void *)png_malloc_warn(param_1,((longlong)(int)param_4 +
                                           (longlong)*(int *)(param_2 + 0xf8)) * 0x20);
    if (_Dst == (void *)0x0) {
      png_warning(param_1,"Out of memory while processing unknown chunk");
      return;
    }
    pvVar2 = *(void **)(param_2 + 0xf0);
    memcpy(_Dst,pvVar2,(longlong)*(int *)(param_2 + 0xf8) << 5);
    png_free(param_1,pvVar2);
    *(undefined8 *)(param_2 + 0xf0) = 0;
    if (0 < (int)param_4) {
      lVar3 = (longlong)_Dst + 0x10;
      lVar5 = 0;
      do {
        lVar4 = (longlong)*(int *)(param_2 + 0xf8) * 0x20;
        *(undefined1 *)(lVar3 + -0xc + lVar4) = *(undefined1 *)(param_3 + 4 + lVar5);
        *(undefined4 *)(lVar3 + -0x10 + lVar4) = *(undefined4 *)(param_3 + lVar5);
        *(undefined1 *)(lVar3 + -0xc + lVar4) = 0;
        lVar1 = *(longlong *)(param_3 + 0x10 + lVar5);
        *(longlong *)(lVar3 + lVar4) = lVar1;
        *(undefined1 *)(lVar3 + 8 + lVar4) = *(undefined1 *)(param_1 + 0x154);
        if (lVar1 == 0) {
          *(undefined8 *)(lVar3 + -8 + lVar4) = 0;
        }
        else {
          pvVar2 = (void *)png_malloc_warn(param_1);
          *(void **)(lVar3 + -8 + lVar4) = pvVar2;
          if (pvVar2 == (void *)0x0) {
            png_warning(param_1,"Out of memory while processing unknown chunk");
            *(undefined8 *)(lVar3 + lVar4) = 0;
          }
          else {
            memcpy(pvVar2,*(void **)(param_3 + 8 + lVar5),*(size_t *)(param_3 + 0x10 + lVar5));
          }
        }
        lVar3 = lVar3 + 0x20;
        lVar5 = lVar5 + 0x20;
      } while ((ulonglong)param_4 << 5 != lVar5);
    }
    *(void **)(param_2 + 0xf0) = _Dst;
    *(int *)(param_2 + 0xf8) = *(int *)(param_2 + 0xf8) + param_4;
    *(byte *)(param_2 + 0xed) = *(byte *)(param_2 + 0xed) | 2;
  }
  return;
}



// FUNCTION 1424f7e40 png_set_unknown_chunk_location body=44 status=ok
// SIG undefined png_set_unknown_chunk_location(void)

void png_set_unknown_chunk_location
               (longlong param_1,longlong param_2,int param_3,undefined1 param_4)

{
                    /* 0x24f7e40  819  png_set_unknown_chunk_location */
  if ((((param_1 != 0) && (param_2 != 0)) && (-1 < param_3)) && (param_3 < *(int *)(param_2 + 0xf8))
     ) {
    *(undefined1 *)(*(longlong *)(param_2 + 0xf0) + 0x18 + (longlong)param_3 * 0x20) = param_4;
  }
  return;
}



// FUNCTION 1424f7e70 png_permit_mng_features body=20 status=ok
// SIG undefined png_permit_mng_features(void)

uint png_permit_mng_features(longlong param_1,uint param_2)

{
                    /* 0x24f7e70  734  png_permit_mng_features */
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x418) = param_2 & 5;
    return param_2 & 5;
  }
  return 0;
}



// FUNCTION 1424f7e90 png_set_keep_unknown_chunks body=355 status=ok
// SIG undefined png_set_keep_unknown_chunks(void)

void png_set_keep_unknown_chunks(longlong param_1,uint param_2,void *param_3,uint param_4)

{
  size_t _Size;
  uint uVar1;
  longlong lVar2;
  void *_Dst;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  
                    /* 0x24f7e90  785  png_set_keep_unknown_chunks */
  if (param_1 != 0) {
    if (param_4 == 0) {
      uVar1 = *(uint *)(param_1 + 0x158) | 0x8000;
      if ((param_2 | 1) != 3) {
        uVar1 = *(uint *)(param_1 + 0x158) & 0xffff7fff;
      }
      uVar4 = uVar1 | 0x10000;
      if (param_2 != 3) {
        uVar4 = uVar1 & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x158) = uVar4;
    }
    else if (param_3 != (void *)0x0) {
      iVar3 = *(int *)(param_1 + 0x400);
      lVar2 = (longlong)(int)param_4 + (longlong)iVar3;
      _Dst = (void *)png_malloc(param_1,lVar2 * 5);
      pvVar5 = *(void **)(param_1 + 0x408);
      _Size = (longlong)iVar3 * 5;
      if (pvVar5 != (void *)0x0) {
        memcpy(_Dst,pvVar5,_Size);
        png_free(param_1,pvVar5);
        *(undefined8 *)(param_1 + 0x408) = 0;
      }
      pvVar5 = (void *)((longlong)_Dst + _Size);
      memcpy(pvVar5,param_3,(longlong)(int)(param_4 * 5));
      if (0 < (int)param_4) {
        puVar6 = (undefined1 *)((longlong)pvVar5 + 4);
        uVar1 = param_4 & 7;
        uVar7 = (undefined1)param_2;
        if (6 < param_4 - 1) {
          iVar3 = uVar1 - param_4;
          do {
            *puVar6 = uVar7;
            puVar6[5] = uVar7;
            puVar6[10] = uVar7;
            puVar6[0xf] = uVar7;
            puVar6[0x14] = uVar7;
            puVar6[0x19] = uVar7;
            puVar6[0x1e] = uVar7;
            puVar6[0x23] = uVar7;
            puVar6 = puVar6 + 0x28;
            iVar3 = iVar3 + 8;
          } while (iVar3 != 0);
        }
        if (uVar1 != 0) {
          iVar3 = -uVar1;
          do {
            *puVar6 = uVar7;
            puVar6 = puVar6 + 5;
            iVar3 = iVar3 + 1;
          } while (iVar3 != 0);
        }
      }
      *(int *)(param_1 + 0x400) = (int)lVar2;
      *(void **)(param_1 + 0x408) = _Dst;
      *(byte *)(param_1 + 0x3e9) = *(byte *)(param_1 + 0x3e9) | 4;
    }
  }
  return;
}



// FUNCTION 1424f8000 png_set_read_user_chunk_fn body=20 status=ok
// SIG undefined png_set_read_user_chunk_fn(void)

void png_set_read_user_chunk_fn(longlong param_1,undefined8 param_2,undefined8 param_3)

{
                    /* 0x24f8000  797  png_set_read_user_chunk_fn */
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x3f8) = param_3;
    *(undefined8 *)(param_1 + 0x3f0) = param_2;
  }
  return;
}



// FUNCTION 1424f8020 png_set_rows body=79 status=ok
// SIG undefined png_set_rows(void)

void png_set_rows(longlong param_1,longlong param_2,longlong param_3)

{
                    /* 0x24f8020  801  png_set_rows */
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(longlong *)(param_2 + 0x138) != 0) && (*(longlong *)(param_2 + 0x138) != param_3)) {
      png_free_data(param_1,param_2,0x40,0);
    }
    *(longlong *)(param_2 + 0x138) = param_3;
    if (param_3 != 0) {
      *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 0x80;
    }
  }
  return;
}



// FUNCTION 1424f8070 png_set_compression_buffer_size body=125 status=ok
// SIG undefined png_set_compression_buffer_size(void)

void png_set_compression_buffer_size(longlong param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
                    /* 0x24f8070  758  png_set_compression_buffer_size */
  if (param_1 != 0) {
    png_free(param_1,*(undefined8 *)(param_1 + 0x1b8));
    if (param_2 >> 0x20 == 0) {
      uVar1 = (undefined4)param_2;
    }
    else {
      png_warning(param_1,"Attempt to set buffer size beyond max ignored");
      param_2 = 0xffffffff;
      uVar1 = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x1c0) = uVar1;
    uVar2 = png_malloc(param_1,param_2);
    *(undefined8 *)(param_1 + 0x1b8) = uVar2;
    *(undefined8 *)(param_1 + 0x170) = uVar2;
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  return;
}



// FUNCTION 1424f80f0 png_set_invalid body=18 status=ok
// SIG undefined png_set_invalid(void)

void png_set_invalid(longlong param_1,longlong param_2,uint param_3)

{
                    /* 0x24f80f0  782  png_set_invalid */
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & ~param_3;
  }
  return;
}



// FUNCTION 1424f8110 png_set_user_limits body=19 status=ok
// SIG undefined png_set_user_limits(void)

void png_set_user_limits(longlong param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0x24f8110  821  png_set_user_limits */
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x45c) = param_2;
    *(undefined4 *)(param_1 + 0x460) = param_3;
  }
  return;
}



// FUNCTION 1424f8130 png_set_chunk_cache_max body=12 status=ok
// SIG undefined png_set_chunk_cache_max(void)

void png_set_chunk_cache_max(longlong param_1,undefined4 param_2)

{
                    /* 0x24f8130  756  png_set_chunk_cache_max */
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x464) = param_2;
  }
  return;
}



// FUNCTION 1424f8140 png_set_chunk_malloc_max body=13 status=ok
// SIG undefined png_set_chunk_malloc_max(void)

void png_set_chunk_malloc_max(longlong param_1,undefined8 param_2)

{
                    /* 0x24f8140  757  png_set_chunk_malloc_max */
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x468) = param_2;
  }
  return;
}



// FUNCTION 1424f8150 png_set_benign_errors body=34 status=ok
// SIG undefined png_set_benign_errors(void)

void png_set_benign_errors(longlong param_1,int param_2)

{
  uint uVar1;
  
                    /* 0x24f8150  752  png_set_benign_errors */
  uVar1 = *(uint *)(param_1 + 0x158) | 0x800000;
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x158) & 0xff7fffff;
  }
  *(uint *)(param_1 + 0x158) = uVar1;
  return;
}



// FUNCTION 1424f8180 png_set_bgr body=13 status=ok
// SIG undefined png_set_bgr(void)

void png_set_bgr(longlong param_1)

{
                    /* 0x24f8180  753  png_set_bgr */
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x15c) = *(byte *)(param_1 + 0x15c) | 1;
  }
  return;
}



// FUNCTION 1424f8190 png_set_swap body=22 status=ok
// SIG undefined png_set_swap(void)

void png_set_swap(longlong param_1)

{
                    /* 0x24f8190  813  png_set_swap */
  if ((param_1 != 0) && (*(char *)(param_1 + 0x25f) == '\x10')) {
    *(byte *)(param_1 + 0x15c) = *(byte *)(param_1 + 0x15c) | 0x10;
  }
  return;
}



// FUNCTION 1424f81b0 png_set_packing body=29 status=ok
// SIG undefined png_set_packing(void)

void png_set_packing(longlong param_1)

{
                    /* 0x24f81b0  791  png_set_packing */
  if ((param_1 != 0) && (*(byte *)(param_1 + 0x25f) < 8)) {
    *(byte *)(param_1 + 0x15c) = *(byte *)(param_1 + 0x15c) | 4;
    *(undefined1 *)(param_1 + 0x260) = 8;
  }
  return;
}



// FUNCTION 1424f81d0 png_set_packswap body=22 status=ok
// SIG undefined png_set_packswap(void)

void png_set_packswap(longlong param_1)

{
                    /* 0x24f81d0  792  png_set_packswap */
  if ((param_1 != 0) && (*(byte *)(param_1 + 0x25f) < 8)) {
    *(byte *)(param_1 + 0x15e) = *(byte *)(param_1 + 0x15e) | 1;
  }
  return;
}



// FUNCTION 1424f81f0 png_set_shift body=30 status=ok
// SIG undefined png_set_shift(void)

void png_set_shift(longlong param_1,undefined4 *param_2)

{
                    /* 0x24f81f0  809  png_set_shift */
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x15c) = *(byte *)(param_1 + 0x15c) | 8;
    *(undefined1 *)(param_1 + 0x2e1) = *(undefined1 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 0x2dd) = *param_2;
  }
  return;
}



// FUNCTION 1424f8210 png_set_interlace_handling body=32 status=ok
// SIG undefined png_set_interlace_handling(void)

undefined8 png_set_interlace_handling(longlong param_1)

{
  undefined8 uVar1;
  
                    /* 0x24f8210  781  png_set_interlace_handling */
  uVar1 = 1;
  if ((param_1 != 0) && (*(char *)(param_1 + 0x25b) != '\0')) {
    *(byte *)(param_1 + 0x15c) = *(byte *)(param_1 + 0x15c) | 2;
    uVar1 = 7;
  }
  return uVar1;
}



// FUNCTION 1424f8230 png_set_filler body=90 status=ok
// SIG undefined png_set_filler(void)

void png_set_filler(longlong param_1,undefined2 param_2,int param_3)

{
  uint uVar1;
  
                    /* 0x24f8230  769  png_set_filler */
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x15d) = *(byte *)(param_1 + 0x15d) | 0x80;
    *(undefined2 *)(param_1 + 0x266) = param_2;
    uVar1 = *(uint *)(param_1 + 0x158) | 0x80;
    if (param_3 != 1) {
      uVar1 = *(uint *)(param_1 + 0x158) & 0xffffff7f;
    }
    *(uint *)(param_1 + 0x158) = uVar1;
    if (*(char *)(param_1 + 0x25e) == '\0') {
      if (7 < *(byte *)(param_1 + 0x25f)) {
        *(undefined1 *)(param_1 + 0x263) = 2;
      }
    }
    else if (*(char *)(param_1 + 0x25e) == '\x02') {
      *(undefined1 *)(param_1 + 0x263) = 4;
      return;
    }
  }
  return;
}



// FUNCTION 1424f8290 png_set_add_alpha body=125 status=ok
// SIG undefined png_set_add_alpha(void)

void png_set_add_alpha(longlong param_1,undefined2 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
                    /* 0x24f8290  748  png_set_add_alpha */
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x15c);
    *(uint *)(param_1 + 0x15c) = uVar1 | 0x8000;
    uVar2 = *(uint *)(param_1 + 0x158) | 0x80;
    if (param_3 != 1) {
      uVar2 = *(uint *)(param_1 + 0x158) & 0xffffff7f;
    }
    *(undefined2 *)(param_1 + 0x266) = param_2;
    *(uint *)(param_1 + 0x158) = uVar2;
    if (*(char *)(param_1 + 0x25e) == '\0') {
      if (7 < *(byte *)(param_1 + 0x25f)) {
        *(undefined1 *)(param_1 + 0x263) = 2;
      }
    }
    else if (*(char *)(param_1 + 0x25e) == '\x02') {
      *(undefined1 *)(param_1 + 0x263) = 4;
    }
    *(uint *)(param_1 + 0x15c) = uVar1 | 0x1008000;
  }
  return;
}



// FUNCTION 1424f8310 png_set_swap_alpha body=13 status=ok
// SIG undefined png_set_swap_alpha(void)

void png_set_swap_alpha(longlong param_1)

{
                    /* 0x24f8310  814  png_set_swap_alpha */
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x15e) = *(byte *)(param_1 + 0x15e) | 2;
  }
  return;
}



// FUNCTION 1424f8320 png_set_invert_alpha body=13 status=ok
// SIG undefined png_set_invert_alpha(void)

void png_set_invert_alpha(longlong param_1)

{
                    /* 0x24f8320  783  png_set_invert_alpha */
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x15e) = *(byte *)(param_1 + 0x15e) | 8;
  }
  return;
}



// FUNCTION 1424f8330 png_set_invert_mono body=13 status=ok
// SIG undefined png_set_invert_mono(void)

void png_set_invert_mono(longlong param_1)

{
                    /* 0x24f8330  784  png_set_invert_mono */
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x15c) = *(byte *)(param_1 + 0x15c) | 0x20;
  }
  return;
}



// FUNCTION 1424f8340 FUN_1424f8340 body=358 status=ok
// SIG undefined FUN_1424f8340(void)

/* WARNING: Removing unreachable block (ram,0x0001424f84a4) */

void FUN_1424f8340(longlong param_1,longlong param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  
  if (*(char *)(param_1 + 0x10) == '\x04') {
    if (*(char *)(param_1 + 0x11) == '\x10') {
      uVar4 = *(ulonglong *)(param_1 + 8);
      if (uVar4 == 0) {
        return;
      }
      uVar22 = 0;
      do {
        *(byte *)(param_2 + uVar22) = ~*(byte *)(param_2 + uVar22);
        pbVar2 = (byte *)(param_2 + 1 + uVar22);
        *pbVar2 = ~*pbVar2;
        uVar22 = uVar22 + 4;
      } while (uVar22 < uVar4);
      return;
    }
    if (*(char *)(param_1 + 0x11) != '\b') {
      return;
    }
    uVar4 = *(ulonglong *)(param_1 + 8);
    if (uVar4 == 0) {
      return;
    }
    uVar22 = 0;
    do {
      *(byte *)(param_2 + uVar22) = ~*(byte *)(param_2 + uVar22);
      uVar22 = uVar22 + 2;
    } while (uVar22 < uVar4);
    return;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    return;
  }
  uVar4 = *(ulonglong *)(param_1 + 8);
  if (uVar4 == 0) {
    return;
  }
  if (uVar4 < 0x20) {
    uVar22 = 0;
    goto LAB_1424f8487;
  }
  uVar22 = uVar4 & 0xffffffffffffffe0;
  lVar20 = (uVar22 - 0x20 >> 5) + 1;
  uVar23 = (ulonglong)((uint)lVar20 & 1);
  if (uVar22 - 0x20 == 0) {
    lVar21 = 0;
LAB_1424f845d:
    puVar1 = (uint *)(param_2 + lVar21);
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    puVar3 = (uint *)(param_2 + 0x10 + lVar21);
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
    puVar3 = (uint *)(param_2 + lVar21);
    *puVar3 = *puVar1 ^ 0xffffffff;
    puVar3[1] = uVar9 ^ 0xffffffff;
    puVar3[2] = uVar10 ^ 0xffffffff;
    puVar3[3] = uVar11 ^ 0xffffffff;
    puVar1 = (uint *)(param_2 + 0x10 + lVar21);
    *puVar1 = uVar5 ^ 0xffffffff;
    puVar1[1] = uVar6 ^ 0xffffffff;
    puVar1[2] = uVar7 ^ 0xffffffff;
    puVar1[3] = uVar8 ^ 0xffffffff;
  }
  else {
    lVar20 = uVar23 - lVar20;
    lVar21 = 0;
    do {
      puVar1 = (uint *)(param_2 + lVar21);
      uVar17 = puVar1[1];
      uVar18 = puVar1[2];
      uVar19 = puVar1[3];
      puVar3 = (uint *)(param_2 + 0x10 + lVar21);
      uVar13 = *puVar3;
      uVar14 = puVar3[1];
      uVar15 = puVar3[2];
      uVar16 = puVar3[3];
      puVar3 = (uint *)(param_2 + 0x20 + lVar21);
      uVar9 = *puVar3;
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      puVar3 = (uint *)(param_2 + 0x30 + lVar21);
      uVar5 = *puVar3;
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      puVar3 = (uint *)(param_2 + lVar21);
      *puVar3 = *puVar1 ^ 0xffffffff;
      puVar3[1] = uVar17 ^ 0xffffffff;
      puVar3[2] = uVar18 ^ 0xffffffff;
      puVar3[3] = uVar19 ^ 0xffffffff;
      puVar1 = (uint *)(param_2 + 0x10 + lVar21);
      *puVar1 = uVar13 ^ 0xffffffff;
      puVar1[1] = uVar14 ^ 0xffffffff;
      puVar1[2] = uVar15 ^ 0xffffffff;
      puVar1[3] = uVar16 ^ 0xffffffff;
      puVar1 = (uint *)(param_2 + 0x20 + lVar21);
      *puVar1 = uVar9 ^ 0xffffffff;
      puVar1[1] = uVar10 ^ 0xffffffff;
      puVar1[2] = uVar11 ^ 0xffffffff;
      puVar1[3] = uVar12 ^ 0xffffffff;
      puVar1 = (uint *)(param_2 + 0x30 + lVar21);
      *puVar1 = uVar5 ^ 0xffffffff;
      puVar1[1] = uVar6 ^ 0xffffffff;
      puVar1[2] = uVar7 ^ 0xffffffff;
      puVar1[3] = uVar8 ^ 0xffffffff;
      lVar21 = lVar21 + 0x40;
      lVar20 = lVar20 + 2;
    } while (lVar20 != 0);
    if (uVar23 != 0) goto LAB_1424f845d;
  }
  if (uVar4 == uVar22) {
    return;
  }
  param_2 = param_2 + uVar22;
LAB_1424f8487:
  lVar20 = 0;
  do {
    *(byte *)(param_2 + lVar20) = ~*(byte *)(param_2 + lVar20);
    lVar20 = lVar20 + 1;
  } while (uVar4 - uVar22 != lVar20);
  return;
}



// FUNCTION 1424f84b0 FUN_1424f84b0 body=188 status=ok
// SIG undefined FUN_1424f84b0(void)

void FUN_1424f84b0(int *param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if (*(char *)((longlong)param_1 + 0x11) == '\x10') {
    iVar3 = *param_1;
    bVar1 = *(byte *)((longlong)param_1 + 0x12);
    uVar5 = iVar3 * (uint)bVar1;
    if (uVar5 != 0) {
      if (2 < uVar5 - 1) {
        iVar6 = (uVar5 & 3) - uVar5;
        do {
          uVar2 = *param_2;
          *param_2 = param_2[1];
          param_2[1] = uVar2;
          uVar2 = param_2[2];
          param_2[2] = param_2[3];
          param_2[3] = uVar2;
          uVar2 = param_2[4];
          param_2[4] = param_2[5];
          param_2[5] = uVar2;
          uVar2 = param_2[6];
          param_2[6] = param_2[7];
          param_2[7] = uVar2;
          param_2 = param_2 + 8;
          iVar6 = iVar6 + 4;
        } while (iVar6 != 0);
      }
      if ((uVar5 & 3) != 0) {
        lVar4 = 0;
        do {
          uVar2 = param_2[lVar4 * 2];
          param_2[lVar4 * 2] = param_2[lVar4 * 2 + 1];
          param_2[lVar4 * 2 + 1] = uVar2;
          lVar4 = lVar4 + 1;
        } while (((byte)((char)iVar3 * bVar1) & 3) != (uint)lVar4);
      }
    }
  }
  return;
}



// FUNCTION 1424f8570 FUN_1424f8570 body=99 status=ok
// SIG undefined FUN_1424f8570(void)

void FUN_1424f8570(longlong param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  byte *pbVar3;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 < 8) {
    if (bVar1 == 1) {
      puVar2 = &DAT_14996ff40;
    }
    else if (bVar1 == 4) {
      puVar2 = &DAT_149970140;
    }
    else {
      if (bVar1 != 2) {
        return;
      }
      puVar2 = &DAT_149970040;
    }
    if (0 < *(longlong *)(param_1 + 8)) {
      pbVar3 = param_2 + *(longlong *)(param_1 + 8);
      do {
        *param_2 = puVar2[*param_2];
        param_2 = param_2 + 1;
      } while (param_2 < pbVar3);
    }
  }
  return;
}



// FUNCTION 1424f85e0 FUN_1424f85e0 body=1000 status=ok
// SIG undefined FUN_1424f85e0(void)

void FUN_1424f85e0(longlong param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  
  lVar8 = *(longlong *)(param_1 + 8);
  puVar1 = param_2 + lVar8;
  if (*(char *)(param_1 + 0x12) == '\x04') {
    if (*(char *)(param_1 + 0x11) == '\x10') {
      puVar10 = param_2 + 6;
      lVar6 = 6;
      if (param_3 != 0) {
        puVar10 = param_2;
        lVar6 = 0;
      }
      lVar7 = 2;
      if (param_3 == 0) {
        lVar7 = 8;
      }
      uVar9 = 0x30;
      if (lVar7 < lVar8) {
        puVar2 = param_2 + lVar7;
        puVar3 = param_2 + lVar7 + 8;
        if (param_2 + lVar7 + 8 <= puVar1) {
          puVar3 = puVar1;
        }
        if (((ulonglong)(puVar3 + (~(ulonglong)param_2 - lVar7)) & 8) == 0) {
          param_2[lVar6] = *puVar2;
          puVar10[1] = puVar2[1];
          puVar10[2] = puVar2[2];
          puVar10[3] = puVar2[3];
          puVar10[4] = puVar2[4];
          puVar10[5] = puVar2[5];
          puVar10 = puVar10 + 6;
          puVar2 = puVar2 + 8;
        }
        if (&DAT_00000007 < puVar3 + (~(ulonglong)param_2 - lVar7)) {
          do {
            *puVar10 = *puVar2;
            puVar10[1] = puVar2[1];
            puVar10[2] = puVar2[2];
            puVar10[3] = puVar2[3];
            puVar10[4] = puVar2[4];
            puVar10[5] = puVar2[5];
            puVar10[6] = puVar2[8];
            puVar10[7] = puVar2[9];
            puVar10[8] = puVar2[10];
            puVar10[9] = puVar2[0xb];
            puVar10[10] = puVar2[0xc];
            puVar10[0xb] = puVar2[0xd];
            puVar10 = puVar10 + 0xc;
            puVar2 = puVar2 + 0x10;
          } while (puVar2 < puVar1);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x11) != '\b') {
        return;
      }
      puVar10 = param_2 + 3;
      if (param_3 != 0) {
        puVar10 = param_2;
      }
      lVar6 = (ulonglong)(param_3 == 0) * 3;
      lVar7 = lVar6 + 1;
      uVar9 = 0x18;
      if (lVar7 < lVar8) {
        puVar2 = param_2 + lVar6 + 5;
        if (param_2 + lVar6 + 5 <= puVar1) {
          puVar2 = puVar1;
        }
        puVar3 = param_2 + lVar7;
        uVar4 = ((uint)((ulonglong)(puVar2 + (~(ulonglong)param_2 - lVar7)) >> 2) & 0x3fffffff) + 1;
        if ((uVar4 & 3) != 0) {
          lVar8 = -((ulonglong)uVar4 & 3);
          do {
            *puVar10 = *puVar3;
            puVar10[1] = puVar3[1];
            puVar10[2] = puVar3[2];
            puVar10 = puVar10 + 3;
            puVar3 = puVar3 + 4;
            lVar8 = lVar8 + 1;
          } while (lVar8 != 0);
        }
        if (&DAT_0000000b < puVar2 + (~(ulonglong)param_2 - lVar7)) {
          do {
            *puVar10 = *puVar3;
            puVar10[1] = puVar3[1];
            puVar10[2] = puVar3[2];
            puVar10[3] = puVar3[4];
            puVar10[4] = puVar3[5];
            puVar10[5] = puVar3[6];
            puVar10[6] = puVar3[8];
            puVar10[7] = puVar3[9];
            puVar10[8] = puVar3[10];
            puVar10[9] = puVar3[0xc];
            puVar10[10] = puVar3[0xd];
            puVar10[0xb] = puVar3[0xe];
            puVar10 = puVar10 + 0xc;
            puVar3 = puVar3 + 0x10;
          } while (puVar3 < puVar1);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x13) = uVar9;
    *(undefined1 *)(param_1 + 0x12) = 3;
    if (*(char *)(param_1 + 0x10) == '\x06') {
      *(undefined1 *)(param_1 + 0x10) = 2;
    }
  }
  else {
    if (*(char *)(param_1 + 0x12) != '\x02') {
      return;
    }
    if (*(char *)(param_1 + 0x11) == '\x10') {
      puVar10 = param_2 + 2;
      puVar2 = param_2 + 4;
      if (param_3 != 0) {
        puVar2 = puVar10;
        puVar10 = param_2;
      }
      uVar9 = 0x10;
      if (puVar2 < puVar1) {
        uVar5 = ~(ulonglong)puVar2;
        uVar4 = ((uint)((ulonglong)(param_2 + lVar8 + uVar5) >> 2) & 0x3fffffff) + 1;
        if ((uVar4 & 3) != 0) {
          lVar6 = -((ulonglong)uVar4 & 3);
          do {
            *puVar10 = *puVar2;
            puVar10[1] = puVar2[1];
            puVar10 = puVar10 + 2;
            puVar2 = puVar2 + 4;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0);
        }
        if (&DAT_0000000b < param_2 + lVar8 + uVar5) {
          do {
            *puVar10 = *puVar2;
            puVar10[1] = puVar2[1];
            puVar10[2] = puVar2[4];
            puVar10[3] = puVar2[5];
            puVar10[4] = puVar2[8];
            puVar10[5] = puVar2[9];
            puVar10[6] = puVar2[0xc];
            puVar10[7] = puVar2[0xd];
            puVar10 = puVar10 + 8;
            puVar2 = puVar2 + 0x10;
          } while (puVar2 < puVar1);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x11) != '\b') {
        return;
      }
      puVar10 = param_2 + 1;
      puVar2 = param_2 + 2;
      if (param_3 != 0) {
        puVar2 = puVar10;
        puVar10 = param_2;
      }
      uVar9 = 8;
      if (puVar2 < puVar1) {
        uVar5 = ~(ulonglong)puVar2;
        uVar4 = ((uint)((ulonglong)(param_2 + lVar8 + uVar5) >> 1) & 0x7fffffff) + 1;
        if ((uVar4 & 7) != 0) {
          lVar6 = -((ulonglong)uVar4 & 7);
          do {
            *puVar10 = *puVar2;
            puVar10 = puVar10 + 1;
            puVar2 = puVar2 + 2;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0);
        }
        if ((undefined1 *)0xd < param_2 + lVar8 + uVar5) {
          do {
            *puVar10 = *puVar2;
            puVar10[1] = puVar2[2];
            puVar10[2] = puVar2[4];
            puVar10[3] = puVar2[6];
            puVar10[4] = puVar2[8];
            puVar10[5] = puVar2[10];
            puVar10[6] = puVar2[0xc];
            puVar10[7] = puVar2[0xe];
            puVar10 = puVar10 + 8;
            puVar2 = puVar2 + 0x10;
          } while (puVar2 < puVar1);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x13) = uVar9;
    *(undefined1 *)(param_1 + 0x12) = 1;
    if (*(char *)(param_1 + 0x10) == '\x04') {
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
  }
  *(longlong *)(param_1 + 8) = (longlong)puVar10 - (longlong)param_2;
  return;
}



// FUNCTION 1424f89d0 FUN_1424f89d0 body=543 status=ok
// SIG undefined FUN_1424f89d0(void)

void FUN_1424f89d0(uint *param_1,undefined2 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  
  bVar1 = (byte)param_1[4];
  if ((bVar1 & 2) != 0) {
    uVar4 = *param_1;
    if (*(char *)((longlong)param_1 + 0x11) == '\x10') {
      if (bVar1 == 2) {
        if (uVar4 == 0) {
          return;
        }
        if (uVar4 != 1) {
          iVar6 = (uVar4 & 1) - uVar4;
          do {
            uVar3 = *param_2;
            *param_2 = param_2[2];
            param_2[2] = uVar3;
            uVar3 = param_2[3];
            param_2[3] = param_2[5];
            param_2[5] = uVar3;
            param_2 = param_2 + 6;
            iVar6 = iVar6 + 2;
          } while (iVar6 != 0);
        }
      }
      else {
        if (bVar1 != 6) {
          return;
        }
        if (uVar4 == 0) {
          return;
        }
        if (uVar4 != 1) {
          iVar6 = (uVar4 & 1) - uVar4;
          do {
            uVar3 = *param_2;
            *param_2 = param_2[2];
            param_2[2] = uVar3;
            uVar3 = param_2[4];
            param_2[4] = param_2[6];
            param_2[6] = uVar3;
            param_2 = param_2 + 8;
            iVar6 = iVar6 + 2;
          } while (iVar6 != 0);
        }
      }
      if ((uVar4 & 1) != 0) {
        uVar3 = *param_2;
        *param_2 = param_2[2];
        param_2[2] = uVar3;
      }
    }
    else if (*(char *)((longlong)param_1 + 0x11) == '\b') {
      if (bVar1 == 2) {
        if (uVar4 != 0) {
          uVar7 = uVar4 & 3;
          if (2 < uVar4 - 1) {
            iVar6 = uVar7 - uVar4;
            do {
              uVar2 = *(undefined1 *)param_2;
              *(undefined1 *)param_2 = *(undefined1 *)(param_2 + 1);
              *(undefined1 *)(param_2 + 1) = uVar2;
              uVar2 = *(undefined1 *)((longlong)param_2 + 3);
              *(undefined1 *)((longlong)param_2 + 3) = *(undefined1 *)((longlong)param_2 + 5);
              *(undefined1 *)((longlong)param_2 + 5) = uVar2;
              uVar2 = *(undefined1 *)(param_2 + 3);
              *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_2 + 4);
              *(undefined1 *)(param_2 + 4) = uVar2;
              uVar2 = *(undefined1 *)((longlong)param_2 + 9);
              *(undefined1 *)((longlong)param_2 + 9) = *(undefined1 *)((longlong)param_2 + 0xb);
              *(undefined1 *)((longlong)param_2 + 0xb) = uVar2;
              param_2 = param_2 + 6;
              iVar6 = iVar6 + 4;
            } while (iVar6 != 0);
          }
          if (uVar7 != 0) {
            iVar6 = -uVar7;
            do {
              uVar2 = *(undefined1 *)param_2;
              *(undefined1 *)param_2 = *(undefined1 *)(param_2 + 1);
              *(undefined1 *)(param_2 + 1) = uVar2;
              param_2 = (undefined2 *)((longlong)param_2 + 3);
              iVar6 = iVar6 + 1;
            } while (iVar6 != 0);
          }
        }
      }
      else if ((bVar1 == 6) && (uVar4 != 0)) {
        if (2 < uVar4 - 1) {
          iVar6 = (uVar4 & 3) - uVar4;
          do {
            uVar2 = *(undefined1 *)param_2;
            *(undefined1 *)param_2 = *(undefined1 *)(param_2 + 1);
            *(undefined1 *)(param_2 + 1) = uVar2;
            uVar2 = *(undefined1 *)(param_2 + 2);
            *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_2 + 3);
            *(undefined1 *)(param_2 + 3) = uVar2;
            uVar2 = *(undefined1 *)(param_2 + 4);
            *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_2 + 5);
            *(undefined1 *)(param_2 + 5) = uVar2;
            uVar2 = *(undefined1 *)(param_2 + 6);
            *(undefined1 *)(param_2 + 6) = *(undefined1 *)(param_2 + 7);
            *(undefined1 *)(param_2 + 7) = uVar2;
            param_2 = param_2 + 8;
            iVar6 = iVar6 + 4;
          } while (iVar6 != 0);
        }
        if ((uVar4 & 3) != 0) {
          lVar5 = 0;
          do {
            uVar2 = *(undefined1 *)(param_2 + lVar5 * 2);
            *(undefined1 *)(param_2 + lVar5 * 2) = *(undefined1 *)(param_2 + lVar5 * 2 + 1);
            *(undefined1 *)(param_2 + lVar5 * 2 + 1) = uVar2;
            lVar5 = lVar5 + 1;
          } while ((uVar4 & 3) != (uint)lVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 1424f8bf0 png_set_user_transform_info body=27 status=ok
// SIG undefined png_set_user_transform_info(void)

void png_set_user_transform_info
               (longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
                    /* 0x24f8bf0  822  png_set_user_transform_info */
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x148) = param_2;
    *(undefined1 *)(param_1 + 0x150) = param_3;
    *(undefined1 *)(param_1 + 0x151) = param_4;
  }
  return;
}



// FUNCTION 1424f8c10 png_get_user_transform_ptr body=16 status=ok
// SIG undefined png_get_user_transform_ptr(void)

undefined8 png_get_user_transform_ptr(longlong param_1)

{
                    /* 0x24f8c10  712  png_get_user_transform_ptr */
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x148);
  }
  return 0;
}



// FUNCTION 1424f8c20 png_get_current_row_number body=18 status=ok
// SIG undefined png_get_current_row_number(void)

undefined4 png_get_current_row_number(longlong param_1)

{
                    /* 0x24f8c20  666  png_get_current_row_number */
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 500);
  }
  return 0xffffffff;
}



// FUNCTION 1424f8c40 png_get_current_pass_number body=15 status=ok
// SIG undefined png_get_current_pass_number(void)

undefined1 png_get_current_pass_number(longlong param_1)

{
                    /* 0x24f8c40  665  png_get_current_pass_number */
  if (param_1 != 0) {
    return *(undefined1 *)(param_1 + 0x25c);
  }
  return 8;
}



// FUNCTION 1424f8c50 png_set_crc_action body=195 status=ok
// SIG undefined png_set_crc_action(void)

void png_set_crc_action(longlong param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0x24f8c50  764  png_set_crc_action */
  if (param_1 != 0) {
    switch(param_2) {
    case 2:
      png_warning(param_1,"Can\'t discard critical data on CRC error");
    default:
      *(byte *)(param_1 + 0x159) = *(byte *)(param_1 + 0x159) & 0xf3;
      break;
    case 3:
      *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) & 0xfffff3ff | 0x400;
      break;
    case 4:
      *(byte *)(param_1 + 0x159) = *(byte *)(param_1 + 0x159) | 0xc;
      break;
    case 5:
      break;
    }
    switch(param_3) {
    case 1:
      *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) & 0xfffffcff | 0x200;
      break;
    default:
      *(byte *)(param_1 + 0x159) = *(byte *)(param_1 + 0x159) & 0xfc;
      break;
    case 3:
      *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) & 0xfffffcff | 0x100;
      break;
    case 4:
      *(byte *)(param_1 + 0x159) = *(byte *)(param_1 + 0x159) | 3;
      break;
    case 5:
      break;
    }
  }
  return;
}



// FUNCTION 1424f8d40 png_set_background_fixed body=103 status=ok
// SIG undefined png_set_background_fixed(void)

void png_set_background_fixed
               (longlong param_1,undefined8 *param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  
                    /* 0x24f8d40  751  png_set_background_fixed */
  if (param_1 != 0) {
    if (param_3 == 0) {
      png_warning(param_1,"Application must supply a known background gamma");
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x15c) | 0x80;
    *(uint *)(param_1 + 0x15c) = uVar1;
    *(undefined2 *)(param_1 + 0x278) = *(undefined2 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 0x270) = *param_2;
    *(undefined4 *)(param_1 + 0x26c) = param_5;
    *(char *)(param_1 + 0x268) = (char)param_3;
    *(uint *)(param_1 + 0x15c) = (uint)(param_4 != 0) << 8 | uVar1;
  }
  return;
}



// FUNCTION 1424f8db0 png_set_background body=147 status=ok
// SIG undefined png_set_background(void)

void png_set_background(longlong param_1,undefined8 *param_2,int param_3,int param_4,
                       undefined8 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  
                    /* 0x24f8db0  750  png_set_background */
  uVar1 = FUN_1424f11f0(param_1,param_5,"png_set_background");
  if (param_1 != 0) {
    if (param_3 == 0) {
      png_warning(param_1,"Application must supply a known background gamma");
      return;
    }
    uVar2 = *(uint *)(param_1 + 0x15c) | 0x80;
    *(uint *)(param_1 + 0x15c) = uVar2;
    *(undefined2 *)(param_1 + 0x278) = *(undefined2 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 0x270) = *param_2;
    *(undefined4 *)(param_1 + 0x26c) = uVar1;
    *(char *)(param_1 + 0x268) = (char)param_3;
    *(uint *)(param_1 + 0x15c) = (uint)(param_4 != 0) << 8 | uVar2;
  }
  return;
}



// FUNCTION 1424f8e50 png_set_strip_16 body=28 status=ok
// SIG undefined png_set_strip_16(void)

void png_set_strip_16(longlong param_1)

{
                    /* 0x24f8e50  811  png_set_strip_16 */
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) & 0xfffff9ff | 0x400;
  }
  return;
}



// FUNCTION 1424f8e70 png_set_strip_alpha body=13 status=ok
// SIG undefined png_set_strip_alpha(void)

void png_set_strip_alpha(longlong param_1)

{
                    /* 0x24f8e70  812  png_set_strip_alpha */
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x15e) = *(byte *)(param_1 + 0x15e) | 4;
  }
  return;
}



// FUNCTION 1424f8e80 png_set_quantize body=2821 status=ok
// SIG undefined png_set_quantize(void)

/* WARNING: Removing unreachable block (ram,0x0001424f91fb) */

void png_set_quantize(longlong param_1,byte *param_2,ulonglong param_3,uint param_4,longlong param_5
                     ,int param_6)

{
  byte bVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  void *_Dst;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  byte *pbVar16;
  ulonglong uVar17;
  longlong *plVar18;
  byte bVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  byte *pbVar24;
  undefined1 uVar25;
  int iVar26;
  ulonglong uVar27;
  byte *pbVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  byte *pbVar34;
  uint uVar35;
  longlong lVar36;
  ulonglong uVar37;
  bool bVar38;
  undefined1 auStack_d8 [39];
  char local_b1;
  ulonglong local_b0;
  byte *local_a8;
  int local_9c;
  longlong local_98;
  uint local_8c;
  longlong *local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  ulonglong local_68;
  byte *local_60;
  longlong local_58;
  undefined2 local_50;
  byte local_4e;
  ulonglong local_48;
  
                    /* 0x24f8e80  794  png_set_quantize */
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = param_3;
  local_a8 = param_2;
  if (param_1 == 0) goto LAB_1424f99a5;
  *(byte *)(param_1 + 0x15c) = *(byte *)(param_1 + 0x15c) | 0x40;
  local_9c = param_6;
  if (param_6 == 0) {
    uVar37 = param_3 & 0xffffffff;
    puVar7 = (undefined1 *)png_malloc(param_1,uVar37);
    *(undefined1 **)(param_1 + 0x3a0) = puVar7;
    if (0 < (int)param_3) {
      *puVar7 = 0;
      if ((uint)local_b0 != 1) {
        uVar5 = (uint)local_b0 - 1 & 3;
        lVar13 = 1;
        if (2 < uVar37 - 2) {
          lVar8 = 0;
          do {
            lVar13 = lVar8;
            cVar11 = (char)lVar13;
            *(char *)(*(longlong *)(param_1 + 0x3a0) + 1 + lVar13) = cVar11 + '\x01';
            *(char *)(*(longlong *)(param_1 + 0x3a0) + 2 + lVar13) = cVar11 + '\x02';
            *(char *)(*(longlong *)(param_1 + 0x3a0) + 3 + lVar13) = cVar11 + '\x03';
            *(char *)(*(longlong *)(param_1 + 0x3a0) + 4 + lVar13) = cVar11 + '\x04';
            lVar8 = lVar13 + 4;
          } while ((uVar37 - 1) - (ulonglong)uVar5 != lVar13 + 4);
          lVar13 = lVar13 + 5;
        }
        if (uVar5 != 0) {
          lVar8 = -(ulonglong)uVar5;
          do {
            *(char *)(*(longlong *)(param_1 + 0x3a0) + lVar13) = (char)lVar13;
            lVar13 = lVar13 + 1;
            lVar8 = lVar8 + 1;
          } while (lVar8 != 0);
        }
      }
    }
  }
  uVar37 = local_b0;
  uVar5 = (uint)local_b0;
  if ((int)param_4 < (int)uVar5) {
    uVar14 = local_b0 & 0xffffffff;
    puVar7 = (undefined1 *)png_malloc(param_1,uVar14);
    local_8c = param_4;
    local_68 = uVar14;
    if (param_5 == 0) {
      *(undefined1 **)(param_1 + 0x448) = puVar7;
      uVar10 = png_malloc(param_1,uVar14);
      *(undefined8 *)(param_1 + 0x450) = uVar10;
      if (0 < (int)uVar5) {
        if (uVar5 == 1) {
          lVar13 = 0;
        }
        else {
          lVar13 = 0;
          do {
            cVar11 = (char)lVar13;
            *(char *)(*(longlong *)(param_1 + 0x448) + lVar13) = cVar11;
            *(char *)(*(longlong *)(param_1 + 0x450) + lVar13) = cVar11;
            *(char *)(*(longlong *)(param_1 + 0x448) + 1 + lVar13) = cVar11 + '\x01';
            *(char *)(*(longlong *)(param_1 + 0x450) + 1 + lVar13) = cVar11 + '\x01';
            lVar13 = lVar13 + 2;
          } while (uVar14 - (uVar5 & 1) != lVar13);
          if ((ulonglong)(uVar5 & 1) == 0) goto LAB_1424f9431;
        }
        *(char *)(*(longlong *)(param_1 + 0x448) + lVar13) = (char)lVar13;
        *(char *)(*(longlong *)(param_1 + 0x450) + lVar13) = (char)lVar13;
      }
LAB_1424f9431:
      local_88 = (longlong *)(param_1 + 0x448);
      bVar38 = local_9c != 0;
      local_98 = png_calloc(param_1,0x1808);
      local_b1 = (int)uVar5 < 1 || bVar38;
      local_60 = local_a8 + 2;
      local_78 = 0x60;
      puVar9 = (undefined8 *)0x0;
      do {
        local_58 = (longlong)((int)uVar37 + -1);
        iVar33 = 1;
        lVar13 = 0;
        local_b0 = uVar37;
LAB_1424f9640:
        pbVar16 = local_a8;
        if (lVar13 < local_58) goto code_r0x0001424f964e;
        param_4 = param_4;
        if (puVar9 != (undefined8 *)0x0) {
          uVar14 = 0;
          uVar37 = local_b0;
          do {
            local_80 = uVar14;
            for (puVar2 = *(undefined8 **)(local_98 + local_80 * 8); puVar2 != (undefined8 *)0x0;
                puVar2 = (undefined8 *)*puVar2) {
              uVar17 = uVar37 & 0xffffffff;
              lVar13 = *local_88;
              uVar14 = (ulonglong)*(byte *)(puVar2 + 1);
              iVar33 = (int)uVar37;
              if ((int)(uint)*(byte *)(lVar13 + uVar14) < iVar33) {
                bVar19 = *(byte *)((longlong)puVar2 + 9);
                uVar27 = (ulonglong)bVar19;
                if ((int)(uint)*(byte *)(lVar13 + uVar27) < iVar33) {
                  if ((uVar37 & 1) != 0) {
                    uVar27 = (ulonglong)*(byte *)(puVar2 + 1);
                  }
                  uVar17 = (longlong)iVar33 - 1;
                  lVar13 = (ulonglong)*(byte *)(lVar13 + uVar27) * 3;
                  local_a8[lVar13 + 2] = local_a8[uVar17 * 3 + 2];
                  *(undefined2 *)(local_a8 + lVar13) = *(undefined2 *)(local_a8 + uVar17 * 3);
                  if (local_b1 == '\0') {
                    if ((uVar37 & 1) != 0) {
                      uVar14 = (ulonglong)bVar19;
                    }
                    uVar37 = 0;
                    do {
                      lVar13 = *(longlong *)(param_1 + 0x3a0);
                      bVar19 = *(byte *)(lVar13 + uVar37);
                      if (bVar19 == *(byte *)(*(longlong *)(param_1 + 0x448) + uVar27)) {
                        *(undefined1 *)(lVar13 + uVar37) =
                             *(undefined1 *)(*(longlong *)(param_1 + 0x448) + uVar14);
                        lVar13 = *(longlong *)(param_1 + 0x3a0);
                        bVar19 = *(byte *)(lVar13 + uVar37);
                      }
                      if ((uint)uVar17 == (uint)bVar19) {
                        *(undefined1 *)(lVar13 + uVar37) = *(undefined1 *)(*local_88 + uVar27);
                      }
                      uVar37 = uVar37 + 1;
                    } while (local_68 != uVar37);
                  }
                  *(undefined1 *)
                   (*(longlong *)(param_1 + 0x448) +
                   (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x450) + uVar17)) =
                       *(undefined1 *)(*(longlong *)(param_1 + 0x448) + uVar27);
                  *(undefined1 *)
                   (*(longlong *)(param_1 + 0x450) +
                   (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x448) + uVar27)) =
                       *(undefined1 *)(*(longlong *)(param_1 + 0x450) + uVar17);
                  *(char *)(*(longlong *)(param_1 + 0x448) + uVar27) = (char)uVar17;
                  *(char *)(*(longlong *)(param_1 + 0x450) + uVar17) = (char)uVar27;
                }
              }
              uVar37 = uVar17;
              if ((int)uVar17 <= (int)param_4) goto LAB_1424f9751;
            }
            uVar14 = local_80 + 1;
          } while (local_80 < local_78);
          goto LAB_1424f9751;
        }
LAB_1424f974c:
        puVar9 = (undefined8 *)0x0;
        uVar37 = local_b0;
LAB_1424f9751:
        lVar13 = local_98;
        lVar8 = 0;
        do {
          plVar18 = *(longlong **)(lVar13 + lVar8 * 8);
          if (plVar18 != (longlong *)0x0) {
            do {
              plVar18 = (longlong *)*plVar18;
              png_free(param_1);
            } while (plVar18 != (longlong *)0x0);
            puVar9 = (undefined8 *)0x0;
          }
          *(undefined8 *)(lVar13 + lVar8 * 8) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x301);
        local_78 = local_78 + 0x60;
      } while ((int)param_4 < (int)uVar37);
      png_free(param_1,lVar13);
      png_free(param_1,*(undefined8 *)(param_1 + 0x450));
      png_free(param_1,*(undefined8 *)(param_1 + 0x448));
      *local_88 = 0;
      local_88[1] = 0;
    }
    else {
      *(undefined1 **)(param_1 + 0x440) = puVar7;
      if ((0 < (int)uVar5) && (*puVar7 = 0, (uint)local_b0 != 1)) {
        uVar5 = (uint)local_b0 - 1 & 3;
        lVar13 = 1;
        if (2 < uVar14 - 2) {
          lVar8 = 0;
          do {
            lVar13 = lVar8;
            cVar11 = (char)lVar13;
            *(char *)(*(longlong *)(param_1 + 0x440) + 1 + lVar13) = cVar11 + '\x01';
            *(char *)(*(longlong *)(param_1 + 0x440) + 2 + lVar13) = cVar11 + '\x02';
            *(char *)(*(longlong *)(param_1 + 0x440) + 3 + lVar13) = cVar11 + '\x03';
            *(char *)(*(longlong *)(param_1 + 0x440) + 4 + lVar13) = cVar11 + '\x04';
            lVar8 = lVar13 + 4;
          } while ((uVar14 - 1) - (ulonglong)uVar5 != lVar13 + 4);
          lVar13 = lVar13 + 5;
        }
        if (uVar5 != 0) {
          lVar8 = -(ulonglong)uVar5;
          do {
            *(char *)(*(longlong *)(param_1 + 0x440) + lVar13) = (char)lVar13;
            lVar13 = lVar13 + 1;
            lVar8 = lVar8 + 1;
          } while (lVar8 != 0);
        }
      }
      uVar37 = local_b0 & 0xffffffff;
      uVar5 = (uint)local_b0;
      do {
        uVar5 = uVar5 - 1;
        if (((int)uVar37 <= (int)param_4) ||
           (uVar29 = (int)uVar37 - 1, uVar37 = (ulonglong)uVar29, (int)uVar29 < 1)) break;
        bVar38 = true;
        uVar17 = 0;
        do {
          lVar13 = *(longlong *)(param_1 + 0x440);
          bVar19 = *(byte *)(lVar13 + uVar17);
          uVar27 = uVar17 + 1;
          bVar1 = *(byte *)(lVar13 + 1 + uVar17);
          if (*(ushort *)(param_5 + (ulonglong)bVar19 * 2) <
              *(ushort *)(param_5 + (ulonglong)bVar1 * 2)) {
            *(byte *)(lVar13 + uVar17) = bVar1;
            *(byte *)(*(longlong *)(param_1 + 0x440) + 1 + uVar17) = bVar19;
            bVar38 = false;
          }
          uVar17 = uVar27;
        } while (uVar5 != uVar27);
      } while (!bVar38);
      if (local_9c == 0) {
        if (0 < (int)param_4) {
          uVar37 = 0;
          uVar17 = local_b0 & 0xffffffff;
          do {
            if ((int)param_4 <= (int)(uint)*(byte *)(*(longlong *)(param_1 + 0x440) + uVar37)) {
              uVar17 = (ulonglong)(int)uVar17;
              pbVar16 = local_a8 + uVar17 * 3;
              do {
                pbVar28 = pbVar16;
                pbVar24 = (byte *)(*(longlong *)(param_1 + 0x440) + -1 + uVar17);
                uVar17 = uVar17 - 1;
                pbVar16 = pbVar28 + -3;
              } while ((int)param_4 <= (int)(uint)*pbVar24);
              local_4e = pbVar28[-1];
              local_50 = *(undefined2 *)pbVar16;
              lVar13 = uVar37 * 3;
              pbVar28[-1] = local_a8[lVar13 + 2];
              *(undefined2 *)pbVar16 = *(undefined2 *)(local_a8 + lVar13);
              local_a8[lVar13 + 2] = local_4e;
              *(undefined2 *)(local_a8 + lVar13) = local_50;
              *(char *)(*(longlong *)(param_1 + 0x3a0) + uVar17) = (char)uVar37;
              *(char *)(*(longlong *)(param_1 + 0x3a0) + uVar37) = (char)uVar17;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 != param_4);
        }
        if (0 < (int)(uint)local_b0) {
          uVar37 = 0;
          do {
            bVar19 = *(byte *)(*(longlong *)(param_1 + 0x3a0) + uVar37);
            if ((int)param_4 <= (int)(uint)bVar19) {
              uVar25 = 0;
              if (1 < (int)param_4) {
                lVar13 = (ulonglong)bVar19 * 3;
                iVar15 = (uint)local_a8[lVar13] - (uint)*local_a8;
                iVar26 = (uint)local_a8[lVar13 + 1] - (uint)local_a8[1];
                iVar6 = (uint)local_a8[lVar13 + 2] - (uint)local_a8[2];
                iVar33 = -iVar26;
                if (0 < iVar26) {
                  iVar33 = iVar26;
                }
                iVar26 = -iVar15;
                if (0 < iVar15) {
                  iVar26 = iVar15;
                }
                iVar15 = -iVar6;
                if (0 < iVar6) {
                  iVar15 = iVar6;
                }
                iVar15 = iVar15 + iVar26 + iVar33;
                uVar27 = 0;
                uVar17 = 1;
                pbVar16 = local_a8 + 5;
                do {
                  iVar6 = (uint)local_a8[lVar13] - (uint)pbVar16[-2];
                  iVar33 = -iVar6;
                  if (0 < iVar6) {
                    iVar33 = iVar6;
                  }
                  iVar26 = (uint)local_a8[lVar13 + 1] - (uint)pbVar16[-1];
                  iVar6 = -iVar26;
                  if (0 < iVar26) {
                    iVar6 = iVar26;
                  }
                  iVar20 = (uint)local_a8[lVar13 + 2] - (uint)*pbVar16;
                  iVar26 = -iVar20;
                  if (0 < iVar20) {
                    iVar26 = iVar20;
                  }
                  iVar26 = iVar26 + iVar6 + iVar33;
                  if (iVar26 < iVar15) {
                    uVar27 = uVar17 & 0xffffffff;
                  }
                  uVar25 = (undefined1)uVar27;
                  if (iVar26 <= iVar15) {
                    iVar15 = iVar26;
                  }
                  uVar17 = uVar17 + 1;
                  pbVar16 = pbVar16 + 3;
                } while (param_4 != uVar17);
              }
              *(undefined1 *)(*(longlong *)(param_1 + 0x3a0) + uVar37) = uVar25;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 != uVar14);
        }
      }
      else if (0 < (int)param_4) {
        uVar14 = 0;
        uVar37 = local_b0;
        do {
          if ((int)param_4 <= (int)(uint)*(byte *)(*(longlong *)(param_1 + 0x440) + uVar14)) {
            pbVar24 = (byte *)(*(longlong *)(param_1 + 0x440) + (longlong)(int)uVar37);
            pbVar16 = local_a8 + (longlong)(int)uVar37 * 3;
            do {
              pbVar28 = pbVar16;
              pbVar24 = pbVar24 + -1;
              pbVar16 = pbVar28 + -3;
              uVar37 = (ulonglong)((int)uVar37 - 1);
            } while ((int)param_4 <= (int)(uint)*pbVar24);
            local_a8[uVar14 * 3 + 2] = pbVar28[-1];
            *(undefined2 *)(local_a8 + uVar14 * 3) = *(undefined2 *)pbVar16;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != param_4);
      }
      png_free(param_1,*(undefined8 *)(param_1 + 0x440));
      *(undefined8 *)(param_1 + 0x440) = 0;
    }
    lVar13 = *(longlong *)(param_1 + 0x248);
    uVar5 = param_4;
  }
  else {
    lVar13 = *(longlong *)(param_1 + 0x248);
  }
  if (lVar13 == 0) {
    *(byte **)(param_1 + 0x248) = local_a8;
  }
  *(short *)(param_1 + 0x250) = (short)uVar5;
  if (local_9c != 0) {
    uVar10 = png_calloc(param_1,0x8000);
    *(undefined8 *)(param_1 + 0x398) = uVar10;
    uVar10 = 0x8000;
    _Dst = (void *)png_malloc(param_1,0x8000);
    memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar10 >> 8),0xff),0x8000);
    if (0 < (int)uVar5) {
      local_b0 = (ulonglong)uVar5;
      uVar37 = 0;
      do {
        lVar13 = uVar37 * 3;
        uVar5 = (uint)(local_a8[lVar13] >> 3);
        local_88 = (longlong *)CONCAT44(local_88._4_4_,uVar5);
        uVar29 = (uint)(local_a8[lVar13 + 1] >> 3);
        local_80 = CONCAT44(local_80._4_4_,uVar29);
        uVar30 = (uint)(local_a8[lVar13 + 2] >> 3);
        uVar23 = 0;
        do {
          uVar3 = uVar23 - uVar5;
          if (uVar23 < uVar5 || uVar23 - uVar5 == 0) {
            uVar3 = uVar5 - uVar23;
          }
          local_78 = (ulonglong)uVar3;
          local_70 = CONCAT44(local_70._4_4_,uVar23);
          local_98 = CONCAT44(local_98._4_4_,uVar23 << 10);
          uVar35 = 0;
          do {
            uVar4 = uVar35 - uVar29;
            if (uVar35 < uVar29 || uVar35 - uVar29 == 0) {
              uVar4 = uVar29 - uVar35;
            }
            uVar22 = uVar4;
            if ((int)uVar4 <= (int)uVar3) {
              uVar22 = uVar3;
            }
            uVar31 = 0;
            uVar21 = uVar30;
            do {
              uVar32 = uVar31 - uVar30;
              if (uVar31 <= uVar30) {
                uVar32 = uVar21;
              }
              uVar12 = uVar32;
              if ((int)uVar32 <= (int)uVar22) {
                uVar12 = uVar22;
              }
              iVar33 = uVar32 + uVar3 + uVar4 + uVar12;
              lVar13 = (longlong)(int)(uVar35 << 5 | uVar23 << 10 | uVar31);
              if (iVar33 < (int)(uint)*(byte *)((longlong)_Dst + lVar13)) {
                *(char *)((longlong)_Dst + lVar13) = (char)iVar33;
                *(char *)(*(longlong *)(param_1 + 0x398) + lVar13) = (char)uVar37;
              }
              uVar31 = uVar31 + 1;
              uVar21 = uVar21 - 1;
            } while (uVar31 != 0x20);
            uVar35 = uVar35 + 1;
          } while (uVar35 != 0x20);
          uVar23 = uVar23 + 1;
        } while (uVar23 != 0x20);
        uVar37 = uVar37 + 1;
      } while (uVar37 != local_b0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
  }
LAB_1424f99a5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
code_r0x0001424f964e:
  local_70 = lVar13 + 1;
  local_80 = CONCAT44(local_80._4_4_,iVar33);
  if ((int)local_70 < (int)local_b0) {
    lVar36 = (longlong)iVar33;
    pbVar28 = local_60 + lVar36 * 3;
    lVar8 = lVar13 * 3;
    pbVar24 = local_a8 + lVar8;
    pbVar34 = local_a8 + lVar8 + 1;
    do {
      iVar6 = (uint)*pbVar24 - (uint)pbVar28[-2];
      iVar33 = -iVar6;
      if (0 < iVar6) {
        iVar33 = iVar6;
      }
      iVar15 = (uint)*pbVar34 - (uint)pbVar28[-1];
      iVar6 = -iVar15;
      if (0 < iVar15) {
        iVar6 = iVar15;
      }
      iVar26 = (uint)pbVar16[lVar8 + 2] - (uint)*pbVar28;
      iVar15 = -iVar26;
      if (0 < iVar26) {
        iVar15 = iVar26;
      }
      uVar14 = (ulonglong)(uint)(iVar15 + iVar6 + iVar33);
      if ((longlong)uVar14 <= (longlong)local_78) {
        puVar9 = (undefined8 *)png_malloc_warn(param_1,0x10);
        param_4 = local_8c;
        if (puVar9 == (undefined8 *)0x0) goto LAB_1424f974c;
        *puVar9 = *(undefined8 *)(local_98 + uVar14 * 8);
        *(char *)(puVar9 + 1) = (char)lVar13;
        *(char *)((longlong)puVar9 + 9) = (char)lVar36;
        *(undefined8 **)(local_98 + uVar14 * 8) = puVar9;
      }
      lVar36 = lVar36 + 1;
      pbVar28 = pbVar28 + 3;
    } while (lVar36 < (int)uVar37);
  }
  iVar33 = (int)local_80 + 1;
  lVar13 = local_70;
  param_4 = local_8c;
  if (puVar9 == (undefined8 *)0x0) goto LAB_1424f974c;
  goto LAB_1424f9640;
}



// FUNCTION 1424f99d0 png_set_gamma_fixed body=119 status=ok
// SIG undefined png_set_gamma_fixed(void)

void png_set_gamma_fixed(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
                    /* 0x24f99d0  777  png_set_gamma_fixed */
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 == 0) goto LAB_1424f9a3a;
  if ((*(byte *)(param_1 + 0x25e) == 3) || ((*(byte *)(param_1 + 0x25e) & 4) != 0)) {
LAB_1424f9a27:
    *(byte *)(param_1 + 0x15d) = *(byte *)(param_1 + 0x15d) | 0x20;
  }
  else {
    iVar1 = FUN_1424f1250(&local_24,param_2,param_3,100000);
    if (iVar1 == 0) goto LAB_1424f9a27;
    iVar1 = FUN_1424f14e0(local_24);
    if (iVar1 != 0) goto LAB_1424f9a27;
  }
  *(undefined4 *)(param_1 + 0x29c) = param_3;
  *(undefined4 *)(param_1 + 0x2a0) = param_2;
LAB_1424f9a3a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424f9a50 png_set_gamma body=159 status=ok
// SIG undefined png_set_gamma(void)

void png_set_gamma(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
                    /* 0x24f9a50  776  png_set_gamma */
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_1424f11f0(param_1,param_3,"png_set_gamma file gamma");
  uVar2 = FUN_1424f11f0(param_1,param_2,"png_set_gamma screen gamma");
  if (param_1 == 0) goto LAB_1424f9ae2;
  if ((*(byte *)(param_1 + 0x25e) == 3) || ((*(byte *)(param_1 + 0x25e) & 4) != 0)) {
LAB_1424f9acf:
    *(byte *)(param_1 + 0x15d) = *(byte *)(param_1 + 0x15d) | 0x20;
  }
  else {
    iVar3 = FUN_1424f1250(&local_34,uVar2,uVar1,100000);
    if (iVar3 == 0) goto LAB_1424f9acf;
    iVar3 = FUN_1424f14e0(local_34);
    if (iVar3 != 0) goto LAB_1424f9acf;
  }
  *(undefined4 *)(param_1 + 0x29c) = uVar1;
  *(undefined4 *)(param_1 + 0x2a0) = uVar2;
LAB_1424f9ae2:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 1424f9b00 png_set_expand body=23 status=ok
// SIG undefined png_set_expand(void)

void png_set_expand(longlong param_1)

{
                    /* 0x24f9b00  766  png_set_expand */
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x2001000;
    *(byte *)(param_1 + 0x158) = *(byte *)(param_1 + 0x158) & 0xbf;
  }
  return;
}



// FUNCTION 1424f9b20 png_set_palette_to_rgb body=23 status=ok
// SIG undefined png_set_palette_to_rgb(void)

void png_set_palette_to_rgb(longlong param_1)

{
                    /* 0x24f9b20  793  png_set_palette_to_rgb */
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x2001000;
    *(byte *)(param_1 + 0x158) = *(byte *)(param_1 + 0x158) & 0xbf;
  }
  return;
}



// FUNCTION 1424f9b40 png_set_expand_gray_1_2_4_to_8 body=20 status=ok
// SIG undefined png_set_expand_gray_1_2_4_to_8(void)

void png_set_expand_gray_1_2_4_to_8(longlong param_1)

{
                    /* 0x24f9b40  768  png_set_expand_gray_1_2_4_to_8 */
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x15d) = *(byte *)(param_1 + 0x15d) | 0x10;
    *(byte *)(param_1 + 0x158) = *(byte *)(param_1 + 0x158) & 0xbf;
  }
  return;
}



// FUNCTION 1424f9b60 png_set_tRNS_to_alpha body=18 status=ok
// SIG undefined png_set_tRNS_to_alpha(void)

void png_set_tRNS_to_alpha(longlong param_1)

{
                    /* 0x24f9b60  817  png_set_tRNS_to_alpha */
  *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x2001000;
  *(byte *)(param_1 + 0x158) = *(byte *)(param_1 + 0x158) & 0xbf;
  return;
}



// FUNCTION 1424f9b80 png_set_expand_16 body=35 status=ok
// SIG undefined png_set_expand_16(void)

void png_set_expand_16(longlong param_1)

{
                    /* 0x24f9b80  767  png_set_expand_16 */
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) & 0xfdffe9ff | 0x2001200;
    *(byte *)(param_1 + 0x158) = *(byte *)(param_1 + 0x158) & 0xbf;
  }
  return;
}



// FUNCTION 1424f9bb0 png_set_gray_to_rgb body=20 status=ok
// SIG undefined png_set_gray_to_rgb(void)

void png_set_gray_to_rgb(longlong param_1)

{
                    /* 0x24f9bb0  778  png_set_gray_to_rgb */
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x15d) = *(byte *)(param_1 + 0x15d) | 0x50;
    *(byte *)(param_1 + 0x158) = *(byte *)(param_1 + 0x158) & 0xbf;
  }
  return;
}



// FUNCTION 1424f9bd0 png_set_rgb_to_gray_fixed body=226 status=ok
// SIG undefined png_set_rgb_to_gray_fixed(void)

void png_set_rgb_to_gray_fixed(longlong param_1,int param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  
                    /* 0x24f9bd0  800  png_set_rgb_to_gray_fixed */
  if (param_1 != 0) {
    if (param_2 == 3) {
      uVar2 = 0x200000;
    }
    else if (param_2 == 2) {
      uVar2 = 0x400000;
    }
    else {
      if (param_2 != 1) {
        png_error(param_1,"invalid error action to rgb_to_gray");
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar2 = 0x600000;
    }
    uVar2 = uVar2 | *(uint *)(param_1 + 0x15c);
    *(uint *)(param_1 + 0x15c) = uVar2;
    if (*(char *)(param_1 + 0x25e) == '\x03') {
      *(uint *)(param_1 + 0x15c) = uVar2 | 0x1000;
    }
    sVar3 = 0x5b8a;
    sVar4 = 0x1b38;
    if (-1 < (int)(param_4 | param_3)) {
      if ((int)(param_4 + param_3) < 100000) {
        sVar4 = (short)(((param_3 & 0x1ffff) << 10) / 0xc35);
        sVar3 = (short)(((param_4 & 0x1ffff) << 10) / 0xc35);
      }
      else {
        png_warning(param_1,"ignoring out of range rgb_to_gray coefficients");
      }
    }
    *(short *)(param_1 + 0x412) = sVar4;
    *(short *)(param_1 + 0x414) = sVar3;
    *(short *)(param_1 + 0x416) = (-0x8000 - sVar4) - sVar3;
  }
  return;
}



// FUNCTION 1424f9cc0 png_set_rgb_to_gray body=280 status=ok
// SIG undefined png_set_rgb_to_gray(void)

void png_set_rgb_to_gray(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  
                    /* 0x24f9cc0  799  png_set_rgb_to_gray */
  if (param_1 != 0) {
    uVar2 = FUN_1424f11f0(param_1,param_4,"rgb to gray green coefficient");
    uVar3 = FUN_1424f11f0(param_1,param_3,"rgb to gray red coefficient");
    if (param_2 == 3) {
      uVar4 = 0x200000;
    }
    else if (param_2 == 2) {
      uVar4 = 0x400000;
    }
    else {
      if (param_2 != 1) {
        png_error(param_1,"invalid error action to rgb_to_gray");
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar4 = 0x600000;
    }
    uVar4 = uVar4 | *(uint *)(param_1 + 0x15c);
    *(uint *)(param_1 + 0x15c) = uVar4;
    if (*(char *)(param_1 + 0x25e) == '\x03') {
      *(uint *)(param_1 + 0x15c) = uVar4 | 0x1000;
    }
    sVar6 = 0x5b8a;
    sVar5 = 0x1b38;
    if (-1 < (int)(uVar3 | uVar2)) {
      if ((int)(uVar3 + uVar2) < 100000) {
        sVar5 = (short)(((uVar3 & 0x1ffff) << 10) / 0xc35);
        sVar6 = (short)(((uVar2 & 0x1ffff) << 10) / 0xc35);
      }
      else {
        png_warning(param_1,"ignoring out of range rgb_to_gray coefficients");
      }
    }
    *(short *)(param_1 + 0x412) = sVar5;
    *(short *)(param_1 + 0x414) = sVar6;
    *(short *)(param_1 + 0x416) = (-0x8000 - sVar5) - sVar6;
  }
  return;
}



// FUNCTION 1424f9de0 png_set_read_user_transform_fn body=20 status=ok
// SIG undefined png_set_read_user_transform_fn(void)

void png_set_read_user_transform_fn(longlong param_1,undefined8 param_2)

{
                    /* 0x24f9de0  798  png_set_read_user_transform_fn */
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x15e) = *(byte *)(param_1 + 0x15e) | 0x10;
    *(undefined8 *)(param_1 + 0x138) = param_2;
  }
  return;
}



// FUNCTION 1424f9e00 FUN_1424f9e00 body=3031 status=ok
// SIG undefined FUN_1424f9e00(void)

void FUN_1424f9e00(longlong param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  undefined2 uVar13;
  short sVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined8 uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  byte bVar23;
  short sVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  ushort uVar30;
  longlong lVar31;
  byte *pbVar32;
  undefined1 auStack_78 [42];
  byte local_4e;
  byte local_4d;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar11 = *(byte *)(param_1 + 0x25e);
  uVar20 = *(uint *)(param_1 + 0x15c);
  if (((bVar11 & 2) == 0) && ((uVar20 & 0x100) != 0)) {
    *(byte *)(param_1 + 0x155) = *(byte *)(param_1 + 0x155) | 8;
  }
  else if (((uVar20 & 0x4180) == 0x4080) &&
          ((sVar24 = *(short *)(param_1 + 0x272), sVar24 == *(short *)(param_1 + 0x274) &&
           (sVar24 == *(short *)(param_1 + 0x276))))) {
    *(byte *)(param_1 + 0x155) = *(byte *)(param_1 + 0x155) | 8;
    *(short *)(param_1 + 0x278) = sVar24;
  }
  if ((uVar20 & 0x1100) == 0x1100) {
    if ((bVar11 & 2) == 0) {
      cVar1 = *(char *)(param_1 + 0x25f);
      if (cVar1 == '\x04') {
        sVar24 = (short)(*(int *)(param_1 + 0x278) << 4) + (short)*(int *)(param_1 + 0x278);
        *(short *)(param_1 + 0x278) = sVar24;
        *(short *)(param_1 + 0x276) = sVar24;
        *(short *)(param_1 + 0x274) = sVar24;
        *(short *)(param_1 + 0x272) = sVar24;
        if ((uVar20 & 0x2000000) == 0) {
          sVar24 = (short)*(undefined4 *)(param_1 + 0x2f8) * 0x11;
LAB_1424fa05d:
          *(short *)(param_1 + 0x2f8) = sVar24;
          *(short *)(param_1 + 0x2f6) = sVar24;
          *(short *)(param_1 + 0x2f4) = sVar24;
          *(short *)(param_1 + 0x2f2) = sVar24;
        }
      }
      else if (cVar1 == '\x02') {
        sVar24 = (short)*(undefined4 *)(param_1 + 0x278) * 0x55;
        *(short *)(param_1 + 0x278) = sVar24;
        *(short *)(param_1 + 0x276) = sVar24;
        *(short *)(param_1 + 0x274) = sVar24;
        *(short *)(param_1 + 0x272) = sVar24;
        if ((uVar20 & 0x2000000) == 0) {
          sVar24 = (short)*(undefined4 *)(param_1 + 0x2f8) * 0x55;
          *(short *)(param_1 + 0x2f8) = sVar24;
          *(short *)(param_1 + 0x2f6) = sVar24;
          *(short *)(param_1 + 0x2f4) = sVar24;
          *(short *)(param_1 + 0x2f2) = sVar24;
        }
      }
      else if (cVar1 == '\x01') {
        sVar24 = (short)(*(int *)(param_1 + 0x278) << 8) - (short)*(int *)(param_1 + 0x278);
        *(short *)(param_1 + 0x278) = sVar24;
        *(short *)(param_1 + 0x276) = sVar24;
        *(short *)(param_1 + 0x274) = sVar24;
        *(short *)(param_1 + 0x272) = sVar24;
        if ((uVar20 & 0x2000000) == 0) {
          sVar24 = (short)*(undefined4 *)(param_1 + 0x2f8) * 0xff;
          goto LAB_1424fa05d;
        }
      }
      else {
        uVar13 = *(undefined2 *)(param_1 + 0x278);
        *(undefined2 *)(param_1 + 0x276) = uVar13;
        *(undefined2 *)(param_1 + 0x274) = uVar13;
        *(undefined2 *)(param_1 + 0x272) = uVar13;
      }
      goto LAB_1424fa144;
    }
    if (bVar11 != 3) {
      *(undefined2 *)(param_1 + 0x282) = *(undefined2 *)(param_1 + 0x278);
      *(undefined8 *)(param_1 + 0x27a) = *(undefined8 *)(param_1 + 0x270);
      goto LAB_1424fa1e0;
    }
    lVar31 = *(longlong *)(param_1 + 0x248);
    lVar26 = (ulonglong)*(byte *)(param_1 + 0x270) * 3;
    *(ushort *)(param_1 + 0x272) = (ushort)*(byte *)(lVar31 + lVar26);
    *(ushort *)(param_1 + 0x274) = (ushort)*(byte *)(lVar31 + 1 + lVar26);
    *(ushort *)(param_1 + 0x276) = (ushort)*(byte *)(lVar31 + 2 + lVar26);
    if ((uVar20 & 0x2080000) == 0x80000) {
      uVar22 = (ulonglong)*(ushort *)(param_1 + 0x252);
      if (uVar22 != 0) {
        uVar21 = (ulonglong)(*(ushort *)(param_1 + 0x252) & 3);
        if (uVar22 - 1 < 3) {
          lVar31 = 0;
        }
        else {
          lVar31 = 0;
          do {
            pbVar32 = (byte *)(*(longlong *)(param_1 + 0x2e8) + lVar31);
            *pbVar32 = ~*pbVar32;
            pbVar32 = (byte *)(*(longlong *)(param_1 + 0x2e8) + 1 + lVar31);
            *pbVar32 = ~*pbVar32;
            pbVar32 = (byte *)(*(longlong *)(param_1 + 0x2e8) + 2 + lVar31);
            *pbVar32 = ~*pbVar32;
            pbVar32 = (byte *)(*(longlong *)(param_1 + 0x2e8) + 3 + lVar31);
            *pbVar32 = ~*pbVar32;
            lVar31 = lVar31 + 4;
          } while (uVar22 - uVar21 != lVar31);
        }
        if (uVar21 != 0) {
          lVar26 = -uVar21;
          do {
            pbVar32 = (byte *)(*(longlong *)(param_1 + 0x2e8) + lVar31);
            *pbVar32 = ~*pbVar32;
            lVar31 = lVar31 + 1;
            lVar26 = lVar26 + 1;
          } while (lVar26 != 0);
        }
        goto LAB_1424fa144;
      }
      *(undefined2 *)(param_1 + 0x282) = *(undefined2 *)(param_1 + 0x278);
      uVar19 = *(undefined8 *)(param_1 + 0x270);
    }
    else {
      *(undefined2 *)(param_1 + 0x282) = *(undefined2 *)(param_1 + 0x278);
      uVar19 = *(undefined8 *)(param_1 + 0x270);
    }
    *(undefined8 *)(param_1 + 0x27a) = uVar19;
LAB_1424fa166:
    bVar10 = true;
    if ((*(short *)(param_1 + 0x252) != 0) &&
       ((iVar15 = FUN_1424f1250(local_4c,*(undefined4 *)(param_1 + 0x2a0),
                                *(undefined4 *)(param_1 + 0x29c),100000), iVar15 == 0 ||
        (iVar15 = FUN_1424f14e0(), iVar15 != 0)))) {
      uVar22 = (ulonglong)*(ushort *)(param_1 + 0x252);
      if (uVar22 != 0) {
        lVar31 = *(longlong *)(param_1 + 0x2e8);
        uVar21 = (ulonglong)(*(ushort *)(param_1 + 0x252) & 3);
        if (uVar22 - 1 < 3) {
          lVar26 = 0;
          bVar9 = false;
        }
        else {
          lVar26 = 0;
          bVar9 = false;
          do {
            if (1 < (byte)(*(char *)(lVar31 + lVar26) + 1U)) {
              bVar9 = true;
            }
            if (1 < (byte)(*(char *)(lVar31 + 1 + lVar26) + 1U)) {
              bVar9 = true;
            }
            if (1 < (byte)(*(char *)(lVar31 + 2 + lVar26) + 1U)) {
              bVar9 = true;
            }
            if (1 < (byte)(*(char *)(lVar31 + 3 + lVar26) + 1U)) {
              bVar9 = true;
            }
            lVar26 = lVar26 + 4;
          } while (uVar22 - uVar21 != lVar26);
        }
        if (uVar21 != 0) {
          uVar22 = 0;
          do {
            if (1 < (byte)(*(char *)(lVar31 + lVar26 + uVar22) + 1U)) {
              bVar9 = true;
            }
            uVar22 = uVar22 + 1;
          } while (uVar21 != uVar22);
        }
        if (bVar9) goto LAB_1424fa276;
      }
      *(byte *)(param_1 + 0x15d) = *(byte *)(param_1 + 0x15d) & 0xdf;
    }
  }
  else {
LAB_1424fa144:
    *(undefined2 *)(param_1 + 0x282) = *(undefined2 *)(param_1 + 0x278);
    *(undefined8 *)(param_1 + 0x27a) = *(undefined8 *)(param_1 + 0x270);
    if (bVar11 == 3) goto LAB_1424fa166;
LAB_1424fa1e0:
    bVar10 = false;
  }
LAB_1424fa276:
  uVar20 = *(uint *)(param_1 + 0x15c);
  if (((uVar20 & 0x602000) == 0) || (*(int *)(param_1 + 0x29c) == 0)) {
    if (bVar10 && (char)uVar20 < '\0') {
      uVar3 = *(ushort *)(param_1 + 0x252);
      if ((ulonglong)uVar3 != 0) {
        uVar4 = *(ushort *)(param_1 + 0x272);
        uVar5 = *(ushort *)(param_1 + 0x274);
        uVar6 = *(ushort *)(param_1 + 0x276);
        pbVar32 = (byte *)(*(longlong *)(param_1 + 0x248) + 2);
        uVar22 = 0;
        do {
          bVar11 = *(byte *)(*(longlong *)(param_1 + 0x2e8) + uVar22);
          if (bVar11 != 0xff) {
            if (bVar11 == 0) {
              pbVar32[-2] = (byte)uVar4;
              pbVar32[-1] = (byte)uVar5;
              *pbVar32 = (byte)uVar6;
            }
            else {
              uVar30 = (ushort)(byte)~bVar11 * (uVar4 & 0xff) + (ushort)pbVar32[-2] * (ushort)bVar11
                       + 0x80;
              pbVar32[-2] = (byte)((uint)(uVar30 >> 8) + (uint)uVar30 >> 8);
              uVar30 = (ushort)*(byte *)(*(longlong *)(param_1 + 0x2e8) + uVar22);
              uVar30 = (uVar30 ^ 0xff) * (uVar5 & 0xff) + pbVar32[-1] * uVar30 + 0x80;
              pbVar32[-1] = (byte)((uint)(uVar30 >> 8) + (uint)uVar30 >> 8);
              uVar20 = (uint)*(byte *)(*(longlong *)(param_1 + 0x2e8) + uVar22);
              uVar20 = (uVar20 ^ 0xff) * (uint)(uVar6 & 0xff) + *pbVar32 * uVar20 + 0x80 & 0xffff;
              *pbVar32 = (byte)((uVar20 >> 8) + uVar20 >> 8);
            }
          }
          uVar22 = uVar22 + 1;
          pbVar32 = pbVar32 + 3;
        } while (uVar3 != uVar22);
        uVar20 = *(uint *)(param_1 + 0x15c);
      }
      uVar20 = uVar20 & 0xfffbff7f;
      goto LAB_1424fa476;
    }
  }
  else {
    FUN_1424f1500(param_1,*(undefined1 *)(param_1 + 0x25f));
    uVar20 = *(uint *)(param_1 + 0x15c);
    if ((char)uVar20 < '\0') {
      if (!bVar10) {
        cVar1 = *(char *)(param_1 + 0x268);
        if (cVar1 == '\x03') {
          uVar17 = FUN_1424f1330(*(undefined4 *)(param_1 + 0x26c));
          uVar16 = *(undefined4 *)(param_1 + 0x26c);
LAB_1424fa634:
          uVar16 = FUN_1424f1380(uVar16,*(undefined4 *)(param_1 + 0x2a0));
        }
        else {
          if (cVar1 == '\x02') {
            uVar17 = FUN_1424f1330(*(undefined4 *)(param_1 + 0x29c));
            uVar16 = *(undefined4 *)(param_1 + 0x29c);
            goto LAB_1424fa634;
          }
          if (cVar1 != '\x01') {
            png_error(param_1,"invalid background gamma type");
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          uVar17 = *(undefined4 *)(param_1 + 0x2a0);
          uVar16 = 100000;
        }
        uVar13 = FUN_1424f1430(param_1,*(undefined2 *)(param_1 + 0x278),uVar17);
        *(undefined2 *)(param_1 + 0x282) = uVar13;
        sVar14 = FUN_1424f1430(param_1,*(undefined2 *)(param_1 + 0x278),uVar16);
        *(short *)(param_1 + 0x278) = sVar14;
        sVar24 = *(short *)(param_1 + 0x272);
        if (((sVar24 == *(short *)(param_1 + 0x274)) && (sVar24 == sVar14)) &&
           (sVar24 == *(short *)(param_1 + 0x276))) {
          uVar13 = *(undefined2 *)(param_1 + 0x282);
          *(undefined2 *)(param_1 + 0x280) = uVar13;
          *(undefined2 *)(param_1 + 0x27e) = uVar13;
          *(undefined2 *)(param_1 + 0x27c) = uVar13;
          *(short *)(param_1 + 0x276) = sVar14;
          *(short *)(param_1 + 0x274) = sVar14;
          *(short *)(param_1 + 0x272) = sVar14;
        }
        else {
          uVar13 = FUN_1424f1430(param_1,sVar24,uVar17);
          *(undefined2 *)(param_1 + 0x27c) = uVar13;
          uVar13 = FUN_1424f1430(param_1,*(undefined2 *)(param_1 + 0x274),uVar17);
          *(undefined2 *)(param_1 + 0x27e) = uVar13;
          uVar13 = FUN_1424f1430(param_1,*(undefined2 *)(param_1 + 0x276),uVar17);
          *(undefined2 *)(param_1 + 0x280) = uVar13;
          uVar13 = FUN_1424f1430(param_1,*(undefined2 *)(param_1 + 0x272),uVar16);
          *(undefined2 *)(param_1 + 0x272) = uVar13;
          uVar13 = FUN_1424f1430(param_1,*(undefined2 *)(param_1 + 0x274),uVar16);
          *(undefined2 *)(param_1 + 0x274) = uVar13;
          uVar13 = FUN_1424f1430(param_1,*(undefined2 *)(param_1 + 0x276),uVar16);
          *(undefined2 *)(param_1 + 0x276) = uVar13;
        }
        goto LAB_1424fa536;
      }
      lVar31 = *(longlong *)(param_1 + 0x248);
      uVar3 = *(ushort *)(param_1 + 0x250);
      cVar1 = *(char *)(param_1 + 0x268);
      uVar17 = 100000;
      if (cVar1 == '\x01') {
        uVar16 = *(undefined4 *)(param_1 + 0x2a0);
LAB_1424fa7a1:
        iVar15 = FUN_1424f14e0(uVar17);
        uVar13 = *(undefined2 *)(param_1 + 0x272);
        if (iVar15 == 0) {
          local_4d = FUN_1424f13d0(uVar13,uVar17);
          bVar11 = FUN_1424f13d0(*(undefined2 *)(param_1 + 0x274),uVar17);
          local_4e = FUN_1424f13d0(*(undefined2 *)(param_1 + 0x276),uVar17);
          uVar13 = *(undefined2 *)(param_1 + 0x272);
        }
        else {
          bVar11 = *(byte *)(param_1 + 0x274);
          local_4e = *(byte *)(param_1 + 0x276);
          local_4d = (byte)uVar13;
        }
        uVar20 = FUN_1424f13d0(uVar13,uVar16);
        uVar18 = FUN_1424f13d0(*(undefined2 *)(param_1 + 0x274),uVar16);
        bVar12 = FUN_1424f13d0(*(undefined2 *)(param_1 + 0x276),uVar16);
        bVar2 = local_4d;
      }
      else {
        if (cVar1 == '\x03') {
          uVar16 = FUN_1424f1330(*(undefined4 *)(param_1 + 0x26c));
          uVar17 = FUN_1424f1380(*(undefined4 *)(param_1 + 0x26c),*(undefined4 *)(param_1 + 0x2a0));
          goto LAB_1424fa7a1;
        }
        uVar16 = 100000;
        if (cVar1 != '\x02') goto LAB_1424fa7a1;
        lVar26 = *(longlong *)(param_1 + 0x2a8);
        lVar7 = *(longlong *)(param_1 + 0x2b8);
        bVar2 = *(byte *)(lVar26 + (ulonglong)*(ushort *)(param_1 + 0x272));
        bVar11 = *(byte *)(lVar26 + (ulonglong)*(ushort *)(param_1 + 0x274));
        local_4e = *(byte *)(lVar26 + (ulonglong)*(ushort *)(param_1 + 0x276));
        uVar20 = (uint)*(byte *)(lVar7 + (ulonglong)*(ushort *)(param_1 + 0x272));
        uVar18 = (uint)*(byte *)(lVar7 + (ulonglong)*(ushort *)(param_1 + 0x274));
        bVar12 = *(byte *)(lVar7 + (ulonglong)*(ushort *)(param_1 + 0x276));
      }
      if (uVar3 != 0) {
        pbVar32 = (byte *)(lVar31 + 2);
        uVar22 = 0;
        do {
          if (uVar22 < *(ushort *)(param_1 + 0x252)) {
            bVar23 = *(byte *)(*(longlong *)(param_1 + 0x2e8) + uVar22);
            if (bVar23 == 0xff) goto LAB_1424fa990;
            if (bVar23 == 0) {
              pbVar32[-2] = bVar2;
              pbVar32[-1] = bVar11;
              bVar23 = local_4e;
            }
            else {
              iVar15 = (uint)*(byte *)(*(longlong *)(param_1 + 0x2b8) + (ulonglong)pbVar32[-2]) *
                       (uint)bVar23;
              iVar25 = (uint)(byte)~bVar23 * (uVar20 & 0xff);
              pbVar32[-2] = *(byte *)(*(longlong *)(param_1 + 0x2b0) +
                                     (ulonglong)
                                     ((iVar25 + iVar15 + 0x80U >> 8 & 0xff) + 0x80 + iVar25 + iVar15
                                      >> 8 & 0xff));
              uVar28 = (uint)*(byte *)(*(longlong *)(param_1 + 0x2e8) + uVar22);
              iVar25 = *(byte *)(*(longlong *)(param_1 + 0x2b8) + (ulonglong)pbVar32[-1]) * uVar28;
              iVar15 = (uVar28 ^ 0xff) * (uVar18 & 0xff);
              pbVar32[-1] = *(byte *)(*(longlong *)(param_1 + 0x2b0) +
                                     (ulonglong)
                                     ((iVar15 + iVar25 + 0x80U >> 8 & 0xff) + 0x80 + iVar15 + iVar25
                                      >> 8 & 0xff));
              uVar28 = (uint)*(byte *)(*(longlong *)(param_1 + 0x2e8) + uVar22);
              iVar25 = *(byte *)(*(longlong *)(param_1 + 0x2b8) + (ulonglong)*pbVar32) * uVar28;
              iVar15 = (uVar28 ^ 0xff) * (uint)bVar12;
              bVar23 = *(byte *)(*(longlong *)(param_1 + 0x2b0) +
                                (ulonglong)
                                (byte)((iVar15 + iVar25 + 0x80U >> 8 & 0xff) + iVar15 + iVar25 +
                                       0x80 >> 8));
            }
          }
          else {
LAB_1424fa990:
            pbVar32[-2] = *(byte *)(*(longlong *)(param_1 + 0x2a8) + (ulonglong)pbVar32[-2]);
            pbVar32[-1] = *(byte *)(*(longlong *)(param_1 + 0x2a8) + (ulonglong)pbVar32[-1]);
            bVar23 = *(byte *)(*(longlong *)(param_1 + 0x2a8) + (ulonglong)*pbVar32);
          }
          *pbVar32 = bVar23;
          uVar22 = uVar22 + 1;
          pbVar32 = pbVar32 + 3;
        } while (uVar3 != uVar22);
      }
      uVar20 = *(uint *)(param_1 + 0x15c) & 0xfffbdf7f;
LAB_1424fa476:
      uVar20 = uVar20 | 0x40000;
    }
    else {
      if (!bVar10) goto LAB_1424fa536;
      uVar3 = *(ushort *)(param_1 + 0x250);
      if ((ulonglong)uVar3 != 0) {
        lVar31 = *(longlong *)(param_1 + 0x248);
        lVar26 = 0;
        do {
          *(undefined1 *)(lVar31 + lVar26) =
               *(undefined1 *)
                (*(longlong *)(param_1 + 0x2a8) + (ulonglong)*(byte *)(lVar31 + lVar26));
          *(undefined1 *)(lVar31 + 1 + lVar26) =
               *(undefined1 *)
                (*(longlong *)(param_1 + 0x2a8) + (ulonglong)*(byte *)(lVar31 + 1 + lVar26));
          *(undefined1 *)(lVar31 + 2 + lVar26) =
               *(undefined1 *)
                (*(longlong *)(param_1 + 0x2a8) + (ulonglong)*(byte *)(lVar31 + 2 + lVar26));
          lVar26 = lVar26 + 3;
        } while ((ulonglong)uVar3 * 3 != lVar26);
        uVar20 = *(uint *)(param_1 + 0x15c);
      }
      uVar20 = uVar20 & 0xffffdfff;
    }
    *(uint *)(param_1 + 0x15c) = uVar20;
  }
  if (bVar10 && (uVar20 & 8) != 0) {
    iVar25 = 8 - (uint)*(byte *)(param_1 + 0x2d8);
    iVar29 = 8 - (uint)*(byte *)(param_1 + 0x2d9);
    iVar15 = 8 - (uint)*(byte *)(param_1 + 0x2da);
    iVar27 = 0;
    if (iVar25 < 0) {
      iVar25 = iVar27;
    }
    uVar3 = *(ushort *)(param_1 + 0x250);
    if (iVar29 < 0) {
      iVar29 = iVar27;
    }
    if (iVar15 < 0) {
      iVar15 = iVar27;
    }
    if ((ulonglong)uVar3 != 0) {
      lVar31 = 0;
      do {
        *(byte *)(*(longlong *)(param_1 + 0x248) + lVar31) =
             *(byte *)(*(longlong *)(param_1 + 0x248) + lVar31) >> ((byte)iVar25 & 0x1f);
        *(byte *)(*(longlong *)(param_1 + 0x248) + 1 + lVar31) =
             *(byte *)(*(longlong *)(param_1 + 0x248) + 1 + lVar31) >> ((byte)iVar29 & 0x1f);
        *(byte *)(*(longlong *)(param_1 + 0x248) + 2 + lVar31) =
             *(byte *)(*(longlong *)(param_1 + 0x248) + 2 + lVar31) >> ((byte)iVar15 & 0x1f);
        lVar31 = lVar31 + 3;
      } while ((ulonglong)uVar3 * 3 != lVar31);
    }
  }
LAB_1424fa536:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 1424faa00 FUN_1424faa00 body=597 status=ok
// SIG undefined FUN_1424faa00(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1424faa00(longlong param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  
  if ((*(uint *)(param_1 + 0x15c) & 0x1000) == 0) goto LAB_1424faa59;
  bVar5 = *(short *)(param_1 + 0x252) != 0;
  bVar6 = (*(uint *)(param_1 + 0x15c) & 0x2000000) != 0;
  if (*(byte *)((longlong)param_2 + 0x25) == 3) {
    *(byte *)((longlong)param_2 + 0x25) = (bVar6 && bVar5) << 2 | 2;
LAB_1424faa4c:
    *(undefined1 *)(param_2 + 9) = 8;
  }
  else {
    if (bVar6 && bVar5) {
      *(byte *)((longlong)param_2 + 0x25) = *(byte *)((longlong)param_2 + 0x25) | 4;
    }
    if ((byte)param_2[9] < 8) goto LAB_1424faa4c;
  }
  *(undefined2 *)((longlong)param_2 + 0x22) = 0;
LAB_1424faa59:
  uVar3 = *(uint *)(param_1 + 0x15c);
  if ((((uVar3 & 0x200) != 0) && ((char)param_2[9] == '\b')) &&
     (*(char *)((longlong)param_2 + 0x25) != '\x03')) {
    *(undefined1 *)(param_2 + 9) = 0x10;
    uVar3 = *(uint *)(param_1 + 0x15c);
  }
  if ((char)uVar3 < '\0') {
    *(byte *)((longlong)param_2 + 0x25) = *(byte *)((longlong)param_2 + 0x25) & 0xfb;
    *(undefined2 *)((longlong)param_2 + 0x22) = 0;
    *(undefined2 *)((longlong)param_2 + 0x82) = *(undefined2 *)(param_1 + 0x278);
    *(undefined8 *)((longlong)param_2 + 0x7a) = *(undefined8 *)(param_1 + 0x270);
    uVar3 = *(uint *)(param_1 + 0x15c);
  }
  if ((uVar3 & 0x2000) != 0) {
    param_2[0xd] = *(uint *)(param_1 + 0x29c);
    uVar3 = *(uint *)(param_1 + 0x15c);
  }
  if (((uVar3 & 0x400) != 0) && ((char)param_2[9] == '\x10')) {
    *(undefined1 *)(param_2 + 9) = 8;
    uVar3 = *(uint *)(param_1 + 0x15c);
  }
  if ((uVar3 & 0x4000) != 0) {
    *(byte *)((longlong)param_2 + 0x25) = *(byte *)((longlong)param_2 + 0x25) | 2;
    uVar3 = *(uint *)(param_1 + 0x15c);
  }
  if ((uVar3 & 0x600000) != 0) {
    *(byte *)((longlong)param_2 + 0x25) = *(byte *)((longlong)param_2 + 0x25) & 0xfd;
    uVar3 = *(uint *)(param_1 + 0x15c);
  }
  if ((((uVar3 & 0x40) != 0) && ((*(byte *)((longlong)param_2 + 0x25) | 4) == 6)) &&
     ((*(longlong *)(param_1 + 0x398) != 0 && ((char)param_2[9] == '\b')))) {
    *(undefined1 *)((longlong)param_2 + 0x25) = 3;
    uVar3 = *(uint *)(param_1 + 0x15c);
  }
  if (((uVar3 & 4) != 0) && ((byte)param_2[9] < 8)) {
    *(undefined1 *)(param_2 + 9) = 8;
  }
  bVar4 = *(byte *)((longlong)param_2 + 0x25);
  if ((bVar4 == 3) || ((bVar4 & 2) == 0)) {
    *(undefined1 *)((longlong)param_2 + 0x29) = 1;
    bVar2 = 1;
    bVar1 = *(byte *)(param_1 + 0x15e);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 0x29) = 3;
    bVar2 = 3;
    bVar1 = *(byte *)(param_1 + 0x15e);
  }
  if ((bVar1 & 4) != 0) {
    bVar4 = bVar4 & 0xfb;
    *(byte *)((longlong)param_2 + 0x25) = bVar4;
  }
  if ((bVar4 & 4) != 0) {
    bVar2 = bVar2 + 1;
    *(byte *)((longlong)param_2 + 0x29) = bVar2;
  }
  uVar3 = *(uint *)(param_1 + 0x15c);
  if (((short)uVar3 < 0) && ((bVar4 | 2) == 2)) {
    bVar2 = bVar2 + 1;
    *(byte *)((longlong)param_2 + 0x29) = bVar2;
    uVar3 = *(uint *)(param_1 + 0x15c);
    if ((uVar3 & 0x1000000) != 0) {
      *(byte *)((longlong)param_2 + 0x25) = bVar4 | 4;
      uVar3 = *(uint *)(param_1 + 0x15c);
    }
  }
  bVar4 = (byte)param_2[9];
  if ((uVar3 & 0x100000) != 0) {
    bVar1 = *(byte *)(param_1 + 0x150);
    if (bVar4 < bVar1) {
      *(byte *)(param_2 + 9) = bVar1;
      bVar4 = bVar1;
    }
    bVar1 = *(byte *)(param_1 + 0x151);
    if (bVar2 < bVar1) {
      *(byte *)((longlong)param_2 + 0x29) = bVar1;
      bVar2 = bVar1;
    }
  }
  bVar4 = bVar4 * bVar2;
  *(byte *)((longlong)param_2 + 0x2a) = bVar4;
  if (7 < bVar4) {
    *(ulonglong *)(param_2 + 4) = (ulonglong)(bVar4 >> 3) * (ulonglong)*param_2;
    return;
  }
  *(ulonglong *)(param_2 + 4) = (ulonglong)*param_2 * (ulonglong)bVar4 + 7 >> 3;
  return;
}



// FUNCTION 1424fac60 FUN_1424fac60 body=2215 status=ok
// SIG undefined FUN_1424fac60(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1424fac60(longlong param_1)

{
  byte *pbVar1;
  undefined1 uVar2;
  bool bVar3;
  code *pcVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  char cVar8;
  short sVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  char *pcVar15;
  int iVar16;
  undefined1 *puVar17;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar7 = *(longlong *)(param_1 + 0x200);
  if (lVar7 == 0) {
    local_a8 = CONCAT44(local_a8._4_4_,(uint)*(byte *)(param_1 + 0x25c));
    FUN_1424ef650(local_68,0x32,"NULL row buffer for row %ld, pass %d",
                  *(undefined4 *)(param_1 + 500));
    png_error(param_1,local_68);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if ((*(uint *)(param_1 + 0x15c) & 0x1000) != 0) {
    if (*(char *)(param_1 + 0x238) == '\x03') {
      local_a8 = CONCAT44(local_a8._4_4_,(uint)*(ushort *)(param_1 + 0x252));
      FUN_1424fb520(param_1 + 0x228,lVar7 + 1,*(undefined8 *)(param_1 + 0x248),
                    *(undefined8 *)(param_1 + 0x2e8));
    }
    else {
      if (((*(uint *)(param_1 + 0x15c) & 0x2000000) == 0) || (*(ushort *)(param_1 + 0x252) == 0)) {
        lVar11 = 0;
      }
      else {
        lVar11 = param_1 + 0x2f0;
      }
      FUN_1424fb8f0(param_1 + 0x228,lVar7 + 1,lVar11);
    }
  }
  uVar10 = *(uint *)(param_1 + 0x15c);
  if (((uVar10 & 0x40000) != 0) && ((*(byte *)(param_1 + 0x238) | 2) == 6)) {
    FUN_1424f85e0(param_1 + 0x228,*(longlong *)(param_1 + 0x200) + 1,0);
    uVar10 = *(uint *)(param_1 + 0x15c);
  }
  if ((uVar10 & 0x600000) == 0) {
LAB_1424fada4:
    if ((uVar10 & 0x4000) == 0) goto LAB_1424faded;
LAB_1424fadac:
    if ((*(byte *)(param_1 + 0x155) & 8) != 0) goto LAB_1424faded;
    FUN_1424fc590(param_1 + 0x228);
    uVar10 = *(uint *)(param_1 + 0x15c);
    cVar8 = (char)uVar10;
  }
  else {
    iVar6 = FUN_1424fbec0(param_1,param_1 + 0x228,*(longlong *)(param_1 + 0x200) + 1);
    if (iVar6 != 0) {
      *(undefined1 *)(param_1 + 0x410) = 1;
      uVar10 = *(uint *)(param_1 + 0x15c);
      if ((uVar10 & 0x600000) == 0x400000) {
        png_warning(param_1);
        uVar10 = *(uint *)(param_1 + 0x15c);
      }
      if ((uVar10 & 0x600000) == 0x200000) {
        pcVar15 = "png_do_rgb_to_gray found nongray pixel";
        goto LAB_1424fb50b;
      }
      goto LAB_1424fada4;
    }
    uVar10 = *(uint *)(param_1 + 0x15c);
    if ((uVar10 & 0x4000) != 0) goto LAB_1424fadac;
LAB_1424faded:
    cVar8 = (char)uVar10;
  }
  if ((cVar8 < '\0') &&
     ((*(short *)(param_1 + 0x252) != 0 || ((*(byte *)(param_1 + 0x25e) & 4) != 0)))) {
    local_70 = *(undefined4 *)(param_1 + 0x298);
    local_80 = *(undefined4 *)(param_1 + 0x2c8);
    uStack_7c = *(undefined4 *)(param_1 + 0x2cc);
    uStack_78 = *(undefined4 *)(param_1 + 0x2d0);
    uStack_74 = *(undefined4 *)(param_1 + 0x2d4);
    local_90 = *(undefined4 *)(param_1 + 0x2b8);
    uStack_8c = *(undefined4 *)(param_1 + 700);
    uStack_88 = *(undefined4 *)(param_1 + 0x2c0);
    uStack_84 = *(undefined4 *)(param_1 + 0x2c4);
    local_a0 = *(undefined4 *)(param_1 + 0x2a8);
    uStack_9c = *(undefined4 *)(param_1 + 0x2ac);
    uStack_98 = *(undefined4 *)(param_1 + 0x2b0);
    uStack_94 = *(undefined4 *)(param_1 + 0x2b4);
    local_a8 = param_1 + 0x27a;
    FUN_1424fc910(param_1 + 0x228,*(longlong *)(param_1 + 0x200) + 1,param_1 + 0x2f0,param_1 + 0x270
                 );
    uVar10 = *(uint *)(param_1 + 0x15c);
  }
  if ((uVar10 & 0x2000) != 0) {
    if ((char)uVar10 < '\0') {
      if ((*(short *)(param_1 + 0x252) != 0) ||
         (bVar5 = *(byte *)(param_1 + 0x25e), (bVar5 & 4) != 0)) goto joined_r0x0001424faee7;
    }
    else {
      bVar5 = *(byte *)(param_1 + 0x25e);
    }
    if (bVar5 != 3) {
      local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)(param_1 + 0x298));
      FUN_1424fda30(param_1 + 0x228,*(longlong *)(param_1 + 0x200) + 1,
                    *(undefined8 *)(param_1 + 0x2a8),*(undefined8 *)(param_1 + 0x2c0));
      uVar10 = *(uint *)(param_1 + 0x15c);
    }
  }
joined_r0x0001424faee7:
  if (((uVar10 & 0x400) != 0) && (*(char *)(param_1 + 0x239) == '\x10')) {
    iVar6 = *(int *)(param_1 + 0x228);
    bVar5 = *(byte *)(param_1 + 0x23a);
    uVar12 = (uint)bVar5 * iVar6;
    if (uVar12 == 0) {
      uVar12 = 0;
    }
    else {
      puVar13 = (undefined1 *)(*(longlong *)(param_1 + 0x200) + 1);
      puVar17 = puVar13;
      if (6 < uVar12 - 1) {
        iVar16 = (uVar12 & 7) - uVar12;
        do {
          *puVar13 = *puVar17;
          puVar13[1] = puVar17[2];
          puVar13[2] = puVar17[4];
          puVar13[3] = puVar17[6];
          puVar13[4] = puVar17[8];
          puVar13[5] = puVar17[10];
          puVar13[6] = puVar17[0xc];
          puVar13[7] = puVar17[0xe];
          puVar17 = puVar17 + 0x10;
          puVar13 = puVar13 + 8;
          iVar16 = iVar16 + 8;
        } while (iVar16 != 0);
      }
      if ((uVar12 & 7) != 0) {
        lVar7 = 0;
        do {
          puVar13[lVar7] = puVar17[lVar7 * 2];
          lVar7 = lVar7 + 1;
        } while (((byte)((char)iVar6 * bVar5) & 7) != (uint)lVar7);
      }
      bVar5 = *(byte *)(param_1 + 0x23a);
      uVar12 = (uint)bVar5 * *(int *)(param_1 + 0x228);
      uVar10 = *(uint *)(param_1 + 0x15c);
    }
    *(undefined1 *)(param_1 + 0x239) = 8;
    *(byte *)(param_1 + 0x23b) = bVar5 << 3;
    *(ulonglong *)(param_1 + 0x230) = (ulonglong)uVar12;
  }
  if ((uVar10 & 0x40) != 0) {
    FUN_1424fe010(param_1 + 0x228,*(longlong *)(param_1 + 0x200) + 1,
                  *(undefined8 *)(param_1 + 0x398),*(undefined8 *)(param_1 + 0x3a0));
    if (*(longlong *)(param_1 + 0x230) == 0) {
      pcVar15 = "png_do_quantize returned rowbytes=0";
LAB_1424fb50b:
      png_error(param_1,pcVar15);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar10 = *(uint *)(param_1 + 0x15c);
  }
  if ((((uVar10 & 0x200) != 0) && (*(char *)(param_1 + 0x239) == '\b')) &&
     (*(char *)(param_1 + 0x238) != '\x03')) {
    lVar7 = *(longlong *)(param_1 + 0x230);
    if (0 < lVar7) {
      puVar13 = (undefined1 *)(*(longlong *)(param_1 + 0x200) + 1 + lVar7 * 2);
      puVar17 = (undefined1 *)(*(longlong *)(param_1 + 0x200) + lVar7);
      do {
        uVar2 = *puVar17;
        puVar13[-1] = uVar2;
        puVar13[-2] = uVar2;
        puVar13 = puVar13 + -2;
        bVar3 = puVar17 < puVar13;
        puVar17 = puVar17 + -1;
      } while (bVar3);
      lVar7 = *(longlong *)(param_1 + 0x230);
      uVar10 = *(uint *)(param_1 + 0x15c);
    }
    *(longlong *)(param_1 + 0x230) = lVar7 * 2;
    *(undefined1 *)(param_1 + 0x239) = 0x10;
    *(char *)(param_1 + 0x23b) = *(char *)(param_1 + 0x23a) << 4;
  }
  if ((uVar10 & 0x20) == 0) {
    if ((uVar10 & 8) != 0) goto LAB_1424fb160;
LAB_1424fb0d5:
    if ((uVar10 & 4) != 0) goto LAB_1424fb18e;
LAB_1424fb0de:
    if ((uVar10 & 1) != 0) goto LAB_1424fb1b5;
LAB_1424fb0e7:
    if ((uVar10 & 0x10000) != 0) goto LAB_1424fb1df;
LAB_1424fb0f3:
    if ((uVar10 & 0x4000) == 0) goto LAB_1424fb209;
LAB_1424fb0ff:
    if ((*(byte *)(param_1 + 0x155) & 8) == 0) goto LAB_1424fb209;
    FUN_1424fc590(param_1 + 0x228,*(longlong *)(param_1 + 0x200) + 1);
    uVar10 = *(uint *)(param_1 + 0x15c);
    sVar9 = (short)uVar10;
  }
  else {
    FUN_1424f8340(param_1 + 0x228,*(longlong *)(param_1 + 0x200) + 1);
    uVar10 = *(uint *)(param_1 + 0x15c);
    if ((uVar10 & 8) == 0) goto LAB_1424fb0d5;
LAB_1424fb160:
    FUN_1424fe1a0(param_1 + 0x228,*(longlong *)(param_1 + 0x200) + 1,param_1 + 0x2dd);
    uVar10 = *(uint *)(param_1 + 0x15c);
    if ((uVar10 & 4) == 0) goto LAB_1424fb0de;
LAB_1424fb18e:
    FUN_1424fe720(param_1 + 0x228,*(longlong *)(param_1 + 0x200) + 1);
    uVar10 = *(uint *)(param_1 + 0x15c);
    if ((uVar10 & 1) == 0) goto LAB_1424fb0e7;
LAB_1424fb1b5:
    FUN_1424f89d0(param_1 + 0x228,*(longlong *)(param_1 + 0x200) + 1);
    uVar10 = *(uint *)(param_1 + 0x15c);
    if ((uVar10 & 0x10000) == 0) goto LAB_1424fb0f3;
LAB_1424fb1df:
    FUN_1424f8570(param_1 + 0x228,*(longlong *)(param_1 + 0x200) + 1);
    uVar10 = *(uint *)(param_1 + 0x15c);
    if ((uVar10 & 0x4000) != 0) goto LAB_1424fb0ff;
LAB_1424fb209:
    sVar9 = (short)uVar10;
  }
  if (sVar9 < 0) {
    FUN_1424fe960(param_1 + 0x228,*(longlong *)(param_1 + 0x200) + 1,
                  *(undefined2 *)(param_1 + 0x266),*(undefined4 *)(param_1 + 0x158));
    uVar10 = *(uint *)(param_1 + 0x15c);
  }
  if ((uVar10 & 0x80000) == 0) goto LAB_1424fb3af;
  lVar7 = *(longlong *)(param_1 + 0x200) + 1;
  uVar10 = *(uint *)(param_1 + 0x228);
  if (*(char *)(param_1 + 0x238) == '\x04') {
    lVar7 = lVar7 + *(longlong *)(param_1 + 0x230);
    if (*(char *)(param_1 + 0x239) == '\b') {
      if (uVar10 != 0) {
        uVar12 = uVar10 & 3;
        if (2 < uVar10 - 1) {
          iVar6 = uVar12 - uVar10;
          do {
            *(byte *)(lVar7 + -1) = ~*(byte *)(lVar7 + -1);
            *(byte *)(lVar7 + -3) = ~*(byte *)(lVar7 + -3);
            *(byte *)(lVar7 + -5) = ~*(byte *)(lVar7 + -5);
            *(byte *)(lVar7 + -7) = ~*(byte *)(lVar7 + -7);
            lVar7 = lVar7 + -8;
            iVar6 = iVar6 + 4;
          } while (iVar6 != 0);
        }
        if (uVar12 != 0) {
          lVar11 = 0;
          do {
            pbVar1 = (byte *)(lVar7 + -1 + lVar11 * 2);
            *pbVar1 = ~*pbVar1;
            lVar11 = lVar11 + -1;
          } while (-uVar12 != (int)lVar11);
        }
      }
      goto LAB_1424fb3af;
    }
    if (uVar10 == 0) goto LAB_1424fb3af;
    if (uVar10 != 1) {
      iVar6 = (uVar10 & 1) - uVar10;
      do {
        *(byte *)(lVar7 + -1) = ~*(byte *)(lVar7 + -1);
        *(byte *)(lVar7 + -2) = ~*(byte *)(lVar7 + -2);
        *(byte *)(lVar7 + -5) = ~*(byte *)(lVar7 + -5);
        *(byte *)(lVar7 + -6) = ~*(byte *)(lVar7 + -6);
        lVar7 = lVar7 + -8;
        iVar6 = iVar6 + 2;
      } while (iVar6 != 0);
    }
  }
  else {
    if (*(char *)(param_1 + 0x238) != '\x06') goto LAB_1424fb3af;
    lVar7 = lVar7 + *(longlong *)(param_1 + 0x230);
    if (*(char *)(param_1 + 0x239) == '\b') {
      if (uVar10 != 0) {
        uVar12 = uVar10 & 3;
        if (2 < uVar10 - 1) {
          iVar6 = uVar12 - uVar10;
          do {
            *(byte *)(lVar7 + -1) = ~*(byte *)(lVar7 + -1);
            *(byte *)(lVar7 + -5) = ~*(byte *)(lVar7 + -5);
            *(byte *)(lVar7 + -9) = ~*(byte *)(lVar7 + -9);
            *(byte *)(lVar7 + -0xd) = ~*(byte *)(lVar7 + -0xd);
            lVar7 = lVar7 + -0x10;
            iVar6 = iVar6 + 4;
          } while (iVar6 != 0);
        }
        if (uVar12 != 0) {
          lVar11 = 0;
          do {
            pbVar1 = (byte *)(lVar7 + -1 + lVar11 * 4);
            *pbVar1 = ~*pbVar1;
            lVar11 = lVar11 + -1;
          } while (-uVar12 != (int)lVar11);
        }
      }
      goto LAB_1424fb3af;
    }
    if (uVar10 == 0) goto LAB_1424fb3af;
    if (uVar10 != 1) {
      iVar6 = (uVar10 & 1) - uVar10;
      do {
        *(byte *)(lVar7 + -1) = ~*(byte *)(lVar7 + -1);
        *(byte *)(lVar7 + -2) = ~*(byte *)(lVar7 + -2);
        *(byte *)(lVar7 + -9) = ~*(byte *)(lVar7 + -9);
        *(byte *)(lVar7 + -10) = ~*(byte *)(lVar7 + -10);
        lVar7 = lVar7 + -0x10;
        iVar6 = iVar6 + 2;
      } while (iVar6 != 0);
    }
  }
  if ((uVar10 & 1) != 0) {
    *(byte *)(lVar7 + -1) = ~*(byte *)(lVar7 + -1);
    *(byte *)(lVar7 + -2) = ~*(byte *)(lVar7 + -2);
  }
LAB_1424fb3af:
  uVar10 = *(uint *)(param_1 + 0x15c);
  if ((uVar10 & 0x20000) != 0) {
    FUN_1424feef0(param_1 + 0x228,*(longlong *)(param_1 + 0x200) + 1);
    uVar10 = *(uint *)(param_1 + 0x15c);
  }
  if ((uVar10 & 0x10) != 0) {
    FUN_1424f84b0(param_1 + 0x228,*(longlong *)(param_1 + 0x200) + 1);
    uVar10 = *(uint *)(param_1 + 0x15c);
  }
  if ((uVar10 & 0x100000) != 0) {
    if (*(code **)(param_1 + 0x138) != (code *)0x0) {
      (**(code **)(param_1 + 0x138))(param_1,param_1 + 0x228,*(longlong *)(param_1 + 0x200) + 1);
    }
    if (*(char *)(param_1 + 0x150) != '\0') {
      *(char *)(param_1 + 0x239) = *(char *)(param_1 + 0x150);
    }
    cVar8 = *(char *)(param_1 + 0x151);
    if (cVar8 == '\0') {
      cVar8 = *(char *)(param_1 + 0x23a);
    }
    else {
      *(char *)(param_1 + 0x23a) = cVar8;
    }
    bVar5 = cVar8 * *(char *)(param_1 + 0x239);
    *(byte *)(param_1 + 0x23b) = bVar5;
    if (bVar5 < 8) {
      uVar14 = (ulonglong)*(uint *)(param_1 + 0x228) * (ulonglong)bVar5 + 7 >> 3;
    }
    else {
      uVar14 = (ulonglong)(bVar5 >> 3) * (ulonglong)*(uint *)(param_1 + 0x228);
    }
    *(ulonglong *)(param_1 + 0x230) = uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_c8);
}



// FUNCTION 1424fb520 FUN_1424fb520 body=963 status=ok
// SIG undefined FUN_1424fb520(void)

/* WARNING: Removing unreachable block (ram,0x0001424fb80a) */

void FUN_1424fb520(uint *param_1,longlong param_2,longlong param_3,longlong param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  ulonglong uVar14;
  
  if ((char)param_1[4] != '\x03') {
    return;
  }
  uVar1 = *param_1;
  uVar14 = (ulonglong)uVar1;
  bVar2 = *(byte *)((longlong)param_1 + 0x11);
  if (bVar2 < 8) {
    uVar4 = uVar14;
    if (bVar2 == 1) {
      if (uVar1 == 0) {
LAB_1424fb73b:
        uVar4 = 0;
      }
      else {
        uVar6 = ~(uVar1 - 1) & 7;
        lVar11 = param_2 + uVar14;
        pbVar8 = (byte *)((ulonglong)(uVar1 - 1 >> 3) + param_2);
        if (uVar1 - 1 != 0) {
          iVar9 = (uVar1 & 1) - uVar1;
          do {
            *(bool *)(lVar11 + -1) = (*pbVar8 >> (uVar6 & 0x1f) & 1) != 0;
            uVar10 = uVar6 + 1;
            if (uVar6 == 7) {
              uVar10 = 0;
              pbVar8 = pbVar8 + -1;
            }
            *(bool *)(lVar11 + -2) = (*pbVar8 >> (uVar10 & 0x1f) & 1) != 0;
            lVar11 = lVar11 + -2;
            uVar6 = uVar10 + 1;
            if (uVar10 == 7) {
              uVar6 = 0;
              pbVar8 = pbVar8 + -1;
            }
            iVar9 = iVar9 + 2;
          } while (iVar9 != 0);
        }
        if ((uVar1 & 1) != 0) {
          *(bool *)(lVar11 + -1) = (*pbVar8 >> (uVar6 & 0x1f) & 1) != 0;
        }
      }
    }
    else if (bVar2 == 2) {
      if (uVar1 == 0) goto LAB_1424fb73b;
      uVar6 = ~(uVar1 * 2 + 6) & 6;
      lVar11 = param_2 + uVar14;
      pbVar8 = (byte *)((ulonglong)(uVar1 - 1 >> 2) + param_2);
      if (uVar1 - 1 != 0) {
        iVar9 = (uVar1 & 1) - uVar1;
        do {
          *(byte *)(lVar11 + -1) = *pbVar8 >> ((byte)uVar6 & 0x1f) & 3;
          pbVar13 = pbVar8 + -1;
          if (uVar6 != 6) {
            pbVar13 = pbVar8;
          }
          iVar3 = uVar6 + 2;
          if (uVar6 == 6) {
            iVar3 = 0;
          }
          *(byte *)(lVar11 + -2) = *pbVar13 >> ((byte)iVar3 & 0x1f) & 3;
          lVar11 = lVar11 + -2;
          uVar6 = iVar3 + 2;
          pbVar8 = pbVar13;
          if (iVar3 == 6) {
            uVar6 = 0;
            pbVar8 = pbVar13 + -1;
          }
          iVar9 = iVar9 + 2;
        } while (iVar9 != 0);
      }
      if ((uVar1 & 1) != 0) {
        bVar2 = *pbVar8 >> ((byte)uVar6 & 0x1f) & 3;
LAB_1424fb733:
        *(byte *)(lVar11 + -1) = bVar2;
      }
    }
    else if (bVar2 == 4) {
      if (uVar1 == 0) goto LAB_1424fb73b;
      uVar6 = uVar1 * 4 & 4;
      lVar11 = param_2 + uVar14;
      pbVar8 = (byte *)((ulonglong)(uVar1 - 1 >> 1) + param_2);
      if (uVar1 - 1 != 0) {
        iVar9 = (uVar1 & 1) - uVar1;
        do {
          *(byte *)(lVar11 + -1) = *pbVar8 >> ((byte)uVar6 & 0x1f) & 0xf;
          pbVar13 = pbVar8 + -1;
          if (uVar6 != 4) {
            pbVar13 = pbVar8;
          }
          iVar3 = uVar6 + 4;
          if (uVar6 == 4) {
            iVar3 = 0;
          }
          *(byte *)(lVar11 + -2) = *pbVar13 >> ((byte)iVar3 & 0x1f) & 0xf;
          lVar11 = lVar11 + -2;
          uVar6 = iVar3 + 4;
          pbVar8 = pbVar13;
          if (iVar3 == 4) {
            uVar6 = 0;
            pbVar8 = pbVar13 + -1;
          }
          iVar9 = iVar9 + 2;
        } while (iVar9 != 0);
      }
      if ((uVar1 & 1) != 0) {
        bVar2 = *pbVar8 >> ((byte)uVar6 & 0x1f) & 0xf;
        goto LAB_1424fb733;
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x11) = 8;
    *(undefined1 *)((longlong)param_1 + 0x13) = 8;
    *(ulonglong *)(param_1 + 2) = uVar4;
  }
  else if (bVar2 != 8) {
    return;
  }
  pbVar8 = (byte *)(param_2 + uVar14 + -1);
  if (param_4 != 0) {
    if (uVar1 != 0) {
      param_2 = param_2 + (ulonglong)(uVar1 * 4);
      lVar11 = 0;
      do {
        uVar7 = 0xff;
        if ((int)(uint)pbVar8[lVar11] < param_5) {
          uVar7 = *(undefined1 *)(param_4 + (ulonglong)pbVar8[lVar11]);
        }
        *(undefined1 *)(param_2 + -1 + lVar11 * 4) = uVar7;
        *(undefined1 *)(param_2 + -2 + lVar11 * 4) =
             *(undefined1 *)(param_3 + 2 + (ulonglong)pbVar8[lVar11] * 3);
        *(undefined1 *)(param_2 + -3 + lVar11 * 4) =
             *(undefined1 *)(param_3 + 1 + (ulonglong)pbVar8[lVar11] * 3);
        *(undefined1 *)(param_2 + -4 + lVar11 * 4) =
             *(undefined1 *)(param_3 + (ulonglong)pbVar8[lVar11] * 3);
        lVar11 = lVar11 + -1;
      } while (-uVar1 != (int)lVar11);
    }
    *(ulonglong *)(param_1 + 2) = (ulonglong)(uVar1 * 4);
    param_1[4] = 0x20040806;
    return;
  }
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      puVar12 = (undefined1 *)(param_2 + 2);
    }
    else {
      lVar11 = (ulonglong)(uVar1 * 3) - 1;
      lVar5 = uVar14 - 1;
      iVar9 = (uVar1 & 1) - uVar1;
      do {
        *(undefined1 *)(param_2 + lVar11) =
             *(undefined1 *)(param_3 + 2 + (ulonglong)*(byte *)(param_2 + lVar5) * 3);
        *(undefined1 *)(param_2 + -1 + lVar11) =
             *(undefined1 *)(param_3 + 1 + (ulonglong)*(byte *)(param_2 + lVar5) * 3);
        *(undefined1 *)(param_2 + -2 + lVar11) =
             *(undefined1 *)(param_3 + (ulonglong)*(byte *)(param_2 + lVar5) * 3);
        *(undefined1 *)(param_2 + -3 + lVar11) =
             *(undefined1 *)(param_3 + 2 + (ulonglong)*(byte *)(param_2 + -1 + lVar5) * 3);
        *(undefined1 *)(param_2 + -4 + lVar11) =
             *(undefined1 *)(param_3 + 1 + (ulonglong)*(byte *)(param_2 + -1 + lVar5) * 3);
        *(undefined1 *)(param_2 + -5 + lVar11) =
             *(undefined1 *)(param_3 + (ulonglong)*(byte *)(param_2 + -1 + lVar5) * 3);
        lVar11 = lVar11 + -6;
        lVar5 = lVar5 + -2;
        iVar9 = iVar9 + 2;
      } while (iVar9 != 0);
      puVar12 = (undefined1 *)(lVar11 + param_2);
      pbVar8 = (byte *)(lVar5 + param_2);
      if ((uVar1 & 1) == 0) goto LAB_1424fb8ce;
    }
    *puVar12 = *(undefined1 *)(param_3 + 2 + (ulonglong)*pbVar8 * 3);
    puVar12[-1] = *(undefined1 *)(param_3 + 1 + (ulonglong)*pbVar8 * 3);
    puVar12[-2] = *(undefined1 *)(param_3 + (ulonglong)*pbVar8 * 3);
  }
LAB_1424fb8ce:
  *(ulonglong *)(param_1 + 2) = (ulonglong)(uVar1 * 3);
  param_1[4] = 0x18030802;
  return;
}



// FUNCTION 1424fb8f0 FUN_1424fb8f0 body=1459 status=ok
// SIG undefined FUN_1424fb8f0(void)

void FUN_1424fb8f0(uint *param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  sbyte sVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  char *pcVar16;
  undefined1 uVar17;
  byte *pbVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  byte *pbVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  int iVar26;
  bool bVar27;
  
  uVar9 = *param_1;
  uVar13 = (ulonglong)uVar9;
  if ((char)param_1[4] != '\0') {
    if (param_3 == 0) {
      return;
    }
    if ((char)param_1[4] != '\x02') {
      return;
    }
    if (*(char *)((longlong)param_1 + 0x11) == '\x10') {
      if (uVar9 != 0) {
        uVar6 = *(ushort *)(param_3 + 2);
        uVar7 = *(ushort *)(param_3 + 4);
        uVar8 = *(ushort *)(param_3 + 6);
        lVar12 = param_2 + (ulonglong)(uVar9 * 8);
        pbVar18 = (byte *)(param_2 + *(longlong *)(param_1 + 2) + -1);
        lVar21 = 0;
        do {
          if (((((ushort)pbVar18[-5] == uVar6 >> 8) && (pbVar18[-4] == (byte)uVar6)) &&
              ((ushort)pbVar18[-3] == uVar7 >> 8)) &&
             ((((ushort)pbVar18[-2] == (uVar7 & 0xff) && ((ushort)pbVar18[-1] == uVar8 >> 8)) &&
              ((ushort)*pbVar18 == (uVar8 & 0xff))))) {
            uVar17 = 0;
          }
          else {
            uVar17 = 0xff;
          }
          *(undefined1 *)(lVar12 + -1 + lVar21 * 8) = uVar17;
          *(undefined1 *)(lVar12 + -2 + lVar21 * 8) = uVar17;
          *(byte *)(lVar12 + -3 + lVar21 * 8) = *pbVar18;
          *(byte *)(lVar12 + -4 + lVar21 * 8) = pbVar18[-1];
          *(byte *)(lVar12 + -5 + lVar21 * 8) = pbVar18[-2];
          *(byte *)(lVar12 + -6 + lVar21 * 8) = pbVar18[-3];
          *(byte *)(lVar12 + -7 + lVar21 * 8) = pbVar18[-4];
          pbVar2 = pbVar18 + -5;
          pbVar18 = pbVar18 + -6;
          *(byte *)(lVar12 + -8 + lVar21 * 8) = *pbVar2;
          lVar21 = lVar21 + -1;
        } while (-uVar9 != (int)lVar21);
      }
    }
    else if ((*(char *)((longlong)param_1 + 0x11) == '\b') && (uVar9 != 0)) {
      lVar12 = (ulonglong)(uVar9 * 4) + param_2;
      pcVar16 = (char *)(param_2 + -1 + *(longlong *)(param_1 + 2));
      cVar3 = *(char *)(param_3 + 6);
      cVar4 = *(char *)(param_3 + 4);
      cVar5 = *(char *)(param_3 + 2);
      lVar21 = 0;
      do {
        if (((pcVar16[-2] == cVar5) && (pcVar16[-1] == cVar4)) && (*pcVar16 == cVar3)) {
          uVar17 = 0;
        }
        else {
          uVar17 = 0xff;
        }
        *(undefined1 *)(lVar12 + -1 + lVar21 * 4) = uVar17;
        *(char *)(lVar12 + -2 + lVar21 * 4) = *pcVar16;
        *(char *)(lVar12 + -3 + lVar21 * 4) = pcVar16[-1];
        pcVar1 = pcVar16 + -2;
        pcVar16 = pcVar16 + -3;
        *(char *)(lVar12 + -4 + lVar21 * 4) = *pcVar1;
        lVar21 = lVar21 + -1;
      } while (-uVar9 != (int)lVar21);
    }
    *(undefined1 *)(param_1 + 4) = 6;
    *(undefined1 *)((longlong)param_1 + 0x12) = 4;
    bVar14 = *(char *)((longlong)param_1 + 0x11) << 2;
    goto LAB_1424fbe86;
  }
  if (param_3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (uint)*(ushort *)(param_3 + 8);
  }
  bVar14 = *(byte *)((longlong)param_1 + 0x11);
  if (bVar14 < 8) {
    uVar25 = uVar13;
    if (bVar14 == 1) {
      uVar11 = (uVar11 & 1) * 0xff;
      if (uVar9 == 0) {
LAB_1424fbcb9:
        uVar25 = 0;
      }
      else {
        uVar15 = ~(uVar9 - 1) & 7;
        lVar12 = param_2 + uVar13;
        pbVar18 = (byte *)((ulonglong)(uVar9 - 1 >> 3) + param_2);
        if (uVar9 - 1 != 0) {
          iVar26 = (uVar9 & 1) - uVar9;
          do {
            *(char *)(lVar12 + -1) = -((*pbVar18 >> (uVar15 & 0x1f) & 1) != 0);
            uVar24 = uVar15 + 1;
            if (uVar15 == 7) {
              uVar24 = 0;
              pbVar18 = pbVar18 + -1;
            }
            *(char *)(lVar12 + -2) = -((*pbVar18 >> (uVar24 & 0x1f) & 1) != 0);
            lVar12 = lVar12 + -2;
            uVar15 = uVar24 + 1;
            if (uVar24 == 7) {
              uVar15 = 0;
              pbVar18 = pbVar18 + -1;
            }
            iVar26 = iVar26 + 2;
          } while (iVar26 != 0);
        }
        if ((uVar9 & 1) != 0) {
          *(char *)(lVar12 + -1) = -((*pbVar18 >> (uVar15 & 0x1f) & 1) != 0);
        }
      }
    }
    else if (bVar14 == 2) {
      uVar11 = (uVar11 & 3) * 0x55;
      uVar25 = 0;
      if (uVar9 != 0) {
        uVar15 = ~(uVar9 * 2 + 6) & 6;
        pbVar18 = (byte *)((ulonglong)(uVar9 - 1 >> 2) + param_2);
        uVar19 = uVar13;
        do {
          uVar24 = *pbVar18 >> ((byte)uVar15 & 0x1f) & 3;
          *(byte *)(param_2 + -1 + uVar19) =
               (byte)(uVar24 << 6) | (byte)(uVar24 << 4) | (char)uVar24 * '\x05';
          bVar27 = uVar15 == 6;
          if (bVar27) {
            pbVar18 = pbVar18 + -1;
          }
          uVar15 = uVar15 + 2;
          if (bVar27) {
            uVar15 = 0;
          }
          uVar19 = uVar19 - 1;
          uVar25 = uVar13;
        } while ((int)uVar19 != 0);
      }
    }
    else if (bVar14 == 4) {
      uVar11 = (uVar11 & 0xf) << 4 | uVar11 & 0xf;
      if (uVar9 == 0) goto LAB_1424fbcb9;
      uVar15 = uVar9 * 4 & 4;
      sVar10 = (sbyte)uVar15;
      lVar12 = param_2 + uVar13;
      pbVar18 = (byte *)((ulonglong)(uVar9 - 1 >> 1) + param_2);
      if (uVar9 - 1 != 0) {
        iVar26 = (uVar9 & 1) - uVar9;
        do {
          pbVar2 = pbVar18 + -1;
          pbVar22 = pbVar18;
          if (uVar15 == 4) {
            pbVar22 = pbVar2;
          }
          bVar14 = *pbVar18;
          bVar27 = uVar15 == 4;
          pbVar18 = pbVar22 + -1;
          if (bVar27) {
            pbVar18 = pbVar2;
          }
          bVar14 = bVar14 >> (sbyte)uVar15;
          *(byte *)(lVar12 + -1) = bVar14 << 4 | bVar14 & 0xf;
          bVar14 = *pbVar22 >> (!bVar27 << 2);
          *(byte *)(lVar12 + -2) = bVar14 << 4 | bVar14 & 0xf;
          lVar12 = lVar12 + -2;
          uVar15 = (uint)bVar27 << 2;
          sVar10 = (sbyte)uVar15;
          iVar26 = iVar26 + 2;
        } while (iVar26 != 0);
      }
      if ((uVar9 & 1) != 0) {
        *(byte *)(lVar12 + -1) = (*pbVar18 >> sVar10) << 4 | *pbVar18 >> sVar10 & 0xf;
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x11) = 8;
    *(undefined1 *)((longlong)param_1 + 0x13) = 8;
    *(ulonglong *)(param_1 + 2) = uVar25;
    bVar14 = 8;
  }
  if (param_3 == 0) {
    return;
  }
  if (bVar14 == 0x10) {
    if (uVar9 != 0) {
      lVar12 = param_2 + *(longlong *)(param_1 + 2) * 2;
      param_2 = param_2 + *(longlong *)(param_1 + 2);
      lVar21 = 0;
      do {
        if (((uint)*(byte *)(param_2 + -2 + lVar21 * 2) == uVar11 >> 8) &&
           ((uint)*(byte *)(param_2 + -1 + lVar21 * 2) == (uVar11 & 0xff))) {
          uVar17 = 0;
        }
        else {
          uVar17 = 0xff;
        }
        *(undefined1 *)(lVar12 + -1 + lVar21 * 4) = uVar17;
        *(undefined1 *)(lVar12 + -2 + lVar21 * 4) = uVar17;
        *(undefined1 *)(lVar12 + -3 + lVar21 * 4) = *(undefined1 *)(param_2 + -1 + lVar21 * 2);
        *(undefined1 *)(lVar12 + -4 + lVar21 * 4) = *(undefined1 *)(param_2 + -2 + lVar21 * 2);
        lVar21 = lVar21 + -1;
      } while (-uVar9 != (int)lVar21);
    }
  }
  else if ((bVar14 == 8) && (uVar9 != 0)) {
    lVar12 = (ulonglong)(uVar9 * 2) + param_2;
    lVar21 = lVar12 + -1;
    param_2 = param_2 + uVar13;
    uVar11 = uVar11 & 0xff;
    uVar15 = uVar9 & 3;
    if (2 < uVar9 - 1) {
      lVar20 = 0;
      lVar23 = 0;
      do {
        *(char *)(lVar21 + lVar23 * 2) = -(*(byte *)(param_2 + -1 + lVar23) != uVar11);
        *(undefined1 *)(lVar12 + -2 + lVar23 * 2) = *(undefined1 *)(param_2 + -1 + lVar23);
        *(char *)(lVar12 + -3 + lVar23 * 2) = -(*(byte *)(param_2 + -2 + lVar23) != uVar11);
        *(undefined1 *)(lVar12 + -4 + lVar23 * 2) = *(undefined1 *)(param_2 + -2 + lVar23);
        *(char *)(lVar12 + -5 + lVar23 * 2) = -(*(byte *)(param_2 + -3 + lVar23) != uVar11);
        *(undefined1 *)(lVar12 + -6 + lVar23 * 2) = *(undefined1 *)(param_2 + -3 + lVar23);
        *(char *)(lVar12 + -7 + lVar23 * 2) = -(*(byte *)(param_2 + -4 + lVar23) != uVar11);
        *(undefined1 *)(lVar12 + -8 + lVar23 * 2) = *(undefined1 *)(param_2 + -4 + lVar23);
        lVar23 = lVar23 + -4;
        lVar20 = lVar20 + 8;
      } while (uVar15 - uVar9 != (int)lVar23);
      param_2 = param_2 + lVar23;
      lVar21 = lVar21 - lVar20;
    }
    if (uVar15 != 0) {
      lVar12 = 0;
      do {
        *(char *)(lVar21 + lVar12 * 2) = -(*(byte *)(param_2 + -1 + lVar12) != uVar11);
        *(undefined1 *)(lVar21 + -1 + lVar12 * 2) = *(undefined1 *)(param_2 + -1 + lVar12);
        lVar12 = lVar12 + -1;
      } while (-uVar15 != (int)lVar12);
    }
  }
  *(undefined1 *)(param_1 + 4) = 4;
  *(undefined1 *)((longlong)param_1 + 0x12) = 2;
  bVar14 = *(char *)((longlong)param_1 + 0x11) * '\x02';
LAB_1424fbe86:
  *(byte *)((longlong)param_1 + 0x13) = bVar14;
  if (bVar14 < 8) {
    uVar13 = bVar14 * uVar13 + 7 >> 3;
  }
  else {
    uVar13 = (bVar14 >> 3) * uVar13;
  }
  *(ulonglong *)(param_1 + 2) = uVar13;
  return;
}



// FUNCTION 1424fbec0 FUN_1424fbec0 body=1706 status=ok
// SIG undefined FUN_1424fbec0(void)

byte FUN_1424fbec0(longlong param_1,uint *param_2,byte *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  byte bVar6;
  short sVar7;
  longlong lVar8;
  byte bVar9;
  char cVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  byte *pbVar14;
  byte bVar15;
  longlong lVar16;
  uint uVar17;
  uint local_60;
  
  bVar15 = 0;
  if (((byte)param_2[4] & 3) == 2) {
    uVar4 = *param_2;
    uVar1 = *(ushort *)(param_1 + 0x412);
    uVar2 = *(ushort *)(param_1 + 0x414);
    uVar3 = *(ushort *)(param_1 + 0x416);
    bVar15 = 0;
    uVar17 = (uint)uVar1;
    if ((byte)param_2[4] == 2) {
      if (*(char *)((longlong)param_2 + 0x11) == '\b') {
        if ((*(longlong *)(param_1 + 0x2b0) == 0) ||
           (lVar8 = *(longlong *)(param_1 + 0x2b8), lVar8 == 0)) {
          if (uVar4 != 0) {
            lVar8 = 0;
            bVar15 = 0;
            pbVar14 = param_3;
            do {
              bVar6 = *pbVar14;
              if ((bVar6 != pbVar14[1]) || (bVar6 != pbVar14[2])) {
                bVar15 = 1;
                bVar6 = (byte)((uint)pbVar14[2] * (uint)uVar3 +
                               (uint)pbVar14[1] * (uint)uVar2 + bVar6 * uVar17 >> 0xf);
              }
              param_3[lVar8] = bVar6;
              lVar8 = lVar8 + 1;
              pbVar14 = pbVar14 + 3;
            } while (uVar4 != (uint)lVar8);
          }
        }
        else {
          bVar15 = 0;
          if (uVar4 != 0) {
            lVar16 = 0;
            bVar15 = 0;
            pbVar14 = param_3;
            while( true ) {
              bVar6 = *(byte *)(lVar8 + (ulonglong)*pbVar14);
              bVar9 = pbVar14[2];
              if ((bVar6 != *(byte *)(lVar8 + (ulonglong)pbVar14[1])) ||
                 (bVar6 != *(byte *)(lVar8 + (ulonglong)bVar9))) {
                bVar15 = 1;
                bVar9 = *(byte *)(*(longlong *)(param_1 + 0x2b0) +
                                 ((ulonglong)*(byte *)(lVar8 + (ulonglong)pbVar14[1]) *
                                  (ulonglong)uVar2 + (ulonglong)bVar6 * (ulonglong)uVar1 +
                                  (ulonglong)*(byte *)(lVar8 + (ulonglong)bVar9) * (ulonglong)uVar3
                                 >> 0xf));
              }
              param_3[lVar16] = bVar9;
              if (uVar4 - 1 == (int)lVar16) break;
              lVar8 = *(longlong *)(param_1 + 0x2b8);
              lVar16 = lVar16 + 1;
              pbVar14 = pbVar14 + 3;
            }
          }
        }
      }
      else if ((*(longlong *)(param_1 + 0x2d0) == 0) || (*(longlong *)(param_1 + 0x2c8) == 0)) {
        if (uVar4 != 0) {
          lVar8 = 0;
          bVar15 = 0;
          pbVar14 = param_3;
          do {
            uVar5 = CONCAT11(*pbVar14,pbVar14[1]);
            bVar15 = bVar15 | (uVar5 != CONCAT11(pbVar14[4],pbVar14[5]) ||
                              uVar5 != CONCAT11(pbVar14[2],pbVar14[3]));
            uVar13 = (uint)CONCAT11(pbVar14[4],pbVar14[5]) * (uint)uVar3 +
                     (uint)CONCAT11(pbVar14[2],pbVar14[3]) * (uint)uVar2 + uVar5 * uVar17;
            param_3[lVar8 * 2] = (byte)(uVar13 >> 0x17);
            param_3[lVar8 * 2 + 1] = (byte)(uVar13 >> 0xf);
            lVar8 = lVar8 + 1;
            pbVar14 = pbVar14 + 6;
          } while (uVar4 != (uint)lVar8);
        }
      }
      else if (uVar4 != 0) {
        lVar8 = 0;
        bVar15 = 0;
        pbVar14 = param_3;
        do {
          sVar7 = CONCAT11(*pbVar14,pbVar14[1]);
          if ((CONCAT11(pbVar14[2],pbVar14[3]) != sVar7) ||
             (sVar7 != CONCAT11(pbVar14[4],pbVar14[5]))) {
            bVar15 = *(byte *)(param_1 + 0x298);
            lVar16 = *(longlong *)(param_1 + 0x2d0);
            uVar13 = (uint)*(ushort *)
                            (*(longlong *)
                              (lVar16 + (longlong)(int)(uint)(pbVar14[5] >> (bVar15 & 0x1f)) * 8) +
                            (ulonglong)pbVar14[4] * 2) * (uint)uVar3 +
                     (uint)*(ushort *)
                            (*(longlong *)
                              (lVar16 + (longlong)(int)(uint)(pbVar14[3] >> (bVar15 & 0x1f)) * 8) +
                            (ulonglong)pbVar14[2] * 2) * (uint)uVar2 +
                     *(ushort *)
                      (*(longlong *)
                        (lVar16 + (longlong)(int)(uint)(pbVar14[1] >> (bVar15 & 0x1f)) * 8) +
                      (ulonglong)*pbVar14 * 2) * uVar17;
            sVar7 = *(short *)(*(longlong *)
                                (*(longlong *)(param_1 + 0x2c8) +
                                (longlong)(int)((uVar13 >> 0xf & 0xff) >> (bVar15 & 0x1f)) * 8) +
                              (ulonglong)(uVar13 >> 0x17 & 0xff) * 2);
            bVar15 = 1;
          }
          param_3[lVar8 * 2] = (byte)((ushort)sVar7 >> 8);
          param_3[lVar8 * 2 + 1] = (byte)sVar7;
          lVar8 = lVar8 + 1;
          pbVar14 = pbVar14 + 6;
        } while (uVar4 != (uint)lVar8);
      }
    }
    if ((char)param_2[4] == '\x06') {
      if (*(char *)((longlong)param_2 + 0x11) == '\b') {
        lVar8 = *(longlong *)(param_1 + 0x2b0);
        if ((lVar8 == 0) || (lVar16 = *(longlong *)(param_1 + 0x2b8), lVar16 == 0)) {
          if (uVar4 != 0) {
            lVar8 = 0;
            do {
              bVar6 = param_3[lVar8 * 4];
              bVar15 = bVar15 | (bVar6 != param_3[lVar8 * 4 + 1] || bVar6 != param_3[lVar8 * 4 + 2])
              ;
              param_3[lVar8 * 2] =
                   (byte)((uint)param_3[lVar8 * 4 + 2] * (uint)uVar3 +
                          (uint)param_3[lVar8 * 4 + 1] * (uint)uVar2 + bVar6 * uVar17 >> 0xf);
              param_3[lVar8 * 2 + 1] = param_3[lVar8 * 4 + 3];
              lVar8 = lVar8 + 1;
            } while (uVar4 != (uint)lVar8);
          }
        }
        else if (uVar4 != 0) {
          lVar12 = 0;
          while( true ) {
            bVar6 = *(byte *)(lVar16 + (ulonglong)param_3[lVar12 * 4]);
            bVar15 = (bVar6 != *(byte *)(lVar16 + (ulonglong)param_3[lVar12 * 4 + 1]) ||
                     *(byte *)(lVar16 + (ulonglong)param_3[lVar12 * 4 + 2]) != bVar6) | bVar15;
            param_3[lVar12 * 2] =
                 *(byte *)(lVar8 + ((ulonglong)
                                    *(byte *)(lVar16 + (ulonglong)param_3[lVar12 * 4 + 2]) *
                                    (ulonglong)uVar3 +
                                    (ulonglong)
                                    *(byte *)(lVar16 + (ulonglong)param_3[lVar12 * 4 + 1]) *
                                    (ulonglong)uVar2 + (ulonglong)bVar6 * (ulonglong)uVar1 >> 0xf));
            param_3[lVar12 * 2 + 1] = param_3[lVar12 * 4 + 3];
            if (uVar4 - 1 == (int)lVar12) break;
            lVar8 = *(longlong *)(param_1 + 0x2b0);
            lVar16 = *(longlong *)(param_1 + 0x2b8);
            lVar12 = lVar12 + 1;
          }
        }
      }
      else if ((*(longlong *)(param_1 + 0x2d0) == 0) || (*(longlong *)(param_1 + 0x2c8) == 0)) {
        if (uVar4 != 0) {
          lVar8 = 0;
          do {
            uVar1 = CONCAT11(param_3[lVar8 * 8],param_3[lVar8 * 8 + 1]);
            bVar15 = bVar15 | (uVar1 != CONCAT11(param_3[lVar8 * 8 + 4],param_3[lVar8 * 8 + 5]) ||
                              uVar1 != CONCAT11(param_3[lVar8 * 8 + 2],param_3[lVar8 * 8 + 3]));
            uVar13 = (uint)CONCAT11(param_3[lVar8 * 8 + 4],param_3[lVar8 * 8 + 5]) * (uint)uVar3 +
                     (uint)CONCAT11(param_3[lVar8 * 8 + 2],param_3[lVar8 * 8 + 3]) * (uint)uVar2 +
                     uVar1 * uVar17;
            param_3[lVar8 * 4] = (byte)(uVar13 >> 0x17);
            param_3[lVar8 * 4 + 1] = (byte)(uVar13 >> 0xf);
            param_3[lVar8 * 4 + 2] = param_3[lVar8 * 8 + 6];
            param_3[lVar8 * 4 + 3] = param_3[lVar8 * 8 + 7];
            lVar8 = lVar8 + 1;
          } while (uVar4 != (uint)lVar8);
        }
      }
      else if (uVar4 != 0) {
        lVar8 = 0;
        do {
          sVar7 = CONCAT11(param_3[lVar8 * 8],param_3[lVar8 * 8 + 1]);
          if ((CONCAT11(param_3[lVar8 * 8 + 2],param_3[lVar8 * 8 + 3]) != sVar7) ||
             (sVar7 != CONCAT11(param_3[lVar8 * 8 + 4],param_3[lVar8 * 8 + 5]))) {
            bVar15 = *(byte *)(param_1 + 0x298);
            lVar16 = *(longlong *)(param_1 + 0x2d0);
            local_60 = (uint)uVar2;
            uVar13 = (uint)*(ushort *)
                            (*(longlong *)
                              (lVar16 + (longlong)
                                        (int)(uint)(param_3[lVar8 * 8 + 5] >> (bVar15 & 0x1f)) * 8)
                            + (ulonglong)param_3[lVar8 * 8 + 4] * 2) * (uint)uVar3 +
                     *(ushort *)
                      (*(longlong *)
                        (lVar16 + (longlong)(int)(uint)(param_3[lVar8 * 8 + 3] >> (bVar15 & 0x1f)) *
                                  8) + (ulonglong)param_3[lVar8 * 8 + 2] * 2) * local_60 +
                     *(ushort *)
                      (*(longlong *)
                        (lVar16 + (longlong)(int)(uint)(param_3[lVar8 * 8 + 1] >> (bVar15 & 0x1f)) *
                                  8) + (ulonglong)param_3[lVar8 * 8] * 2) * uVar17;
            sVar7 = *(short *)(*(longlong *)
                                (*(longlong *)(param_1 + 0x2c8) +
                                (longlong)(int)((uVar13 >> 0xf & 0xff) >> (bVar15 & 0x1f)) * 8) +
                              (ulonglong)(uVar13 >> 0x17 & 0xff) * 2);
            bVar15 = 1;
          }
          param_3[lVar8 * 4] = (byte)((ushort)sVar7 >> 8);
          param_3[lVar8 * 4 + 1] = (byte)sVar7;
          param_3[lVar8 * 4 + 2] = param_3[lVar8 * 8 + 6];
          param_3[lVar8 * 4 + 3] = param_3[lVar8 * 8 + 7];
          lVar8 = lVar8 + 1;
        } while (uVar4 != (uint)lVar8);
      }
    }
    cVar10 = *(char *)((longlong)param_2 + 0x12) + -2;
    *(char *)((longlong)param_2 + 0x12) = cVar10;
    *(byte *)(param_2 + 4) = (byte)param_2[4] & 0xfd;
    bVar6 = *(char *)((longlong)param_2 + 0x11) * cVar10;
    *(byte *)((longlong)param_2 + 0x13) = bVar6;
    if (bVar6 < 8) {
      uVar11 = (ulonglong)bVar6 * (ulonglong)uVar4 + 7 >> 3;
    }
    else {
      uVar11 = (ulonglong)(bVar6 >> 3) * (ulonglong)uVar4;
    }
    *(ulonglong *)(param_2 + 2) = uVar11;
  }
  return bVar15;
}



// FUNCTION 1424fc590 FUN_1424fc590 body=896 status=ok
// SIG undefined FUN_1424fc590(void)

/* WARNING: Removing unreachable block (ram,0x0001424fc62e) */
/* WARNING: Removing unreachable block (ram,0x0001424fc5f2) */
/* WARNING: Removing unreachable block (ram,0x0001424fc6bd) */

void FUN_1424fc590(uint *param_1,undefined1 *param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  char cVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined1 *puVar11;
  
  bVar3 = *(byte *)((longlong)param_1 + 0x11);
  if (bVar3 < 8) {
    return;
  }
  bVar1 = (byte)param_1[4];
  if ((bVar1 & 2) != 0) {
    return;
  }
  uVar2 = *param_1;
  uVar7 = (ulonglong)uVar2;
  if (bVar1 == 0) {
    if (bVar3 == 8) {
      if (uVar2 != 0) {
        if (uVar2 == 1) {
          lVar5 = 2;
          puVar8 = param_2;
        }
        else {
          lVar5 = uVar7 * 3 + -1;
          lVar9 = uVar7 - 1;
          iVar10 = (uVar2 & 1) - uVar2;
          do {
            param_2[lVar5] = param_2[lVar9];
            param_2[lVar5 + -1] = param_2[lVar9];
            param_2[lVar5 + -2] = param_2[lVar9];
            param_2[lVar5 + -3] = param_2[lVar9 + -1];
            param_2[lVar5 + -4] = param_2[lVar9 + -1];
            param_2[lVar5 + -5] = param_2[lVar9 + -1];
            lVar5 = lVar5 + -6;
            lVar9 = lVar9 + -2;
            iVar10 = iVar10 + 2;
          } while (iVar10 != 0);
          puVar8 = param_2 + lVar9;
          if ((uVar2 & 1) == 0) goto LAB_1424fc6c2;
        }
        param_2 = param_2 + lVar5;
        *param_2 = *puVar8;
        param_2[-1] = *puVar8;
        param_2[-2] = *puVar8;
        goto LAB_1424fc6c2;
      }
    }
    else if (uVar2 != 0) {
      if (uVar2 == 1) {
        puVar11 = param_2 + 1;
        puVar8 = param_2 + 5;
      }
      else {
        lVar5 = uVar7 * 6 + -1;
        lVar9 = uVar7 * 2 + -1;
        iVar10 = (uVar2 & 1) - uVar2;
        do {
          param_2[lVar5] = param_2[lVar9];
          param_2[lVar5 + -1] = param_2[lVar9 + -1];
          param_2[lVar5 + -2] = param_2[lVar9];
          param_2[lVar5 + -3] = param_2[lVar9 + -1];
          param_2[lVar5 + -4] = param_2[lVar9];
          param_2[lVar5 + -5] = param_2[lVar9 + -1];
          param_2[lVar5 + -6] = param_2[lVar9 + -2];
          param_2[lVar5 + -7] = param_2[lVar9 + -3];
          param_2[lVar5 + -8] = param_2[lVar9 + -2];
          param_2[lVar5 + -9] = param_2[lVar9 + -3];
          param_2[lVar5 + -10] = param_2[lVar9 + -2];
          param_2[lVar5 + -0xb] = param_2[lVar9 + -3];
          lVar5 = lVar5 + -0xc;
          lVar9 = lVar9 + -4;
          iVar10 = iVar10 + 2;
        } while (iVar10 != 0);
        puVar8 = param_2 + lVar5;
        puVar11 = param_2 + lVar9;
        if ((uVar2 & 1) == 0) goto LAB_1424fc6c2;
      }
      *puVar8 = *puVar11;
      puVar8[-1] = puVar11[-1];
      puVar8[-2] = *puVar11;
      puVar8[-3] = puVar11[-1];
      puVar8[-4] = *puVar11;
      puVar8[-5] = puVar11[-1];
      goto LAB_1424fc6c2;
    }
  }
  else {
    if (bVar1 != 4) goto LAB_1424fc6c2;
    if (bVar3 == 8) {
      if (uVar2 != 0) {
        if (uVar2 == 1) {
          puVar11 = param_2 + 1;
          puVar8 = param_2 + 3;
        }
        else {
          lVar5 = uVar7 * 4 + -1;
          lVar9 = uVar7 * 2 + -1;
          iVar10 = (uVar2 & 1) - uVar2;
          do {
            param_2[lVar5] = param_2[lVar9];
            param_2[lVar5 + -1] = param_2[lVar9 + -1];
            param_2[lVar5 + -2] = param_2[lVar9 + -1];
            param_2[lVar5 + -3] = param_2[lVar9 + -1];
            param_2[lVar5 + -4] = param_2[lVar9 + -2];
            param_2[lVar5 + -5] = param_2[lVar9 + -3];
            param_2[lVar5 + -6] = param_2[lVar9 + -3];
            param_2[lVar5 + -7] = param_2[lVar9 + -3];
            lVar5 = lVar5 + -8;
            lVar9 = lVar9 + -4;
            iVar10 = iVar10 + 2;
          } while (iVar10 != 0);
          puVar8 = param_2 + lVar5;
          puVar11 = param_2 + lVar9;
          if ((uVar2 & 1) == 0) goto LAB_1424fc6c2;
        }
        *puVar8 = *puVar11;
        puVar8[-1] = puVar11[-1];
        puVar8[-2] = puVar11[-1];
        puVar8[-3] = puVar11[-1];
        goto LAB_1424fc6c2;
      }
    }
    else {
      uVar4 = uVar7;
      if (uVar2 != 0) {
        do {
          param_2[uVar4 * 8 + -1] = param_2[uVar4 * 4 + -1];
          param_2[uVar4 * 8 + -2] = param_2[uVar4 * 4 + -2];
          param_2[uVar4 * 8 + -3] = param_2[uVar4 * 4 + -3];
          param_2[uVar4 * 8 + -4] = param_2[uVar4 * 4 + -4];
          param_2[uVar4 * 8 + -5] = param_2[uVar4 * 4 + -3];
          param_2[uVar4 * 8 + -6] = param_2[uVar4 * 4 + -4];
          param_2[uVar4 * 8 + -7] = param_2[uVar4 * 4 + -3];
          param_2[uVar4 * 8 + -8] = param_2[uVar4 * 4 + -4];
          uVar4 = uVar4 - 1;
        } while ((int)uVar4 != 0);
        goto LAB_1424fc6c2;
      }
    }
  }
  uVar7 = 0;
LAB_1424fc6c2:
  cVar6 = *(char *)((longlong)param_1 + 0x12) + '\x02';
  *(char *)((longlong)param_1 + 0x12) = cVar6;
  *(byte *)(param_1 + 4) = (byte)param_1[4] | 2;
  bVar3 = *(char *)((longlong)param_1 + 0x11) * cVar6;
  *(byte *)((longlong)param_1 + 0x13) = bVar3;
  if (bVar3 < 8) {
    uVar7 = uVar7 * bVar3 + 7 >> 3;
  }
  else {
    uVar7 = (bVar3 >> 3) * uVar7;
  }
  *(ulonglong *)(param_1 + 2) = uVar7;
  return;
}



// FUNCTION 1424fc910 FUN_1424fc910 body=4275 status=ok
// SIG undefined FUN_1424fc910(void)

void FUN_1424fc910(uint *param_1,byte *param_2,longlong param_3,longlong param_4,longlong param_5,
                  longlong param_6,longlong param_7,longlong param_8,longlong param_9,
                  longlong param_10,longlong param_11,byte param_12)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined2 uVar11;
  uint uVar12;
  byte bVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  bool bVar19;
  ulonglong uVar6;
  
  if (param_4 == 0) {
    return;
  }
  uVar4 = *param_1;
  uVar10 = (ulonglong)uVar4;
  bVar3 = (byte)param_1[4];
  if ((bVar3 & 4) != 0) {
    if (param_3 == 0) {
      return;
    }
    if (bVar3 == 3) {
      return;
    }
  }
  switch(bVar3) {
  case 0:
    switch(*(undefined1 *)((longlong)param_1 + 0x11)) {
    case 1:
      if (uVar4 != 0) {
        iVar5 = 7;
        uVar6 = uVar10;
        do {
          bVar3 = (byte)iVar5;
          if ((*param_2 >> (bVar3 & 0x1f) & 1) == *(ushort *)(param_3 + 8)) {
            bVar13 = (byte)(0x7f7f >> (7 - bVar3 & 0x1f)) & *param_2;
            *param_2 = bVar13;
            *param_2 = (char)*(undefined2 *)(param_4 + 8) << (bVar3 & 0x1f) | bVar13;
          }
          bVar19 = iVar5 == 0;
          iVar5 = iVar5 + -1;
          if (bVar19) {
            iVar5 = 7;
            param_2 = param_2 + 1;
          }
          uVar4 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar4;
        } while (uVar4 != 0);
      }
      break;
    case 2:
      if (param_6 == 0) {
        if (uVar4 != 0) {
          iVar5 = 6;
          uVar6 = uVar10;
          do {
            bVar3 = (byte)iVar5;
            if ((*param_2 >> (bVar3 & 0x1f) & 3) == *(ushort *)(param_3 + 8)) {
              bVar13 = (byte)(0x3f3f >> (6 - bVar3 & 0x1f)) & *param_2;
              *param_2 = bVar13;
              *param_2 = (char)*(undefined2 *)(param_4 + 8) << (bVar3 & 0x1f) | bVar13;
            }
            bVar19 = iVar5 == 0;
            iVar5 = iVar5 + -2;
            if (bVar19) {
              iVar5 = 6;
              param_2 = param_2 + 1;
            }
            uVar4 = (int)uVar6 - 1;
            uVar6 = (ulonglong)uVar4;
          } while (uVar4 != 0);
        }
      }
      else if (uVar4 != 0) {
        iVar5 = 6;
        uVar6 = uVar10;
        do {
          bVar3 = *param_2;
          bVar13 = (byte)iVar5;
          uVar4 = bVar3 >> (bVar13 & 0x3f) & 3;
          if (uVar4 == *(ushort *)(param_3 + 8)) {
            bVar3 = (byte)(0x3f3f >> (6 - bVar13 & 0x1f)) & bVar3;
            *param_2 = bVar3;
            uVar4 = (uint)*(ushort *)(param_4 + 8);
          }
          else {
            uVar9 = (ulonglong)uVar4;
            uVar4 = (uint)(*(byte *)(param_6 +
                                    (uVar9 << 6 | uVar9 << 4 | uVar9 + (ulonglong)uVar4 * 4)) >> 6);
            bVar3 = (byte)(0x3f3f >> (6 - bVar13 & 0x1f)) & bVar3;
          }
          *param_2 = (byte)(uVar4 << (bVar13 & 0x1f)) | bVar3;
          bVar19 = iVar5 == 0;
          iVar5 = iVar5 + -2;
          if (bVar19) {
            iVar5 = 6;
            param_2 = param_2 + 1;
          }
          uVar4 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar4;
        } while (uVar4 != 0);
      }
      break;
    case 4:
      if (param_6 == 0) {
        if (uVar4 != 0) {
          iVar5 = 4;
          uVar6 = uVar10;
          do {
            bVar3 = (byte)iVar5;
            if ((*param_2 >> (bVar3 & 0x1f) & 0xf) == *(ushort *)(param_3 + 8)) {
              bVar13 = (byte)(0xf0f >> (4 - bVar3 & 0x1f)) & *param_2;
              *param_2 = bVar13;
              *param_2 = (char)*(undefined2 *)(param_4 + 8) << (bVar3 & 0x1f) | bVar13;
            }
            bVar19 = iVar5 == 0;
            iVar5 = iVar5 + -4;
            if (bVar19) {
              iVar5 = 4;
              param_2 = param_2 + 1;
            }
            uVar4 = (int)uVar6 - 1;
            uVar6 = (ulonglong)uVar4;
          } while (uVar4 != 0);
        }
      }
      else if (uVar4 != 0) {
        iVar5 = 4;
        uVar6 = uVar10;
        do {
          bVar3 = *param_2;
          bVar13 = (byte)iVar5;
          uVar4 = bVar3 >> (bVar13 & 0x3f) & 0xf;
          if (uVar4 == *(ushort *)(param_3 + 8)) {
            bVar3 = (byte)(0xf0f >> (4 - bVar13 & 0x1f)) & bVar3;
            *param_2 = bVar3;
            uVar4 = (uint)*(ushort *)(param_4 + 8);
          }
          else {
            uVar4 = (uint)(*(byte *)(param_6 + ((ulonglong)uVar4 | (ulonglong)uVar4 << 4)) >> 4);
            bVar3 = (byte)(0xf0f >> (4 - bVar13 & 0x1f)) & bVar3;
          }
          *param_2 = (byte)(uVar4 << (bVar13 & 0x1f)) | bVar3;
          bVar19 = iVar5 == 0;
          iVar5 = iVar5 + -4;
          if (bVar19) {
            iVar5 = 4;
            param_2 = param_2 + 1;
          }
          uVar4 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar4;
        } while (uVar4 != 0);
      }
      break;
    case 8:
      if (param_6 == 0) {
        if (uVar4 == 0) break;
        if (uVar4 != 1) {
          iVar5 = (uVar4 & 1) - uVar4;
          do {
            if ((ushort)*param_2 == *(ushort *)(param_3 + 8)) {
              *param_2 = *(byte *)(param_4 + 8);
            }
            if ((ushort)param_2[1] == *(ushort *)(param_3 + 8)) {
              param_2[1] = *(byte *)(param_4 + 8);
            }
            param_2 = param_2 + 2;
            iVar5 = iVar5 + 2;
          } while (iVar5 != 0);
        }
        if (((uVar4 & 1) == 0) || ((ushort)*param_2 != *(ushort *)(param_3 + 8))) break;
LAB_1424fd93e:
        bVar3 = *(byte *)(param_4 + 8);
      }
      else {
        if (uVar4 == 0) break;
        if (uVar4 != 1) {
          iVar5 = (uVar4 & 1) - uVar4;
          do {
            if ((ushort)*param_2 == *(ushort *)(param_3 + 8)) {
              bVar3 = *(byte *)(param_4 + 8);
            }
            else {
              bVar3 = *(byte *)(param_6 + (ulonglong)*param_2);
            }
            *param_2 = bVar3;
            if ((ushort)param_2[1] == *(ushort *)(param_3 + 8)) {
              bVar3 = *(byte *)(param_4 + 8);
            }
            else {
              bVar3 = *(byte *)(param_6 + (ulonglong)param_2[1]);
            }
            param_2[1] = bVar3;
            param_2 = param_2 + 2;
            iVar5 = iVar5 + 2;
          } while (iVar5 != 0);
        }
        if ((uVar4 & 1) == 0) break;
        if ((ushort)*param_2 == *(ushort *)(param_3 + 8)) goto LAB_1424fd93e;
        bVar3 = *(byte *)(param_6 + (ulonglong)*param_2);
      }
      *param_2 = bVar3;
      break;
    case 0x10:
      if (param_9 == 0) {
        if (uVar4 != 0) {
          lVar8 = 0;
          do {
            if (CONCAT11(param_2[lVar8 * 2],param_2[lVar8 * 2 + 1]) == *(short *)(param_3 + 8)) {
              param_2[lVar8 * 2] = *(byte *)(param_4 + 9);
              param_2[lVar8 * 2 + 1] = *(byte *)(param_4 + 8);
            }
            lVar8 = lVar8 + 1;
          } while (uVar4 != (uint)lVar8);
        }
      }
      else if (uVar4 != 0) {
        lVar8 = 0;
        do {
          if (CONCAT11(param_2[lVar8 * 2],param_2[lVar8 * 2 + 1]) == *(short *)(param_3 + 8)) {
            param_2[lVar8 * 2] = *(byte *)(param_4 + 9);
            uVar11 = *(undefined2 *)(param_4 + 8);
          }
          else {
            uVar11 = *(undefined2 *)
                      (*(longlong *)
                        (param_9 +
                        (longlong)(int)(uint)(param_2[lVar8 * 2 + 1] >> (param_12 & 0x1f)) * 8) +
                      (ulonglong)param_2[lVar8 * 2] * 2);
            param_2[lVar8 * 2] = (byte)((ushort)uVar11 >> 8);
          }
          param_2[lVar8 * 2 + 1] = (byte)uVar11;
          lVar8 = lVar8 + 1;
        } while (uVar4 != (uint)lVar8);
      }
    }
    break;
  case 2:
    if (*(char *)((longlong)param_1 + 0x11) == '\b') {
      if (param_6 == 0) {
        if (uVar4 != 0) {
          param_2 = param_2 + 2;
          uVar6 = uVar10;
          do {
            if ((((ushort)param_2[-2] == *(ushort *)(param_3 + 2)) &&
                ((ushort)param_2[-1] == *(ushort *)(param_3 + 4))) &&
               ((ushort)*param_2 == *(ushort *)(param_3 + 6))) {
              param_2[-2] = *(byte *)(param_4 + 2);
              param_2[-1] = *(byte *)(param_4 + 4);
              *param_2 = *(byte *)(param_4 + 6);
            }
            param_2 = param_2 + 3;
            uVar4 = (int)uVar6 - 1;
            uVar6 = (ulonglong)uVar4;
          } while (uVar4 != 0);
        }
      }
      else if (uVar4 != 0) {
        param_2 = param_2 + 2;
        uVar6 = uVar10;
        do {
          if ((((ushort)param_2[-2] == *(ushort *)(param_3 + 2)) &&
              ((ushort)param_2[-1] == *(ushort *)(param_3 + 4))) &&
             ((ushort)*param_2 == *(ushort *)(param_3 + 6))) {
            param_2[-2] = *(byte *)(param_4 + 2);
            param_2[-1] = *(byte *)(param_4 + 4);
            bVar3 = *(byte *)(param_4 + 6);
          }
          else {
            param_2[-2] = *(byte *)(param_6 + (ulonglong)param_2[-2]);
            param_2[-1] = *(byte *)(param_6 + (ulonglong)param_2[-1]);
            bVar3 = *(byte *)(param_6 + (ulonglong)*param_2);
          }
          *param_2 = bVar3;
          param_2 = param_2 + 3;
          uVar4 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar4;
        } while (uVar4 != 0);
      }
    }
    else if (param_9 == 0) {
      if (uVar4 != 0) {
        param_2 = param_2 + 5;
        uVar6 = uVar10;
        do {
          if (((CONCAT11(param_2[-5],param_2[-4]) == *(short *)(param_3 + 2)) &&
              (CONCAT11(param_2[-3],param_2[-2]) == *(short *)(param_3 + 4))) &&
             (CONCAT11(param_2[-1],*param_2) == *(short *)(param_3 + 6))) {
            param_2[-5] = *(byte *)(param_4 + 3);
            param_2[-4] = *(byte *)(param_4 + 2);
            param_2[-3] = *(byte *)(param_4 + 5);
            param_2[-2] = *(byte *)(param_4 + 4);
            param_2[-1] = *(byte *)(param_4 + 7);
            *param_2 = *(byte *)(param_4 + 6);
          }
          param_2 = param_2 + 6;
          uVar4 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar4;
        } while (uVar4 != 0);
      }
    }
    else if (uVar4 != 0) {
      param_2 = param_2 + 5;
      uVar6 = uVar10;
      do {
        if (CONCAT11(param_2[-5],param_2[-4]) == *(short *)(param_3 + 2)) {
          uVar12 = (uint)param_2[-3];
          bVar3 = param_2[-2];
          uVar4 = (uint)bVar3;
          if ((CONCAT11(param_2[-3],bVar3) != *(short *)(param_3 + 4)) ||
             (uVar4 = (uint)bVar3, CONCAT11(param_2[-1],*param_2) != *(short *)(param_3 + 6)))
          goto LAB_1424fcd69;
          param_2[-5] = *(byte *)(param_4 + 3);
          param_2[-4] = *(byte *)(param_4 + 2);
          param_2[-3] = *(byte *)(param_4 + 5);
          param_2[-2] = *(byte *)(param_4 + 4);
          param_2[-1] = *(byte *)(param_4 + 7);
          uVar11 = *(undefined2 *)(param_4 + 6);
        }
        else {
          uVar4 = (uint)param_2[-2];
          uVar12 = (uint)param_2[-3];
LAB_1424fcd69:
          uVar11 = *(undefined2 *)
                    (*(longlong *)
                      (param_9 + (longlong)(int)(uint)(param_2[-4] >> (param_12 & 0x1f)) * 8) +
                    (ulonglong)param_2[-5] * 2);
          param_2[-5] = (byte)((ushort)uVar11 >> 8);
          param_2[-4] = (byte)uVar11;
          uVar11 = *(undefined2 *)
                    (*(longlong *)(param_9 + (longlong)(int)(uVar4 >> (param_12 & 0x1f)) * 8) +
                    (ulonglong)uVar12 * 2);
          param_2[-3] = (byte)((ushort)uVar11 >> 8);
          param_2[-2] = (byte)uVar11;
          uVar11 = *(undefined2 *)
                    (*(longlong *)
                      (param_9 + (longlong)(int)(uint)(*param_2 >> (param_12 & 0x1f)) * 8) +
                    (ulonglong)param_2[-1] * 2);
          param_2[-1] = (byte)((ushort)uVar11 >> 8);
        }
        *param_2 = (byte)uVar11;
        param_2 = param_2 + 6;
        uVar4 = (int)uVar6 - 1;
        uVar6 = (ulonglong)uVar4;
      } while (uVar4 != 0);
    }
    break;
  case 4:
    if (*(char *)((longlong)param_1 + 0x11) == '\b') {
      if (((param_6 == 0) || (param_7 == 0)) || (param_8 == 0)) {
        if (uVar4 != 0) {
          lVar8 = 0;
          do {
            bVar3 = param_2[lVar8 * 2 + 1];
            if (bVar3 == 0) {
              bVar3 = *(byte *)(param_4 + 8);
            }
            else if (bVar3 == 0xff) {
              bVar3 = param_2[lVar8 * 2];
            }
            else {
              uVar14 = (ushort)(byte)~bVar3 * *(short *)(param_5 + 8) +
                       (ushort)param_2[lVar8 * 2] * (ushort)bVar3 + 0x80;
              bVar3 = (byte)((uint)(uVar14 >> 8) + (uint)uVar14 >> 8);
            }
            param_2[lVar8] = bVar3;
            lVar8 = lVar8 + 1;
          } while (uVar4 != (uint)lVar8);
        }
      }
      else if (uVar4 != 0) {
        lVar8 = 0;
        do {
          bVar3 = param_2[lVar8 * 2 + 1];
          if (bVar3 == 0) {
            bVar3 = *(byte *)(param_4 + 8);
          }
          else if (bVar3 == 0xff) {
            bVar3 = *(byte *)(param_6 + (ulonglong)param_2[lVar8 * 2]);
          }
          else {
            uVar14 = (ushort)*(byte *)(param_8 + (ulonglong)param_2[lVar8 * 2]) * (ushort)bVar3 +
                     (ushort)(byte)~bVar3 * *(short *)(param_5 + 8) + 0x80;
            bVar3 = *(byte *)(param_7 + (ulonglong)((uint)(uVar14 >> 8) + (uint)uVar14 >> 8 & 0xff))
            ;
          }
          param_2[lVar8] = bVar3;
          lVar8 = lVar8 + 1;
        } while (uVar4 != (uint)lVar8);
      }
    }
    else if (((param_9 == 0) || (param_10 == 0)) || (param_11 == 0)) {
      if (uVar4 != 0) {
        lVar8 = 0;
        do {
          uVar14 = CONCAT11(param_2[lVar8 * 4 + 2],param_2[lVar8 * 4 + 3]);
          if (uVar14 == 0) {
            param_2[lVar8 * 2] = *(byte *)(param_4 + 9);
            param_2[lVar8 * 2 + 1] = *(byte *)(param_4 + 8);
          }
          else if (uVar14 == 0xffff) {
            *(undefined2 *)(param_2 + lVar8 * 2) = *(undefined2 *)(param_2 + lVar8 * 4);
          }
          else {
            iVar15 = (uint)CONCAT11(param_2[lVar8 * 4],param_2[lVar8 * 4 + 1]) * (uint)uVar14;
            iVar5 = (uVar14 ^ 0xffff) * (uint)*(ushort *)(param_5 + 8);
            iVar5 = (iVar5 + iVar15 + 0x8000U >> 0x10) + iVar5 + iVar15 + 0x8000;
            param_2[lVar8 * 2] = (byte)((uint)iVar5 >> 0x18);
            param_2[lVar8 * 2 + 1] = (byte)((uint)iVar5 >> 0x10);
          }
          lVar8 = lVar8 + 1;
        } while (uVar4 != (uint)lVar8);
      }
    }
    else if (uVar4 != 0) {
      lVar8 = 0;
      do {
        uVar14 = CONCAT11(param_2[lVar8 * 4 + 2],param_2[lVar8 * 4 + 3]);
        if (uVar14 == 0) {
          param_2[lVar8 * 2] = *(byte *)(param_4 + 9);
          uVar11 = *(undefined2 *)(param_4 + 8);
        }
        else {
          if (uVar14 == 0xffff) {
            uVar11 = *(undefined2 *)
                      (*(longlong *)
                        (param_9 +
                        (longlong)(int)(uint)(param_2[lVar8 * 4 + 1] >> (param_12 & 0x1f)) * 8) +
                      (ulonglong)param_2[lVar8 * 4] * 2);
          }
          else {
            iVar5 = (uint)*(ushort *)
                           (*(longlong *)
                             (param_11 +
                             (longlong)(int)(uint)(param_2[lVar8 * 4 + 1] >> (param_12 & 0x1f)) * 8)
                           + (ulonglong)param_2[lVar8 * 4] * 2) * (uint)uVar14;
            iVar15 = (uVar14 ^ 0xffff) * (uint)*(ushort *)(param_5 + 8);
            uVar12 = iVar5 + iVar15 + (iVar5 + iVar15 + 0x8000U >> 0x10) + 0x8000;
            uVar11 = *(undefined2 *)
                      (*(longlong *)
                        (param_10 +
                        (longlong)(int)((uVar12 >> 0x10 & 0xff) >> (param_12 & 0x1f)) * 8) +
                      (ulonglong)(uVar12 >> 0x18) * 2);
          }
          param_2[lVar8 * 2] = (byte)((ushort)uVar11 >> 8);
        }
        param_2[lVar8 * 2 + 1] = (byte)uVar11;
        lVar8 = lVar8 + 1;
      } while (uVar4 != (uint)lVar8);
    }
    break;
  case 6:
    if (*(char *)((longlong)param_1 + 0x11) == '\b') {
      if (((param_6 == 0) || (param_7 == 0)) || (param_8 == 0)) {
        if (uVar4 != 0) {
          lVar8 = 0;
          lVar17 = 0;
          do {
            bVar3 = param_2[lVar17 * 4 + 3];
            if (bVar3 == 0) {
              param_2[lVar8] = *(byte *)(param_4 + 2);
              param_2[lVar8 + 1] = *(byte *)(param_4 + 4);
              bVar3 = *(byte *)(param_4 + 6);
            }
            else if (bVar3 == 0xff) {
              param_2[lVar8] = param_2[lVar17 * 4];
              param_2[lVar8 + 1] = param_2[lVar17 * 4 + 1];
              bVar3 = param_2[lVar17 * 4 + 2];
            }
            else {
              uVar12 = (uint)bVar3;
              bVar3 = ~bVar3;
              iVar5 = (uint)*(ushort *)(param_4 + 2) * (uint)bVar3;
              param_2[lVar8] =
                   (byte)((param_2[lVar17 * 4] * uVar12 + iVar5 + 0x80 >> 8 & 0xff) +
                          param_2[lVar17 * 4] * uVar12 + iVar5 + 0x80 >> 8);
              iVar5 = (uint)*(ushort *)(param_4 + 4) * (uint)bVar3;
              param_2[lVar8 + 1] =
                   (byte)((param_2[lVar17 * 4 + 1] * uVar12 + iVar5 + 0x80 >> 8 & 0xff) +
                          param_2[lVar17 * 4 + 1] * uVar12 + iVar5 + 0x80 >> 8);
              iVar5 = (uint)*(ushort *)(param_4 + 6) * (uint)bVar3;
              bVar3 = (byte)((param_2[lVar17 * 4 + 2] * uVar12 + iVar5 + 0x80 >> 8 & 0xff) +
                             param_2[lVar17 * 4 + 2] * uVar12 + iVar5 + 0x80 >> 8);
            }
            param_2[lVar8 + 2] = bVar3;
            lVar17 = lVar17 + 1;
            lVar8 = lVar8 + 3;
          } while (uVar4 != (uint)lVar17);
        }
      }
      else if (uVar4 != 0) {
        lVar8 = 0;
        lVar17 = 0;
        do {
          bVar3 = param_2[lVar17 * 4 + 3];
          if (bVar3 == 0) {
            param_2[lVar8] = *(byte *)(param_4 + 2);
            param_2[lVar8 + 1] = *(byte *)(param_4 + 4);
            bVar3 = *(byte *)(param_4 + 6);
          }
          else if (bVar3 == 0xff) {
            param_2[lVar8] = *(byte *)(param_6 + (ulonglong)param_2[lVar17 * 4]);
            param_2[lVar8 + 1] = *(byte *)(param_6 + (ulonglong)param_2[lVar17 * 4 + 1]);
            bVar3 = *(byte *)(param_6 + (ulonglong)param_2[lVar17 * 4 + 2]);
          }
          else {
            uVar12 = (uint)bVar3;
            iVar15 = *(byte *)(param_8 + (ulonglong)param_2[lVar17 * 4]) * uVar12;
            bVar3 = ~bVar3;
            iVar5 = (uint)*(ushort *)(param_5 + 2) * (uint)bVar3;
            param_2[lVar8] =
                 *(byte *)(param_7 +
                          (ulonglong)
                          ((iVar5 + iVar15 + 0x80U >> 8 & 0xff) + 0x80 + iVar5 + iVar15 >> 8 & 0xff)
                          );
            iVar5 = *(byte *)(param_8 + (ulonglong)param_2[lVar17 * 4 + 1]) * uVar12;
            iVar15 = (uint)*(ushort *)(param_5 + 4) * (uint)bVar3;
            param_2[lVar8 + 1] =
                 *(byte *)(param_7 +
                          (ulonglong)
                          ((iVar5 + iVar15 + 0x80U >> 8 & 0xff) + 0x80 + iVar5 + iVar15 >> 8 & 0xff)
                          );
            iVar5 = *(byte *)(param_8 + (ulonglong)param_2[lVar17 * 4 + 2]) * uVar12;
            iVar15 = (uint)*(ushort *)(param_5 + 6) * (uint)bVar3;
            bVar3 = *(byte *)(param_7 +
                             (ulonglong)
                             ((iVar5 + iVar15 + 0x80U >> 8 & 0xff) + iVar5 + iVar15 + 0x80 >> 8 &
                             0xff));
          }
          param_2[lVar8 + 2] = bVar3;
          lVar17 = lVar17 + 1;
          lVar8 = lVar8 + 3;
        } while (uVar4 != (uint)lVar17);
      }
    }
    else if (((param_9 == 0) || (param_10 == 0)) || (param_11 == 0)) {
      if (uVar4 != 0) {
        lVar8 = 0;
        lVar17 = 0;
        do {
          uVar14 = CONCAT11(param_2[lVar17 * 8 + 6],param_2[lVar17 * 8 + 7]);
          uVar12 = (uint)uVar14;
          if (uVar14 == 0) {
            param_2[lVar8] = *(byte *)(param_4 + 3);
            param_2[lVar8 + 1] = *(byte *)(param_4 + 2);
            param_2[lVar8 + 2] = *(byte *)(param_4 + 5);
            param_2[lVar8 + 3] = *(byte *)(param_4 + 4);
            param_2[lVar8 + 4] = *(byte *)(param_4 + 7);
            param_2[lVar8 + 5] = *(byte *)(param_4 + 6);
          }
          else if (uVar14 == 0xffff) {
            *(undefined2 *)(param_2 + lVar8 + 4) = *(undefined2 *)(param_2 + lVar17 * 8 + 4);
            *(undefined4 *)(param_2 + lVar8) = *(undefined4 *)(param_2 + lVar17 * 8);
          }
          else {
            bVar3 = param_2[lVar17 * 8 + 2];
            bVar13 = param_2[lVar17 * 8 + 3];
            bVar1 = param_2[lVar17 * 8 + 4];
            bVar2 = param_2[lVar17 * 8 + 5];
            iVar15 = CONCAT11(param_2[lVar17 * 8],param_2[lVar17 * 8 + 1]) * uVar12;
            uVar16 = uVar12 ^ 0xffff;
            iVar5 = *(ushort *)(param_4 + 2) * uVar16;
            iVar5 = (iVar15 + iVar5 + 0x8000U >> 0x10) + iVar15 + iVar5 + 0x8000;
            param_2[lVar8] = (byte)((uint)iVar5 >> 0x18);
            param_2[lVar8 + 1] = (byte)((uint)iVar5 >> 0x10);
            iVar15 = CONCAT11(bVar3,bVar13) * uVar12;
            iVar5 = *(ushort *)(param_4 + 4) * uVar16;
            iVar5 = iVar15 + iVar5 + (iVar15 + iVar5 + 0x8000U >> 0x10) + 0x8000;
            param_2[lVar8 + 2] = (byte)((uint)iVar5 >> 0x18);
            param_2[lVar8 + 3] = (byte)((uint)iVar5 >> 0x10);
            iVar15 = CONCAT11(bVar1,bVar2) * uVar12;
            iVar5 = *(ushort *)(param_4 + 6) * uVar16;
            iVar5 = iVar15 + iVar5 + (iVar15 + iVar5 + 0x8000U >> 0x10) + 0x8000;
            param_2[lVar8 + 4] = (byte)((uint)iVar5 >> 0x18);
            param_2[lVar8 + 5] = (byte)((uint)iVar5 >> 0x10);
          }
          lVar17 = lVar17 + 1;
          lVar8 = lVar8 + 6;
        } while (uVar4 != (uint)lVar17);
      }
    }
    else if (uVar4 != 0) {
      lVar8 = 0;
      lVar17 = 0;
      do {
        uVar14 = CONCAT11(param_2[lVar17 * 8 + 6],param_2[lVar17 * 8 + 7]);
        uVar12 = (uint)uVar14;
        if (uVar14 == 0) {
          param_2[lVar8] = *(byte *)(param_4 + 3);
          param_2[lVar8 + 1] = *(byte *)(param_4 + 2);
          param_2[lVar8 + 2] = *(byte *)(param_4 + 5);
          param_2[lVar8 + 3] = *(byte *)(param_4 + 4);
          param_2[lVar8 + 4] = *(byte *)(param_4 + 7);
          uVar11 = *(undefined2 *)(param_4 + 6);
        }
        else {
          if (uVar14 == 0xffff) {
            uVar11 = *(undefined2 *)
                      (*(longlong *)
                        (param_9 +
                        (longlong)(int)(uint)(param_2[lVar17 * 8 + 1] >> (param_12 & 0x1f)) * 8) +
                      (ulonglong)param_2[lVar17 * 8] * 2);
            param_2[lVar8] = (byte)((ushort)uVar11 >> 8);
            param_2[lVar8 + 1] = (byte)uVar11;
            uVar11 = *(undefined2 *)
                      (*(longlong *)
                        (param_9 +
                        (longlong)(int)(uint)(param_2[lVar17 * 8 + 3] >> (param_12 & 0x1f)) * 8) +
                      (ulonglong)param_2[lVar17 * 8 + 2] * 2);
            param_2[lVar8 + 2] = (byte)((ushort)uVar11 >> 8);
            param_2[lVar8 + 3] = (byte)uVar11;
            uVar11 = *(undefined2 *)
                      (*(longlong *)
                        (param_9 +
                        (longlong)(int)(uint)(param_2[lVar17 * 8 + 5] >> (param_12 & 0x1f)) * 8) +
                      (ulonglong)param_2[lVar17 * 8 + 4] * 2);
          }
          else {
            iVar5 = *(ushort *)
                     (*(longlong *)
                       (param_11 +
                       (longlong)(int)(uint)(param_2[lVar17 * 8 + 1] >> (param_12 & 0x1f)) * 8) +
                     (ulonglong)param_2[lVar17 * 8] * 2) * uVar12;
            uVar18 = uVar12 ^ 0xffff;
            iVar15 = *(ushort *)(param_5 + 2) * uVar18;
            uVar16 = (iVar15 + iVar5 + 0x8000U >> 0x10) + iVar15 + iVar5 + 0x8000;
            uVar11 = *(undefined2 *)
                      (*(longlong *)
                        (param_10 +
                        (longlong)(int)((uVar16 >> 0x10 & 0xff) >> (param_12 & 0x1f)) * 8) +
                      (ulonglong)(uVar16 >> 0x18) * 2);
            param_2[lVar8] = (byte)((ushort)uVar11 >> 8);
            param_2[lVar8 + 1] = (byte)uVar11;
            iVar5 = *(ushort *)
                     (*(longlong *)
                       (param_11 +
                       (longlong)(int)(uint)(param_2[lVar17 * 8 + 3] >> (param_12 & 0x1f)) * 8) +
                     (ulonglong)param_2[lVar17 * 8 + 2] * 2) * uVar12;
            iVar15 = *(ushort *)(param_5 + 4) * uVar18;
            uVar16 = (iVar5 + iVar15 + 0x8000U >> 0x10) + iVar5 + iVar15 + 0x8000;
            uVar11 = *(undefined2 *)
                      (*(longlong *)
                        (param_10 +
                        (longlong)(int)((uVar16 >> 0x10 & 0xff) >> (param_12 & 0x1f)) * 8) +
                      (ulonglong)(uVar16 >> 0x18) * 2);
            param_2[lVar8 + 2] = (byte)((ushort)uVar11 >> 8);
            param_2[lVar8 + 3] = (byte)uVar11;
            iVar5 = *(ushort *)
                     (*(longlong *)
                       (param_11 +
                       (longlong)(int)(uint)(param_2[lVar17 * 8 + 5] >> (param_12 & 0x1f)) * 8) +
                     (ulonglong)param_2[lVar17 * 8 + 4] * 2) * uVar12;
            iVar15 = *(ushort *)(param_5 + 6) * uVar18;
            uVar12 = (iVar5 + iVar15 + 0x8000U >> 0x10) + iVar5 + iVar15 + 0x8000;
            uVar11 = *(undefined2 *)
                      (*(longlong *)
                        (param_10 +
                        (longlong)(int)((uVar12 >> 0x10 & 0xff) >> (param_12 & 0x1f)) * 8) +
                      (ulonglong)(uVar12 >> 0x18) * 2);
          }
          param_2[lVar8 + 4] = (byte)((ushort)uVar11 >> 8);
        }
        param_2[lVar8 + 5] = (byte)uVar11;
        lVar17 = lVar17 + 1;
        lVar8 = lVar8 + 6;
      } while (uVar4 != (uint)lVar17);
    }
  }
  if (((byte)param_1[4] & 4) != 0) {
    *(byte *)(param_1 + 4) = (byte)param_1[4] & 0xfb;
    cVar7 = *(char *)((longlong)param_1 + 0x12) + -1;
    *(char *)((longlong)param_1 + 0x12) = cVar7;
    bVar3 = *(char *)((longlong)param_1 + 0x11) * cVar7;
    *(byte *)((longlong)param_1 + 0x13) = bVar3;
    if (bVar3 < 8) {
      uVar10 = bVar3 * uVar10 + 7 >> 3;
    }
    else {
      uVar10 = (bVar3 >> 3) * uVar10;
    }
    *(ulonglong *)(param_1 + 2) = uVar10;
  }
  return;
}



// FUNCTION 1424fda30 FUN_1424fda30 body=1474 status=ok
// SIG undefined FUN_1424fda30(void)

void FUN_1424fda30(uint *param_1,byte *param_2,longlong param_3,longlong param_4,byte param_5)

{
  undefined2 uVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  
  uVar9 = *param_1;
  bVar2 = *(byte *)((longlong)param_1 + 0x11);
  if ((param_3 == 0) || (8 < bVar2)) {
    if (param_4 == 0) {
      return;
    }
    if (bVar2 != 0x10) {
      return;
    }
  }
  switch((char)param_1[4]) {
  case '\0':
    if ((bVar2 == 2) && (uVar9 != 0)) {
      uVar10 = 0;
      pbVar11 = param_2;
      do {
        bVar2 = *pbVar11;
        uVar5 = bVar2 & 0xffffffc0;
        uVar7 = bVar2 & 0x30;
        uVar6 = bVar2 & 0xc;
        uVar8 = (ulonglong)(bVar2 & 3);
        *pbVar11 = *(byte *)(param_3 + (uVar8 << 4 | uVar8 | uVar8 << 6) + uVar8 * 4) >> 6 |
                   *(byte *)(param_3 +
                            ((ulonglong)uVar6 * 5 | (ulonglong)uVar6 << 4 | (ulonglong)(uVar6 >> 2))
                            ) >> 4 & 0xc |
                   *(byte *)(param_3 +
                            ((ulonglong)(uVar7 >> 4) |
                            (ulonglong)(uVar7 >> 2) | (ulonglong)uVar7 * 5)) >> 2 & 0x30 |
                   *(byte *)(param_3 +
                            ((ulonglong)(uVar5 >> 2) | (ulonglong)(bVar2 >> 6) + (ulonglong)uVar5) +
                            (ulonglong)(bVar2 >> 6) * 4) & 0xc0;
        pbVar11 = pbVar11 + 1;
        uVar10 = uVar10 + 4;
      } while (uVar10 < uVar9);
      bVar2 = *(byte *)((longlong)param_1 + 0x11);
    }
    if (bVar2 == 4) {
      if (uVar9 == 0) {
        return;
      }
      uVar10 = 0;
      do {
        bVar2 = *param_2;
        uVar8 = (ulonglong)(bVar2 & 0xf);
        *param_2 = *(byte *)(param_3 + (uVar8 << 4 | uVar8)) >> 4 |
                   *(byte *)(param_3 + ((ulonglong)(bVar2 >> 4) | (ulonglong)(bVar2 & 0xfffffff0)))
                   & 0xf0;
        param_2 = param_2 + 1;
        uVar10 = uVar10 + 2;
      } while (uVar10 < uVar9);
      return;
    }
    if (bVar2 == 8) {
      if (uVar9 == 0) {
        return;
      }
      if (2 < uVar9 - 1) {
        iVar4 = (uVar9 & 3) - uVar9;
        do {
          *param_2 = *(byte *)(param_3 + (ulonglong)*param_2);
          param_2[1] = *(byte *)(param_3 + (ulonglong)param_2[1]);
          param_2[2] = *(byte *)(param_3 + (ulonglong)param_2[2]);
          param_2[3] = *(byte *)(param_3 + (ulonglong)param_2[3]);
          param_2 = param_2 + 4;
          iVar4 = iVar4 + 4;
        } while (iVar4 != 0);
      }
      if ((uVar9 & 3) == 0) {
        return;
      }
      lVar3 = 0;
      do {
        param_2[lVar3] = *(byte *)(param_3 + (ulonglong)param_2[lVar3]);
        lVar3 = lVar3 + 1;
      } while ((uVar9 & 3) != (uint)lVar3);
      return;
    }
    if (bVar2 != 0x10) {
      return;
    }
    if (uVar9 == 0) {
      return;
    }
    if (uVar9 != 1) {
      iVar4 = (uVar9 & 1) - uVar9;
      do {
        uVar1 = *(undefined2 *)
                 (*(longlong *)(param_4 + (longlong)(int)(uint)(param_2[1] >> (param_5 & 0x1f)) * 8)
                 + (ulonglong)*param_2 * 2);
        *param_2 = (byte)((ushort)uVar1 >> 8);
        param_2[1] = (byte)uVar1;
        uVar1 = *(undefined2 *)
                 (*(longlong *)(param_4 + (longlong)(int)(uint)(param_2[3] >> (param_5 & 0x1f)) * 8)
                 + (ulonglong)param_2[2] * 2);
        param_2[2] = (byte)((ushort)uVar1 >> 8);
        param_2[3] = (byte)uVar1;
        param_2 = param_2 + 4;
        iVar4 = iVar4 + 2;
      } while (iVar4 != 0);
    }
    break;
  default:
    goto switchD_1424fda80_caseD_1;
  case '\x02':
    if (bVar2 != 8) {
      if (uVar9 == 0) {
        return;
      }
      param_2 = param_2 + 5;
      do {
        uVar1 = *(undefined2 *)
                 (*(longlong *)
                   (param_4 + (longlong)(int)(uint)(param_2[-4] >> (param_5 & 0x1f)) * 8) +
                 (ulonglong)param_2[-5] * 2);
        param_2[-5] = (byte)((ushort)uVar1 >> 8);
        param_2[-4] = (byte)uVar1;
        uVar1 = *(undefined2 *)
                 (*(longlong *)
                   (param_4 + (longlong)(int)(uint)(param_2[-2] >> (param_5 & 0x1f)) * 8) +
                 (ulonglong)param_2[-3] * 2);
        param_2[-3] = (byte)((ushort)uVar1 >> 8);
        param_2[-2] = (byte)uVar1;
        uVar1 = *(undefined2 *)
                 (*(longlong *)(param_4 + (longlong)(int)(uint)(*param_2 >> (param_5 & 0x1f)) * 8) +
                 (ulonglong)param_2[-1] * 2);
        param_2[-1] = (byte)((ushort)uVar1 >> 8);
        *param_2 = (byte)uVar1;
        param_2 = param_2 + 6;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      return;
    }
    if (uVar9 == 0) {
      return;
    }
    if (uVar9 != 1) {
      iVar4 = (uVar9 & 1) - uVar9;
      do {
        *param_2 = *(byte *)(param_3 + (ulonglong)*param_2);
        param_2[1] = *(byte *)(param_3 + (ulonglong)param_2[1]);
        param_2[2] = *(byte *)(param_3 + (ulonglong)param_2[2]);
        param_2[3] = *(byte *)(param_3 + (ulonglong)param_2[3]);
        param_2[4] = *(byte *)(param_3 + (ulonglong)param_2[4]);
        param_2[5] = *(byte *)(param_3 + (ulonglong)param_2[5]);
        param_2 = param_2 + 6;
        iVar4 = iVar4 + 2;
      } while (iVar4 != 0);
    }
    goto LAB_1424fdd6f;
  case '\x04':
    if (bVar2 == 8) {
      if (uVar9 == 0) {
        return;
      }
      if (2 < uVar9 - 1) {
        iVar4 = (uVar9 & 3) - uVar9;
        do {
          *param_2 = *(byte *)(param_3 + (ulonglong)*param_2);
          param_2[2] = *(byte *)(param_3 + (ulonglong)param_2[2]);
          param_2[4] = *(byte *)(param_3 + (ulonglong)param_2[4]);
          param_2[6] = *(byte *)(param_3 + (ulonglong)param_2[6]);
          param_2 = param_2 + 8;
          iVar4 = iVar4 + 4;
        } while (iVar4 != 0);
      }
      if ((uVar9 & 3) == 0) {
        return;
      }
      lVar3 = 0;
      do {
        param_2[lVar3 * 2] = *(byte *)(param_3 + (ulonglong)param_2[lVar3 * 2]);
        lVar3 = lVar3 + 1;
      } while ((uVar9 & 3) != (uint)lVar3);
      return;
    }
    if (uVar9 == 0) {
      return;
    }
    if (uVar9 != 1) {
      iVar4 = (uVar9 & 1) - uVar9;
      do {
        uVar1 = *(undefined2 *)
                 (*(longlong *)(param_4 + (longlong)(int)(uint)(param_2[1] >> (param_5 & 0x1f)) * 8)
                 + (ulonglong)*param_2 * 2);
        *param_2 = (byte)((ushort)uVar1 >> 8);
        param_2[1] = (byte)uVar1;
        uVar1 = *(undefined2 *)
                 (*(longlong *)(param_4 + (longlong)(int)(uint)(param_2[5] >> (param_5 & 0x1f)) * 8)
                 + (ulonglong)param_2[4] * 2);
        param_2[4] = (byte)((ushort)uVar1 >> 8);
        param_2[5] = (byte)uVar1;
        param_2 = param_2 + 8;
        iVar4 = iVar4 + 2;
      } while (iVar4 != 0);
    }
    break;
  case '\x06':
    if (bVar2 != 8) {
      if (uVar9 == 0) {
        return;
      }
      lVar3 = 0;
      do {
        uVar1 = *(undefined2 *)
                 (*(longlong *)
                   (param_4 + (longlong)(int)(uint)(param_2[lVar3 * 8 + 1] >> (param_5 & 0x1f)) * 8)
                 + (ulonglong)param_2[lVar3 * 8] * 2);
        param_2[lVar3 * 8] = (byte)((ushort)uVar1 >> 8);
        param_2[lVar3 * 8 + 1] = (byte)uVar1;
        uVar1 = *(undefined2 *)
                 (*(longlong *)
                   (param_4 + (longlong)(int)(uint)(param_2[lVar3 * 8 + 3] >> (param_5 & 0x1f)) * 8)
                 + (ulonglong)param_2[lVar3 * 8 + 2] * 2);
        param_2[lVar3 * 8 + 2] = (byte)((ushort)uVar1 >> 8);
        param_2[lVar3 * 8 + 3] = (byte)uVar1;
        uVar1 = *(undefined2 *)
                 (*(longlong *)
                   (param_4 + (longlong)(int)(uint)(param_2[lVar3 * 8 + 5] >> (param_5 & 0x1f)) * 8)
                 + (ulonglong)param_2[lVar3 * 8 + 4] * 2);
        param_2[lVar3 * 8 + 4] = (byte)((ushort)uVar1 >> 8);
        param_2[lVar3 * 8 + 5] = (byte)uVar1;
        lVar3 = lVar3 + 1;
      } while (uVar9 != (uint)lVar3);
      return;
    }
    if (uVar9 == 0) {
      return;
    }
    if (uVar9 != 1) {
      iVar4 = (uVar9 & 1) - uVar9;
      do {
        *param_2 = *(byte *)(param_3 + (ulonglong)*param_2);
        param_2[1] = *(byte *)(param_3 + (ulonglong)param_2[1]);
        param_2[2] = *(byte *)(param_3 + (ulonglong)param_2[2]);
        param_2[4] = *(byte *)(param_3 + (ulonglong)param_2[4]);
        param_2[5] = *(byte *)(param_3 + (ulonglong)param_2[5]);
        param_2[6] = *(byte *)(param_3 + (ulonglong)param_2[6]);
        param_2 = param_2 + 8;
        iVar4 = iVar4 + 2;
      } while (iVar4 != 0);
    }
LAB_1424fdd6f:
    if ((uVar9 & 1) != 0) {
      *param_2 = *(byte *)(param_3 + (ulonglong)*param_2);
      param_2[1] = *(byte *)(param_3 + (ulonglong)param_2[1]);
      param_2[2] = *(byte *)(param_3 + (ulonglong)param_2[2]);
    }
    goto switchD_1424fda80_caseD_1;
  }
  if ((uVar9 & 1) != 0) {
    uVar1 = *(undefined2 *)
             (*(longlong *)(param_4 + (longlong)(int)(uint)(param_2[1] >> (param_5 & 0x1f)) * 8) +
             (ulonglong)*param_2 * 2);
    *param_2 = (byte)((ushort)uVar1 >> 8);
    param_2[1] = (byte)uVar1;
  }
switchD_1424fda80_caseD_1:
  return;
}



// FUNCTION 1424fe010 FUN_1424fe010 body=394 status=ok
// SIG undefined FUN_1424fe010(void)

void FUN_1424fe010(uint *param_1,byte *param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  byte bVar5;
  longlong lVar6;
  byte *pbVar7;
  
  if (*(char *)((longlong)param_1 + 0x11) != '\b') {
    return;
  }
  uVar2 = *param_1;
  cVar1 = (char)param_1[4];
  if ((param_3 == 0) || (cVar1 != '\x02')) {
    if ((param_3 == 0) || (cVar1 != '\x06')) {
      if (param_4 == 0) {
        return;
      }
      if (cVar1 != '\x03') {
        return;
      }
      if (uVar2 == 0) {
        return;
      }
      if (2 < uVar2 - 1) {
        iVar3 = (uVar2 & 3) - uVar2;
        do {
          *param_2 = *(byte *)(param_4 + (ulonglong)*param_2);
          param_2[1] = *(byte *)(param_4 + (ulonglong)param_2[1]);
          param_2[2] = *(byte *)(param_4 + (ulonglong)param_2[2]);
          param_2[3] = *(byte *)(param_4 + (ulonglong)param_2[3]);
          param_2 = param_2 + 4;
          iVar3 = iVar3 + 4;
        } while (iVar3 != 0);
      }
      if ((uVar2 & 3) == 0) {
        return;
      }
      lVar6 = 0;
      do {
        param_2[lVar6] = *(byte *)(param_4 + (ulonglong)param_2[lVar6]);
        lVar6 = lVar6 + 1;
      } while ((uVar2 & 3) != (uint)lVar6);
      return;
    }
    if (uVar2 == 0) goto LAB_1424fe0d1;
    lVar6 = 0;
    do {
      param_2[lVar6] =
           *(byte *)(param_3 +
                    ((ulonglong)(param_2[lVar6 * 4 + 2] >> 3) |
                    (ulonglong)((param_2[lVar6 * 4] & 0xf8) << 7) +
                    (ulonglong)(param_2[lVar6 * 4 + 1] & 0xf8) * 4));
      lVar6 = lVar6 + 1;
    } while (uVar2 != (uint)lVar6);
  }
  else {
    if (uVar2 == 0) {
LAB_1424fe0d1:
      bVar5 = 8;
      goto LAB_1424fe0d3;
    }
    lVar6 = 0;
    pbVar7 = param_2;
    do {
      param_2[lVar6] =
           *(byte *)(param_3 +
                    ((ulonglong)(pbVar7[2] >> 3) |
                    (ulonglong)((*pbVar7 & 0xf8) << 7) + (ulonglong)(pbVar7[1] & 0xf8) * 4));
      lVar6 = lVar6 + 1;
      pbVar7 = pbVar7 + 3;
    } while (uVar2 != (uint)lVar6);
  }
  bVar5 = *(byte *)((longlong)param_1 + 0x11);
LAB_1424fe0d3:
  *(undefined1 *)(param_1 + 4) = 3;
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  *(byte *)((longlong)param_1 + 0x13) = bVar5;
  if (bVar5 < 8) {
    uVar4 = (ulonglong)bVar5 * (ulonglong)uVar2 + 7 >> 3;
  }
  else {
    uVar4 = (ulonglong)(bVar5 >> 3) * (ulonglong)uVar2;
  }
  *(ulonglong *)(param_1 + 2) = uVar4;
  return;
}



// FUNCTION 1424fe1a0 FUN_1424fe1a0 body=1346 status=ok
// SIG undefined FUN_1424fe1a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1424fe1a0(int *param_1,uint *param_2,byte *param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  ushort uVar38;
  bool bVar39;
  ulonglong uVar40;
  byte bVar41;
  longlong lVar42;
  ulonglong uVar43;
  uint uVar44;
  uint *puVar45;
  longlong lVar46;
  int iVar47;
  ulonglong uVar48;
  uint uVar49;
  int iVar50;
  ulonglong uVar51;
  byte bVar52;
  longlong lVar53;
  undefined1 auVar54 [16];
  ulonglong uVar55;
  byte bVar57;
  ulonglong uVar56;
  undefined1 auStack_88 [32];
  uint local_68 [6];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  bVar3 = *(byte *)(param_1 + 4);
  if (bVar3 != 3) {
    iVar50 = *param_1;
    bVar41 = *(byte *)((longlong)param_1 + 0x11);
    if ((bVar3 & 2) == 0) {
      bVar52 = param_3[3];
      uVar48 = 1;
    }
    else {
      bVar52 = *param_3;
      local_68[1] = (uint)bVar41 - (uint)param_3[1];
      local_68[2] = (uint)bVar41 - (uint)param_3[2];
      uVar48 = 3;
    }
    uVar49 = (uint)bVar41;
    uVar44 = uVar49 - bVar52;
    local_68[0] = uVar44;
    uVar40 = uVar48;
    if ((bVar3 & 4) != 0) {
      uVar40 = (ulonglong)((int)uVar48 + 1);
      local_68[uVar48] = uVar49 - param_3[4];
    }
    iVar47 = (int)uVar40;
    if ((int)uVar44 < 1) {
      local_68[0] = 0;
    }
    bVar39 = (int)uVar44 >= 1;
    if (iVar47 != 1) {
      bVar6 = (int)local_68[1] < 1;
      if (bVar6) {
        local_68[1] = 0;
      }
      bVar39 = !bVar6 || bVar39;
      if (iVar47 != 2) {
        bVar6 = (int)local_68[2] < 1;
        if (bVar6) {
          local_68[2] = 0;
        }
        bVar6 = !bVar6 || bVar39;
        bVar39 = bVar6;
        if ((iVar47 != 3) && (bVar39 = true, (int)local_68[3] < 1)) {
          local_68[3] = 0;
          bVar39 = bVar6;
        }
      }
    }
    if (bVar39) {
      switch(uVar49 - 2 >> 1 | (uint)((uVar49 - 2 & 1) != 0) << 0x1f) {
      case 0:
        uVar48 = *(ulonglong *)(param_1 + 2);
        if (uVar48 != 0) {
          if (uVar48 < 0x20) {
            uVar40 = 0;
          }
          else {
            uVar40 = uVar48 & 0xffffffffffffffe0;
            lVar42 = (uVar40 - 0x20 >> 5) + 1;
            uVar43 = (ulonglong)((uint)lVar42 & 1);
            if (uVar40 - 0x20 == 0) {
              lVar46 = 0;
            }
            else {
              lVar42 = uVar43 - lVar42;
              lVar46 = 0;
              do {
                puVar1 = (ushort *)((longlong)param_2 + lVar46);
                uVar7 = puVar1[1];
                uVar9 = puVar1[2];
                uVar10 = puVar1[3];
                uVar11 = puVar1[4];
                uVar12 = puVar1[5];
                uVar13 = puVar1[6];
                uVar14 = puVar1[7];
                puVar2 = (ushort *)((longlong)param_2 + lVar46 + 0x10);
                uVar15 = *puVar2;
                uVar16 = puVar2[1];
                uVar17 = puVar2[2];
                uVar18 = puVar2[3];
                uVar19 = puVar2[4];
                uVar20 = puVar2[5];
                uVar21 = puVar2[6];
                uVar22 = puVar2[7];
                puVar2 = (ushort *)((longlong)param_2 + lVar46 + 0x20);
                uVar23 = *puVar2;
                uVar24 = puVar2[1];
                uVar25 = puVar2[2];
                uVar26 = puVar2[3];
                uVar27 = puVar2[4];
                uVar28 = puVar2[5];
                uVar29 = puVar2[6];
                uVar30 = puVar2[7];
                puVar2 = (ushort *)((longlong)param_2 + lVar46 + 0x30);
                uVar31 = *puVar2;
                uVar32 = puVar2[1];
                uVar33 = puVar2[2];
                uVar34 = puVar2[3];
                uVar35 = puVar2[4];
                uVar36 = puVar2[5];
                uVar37 = puVar2[6];
                uVar38 = puVar2[7];
                puVar2 = (ushort *)((longlong)param_2 + lVar46);
                *puVar2 = *puVar1 >> 1 & 0x5555;
                puVar2[1] = uVar7 >> 1 & 0x5555;
                puVar2[2] = uVar9 >> 1 & 0x5555;
                puVar2[3] = uVar10 >> 1 & 0x5555;
                puVar2[4] = uVar11 >> 1 & 0x5555;
                puVar2[5] = uVar12 >> 1 & 0x5555;
                puVar2[6] = uVar13 >> 1 & 0x5555;
                puVar2[7] = uVar14 >> 1 & 0x5555;
                puVar1 = (ushort *)((longlong)param_2 + lVar46 + 0x10);
                *puVar1 = uVar15 >> 1 & 0x5555;
                puVar1[1] = uVar16 >> 1 & 0x5555;
                puVar1[2] = uVar17 >> 1 & 0x5555;
                puVar1[3] = uVar18 >> 1 & 0x5555;
                puVar1[4] = uVar19 >> 1 & 0x5555;
                puVar1[5] = uVar20 >> 1 & 0x5555;
                puVar1[6] = uVar21 >> 1 & 0x5555;
                puVar1[7] = uVar22 >> 1 & 0x5555;
                puVar1 = (ushort *)((longlong)param_2 + lVar46 + 0x20);
                *puVar1 = uVar23 >> 1 & 0x5555;
                puVar1[1] = uVar24 >> 1 & 0x5555;
                puVar1[2] = uVar25 >> 1 & 0x5555;
                puVar1[3] = uVar26 >> 1 & 0x5555;
                puVar1[4] = uVar27 >> 1 & 0x5555;
                puVar1[5] = uVar28 >> 1 & 0x5555;
                puVar1[6] = uVar29 >> 1 & 0x5555;
                puVar1[7] = uVar30 >> 1 & 0x5555;
                puVar1 = (ushort *)((longlong)param_2 + lVar46 + 0x30);
                *puVar1 = uVar31 >> 1 & 0x5555;
                puVar1[1] = uVar32 >> 1 & 0x5555;
                puVar1[2] = uVar33 >> 1 & 0x5555;
                puVar1[3] = uVar34 >> 1 & 0x5555;
                puVar1[4] = uVar35 >> 1 & 0x5555;
                puVar1[5] = uVar36 >> 1 & 0x5555;
                puVar1[6] = uVar37 >> 1 & 0x5555;
                puVar1[7] = uVar38 >> 1 & 0x5555;
                lVar46 = lVar46 + 0x40;
                lVar42 = lVar42 + 2;
              } while (lVar42 != 0);
            }
            if (uVar43 != 0) {
              puVar1 = (ushort *)((longlong)param_2 + lVar46);
              uVar7 = puVar1[1];
              uVar9 = puVar1[2];
              uVar10 = puVar1[3];
              uVar11 = puVar1[4];
              uVar12 = puVar1[5];
              uVar13 = puVar1[6];
              uVar14 = puVar1[7];
              puVar2 = (ushort *)((longlong)param_2 + lVar46 + 0x10);
              uVar15 = *puVar2;
              uVar16 = puVar2[1];
              uVar17 = puVar2[2];
              uVar18 = puVar2[3];
              uVar19 = puVar2[4];
              uVar20 = puVar2[5];
              uVar21 = puVar2[6];
              uVar22 = puVar2[7];
              puVar2 = (ushort *)((longlong)param_2 + lVar46);
              *puVar2 = *puVar1 >> 1 & 0x5555;
              puVar2[1] = uVar7 >> 1 & 0x5555;
              puVar2[2] = uVar9 >> 1 & 0x5555;
              puVar2[3] = uVar10 >> 1 & 0x5555;
              puVar2[4] = uVar11 >> 1 & 0x5555;
              puVar2[5] = uVar12 >> 1 & 0x5555;
              puVar2[6] = uVar13 >> 1 & 0x5555;
              puVar2[7] = uVar14 >> 1 & 0x5555;
              puVar1 = (ushort *)((longlong)param_2 + lVar46 + 0x10);
              *puVar1 = uVar15 >> 1 & 0x5555;
              puVar1[1] = uVar16 >> 1 & 0x5555;
              puVar1[2] = uVar17 >> 1 & 0x5555;
              puVar1[3] = uVar18 >> 1 & 0x5555;
              puVar1[4] = uVar19 >> 1 & 0x5555;
              puVar1[5] = uVar20 >> 1 & 0x5555;
              puVar1[6] = uVar21 >> 1 & 0x5555;
              puVar1[7] = uVar22 >> 1 & 0x5555;
            }
            if (uVar48 == uVar40) break;
            param_2 = (uint *)((longlong)param_2 + uVar40);
          }
          lVar42 = 0;
          do {
            *(byte *)((longlong)param_2 + lVar42) =
                 *(byte *)((longlong)param_2 + lVar42) >> 1 & 0x55;
            lVar42 = lVar42 + 1;
          } while (uVar48 - uVar40 != lVar42);
        }
        break;
      case 1:
        lVar42 = *(longlong *)(param_1 + 2);
        if (lVar42 != 0) {
          bVar41 = (byte)local_68[0];
          uVar49 = 0xf0U >> (bVar41 & 0x1f) & 0xf0 | 0xfU >> (bVar41 & 0x1f);
          bVar3 = (byte)uVar49;
          *(byte *)param_2 = (byte)*param_2 >> (bVar41 & 0x1f) & bVar3;
          if (lVar42 != 1) {
            uVar48 = lVar42 - 1;
            uVar40 = 1;
            puVar45 = param_2;
            if ((3 < uVar48) &&
               ((local_68 <= param_2 || ((uint *)((longlong)param_2 + lVar42) <= local_68)))) {
              uVar51 = uVar48 & 0xfffffffffffffffc;
              uVar40 = uVar51 + 1;
              puVar45 = (uint *)((longlong)param_2 + uVar51);
              auVar54._4_4_ = 0;
              auVar54._0_4_ = local_68[0];
              auVar54._8_4_ = local_68[0];
              auVar54._12_4_ = 0;
              auVar54 = auVar54 & _DAT_1499702a0;
              uVar43 = 0;
              lVar46 = auVar54._8_8_;
              do {
                uVar4 = *(undefined2 *)((longlong)param_2 + uVar43 + 1);
                uVar5 = *(undefined2 *)((longlong)param_2 + uVar43 + 3);
                bVar57 = (byte)((ushort)uVar4 >> 8);
                bVar52 = (byte)((ushort)uVar5 >> 8);
                lVar53 = auVar54._0_8_;
                uVar56 = ((ulonglong)(CONCAT14(bVar57,(uint)CONCAT12(bVar57,uVar4)) & 0xffffff00ff)
                         & 0xffff) >> lVar53 & (ulonglong)uVar49;
                uVar8 = bVar57 >> lVar46 & uVar49;
                uVar55 = ((ulonglong)(CONCAT14(bVar52,(uint)CONCAT12(bVar52,uVar5)) & 0xffffff00ff)
                         & 0xffff) >> lVar53 & (ulonglong)uVar49;
                uVar44 = bVar52 >> lVar46 & uVar49;
                uVar7 = (ushort)uVar56 & 0xff;
                bVar52 = ((uVar56 & 0xff) != 0) * (uVar7 < 0x100) * (char)uVar56 - (0xff < uVar7);
                uVar7 = (ushort)uVar8;
                bVar57 = (uVar7 != 0) * (uVar7 < 0x100) * (char)uVar8 - (0xff < uVar7);
                bVar52 = (bVar52 != 0) * (bVar52 < 0x100) * bVar52 - (0xff < bVar52);
                bVar57 = (bVar57 != 0) * (bVar57 < 0x100) * bVar57 - (0xff < bVar57);
                *(ushort *)((longlong)param_2 + uVar43 + 1) =
                     CONCAT11((bVar57 != 0) * (bVar57 < 0x100) * bVar57 - (0xff < bVar57),
                              (bVar52 != 0) * (bVar52 < 0x100) * bVar52 - (0xff < bVar52));
                uVar7 = (ushort)uVar55 & 0xff;
                bVar52 = ((uVar55 & 0xff) != 0) * (uVar7 < 0x100) * (char)uVar55 - (0xff < uVar7);
                uVar7 = (ushort)uVar44;
                bVar57 = (uVar7 != 0) * (uVar7 < 0x100) * (char)uVar44 - (0xff < uVar7);
                bVar52 = (bVar52 != 0) * (bVar52 < 0x100) * bVar52 - (0xff < bVar52);
                bVar57 = (bVar57 != 0) * (bVar57 < 0x100) * bVar57 - (0xff < bVar57);
                *(ushort *)((longlong)param_2 + uVar43 + 3) =
                     CONCAT11((bVar57 != 0) * (bVar57 < 0x100) * bVar57 - (0xff < bVar57),
                              (bVar52 != 0) * (bVar52 < 0x100) * bVar52 - (0xff < bVar52));
                uVar43 = uVar43 + 4;
              } while (uVar51 != uVar43);
              if (uVar48 == uVar51) break;
            }
            uVar49 = (int)lVar42 - (int)uVar40;
            uVar48 = ~uVar40;
            if ((uVar49 & 3) != 0) {
              lVar46 = -((ulonglong)uVar49 & 3);
              do {
                *(byte *)((longlong)puVar45 + 1) =
                     *(byte *)((longlong)puVar45 + 1) >> (bVar41 & 0x1f) & bVar3;
                puVar45 = (uint *)((longlong)puVar45 + 1);
                uVar40 = uVar40 + 1;
                lVar46 = lVar46 + 1;
              } while (lVar46 != 0);
            }
            if (2 < uVar48 + lVar42) {
              lVar46 = 0;
              do {
                *(byte *)((longlong)puVar45 + lVar46 + 1) =
                     *(byte *)((longlong)puVar45 + lVar46 + 1) >> (bVar41 & 0x1f) & bVar3;
                *(byte *)((longlong)puVar45 + lVar46 + 2) =
                     *(byte *)((longlong)puVar45 + lVar46 + 2) >> (bVar41 & 0x1f) & bVar3;
                *(byte *)((longlong)puVar45 + lVar46 + 3) =
                     *(byte *)((longlong)puVar45 + lVar46 + 3) >> (bVar41 & 0x1f) & bVar3;
                *(byte *)((longlong)puVar45 + lVar46 + 4) =
                     *(byte *)((longlong)puVar45 + lVar46 + 4) >> (bVar41 & 0x1f) & bVar3;
                lVar46 = lVar46 + 4;
              } while (lVar42 - uVar40 != lVar46);
            }
          }
        }
        break;
      case 3:
        uVar49 = iVar50 * iVar47;
        if (uVar49 != 0) {
          uVar48 = 0;
          if (uVar49 != 1) {
            uVar48 = 0;
            do {
              *(byte *)((longlong)param_2 + uVar48) =
                   *(byte *)((longlong)param_2 + uVar48) >>
                   ((byte)local_68[(uVar48 & 0xffffffff) % uVar40] & 0x1f);
              *(byte *)((longlong)param_2 + uVar48 + 1) =
                   *(byte *)((longlong)param_2 + uVar48 + 1) >>
                   ((byte)local_68[(ulonglong)((int)uVar48 + 1) % uVar40] & 0x1f);
              uVar48 = uVar48 + 2;
            } while (uVar49 - (uVar49 & 1) != (int)uVar48);
            param_2 = (uint *)((longlong)param_2 + uVar48);
          }
          if ((uVar49 & 1) != 0) {
            *(byte *)param_2 =
                 (byte)*param_2 >> ((byte)local_68[(uVar48 & 0xffffffff) % uVar40] & 0x1f);
          }
        }
        break;
      case 7:
        iVar50 = iVar50 * iVar47;
        if (iVar50 != 0) {
          uVar48 = 0;
          do {
            uVar7 = CONCAT11(*(byte *)((longlong)param_2 + uVar48 * 2),
                             *(byte *)((longlong)param_2 + uVar48 * 2 + 1)) >>
                    ((byte)local_68[(uVar48 & 0xffffffff) % uVar40] & 0x1f);
            *(byte *)((longlong)param_2 + uVar48 * 2) = (byte)(uVar7 >> 8);
            *(byte *)((longlong)param_2 + uVar48 * 2 + 1) = (byte)uVar7;
            uVar48 = uVar48 + 1;
          } while (iVar50 != (int)uVar48);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_88);
}



// FUNCTION 1424fe720 FUN_1424fe720 body=573 status=ok
// SIG undefined FUN_1424fe720(void)

void FUN_1424fe720(uint *param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  sbyte sVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x11);
  if (bVar1 < 8) {
    uVar2 = *param_1;
    uVar10 = (ulonglong)uVar2;
    if (bVar1 == 4) {
      if (uVar2 != 0) {
        uVar5 = uVar2 * 4 & 4;
        sVar6 = (sbyte)uVar5;
        pbVar3 = (byte *)((ulonglong)(uVar2 - 1 >> 1) + param_2);
        param_2 = param_2 + uVar10;
        if (uVar2 - 1 != 0) {
          iVar9 = (uVar2 & 1) - uVar2;
          do {
            pbVar8 = pbVar3 + -1;
            bVar1 = *pbVar3;
            pbVar4 = pbVar3;
            if (uVar5 == 4) {
              pbVar4 = pbVar8;
            }
            bVar11 = uVar5 == 4;
            pbVar3 = pbVar4 + -1;
            if (bVar11) {
              pbVar3 = pbVar8;
            }
            *(byte *)(param_2 + -1) = bVar1 >> (sbyte)uVar5 & 0xf;
            *(byte *)(param_2 + -2) = *pbVar4 >> (!bVar11 << 2) & 0xf;
            param_2 = param_2 + -2;
            uVar5 = (uint)bVar11 << 2;
            sVar6 = (sbyte)uVar5;
            iVar9 = iVar9 + 2;
          } while (iVar9 != 0);
        }
        if ((uVar2 & 1) != 0) {
          *(byte *)(param_2 + -1) = *pbVar3 >> sVar6 & 0xf;
        }
      }
    }
    else if (bVar1 == 2) {
      if (uVar2 != 0) {
        uVar5 = ~(uVar2 * 2 + 6) & 6;
        pbVar3 = (byte *)((ulonglong)(uVar2 - 1 >> 2) + param_2);
        param_2 = param_2 + uVar10;
        if (uVar2 - 1 != 0) {
          iVar9 = (uVar2 & 1) - uVar2;
          do {
            *(byte *)(param_2 + -1) = *pbVar3 >> ((byte)uVar5 & 0x1f) & 3;
            pbVar8 = pbVar3 + -1;
            if (uVar5 != 6) {
              pbVar8 = pbVar3;
            }
            iVar7 = uVar5 + 2;
            if (uVar5 == 6) {
              iVar7 = 0;
            }
            *(byte *)(param_2 + -2) = *pbVar8 >> ((byte)iVar7 & 0x1f) & 3;
            param_2 = param_2 + -2;
            uVar5 = iVar7 + 2;
            pbVar3 = pbVar8;
            if (iVar7 == 6) {
              uVar5 = 0;
              pbVar3 = pbVar8 + -1;
            }
            iVar9 = iVar9 + 2;
          } while (iVar9 != 0);
        }
        if ((uVar2 & 1) != 0) {
          *(byte *)(param_2 + -1) = *pbVar3 >> ((byte)uVar5 & 0x1f) & 3;
        }
      }
    }
    else if ((bVar1 == 1) && (uVar2 != 0)) {
      uVar5 = ~(uVar2 - 1) & 7;
      pbVar3 = (byte *)((ulonglong)(uVar2 - 1 >> 3) + param_2);
      param_2 = param_2 + uVar10;
      if (uVar2 - 1 != 0) {
        iVar9 = (uVar2 & 1) - uVar2;
        do {
          *(byte *)(param_2 + -1) = *pbVar3 >> ((byte)uVar5 & 0x1f) & 1;
          pbVar8 = pbVar3 + -1;
          if (uVar5 != 7) {
            pbVar8 = pbVar3;
          }
          iVar7 = uVar5 + 1;
          if (uVar5 == 7) {
            iVar7 = 0;
          }
          *(byte *)(param_2 + -2) = *pbVar8 >> ((byte)iVar7 & 0x1f) & 1;
          param_2 = param_2 + -2;
          uVar5 = iVar7 + 1;
          pbVar3 = pbVar8;
          if (iVar7 == 7) {
            uVar5 = 0;
            pbVar3 = pbVar8 + -1;
          }
          iVar9 = iVar9 + 2;
        } while (iVar9 != 0);
      }
      if ((uVar2 & 1) != 0) {
        *(byte *)(param_2 + -1) = *pbVar3 >> ((byte)uVar5 & 0x1f) & 1;
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x11) = 8;
    *(byte *)((longlong)param_1 + 0x13) = *(byte *)((longlong)param_1 + 0x12) << 3;
    *(ulonglong *)(param_1 + 2) = (ulonglong)(uVar2 * *(byte *)((longlong)param_1 + 0x12));
  }
  return;
}



// FUNCTION 1424fe960 FUN_1424fe960 body=1424 status=ok
// SIG undefined FUN_1424fe960(void)

void FUN_1424fe960(uint *param_1,longlong param_2,undefined4 param_3,char param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 uVar10;
  
  uVar9 = *param_1;
  uVar2 = (ulonglong)uVar9;
  uVar7 = (undefined1)param_3;
  uVar10 = (undefined1)((uint)param_3 >> 8);
  if ((char)param_1[4] == '\x02') {
    if (*(char *)((longlong)param_1 + 0x11) == '\x10') {
      lVar3 = uVar2 * 6;
      if (-1 < param_4) {
        if (uVar9 != 0) {
          lVar3 = lVar3 + -1;
          do {
            *(undefined1 *)(param_2 + -1 + uVar2 * 8) = *(undefined1 *)(param_2 + lVar3);
            *(undefined1 *)(param_2 + -2 + uVar2 * 8) = *(undefined1 *)(param_2 + -1 + lVar3);
            *(undefined1 *)(param_2 + -3 + uVar2 * 8) = *(undefined1 *)(param_2 + -2 + lVar3);
            *(undefined1 *)(param_2 + -4 + uVar2 * 8) = *(undefined1 *)(param_2 + -3 + lVar3);
            *(undefined1 *)(param_2 + -5 + uVar2 * 8) = *(undefined1 *)(param_2 + -4 + lVar3);
            *(undefined1 *)(param_2 + -6 + uVar2 * 8) = *(undefined1 *)(param_2 + -5 + lVar3);
            *(undefined1 *)(param_2 + -7 + uVar2 * 8) = uVar10;
            *(undefined1 *)(param_2 + -8 + uVar2 * 8) = uVar7;
            uVar2 = uVar2 - 1;
            lVar3 = lVar3 + -6;
          } while ((int)uVar2 != 0);
        }
        *(undefined2 *)((longlong)param_1 + 0x12) = 0x4004;
        *(ulonglong *)(param_1 + 2) = (ulonglong)(uVar9 * 8);
        return;
      }
      *(undefined1 *)(param_2 + lVar3 + -1 + uVar2 * 2) = uVar10;
      *(undefined1 *)(param_2 + lVar3 + -2 + uVar2 * 2) = uVar7;
      if (1 < uVar9) {
        lVar3 = lVar3 + -1;
        do {
          *(undefined1 *)(param_2 + -3 + uVar2 * 8) = *(undefined1 *)(param_2 + lVar3);
          *(undefined1 *)(param_2 + -4 + uVar2 * 8) = *(undefined1 *)(param_2 + -1 + lVar3);
          *(undefined1 *)(param_2 + -5 + uVar2 * 8) = *(undefined1 *)(param_2 + -2 + lVar3);
          *(undefined1 *)(param_2 + -6 + uVar2 * 8) = *(undefined1 *)(param_2 + -3 + lVar3);
          *(undefined1 *)(param_2 + -7 + uVar2 * 8) = *(undefined1 *)(param_2 + -4 + lVar3);
          *(undefined1 *)(param_2 + -8 + uVar2 * 8) = *(undefined1 *)(param_2 + -5 + lVar3);
          *(undefined1 *)(param_2 + -9 + uVar2 * 8) = uVar10;
          *(undefined1 *)(param_2 + -10 + uVar2 * 8) = uVar7;
          uVar2 = uVar2 - 1;
          lVar3 = lVar3 + -6;
        } while ((int)uVar2 != 1);
      }
      *(undefined2 *)((longlong)param_1 + 0x12) = 0x4004;
      uVar9 = uVar9 << 3;
      goto LAB_1424feee6;
    }
    if (*(char *)((longlong)param_1 + 0x11) != '\b') {
      return;
    }
    param_2 = param_2 + uVar2 * 3;
    lVar3 = param_2 + uVar2;
    if (param_4 < '\0') {
      *(undefined1 *)(lVar3 + -1) = uVar7;
      if (1 < uVar9) {
        uVar8 = uVar9 - 1 & 1;
        if (uVar9 != 2) {
          iVar6 = (uVar8 + 1) - uVar9;
          do {
            *(undefined1 *)(lVar3 + -2) = *(undefined1 *)(param_2 + -1);
            *(undefined1 *)(lVar3 + -3) = *(undefined1 *)(param_2 + -2);
            *(undefined1 *)(lVar3 + -4) = *(undefined1 *)(param_2 + -3);
            *(undefined1 *)(lVar3 + -5) = uVar7;
            *(undefined1 *)(lVar3 + -6) = *(undefined1 *)(param_2 + -4);
            *(undefined1 *)(lVar3 + -7) = *(undefined1 *)(param_2 + -5);
            puVar1 = (undefined1 *)(param_2 + -6);
            param_2 = param_2 + -6;
            *(undefined1 *)(lVar3 + -8) = *puVar1;
            *(undefined1 *)(lVar3 + -9) = uVar7;
            lVar3 = lVar3 + -8;
            iVar6 = iVar6 + 2;
          } while (iVar6 != 0);
        }
        if (uVar8 != 0) {
          *(undefined1 *)(lVar3 + -2) = *(undefined1 *)(param_2 + -1);
          *(undefined1 *)(lVar3 + -3) = *(undefined1 *)(param_2 + -2);
          *(undefined1 *)(lVar3 + -4) = *(undefined1 *)(param_2 + -3);
          *(undefined1 *)(lVar3 + -5) = uVar7;
        }
      }
    }
    else if (uVar9 != 0) {
      if (uVar9 != 1) {
        iVar6 = (uVar9 & 1) - uVar9;
        do {
          *(undefined1 *)(lVar3 + -1) = *(undefined1 *)(param_2 + -1);
          *(undefined1 *)(lVar3 + -2) = *(undefined1 *)(param_2 + -2);
          *(undefined1 *)(lVar3 + -3) = *(undefined1 *)(param_2 + -3);
          *(undefined1 *)(lVar3 + -4) = uVar7;
          *(undefined1 *)(lVar3 + -5) = *(undefined1 *)(param_2 + -4);
          *(undefined1 *)(lVar3 + -6) = *(undefined1 *)(param_2 + -5);
          puVar1 = (undefined1 *)(param_2 + -6);
          param_2 = param_2 + -6;
          *(undefined1 *)(lVar3 + -7) = *puVar1;
          *(undefined1 *)(lVar3 + -8) = uVar7;
          lVar3 = lVar3 + -8;
          iVar6 = iVar6 + 2;
        } while (iVar6 != 0);
      }
      if ((uVar9 & 1) != 0) {
        *(undefined1 *)(lVar3 + -1) = *(undefined1 *)(param_2 + -1);
        *(undefined1 *)(lVar3 + -2) = *(undefined1 *)(param_2 + -2);
        *(undefined1 *)(lVar3 + -3) = *(undefined1 *)(param_2 + -3);
        *(undefined1 *)(lVar3 + -4) = uVar7;
      }
    }
    *(undefined2 *)((longlong)param_1 + 0x12) = 0x2004;
  }
  else {
    if ((char)param_1[4] != '\0') {
      return;
    }
    if (*(char *)((longlong)param_1 + 0x11) != '\x10') {
      if (*(char *)((longlong)param_1 + 0x11) != '\b') {
        return;
      }
      lVar3 = param_2 + uVar2;
      lVar5 = lVar3 + uVar2;
      if (param_4 < '\0') {
        *(undefined1 *)(lVar5 + -1) = uVar7;
        if (1 < uVar9) {
          uVar8 = uVar9 - 1 & 3;
          if (2 < uVar9 - 2) {
            lVar5 = uVar2 * -2;
            do {
              *(undefined1 *)(param_2 + -2 + uVar2 * 2) = *(undefined1 *)(param_2 + -1 + uVar2);
              *(undefined1 *)(param_2 + -3 + uVar2 * 2) = uVar7;
              *(undefined1 *)(param_2 + -4 + uVar2 * 2) = *(undefined1 *)(param_2 + -2 + uVar2);
              *(undefined1 *)(param_2 + -5 + uVar2 * 2) = uVar7;
              *(undefined1 *)(param_2 + -6 + uVar2 * 2) = *(undefined1 *)(param_2 + -3 + uVar2);
              *(undefined1 *)(param_2 + -7 + uVar2 * 2) = uVar7;
              *(undefined1 *)(param_2 + -8 + uVar2 * 2) = *(undefined1 *)(param_2 + -4 + uVar2);
              *(undefined1 *)(param_2 + -9 + uVar2 * 2) = uVar7;
              uVar2 = uVar2 - 4;
              lVar5 = lVar5 + 8;
            } while ((uVar9 - 1 & 3) + 1 != (int)uVar2);
            lVar5 = param_2 - lVar5;
            lVar3 = uVar2 + param_2;
          }
          if (uVar8 != 0) {
            lVar4 = 0;
            do {
              *(undefined1 *)(lVar5 + -2 + lVar4 * 2) = *(undefined1 *)(lVar3 + -1 + lVar4);
              *(undefined1 *)(lVar5 + -3 + lVar4 * 2) = uVar7;
              lVar4 = lVar4 + -1;
            } while (-uVar8 != (int)lVar4);
          }
        }
      }
      else if (uVar9 != 0) {
        if (2 < uVar9 - 1) {
          lVar5 = uVar2 * -2;
          do {
            *(undefined1 *)(param_2 + -1 + uVar2 * 2) = *(undefined1 *)(param_2 + -1 + uVar2);
            *(undefined1 *)(param_2 + -2 + uVar2 * 2) = uVar7;
            *(undefined1 *)(param_2 + -3 + uVar2 * 2) = *(undefined1 *)(param_2 + -2 + uVar2);
            *(undefined1 *)(param_2 + -4 + uVar2 * 2) = uVar7;
            *(undefined1 *)(param_2 + -5 + uVar2 * 2) = *(undefined1 *)(param_2 + -3 + uVar2);
            *(undefined1 *)(param_2 + -6 + uVar2 * 2) = uVar7;
            *(undefined1 *)(param_2 + -7 + uVar2 * 2) = *(undefined1 *)(param_2 + -4 + uVar2);
            *(undefined1 *)(param_2 + -8 + uVar2 * 2) = uVar7;
            lVar5 = lVar5 + 8;
            uVar2 = uVar2 - 4;
          } while ((uVar9 & 3) != (uint)uVar2);
          lVar5 = param_2 - lVar5;
          lVar3 = uVar2 + param_2;
        }
        if ((uVar9 & 3) != 0) {
          lVar4 = 0;
          do {
            *(undefined1 *)(lVar5 + -1 + lVar4 * 2) = *(undefined1 *)(lVar3 + -1 + lVar4);
            *(undefined1 *)(lVar5 + -2 + lVar4 * 2) = uVar7;
            lVar4 = lVar4 + -1;
          } while (-(uVar9 & 3) != (int)lVar4);
        }
      }
      *(undefined2 *)((longlong)param_1 + 0x12) = 0x1002;
      *(ulonglong *)(param_1 + 2) = (ulonglong)(uVar9 * 2);
      return;
    }
    lVar3 = param_2 + uVar2 * 2;
    lVar5 = lVar3 + uVar2 * 2;
    if (param_4 < '\0') {
      *(undefined1 *)(lVar5 + -1) = uVar10;
      *(undefined1 *)(lVar5 + -2) = uVar7;
      if (1 < uVar9) {
        if (uVar9 != 2) {
          lVar5 = uVar2 * -4;
          lVar3 = uVar2 * -2;
          do {
            *(undefined1 *)(param_2 + -3 + uVar2 * 4) = *(undefined1 *)(param_2 + -1 + uVar2 * 2);
            *(undefined1 *)(param_2 + -4 + uVar2 * 4) = *(undefined1 *)(param_2 + -2 + uVar2 * 2);
            *(undefined1 *)(param_2 + -5 + uVar2 * 4) = uVar10;
            *(undefined1 *)(param_2 + -6 + uVar2 * 4) = uVar7;
            *(undefined1 *)(param_2 + -7 + uVar2 * 4) = *(undefined1 *)(param_2 + -3 + uVar2 * 2);
            *(undefined1 *)(param_2 + -8 + uVar2 * 4) = *(undefined1 *)(param_2 + -4 + uVar2 * 2);
            *(undefined1 *)(param_2 + -9 + uVar2 * 4) = uVar10;
            *(undefined1 *)(param_2 + -10 + uVar2 * 4) = uVar7;
            uVar2 = uVar2 - 2;
            lVar5 = lVar5 + 8;
            lVar3 = lVar3 + 4;
          } while ((uVar9 + 1 & 1) + 1 != (int)uVar2);
          lVar5 = param_2 - lVar5;
          lVar3 = param_2 - lVar3;
        }
        if ((uVar9 - 1 & 1) != 0) {
          *(undefined1 *)(lVar5 + -3) = *(undefined1 *)(lVar3 + -1);
          *(undefined1 *)(lVar5 + -4) = *(undefined1 *)(lVar3 + -2);
          *(undefined1 *)(lVar5 + -5) = uVar10;
          *(undefined1 *)(lVar5 + -6) = uVar7;
        }
      }
      *(undefined2 *)((longlong)param_1 + 0x12) = 0x2002;
      uVar9 = uVar9 << 2;
LAB_1424feee6:
      *(ulonglong *)(param_1 + 2) = (ulonglong)uVar9;
      return;
    }
    if (uVar9 != 0) {
      if (uVar9 != 1) {
        lVar5 = uVar2 * -4;
        lVar3 = uVar2 * -2;
        do {
          *(undefined1 *)(param_2 + -1 + uVar2 * 4) = *(undefined1 *)(param_2 + -1 + uVar2 * 2);
          *(undefined1 *)(param_2 + -2 + uVar2 * 4) = *(undefined1 *)(param_2 + -2 + uVar2 * 2);
          *(undefined1 *)(param_2 + -3 + uVar2 * 4) = uVar10;
          *(undefined1 *)(param_2 + -4 + uVar2 * 4) = uVar7;
          *(undefined1 *)(param_2 + -5 + uVar2 * 4) = *(undefined1 *)(param_2 + -3 + uVar2 * 2);
          *(undefined1 *)(param_2 + -6 + uVar2 * 4) = *(undefined1 *)(param_2 + -4 + uVar2 * 2);
          *(undefined1 *)(param_2 + -7 + uVar2 * 4) = uVar10;
          *(undefined1 *)(param_2 + -8 + uVar2 * 4) = uVar7;
          lVar5 = lVar5 + 8;
          uVar2 = uVar2 - 2;
          lVar3 = lVar3 + 4;
        } while ((uVar9 & 1) != (uint)uVar2);
        lVar5 = param_2 - lVar5;
        lVar3 = param_2 - lVar3;
      }
      if ((uVar9 & 1) != 0) {
        *(undefined1 *)(lVar5 + -1) = *(undefined1 *)(lVar3 + -1);
        *(undefined1 *)(lVar5 + -2) = *(undefined1 *)(lVar3 + -2);
        *(undefined1 *)(lVar5 + -3) = uVar10;
        *(undefined1 *)(lVar5 + -4) = uVar7;
      }
    }
    *(undefined2 *)((longlong)param_1 + 0x12) = 0x2002;
  }
  *(ulonglong *)(param_1 + 2) = (ulonglong)(uVar9 * 4);
  return;
}



// FUNCTION 1424feef0 FUN_1424feef0 body=548 status=ok
// SIG undefined FUN_1424feef0(void)

void FUN_1424feef0(uint *param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar3 = *param_1;
  if ((char)param_1[4] == '\x04') {
    param_2 = param_2 + *(longlong *)(param_1 + 2);
    if (*(char *)((longlong)param_1 + 0x11) == '\b') {
      if (uVar3 != 0) {
        uVar6 = uVar3 & 3;
        if (2 < uVar3 - 1) {
          iVar4 = uVar6 - uVar3;
          do {
            uVar1 = *(undefined1 *)(param_2 + -1);
            *(undefined1 *)(param_2 + -1) = *(undefined1 *)(param_2 + -2);
            *(undefined1 *)(param_2 + -2) = uVar1;
            uVar1 = *(undefined1 *)(param_2 + -3);
            *(undefined1 *)(param_2 + -3) = *(undefined1 *)(param_2 + -4);
            *(undefined1 *)(param_2 + -4) = uVar1;
            uVar1 = *(undefined1 *)(param_2 + -5);
            *(undefined1 *)(param_2 + -5) = *(undefined1 *)(param_2 + -6);
            *(undefined1 *)(param_2 + -6) = uVar1;
            uVar1 = *(undefined1 *)(param_2 + -7);
            *(undefined1 *)(param_2 + -7) = *(undefined1 *)(param_2 + -8);
            *(undefined1 *)(param_2 + -8) = uVar1;
            param_2 = param_2 + -8;
            iVar4 = iVar4 + 4;
          } while (iVar4 != 0);
        }
        if (uVar6 != 0) {
          lVar5 = 0;
          do {
            uVar1 = *(undefined1 *)(param_2 + -1 + lVar5 * 2);
            *(undefined1 *)(param_2 + -1 + lVar5 * 2) = *(undefined1 *)(param_2 + -2 + lVar5 * 2);
            *(undefined1 *)(param_2 + -2 + lVar5 * 2) = uVar1;
            lVar5 = lVar5 + -1;
          } while (-uVar6 != (int)lVar5);
        }
      }
    }
    else if (uVar3 != 0) {
      if (uVar3 != 1) {
        iVar4 = (uVar3 & 1) - uVar3;
        do {
          uVar2 = *(undefined2 *)(param_2 + -2);
          *(undefined2 *)(param_2 + -2) = *(undefined2 *)(param_2 + -4);
          *(undefined2 *)(param_2 + -4) = uVar2;
          uVar2 = *(undefined2 *)(param_2 + -6);
          *(undefined2 *)(param_2 + -6) = *(undefined2 *)(param_2 + -8);
          *(undefined2 *)(param_2 + -8) = uVar2;
          param_2 = param_2 + -8;
          iVar4 = iVar4 + 2;
        } while (iVar4 != 0);
      }
      if ((uVar3 & 1) != 0) {
        uVar2 = *(undefined2 *)(param_2 + -2);
        *(undefined2 *)(param_2 + -2) = *(undefined2 *)(param_2 + -4);
        *(undefined2 *)(param_2 + -4) = uVar2;
        return;
      }
    }
  }
  else if ((char)param_1[4] == '\x06') {
    if (*(char *)((longlong)param_1 + 0x11) == '\b') {
      if (uVar3 != 0) {
        param_2 = param_2 + *(longlong *)(param_1 + 2);
        if (uVar3 != 1) {
          iVar4 = (uVar3 & 1) - uVar3;
          do {
            uVar1 = *(undefined1 *)(param_2 + -1);
            *(undefined1 *)(param_2 + -1) = *(undefined1 *)(param_2 + -2);
            *(undefined1 *)(param_2 + -2) = *(undefined1 *)(param_2 + -3);
            *(undefined1 *)(param_2 + -3) = *(undefined1 *)(param_2 + -4);
            *(undefined1 *)(param_2 + -4) = uVar1;
            uVar1 = *(undefined1 *)(param_2 + -5);
            *(undefined1 *)(param_2 + -5) = *(undefined1 *)(param_2 + -6);
            *(undefined1 *)(param_2 + -6) = *(undefined1 *)(param_2 + -7);
            *(undefined1 *)(param_2 + -7) = *(undefined1 *)(param_2 + -8);
            *(undefined1 *)(param_2 + -8) = uVar1;
            param_2 = param_2 + -8;
            iVar4 = iVar4 + 2;
          } while (iVar4 != 0);
        }
        if ((uVar3 & 1) != 0) {
          uVar1 = *(undefined1 *)(param_2 + -1);
          *(undefined1 *)(param_2 + -1) = *(undefined1 *)(param_2 + -2);
          *(undefined1 *)(param_2 + -2) = *(undefined1 *)(param_2 + -3);
          *(undefined1 *)(param_2 + -3) = *(undefined1 *)(param_2 + -4);
          *(undefined1 *)(param_2 + -4) = uVar1;
          return;
        }
      }
    }
    else if (uVar3 != 0) {
      param_2 = param_2 + *(longlong *)(param_1 + 2);
      lVar5 = 0;
      do {
        *(undefined4 *)(param_2 + -4 + lVar5 * 8) = *(undefined4 *)(param_2 + -6 + lVar5 * 8);
        *(undefined2 *)(param_2 + -6 + lVar5 * 8) = *(undefined2 *)(param_2 + -8 + lVar5 * 8);
        *(undefined2 *)(param_2 + -8 + lVar5 * 8) = *(undefined2 *)(param_2 + -2 + lVar5 * 8);
        lVar5 = lVar5 + -1;
      } while (-uVar3 != (int)lVar5);
    }
  }
  return;
}



// FUNCTION 1424ff120 png_build_grayscale_palette body=115 status=ok
// SIG undefined png_build_grayscale_palette(void)

void png_build_grayscale_palette(int param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  longlong lVar6;
  
                    /* 0x24ff120  631  png_build_grayscale_palette */
  if (((param_2 != 0) && (uVar4 = param_1 - 1, uVar4 < 8)) && ((0x8bU >> (uVar4 & 0x1f) & 1) != 0))
  {
    cVar2 = (&DAT_149970280)[(longlong)(int)uVar4 * 4];
    pcVar5 = (char *)(param_2 + 5);
    lVar6 = -(*(ulonglong *)(&DAT_149970240 + (longlong)(int)uVar4 * 8) & 0xfffffffffffffffe);
    cVar3 = '\0';
    do {
      pcVar5[-5] = cVar3;
      pcVar5[-4] = cVar3;
      pcVar5[-3] = cVar3;
      cVar1 = cVar2 + cVar3;
      pcVar5[-2] = cVar1;
      pcVar5[-1] = cVar1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 6;
      cVar3 = cVar3 + cVar2 * '\x02';
      lVar6 = lVar6 + 2;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 1424ff1a0 FUN_1424ff1a0 body=275 status=ok
// SIG undefined FUN_1424ff1a0(void)

void FUN_1424ff1a0(uint *param_1,char *param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  bVar1 = (byte)param_1[4];
  if ((bVar1 & 2) != 0) {
    uVar5 = *param_1;
    if (*(char *)((longlong)param_1 + 0x11) == '\x10') {
      if (bVar1 == 2) {
        lVar2 = 6;
      }
      else {
        if (bVar1 != 6) {
          return;
        }
        lVar2 = 8;
      }
      if (uVar5 != 0) {
        param_2 = param_2 + 5;
        do {
          iVar4 = (uint)CONCAT11(param_2[-5],param_2[-4]) + (uint)CONCAT11(param_2[-3],param_2[-2]);
          iVar3 = (uint)CONCAT11(param_2[-1],*param_2) + (uint)CONCAT11(param_2[-3],param_2[-2]);
          param_2[-5] = (char)((uint)iVar4 >> 8);
          param_2[-4] = (char)iVar4;
          param_2[-1] = (char)((uint)iVar3 >> 8);
          *param_2 = (char)iVar3;
          param_2 = param_2 + lVar2;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    else if (*(char *)((longlong)param_1 + 0x11) == '\b') {
      if (bVar1 == 2) {
        lVar2 = 3;
      }
      else {
        if (bVar1 != 6) {
          return;
        }
        lVar2 = 4;
      }
      if (uVar5 != 0) {
        if (uVar5 != 1) {
          iVar3 = (uVar5 & 1) - uVar5;
          do {
            *param_2 = *param_2 + param_2[1];
            param_2[2] = param_2[2] + param_2[1];
            param_2[lVar2] = param_2[lVar2] + param_2[lVar2 + 1];
            param_2[lVar2 + 2] = param_2[lVar2 + 2] + param_2[lVar2 + 1];
            param_2 = param_2 + lVar2 * 2;
            iVar3 = iVar3 + 2;
          } while (iVar3 != 0);
        }
        if ((uVar5 & 1) != 0) {
          *param_2 = *param_2 + param_2[1];
          param_2[2] = param_2[2] + param_2[1];
        }
      }
    }
  }
  return;
}



// FUNCTION 1424ff2c0 FUN_1424ff2c0 body=37 status=ok
// SIG undefined FUN_1424ff2c0(void)

void FUN_1424ff2c0(longlong param_1)

{
  code *pcVar1;
  
  if (*(code **)(param_1 + 0x128) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424ff2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x128))();
    return;
  }
  png_error(param_1,"Call to NULL read function");
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1424ff2f0 FUN_1424ff2f0 body=70 status=ok
// SIG undefined FUN_1424ff2f0(void)

void FUN_1424ff2f0(longlong param_1,void *param_2,size_t param_3)

{
  code *pcVar1;
  size_t sVar2;
  
  if (param_1 != 0) {
    sVar2 = fread(param_2,1,param_3,*(FILE **)(param_1 + 0x130));
    if (sVar2 != param_3) {
      png_error(param_1,"Read Error");
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  return;
}



// FUNCTION 1424ff340 png_set_read_fn body=94 status=ok
// SIG undefined png_set_read_fn(void)

void png_set_read_fn(longlong param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  
                    /* 0x24ff340  795  png_set_read_fn */
  if (param_1 != 0) {
    pcVar1 = FUN_1424ff2f0;
    if (param_3 != (code *)0x0) {
      pcVar1 = param_3;
    }
    *(undefined8 *)(param_1 + 0x130) = param_2;
    *(code **)(param_1 + 0x128) = pcVar1;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      *(undefined8 *)(param_1 + 0x120) = 0;
      png_warning(param_1,"Can\'t set both read_data_fn and write_data_fn in the same structure");
    }
    *(undefined8 *)(param_1 + 0x288) = 0;
  }
  return;
}



// FUNCTION 1424ff3a0 FUN_1424ff3a0 body=37 status=ok
// SIG undefined FUN_1424ff3a0(void)

void FUN_1424ff3a0(longlong param_1)

{
  code *pcVar1;
  
  if (*(code **)(param_1 + 0x120) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424ff3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x120))();
    return;
  }
  png_error(param_1,"Call to NULL write function");
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1424ff3d0 FUN_1424ff3d0 body=70 status=ok
// SIG undefined FUN_1424ff3d0(void)

void FUN_1424ff3d0(longlong param_1,void *param_2,size_t param_3)

{
  code *pcVar1;
  size_t sVar2;
  
  if (param_1 != 0) {
    sVar2 = fwrite(param_2,1,param_3,*(FILE **)(param_1 + 0x130));
    if (sVar2 != param_3) {
      png_error(param_1,"Write Error");
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  return;
}



// FUNCTION 1424ff420 FUN_1424ff420 body=16 status=ok
// SIG undefined FUN_1424ff420(void)

void FUN_1424ff420(longlong param_1)

{
  if (*(code **)(param_1 + 0x288) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424ff42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x288))();
    return;
  }
  return;
}



// FUNCTION 1424ff450 png_set_write_fn body=88 status=ok
// SIG undefined png_set_write_fn(void)

void png_set_write_fn(longlong param_1,undefined8 param_2,code *param_3,undefined1 *param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  
                    /* 0x24ff450  823  png_set_write_fn */
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x130) = param_2;
    pcVar1 = FUN_1424ff3d0;
    if (param_3 != (code *)0x0) {
      pcVar1 = param_3;
    }
    puVar2 = &LAB_1424ff430;
    if (param_4 != (undefined1 *)0x0) {
      puVar2 = param_4;
    }
    *(code **)(param_1 + 0x120) = pcVar1;
    *(undefined1 **)(param_1 + 0x288) = puVar2;
    if (*(longlong *)(param_1 + 0x128) != 0) {
      *(undefined8 *)(param_1 + 0x128) = 0;
      png_warning(param_1,"Can\'t set both read_data_fn and write_data_fn in the same structure");
      return;
    }
  }
  return;
}



// FUNCTION 1424ff4d0 FUN_1424ff4d0 body=38 status=ok
// SIG undefined FUN_1424ff4d0(void)

undefined8 * FUN_1424ff4d0(undefined8 *param_1,byte param_2)

{
  *param_1 = CSingletonCriticalSection::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1424ff500 FUN_1424ff500 body=371 status=ok
// SIG undefined FUN_1424ff500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1424ff500(HMODULE param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != 0) goto LAB_1424ff652;
  DAT_14c781d08 = GetProcAddress(param_1,"nvapi_QueryInterface");
  _DAT_14c781d10 = GetProcAddress(param_1,"nvapi_Direct_GetMethod");
  if (_DAT_14c781d10 == (FARPROC)0x0) {
    _DAT_14c781d10 = (FARPROC)&LAB_1424ff4c0;
  }
  if (DAT_14c781d08 == (FARPROC)0x0) {
    return -1;
  }
  DAT_14c781cf8 = (code *)(*DAT_14c781d08)(0xad298d3f);
  if (DAT_14c781d08 == (FARPROC)0x0) {
    DAT_14c781d00 = (code *)0x0;
  }
  else {
    DAT_14c781d00 = (code *)(*DAT_14c781d08)(0x150e828);
  }
  if (param_3 == 0) {
    if (DAT_14c781d00 == (code *)0x0) {
      return -1;
    }
    iVar1 = (*DAT_14c781d00)();
  }
  else {
    if (param_3 != 1) {
      return -1;
    }
    if (DAT_14c781cf8 == (code *)0x0) {
      return -3;
    }
    iVar1 = (*DAT_14c781cf8)(1);
  }
  if (iVar1 != 0) {
    return iVar1;
  }
  if (DAT_14c781d08 == (FARPROC)0x0) {
    DAT_14c781d18 = 0;
LAB_1424ff630:
    DAT_14c781d20 = 0;
  }
  else {
    DAT_14c781d18 = (*DAT_14c781d08)(0x33c7358c);
    if (DAT_14c781d08 == (FARPROC)0x0) goto LAB_1424ff630;
    DAT_14c781d20 = (*DAT_14c781d08)(0x593e8644);
  }
  if ((DAT_14c781d18 == 0) || (DAT_14c781d20 == 0)) {
    DAT_14c781d18 = 0;
    DAT_14c781d20 = 0;
  }
LAB_1424ff652:
  memset(&DAT_14c781d60,0,0x1c28);
  return 0;
}



// FUNCTION 1424ff680 FUN_1424ff680 body=189 status=ok
// SIG undefined FUN_1424ff680(void)

void FUN_1424ff680(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  undefined1 auStack_138 [32];
  wchar_t local_118 [10];
  undefined1 local_104 [236];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (DAT_14c783988 == '\0') {
    builtin_wcsncpy(local_118,L"ntdll.dll",10);
    memset(local_104,0,0xec);
    hModule = GetModuleHandleW(local_118);
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"wine_get_version");
      if (pFVar1 != (FARPROC)0x0) {
        DAT_14c783988 = '\x01';
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_138);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_138);
}



// FUNCTION 1424ff750 FUN_1424ff750 body=245 status=ok
// SIG undefined FUN_1424ff750(void)

int FUN_1424ff750(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  HMODULE hLibModule;
  longlong lVar3;
  
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    if (param_2 != 1) {
      return -3;
    }
    lVar3 = 1;
  }
  if ((&DAT_14c781d28)[param_1] == 0) {
    if ((DAT_14c783989 == '\0') || (cVar1 = FUN_1424ff680(), cVar1 == '\0')) {
      hLibModule = (HMODULE)FUN_1425aff80(L"nvapi64.dll",0x800);
      if (hLibModule != (HMODULE)0x0) {
        iVar2 = FUN_1424ff500(hLibModule,param_1,param_2);
        if (iVar2 != 0) {
          FreeLibrary(hLibModule);
          return iVar2;
        }
        (&DAT_14c781d28)[param_1] = hLibModule;
        (&DAT_14c781d48)[param_1] = 1;
        (&DAT_14c781cd8)[lVar3 * 3] = 1;
        (&DAT_14c781cd0)[lVar3 * 3] = 1;
        goto LAB_1424ff82c;
      }
      DAT_14c783989 = '\x01';
    }
    iVar2 = -2;
  }
  else {
LAB_1424ff82c:
    iVar2 = 0;
  }
  return iVar2;
}



// FUNCTION 1424ff850 FUN_1424ff850 body=135 status=ok
// SIG undefined FUN_1424ff850(void)

undefined8 FUN_1424ff850(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  cVar1 = (&DAT_14c781cf4)[param_1];
  while( true ) {
    if (cVar1 == '\0') {
      if ((&DAT_14c781d28)[param_1] == 0) {
        uVar2 = FUN_1424ff750(param_1,param_2);
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
    Sleep(100);
    uVar3 = uVar3 + 1;
    if (9 < uVar3) break;
    cVar1 = (&DAT_14c781cf4)[param_1];
  }
  return 0xffffffff;
}



// FUNCTION 1424ff8e0 FUN_1424ff8e0 body=195 status=ok
// SIG undefined FUN_1424ff8e0(void)

undefined1 * FUN_1424ff8e0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 local_res18 [2];
  
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  puVar3 = (undefined1 *)FUN_1424ff850(0,0);
  if ((int)puVar3 == 0) {
    if ((DAT_14c781dc0 == (code *)0x0) &&
       ((DAT_14c781d08 == (code *)0x0 ||
        (DAT_14c781dc0 = (code *)(*DAT_14c781d08)(0x2926aaad), DAT_14c781dc0 == (code *)0x0)))) {
      puVar3 = &DAT_fffffffd;
    }
    else {
      pcVar1 = DAT_14c781dc0;
      local_res18[0] = 0;
      if (DAT_14c781d18 != (code *)0x0) {
        (*DAT_14c781d18)(0x2926aaad,local_res18);
      }
      uVar2 = (*pcVar1)(param_1,param_2);
      puVar3 = (undefined1 *)(ulonglong)uVar2;
      if (DAT_14c781d20 != (code *)0x0) {
        (*DAT_14c781d20)(0x2926aaad,local_res18[0],puVar3);
      }
    }
  }
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  return puVar3;
}



// FUNCTION 1424ff9b0 FUN_1424ff9b0 body=195 status=ok
// SIG undefined FUN_1424ff9b0(void)

undefined1 * FUN_1424ff9b0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 local_res18 [2];
  
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  puVar3 = (undefined1 *)FUN_1424ff850(0,0);
  if ((int)puVar3 == 0) {
    if ((DAT_14c781e68 == (code *)0x0) &&
       ((DAT_14c781d08 == (code *)0x0 ||
        (DAT_14c781e68 = (code *)(*DAT_14c781d08)(0xe5ac921f), DAT_14c781e68 == (code *)0x0)))) {
      puVar3 = &DAT_fffffffd;
    }
    else {
      pcVar1 = DAT_14c781e68;
      local_res18[0] = 0;
      if (DAT_14c781d18 != (code *)0x0) {
        (*DAT_14c781d18)(0xe5ac921f,local_res18);
      }
      uVar2 = (*pcVar1)(param_1,param_2);
      puVar3 = (undefined1 *)(ulonglong)uVar2;
      if (DAT_14c781d20 != (code *)0x0) {
        (*DAT_14c781d20)(0xe5ac921f,local_res18[0],puVar3);
      }
    }
  }
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  return puVar3;
}



// FUNCTION 1424ffa80 FUN_1424ffa80 body=229 status=ok
// SIG undefined FUN_1424ffa80(void)

undefined1 *
FUN_1424ffa80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 local_18 [2];
  
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  puVar3 = (undefined1 *)FUN_1424ff850(0,0);
  if ((int)puVar3 == 0) {
    if ((DAT_14c781f28 == (code *)0x0) &&
       ((DAT_14c781d08 == (code *)0x0 ||
        (DAT_14c781f28 = (code *)(*DAT_14c781d08)(0x78dba2), DAT_14c781f28 == (code *)0x0)))) {
      puVar3 = &DAT_fffffffd;
    }
    else {
      pcVar1 = DAT_14c781f28;
      local_18[0] = 0;
      if (DAT_14c781d18 != (code *)0x0) {
        (*DAT_14c781d18)(0x78dba2,local_18);
      }
      uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      puVar3 = (undefined1 *)(ulonglong)uVar2;
      if (DAT_14c781d20 != (code *)0x0) {
        (*DAT_14c781d20)(0x78dba2,local_18[0],puVar3);
      }
    }
  }
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  return puVar3;
}



// FUNCTION 1424ffb70 FUN_1424ffb70 body=195 status=ok
// SIG undefined FUN_1424ffb70(void)

undefined1 * FUN_1424ffb70(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 local_res18 [2];
  
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  puVar3 = (undefined1 *)FUN_1424ff850(0,0);
  if ((int)puVar3 == 0) {
    if ((DAT_14c781f88 == (code *)0x0) &&
       ((DAT_14c781d08 == (code *)0x0 ||
        (DAT_14c781f88 = (code *)(*DAT_14c781d08)(0xceee8e9f), DAT_14c781f88 == (code *)0x0)))) {
      puVar3 = &DAT_fffffffd;
    }
    else {
      pcVar1 = DAT_14c781f88;
      local_res18[0] = 0;
      if (DAT_14c781d18 != (code *)0x0) {
        (*DAT_14c781d18)(0xceee8e9f,local_res18);
      }
      uVar2 = (*pcVar1)(param_1,param_2);
      puVar3 = (undefined1 *)(ulonglong)uVar2;
      if (DAT_14c781d20 != (code *)0x0) {
        (*DAT_14c781d20)(0xceee8e9f,local_res18[0],puVar3);
      }
    }
  }
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  return puVar3;
}



// FUNCTION 1424ffc40 FUN_1424ffc40 body=195 status=ok
// SIG undefined FUN_1424ffc40(void)

undefined1 * FUN_1424ffc40(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 local_res18 [2];
  
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  puVar3 = (undefined1 *)FUN_1424ff850(0,0);
  if ((int)puVar3 == 0) {
    if ((DAT_14c7822c8 == (code *)0x0) &&
       ((DAT_14c781d08 == (code *)0x0 ||
        (DAT_14c7822c8 = (code *)(*DAT_14c781d08)(0x6ff81213), DAT_14c7822c8 == (code *)0x0)))) {
      puVar3 = &DAT_fffffffd;
    }
    else {
      pcVar1 = DAT_14c7822c8;
      local_res18[0] = 0;
      if (DAT_14c781d18 != (code *)0x0) {
        (*DAT_14c781d18)(0x6ff81213,local_res18);
      }
      uVar2 = (*pcVar1)(param_1,param_2);
      puVar3 = (undefined1 *)(ulonglong)uVar2;
      if (DAT_14c781d20 != (code *)0x0) {
        (*DAT_14c781d20)(0x6ff81213,local_res18[0],puVar3);
      }
    }
  }
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  return puVar3;
}



// FUNCTION 1424ffd10 FUN_1424ffd10 body=193 status=ok
// SIG undefined FUN_1424ffd10(void)

undefined1 * FUN_1424ffd10(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 local_res18 [2];
  
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  puVar3 = (undefined1 *)FUN_1424ff850(0,0);
  if ((int)puVar3 == 0) {
    if ((DAT_14c782460 == (code *)0x0) &&
       ((DAT_14c781d08 == (code *)0x0 ||
        (DAT_14c782460 = (code *)(*DAT_14c781d08)(0x9abdd40d), DAT_14c782460 == (code *)0x0)))) {
      puVar3 = &DAT_fffffffd;
    }
    else {
      pcVar1 = DAT_14c782460;
      local_res18[0] = 0;
      if (DAT_14c781d18 != (code *)0x0) {
        (*DAT_14c781d18)(0x9abdd40d,local_res18);
      }
      uVar2 = (*pcVar1)(param_1,param_2);
      puVar3 = (undefined1 *)(ulonglong)uVar2;
      if (DAT_14c781d20 != (code *)0x0) {
        (*DAT_14c781d20)(0x9abdd40d,local_res18[0],puVar3);
      }
    }
  }
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  return puVar3;
}



// FUNCTION 1424ffde0 FUN_1424ffde0 body=195 status=ok
// SIG undefined FUN_1424ffde0(void)

undefined1 * FUN_1424ffde0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 local_res18 [2];
  
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  puVar3 = (undefined1 *)FUN_1424ff850(0,0);
  if ((int)puVar3 == 0) {
    if ((DAT_14c782488 == (code *)0x0) &&
       ((DAT_14c781d08 == (code *)0x0 ||
        (DAT_14c782488 = (code *)(*DAT_14c781d08)(0x22a78b05), DAT_14c782488 == (code *)0x0)))) {
      puVar3 = &DAT_fffffffd;
    }
    else {
      pcVar1 = DAT_14c782488;
      local_res18[0] = 0;
      if (DAT_14c781d18 != (code *)0x0) {
        (*DAT_14c781d18)(0x22a78b05,local_res18);
      }
      uVar2 = (*pcVar1)(param_1,param_2);
      puVar3 = (undefined1 *)(ulonglong)uVar2;
      if (DAT_14c781d20 != (code *)0x0) {
        (*DAT_14c781d20)(0x22a78b05,local_res18[0],puVar3);
      }
    }
  }
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  return puVar3;
}



// FUNCTION 1424ffeb0 FUN_1424ffeb0 body=193 status=ok
// SIG undefined FUN_1424ffeb0(void)

undefined1 * FUN_1424ffeb0(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 local_res18 [2];
  
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  puVar3 = (undefined1 *)FUN_1424ff850(0,0);
  if ((int)puVar3 == 0) {
    if ((DAT_14c782510 == (code *)0x0) &&
       ((DAT_14c781d08 == (code *)0x0 ||
        (DAT_14c782510 = (code *)(*DAT_14c781d08)(0x84f2a8df), DAT_14c782510 == (code *)0x0)))) {
      puVar3 = &DAT_fffffffd;
    }
    else {
      pcVar1 = DAT_14c782510;
      local_res18[0] = 0;
      if (DAT_14c781d18 != (code *)0x0) {
        (*DAT_14c781d18)(0x84f2a8df,local_res18);
      }
      uVar2 = (*pcVar1)(param_1,param_2);
      puVar3 = (undefined1 *)(ulonglong)uVar2;
      if (DAT_14c781d20 != (code *)0x0) {
        (*DAT_14c781d20)(0x84f2a8df,local_res18[0],puVar3);
      }
    }
  }
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  return puVar3;
}



// FUNCTION 1424fff80 FUN_1424fff80 body=193 status=ok
// SIG undefined FUN_1424fff80(void)

undefined1 * FUN_1424fff80(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 local_res18 [2];
  
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  puVar3 = (undefined1 *)FUN_1424ff850(0,0);
  if ((int)puVar3 == 0) {
    if ((DAT_14c782518 == (code *)0x0) &&
       ((DAT_14c781d08 == (code *)0x0 ||
        (DAT_14c782518 = (code *)(*DAT_14c781d08)(0x351da224), DAT_14c782518 == (code *)0x0)))) {
      puVar3 = &DAT_fffffffd;
    }
    else {
      pcVar1 = DAT_14c782518;
      local_res18[0] = 0;
      if (DAT_14c781d18 != (code *)0x0) {
        (*DAT_14c781d18)(0x351da224,local_res18);
      }
      uVar2 = (*pcVar1)(param_1,param_2);
      puVar3 = (undefined1 *)(ulonglong)uVar2;
      if (DAT_14c781d20 != (code *)0x0) {
        (*DAT_14c781d20)(0x351da224,local_res18[0],puVar3);
      }
    }
  }
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  return puVar3;
}



// FUNCTION 142500050 FUN_142500050 body=193 status=ok
// SIG undefined FUN_142500050(void)

undefined1 * FUN_142500050(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 local_res18 [2];
  
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  puVar3 = (undefined1 *)FUN_1424ff850(0,0);
  if ((int)puVar3 == 0) {
    if ((DAT_14c782530 == (code *)0x0) &&
       ((DAT_14c781d08 == (code *)0x0 ||
        (DAT_14c782530 = (code *)(*DAT_14c781d08)(0x905eb63b), DAT_14c782530 == (code *)0x0)))) {
      puVar3 = &DAT_fffffffd;
    }
    else {
      pcVar1 = DAT_14c782530;
      local_res18[0] = 0;
      if (DAT_14c781d18 != (code *)0x0) {
        (*DAT_14c781d18)(0x905eb63b,local_res18);
      }
      uVar2 = (*pcVar1)(param_1,param_2);
      puVar3 = (undefined1 *)(ulonglong)uVar2;
      if (DAT_14c781d20 != (code *)0x0) {
        (*DAT_14c781d20)(0x905eb63b,local_res18[0],puVar3);
      }
    }
  }
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  return puVar3;
}



// FUNCTION 142500120 FUN_142500120 body=193 status=ok
// SIG undefined FUN_142500120(void)

undefined1 * FUN_142500120(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 local_res18 [2];
  
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  puVar3 = (undefined1 *)FUN_1424ff850(0,0);
  if ((int)puVar3 == 0) {
    if ((DAT_14c782540 == (code *)0x0) &&
       ((DAT_14c781d08 == (code *)0x0 ||
        (DAT_14c782540 = (code *)(*DAT_14c781d08)(0x98e7661a), DAT_14c782540 == (code *)0x0)))) {
      puVar3 = &DAT_fffffffd;
    }
    else {
      pcVar1 = DAT_14c782540;
      local_res18[0] = 0;
      if (DAT_14c781d18 != (code *)0x0) {
        (*DAT_14c781d18)(0x98e7661a,local_res18);
      }
      uVar2 = (*pcVar1)(param_1,param_2);
      puVar3 = (undefined1 *)(ulonglong)uVar2;
      if (DAT_14c781d20 != (code *)0x0) {
        (*DAT_14c781d20)(0x98e7661a,local_res18[0],puVar3);
      }
    }
  }
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  return puVar3;
}



// FUNCTION 1425001f0 FUN_1425001f0 body=193 status=ok
// SIG undefined FUN_1425001f0(void)

undefined1 * FUN_1425001f0(undefined4 param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 local_res18 [2];
  
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  puVar3 = (undefined1 *)FUN_1424ff850(0,0);
  if ((int)puVar3 == 0) {
    if ((DAT_14c782548 == (code *)0x0) &&
       ((DAT_14c781d08 == (code *)0x0 ||
        (DAT_14c782548 = (code *)(*DAT_14c781d08)(0x81fed88d), DAT_14c782548 == (code *)0x0)))) {
      puVar3 = &DAT_fffffffd;
    }
    else {
      pcVar1 = DAT_14c782548;
      local_res18[0] = 0;
      if (DAT_14c781d18 != (code *)0x0) {
        (*DAT_14c781d18)(0x81fed88d,local_res18);
      }
      uVar2 = (*pcVar1)(param_1,param_2);
      puVar3 = (undefined1 *)(ulonglong)uVar2;
      if (DAT_14c781d20 != (code *)0x0) {
        (*DAT_14c781d20)(0x81fed88d,local_res18[0],puVar3);
      }
    }
  }
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  return puVar3;
}



// FUNCTION 1425002c0 FUN_1425002c0 body=191 status=ok
// SIG undefined FUN_1425002c0(void)

undefined1 * FUN_1425002c0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 local_res18 [2];
  
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  puVar3 = (undefined1 *)FUN_1424ff850(0,0);
  if ((int)puVar3 == 0) {
    if ((DAT_14c782550 == (code *)0x0) &&
       ((DAT_14c781d08 == (code *)0x0 ||
        (DAT_14c782550 = (code *)(*DAT_14c781d08)(0xdd6da362), DAT_14c782550 == (code *)0x0)))) {
      puVar3 = &DAT_fffffffd;
    }
    else {
      pcVar1 = DAT_14c782550;
      local_res18[0] = 0;
      if (DAT_14c781d18 != (code *)0x0) {
        (*DAT_14c781d18)(0xdd6da362,local_res18);
      }
      uVar2 = (*pcVar1)(param_1,param_2);
      puVar3 = (undefined1 *)(ulonglong)uVar2;
      if (DAT_14c781d20 != (code *)0x0) {
        (*DAT_14c781d20)(0xdd6da362,local_res18[0],puVar3);
      }
    }
  }
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  return puVar3;
}



// FUNCTION 142500380 FUN_142500380 body=195 status=ok
// SIG undefined FUN_142500380(void)

undefined1 * FUN_142500380(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 local_res18 [2];
  
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  puVar3 = (undefined1 *)FUN_1424ff850(0,0);
  if ((int)puVar3 == 0) {
    if ((DAT_14c782758 == (code *)0x0) &&
       ((DAT_14c781d08 == (code *)0x0 ||
        (DAT_14c782758 = (code *)(*DAT_14c781d08)(0xae457190), DAT_14c782758 == (code *)0x0)))) {
      puVar3 = &DAT_fffffffd;
    }
    else {
      pcVar1 = DAT_14c782758;
      local_res18[0] = 0;
      if (DAT_14c781d18 != (code *)0x0) {
        (*DAT_14c781d18)(0xae457190,local_res18);
      }
      uVar2 = (*pcVar1)(param_1,param_2);
      puVar3 = (undefined1 *)(ulonglong)uVar2;
      if (DAT_14c781d20 != (code *)0x0) {
        (*DAT_14c781d20)(0xae457190,local_res18[0],puVar3);
      }
    }
  }
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  return puVar3;
}



// FUNCTION 142500450 FUN_142500450 body=225 status=ok
// SIG undefined FUN_142500450(void)

undefined1 *
FUN_142500450(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 local_38 [6];
  
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  puVar3 = (undefined1 *)FUN_1424ff850(0,0);
  if ((int)puVar3 == 0) {
    if ((DAT_14c782cd0 == (code *)0x0) &&
       ((DAT_14c781d08 == (code *)0x0 ||
        (DAT_14c782cd0 = (code *)(*DAT_14c781d08)(0x7aaf7a04), DAT_14c782cd0 == (code *)0x0)))) {
      puVar3 = &DAT_fffffffd;
    }
    else {
      pcVar1 = DAT_14c782cd0;
      local_38[0] = 0;
      if (DAT_14c781d18 != (code *)0x0) {
        (*DAT_14c781d18)(0x7aaf7a04,local_38);
      }
      uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4);
      puVar3 = (undefined1 *)(ulonglong)uVar2;
      if (DAT_14c781d20 != (code *)0x0) {
        (*DAT_14c781d20)(0x7aaf7a04,local_38[0],puVar3);
      }
    }
  }
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  return puVar3;
}



// FUNCTION 142500540 FUN_142500540 body=209 status=ok
// SIG undefined FUN_142500540(void)

undefined1 * FUN_142500540(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 local_res20;
  
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  puVar3 = (undefined1 *)FUN_1424ff850(0,0);
  if ((int)puVar3 == 0) {
    if ((DAT_14c782cd8 == (code *)0x0) &&
       ((DAT_14c781d08 == (code *)0x0 ||
        (DAT_14c782cd8 = (code *)(*DAT_14c781d08)(0x5f68da40), DAT_14c782cd8 == (code *)0x0)))) {
      puVar3 = &DAT_fffffffd;
    }
    else {
      pcVar1 = DAT_14c782cd8;
      local_res20 = 0;
      if (DAT_14c781d18 != (code *)0x0) {
        (*DAT_14c781d18)(0x5f68da40,&local_res20);
      }
      uVar2 = (*pcVar1)(param_1,param_2,param_3);
      puVar3 = (undefined1 *)(ulonglong)uVar2;
      if (DAT_14c781d20 != (code *)0x0) {
        (*DAT_14c781d20)(0x5f68da40,local_res20,puVar3);
      }
    }
  }
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  return puVar3;
}



// FUNCTION 142500620 FUN_142500620 body=193 status=ok
// SIG undefined FUN_142500620(void)

undefined1 * FUN_142500620(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 local_res18 [2];
  
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  puVar3 = (undefined1 *)FUN_1424ff850(0,0);
  if ((int)puVar3 == 0) {
    if ((DAT_14c782ce0 == (code *)0x0) &&
       ((DAT_14c781d08 == (code *)0x0 ||
        (DAT_14c782ce0 = (code *)(*DAT_14c781d08)(0x8e90bb9f), DAT_14c782ce0 == (code *)0x0)))) {
      puVar3 = &DAT_fffffffd;
    }
    else {
      pcVar1 = DAT_14c782ce0;
      local_res18[0] = 0;
      if (DAT_14c781d18 != (code *)0x0) {
        (*DAT_14c781d18)(0x8e90bb9f,local_res18);
      }
      uVar2 = (*pcVar1)(param_1,param_2);
      puVar3 = (undefined1 *)(ulonglong)uVar2;
      if (DAT_14c781d20 != (code *)0x0) {
        (*DAT_14c781d20)(0x8e90bb9f,local_res18[0],puVar3);
      }
    }
  }
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  return puVar3;
}



// FUNCTION 1425006f0 FUN_1425006f0 body=209 status=ok
// SIG undefined FUN_1425006f0(void)

undefined1 * FUN_1425006f0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 local_res20;
  
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  puVar3 = (undefined1 *)FUN_1424ff850(0,0);
  if ((int)puVar3 == 0) {
    if ((DAT_14c782cf0 == (code *)0x0) &&
       ((DAT_14c781d08 == (code *)0x0 ||
        (DAT_14c782cf0 = (code *)(*DAT_14c781d08)(0x43d867c0), DAT_14c782cf0 == (code *)0x0)))) {
      puVar3 = &DAT_fffffffd;
    }
    else {
      pcVar1 = DAT_14c782cf0;
      local_res20 = 0;
      if (DAT_14c781d18 != (code *)0x0) {
        (*DAT_14c781d18)(0x43d867c0,&local_res20);
      }
      uVar2 = (*pcVar1)(param_1,param_2,param_3);
      puVar3 = (undefined1 *)(ulonglong)uVar2;
      if (DAT_14c781d20 != (code *)0x0) {
        (*DAT_14c781d20)(0x43d867c0,local_res20,puVar3);
      }
    }
  }
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  return puVar3;
}



// FUNCTION 1425007d0 FUN_1425007d0 body=197 status=ok
// SIG undefined FUN_1425007d0(void)

undefined1 * FUN_1425007d0(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 local_res10 [3];
  
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  puVar3 = (undefined1 *)FUN_1424ff850(0,0);
  if ((int)puVar3 == 0) {
    if ((DAT_14c782d08 == (code *)0x0) &&
       ((DAT_14c781d08 == (code *)0x0 ||
        (DAT_14c782d08 = (code *)(*DAT_14c781d08)(0x65b93ca8), DAT_14c782d08 == (code *)0x0)))) {
      LOCK();
      DAT_14c781cd4 = DAT_14c781cd4 + -1;
      UNLOCK();
      return &DAT_fffffffd;
    }
    pcVar1 = DAT_14c782d08;
    local_res10[0] = 0;
    if (DAT_14c781d18 != (code *)0x0) {
      (*DAT_14c781d18)(0x65b93ca8,local_res10);
    }
    uVar2 = (*pcVar1)(param_1);
    puVar3 = (undefined1 *)(ulonglong)uVar2;
    if (DAT_14c781d20 != (code *)0x0) {
      (*DAT_14c781d20)(0x65b93ca8,local_res10[0],puVar3);
    }
  }
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  return puVar3;
}



// FUNCTION 1425008a0 FUN_1425008a0 body=197 status=ok
// SIG undefined FUN_1425008a0(void)

undefined1 * FUN_1425008a0(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 local_res10 [3];
  
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  puVar3 = (undefined1 *)FUN_1424ff850(0,0);
  if ((int)puVar3 == 0) {
    if ((DAT_14c782d10 == (code *)0x0) &&
       ((DAT_14c781d08 == (code *)0x0 ||
        (DAT_14c782d10 = (code *)(*DAT_14c781d08)(0x2216a357), DAT_14c782d10 == (code *)0x0)))) {
      LOCK();
      DAT_14c781cd4 = DAT_14c781cd4 + -1;
      UNLOCK();
      return &DAT_fffffffd;
    }
    pcVar1 = DAT_14c782d10;
    local_res10[0] = 0;
    if (DAT_14c781d18 != (code *)0x0) {
      (*DAT_14c781d18)(0x2216a357,local_res10);
    }
    uVar2 = (*pcVar1)(param_1);
    puVar3 = (undefined1 *)(ulonglong)uVar2;
    if (DAT_14c781d20 != (code *)0x0) {
      (*DAT_14c781d20)(0x2216a357,local_res10[0],puVar3);
    }
  }
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  return puVar3;
}



// FUNCTION 142500970 FUN_142500970 body=209 status=ok
// SIG undefined FUN_142500970(void)

undefined1 * FUN_142500970(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 local_res20;
  
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + 1;
  UNLOCK();
  puVar3 = (undefined1 *)FUN_1424ff850(0,0);
  if ((int)puVar3 == 0) {
    if ((DAT_14c782fa8 == (code *)0x0) &&
       ((DAT_14c781d08 == (code *)0x0 ||
        (DAT_14c782fa8 = (code *)(*DAT_14c781d08)(0x3dfacec8), DAT_14c782fa8 == (code *)0x0)))) {
      puVar3 = &DAT_fffffffd;
    }
    else {
      pcVar1 = DAT_14c782fa8;
      local_res20 = 0;
      if (DAT_14c781d18 != (code *)0x0) {
        (*DAT_14c781d18)(0x3dfacec8,&local_res20);
      }
      uVar2 = (*pcVar1)(param_1,param_2,param_3);
      puVar3 = (undefined1 *)(ulonglong)uVar2;
      if (DAT_14c781d20 != (code *)0x0) {
        (*DAT_14c781d20)(0x3dfacec8,local_res20,puVar3);
      }
    }
  }
  LOCK();
  DAT_14c781cd4 = DAT_14c781cd4 + -1;
  UNLOCK();
  return puVar3;
}



// FUNCTION 142500a50 FUN_142500a50 body=639 status=ok
// SIG undefined FUN_142500a50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_142500a50(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  
  if ((DAT_14c7839c0 & 1) == 0) {
    DAT_14c7839c0 = DAT_14c7839c0 | 1;
    _DAT_14c783990 = CSingletonCriticalSection::vftable;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c783998);
    atexit((_func_5014 *)&LAB_149926d20);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c783998);
  pcVar5 = (code *)0x0;
  DAT_14c781cf4 = 1;
  if (((DAT_14c781d28 == (HMODULE)0x0) || (DAT_14c781d08 == (code *)0x0)) ||
     ((DAT_14c781cd8 != 1 && (DAT_14c781cd8 != 2)))) {
    DAT_14c781cf4 = 0;
    pcVar5 = (code *)0xfffffffc;
  }
  else {
    pcVar3 = (code *)(*DAT_14c781d08)(0xd7c61344);
    pcVar4 = (code *)0x0;
    if (pcVar3 == (code *)0x0) {
      pcVar4 = (code *)(*DAT_14c781d08)(0xd22bdd7e);
      if (pcVar4 == (code *)0x0) {
        DAT_14c781cf4 = 0;
        pcVar5 = (code *)&DAT_fffffffd;
        goto LAB_142500c77;
      }
    }
    iVar2 = DAT_14c781d48;
    if (DAT_14c781cd0 == 0) {
      pcVar5 = (code *)0xfffffffc;
      DAT_14c781d48 = iVar2;
    }
    else {
      DAT_14c781d48 = DAT_14c781d48 + -1;
      iVar1 = DAT_14c781cd0 + -1;
      if (iVar1 == 0) {
        LOCK();
        UNLOCK();
        if (DAT_14c781cd4 == 0) {
          if (pcVar3 == (code *)0x0) {
            DAT_14c781cd0 = iVar1;
            iVar2 = (*pcVar4)();
            if (iVar2 != 0) {
              DAT_14c781cd0 = DAT_14c781cd0 + 1;
              DAT_14c781d48 = DAT_14c781d48 + 1;
              DAT_14c781cf4 = 0;
              pcVar5 = (code *)&DAT_ffffffff;
              goto LAB_142500c77;
            }
          }
          else {
            DAT_14c781cd0 = iVar1;
            iVar2 = (*pcVar3)(0);
            if (iVar2 != 0) {
              DAT_14c781cd0 = DAT_14c781cd0 + 1;
              DAT_14c781d48 = DAT_14c781d48 + 1;
              DAT_14c781cf4 = 0;
              pcVar5 = (code *)&DAT_ffffffff;
              goto LAB_142500c77;
            }
          }
          DAT_14c781cd8 = 0;
          if (DAT_14c781d48 == 0) {
            DAT_14c781d08 = (code *)0x0;
            DAT_14c781d00 = 0;
            DAT_14c781cf8 = 0;
            FreeLibrary(DAT_14c781d28);
            DAT_14c781d28 = (HMODULE)0x0;
            DAT_14c781d18 = 0;
            DAT_14c781d20 = 0;
            DAT_14c781d48 = 0;
            memset(&DAT_14c781d60,0,0x1c28);
            DAT_14c781cf4 = 0;
            DAT_14c781cd0 = 0;
            DAT_14c781cd4 = 0;
            DAT_14c781cd8 = 0;
            DAT_14c781cdc = 0;
            _DAT_14c781ce0 = 0;
            DAT_14c781ce4 = 0;
            _DAT_14c781ce8 = 0;
            _DAT_14c781cec = 0;
            _DAT_14c781cf0 = 0;
          }
          else {
            DAT_14c781cf4 = 0;
          }
        }
        else {
          DAT_14c781cf4 = 0;
          pcVar5 = (code *)0xffffff2f;
          DAT_14c781d48 = iVar2;
        }
      }
      else {
        DAT_14c781cf4 = 0;
        pcVar5 = (code *)0x0;
        DAT_14c781cd0 = iVar1;
      }
    }
  }
LAB_142500c77:
  if ((DAT_14c7839c0 & 1) == 0) {
    DAT_14c7839c0 = DAT_14c7839c0 | 1;
    _DAT_14c783990 = CSingletonCriticalSection::vftable;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c783998);
    atexit((_func_5014 *)&LAB_149926d20);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c783998);
  return pcVar5;
}



// FUNCTION 142500cd0 FUN_142500cd0 body=23 status=ok
// SIG undefined FUN_142500cd0(void)

ulonglong FUN_142500cd0(int param_1,int param_2)

{
  if (-1 < param_1) {
    return (longlong)param_1 / (longlong)param_2 & 0xffffffff;
  }
  return (ulonglong)((param_1 + 1) / param_2 - 1);
}



// FUNCTION 142500cf0 FUN_142500cf0 body=68 status=ok
// SIG undefined FUN_142500cf0(void)

ulonglong FUN_142500cf0(ulonglong param_1,ulonglong param_2)

{
  if ((longlong)param_1 < 0) {
    param_1 = param_1 + 1;
    if ((param_1 | param_2) >> 0x20 != 0) {
      return (longlong)param_1 / (longlong)param_2 - 1;
    }
    return (param_1 & 0xffffffff) / (param_2 & 0xffffffff) - 1;
  }
  if ((param_1 | param_2) >> 0x20 != 0) {
    return (longlong)param_1 / (longlong)param_2;
  }
  return (param_1 & 0xffffffff) / (param_2 & 0xffffffff);
}



// FUNCTION 142500d40 FUN_142500d40 body=72 status=ok
// SIG undefined FUN_142500d40(void)

int FUN_142500d40(double param_1,int param_2,int *param_3)

{
  double dVar1;
  
  dVar1 = (double)FUN_1424d97b0(param_1 / (double)param_2);
  *param_3 = (int)(param_1 - (double)param_2 * dVar1);
  return (int)dVar1;
}



// FUNCTION 142500d90 FUN_142500d90 body=137 status=ok
// SIG undefined FUN_142500d90(void)

double FUN_142500d90(double param_1,double param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)FUN_1424d97b0(param_1 / param_2);
  dVar2 = param_1 - dVar1 * param_2;
  if ((dVar2 < 0.0) || (dVar3 = dVar1, param_2 <= dVar2)) {
    dVar3 = *(double *)(&DAT_149931170 + (ulonglong)(dVar2 < 0.0) * 8) + dVar1;
    dVar2 = (double)(~-(ulonglong)(dVar1 == dVar3) & (ulonglong)(param_1 - param_2 * dVar3));
  }
  *param_3 = dVar2;
  return dVar3;
}



// FUNCTION 142500e20 FUN_142500e20 body=229 status=ok
// SIG undefined FUN_142500e20(void)

double FUN_142500e20(uint param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = param_1 - 1;
  if ((int)param_1 < 1) {
    uVar3 = -param_1;
    iVar1 = uVar2 * 0x16d + (~(uVar3 / 400) - (uVar3 >> 2)) + 0x1a444e;
    uVar2 = ~(uVar3 / 100);
  }
  else {
    iVar1 = uVar2 / 400 + (uVar2 >> 2) + uVar2 * 0x16d + 0x1a444f;
    uVar2 = uVar2 / 100;
  }
  if (((param_1 & 3) != 0) ||
     ((iVar4 = 0xc, (param_1 * -0x3d70a3d7 + 0x51eb850 >> 2 | param_1 * 0x40000000) < 0x28f5c29 &&
      (param_1 != ((int)param_1 / 400) * 400)))) {
    iVar4 = 0;
  }
  return (double)(int)(((param_3 + iVar1) - uVar2) +
                       (int)*(short *)(&DAT_1499d7ea0 + (longlong)(iVar4 + param_2) * 2) + 2) +
         -2440588.0;
}



// FUNCTION 142500f10 FUN_142500f10 body=542 status=ok
// SIG undefined FUN_142500f10(void)

void FUN_142500f10(double param_1,uint *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  param_1 = param_1 + 719162.0;
  dVar7 = (double)FUN_1424d97b0(param_1 / 146097.0);
  dVar11 = param_1 - dVar7 * 146097.0;
  dVar10 = (double)(int)dVar11;
  *param_6 = (int)dVar11;
  dVar8 = (double)FUN_1424d97b0(dVar10 / 36524.0);
  dVar10 = dVar10 - dVar8 * 36524.0;
  dVar11 = (double)(int)dVar10;
  *param_6 = (int)dVar10;
  dVar9 = (double)FUN_1424d97b0(dVar11 / 1461.0);
  dVar11 = dVar11 - dVar9 * 1461.0;
  dVar10 = (double)(int)dVar11;
  *param_6 = (int)dVar11;
  dVar11 = (double)FUN_1424d97b0(dVar10 / 365.0);
  *param_6 = (int)(dVar10 - dVar11 * 365.0);
  uVar1 = (int)dVar8 * 100 + (int)dVar7 * 400 + (int)dVar9 * 4 + (int)dVar11;
  *param_2 = uVar1;
  if (((int)dVar8 == 4) || ((int)dVar11 == 4)) {
    *param_6 = 0x16d;
    uVar1 = *param_2;
  }
  else {
    uVar1 = uVar1 + 1;
    *param_2 = uVar1;
  }
  bVar6 = true;
  if ((uVar1 & 3) == 0) {
    uVar2 = uVar1 * -0x3d70a3d7 + 0x51eb850;
    if ((uVar2 >> 2 | uVar1 * 0x40000000) < 0x28f5c29) {
      bVar6 = 0xa3d70a < (uVar2 >> 4 | uVar1 * -0x70000000);
    }
    else {
      bVar6 = false;
    }
  }
  dVar10 = fmod(param_1 + 1.0,7.0);
  iVar3 = (int)dVar10;
  iVar4 = iVar3 + 8;
  if (-1 < iVar3) {
    iVar4 = iVar3 + 1;
  }
  *param_5 = iVar4;
  iVar4 = 0;
  if ((int)(0x3c - (uint)bVar6) <= *param_6) {
    iVar4 = bVar6 + 1;
  }
  iVar4 = (iVar4 + *param_6) * 0xc + 6;
  iVar3 = iVar4 >> 0x1f;
  iVar4 = iVar4 / 0x16f + iVar3;
  iVar5 = iVar4 - iVar3;
  *param_3 = iVar5;
  iVar4 = (iVar4 + 0xc) - iVar3;
  if (bVar6 != false) {
    iVar4 = iVar5;
  }
  *param_4 = (*param_6 - (int)*(short *)(&DAT_1499d7ea0 + (longlong)iVar4 * 2)) + 1;
  *param_6 = *param_6 + 1;
  return;
}



// FUNCTION 142501130 FUN_142501130 body=187 status=ok
// SIG undefined FUN_142501130(void)

void FUN_142501130(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)FUN_1424d97b0(param_1 / 86400000.0);
  dVar2 = param_1 - dVar1 * 86400000.0;
  if ((dVar2 < 0.0) || (dVar3 = dVar1, 86400000.0 <= dVar2)) {
    dVar3 = *(double *)(&DAT_149931170 + (ulonglong)(dVar2 < 0.0) * 8) + dVar1;
    dVar2 = (double)(~-(ulonglong)(dVar1 == dVar3) & (ulonglong)(param_1 + dVar3 * -86400000.0));
  }
  *param_7 = (int)dVar2;
  FUN_142500f10(dVar3,param_2,param_3,param_4);
  return;
}



// FUNCTION 1425011f0 FUN_1425011f0 body=84 status=ok
// SIG undefined FUN_1425011f0(void)

int FUN_1425011f0(double param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  dVar3 = (double)FUN_1424d97b0((param_1 + 5.0) / 7.0);
  iVar2 = (int)((param_1 + 5.0) - dVar3 * 7.0);
  iVar1 = 7;
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}



// FUNCTION 142501250 FUN_142501250 body=166 status=ok
// SIG undefined FUN_142501250(void)

int FUN_142501250(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (6 < param_3 - 0x16U) {
    iVar2 = -1;
    if (6 < param_3 - 0x1dU) {
      iVar2 = (param_3 + 6) / 7;
    }
    return iVar2;
  }
  if ((param_1 & 3) == 0) {
    uVar1 = 0xc;
    if ((0x28f5c28 < (param_1 * -0x3d70a3d7 + 0x51eb850 >> 2 | param_1 * 0x40000000)) ||
       (param_1 == ((int)param_1 / 400) * 400)) goto LAB_1425012a8;
  }
  uVar1 = 0;
LAB_1425012a8:
  return (uint)(param_3 + 7 <= (int)(char)(&DAT_1499d7ed0)[(longlong)param_2 + (ulonglong)uVar1]) *
         5 + -1;
}



// FUNCTION 142501300 FUN_142501300 body=8 status=ok
// SIG undefined FUN_142501300(void)

int FUN_142501300(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}



// FUNCTION 142501310 FUN_142501310 body=8 status=ok
// SIG undefined FUN_142501310(void)

int FUN_142501310(int param_1,int param_2)

{
  if (param_1 < param_2) {
    param_2 = param_1;
  }
  return param_2;
}



// FUNCTION 142501320 FUN_142501320 body=215 status=ok
// SIG undefined FUN_142501320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142501320(undefined *param_1)

{
  int iVar1;
  
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_14c792a28;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c792a78) {
      FUN_144b3d300(&DAT_14c792a78);
      if (DAT_14c792a78 == -1) {
        _DAT_14c792a68 = 0;
        uRam000000014c792a70 = 0;
        _DAT_14c792a58 = 0;
        uRam000000014c792a60 = 0;
        _DAT_14c792a48 = 0;
        uRam000000014c792a50 = 0;
        _DAT_14c792a38 = 0;
        uRam000000014c792a40 = 0;
        _DAT_14c792a28 = 0;
        uRam000000014c792a30 = 0;
        param_1 = &DAT_14c792a28;
        _Mtx_init_in_situ(&DAT_14c792a28,2);
        atexit((_func_5014 *)&LAB_142501b30);
        _Init_thread_footer(&DAT_14c792a78);
      }
    }
  }
  iVar1 = _Mtx_lock(param_1);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x4c) != 0x7fffffff) {
      return;
    }
    *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
                    /* WARNING: Subroutine does not return */
  std::_Throw_Cpp_error(5);
}



// FUNCTION 142501400 FUN_142501400 body=171 status=ok
// SIG undefined FUN_142501400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142501400(undefined *param_1)

{
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_14c792a28;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c792a78) {
      FUN_144b3d300(&DAT_14c792a78);
      if (DAT_14c792a78 == -1) {
        _DAT_14c792a68 = 0;
        uRam000000014c792a70 = 0;
        _DAT_14c792a58 = 0;
        uRam000000014c792a60 = 0;
        _DAT_14c792a48 = 0;
        uRam000000014c792a50 = 0;
        _DAT_14c792a38 = 0;
        uRam000000014c792a40 = 0;
        _DAT_14c792a28 = 0;
        uRam000000014c792a30 = 0;
        param_1 = &DAT_14c792a28;
        _Mtx_init_in_situ(&DAT_14c792a28,2);
        atexit((_func_5014 *)&LAB_142501b30);
        _Init_thread_footer(&DAT_14c792a78);
      }
    }
  }
  _Mtx_unlock(param_1);
  return;
}



// FUNCTION 1425014b0 FUN_1425014b0 body=114 status=ok
// SIG undefined FUN_1425014b0(void)

longlong * FUN_1425014b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x60);
  puVar1[1] = &DAT_100000001;
  *puVar1 = std::_Ref_count_obj2<std::mutex>::vftable;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  _Mtx_init_in_situ(puVar1 + 2,2);
  *param_1 = (longlong)(puVar1 + 2);
  param_1[1] = (longlong)puVar1;
  _Cnd_init_in_situ(param_1 + 2);
  return param_1;
}



// FUNCTION 142501530 FUN_142501530 body=68 status=ok
// SIG undefined FUN_142501530(void)

void FUN_142501530(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  _Cnd_destroy_in_situ(param_1 + 0x10);
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000142501569. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 8))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142501580 FUN_142501580 body=179 status=ok
// SIG undefined FUN_142501580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142501580(undefined8 param_1,undefined *param_2)

{
  if (param_2 == (undefined *)0x0) {
    param_2 = &DAT_14c792a28;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c792a78) {
      FUN_144b3d300(&DAT_14c792a78);
      if (DAT_14c792a78 == -1) {
        _DAT_14c792a68 = 0;
        uRam000000014c792a70 = 0;
        _DAT_14c792a58 = 0;
        uRam000000014c792a60 = 0;
        _DAT_14c792a48 = 0;
        uRam000000014c792a50 = 0;
        _DAT_14c792a38 = 0;
        uRam000000014c792a40 = 0;
        _DAT_14c792a28 = 0;
        uRam000000014c792a30 = 0;
        param_2 = &DAT_14c792a28;
        _Mtx_init_in_situ(&DAT_14c792a28,2);
        atexit((_func_5014 *)&LAB_142501b30);
        _Init_thread_footer(&DAT_14c792a78);
      }
    }
  }
  FUN_142501640(param_1,param_2);
  return;
}



// FUNCTION 142501640 FUN_142501640 body=239 status=ok
// SIG undefined FUN_142501640(void)

void FUN_142501640(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  
  if (param_1[1] == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    LOCK();
    piVar1 = (int *)(param_1[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    plVar5 = (longlong *)param_1[1];
  }
  lVar3 = *param_1;
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
  _Mtx_unlock(param_2);
  _Cnd_wait(param_1 + 2,lVar3);
  _Mtx_unlock(lVar3);
  iVar4 = _Mtx_lock(param_2);
  if (iVar4 == 0) {
    if (*(int *)(param_2 + 0x4c) == 0x7fffffff) {
      *(undefined4 *)(param_2 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(6);
    }
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
                    /* WARNING: Could not recover jumptable at 0x0001425016e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 8))(plVar5);
          return;
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Throw_Cpp_error(5);
}



// FUNCTION 142501730 Unwind@142501730 body=24 status=ok
// SIG undefined Unwind@142501730(void)

void Unwind_142501730(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142501750 Unwind@142501750 body=24 status=ok
// SIG undefined Unwind@142501750(void)

void Unwind_142501750(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142501770 FUN_142501770 body=101 status=ok
// SIG undefined FUN_142501770(void)

void FUN_142501770(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = _Mtx_lock(lVar1);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(lVar1 + 0x4c) != 0x7fffffff) {
    _Cnd_broadcast(param_1 + 2);
    _Mtx_unlock(lVar1);
    return;
  }
  *(undefined4 *)(lVar1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  std::_Throw_Cpp_error(6);
}



// FUNCTION 1425017e0 Unwind@1425017e0 body=21 status=ok
// SIG undefined Unwind@1425017e0(void)

void Unwind_1425017e0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142501800 FUN_142501800 body=432 status=ok
// SIG undefined FUN_142501800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142501800(int *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c792ad0) && (FUN_144b3d300(&DAT_14c792ad0), DAT_14c792ad0 == -1)) {
    _DAT_14c792a80 = 0;
    _DAT_14c792a88 = 0;
    uRam000000014c792a90 = 0;
    _DAT_14c792a98 = 0;
    uRam000000014c792aa0 = 0;
    _DAT_14c792aa8 = 0;
    uRam000000014c792ab0 = 0;
    _DAT_14c792ab8 = 0;
    uRam000000014c792ac0 = 0;
    _DAT_14c792ac8 = 0;
    _Mtx_init_in_situ(&DAT_14c792a80,2);
    atexit((_func_5014 *)&LAB_142501b90);
    _Init_thread_footer(&DAT_14c792ad0);
  }
  iVar1 = _Mtx_lock(&DAT_14c792a80);
  if (iVar1 == 0) {
    if (DAT_14c792acc != 0x7fffffff) {
      if (*param_1 == 0) {
        *param_1 = 1;
        uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      }
      else {
        iVar1 = *param_1;
        while (iVar1 == 1) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c792b20) && (FUN_144b3d300(&DAT_14c792b20), DAT_14c792b20 == -1)) {
            _Cnd_init_in_situ(&DAT_14c792ad8);
            atexit((_func_5014 *)&LAB_142501ba0);
            _Init_thread_footer(&DAT_14c792b20);
          }
          _Cnd_wait(&DAT_14c792ad8,&DAT_14c792a80);
          iVar1 = *param_1;
        }
        uVar2 = 0;
      }
      _Mtx_unlock(&DAT_14c792a80);
      return uVar2 & 0xffffffff;
    }
    _DAT_14c792ac8 = CONCAT44(0x7ffffffe,_DAT_14c792ac8);
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
                    /* WARNING: Subroutine does not return */
  std::_Throw_Cpp_error(5);
}



// FUNCTION 1425019c0 FUN_1425019c0 body=368 status=ok
// SIG undefined FUN_1425019c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425019c0(undefined4 *param_1)

{
  int iVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c792ad0) {
    FUN_144b3d300(&DAT_14c792ad0);
    if (DAT_14c792ad0 == -1) {
      _DAT_14c792a80 = 0;
      _DAT_14c792a88 = 0;
      uRam000000014c792a90 = 0;
      _DAT_14c792a98 = 0;
      uRam000000014c792aa0 = 0;
      _DAT_14c792aa8 = 0;
      uRam000000014c792ab0 = 0;
      _DAT_14c792ab8 = 0;
      uRam000000014c792ac0 = 0;
      _DAT_14c792ac8 = 0;
      _Mtx_init_in_situ(&DAT_14c792a80,2);
      atexit((_func_5014 *)&LAB_142501b90);
      _Init_thread_footer(&DAT_14c792ad0);
    }
  }
  iVar1 = _Mtx_lock(&DAT_14c792a80);
  if (iVar1 == 0) {
    if (DAT_14c792acc != 0x7fffffff) {
      *param_1 = 2;
      _Mtx_unlock(&DAT_14c792a80);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c792b20) {
        FUN_144b3d300(&DAT_14c792b20);
        if (DAT_14c792b20 == -1) {
          _Cnd_init_in_situ(&DAT_14c792ad8);
          atexit((_func_5014 *)&LAB_142501ba0);
          _Init_thread_footer(&DAT_14c792b20);
        }
      }
      _Cnd_broadcast(&DAT_14c792ad8);
      return;
    }
    _DAT_14c792ac8 = CONCAT44(0x7ffffffe,_DAT_14c792ac8);
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
                    /* WARNING: Subroutine does not return */
  std::_Throw_Cpp_error(5);
}



// FUNCTION 142501b40 FUN_142501b40 body=9 status=ok
// SIG undefined FUN_142501b40(void)

void FUN_142501b40(longlong param_1)

{
  _Mtx_destroy_in_situ(param_1 + 0x10);
  return;
}



// FUNCTION 142501b50 FUN_142501b50 body=15 status=ok
// SIG undefined FUN_142501b50(void)

void FUN_142501b50(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142501b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return;
}



// FUNCTION 142501b60 FUN_142501b60 body=39 status=ok
// SIG undefined FUN_142501b60(void)

undefined8 * FUN_142501b60(undefined8 *param_1,int param_2)

{
  *param_1 = std::_Ref_count_obj2<std::mutex>::vftable;
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142501bb0 FUN_142501bb0 body=29 status=ok
// SIG undefined FUN_142501bb0(void)

undefined8 FUN_142501bb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142501bd0 FUN_142501bd0 body=8 status=ok
// SIG undefined FUN_142501bd0(void)

char * FUN_142501bd0(void)

{
  return "generic";
}



// FUNCTION 142501be0 FUN_142501be0 body=216 status=ok
// SIG undefined FUN_142501be0(void)

undefined8 * FUN_142501be0(undefined8 param_1,undefined8 *param_2,int param_3)

{
  char *_Str;
  size_t _Size;
  longlong lVar1;
  undefined8 *_Dst;
  ulonglong uVar2;
  
  _Str = std::_Syserror_map(param_3);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  _Size = strlen(_Str);
  if (-1 < (longlong)_Size) {
    if (_Size < 0x10) {
      param_2[2] = _Size;
      param_2[3] = 0xf;
      memcpy(param_2,_Str,_Size);
      _Dst = param_2;
    }
    else {
      param_2[3] = 0xf;
      uVar2 = 0x16;
      if (0x16 < (_Size | 0xf)) {
        uVar2 = _Size | 0xf;
      }
      if (uVar2 < 0xfff) {
        _Dst = (undefined8 *)FUN_14494321d(uVar2 + 1);
      }
      else {
        lVar1 = FUN_14494321d(uVar2 + 0x28);
        _Dst = (undefined8 *)(lVar1 + 0x27U & 0xffffffffffffffe0);
        _Dst[-1] = lVar1;
      }
      *param_2 = _Dst;
      param_2[2] = _Size;
      param_2[3] = uVar2;
      memcpy(_Dst,_Str,_Size);
    }
    *(undefined1 *)(_Size + (longlong)_Dst) = 0;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_146eb22ad();
}



// FUNCTION 142501cc0 FUN_142501cc0 body=11 status=ok
// SIG undefined FUN_142501cc0(void)

undefined4 * FUN_142501cc0(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// FUNCTION 142501cd0 FUN_142501cd0 body=24 status=ok
// SIG undefined FUN_142501cd0(void)

undefined8 FUN_142501cd0(longlong param_1,int *param_2,int param_3)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 2) >> 8),
                  *param_2 == param_3 &&
                  *(longlong *)(param_1 + 8) == *(longlong *)(*(longlong *)(param_2 + 2) + 8));
}



// FUNCTION 142501cf0 FUN_142501cf0 body=82 status=ok
// SIG undefined FUN_142501cf0(void)

void FUN_142501cf0(longlong *param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x18))(param_1,local_28,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 142501d50 FUN_142501d50 body=52 status=ok
// SIG undefined FUN_142501d50(void)

undefined8 * FUN_142501d50(undefined8 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142501d90 FUN_142501d90 body=52 status=ok
// SIG undefined FUN_142501d90(void)

undefined8 * FUN_142501d90(undefined8 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142501dd0 FUN_142501dd0 body=52 status=ok
// SIG undefined FUN_142501dd0(void)

undefined8 * FUN_142501dd0(undefined8 *param_1,int param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142501e10 FUN_142501e10 body=26 status=ok
// SIG undefined FUN_142501e10(void)

void FUN_142501e10(void)

{
  FUN_142501e30();
  return;
}



// FUNCTION 142501e30 FUN_142501e30 body=315 status=ok
// SIG undefined FUN_142501e30(void)

undefined8 *
FUN_142501e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int *param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*param_5 < 1) {
    puVar2 = (undefined8 *)FUN_1424da030(0x50);
    if (puVar2 == (undefined8 *)0x0) {
      *param_5 = 7;
    }
    else {
      if (*param_5 < 1) {
        puVar2[1] = param_1;
        puVar2[2] = param_2;
        puVar2[3] = param_3;
        *(undefined1 *)((longlong)puVar2 + 0x49) = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[8] = 0x3f000000;
        if (*param_5 < 1) {
          *(char *)(puVar2 + 9) = (char)param_4;
          iVar4 = *(int *)(&DAT_1499d8250 + (longlong)param_4 * 4);
          *(int *)((longlong)puVar2 + 0x34) = iVar4;
          puVar3 = (undefined4 *)FUN_1424da030((longlong)iVar4 * 0x18);
          *puVar2 = puVar3;
          if (puVar3 == (undefined4 *)0x0) {
            *param_5 = 7;
          }
          else {
            iVar4 = *(int *)((longlong)puVar2 + 0x34);
            if (0 < (longlong)iVar4) {
              puVar1 = puVar3 + (longlong)iVar4 * 6;
              do {
                *(undefined8 *)(puVar3 + 2) = 0;
                *(undefined8 *)(puVar3 + 4) = 0;
                *puVar3 = 0x80000001;
                puVar3 = puVar3 + 6;
              } while (puVar3 < puVar1);
              iVar4 = *(int *)((longlong)puVar2 + 0x34);
            }
            *(undefined4 *)(puVar2 + 6) = 0;
            puVar2[7] = CONCAT44((int)((float)iVar4 * (float)((ulonglong)puVar2[8] >> 0x20)),
                                 (int)((float)iVar4 * (float)puVar2[8]));
          }
        }
      }
      *(undefined1 *)((longlong)puVar2 + 0x49) = 1;
      if (*param_5 < 1) {
        return puVar2;
      }
      FUN_1424da110(puVar2);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142501f70 FUN_142501f70 body=458 status=ok
// SIG undefined FUN_142501f70(void)

void FUN_142501f70(void)

{
  FUN_142501e30();
  return;
}



// FUNCTION 142502140 FUN_142502140 body=209 status=ok
// SIG undefined FUN_142502140(void)

undefined8 *
FUN_142502140(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*param_5 < 1) {
    param_1[1] = param_2;
    param_1[2] = param_3;
    param_1[3] = param_4;
    *(undefined1 *)((longlong)param_1 + 0x49) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[8] = 0x3f000000;
    if (*param_5 < 1) {
      *(undefined1 *)(param_1 + 9) = 4;
      *(undefined4 *)((longlong)param_1 + 0x34) = 0x7f;
      puVar2 = (undefined4 *)FUN_1424da030(0xbe8);
      *param_1 = puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        iVar3 = *(int *)((longlong)param_1 + 0x34);
        if (0 < (longlong)iVar3) {
          puVar1 = puVar2 + (longlong)iVar3 * 6;
          do {
            *(undefined8 *)(puVar2 + 2) = 0;
            *(undefined8 *)(puVar2 + 4) = 0;
            *puVar2 = 0x80000001;
            puVar2 = puVar2 + 6;
          } while (puVar2 < puVar1);
          iVar3 = *(int *)((longlong)param_1 + 0x34);
        }
        *(undefined4 *)(param_1 + 6) = 0;
        param_1[7] = CONCAT44((int)((float)iVar3 * (float)((ulonglong)param_1[8] >> 0x20)),
                              (int)((float)iVar3 * (float)param_1[8]));
        if (0 < *param_5) {
          return (undefined8 *)0x0;
        }
        return param_1;
      }
      *param_5 = 7;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142502220 FUN_142502220 body=184 status=ok
// SIG undefined FUN_142502220(void)

void FUN_142502220(longlong *param_1)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != 0) {
      if ((param_1[4] != 0) || (param_1[5] != 0)) {
        lVar3 = -1;
        do {
          lVar3 = (longlong)(int)lVar3;
          piVar2 = (int *)(*param_1 + lVar3 * 0x18);
          do {
            piVar1 = piVar2;
            lVar3 = lVar3 + 1;
            if (*(int *)((longlong)param_1 + 0x34) <= lVar3) goto LAB_1425022ae;
            piVar2 = piVar1 + 6;
          } while (piVar1[6] < 0);
          if (((code *)param_1[4] != (code *)0x0) && (*(longlong *)(piVar1 + 10) != 0)) {
            (*(code *)param_1[4])();
          }
          if (((code *)param_1[5] != (code *)0x0) && (*(longlong *)(piVar1 + 8) != 0)) {
            (*(code *)param_1[5])();
          }
        } while( true );
      }
LAB_1425022ae:
      FUN_1424da110();
      *param_1 = 0;
    }
    if (*(char *)((longlong)param_1 + 0x49) != '\0') {
      FUN_1424da110(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1425022e0 FUN_1425022e0 body=73 status=ok
// SIG undefined FUN_1425022e0(void)

longlong FUN_1425022e0(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar4 = (ulonglong)(int)*param_2;
  lVar6 = uVar4 * 0x18;
  uVar5 = uVar4;
  do {
    uVar5 = uVar5 + 1;
    if ((longlong)*(int *)((longlong)param_1 + 0x34) <= (longlong)uVar5) {
      return 0;
    }
    lVar1 = lVar6 + 0x18;
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    piVar2 = (int *)(*param_1 + 0x18 + lVar6);
    lVar6 = lVar1;
  } while (*piVar2 < 0);
  *param_2 = uVar3;
  return lVar1 + *param_1;
}



// FUNCTION 142502330 FUN_142502330 body=9 status=ok
// SIG undefined FUN_142502330(void)

undefined8 FUN_142502330(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return uVar1;
}



// FUNCTION 142502340 FUN_142502340 body=9 status=ok
// SIG undefined FUN_142502340(void)

undefined8 FUN_142502340(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return uVar1;
}



// FUNCTION 142502350 FUN_142502350 body=9 status=ok
// SIG undefined FUN_142502350(void)

undefined8 FUN_142502350(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return uVar1;
}



// FUNCTION 142502360 FUN_142502360 body=662 status=ok
// SIG undefined FUN_142502360(void)

void FUN_142502360(longlong *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  int local_74;
  
  lVar3 = *param_1;
  uVar1 = *(uint *)((longlong)param_1 + 0x34);
  uVar15 = (ulonglong)uVar1;
  cVar8 = (char)param_1[9];
  if ((int)param_1[7] < (int)param_1[6]) {
    if ('\x1b' < cVar8) {
      return;
    }
    iVar9 = cVar8 + 1;
    iVar14 = *param_2;
  }
  else {
    if (*(int *)((longlong)param_1 + 0x3c) <= (int)param_1[6]) {
      return;
    }
    if (cVar8 < '\x01') {
      return;
    }
    iVar9 = cVar8 + -1;
    iVar14 = *param_2;
  }
  if (iVar14 < 1) {
    *(char *)(param_1 + 9) = (char)iVar9;
    iVar14 = *(int *)(&DAT_1499d8250 + (longlong)iVar9 * 4);
    *(int *)((longlong)param_1 + 0x34) = iVar14;
    puVar10 = (undefined4 *)FUN_1424da030((longlong)iVar14 * 0x18);
    *param_1 = (longlong)puVar10;
    if (puVar10 == (undefined4 *)0x0) {
      *param_2 = 7;
    }
    else {
      iVar14 = *(int *)((longlong)param_1 + 0x34);
      if (0 < (longlong)iVar14) {
        puVar11 = puVar10 + (longlong)iVar14 * 6;
        do {
          *(undefined8 *)(puVar10 + 2) = 0;
          *(undefined8 *)(puVar10 + 4) = 0;
          *puVar10 = 0x80000001;
          puVar10 = puVar10 + 6;
        } while (puVar10 < puVar11);
        iVar14 = *(int *)((longlong)param_1 + 0x34);
      }
      *(undefined4 *)(param_1 + 6) = 0;
      param_1[7] = CONCAT44((int)((float)iVar14 * (float)((ulonglong)param_1[8] >> 0x20)),
                            (int)((float)iVar14 * (float)param_1[8]));
      if (*param_2 < 1) {
        if (0 < (int)uVar1) {
          do {
            uVar12 = uVar15 - 1 & 0xffffffff;
            uVar1 = *(uint *)(lVar3 + uVar12 * 0x18);
            if (-1 < (int)uVar1) {
              puVar10 = (undefined4 *)(lVar3 + uVar12 * 0x18);
              uVar4 = *(undefined8 *)(lVar3 + 0x10 + uVar12 * 0x18);
              lVar5 = *param_1;
              iVar14 = *(int *)((longlong)param_1 + 0x34);
              lVar13 = (longlong)(CONCAT44((int)(uVar1 ^ 0x4000000) >> 0x1f,uVar1) ^ 0x4000000) %
                       (longlong)iVar14;
              iVar9 = (int)lVar13;
              local_74 = -1;
              iVar16 = 0;
              do {
                iVar7 = (int)lVar13;
                lVar13 = (longlong)iVar7;
                uVar2 = *(uint *)(lVar5 + lVar13 * 0x18);
                if (uVar2 == uVar1) {
                  cVar8 = (*(code *)param_1[2])(uVar4,*(undefined8 *)(lVar5 + 0x10 + lVar13 * 0x18))
                  ;
                  if (cVar8 != '\0') goto LAB_142502488;
                  iVar14 = *(int *)((longlong)param_1 + 0x34);
                }
                else if ((int)uVar2 < 0) {
                  if (local_74 < 0) {
                    local_74 = iVar7;
                  }
                  if (uVar2 == 0x80000001) goto LAB_14250247b;
                }
                if (iVar16 == 0) {
                  iVar16 = (int)uVar1 % (iVar14 + -1) + 1;
                }
                lVar13 = (longlong)(iVar7 + iVar16) % (longlong)iVar14;
              } while ((int)lVar13 != iVar9);
              if ((local_74 < 0) && (local_74 = iVar9, uVar2 != 0x80000001)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
LAB_14250247b:
              lVar13 = (longlong)local_74;
LAB_142502488:
              puVar11 = (undefined4 *)(lVar5 + lVar13 * 0x18);
              *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar10 + 4);
              *(undefined8 *)(puVar11 + 2) = *(undefined8 *)(lVar3 + 8 + uVar12 * 0x18);
              *puVar11 = *puVar10;
              *(int *)(param_1 + 6) = (int)param_1[6] + 1;
            }
            bVar6 = 1 < (longlong)uVar15;
            uVar15 = uVar15 - 1;
          } while (bVar6);
        }
        FUN_1424da110(lVar3);
        return;
      }
    }
  }
  *param_1 = lVar3;
  *(uint *)((longlong)param_1 + 0x34) = uVar1;
  return;
}



// FUNCTION 142502610 FUN_142502610 body=4 status=ok
// SIG undefined FUN_142502610(void)

undefined4 FUN_142502610(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// FUNCTION 142502620 FUN_142502620 body=265 status=ok
// SIG undefined FUN_142502620(void)

undefined8 FUN_142502620(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int local_4c;
  
  uVar5 = (*(code *)param_1[1])(param_2);
  lVar2 = *param_1;
  uVar5 = uVar5 & 0x7fffffff;
  iVar6 = *(int *)((longlong)param_1 + 0x34);
  iVar9 = 0;
  lVar8 = (longlong)(ulonglong)(uVar5 ^ 0x4000000) % (longlong)iVar6;
  iVar7 = (int)lVar8;
  local_4c = -1;
  do {
    iVar3 = (int)lVar8;
    lVar8 = (longlong)iVar3;
    uVar1 = *(uint *)(lVar2 + lVar8 * 0x18);
    if (uVar1 == uVar5) {
      cVar4 = (*(code *)param_1[2])(param_2);
      if (cVar4 != '\0') goto LAB_142502713;
      iVar6 = *(int *)((longlong)param_1 + 0x34);
    }
    else if ((int)uVar1 < 0) {
      if (local_4c < 0) {
        local_4c = iVar3;
      }
      if (uVar1 == 0x80000001) goto LAB_14250270e;
    }
    if (iVar9 == 0) {
      iVar9 = (int)((longlong)(ulonglong)uVar5 % (longlong)(iVar6 + -1)) + 1;
    }
    lVar8 = (longlong)(iVar3 + iVar9) % (longlong)iVar6;
  } while ((int)lVar8 != iVar7);
  if ((local_4c < 0) && (local_4c = iVar7, uVar1 != 0x80000001)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_14250270e:
  lVar8 = (longlong)local_4c;
LAB_142502713:
  return *(undefined8 *)(lVar2 + 8 + lVar8 * 0x18);
}



// FUNCTION 142502740 FUN_142502740 body=264 status=ok
// SIG undefined FUN_142502740(void)

undefined8 FUN_142502740(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int local_4c;
  
  uVar5 = (*(code *)param_1[1])();
  lVar2 = *param_1;
  uVar5 = uVar5 & 0x7fffffff;
  iVar6 = *(int *)((longlong)param_1 + 0x34);
  iVar9 = 0;
  lVar8 = (longlong)(ulonglong)(uVar5 ^ 0x4000000) % (longlong)iVar6;
  iVar7 = (int)lVar8;
  local_4c = -1;
  do {
    iVar3 = (int)lVar8;
    lVar8 = (longlong)iVar3;
    uVar1 = *(uint *)(lVar2 + lVar8 * 0x18);
    if (uVar1 == uVar5) {
      cVar4 = (*(code *)param_1[2])(param_2);
      if (cVar4 != '\0') goto LAB_142502833;
      iVar6 = *(int *)((longlong)param_1 + 0x34);
    }
    else if ((int)uVar1 < 0) {
      if (local_4c < 0) {
        local_4c = iVar3;
      }
      if (uVar1 == 0x80000001) goto LAB_14250282e;
    }
    if (iVar9 == 0) {
      iVar9 = (int)((longlong)(ulonglong)uVar5 % (longlong)(iVar6 + -1)) + 1;
    }
    lVar8 = (longlong)(iVar3 + iVar9) % (longlong)iVar6;
  } while ((int)lVar8 != iVar7);
  if ((local_4c < 0) && (local_4c = iVar7, uVar1 != 0x80000001)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_14250282e:
  lVar8 = (longlong)local_4c;
LAB_142502833:
  return *(undefined8 *)(lVar2 + 8 + lVar8 * 0x18);
}



// FUNCTION 142502860 FUN_142502860 body=265 status=ok
// SIG undefined FUN_142502860(void)

undefined4 FUN_142502860(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int local_4c;
  
  uVar5 = (*(code *)param_1[1])(param_2);
  lVar2 = *param_1;
  uVar5 = uVar5 & 0x7fffffff;
  iVar6 = *(int *)((longlong)param_1 + 0x34);
  iVar9 = 0;
  lVar8 = (longlong)(ulonglong)(uVar5 ^ 0x4000000) % (longlong)iVar6;
  iVar7 = (int)lVar8;
  local_4c = -1;
  do {
    iVar3 = (int)lVar8;
    lVar8 = (longlong)iVar3;
    uVar1 = *(uint *)(lVar2 + lVar8 * 0x18);
    if (uVar1 == uVar5) {
      cVar4 = (*(code *)param_1[2])(param_2);
      if (cVar4 != '\0') goto LAB_142502953;
      iVar6 = *(int *)((longlong)param_1 + 0x34);
    }
    else if ((int)uVar1 < 0) {
      if (local_4c < 0) {
        local_4c = iVar3;
      }
      if (uVar1 == 0x80000001) goto LAB_14250294e;
    }
    if (iVar9 == 0) {
      iVar9 = (int)((longlong)(ulonglong)uVar5 % (longlong)(iVar6 + -1)) + 1;
    }
    lVar8 = (longlong)(iVar3 + iVar9) % (longlong)iVar6;
  } while ((int)lVar8 != iVar7);
  if ((local_4c < 0) && (local_4c = iVar7, uVar1 != 0x80000001)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_14250294e:
  lVar8 = (longlong)local_4c;
LAB_142502953:
  return *(undefined4 *)(lVar2 + 8 + lVar8 * 0x18);
}



// FUNCTION 142502980 FUN_142502980 body=264 status=ok
// SIG undefined FUN_142502980(void)

undefined4 FUN_142502980(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int local_4c;
  
  uVar5 = (*(code *)param_1[1])();
  lVar2 = *param_1;
  uVar5 = uVar5 & 0x7fffffff;
  iVar6 = *(int *)((longlong)param_1 + 0x34);
  iVar9 = 0;
  lVar8 = (longlong)(ulonglong)(uVar5 ^ 0x4000000) % (longlong)iVar6;
  iVar7 = (int)lVar8;
  local_4c = -1;
  do {
    iVar3 = (int)lVar8;
    lVar8 = (longlong)iVar3;
    uVar1 = *(uint *)(lVar2 + lVar8 * 0x18);
    if (uVar1 == uVar5) {
      cVar4 = (*(code *)param_1[2])(param_2);
      if (cVar4 != '\0') goto LAB_142502a73;
      iVar6 = *(int *)((longlong)param_1 + 0x34);
    }
    else if ((int)uVar1 < 0) {
      if (local_4c < 0) {
        local_4c = iVar3;
      }
      if (uVar1 == 0x80000001) goto LAB_142502a6e;
    }
    if (iVar9 == 0) {
      iVar9 = (int)((longlong)(ulonglong)uVar5 % (longlong)(iVar6 + -1)) + 1;
    }
    lVar8 = (longlong)(iVar3 + iVar9) % (longlong)iVar6;
  } while ((int)lVar8 != iVar7);
  if ((local_4c < 0) && (local_4c = iVar7, uVar1 != 0x80000001)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_142502a6e:
  lVar8 = (longlong)local_4c;
LAB_142502a73:
  return *(undefined4 *)(lVar2 + 8 + lVar8 * 0x18);
}



// FUNCTION 142502aa0 FUN_142502aa0 body=23 status=ok
// SIG undefined FUN_142502aa0(void)

void FUN_142502aa0(void)

{
  FUN_142502ac0();
  return;
}



// FUNCTION 142502ac0 FUN_142502ac0 body=608 status=ok
// SIG undefined FUN_142502ac0(void)

longlong FUN_142502ac0(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4,
                      int *param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int local_64;
  
  if (*param_5 < 1) {
    if (((param_4 & 2) != 0) && (param_3 == 0)) {
      lVar5 = FUN_142502da0(param_1,param_2);
      return lVar5;
    }
    if (((int)param_1[6] <= (int)param_1[7]) || (FUN_142502360(param_1), *param_5 < 1)) {
      uVar4 = (*(code *)param_1[1])(param_2);
      lVar5 = *param_1;
      uVar4 = uVar4 & 0x7fffffff;
      iVar7 = *(int *)((longlong)param_1 + 0x34);
      iVar9 = 0;
      lVar6 = (longlong)(ulonglong)(uVar4 ^ 0x4000000) % (longlong)iVar7;
      iVar8 = (int)lVar6;
      local_64 = -1;
      do {
        iVar2 = (int)lVar6;
        lVar6 = (longlong)iVar2;
        uVar1 = *(uint *)(lVar5 + lVar6 * 0x18);
        if (uVar1 == uVar4) {
          cVar3 = (*(code *)param_1[2])(param_2);
          if (cVar3 != '\0') goto LAB_142502c7c;
          iVar7 = *(int *)((longlong)param_1 + 0x34);
        }
        else if ((int)uVar1 < 0) {
          if (local_64 < 0) {
            local_64 = iVar2;
          }
          if (uVar1 == 0x80000001) goto LAB_142502c63;
        }
        if (iVar9 == 0) {
          iVar9 = (int)((longlong)(ulonglong)uVar4 % (longlong)(iVar7 + -1)) + 1;
        }
        lVar6 = (longlong)(iVar2 + iVar9) % (longlong)iVar7;
      } while ((int)lVar6 != iVar8);
      if ((local_64 < 0) && (local_64 = iVar8, uVar1 != 0x80000001)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
LAB_142502c63:
      lVar6 = (longlong)local_64;
LAB_142502c7c:
      puVar10 = (uint *)(lVar5 + lVar6 * 0x18);
      if ((int)*puVar10 < 0) {
        lVar5 = param_1[6];
        iVar7 = (int)lVar5 + 1;
        *(int *)(param_1 + 6) = iVar7;
        if (iVar7 == *(int *)((longlong)param_1 + 0x34)) {
          *(int *)(param_1 + 6) = (int)lVar5;
          *param_5 = 7;
          goto LAB_142502ae6;
        }
      }
      lVar5 = *(longlong *)(puVar10 + 2);
      if ((((code *)param_1[4] != (code *)0x0) && (*(longlong *)(puVar10 + 4) != 0)) &&
         (*(longlong *)(puVar10 + 4) != param_2)) {
        (*(code *)param_1[4])();
      }
      lVar6 = lVar5;
      if ((((code *)param_1[5] != (code *)0x0) && (lVar6 = 0, lVar5 != 0)) && (lVar5 != param_3)) {
        (*(code *)param_1[5])(lVar5);
        lVar6 = 0;
      }
      *(longlong *)(puVar10 + 4) = param_2;
      *(longlong *)(puVar10 + 2) = param_3;
      *puVar10 = uVar4;
      return lVar6;
    }
  }
LAB_142502ae6:
  if (((code *)param_1[4] != (code *)0x0) && (param_2 != 0)) {
    (*(code *)param_1[4])(param_2);
  }
  if (((code *)param_1[5] != (code *)0x0) && (param_3 != 0)) {
    (*(code *)param_1[5])(param_3);
  }
  return 0;
}



// FUNCTION 142502d30 FUN_142502d30 body=25 status=ok
// SIG undefined FUN_142502d30(void)

void FUN_142502d30(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_142502ac0(param_1,param_2,param_3,2,param_4);
  return;
}



// FUNCTION 142502d50 FUN_142502d50 body=26 status=ok
// SIG undefined FUN_142502d50(void)

void FUN_142502d50(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_142502ac0(param_1,param_2,param_3,1,param_4);
  return;
}



// FUNCTION 142502d70 FUN_142502d70 body=28 status=ok
// SIG undefined FUN_142502d70(void)

void FUN_142502d70(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_142502ac0(param_1,param_2,param_3,0,param_4);
  return;
}



// FUNCTION 142502d90 thunk_FUN_142502da0 body=5 status=ok
// SIG undefined thunk_FUN_142502da0(void)

void thunk_FUN_142502da0(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined1 auStack_88 [44];
  int iStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_4c;
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_58 = param_2;
  uVar6 = (*(code *)param_1[1])(param_2);
  lVar2 = *param_1;
  uVar6 = uVar6 & 0x7fffffff;
  iVar7 = *(int *)((longlong)param_1 + 0x34);
  iVar10 = 0;
  lVar3 = (longlong)(ulonglong)(uVar6 ^ 0x4000000) % (longlong)iVar7;
  iVar8 = (int)lVar3;
  iStack_5c = -1;
  do {
    iVar4 = (int)lVar3;
    uVar1 = *(uint *)(lVar2 + (longlong)iVar4 * 0x18);
    if (uVar1 == uVar6) {
      cVar5 = (*(code *)param_1[2])(uStack_58);
      if (cVar5 != '\0') {
        piVar9 = (int *)((longlong)iVar4 * 0x18 + lVar2);
        iVar7 = *piVar9;
        goto joined_r0x000142502f10;
      }
      iVar7 = *(int *)((longlong)param_1 + 0x34);
    }
    else if ((int)uVar1 < 0) {
      if (iStack_5c < 0) {
        iStack_5c = iVar4;
      }
      if (uVar1 == 0x80000001) goto LAB_142502e90;
    }
    if (iVar10 == 0) {
      iVar10 = (int)((longlong)(ulonglong)uVar6 % (longlong)(iVar7 + -1)) + 1;
    }
    lVar3 = (longlong)(iVar4 + iVar10) % (longlong)iVar7;
  } while ((int)lVar3 != iVar8);
  if ((iStack_5c < 0) && (iStack_5c = iVar8, uVar1 != 0x80000001)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_142502e90:
  piVar9 = (int *)(lVar2 + (longlong)iStack_5c * 0x18);
  iVar7 = *piVar9;
joined_r0x000142502f10:
  if (-1 < iVar7) {
    *(int *)(param_1 + 6) = (int)param_1[6] + -1;
    lVar2 = *(longlong *)(piVar9 + 2);
    if (((code *)param_1[4] != (code *)0x0) && (*(longlong *)(piVar9 + 4) != 0)) {
      (*(code *)param_1[4])();
    }
    if (((code *)param_1[5] != (code *)0x0) && (lVar2 != 0)) {
      (*(code *)param_1[5])(lVar2);
    }
    piVar9[2] = 0;
    piVar9[3] = 0;
    piVar9[4] = 0;
    piVar9[5] = 0;
    *piVar9 = -0x80000000;
    if ((int)param_1[6] < *(int *)((longlong)param_1 + 0x3c)) {
      uStack_4c = 0;
      FUN_142502360(param_1,&uStack_4c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 142502da0 FUN_142502da0 body=385 status=ok
// SIG undefined FUN_142502da0(void)

void FUN_142502da0(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = param_2;
  uVar6 = (*(code *)param_1[1])(param_2);
  lVar2 = *param_1;
  uVar6 = uVar6 & 0x7fffffff;
  iVar7 = *(int *)((longlong)param_1 + 0x34);
  iVar10 = 0;
  lVar3 = (longlong)(ulonglong)(uVar6 ^ 0x4000000) % (longlong)iVar7;
  iVar8 = (int)lVar3;
  local_5c = -1;
  do {
    iVar4 = (int)lVar3;
    uVar1 = *(uint *)(lVar2 + (longlong)iVar4 * 0x18);
    if (uVar1 == uVar6) {
      cVar5 = (*(code *)param_1[2])(local_58);
      if (cVar5 != '\0') {
        piVar9 = (int *)((longlong)iVar4 * 0x18 + lVar2);
        iVar7 = *piVar9;
        goto joined_r0x000142502f10;
      }
      iVar7 = *(int *)((longlong)param_1 + 0x34);
    }
    else if ((int)uVar1 < 0) {
      if (local_5c < 0) {
        local_5c = iVar4;
      }
      if (uVar1 == 0x80000001) goto LAB_142502e90;
    }
    if (iVar10 == 0) {
      iVar10 = (int)((longlong)(ulonglong)uVar6 % (longlong)(iVar7 + -1)) + 1;
    }
    lVar3 = (longlong)(iVar4 + iVar10) % (longlong)iVar7;
  } while ((int)lVar3 != iVar8);
  if ((local_5c < 0) && (local_5c = iVar8, uVar1 != 0x80000001)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_142502e90:
  piVar9 = (int *)(lVar2 + (longlong)local_5c * 0x18);
  iVar7 = *piVar9;
joined_r0x000142502f10:
  if (-1 < iVar7) {
    *(int *)(param_1 + 6) = (int)param_1[6] + -1;
    lVar2 = *(longlong *)(piVar9 + 2);
    if (((code *)param_1[4] != (code *)0x0) && (*(longlong *)(piVar9 + 4) != 0)) {
      (*(code *)param_1[4])();
    }
    if (((code *)param_1[5] != (code *)0x0) && (lVar2 != 0)) {
      (*(code *)param_1[5])(lVar2);
    }
    piVar9[2] = 0;
    piVar9[3] = 0;
    piVar9[4] = 0;
    piVar9[5] = 0;
    *piVar9 = -0x80000000;
    if ((int)param_1[6] < *(int *)((longlong)param_1 + 0x3c)) {
      local_4c = 0;
      FUN_142502360(param_1,&local_4c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 142502f40 FUN_142502f40 body=178 status=ok
// SIG undefined FUN_142502f40(void)

void FUN_142502f40(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[6] == 0) {
    return;
  }
  lVar5 = -1;
  do {
    lVar5 = (longlong)(int)lVar5;
    lVar4 = lVar5 * 0x18 + 0x18;
    do {
      lVar5 = lVar5 + 1;
      if (*(int *)((longlong)param_1 + 0x34) <= lVar5) {
        return;
      }
      lVar1 = lVar4 + 0x18;
      lVar3 = *param_1;
      piVar2 = (int *)(lVar3 + lVar4);
      lVar4 = lVar1;
    } while (*piVar2 < 0);
    *(int *)(param_1 + 6) = (int)param_1[6] + -1;
    lVar4 = *(longlong *)(lVar3 + -0x10 + lVar1);
    if (((code *)param_1[4] != (code *)0x0) && (*(longlong *)(lVar3 + -8 + lVar1) != 0)) {
      (*(code *)param_1[4])();
    }
    if (((code *)param_1[5] != (code *)0x0) && (lVar4 != 0)) {
      (*(code *)param_1[5])(lVar4);
    }
    *(undefined8 *)(lVar3 + lVar1 + -0x10) = 0;
    *(undefined8 *)(lVar3 + lVar1 + -8) = 0;
    *(undefined4 *)(lVar3 + lVar1 + -0x18) = 0x80000000;
  } while( true );
}



// FUNCTION 142503000 FUN_142503000 body=102 status=ok
// SIG undefined FUN_142503000(void)

longlong FUN_142503000(longlong param_1,int *param_2)

{
  longlong lVar1;
  
  if (*param_2 < 0) {
    lVar1 = 0;
  }
  else {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    lVar1 = *(longlong *)(param_2 + 2);
    if ((*(code **)(param_1 + 0x20) != (code *)0x0) && (*(longlong *)(param_2 + 4) != 0)) {
      (**(code **)(param_1 + 0x20))();
    }
    if (*(code **)(param_1 + 0x28) != (code *)0x0) {
      if (lVar1 != 0) {
        (**(code **)(param_1 + 0x28))(lVar1);
      }
      lVar1 = 0;
    }
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    *param_2 = -0x80000000;
  }
  return lVar1;
}



// FUNCTION 142503070 FUN_142503070 body=274 status=ok
// SIG undefined FUN_142503070(void)

int * FUN_142503070(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int local_4c;
  
  uVar5 = (*(code *)param_1[1])(param_2);
  lVar2 = *param_1;
  uVar5 = uVar5 & 0x7fffffff;
  iVar8 = *(int *)((longlong)param_1 + 0x34);
  iVar11 = 0;
  lVar6 = (longlong)(ulonglong)(uVar5 ^ 0x4000000) % (longlong)iVar8;
  iVar10 = (int)lVar6;
  local_4c = -1;
  do {
    iVar3 = (int)lVar6;
    lVar6 = (longlong)iVar3;
    uVar1 = *(uint *)(lVar2 + lVar6 * 0x18);
    if (uVar1 == uVar5) {
      cVar4 = (*(code *)param_1[2])(param_2);
      if (cVar4 != '\0') goto LAB_142503165;
      iVar8 = *(int *)((longlong)param_1 + 0x34);
    }
    else if ((int)uVar1 < 0) {
      if (local_4c < 0) {
        local_4c = iVar3;
      }
      if (uVar1 == 0x80000001) goto LAB_14250314b;
    }
    if (iVar11 == 0) {
      iVar11 = (int)((longlong)(ulonglong)uVar5 % (longlong)(iVar8 + -1)) + 1;
    }
    lVar6 = (longlong)(iVar3 + iVar11) % (longlong)iVar8;
  } while ((int)lVar6 != iVar10);
  if ((local_4c < 0) && (local_4c = iVar10, uVar1 != 0x80000001)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_14250314b:
  lVar6 = (longlong)local_4c;
LAB_142503165:
  piVar9 = (int *)(lVar2 + lVar6 * 0x18);
  piVar7 = (int *)0x0;
  if (-1 < *piVar9) {
    piVar7 = piVar9;
  }
  return piVar7;
}



// FUNCTION 142503190 FUN_142503190 body=41 status=ok
// SIG undefined FUN_142503190(void)

undefined8 FUN_142503190(wchar_t *param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if (param_1 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_1);
    uVar2 = FUN_142504d40(param_1,sVar1 & 0xffffffff);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1425031c0 FUN_1425031c0 body=41 status=ok
// SIG undefined FUN_1425031c0(void)

undefined8 FUN_1425031c0(char *param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    uVar2 = FUN_142504d90(param_1,sVar1 & 0xffffffff);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1425031f0 FUN_1425031f0 body=41 status=ok
// SIG undefined FUN_1425031f0(void)

undefined8 FUN_1425031f0(char *param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    uVar2 = FUN_142504de0(param_1,sVar1 & 0xffffffff);
    return uVar2;
  }
  return 0;
}



// FUNCTION 142503270 FUN_142503270 body=60 status=ok
// SIG undefined FUN_142503270(void)

bool FUN_142503270(char *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  
  if (param_1 == param_2) {
    return true;
  }
  bVar2 = false;
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      param_1 = param_1 + 1;
      if (cVar1 != *param_2) goto LAB_1425032a3;
      param_2 = param_2 + 1;
      cVar1 = *param_1;
    }
    cVar1 = '\0';
LAB_1425032a3:
    bVar2 = cVar1 == *param_2;
  }
  return bVar2;
}



// FUNCTION 1425032b0 FUN_1425032b0 body=105 status=ok
// SIG undefined FUN_1425032b0(void)

bool FUN_1425032b0(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == param_2) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
      cVar1 = *param_1;
      while (cVar1 != '\0') {
        cVar1 = FUN_142503910();
        cVar2 = FUN_142503910(*param_2);
        if (cVar1 != cVar2) {
          cVar1 = *param_1;
          goto LAB_14250330c;
        }
        param_2 = param_2 + 1;
        cVar1 = param_1[1];
        param_1 = param_1 + 1;
      }
      cVar1 = '\0';
LAB_14250330c:
      bVar3 = cVar1 == *param_2;
    }
  }
  return bVar3;
}


