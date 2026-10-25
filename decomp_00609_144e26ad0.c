// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144e26ad0 FUN_144e26ad0 body=161 status=ok
// SIG undefined FUN_144e26ad0(void)

void FUN_144e26ad0(longlong param_1,int param_2,int param_3)

{
  if (param_2 < *(int *)(param_1 + 0x108)) {
    param_2 = *(int *)(param_1 + 0x108) + -1;
  }
  if ((*(int *)(param_1 + 0x120) == 0) &&
     ((*(int *)(param_1 + 0x118) != 0 || (*(int *)(param_1 + 0x11c) != 0)))) {
    FUN_144e26a10();
  }
  *(int *)(param_1 + 0x100) = param_2;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(int *)(param_1 + 0x104) = param_3;
  if (((param_3 < *(int *)(param_1 + 0x114)) && (*(int *)(param_1 + 0x110) <= param_3)) &&
     (param_2 < *(int *)(param_1 + 0x10c))) {
    *(undefined4 *)(param_1 + 0x120) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x120) = 1;
  return;
}



// FUNCTION 144e26b80 FUN_144e26b80 body=856 status=ok
// SIG undefined FUN_144e26b80(void)

void FUN_144e26b80(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  
  iVar2 = *(int *)(param_1 + 0x14c);
  iVar6 = iVar2 >> 8;
  iVar10 = param_3 >> 8;
  if (((iVar6 < *(int *)(param_1 + 0x114)) || (iVar10 < *(int *)(param_1 + 0x114))) &&
     ((*(int *)(param_1 + 0x110) <= iVar6 || (*(int *)(param_1 + 0x110) <= iVar10)))) {
    iVar9 = *(int *)(param_1 + 0x148);
    iVar7 = param_2 - iVar9;
    iVar5 = param_2 >> 8;
    iVar13 = iVar9 >> 8;
    iVar11 = param_3 - iVar2;
    uVar12 = iVar9 + iVar13 * -0x100;
    uVar3 = iVar2 + iVar6 * -0x100;
    if ((iVar13 != iVar5) || (iVar6 != iVar10)) {
      if (iVar11 == 0) {
        FUN_144e26ad0(param_1,iVar5,iVar6);
      }
      else if (iVar7 == 0) {
        uVar4 = uVar3;
        if (iVar11 < 1) {
          do {
            *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) - uVar3;
            iVar2 = uVar12 * uVar3;
            iVar6 = iVar6 + -1;
            uVar3 = 0x100;
            *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + iVar2 * -2;
            FUN_144e26ad0(param_1,iVar13,iVar6);
          } while (iVar6 != iVar10);
        }
        else {
          do {
            iVar6 = iVar6 + 1;
            *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + (0x100 - uVar4);
            iVar2 = 0x100 - uVar4;
            uVar4 = 0;
            uVar3 = 0;
            *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + iVar2 * uVar12 * 2;
            FUN_144e26ad0(param_1,iVar13,iVar6);
          } while (iVar6 != iVar10);
        }
      }
      else {
        iVar2 = iVar7 * uVar3 - iVar11 * uVar12;
        if (iVar13 == iVar5) {
          iVar9 = 0;
        }
        else {
          iVar9 = (int)(0xffffff / (longlong)iVar7);
        }
        if (iVar6 == iVar10) {
          iVar8 = 0;
        }
        else {
          iVar8 = (int)(0xffffff / (longlong)iVar11);
        }
        do {
          if ((iVar2 < 1) && (0 < iVar2 + iVar7 * -0x100)) {
            uVar4 = (uint)(iVar9 * iVar2) >> 0x18;
            *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + (uVar4 - uVar3);
            *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + (uVar4 - uVar3) * uVar12;
            iVar13 = iVar13 + -1;
            uVar12 = 0x100;
            uVar3 = uVar4;
            iVar2 = iVar2 + iVar11 * -0x100;
          }
          else {
            iVar1 = iVar2 + iVar7 * -0x100;
            if ((iVar1 < 1) && (0 < (iVar11 - iVar7) * 0x100 + iVar2)) {
              *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + (0x100 - uVar3);
              uVar4 = (uint)-(iVar8 * iVar1) >> 0x18;
              *(int *)(param_1 + 0x118) =
                   *(int *)(param_1 + 0x118) + (uVar4 + uVar12) * (0x100 - uVar3);
              iVar6 = iVar6 + 1;
              uVar12 = uVar4;
              uVar3 = 0;
              iVar2 = iVar1;
            }
            else if (((iVar11 - iVar7) * 0x100 + iVar2 < 1) &&
                    (iVar1 = iVar11 * 0x100 + iVar2, -1 < iVar1)) {
              uVar4 = (uint)(iVar9 * iVar1) >> 0x18;
              *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + (uVar4 - uVar3);
              *(int *)(param_1 + 0x118) =
                   *(int *)(param_1 + 0x118) + (uVar4 - uVar3) * (uVar12 + 0x100);
              iVar13 = iVar13 + 1;
              uVar12 = 0;
              uVar3 = uVar4;
              iVar2 = iVar1;
            }
            else {
              *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) - uVar3;
              iVar1 = iVar8 * iVar2;
              iVar2 = iVar2 + iVar7 * 0x100;
              uVar4 = (uint)-iVar1 >> 0x18;
              iVar1 = (uVar4 + uVar12) * uVar3;
              uVar3 = 0x100;
              *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) - iVar1;
              iVar6 = iVar6 + -1;
              uVar12 = uVar4;
            }
          }
          FUN_144e26ad0(param_1,iVar13,iVar6);
        } while ((iVar13 != iVar5) || (iVar6 != iVar10));
      }
    }
    iVar2 = param_3 + iVar10 * -0x100;
    *(int *)(param_1 + 0x14c) = param_3;
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + (iVar2 - uVar3);
    *(int *)(param_1 + 0x148) = param_2;
    *(int *)(param_1 + 0x118) =
         *(int *)(param_1 + 0x118) + (uVar12 + iVar5 * -0x100 + param_2) * (iVar2 - uVar3);
    return;
  }
  *(int *)(param_1 + 0x148) = param_2;
  *(int *)(param_1 + 0x14c) = param_3;
  return;
}



// FUNCTION 144e26ee0 FUN_144e26ee0 body=448 status=ok
// SIG undefined FUN_144e26ee0(void)

void FUN_144e26ee0(longlong param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_148 [32];
  int local_128 [68];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar6 = *param_2;
  piVar4 = local_128;
  local_128[4] = *(int *)(param_1 + 0x148);
  local_128[5] = *(int *)(param_1 + 0x14c);
  iVar3 = param_2[1];
  iVar8 = *(int *)(param_1 + 0x114);
  local_128[1] = param_3[1] * 4;
  local_128[0] = *param_3 * 4;
  local_128[2] = iVar6 << 2;
  local_128[3] = iVar3 * 4;
  iVar2 = iVar3 * 4 >> 8;
  if ((((local_128[1] >> 8 < iVar8) || (iVar2 < iVar8)) || (local_128[5] >> 8 < iVar8)) &&
     (((iVar8 = *(int *)(param_1 + 0x110), iVar8 <= local_128[1] >> 8 || (iVar8 <= iVar2)) ||
      (iVar8 <= local_128[5] >> 8)))) {
    iVar8 = local_128[4] + iVar6 * -8 + local_128[0];
    if (iVar8 < 0) {
      iVar8 = (iVar6 * 8 - local_128[4]) + *param_3 * -4;
    }
    iVar6 = local_128[5] + iVar3 * -8 + local_128[1];
    if (iVar6 < 0) {
      iVar6 = (iVar3 * 8 - local_128[5]) + param_3[1] * -4;
    }
    uVar5 = 1;
    if (iVar8 < iVar6) {
      iVar8 = iVar6;
    }
    for (; 0x40 < iVar8; iVar8 = iVar8 >> 2) {
      uVar5 = uVar5 * 2;
    }
    do {
      uVar7 = 1;
      uVar1 = uVar5 & 1;
      while (uVar1 == 0) {
        uVar7 = uVar7 * 2;
        piVar4[8] = piVar4[4];
        iVar6 = (piVar4[4] + piVar4[2]) / 2;
        piVar4[6] = iVar6;
        iVar3 = (*piVar4 + piVar4[2]) / 2;
        piVar4[2] = iVar3;
        piVar4[4] = (iVar3 + iVar6) / 2;
        piVar4[9] = piVar4[5];
        iVar6 = (piVar4[5] + piVar4[3]) / 2;
        piVar4[7] = iVar6;
        iVar3 = (piVar4[1] + piVar4[3]) / 2;
        piVar4[3] = iVar3;
        piVar4[5] = (iVar3 + iVar6) / 2;
        piVar4 = piVar4 + 4;
        uVar1 = uVar5 & uVar7;
      }
      FUN_144e26b80(param_1,*piVar4,piVar4[1]);
      piVar4 = piVar4 + -4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  else {
    *(int *)(param_1 + 0x148) = local_128[0];
    *(int *)(param_1 + 0x14c) = local_128[1];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_148);
}



// FUNCTION 144e270c0 FUN_144e270c0 body=765 status=ok
// SIG undefined FUN_144e270c0(void)

void FUN_144e270c0(longlong param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_1e8 [32];
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  undefined4 local_1b0;
  int local_1ac;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  piVar6 = &local_1c8;
  iVar3 = *(int *)(param_1 + 0x114);
  local_1c0 = *param_3 << 2;
  local_1c4 = param_4[1] << 2;
  local_1b8 = *param_2 << 2;
  local_1b0 = *(undefined4 *)(param_1 + 0x148);
  local_1c8 = *param_4 << 2;
  local_1bc = param_3[1] << 2;
  local_1b4 = param_2[1] << 2;
  local_1ac = *(int *)(param_1 + 0x14c);
  iVar2 = (param_3[1] << 2) >> 8;
  iVar4 = (param_2[1] << 2) >> 8;
  iVar8 = *(int *)(param_1 + 0x14c) >> 8;
  if (((((local_1c4 >> 8 < iVar3) || (iVar2 < iVar3)) || (iVar4 < iVar3)) || (iVar8 < iVar3)) &&
     (((iVar3 = *(int *)(param_1 + 0x110), iVar3 <= local_1c4 >> 8 || (iVar3 <= iVar2)) ||
      ((iVar3 <= iVar4 || (iVar3 <= iVar8)))))) {
    do {
      while( true ) {
        iVar3 = *piVar6;
        uVar10 = piVar6[6] - iVar3;
        iVar2 = piVar6[1];
        uVar11 = piVar6[7] - iVar2;
        iVar4 = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f);
        iVar8 = (uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f);
        if (iVar8 < iVar4) {
          iVar4 = (iVar8 * 3 >> 3) + iVar4;
        }
        else {
          iVar4 = (iVar4 * 3 >> 3) + iVar8;
        }
        if (iVar4 < 0x8000) break;
LAB_144e272c2:
        iVar4 = piVar6[2];
        piVar6[0xc] = piVar6[6];
        iVar8 = (iVar3 + iVar4) / 2;
        piVar6[2] = iVar8;
        iVar9 = (piVar6[6] + piVar6[4]) / 2;
        piVar6[10] = iVar9;
        iVar3 = piVar6[3];
        iVar4 = (piVar6[4] + iVar4) / 2;
        iVar8 = (iVar4 + iVar8) / 2;
        piVar6[4] = iVar8;
        piVar6[0xd] = piVar6[7];
        iVar4 = (iVar9 + iVar4) / 2;
        piVar6[8] = iVar4;
        piVar6[6] = (iVar4 + iVar8) / 2;
        iVar2 = (iVar2 + iVar3) / 2;
        piVar6[3] = iVar2;
        iVar4 = (piVar6[7] + piVar6[5]) / 2;
        piVar6[0xb] = iVar4;
        iVar3 = (piVar6[5] + iVar3) / 2;
        iVar2 = (iVar3 + iVar2) / 2;
        piVar6[5] = iVar2;
        iVar3 = (iVar4 + iVar3) / 2;
        piVar6[9] = iVar3;
        piVar6[7] = (iVar3 + iVar2) / 2;
        piVar6 = piVar6 + 6;
      }
      iVar9 = piVar6[2] - iVar3;
      iVar8 = piVar6[3] - iVar2;
      uVar1 = iVar9 * uVar11 - iVar8 * uVar10;
      uVar5 = (int)uVar1 >> 0x1f;
      if (iVar4 * 0x2a < (int)((uVar1 ^ uVar5) - uVar5)) goto LAB_144e272c2;
      iVar12 = piVar6[4] - iVar3;
      iVar7 = piVar6[5] - iVar2;
      uVar1 = iVar12 * uVar11 - iVar7 * uVar10;
      uVar5 = (int)uVar1 >> 0x1f;
      if (((iVar4 * 0x2a < (int)((uVar1 ^ uVar5) - uVar5)) ||
          (0 < (int)((iVar8 - uVar11) * iVar8 + (iVar9 - uVar10) * iVar9))) ||
         (0 < (int)((iVar7 - uVar11) * iVar7 + (iVar12 - uVar10) * iVar12))) goto LAB_144e272c2;
      FUN_144e26b80(param_1,iVar3,iVar2);
      if (piVar6 == &local_1c8) goto LAB_144e273ad;
      piVar6 = piVar6 + -6;
    } while( true );
  }
  *(int *)(param_1 + 0x148) = *param_4 << 2;
  *(int *)(param_1 + 0x14c) = local_1c4;
LAB_144e273ad:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_1e8);
}



// FUNCTION 144e273d0 FUN_144e273d0 body=272 status=ok
// SIG undefined FUN_144e273d0(void)

void FUN_144e273d0(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 *_Dst;
  uint uVar1;
  undefined2 local_res8;
  undefined2 local_resa;
  undefined1 local_resc;
  
  uVar1 = param_4 >> 9;
  if ((int)uVar1 < 0) {
    uVar1 = -uVar1 - 1;
  }
  if ((*(byte *)(param_1 + 0x170) & 2) == 0) {
    if (0xff < (int)uVar1) {
      uVar1 = 0xff;
    }
  }
  else {
    uVar1 = uVar1 & 0x1ff;
    if (0xff < uVar1) {
      uVar1 = 0x1ff - uVar1;
    }
  }
  local_resc = (undefined1)uVar1;
  if (*(code **)(param_1 + 0x188) == (code *)0x0) {
    _Dst = (undefined1 *)
           ((*(longlong *)(param_1 + 0x178) - (longlong)(*(int *)(param_1 + 0x180) * param_3)) +
           (longlong)param_2);
    switch(param_5) {
    case 0:
      return;
    case 7:
      *_Dst = local_resc;
      _Dst = _Dst + 1;
    case 6:
      *_Dst = local_resc;
      _Dst = _Dst + 1;
    case 5:
      *_Dst = local_resc;
      _Dst = _Dst + 1;
    case 4:
      *_Dst = local_resc;
      _Dst = _Dst + 1;
    case 3:
      *_Dst = local_resc;
      _Dst = _Dst + 1;
    case 2:
      *_Dst = local_resc;
      _Dst = _Dst + 1;
    case 1:
      *_Dst = local_resc;
      return;
    default:
      memset(_Dst,uVar1 & 0xff,(longlong)param_5);
      return;
    }
  }
  local_res8 = (undefined2)param_2;
  local_resa = (undefined2)param_5;
  (**(code **)(param_1 + 0x188))(param_3,1,&local_res8,*(undefined8 *)(param_1 + 400));
  return;
}



// FUNCTION 144e27500 FUN_144e27500 body=622 status=ok
// SIG undefined FUN_144e27500(void)

void FUN_144e27500(longlong param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 *_Dst;
  int iVar7;
  undefined2 local_res8;
  undefined2 local_resa;
  undefined1 local_resc;
  undefined2 local_res10;
  undefined2 local_res12;
  undefined1 local_res14;
  
  iVar3 = *(int *)(param_1 + 0x110);
  if (iVar3 < *(int *)(param_1 + 0x114)) {
    do {
      iVar7 = *(int *)(param_1 + 0x108);
      iVar4 = 0;
      piVar5 = *(int **)(*(longlong *)(param_1 + 0x128) +
                        (longlong)(iVar3 - *(int *)(param_1 + 0x110)) * 8);
      if (piVar5 != (int *)0x0) {
        do {
          if ((iVar4 != 0) && (iVar7 < *piVar5)) {
            iVar6 = *piVar5 - iVar7;
            uVar2 = iVar4 >> 9;
            if ((int)uVar2 < 0) {
              uVar2 = -uVar2 - 1;
            }
            if ((*(byte *)(param_1 + 0x170) & 2) == 0) {
              if (0xff < (int)uVar2) {
                uVar2 = 0xff;
              }
            }
            else {
              uVar2 = uVar2 & 0x1ff;
              if (0xff < uVar2) {
                uVar2 = 0x1ff - uVar2;
              }
            }
            uVar1 = (undefined1)uVar2;
            if (*(code **)(param_1 + 0x188) == (code *)0x0) {
              _Dst = (undefined1 *)
                     ((*(longlong *)(param_1 + 0x178) -
                      (longlong)(*(int *)(param_1 + 0x180) * iVar3)) + (longlong)iVar7);
              switch(iVar6) {
              case 0:
                break;
              case 7:
                *_Dst = uVar1;
                _Dst = _Dst + 1;
              case 6:
                *_Dst = uVar1;
                _Dst = _Dst + 1;
              case 5:
                *_Dst = uVar1;
                _Dst = _Dst + 1;
              case 4:
                *_Dst = uVar1;
                _Dst = _Dst + 1;
              case 3:
                *_Dst = uVar1;
                _Dst = _Dst + 1;
              case 2:
                *_Dst = uVar1;
                _Dst = _Dst + 1;
              case 1:
                *_Dst = uVar1;
                break;
              default:
                memset(_Dst,uVar2 & 0xff,(longlong)iVar6);
              }
            }
            else {
              local_resa = (undefined2)iVar6;
              local_res8 = (undefined2)iVar7;
              local_resc = uVar1;
              (**(code **)(param_1 + 0x188))(iVar3,1,&local_res8,*(undefined8 *)(param_1 + 400));
            }
          }
          iVar4 = iVar4 + piVar5[1] * 0x200;
          if (iVar4 - piVar5[2] != 0) {
            iVar7 = *piVar5;
            if (*(int *)(param_1 + 0x108) <= iVar7) {
              uVar2 = iVar4 - piVar5[2] >> 9;
              if ((int)uVar2 < 0) {
                uVar2 = -uVar2 - 1;
              }
              if ((*(byte *)(param_1 + 0x170) & 2) == 0) {
                if (0xff < (int)uVar2) {
                  uVar2 = 0xff;
                }
              }
              else {
                uVar2 = uVar2 & 0x1ff;
                if (0xff < uVar2) {
                  uVar2 = 0x1ff - uVar2;
                }
              }
              if (*(code **)(param_1 + 0x188) == (code *)0x0) {
                *(char *)((*(longlong *)(param_1 + 0x178) -
                          (longlong)(*(int *)(param_1 + 0x180) * iVar3)) + (longlong)iVar7) =
                     (char)uVar2;
              }
              else {
                local_res10 = (undefined2)iVar7;
                local_res12 = 1;
                local_res14 = (char)uVar2;
                (**(code **)(param_1 + 0x188))(iVar3,1,&local_res10,*(undefined8 *)(param_1 + 400));
              }
            }
          }
          iVar7 = *piVar5;
          piVar5 = *(int **)(piVar5 + 4);
          iVar7 = iVar7 + 1;
        } while (piVar5 != (int *)0x0);
        if (iVar4 != 0) {
          FUN_144e273d0(param_1,iVar7,iVar3,iVar4,*(int *)(param_1 + 0x10c) - iVar7);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x114));
  }
  return;
}



// FUNCTION 144e27790 FUN_144e27790 body=133 status=ok
// SIG undefined FUN_144e27790(void)

undefined4 FUN_144e27790(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  
  local_18 = 0;
  iVar1 = __intrinsic_setjmp(param_1,auStack_38);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      FUN_1451d5810();
    }
    local_18 = FUN_144b5a6d0(param_1 + 0x150,&PTR_FUN_149a1dfc0,param_1);
    if (param_2 != 0) {
      FUN_1451d5820();
    }
    if (*(int *)(param_1 + 0x120) == 0) {
      FUN_144e26a10(param_1);
      return local_18;
    }
  }
  else {
    local_18 = 0x40;
  }
  return local_18;
}



// FUNCTION 144e27820 FUN_144e27820 body=557 status=ok
// SIG undefined FUN_144e27820(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144e27820(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  size_t _Size;
  int iVar8;
  undefined1 auStack_40e8 [32];
  undefined4 local_40c8;
  ulonglong local_40c0;
  size_t local_40b8;
  int local_40a8;
  undefined4 local_40a4;
  undefined1 local_4028 [16368];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_40e8;
  iVar1 = *(int *)(param_1 + 0x114);
  iVar8 = *(int *)(param_1 + 0x110);
  local_40c8 = 0;
  local_40c0 = (ulonglong)(iVar1 - iVar8);
  if (0x55 < local_40c0) {
    uVar4 = (local_40c0 + 0x54) / 0x55;
    local_40c0 = ((local_40c0 - 1) + uVar4) / uVar4;
  }
  _Size = local_40c0 * 8;
  uVar4 = (_Size + 0x17) / 0x18;
  *(undefined1 **)(param_1 + 0x128) = local_4028;
  *(undefined1 **)(param_1 + 0x130) = local_4028 + uVar4 * 0x18;
  *(ulonglong *)(param_1 + 0x138) = 0x2aa - uVar4;
  local_40b8 = _Size;
  while (iVar8 < iVar1) {
    *(int *)(param_1 + 0x110) = iVar8;
    iVar8 = iVar8 + (int)local_40c0;
    local_40a4 = *(undefined4 *)(param_1 + 0x110);
    local_40a8 = iVar1;
    if (iVar8 < iVar1) {
      local_40a8 = iVar8;
    }
    *(int *)(param_1 + 0x114) = local_40a8;
    piVar5 = &local_40a8;
    do {
      iVar7 = *piVar5;
      piVar6 = piVar5 + 1;
      iVar2 = *piVar6;
      memset(*(void **)(param_1 + 0x128),0,_Size);
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x120) = 1;
      *(int *)(param_1 + 0x110) = iVar2;
      *(int *)(param_1 + 0x114) = iVar7;
      iVar3 = FUN_144e27790(param_1);
      local_40c8 = 1;
      if (iVar3 == 0) {
        FUN_144e27500(param_1);
        piVar6 = piVar5 + -1;
      }
      else {
        if ((iVar3 != 0x40) || (iVar7 = iVar7 - iVar2 >> 1, iVar7 == 0)) goto LAB_144e27a0e;
        piVar5[2] = iVar2;
        *piVar6 = iVar2 + iVar7;
      }
      piVar5 = piVar6;
      _Size = local_40b8;
    } while (&local_40a8 <= piVar6);
    _Size = local_40c0 * 8;
  }
LAB_144e27a0e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_40e8);
}



// FUNCTION 144e27a60 FUN_144e27a60 body=1273 status=ok
// SIG undefined FUN_144e27a60(void)

void FUN_144e27a60(longlong param_1,longlong *param_2,int param_3,int *param_4,int param_5)

{
  uint *puVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  void *_Src;
  int iVar5;
  uint uVar6;
  size_t _Size;
  ulonglong uVar7;
  size_t sVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 *_Dst;
  undefined1 *puVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  int *local_f0;
  int local_e8 [2];
  undefined8 local_e0;
  int local_d8;
  uint local_d4;
  ulonglong local_d0;
  uint local_c8;
  int local_c4;
  void *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  uint *local_a8;
  longlong *local_a0;
  undefined4 local_98;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e0 = *(undefined8 *)(param_1 + 0x10);
  local_b0 = param_2 + 0x13;
  puVar1 = (uint *)(param_2 + 0xd);
  iVar16 = 0;
  iVar15 = 0;
  local_e8[0] = 0;
  iVar5 = 0;
  iVar18 = 0;
  plVar14 = param_2;
  local_b8 = param_2;
  if ((int)param_2[0xc] == *(int *)(param_1 + 0x20)) {
    if (param_3 == param_5) {
      if ((*(byte *)(param_2[0x1e] + 8) & 1) != 0) {
        FUN_144b56350(local_e0,param_2[0xf]);
        param_2[0xf] = 0;
        *(uint *)(param_2[0x1e] + 8) = *(uint *)(param_2[0x1e] + 8) & 0xfffffffe;
      }
      cVar3 = FUN_144b58410(param_2,param_3,param_4);
      if (cVar3 == '\0') {
        local_f0 = local_e8;
        local_f8 = 0;
        lVar4 = FUN_144b561b0(local_e0,(int)param_2[0xe],0,*puVar1);
        param_2[0xf] = lVar4;
        if (local_e8[0] == 0) {
          *(uint *)(param_2[0x1e] + 8) = *(uint *)(param_2[0x1e] + 8) | 1;
          iVar16 = (int)param_2[0x12] * -0x40;
          if (*(char *)((longlong)param_2 + 0x82) == '\x06') {
            iVar5 = *puVar1 << 6;
            iVar5 = iVar5 / 3 + (iVar5 >> 0x1f) +
                    (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f);
          }
          else {
            iVar5 = *puVar1 << 6;
          }
          iVar5 = *(int *)((longlong)param_2 + 0x94) * -0x40 + iVar5;
          if (param_4 != (int *)0x0) {
            iVar16 = iVar16 + *param_4;
            iVar5 = iVar5 + param_4[1];
          }
          if ((iVar16 != 0) || (iVar5 != 0)) {
            FUN_144b5ada0(param_2 + 0x13,iVar16,iVar5);
          }
          local_a0 = param_2 + 0x13;
          local_98 = 1;
          local_a8 = puVar1;
          if (param_3 == 3) {
            lVar4 = *param_2;
            local_d0 = CONCAT44(local_d0._4_4_,*puVar1);
            local_d4 = *(uint *)(param_2 + 0xe);
            uVar6 = *(uint *)((longlong)param_2 + 0x6c) / 3;
            local_c8 = uVar6;
            FUN_144b5ada0(local_a0,-*(int *)(lVar4 + 0x158),-*(int *)(lVar4 + 0x15c));
            local_e8[0] = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_a8);
            if (local_e8[0] == 0) {
              param_2[0xf] = param_2[0xf] + (ulonglong)uVar6;
              FUN_144b5ada0(param_2 + 0x13,*(int *)(lVar4 + 0x158) - *(int *)(lVar4 + 0x160),
                            *(int *)(lVar4 + 0x15c) - *(int *)(lVar4 + 0x164));
              local_e8[0] = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_a8)
              ;
              param_2[0xf] = param_2[0xf] - (ulonglong)uVar6;
              if (local_e8[0] == 0) {
                param_2[0xf] = param_2[0xf] + (ulonglong)(uVar6 * 2);
                FUN_144b5ada0(param_2 + 0x13,*(int *)(lVar4 + 0x160) - *(int *)(lVar4 + 0x168),
                              *(int *)(lVar4 + 0x164) - *(int *)(lVar4 + 0x16c));
                local_e8[0] = (**(code **)(param_1 + 0x68))
                                        (*(undefined8 *)(param_1 + 0x60),&local_a8);
                param_2[0xf] = param_2[0xf] - (ulonglong)(uVar6 * 2);
                if (local_e8[0] == 0) {
                  iVar16 = iVar16 - *(int *)(lVar4 + 0x168);
                  iVar5 = iVar5 - *(int *)(lVar4 + 0x16c);
                  _Size = (size_t)(int)local_d4;
                  local_d8 = iVar5;
                  local_c4 = iVar16;
                  _Src = (void *)FUN_144b560d0(local_e0,local_d4,local_e8);
                  uVar6 = local_c8;
                  local_c0 = _Src;
                  if (local_e8[0] == 0) {
                    if ((int)local_d0 != 0) {
                      uVar17 = (ulonglong)local_c8;
                      uVar13 = 0;
                      sVar8 = _Size;
                      local_d0 = local_d0 & 0xffffffff;
                      do {
                        _Dst = (undefined1 *)(uVar13 + param_2[0xf]);
                        if (uVar6 != 0) {
                          uVar10 = uVar6 * 2;
                          uVar7 = uVar17;
                          puVar9 = (undefined1 *)((longlong)_Src + 2);
                          puVar12 = _Dst;
                          do {
                            uVar11 = (ulonglong)uVar10;
                            uVar2 = *puVar12;
                            puVar12 = puVar12 + 1;
                            puVar9[-2] = uVar2;
                            puVar9[-1] = _Dst[uVar10 - uVar6];
                            uVar10 = uVar10 + 1;
                            *puVar9 = _Dst[uVar11];
                            uVar7 = uVar7 - 1;
                            puVar9 = puVar9 + 3;
                          } while (uVar7 != 0);
                          sVar8 = (size_t)local_d4;
                        }
                        memcpy(_Dst,_Src,_Size);
                        uVar13 = (ulonglong)(uint)((int)uVar13 + (int)sVar8);
                        local_d0 = local_d0 - 1;
                      } while (local_d0 != 0);
                      local_d0 = 0;
                      plVar14 = local_b8;
                      iVar16 = local_c4;
                      iVar5 = local_d8;
                    }
                    FUN_144b56350(local_e0,local_c0);
                    goto LAB_144e27ee3;
                  }
                }
              }
            }
          }
          else if (param_3 == 4) {
            lVar4 = *param_2;
            iVar15 = (int)param_2[0xe];
            *(int *)(param_2 + 0xe) = iVar15 * 3;
            *puVar1 = *puVar1 / 3;
            FUN_144b5ada0(local_a0,-*(int *)(lVar4 + 0x15c),*(int *)(lVar4 + 0x158));
            local_e8[0] = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_a8);
            if (local_e8[0] == 0) {
              param_2[0xf] = param_2[0xf] + (longlong)iVar15;
              FUN_144b5ada0(param_2 + 0x13,*(int *)(lVar4 + 0x15c) - *(int *)(lVar4 + 0x164),
                            *(int *)(lVar4 + 0x160) - *(int *)(lVar4 + 0x158));
              local_e8[0] = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_a8)
              ;
              param_2[0xf] = param_2[0xf] - (longlong)iVar15;
              if (local_e8[0] == 0) {
                param_2[0xf] = param_2[0xf] + (longlong)(iVar15 * 2);
                FUN_144b5ada0(param_2 + 0x13,*(int *)(lVar4 + 0x164) - *(int *)(lVar4 + 0x16c),
                              *(int *)(lVar4 + 0x168) - *(int *)(lVar4 + 0x160));
                local_e8[0] = (**(code **)(param_1 + 0x68))
                                        (*(undefined8 *)(param_1 + 0x60),&local_a8);
                param_2[0xf] = param_2[0xf] - (longlong)(iVar15 * 2);
                if (local_e8[0] == 0) {
                  iVar16 = iVar16 - *(int *)(lVar4 + 0x16c);
                  iVar15 = (int)param_2[0xe];
                  iVar5 = iVar5 + *(int *)(lVar4 + 0x168);
                  *(int *)(param_2 + 0xe) =
                       iVar15 / 3 + (iVar15 >> 0x1f) +
                       (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) & 0xffffffffU) >>
                            0x1f);
                  *puVar1 = *puVar1 * 3;
                  *(undefined4 *)(param_2 + 0xc) = 0x62697473;
                  goto LAB_144e27f25;
                }
              }
            }
          }
          else {
            local_e8[0] = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_a8);
LAB_144e27ee3:
            if (local_e8[0] == 0) {
              *(undefined4 *)(plVar14 + 0xc) = 0x62697473;
              goto LAB_144e27f25;
            }
          }
        }
      }
      else {
        local_e8[0] = 0x62;
        iVar16 = iVar15;
        iVar5 = iVar18;
      }
    }
    else {
      local_e8[0] = 0x13;
      iVar16 = iVar15;
      iVar5 = iVar18;
    }
  }
  else {
    local_e8[0] = 6;
    iVar16 = iVar15;
    iVar5 = iVar18;
  }
  if ((*(byte *)(plVar14[0x1e] + 8) & 1) != 0) {
    FUN_144b56350(local_e0,param_2[0xf],local_e8[0]);
    param_2[0xf] = 0;
    *(uint *)(plVar14[0x1e] + 8) = *(uint *)(plVar14[0x1e] + 8) & 0xfffffffe;
  }
LAB_144e27f25:
  if ((iVar16 != 0) || (iVar5 != 0)) {
    FUN_144b5ada0(local_b0,-iVar16,-iVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_118);
}



// FUNCTION 144e27fa0 FUN_144e27fa0 body=107 status=ok
// SIG undefined FUN_144e27fa0(void)

short FUN_144e27fa0(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar3 = uVar4 >> 1;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      if ((uVar4 < uVar3) || (uVar3 < uVar5)) {
        uVar3 = uVar4 + uVar5 >> 1;
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar3 * 8);
      if (param_2 == uVar1) {
        return *(short *)(*(longlong *)(param_1 + 0x20) + 4 + (ulonglong)uVar3 * 8) + 1;
      }
      uVar2 = uVar3;
      if (uVar1 <= param_2) {
        uVar5 = uVar3 + 1;
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
      uVar3 = uVar3 + (param_2 - uVar1);
    } while (uVar5 < uVar4);
  }
  return 0;
}



// FUNCTION 144e28010 FUN_144e28010 body=142 status=ok
// SIG undefined FUN_144e28010(void)

uint FUN_144e28010(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar7 = 0;
  lVar3 = *(longlong *)(param_1 + 0x20);
  uVar10 = *param_2 + 1;
  uVar5 = uVar1 >> 1;
  uVar9 = uVar1;
  uVar8 = 0;
  uVar2 = uVar7;
  if (uVar1 != 0) {
    do {
      uVar8 = uVar2;
      if ((uVar9 < uVar5) || (uVar5 < uVar8)) {
        uVar5 = uVar9 + uVar8 >> 1;
      }
      uVar6 = (ulonglong)uVar5;
      uVar2 = *(uint *)(lVar3 + uVar6 * 8);
      if (uVar10 == uVar2) goto LAB_144e2807f;
      uVar4 = uVar5;
      if (uVar2 <= uVar10) {
        uVar8 = uVar5 + 1;
        uVar4 = uVar9;
      }
      uVar9 = uVar4;
      uVar5 = uVar5 + (uVar10 - uVar2);
      uVar2 = uVar8;
    } while (uVar8 < uVar9);
  }
  uVar10 = 0;
  if (uVar8 < uVar1) {
    uVar6 = (ulonglong)uVar8;
    uVar10 = *(uint *)(lVar3 + uVar6 * 8);
LAB_144e2807f:
    uVar7 = (uint)(ushort)(*(short *)(lVar3 + 4 + uVar6 * 8) + 1);
  }
  *param_2 = uVar10;
  return uVar7;
}



// FUNCTION 144e280a0 FUN_144e280a0 body=200 status=ok
// SIG undefined FUN_144e280a0(void)

void FUN_144e280a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    FUN_144e28e60(*(undefined8 *)(param_1 + 0xe8));
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0xe0) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 144e28170 FUN_144e28170 body=1729 status=ok
// SIG undefined FUN_144e28170(void)

void FUN_144e28170(undefined8 param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  ushort uVar2;
  bool bVar3;
  undefined8 *puVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  short *psVar11;
  longlong lVar12;
  longlong lVar13;
  char *pcVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  short sVar20;
  short sVar21;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  int *local_70;
  int local_68 [2];
  undefined8 *local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = param_2[0x13];
  uVar19 = 0;
  local_68[0] = 0;
  local_60 = (undefined8 *)0x0;
  local_68[0] = FUN_144b597a0(param_1,0);
  if (local_68[0] != 0) goto LAB_144e28825;
  local_50 = &DAT_100000001;
  uStack_48 = 0x800000000;
  local_68[0] = FUN_144e28be0(param_1,uVar1,&local_50,&local_60);
  puVar4 = local_60;
  if ((char)local_68[0] == -0x50) {
    FUN_144e280a0(param_2,local_68[0]);
    goto LAB_144e28825;
  }
  if (local_68[0] != 0) goto LAB_144e28825;
  param_2[0x1d] = local_60;
  if ((0 < param_3) && ((short)param_3 != 0)) {
    FUN_144e280a0(param_2,0);
    goto LAB_144e28825;
  }
  *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 0x12;
  *param_2 = 1;
  if ((local_60 == (undefined8 *)0x0) || (*(int *)(local_60 + 0xb) == 0)) {
LAB_144e282ff:
    param_2[3] = 0;
  }
  else {
    plVar9 = (longlong *)FUN_144b59280("SPACING",local_60[0xf]);
    if ((plVar9 != (longlong *)0x0) &&
       ((((lVar12 = puVar4[0xc] + *plVar9 * 0x18, lVar12 != 0 && (*(int *)(lVar12 + 8) == 1)) &&
         (*(char **)(lVar12 + 0x10) != (char *)0x0)) &&
        ((bVar5 = **(char **)(lVar12 + 0x10) + 0xbd, bVar5 < 0x2b &&
         ((0x40100000401U >> ((ulonglong)bVar5 & 0x3f) & 1) != 0)))))) {
      *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 4;
    }
    if (((*(int *)(puVar4 + 0xb) == 0) ||
        (plVar9 = (longlong *)FUN_144b59280("FAMILY_NAME",puVar4[0xf]), plVar9 == (longlong *)0x0))
       || ((lVar12 = puVar4[0xc] + *plVar9 * 0x18, lVar12 == 0 ||
           (lVar12 = *(longlong *)(lVar12 + 0x10), lVar12 == 0)))) goto LAB_144e282ff;
    uVar10 = FUN_144b56360(uVar1,lVar12,local_68);
    param_2[3] = uVar10;
    if (local_68[0] != 0) goto LAB_144e28825;
  }
  local_68[0] = FUN_144e2b7d0(param_2);
  if (local_68[0] != 0) goto LAB_144e28825;
  iVar15 = *(int *)((longlong)puVar4 + 0x34);
  *(undefined4 *)(param_2 + 5) = 1;
  *(int *)(param_2 + 2) = iVar15 + 1;
  local_70 = local_68;
  local_78 = 0;
  psVar11 = (short *)FUN_144b561b0(uVar1,0x10,0,1);
  param_2[6] = psVar11;
  if (local_68[0] != 0) goto LAB_144e28825;
  psVar11[0] = 0;
  psVar11[1] = 0;
  psVar11[2] = 0;
  psVar11[3] = 0;
  sVar21 = 0;
  psVar11[4] = 0;
  psVar11[5] = 0;
  psVar11[6] = 0;
  psVar11[7] = 0;
  if (0xfffe < *(int *)((longlong)puVar4 + 0x2c) + 0x7fffU) {
    *(uint *)((longlong)puVar4 + 0x2c) =
         (*(int *)((longlong)puVar4 + 0x2c) >> 0x1f & 0xffff0002U) + 0x7fff;
  }
  if (0xfffe < *(int *)(puVar4 + 6) + 0x7fffU) {
    *(uint *)(puVar4 + 6) = (*(int *)(puVar4 + 6) >> 0x1f & 0xffff0002U) + 0x7fff;
  }
  *psVar11 = *(short *)((longlong)puVar4 + 0x2c) + *(short *)(puVar4 + 6);
  lVar12 = FUN_144e29050(puVar4,"AVERAGE_WIDTH");
  if (lVar12 == 0) {
    sVar20 = FUN_144b55580((int)*psVar11,2,3);
  }
  else if (*(int *)(lVar12 + 0x10) + 0x4fff1U < 0x9ffe3) {
    iVar15 = *(int *)(lVar12 + 0x10) + 5;
    sVar20 = ((short)(iVar15 / 10) + (short)(iVar15 >> 0x1f)) -
             (short)((longlong)iVar15 * 0x66666667 >> 0x3f);
    if (sVar20 < 0) {
      sVar20 = -sVar20;
    }
  }
  else {
    sVar20 = 0x7fff;
  }
  psVar11[1] = sVar20;
  lVar12 = FUN_144e29050(puVar4,"POINT_SIZE");
  if (lVar12 == 0) {
    uVar6 = *(uint *)((longlong)puVar4 + 0x14);
    if (uVar6 == 0) {
      uVar6 = (uint)psVar11[1];
LAB_144e2847f:
      iVar15 = uVar6 << 6;
      goto LAB_144e28482;
    }
    if (uVar6 < 0x8000) goto LAB_144e2847f;
    psVar11[2] = 0x7fff;
    psVar11[3] = 0;
  }
  else {
    iVar15 = *(int *)(lVar12 + 0x10);
    if (iVar15 + 0x504c2U < 0xa0985) {
      if (iVar15 < 0) {
        iVar15 = -iVar15;
      }
      iVar15 = FUN_144b55580(iVar15,0x70800,0x11a4e);
    }
    else {
      iVar15 = 0x7fff;
    }
LAB_144e28482:
    *(int *)(psVar11 + 2) = iVar15;
  }
  lVar12 = FUN_144e29050(puVar4,"PIXEL_SIZE");
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0x10) + 0x7fffU < 0xffff) {
      iVar15 = (int)*(short *)(lVar12 + 0x10);
      if (*(short *)(lVar12 + 0x10) < 0) {
        iVar15 = -iVar15;
      }
      *(int *)(psVar11 + 6) = iVar15 << 6;
    }
    else {
      psVar11[6] = -0x40;
      psVar11[7] = 0x1f;
    }
  }
  lVar12 = FUN_144e29050(puVar4,"RESOLUTION_X");
  if (lVar12 == 0) {
    iVar15 = *(int *)(puVar4 + 3);
  }
  else {
    iVar15 = *(int *)(lVar12 + 0x10);
  }
  sVar20 = sVar21;
  if (iVar15 != 0) {
    if (iVar15 + 0x7fffU < 0xffff) {
      uVar2 = (short)(ushort)iVar15 >> 0xf;
      sVar20 = ((ushort)iVar15 ^ uVar2) - uVar2;
    }
    else {
      sVar20 = 0x7fff;
    }
  }
  lVar12 = FUN_144e29050(puVar4,"RESOLUTION_Y");
  if (lVar12 == 0) {
    iVar15 = *(int *)((longlong)puVar4 + 0x1c);
  }
  else {
    iVar15 = *(int *)(lVar12 + 0x10);
  }
  if (iVar15 != 0) {
    if (iVar15 + 0x7fffU < 0xffff) {
      uVar2 = (short)(ushort)iVar15 >> 0xf;
      sVar21 = ((ushort)iVar15 ^ uVar2) - uVar2;
    }
    else {
      sVar21 = 0x7fff;
    }
  }
  if (*(int *)(psVar11 + 6) == 0) {
    *(undefined4 *)(psVar11 + 6) = *(undefined4 *)(psVar11 + 2);
    if (sVar21 != 0) {
      uVar7 = FUN_144b55580(*(undefined4 *)(psVar11 + 2),(int)sVar21,0x48);
      *(undefined4 *)(psVar11 + 6) = uVar7;
    }
  }
  if ((sVar20 == 0) || (sVar21 == 0)) {
    uVar7 = *(undefined4 *)(psVar11 + 6);
  }
  else {
    uVar7 = FUN_144b55580(*(undefined4 *)(psVar11 + 6),(int)sVar20,(int)sVar21);
  }
  *(undefined4 *)(psVar11 + 4) = uVar7;
  local_70 = local_68;
  lVar12 = puVar4[8];
  local_78 = 0;
  uVar10 = FUN_144b561b0(uVar1,8,0,*(undefined4 *)((longlong)puVar4 + 0x34));
  param_2[0x1e] = uVar10;
  if (local_68[0] != 0) goto LAB_144e28825;
  *(undefined4 *)(param_2 + 0x1f) = 0;
  uVar18 = uVar19;
  if (*(int *)((longlong)puVar4 + 0x34) != 0) {
    do {
      iVar15 = (int)uVar18;
      *(undefined4 *)(uVar18 * 8 + param_2[0x1e]) = *(undefined4 *)(lVar12 + 8 + uVar18 * 0x30);
      *(short *)(uVar18 * 8 + 4 + param_2[0x1e]) = (short)uVar18;
      if (*(int *)(lVar12 + 8 + uVar18 * 0x30) == *(int *)(puVar4 + 5)) {
        iVar8 = *(int *)(param_2 + 0x1f);
        if (iVar15 != -1) {
          iVar8 = iVar15;
        }
        *(int *)(param_2 + 0x1f) = iVar8;
      }
      uVar18 = (ulonglong)(iVar15 + 1U);
    } while (iVar15 + 1U < *(uint *)((longlong)puVar4 + 0x34));
  }
  bVar3 = false;
  lVar12 = FUN_144e29050(puVar4,"CHARSET_REGISTRY");
  lVar13 = FUN_144e29050(puVar4,"CHARSET_ENCODING");
  if ((((lVar12 == 0) || (lVar13 == 0)) || (*(int *)(lVar12 + 8) != 1)) ||
     (((*(int *)(lVar13 + 8) != 1 || (*(longlong *)(lVar12 + 0x10) == 0)) ||
      (*(longlong *)(lVar13 + 0x10) == 0)))) {
    local_58 = 0x741444f42;
    local_60 = param_2;
    local_68[0] = FUN_144b57870(&DAT_149a1ea20,0,&local_60,0);
    if (*(int *)(param_2 + 7) != 0) {
      param_2[0x11] = *(undefined8 *)param_2[8];
    }
    goto LAB_144e28825;
  }
  uVar10 = FUN_144b56360(uVar1,*(longlong *)(lVar13 + 0x10),local_68);
  param_2[0x1b] = uVar10;
  if (local_68[0] != 0) goto LAB_144e28825;
  pcVar14 = (char *)FUN_144b56360(uVar1,*(undefined8 *)(lVar12 + 0x10),local_68);
  param_2[0x1c] = pcVar14;
  if (local_68[0] != 0) goto LAB_144e28825;
  if ((((*pcVar14 + 0xb7U & 0xdf) != 0) || ((pcVar14[1] + 0xadU & 0xdf) != 0)) ||
     (uVar18 = uVar19, (pcVar14[2] + 0xb1U & 0xdf) != 0)) goto LAB_144e287a7;
  do {
    uVar16 = uVar18 + 1;
    uVar17 = uVar19;
    if (pcVar14[uVar18 + 3] != (&DAT_149a0d678)[uVar18]) goto LAB_144e28731;
    uVar18 = uVar16;
  } while (uVar16 != 6);
LAB_144e287a4:
  bVar3 = true;
  goto LAB_144e287a7;
  while (uVar17 = uVar18, uVar18 != 5) {
LAB_144e28731:
    uVar18 = uVar17 + 1;
    if (pcVar14[uVar17 + 3] != (&DAT_149a0d680)[uVar17]) goto LAB_144e28764;
  }
  if ((*(char *)param_2[0x1b] == '1') && (((char *)param_2[0x1b])[1] == '\0')) goto LAB_144e287a4;
LAB_144e28764:
  iVar15 = strcmp(pcVar14 + 3,"646.1991");
  if (iVar15 == 0) {
    do {
      uVar18 = uVar19 + 1;
      if (*(char *)(param_2[0x1b] + uVar19) != (&DAT_149a0d694)[uVar19]) goto LAB_144e287a7;
      uVar19 = uVar18;
    } while (uVar18 != 4);
    goto LAB_144e287a4;
  }
LAB_144e287a7:
  local_58 = 0;
  if (bVar3) {
    local_58 = 0x10003756e6963;
  }
  local_60 = param_2;
  FUN_144b57870(&DAT_149a1ea20,0,&local_60,0);
LAB_144e28825:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
}



// FUNCTION 144e28840 FUN_144e28840 body=71 status=ok
// SIG undefined FUN_144e28840(void)

undefined8 FUN_144e28840(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0xe8);
  FUN_144b57d60();
  *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar1 + 0x2c) << 6;
  *(int *)(param_1 + 5) = *(int *)(lVar1 + 0x30) * -0x40;
  *(uint *)(param_1 + 6) = (uint)*(ushort *)(lVar1 + 8) << 6;
  return 0;
}



// FUNCTION 144e28890 FUN_144e28890 body=236 status=ok
// SIG undefined FUN_144e28890(void)

int FUN_144e28890(longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = *param_1;
  iVar6 = 0x17;
  lVar2 = *(longlong *)(lVar1 + 0xe8);
  if (param_2[4] == 0) {
    iVar4 = param_2[2];
  }
  else {
    uVar5 = param_2[2] * param_2[4] + 0x24;
    param_3 = (ulonglong)uVar5;
    iVar4 = (int)uVar5 / 0x48;
  }
  iVar4 = iVar4 + 0x20 >> 6;
  if (*param_2 == 0) {
    if (iVar4 == *(int *)(*(longlong *)(lVar1 + 0x30) + 0xc) + 0x20 >> 6) goto LAB_144e28942;
  }
  else {
    if (*param_2 == 1) {
      iVar3 = 0;
      if (iVar4 != *(int *)(lVar2 + 0x30) + *(int *)(lVar2 + 0x2c)) {
        iVar3 = 0x17;
      }
      iVar6 = 0;
      if (iVar3 != 0) {
        return iVar3;
      }
LAB_144e28942:
      FUN_144b57d60(lVar1,0,param_3,iVar6);
      *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar2 + 0x2c) << 6;
      *(int *)(param_1 + 5) = *(int *)(lVar2 + 0x30) * -0x40;
      *(uint *)(param_1 + 6) = (uint)*(ushort *)(lVar2 + 8) << 6;
      return 0;
    }
    iVar6 = 7;
  }
  return iVar6;
}



// FUNCTION 144e28980 FUN_144e28980 body=343 status=ok
// SIG undefined FUN_144e28980(void)

undefined8 FUN_144e28980(longlong param_1,longlong *param_2,uint param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ushort uStack_2a;
  short sStack_24;
  short sStack_20;
  
  lVar4 = *param_2;
  sVar3 = *(short *)(*(longlong *)(lVar4 + 0xe8) + 0x80);
  if (*(uint *)(lVar4 + 0x10) <= param_3) {
    return 6;
  }
  if (param_3 == 0) {
    param_3 = *(uint *)(lVar4 + 0xf8);
  }
  else {
    param_3 = param_3 - 1;
  }
  uVar10 = (ulonglong)param_3;
  lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0xe8) + 0x40);
  puVar1 = (undefined8 *)(lVar5 + uVar10 * 0x30);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  auVar2 = *(undefined1 (*) [16])(lVar5 + 0x10 + uVar10 * 0x30);
  puVar1 = (undefined8 *)(lVar5 + 0x20 + uVar10 * 0x30);
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  *(uint *)(param_1 + 0x68) = auVar2._2_4_ & 0xffff;
  *(uint *)(param_1 + 0x6c) = auVar2._0_4_ & 0xffff;
  *(int *)(param_1 + 0x70) = (int)uVar7;
  FUN_144b58730(param_1,uVar6,auVar2._0_4_,param_4,uVar8);
  if (sVar3 == 1) {
    *(undefined1 *)(param_1 + 0x82) = 1;
  }
  else if (sVar3 == 2) {
    *(undefined1 *)(param_1 + 0x82) = 3;
  }
  else if (sVar3 == 4) {
    *(undefined1 *)(param_1 + 0x82) = 4;
  }
  else if (sVar3 == 8) {
    *(undefined1 *)(param_1 + 0x82) = 2;
    *(undefined2 *)(param_1 + 0x80) = 0x100;
  }
  sStack_24 = auVar2._4_2_;
  sStack_20 = auVar2._8_2_;
  uStack_2a = (ushort)((ulonglong)uVar9 >> 0x30);
  *(int *)(param_1 + 0x94) = (int)sStack_20;
  *(int *)(param_1 + 0x3c) = (int)sStack_20 << 6;
  *(int *)(param_1 + 0x90) = (int)sStack_24;
  *(undefined4 *)(param_1 + 0x60) = 0x62697473;
  *(int *)(param_1 + 0x38) = (int)sStack_24 << 6;
  *(uint *)(param_1 + 0x40) = (uint)uStack_2a << 6;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x6c) << 6;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x68) << 6;
  FUN_144b58340((int *)(param_1 + 0x30),
                (ulonglong)*(ushort *)(*(longlong *)(lVar4 + 0xe8) + 10) << 6);
  return 0;
}



// FUNCTION 144e28ae0 FUN_144e28ae0 body=208 status=ok
// SIG undefined FUN_144e28ae0(void)

undefined8 FUN_144e28ae0(longlong param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xe8);
  if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x58) != 0)) && (param_2 != (char *)0x0)) &&
     (*param_2 != '\0')) {
    plVar3 = (longlong *)FUN_144b59280(param_2,*(undefined8 *)(lVar2 + 0x78));
    if ((plVar3 != (longlong *)0x0) &&
       (lVar2 = *(longlong *)(lVar2 + 0x60) + *plVar3 * 0x18, lVar2 != 0)) {
      iVar1 = *(int *)(lVar2 + 8);
      if (iVar1 == 1) {
        *param_3 = 1;
        *(undefined8 *)(param_3 + 2) = *(undefined8 *)(lVar2 + 0x10);
        return 0;
      }
      if (iVar1 == 2) {
        *param_3 = 2;
        param_3[2] = *(undefined4 *)(lVar2 + 0x10);
        return 0;
      }
      if (iVar1 == 3) {
        *param_3 = 3;
        param_3[2] = *(undefined4 *)(lVar2 + 0x10);
        return 0;
      }
    }
  }
  return 6;
}



// FUNCTION 144e28be0 FUN_144e28be0 body=637 status=ok
// SIG undefined FUN_144e28be0(void)

int FUN_144e28be0(longlong param_1,undefined8 param_2,undefined *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int local_res10 [2];
  undefined1 local_28 [16];
  
  local_res10[0] = 0;
  puVar3 = (uint *)FUN_144b560d0(param_2,0x60,local_res10);
  if (local_res10[0] != 0) goto LAB_144e28d7a;
  puVar5 = &DAT_149a1e190;
  if (param_3 != (undefined *)0x0) {
    puVar5 = param_3;
  }
  *(undefined **)(puVar3 + 0xc) = puVar5;
  *(undefined2 *)(puVar3 + 3) = 0x7fff;
  puVar3[0x16] = *(uint *)(param_1 + 8);
  *(undefined8 *)(puVar3 + 0x14) = param_2;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  *(undefined8 *)(puVar3 + 0x12) = param_2;
  local_res10[0] = FUN_144e29450(param_1,FUN_144e2b060,puVar3,local_28);
  if (local_res10[0] == 0) {
    lVar2 = *(longlong *)(puVar3 + 10);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x20) != 8) {
        *(undefined2 *)(lVar2 + 0x24) = *(undefined2 *)(lVar2 + 8);
      }
      if ((**(int **)(puVar3 + 0xc) != 0) &&
         ((lVar2 = *(longlong *)(puVar3 + 10), *(int *)(lVar2 + 0x38) != 0 ||
          (*(int *)(lVar2 + 0x4c) != 0)))) {
        if ((int)(short)puVar3[4] - (int)(short)puVar3[3] != (uint)*(ushort *)(lVar2 + 8)) {
          *(short *)(lVar2 + 8) = (short)puVar3[4] - (short)puVar3[3];
        }
        if (*(short *)(*(longlong *)(puVar3 + 10) + 0xc) != (short)puVar3[3]) {
          *(short *)(*(longlong *)(puVar3 + 10) + 0xc) = (short)puVar3[3];
        }
        if (*(short *)(*(longlong *)(puVar3 + 10) + 0x10) != *(short *)((longlong)puVar3 + 0x12)) {
          *(short *)(*(longlong *)(puVar3 + 10) + 0x10) = *(short *)((longlong)puVar3 + 0x12);
        }
        if (*(short *)(*(longlong *)(puVar3 + 10) + 0x12) != (short)puVar3[5]) {
          *(short *)(*(longlong *)(puVar3 + 10) + 0x12) = (short)puVar3[5];
          *(short *)(*(longlong *)(puVar3 + 10) + 0xe) = -(short)puVar3[5];
        }
        if ((int)*(short *)((longlong)puVar3 + 0x12) + (int)(short)puVar3[5] !=
            (uint)*(ushort *)(*(longlong *)(puVar3 + 10) + 10)) {
          *(short *)(*(longlong *)(puVar3 + 10) + 10) =
               (short)puVar3[5] + *(short *)((longlong)puVar3 + 0x12);
        }
      }
    }
    if ((*puVar3 & 1) == 0) {
      lVar2 = *(longlong *)(puVar3 + 10);
      if (lVar2 == 0) {
        local_res10[0] = 3;
      }
      else {
        iVar1 = *(int *)(lVar2 + 0x70);
        if (iVar1 != 0) {
          uVar4 = FUN_144b561b0(*(undefined8 *)(lVar2 + 0x88),1,iVar1,iVar1 + 1,
                                *(undefined8 *)(lVar2 + 0x68),local_res10);
          *(undefined8 *)(*(longlong *)(puVar3 + 10) + 0x68) = uVar4;
          if (local_res10[0] == 0) {
            *(undefined1 *)
             ((ulonglong)*(uint *)(*(longlong *)(puVar3 + 10) + 0x70) +
             *(longlong *)(*(longlong *)(puVar3 + 10) + 0x68)) = 0;
            *param_4 = *(undefined8 *)(puVar3 + 10);
            goto LAB_144e28d7a;
          }
          goto LAB_144e28d61;
        }
      }
      *param_4 = *(undefined8 *)(puVar3 + 10);
      goto LAB_144e28d7a;
    }
    local_res10[0] = ((*puVar3 & 0x20) != 0) + 0xb9;
  }
LAB_144e28d61:
  FUN_144e28e60(*(undefined8 *)(puVar3 + 10));
  FUN_144b56350(param_2,*(undefined8 *)(puVar3 + 10));
  puVar3[10] = 0;
  puVar3[0xb] = 0;
LAB_144e28d7a:
  if (puVar3 != (uint *)0x0) {
    if (*(longlong *)(puVar3 + 0x12) != 0) {
      FUN_144b56350(*(longlong *)(puVar3 + 0x12),*(undefined8 *)(puVar3 + 0xe));
      puVar3[0xe] = 0;
      puVar3[0xf] = 0;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      puVar3[0x12] = 0;
      puVar3[0x13] = 0;
    }
    FUN_144b56350(param_2,*(undefined8 *)(puVar3 + 6));
    puVar3[6] = 0;
    puVar3[7] = 0;
    FUN_144b56350(param_2,puVar3);
  }
  return local_res10[0];
}



// FUNCTION 144e28e60 FUN_144e28e60 body=482 status=ok
// SIG undefined FUN_144e28e60(void)

void FUN_144e28e60(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar2 = param_1[0x11];
    FUN_144b56350(uVar2,*param_1);
    uVar4 = 0;
    *param_1 = 0;
    if (param_1[0xf] != 0) {
      FUN_144b591d0(param_1[0xf],uVar2);
      FUN_144b56350(uVar2,param_1[0xf]);
      param_1[0xf] = 0;
    }
    FUN_144b56350(uVar2,param_1[0xd]);
    param_1[0xd] = 0;
    uVar3 = uVar4;
    if (*(int *)(param_1 + 0xb) != 0) {
      do {
        lVar1 = uVar3 * 0x18;
        if (*(int *)(param_1[0xc] + 8 + lVar1) == 1) {
          FUN_144b56350(uVar2,*(undefined8 *)(param_1[0xc] + 0x10 + lVar1));
          *(undefined8 *)(param_1[0xc] + 0x10 + lVar1) = 0;
        }
        uVar5 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0xb));
    }
    FUN_144b56350(uVar2,param_1[0xc]);
    puVar6 = (undefined8 *)param_1[8];
    param_1[0xc] = 0;
    uVar3 = uVar4;
    if (*(int *)(param_1 + 7) != 0) {
      do {
        FUN_144b56350(uVar2,*puVar6);
        *puVar6 = 0;
        FUN_144b56350(uVar2,puVar6[4]);
        puVar6[4] = 0;
        puVar6 = puVar6 + 6;
        uVar5 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 7));
    }
    puVar6 = (undefined8 *)param_1[10];
    uVar3 = uVar4;
    if (*(int *)((longlong)param_1 + 0x4c) != 0) {
      do {
        FUN_144b56350(uVar2,*puVar6);
        *puVar6 = 0;
        FUN_144b56350(uVar2,puVar6[4]);
        puVar6[4] = 0;
        puVar6 = puVar6 + 6;
        uVar5 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)((longlong)param_1 + 0x4c));
    }
    FUN_144b56350(uVar2,param_1[8]);
    param_1[8] = 0;
    FUN_144b56350(uVar2,param_1[10]);
    param_1[10] = 0;
    FUN_144b591d0(param_1 + 0x14,uVar2);
    puVar6 = (undefined8 *)param_1[0x12];
    if (*(int *)(param_1 + 0x13) != 0) {
      do {
        FUN_144b56350(uVar2,*puVar6);
        *puVar6 = 0;
        if (*(int *)(puVar6 + 1) == 1) {
          FUN_144b56350(uVar2,puVar6[2]);
          puVar6[2] = 0;
        }
        uVar5 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar5;
        puVar6 = puVar6 + 3;
      } while (uVar5 < *(uint *)(param_1 + 0x13));
    }
    FUN_144b56350(uVar2,param_1[0x12]);
    param_1[0x12] = 0;
  }
  return;
}



// FUNCTION 144e29050 FUN_144e29050 body=79 status=ok
// SIG undefined FUN_144e29050(void)

longlong FUN_144e29050(longlong param_1,char *param_2)

{
  longlong *plVar1;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x58) != 0)) && (param_2 != (char *)0x0)) &&
     (*param_2 != '\0')) {
    plVar1 = (longlong *)FUN_144b59280(param_2,*(undefined8 *)(param_1 + 0x78));
    if (plVar1 != (longlong *)0x0) {
      return *(longlong *)(param_1 + 0x60) + *plVar1 * 0x18;
    }
  }
  return 0;
}



// FUNCTION 144e290a0 FUN_144e290a0 body=153 status=ok
// SIG undefined FUN_144e290a0(void)

int FUN_144e290a0(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  int local_res10 [6];
  
  uVar1 = *(uint *)(param_1 + 1);
  local_res10[0] = 0;
  if (param_2 <= uVar1) {
    return 0;
  }
  uVar3 = uVar1 + 5 + (uVar1 >> 1);
  if (uVar1 == 0xfffffff) {
    local_res10[0] = 0x40;
  }
  else {
    if ((uVar3 < uVar1) || (0xfffffff < uVar3)) {
      uVar3 = 0xfffffff;
    }
    uVar2 = FUN_144b561b0(param_1[2],8,uVar1,uVar3,*param_1,local_res10);
    *param_1 = uVar2;
    if (local_res10[0] == 0) {
      *(uint *)(param_1 + 1) = uVar3;
      return 0;
    }
  }
  return local_res10[0];
}



// FUNCTION 144e29140 FUN_144e29140 body=167 status=ok
// SIG undefined FUN_144e29140(void)

undefined * FUN_144e29140(longlong *param_1,undefined1 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  *param_3 = 0;
  if ((param_1 == (longlong *)0x0) || (*(int *)((longlong)param_1 + 0xc) == 0)) {
    return (undefined *)0x0;
  }
  puVar2 = *(undefined **)*param_1;
  uVar6 = uVar4;
  do {
    pcVar3 = *(char **)(*param_1 + uVar6 * 8);
    cVar1 = *pcVar3;
    while (cVar1 != '\0') {
      puVar2[uVar4] = cVar1;
      pcVar3 = pcVar3 + 1;
      uVar4 = (ulonglong)((int)uVar4 + 1);
      cVar1 = *pcVar3;
    }
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar5) break;
    puVar2[uVar4] = param_2;
    uVar4 = (ulonglong)((int)uVar4 + 1);
  } while (uVar5 < *(uint *)((longlong)param_1 + 0xc));
  if (puVar2 != &DAT_149a1e96c) {
    puVar2[uVar4] = 0;
  }
  *param_3 = (int)uVar4;
  return puVar2;
}



// FUNCTION 144e291f0 FUN_144e291f0 body=586 status=ok
// SIG undefined FUN_144e291f0(void)

void FUN_144e291f0(longlong *param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  if ((int)param_1[1] != 0) {
    *(undefined **)*param_1 = &DAT_149a1e96c;
    *(undefined **)(*param_1 + 8) = &DAT_149a1e96c;
    *(undefined **)(*param_1 + 0x10) = &DAT_149a1e96c;
    *(undefined **)(*param_1 + 0x18) = &DAT_149a1e96c;
    *(undefined **)(*param_1 + 0x20) = &DAT_149a1e96c;
  }
  if ((((param_4 != 0) && (*param_3 != 0)) && (param_2 != (byte *)0x0)) && (*param_2 != 0)) {
    bVar3 = false;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    do {
      bVar1 = *param_2;
      if (bVar1 == 0) break;
      if ((bVar1 == 0x2b) && (param_2[1] == 0)) {
        bVar3 = true;
      }
      else {
        pbVar8 = (byte *)((longlong)&local_68 + (ulonglong)(bVar1 >> 3));
        *pbVar8 = *pbVar8 | (byte)(1 << ((int)(char)bVar1 & 7U));
      }
      param_2 = param_2 + 1;
    } while (param_2 != (byte *)0x0);
    iVar4 = 0;
    pbVar8 = param_3;
joined_r0x000144e292ee:
    do {
      if ((param_3 + param_4 <= pbVar8) || (*pbVar8 == 0)) goto LAB_144e293d5;
      bVar1 = *pbVar8;
      pbVar7 = pbVar8;
      while ((bVar1 != 0 &&
             (((uint)(int)*(char *)((longlong)&local_68 + (ulonglong)(*pbVar7 >> 3)) >>
               ((int)(char)*pbVar7 & 7U) & 1) == 0))) {
        pbVar7 = pbVar7 + 1;
        bVar1 = *pbVar7;
      }
      if ((*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) &&
         (iVar4 = FUN_144e290a0(param_1,*(int *)((longlong)param_1 + 0xc) + 1), iVar4 != 0)) break;
      pbVar9 = &DAT_149a1e96c;
      if (pbVar8 < pbVar7) {
        pbVar9 = pbVar8;
      }
      *(byte **)(*param_1 + (ulonglong)*(uint *)((longlong)param_1 + 0xc) * 8) = pbVar9;
      *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
      if (bVar3) {
        pbVar8 = pbVar7;
        if (*pbVar7 != 0) {
          do {
            if (((uint)(int)*(char *)((longlong)&local_68 + (ulonglong)(*pbVar8 >> 3)) >>
                 ((int)(char)*pbVar8 & 7U) & 1) == 0) break;
            *pbVar8 = 0;
            pbVar8 = pbVar8 + 1;
          } while (*pbVar8 != 0);
LAB_144e293af:
          bVar2 = pbVar7 < pbVar8;
          pbVar7 = pbVar8;
          if ((bVar2) && (*pbVar8 == 0)) {
            iVar4 = 1;
            goto joined_r0x000144e292ee;
          }
        }
      }
      else if (*pbVar7 != 0) {
        *pbVar7 = 0;
        pbVar8 = pbVar7 + 1;
        goto LAB_144e293af;
      }
      iVar4 = 0;
      pbVar8 = pbVar7;
    } while( true );
  }
LAB_144e29421:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
LAB_144e293d5:
  uVar6 = *(int *)((longlong)param_1 + 0xc) + iVar4;
  if ((uVar6 < *(uint *)(param_1 + 1)) || (iVar5 = FUN_144e290a0(param_1,uVar6 + 1), iVar5 == 0)) {
    if (iVar4 != 0) {
      *(undefined **)(*param_1 + (ulonglong)*(uint *)((longlong)param_1 + 0xc) * 8) = &DAT_149a1e96c
      ;
      *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
    }
    *(undefined8 *)(*param_1 + (ulonglong)*(uint *)((longlong)param_1 + 0xc) * 8) = 0;
  }
  goto LAB_144e29421;
}



// FUNCTION 144e29450 FUN_144e29450 body=802 status=ok
// SIG undefined FUN_144e29450(void)

int FUN_144e29450(longlong param_1,code *param_2,undefined8 param_3,int *param_4)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  size_t sVar5;
  uint uVar6;
  undefined1 *_Dst;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong _Size;
  uint uVar11;
  int iVar12;
  int local_res10 [2];
  undefined8 local_res18;
  int *local_res20;
  int local_78;
  uint local_70;
  size_t local_68;
  code *local_60;
  undefined8 local_58;
  
  local_58 = *(undefined8 *)(param_1 + 0x30);
  _Dst = (undefined1 *)0x0;
  local_res10[0] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_2 == (code *)0x0) {
    local_res10[0] = 6;
  }
  else {
    uVar11 = 0x400;
    local_70 = 0x400;
    _Dst = (undefined1 *)FUN_144b561b0(local_58,1,0,0x400,0,local_res10);
    if (local_res10[0] == 0) {
      iVar7 = 1;
      lVar9 = 0;
      lVar10 = 0;
      _Size = 0;
      *_Dst = 0;
      local_68 = 0;
      local_78 = 1;
      bVar3 = true;
      local_60 = param_2;
      do {
        iVar12 = 0x100;
LAB_144e29521:
        sVar5 = local_68;
        if (bVar3) {
          uVar6 = FUN_144b59910(param_1,_Dst + local_68,uVar11 - (int)local_68);
          _Size = (ulonglong)uVar6;
          local_68 = 0;
          bVar3 = false;
          lVar9 = _Size + sVar5;
          iVar7 = local_78;
        }
        uVar4 = local_res18;
        if (lVar9 <= lVar10) goto LAB_144e2959c;
        pcVar1 = _Dst + lVar10;
        lVar8 = lVar10;
        if ((char)_Dst[lVar10] != iVar12) goto LAB_144e29580;
        lVar10 = lVar10 + 1;
      } while( true );
    }
  }
LAB_144e29759:
  FUN_144b56350(local_58,_Dst);
  return local_res10[0];
LAB_144e29580:
  do {
    if ((_Dst[lVar8] == '\n') || (_Dst[lVar8] == '\r')) {
      if (lVar8 < lVar9) {
        cVar2 = _Dst[lVar8];
        _Dst[lVar8] = 0;
        if (((*pcVar1 != '#') && (*pcVar1 != '\x1a')) && (lVar10 < lVar8)) {
          iVar12 = (int)lVar8 - (int)lVar10;
          local_res10[0] = (*local_60)(pcVar1,iVar12,iVar7,&local_60,local_res18);
          if (local_res10[0] == -1) {
            local_res10[0] = (*local_60)(pcVar1,iVar12,local_78,&local_60,uVar4);
          }
          iVar7 = local_78;
          if (local_res10[0] != 0) goto LAB_144e29728;
        }
        lVar10 = lVar8 + 1;
        iVar7 = iVar7 + 1;
        _Dst[lVar8] = cVar2;
        uVar11 = local_70;
        local_78 = iVar7;
        if (cVar2 == '\n') {
          iVar12 = 0xd;
        }
        else {
          iVar12 = 0x100;
          if (cVar2 == '\r') {
            iVar12 = 10;
          }
        }
        goto LAB_144e29521;
      }
      break;
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 < lVar9);
LAB_144e2959c:
  if (_Size == 0) {
LAB_144e29728:
    *local_res20 = local_78;
    goto LAB_144e29759;
  }
  if (lVar10 == 0) {
    if (0xffff < uVar11) {
      local_res10[0] = 6;
      goto LAB_144e29759;
    }
    local_70 = uVar11 * 2;
    _Dst = (undefined1 *)FUN_144b561b0(local_58,1,uVar11,local_70,_Dst,local_res10);
    if (local_res10[0] != 0) goto LAB_144e29759;
    local_68 = (size_t)uVar11;
    bVar3 = true;
    uVar11 = local_70;
    iVar7 = local_78;
  }
  else {
    _Size = lVar9 - lVar10;
    memmove(_Dst,_Dst + lVar10,_Size);
    lVar9 = lVar9 - _Size;
    bVar3 = true;
    lVar10 = 0;
    iVar7 = local_78;
    local_68 = _Size;
  }
  goto LAB_144e29521;
}



// FUNCTION 144e29780 FUN_144e29780 body=140 status=ok
// SIG undefined FUN_144e29780(void)

uint FUN_144e29780(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  
  if (((param_1 != (byte *)0x0) && (bVar1 = *param_1, bVar1 != 0)) &&
     (uVar2 = 0, ((&DAT_149a1eaf0)[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0)) {
    do {
      if (0x19999997 < uVar2) {
        return 0xffffffff;
      }
      lVar3 = (longlong)(char)bVar1;
      param_1 = param_1 + 1;
      bVar1 = *param_1;
      uVar2 = (uint)(byte)(&DAT_149a1ea70)[lVar3] + uVar2 * 10;
    } while (((&DAT_149a1eaf0)[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144e29810 FUN_144e29810 body=170 status=ok
// SIG undefined FUN_144e29810(void)

int FUN_144e29810(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_1 == (byte *)0x0) || (bVar1 = *param_1, bVar1 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    if (bVar1 == 0x2d) {
      param_1 = param_1 + 1;
    }
    bVar2 = *param_1;
    bVar3 = (&DAT_149a1eaf0)[bVar2 >> 3] & (byte)(1 << (bVar2 & 7));
    while (bVar3 != 0) {
      if (0xcccccca < iVar4) {
        iVar4 = 0x7fffffff;
        break;
      }
      lVar5 = (longlong)(char)bVar2;
      param_1 = param_1 + 1;
      bVar2 = *param_1;
      iVar4 = (uint)(byte)(&DAT_149a1ea70)[lVar5] + iVar4 * 10;
      bVar3 = (&DAT_149a1eaf0)[bVar2 >> 3] & (byte)(1 << (bVar2 & 7));
    }
    if (bVar1 == 0x2d) {
      return -iVar4;
    }
  }
  return iVar4;
}



// FUNCTION 144e298c0 FUN_144e298c0 body=166 status=ok
// SIG undefined FUN_144e298c0(void)

ushort FUN_144e298c0(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  
  if (((param_1 != (byte *)0x0) && (bVar1 = *param_1, bVar1 != 0)) &&
     (uVar2 = 0, ((&DAT_149a1eaf0)[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0)) {
    do {
      if (0x1997 < uVar2) {
        return 0xffff;
      }
      lVar3 = (longlong)(char)bVar1;
      param_1 = param_1 + 1;
      bVar1 = *param_1;
      uVar2 = uVar2 * 10 + (ushort)(byte)(&DAT_149a1ea70)[lVar3];
    } while (((&DAT_149a1eaf0)[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144e29970 FUN_144e29970 body=210 status=ok
// SIG undefined FUN_144e29970(void)

short FUN_144e29970(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  longlong lVar5;
  
  if ((param_1 == (byte *)0x0) || (bVar1 = *param_1, bVar1 == 0)) {
    return 0;
  }
  sVar4 = 0;
  if (bVar1 == 0x2d) {
    param_1 = param_1 + 1;
  }
  bVar2 = *param_1;
  bVar3 = (&DAT_149a1eaf0)[bVar2 >> 3] & (byte)(1 << (bVar2 & 7));
  do {
    if (bVar3 == 0) {
LAB_144e29a24:
      if (bVar1 == 0x2d) {
        sVar4 = -sVar4;
      }
      return sVar4;
    }
    if (0xcca < sVar4) {
      sVar4 = 0x7fff;
      goto LAB_144e29a24;
    }
    lVar5 = (longlong)(char)bVar2;
    param_1 = param_1 + 1;
    bVar2 = *param_1;
    sVar4 = sVar4 * 10 + (ushort)(byte)(&DAT_149a1ea70)[lVar5];
    bVar3 = (&DAT_149a1eaf0)[bVar2 >> 3] & (byte)(1 << (bVar2 & 7));
  } while( true );
}



// FUNCTION 144e29a70 FUN_144e29a70 body=334 status=ok
// SIG undefined FUN_144e29a70(void)

ulonglong FUN_144e29a70(void *param_1,undefined4 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *_Dst;
  longlong lVar5;
  ulonglong _Size;
  uint local_res18 [4];
  
  uVar2 = *(undefined8 *)(param_3 + 0x88);
  local_res18[0] = 0;
  lVar3 = FUN_144b59280(param_1,param_3 + 0xa0);
  if (lVar3 == 0) {
    lVar3 = FUN_144b561b0(uVar2,0x18,*(int *)(param_3 + 0x98),*(int *)(param_3 + 0x98) + 1,
                          *(undefined8 *)(param_3 + 0x90),local_res18);
    *(longlong *)(param_3 + 0x90) = lVar3;
    uVar4 = (ulonglong)local_res18[0];
    if (local_res18[0] == 0) {
      puVar1 = (undefined8 *)(lVar3 + (ulonglong)*(uint *)(param_3 + 0x98) * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      lVar3 = -1;
      do {
        lVar5 = lVar3;
        lVar3 = lVar5 + 1;
      } while (*(char *)((longlong)param_1 + lVar3) != '\0');
      _Size = lVar5 + 2;
      if (_Size < 0x100000000) {
        _Dst = (void *)FUN_144b561b0(uVar2,1,0,_Size & 0xffffffff,0,local_res18);
        *puVar1 = _Dst;
        uVar4 = (ulonglong)local_res18[0];
        if (local_res18[0] == 0) {
          memcpy(_Dst,param_1,_Size);
          *(undefined4 *)(puVar1 + 1) = param_2;
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
          uVar4 = thunk_FUN_144b59540(*puVar1,*(int *)(param_3 + 0x98) + 0x53,param_3 + 0xa0,uVar2);
          if ((int)uVar4 == 0) {
            *(int *)(param_3 + 0x98) = *(int *)(param_3 + 0x98) + 1;
          }
        }
      }
      else {
        uVar4 = 6;
      }
    }
  }
  else {
    uVar4 = (ulonglong)local_res18[0];
  }
  return uVar4;
}



// FUNCTION 144e29bc0 FUN_144e29bc0 body=152 status=ok
// SIG undefined FUN_144e29bc0(void)

int FUN_144e29bc0(longlong param_1,void *param_2,uint param_3)

{
  longlong lVar1;
  void *_Dst;
  int local_res18 [4];
  
  local_res18[0] = 0;
  lVar1 = FUN_144b561b0(*(undefined8 *)(param_1 + 0x88),1,*(int *)(param_1 + 0x70),
                        param_3 + 1 + *(int *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),
                        local_res18);
  *(longlong *)(param_1 + 0x68) = lVar1;
  if (local_res18[0] == 0) {
    _Dst = (void *)((ulonglong)*(uint *)(param_1 + 0x70) + lVar1);
    memcpy(_Dst,param_2,(ulonglong)param_3);
    *(undefined1 *)((ulonglong)param_3 + (longlong)_Dst) = 10;
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + param_3 + 1;
  }
  return local_res18[0];
}



// FUNCTION 144e29c60 FUN_144e29c60 body=323 status=ok
// SIG undefined FUN_144e29c60(void)

void FUN_144e29c60(undefined8 *param_1,longlong param_2)

{
  char *_Src;
  int iVar1;
  longlong lVar2;
  ulonglong _Size;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined8 local_130;
  int iStack_12c;
  longlong local_128;
  undefined1 local_118 [256];
  ulonglong local_18;
  longlong lVar3;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((param_1 != (undefined8 *)0x0) && (_Src = (char *)*param_1, _Src != (char *)0x0)) &&
     (*_Src != '\0')) {
    local_138 = 0;
    local_130 = 0;
    local_128 = param_1[0x11];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0xc);
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (_Src[lVar2] != '\0');
    _Size = lVar3 + 2;
    if (_Size < 0x100) {
      memcpy(local_118,_Src,_Size);
      iVar1 = FUN_144e291f0(&local_138,L"-`[Left Bracket",local_118,_Size & 0xffffffff);
      if ((iVar1 == 0) && (iStack_12c == 0xf)) {
        switch(**(undefined1 **)(local_138 + 0x58)) {
        case 0x43:
        case 99:
          *(undefined4 *)(param_1 + 4) = 0x20;
          break;
        case 0x4d:
        case 0x6d:
          *(undefined4 *)(param_1 + 4) = 0x10;
          break;
        case 0x50:
        case 0x70:
          *(undefined4 *)(param_1 + 4) = 8;
        }
      }
      if (local_128 != 0) {
        FUN_144b56350(local_128,local_138);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_158);
}



// FUNCTION 144e29df0 FUN_144e29df0 body=338 status=ok
// SIG undefined FUN_144e29df0(void)

undefined8
FUN_144e29df0(char *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4,longlong param_5)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined **ppuVar4;
  char *pcVar5;
  char cVar6;
  char *pcVar7;
  
  *param_3 = param_1;
  cVar1 = *param_1;
  pcVar5 = param_1;
  while (((cVar1 != '\0' && (*pcVar5 != ' ')) && (*pcVar5 != '\t'))) {
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  cVar1 = *pcVar5;
  cVar6 = -1;
  if (cVar1 != '\0') {
    *pcVar5 = '\0';
    cVar6 = cVar1;
  }
  if ((*param_1 == '\0') ||
     (puVar3 = (ulonglong *)FUN_144b59280(param_1,param_5 + 0xa0), puVar3 == (ulonglong *)0x0)) {
    ppuVar4 = (undefined **)0x0;
  }
  else {
    uVar2 = *puVar3;
    if (uVar2 < 0x53) {
      ppuVar4 = &PTR_s_ADD_STYLE_NAME_149a1e1a0 + uVar2 * 3;
    }
    else {
      ppuVar4 = (undefined **)(*(longlong *)(param_5 + 0x90) + (uVar2 - 0x53) * 0x18);
    }
  }
  if (cVar6 != -1) {
    *pcVar5 = cVar6;
  }
  if ((ppuVar4 != (undefined **)0x0) && (*(int *)(ppuVar4 + 1) != 1)) {
    return 0;
  }
  if (*pcVar5 != '\0') {
    *pcVar5 = '\0';
    pcVar5 = pcVar5 + 1;
  }
  cVar1 = *pcVar5;
  while ((cVar1 != '\0' && ((cVar1 == ' ' || (cVar1 == '\t'))))) {
    pcVar7 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar7;
  }
  pcVar7 = pcVar5 + 1;
  if (*pcVar5 != '\"') {
    pcVar7 = pcVar5;
  }
  *param_4 = pcVar7;
  pcVar5 = param_1 + param_2;
  while( true ) {
    if (pcVar5 <= pcVar7) {
      return 1;
    }
    if ((pcVar5[-1] != ' ') && (pcVar5[-1] != '\t')) break;
    pcVar5[-1] = '\0';
    pcVar5 = pcVar5 + -1;
  }
  if (pcVar5 <= pcVar7) {
    return 1;
  }
  if (pcVar5[-1] != '\"') {
    return 1;
  }
  pcVar5[-1] = '\0';
  return 1;
}



// FUNCTION 144e29f50 FUN_144e29f50 body=964 status=ok
// SIG undefined FUN_144e29f50(void)

int FUN_144e29f50(longlong param_1,char *param_2,char *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  undefined **ppuVar10;
  int local_res20 [2];
  undefined8 uVar11;
  
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  local_res20[0] = 0;
  plVar6 = (longlong *)FUN_144b59280(param_2,*(undefined8 *)(param_1 + 0x78));
  if (plVar6 == (longlong *)0x0) {
    puVar8 = (ulonglong *)FUN_144b59280(param_2,param_1 + 0xa0);
    if (puVar8 == (ulonglong *)0x0) {
      local_res20[0] = FUN_144e29a70(param_2,1,param_1);
      if (local_res20[0] != 0) {
        return local_res20[0];
      }
      puVar8 = (ulonglong *)FUN_144b59280(param_2,param_1 + 0xa0);
    }
    iVar5 = *(int *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x5c) == iVar5) {
      if (iVar5 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(param_1 + 0x60);
      }
      uVar11 = FUN_144b561b0(uVar7,0x18,iVar5,iVar5 + 1,uVar11,local_res20);
      *(undefined8 *)(param_1 + 0x60) = uVar11;
      if (local_res20[0] != 0) {
        return local_res20[0];
      }
      uVar9 = (ulonglong)*(uint *)(param_1 + 0x58);
      lVar1 = *(longlong *)(param_1 + 0x60);
      *(undefined8 *)(lVar1 + uVar9 * 0x18) = 0;
      *(undefined8 *)(lVar1 + 8 + uVar9 * 0x18) = 0;
      *(undefined8 *)(lVar1 + 0x10 + uVar9 * 0x18) = 0;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    }
    uVar9 = *puVar8;
    if (uVar9 < 0x53) {
      ppuVar10 = &PTR_s_ADD_STYLE_NAME_149a1e1a0 + uVar9 * 3;
    }
    else {
      ppuVar10 = (undefined **)(*(longlong *)(param_1 + 0x90) + (uVar9 - 0x53) * 0x18);
    }
    puVar2 = (undefined8 *)
             (*(longlong *)(param_1 + 0x60) + (ulonglong)*(uint *)(param_1 + 0x5c) * 0x18);
    *puVar2 = *ppuVar10;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(ppuVar10 + 1);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)ppuVar10 + 0xc);
    iVar5 = *(int *)(ppuVar10 + 1);
    if (iVar5 == 1) {
      puVar2[2] = 0;
      if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
        uVar11 = FUN_144b56360(uVar7,param_3,local_res20);
        puVar2[2] = uVar11;
        if (local_res20[0] != 0) {
          return local_res20[0];
        }
      }
    }
    else if (iVar5 == 2) {
      uVar4 = FUN_144e29810(param_3);
      *(undefined4 *)(puVar2 + 2) = uVar4;
    }
    else if (iVar5 == 3) {
      uVar4 = FUN_144e29780(param_3);
      *(undefined4 *)(puVar2 + 2) = uVar4;
    }
    iVar5 = strncmp(param_2,"COMMENT",7);
    if ((((iVar5 == 0) && ((byte)param_2[7] < 0x21)) &&
        ((0x100002601U >> ((longlong)param_2[7] & 0x3fU) & 1) != 0)) ||
       (local_res20[0] =
             thunk_FUN_144b59540(*puVar2,*(undefined4 *)(param_1 + 0x5c),
                                 *(undefined8 *)(param_1 + 0x78),uVar7), local_res20[0] == 0)) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      iVar5 = strncmp(param_2,"DEFAULT_CHAR",0xc);
      if (((iVar5 == 0) && ((byte)param_2[0xc] < 0x21)) &&
         ((0x100002601U >> ((longlong)param_2[0xc] & 0x3fU) & 1) != 0)) {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(puVar2 + 2);
      }
      else {
        iVar5 = strncmp(param_2,"FONT_ASCENT",0xb);
        if (((iVar5 == 0) && ((byte)param_2[0xb] < 0x21)) &&
           ((0x100002601U >> ((longlong)param_2[0xb] & 0x3fU) & 1) != 0)) {
          *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(puVar2 + 2);
        }
        else {
          iVar5 = strncmp(param_2,"FONT_DESCENT",0xc);
          if (((iVar5 == 0) && ((byte)param_2[0xc] < 0x21)) &&
             ((0x100002601U >> ((longlong)param_2[0xc] & 0x3fU) & 1) != 0)) {
            *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(puVar2 + 2);
          }
          else {
            iVar5 = strncmp(param_2,"SPACING",7);
            if (((iVar5 == 0) && ((byte)param_2[7] < 0x21)) &&
               ((0x100002601U >> ((longlong)param_2[7] & 0x3fU) & 1) != 0)) {
              if ((char *)puVar2[2] == (char *)0x0) {
                local_res20[0] = 3;
              }
              else {
                cVar3 = *(char *)puVar2[2];
                if ((cVar3 + 0xb0U & 0xdf) == 0) {
                  *(undefined4 *)(param_1 + 0x20) = 8;
                }
                else if ((cVar3 + 0xb3U & 0xdf) == 0) {
                  *(undefined4 *)(param_1 + 0x20) = 0x10;
                }
                else if ((cVar3 + 0xbdU & 0xdf) == 0) {
                  *(undefined4 *)(param_1 + 0x20) = 0x20;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x60) + 8 + *plVar6 * 0x18);
    lVar1 = *(longlong *)(param_1 + 0x60) + *plVar6 * 0x18;
    if (iVar5 == 1) {
      FUN_144b56350(uVar7,*(undefined8 *)(lVar1 + 0x10));
      *(undefined8 *)(lVar1 + 0x10) = 0;
      if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
        uVar7 = FUN_144b56360(uVar7,param_3,local_res20);
        *(undefined8 *)(lVar1 + 0x10) = uVar7;
        return local_res20[0];
      }
    }
    else {
      if (iVar5 == 2) {
        uVar4 = FUN_144e29810(param_3);
        *(undefined4 *)(lVar1 + 0x10) = uVar4;
        return local_res20[0];
      }
      if (iVar5 == 3) {
        uVar4 = FUN_144e29780(param_3);
        *(undefined4 *)(lVar1 + 0x10) = uVar4;
        return local_res20[0];
      }
    }
  }
  return local_res20[0];
}



// FUNCTION 144e2a330 FUN_144e2a330 body=2619 status=ok
// SIG undefined FUN_144e2a330(void)

uint FUN_144e2a330(byte *param_1,int param_2,undefined8 param_3,undefined8 *param_4,uint *param_5)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined2 uVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  void *_Src;
  void *_Dst;
  short sVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  ulonglong uVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint local_res18 [4];
  
  puVar5 = param_5;
  local_res18[0] = 0;
  lVar3 = *(longlong *)(param_5 + 10);
  uVar4 = *(undefined8 *)(lVar3 + 0x88);
  iVar8 = strncmp((char *)param_1,"COMMENT",7);
  if (iVar8 == 0) {
    pbVar14 = param_1 + 7;
    if ((0x20 < param_1[7]) || ((0x100002601U >> ((longlong)(char)param_1[7] & 0x3fU) & 1) == 0))
    goto LAB_144e2a3c8;
    iVar8 = param_2 + -7;
    if (*pbVar14 != 0) {
      pbVar14 = param_1 + 8;
      iVar8 = param_2 + -8;
    }
    local_res18[0] = FUN_144e29bc0(*(undefined8 *)(puVar5 + 10),pbVar14,iVar8);
  }
  else {
LAB_144e2a3c8:
    if ((*puVar5 & 0x20) == 0) {
      iVar8 = strncmp((char *)param_1,"CHARS",5);
      if (((iVar8 == 0) && (param_1[5] < 0x21)) &&
         ((0x100002601U >> ((longlong)(char)param_1[5] & 0x3fU) & 1) != 0)) {
        local_res18[0] = FUN_144e291f0(puVar5 + 0xe,&DAT_149a1f0bc,param_1,param_2);
        if (local_res18[0] == 0) {
          uVar9 = FUN_144e29780(*(undefined8 *)(*(longlong *)(puVar5 + 0xe) + 8));
          *(uint *)(lVar3 + 0x34) = uVar9;
          puVar5[1] = uVar9;
          uVar18 = puVar5[0x16] / 0x14;
          if (uVar18 < uVar9) {
            *(uint *)(lVar3 + 0x34) = uVar18;
            puVar5[1] = uVar18;
          }
          uVar10 = *(undefined4 *)(lVar3 + 0x34);
          if (puVar5[1] == 0) {
            uVar10 = 0x40;
          }
          *(undefined4 *)(lVar3 + 0x34) = uVar10;
          if (puVar5[1] < 0x110000) {
            uVar11 = FUN_144b561b0(uVar4,0x30,0,*(undefined4 *)(lVar3 + 0x34),0,local_res18);
            *(undefined8 *)(lVar3 + 0x40) = uVar11;
            if (local_res18[0] == 0) {
              *puVar5 = *puVar5 | 0x20;
              return 0;
            }
          }
          else {
            local_res18[0] = 6;
          }
        }
      }
      else {
        local_res18[0] = 0xb4;
      }
      goto LAB_144e2ad46;
    }
    iVar8 = strncmp((char *)param_1,"ENDFONT",7);
    if (((iVar8 == 0) && (param_1[7] < 0x21)) &&
       ((0x100002601U >> ((longlong)(char)param_1[7] & 0x3fU) & 1) != 0)) {
      if ((*puVar5 & 0xfc0) != 0) {
        local_res18[0] = 0xba;
        goto LAB_144e2ad46;
      }
      qsort(*(void **)(lVar3 + 0x40),(ulonglong)*(uint *)(lVar3 + 0x38),0x30,
            (_PtFuncCompare *)&LAB_144e29a50);
      *puVar5 = *puVar5 & 0xfffffffe;
      *param_4 = &LAB_144e2a320;
    }
    else {
      iVar8 = strncmp((char *)param_1,"ENDCHAR",7);
      if (((iVar8 == 0) && (param_1[7] < 0x21)) &&
         ((0x100002601U >> ((longlong)(char)param_1[7] & 0x3fU) & 1) != 0)) {
        *puVar5 = *puVar5 & 0xfffff03f;
        puVar5[8] = 0;
      }
      else if ((((*puVar5 & 0x40) == 0) || (puVar5[8] != 0xffffffff)) ||
              (*(int *)(*(longlong *)(puVar5 + 0xc) + 4) != 0)) {
        iVar8 = strncmp((char *)param_1,"STARTCHAR",9);
        if (((iVar8 == 0) && (param_1[9] < 0x21)) &&
           ((0x100002601U >> ((longlong)(char)param_1[9] & 0x3fU) & 1) != 0)) {
          if ((*puVar5 & 0xfc0) != 0) {
            local_res18[0] = 0xb5;
            goto LAB_144e2ad46;
          }
          FUN_144b56350(uVar4,*(undefined8 *)(puVar5 + 6));
          puVar1 = puVar5 + 0xe;
          puVar5[6] = 0;
          puVar5[7] = 0;
          local_res18[0] = FUN_144e291f0(puVar1,&DAT_149a1f0bc,param_1,param_2);
          if (local_res18[0] != 0) goto LAB_144e2ad46;
          uVar18 = 1;
          if ((puVar1 != (uint *)0x0) && (puVar5[0x11] != 0)) {
            if (puVar5[0x11] < 2) {
              puVar5[0x11] = 0;
            }
            else {
              do {
                uVar9 = uVar18 - 1;
                uVar15 = (ulonglong)uVar18;
                uVar18 = uVar18 + 1;
                *(undefined8 *)(*(longlong *)puVar1 + (ulonglong)uVar9 * 8) =
                     *(undefined8 *)(*(longlong *)puVar1 + uVar15 * 8);
              } while (uVar18 < puVar5[0x11]);
              puVar5[0x11] = puVar5[0x11] - 1;
            }
          }
          _Src = (void *)FUN_144e29140(puVar1,0x20,&param_5);
          if (_Src == (void *)0x0) {
LAB_144e2ad3e:
            local_res18[0] = 3;
            goto LAB_144e2ad46;
          }
          uVar18 = (int)param_5 + 1;
          _Dst = (void *)FUN_144b561b0(uVar4,1,0,uVar18,0,local_res18);
          *(void **)(puVar5 + 6) = _Dst;
          if (local_res18[0] != 0) goto LAB_144e2ad46;
          memcpy(_Dst,_Src,(ulonglong)uVar18);
          *puVar5 = *puVar5 | 0x40;
        }
        else {
          iVar8 = strncmp((char *)param_1,"ENCODING",8);
          if (((iVar8 == 0) && (param_1[8] < 0x21)) &&
             ((0x100002601U >> ((longlong)(char)param_1[8] & 0x3fU) & 1) != 0)) {
            if ((*puVar5 & 0x40) == 0) {
              local_res18[0] = 0xb5;
              goto LAB_144e2ad46;
            }
            local_res18[0] = FUN_144e291f0(puVar5 + 0xe,&DAT_149a1f0bc,param_1,param_2);
            if (local_res18[0] != 0) goto LAB_144e2ad46;
            lVar19 = *(longlong *)(puVar5 + 0xe);
            uVar18 = FUN_144e29810(*(undefined8 *)(lVar19 + 8));
            if ((int)uVar18 < -1) {
              uVar18 = 0xffffffff;
            }
            puVar5[8] = uVar18;
            if ((uVar18 == 0xffffffff) && (2 < puVar5[0x11])) {
              uVar18 = FUN_144e29810(*(undefined8 *)(lVar19 + 0x10));
              puVar5[8] = uVar18;
            }
            uVar18 = puVar5[8];
            if (0x110000 < puVar5[8] + 1) {
              uVar18 = 0xffffffff;
            }
            puVar5[8] = uVar18;
            if ((int)uVar18 < 0) {
              if (*(int *)(*(longlong *)(puVar5 + 0xc) + 4) == 0) {
                FUN_144b56350(uVar4,*(undefined8 *)(puVar5 + 6));
              }
              else {
                iVar8 = *(int *)(lVar3 + 0x48);
                if (*(int *)(lVar3 + 0x4c) == iVar8) {
                  uVar11 = FUN_144b561b0(uVar4,0x30,iVar8,iVar8 + 4,*(undefined8 *)(lVar3 + 0x50),
                                         local_res18);
                  *(undefined8 *)(lVar3 + 0x50) = uVar11;
                  if (local_res18[0] != 0) goto LAB_144e2ad46;
                  *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 4;
                }
                puVar13 = (undefined8 *)
                          ((ulonglong)*(uint *)(lVar3 + 0x4c) * 0x30 + *(longlong *)(lVar3 + 0x50));
                *puVar13 = *(undefined8 *)(puVar5 + 6);
                *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(lVar3 + 0x4c);
                *(int *)(lVar3 + 0x4c) = *(int *)(lVar3 + 0x4c) + 1;
              }
              puVar5[6] = 0;
              puVar5[7] = 0;
            }
            else {
              iVar8 = *(int *)(lVar3 + 0x34);
              if (*(int *)(lVar3 + 0x38) == iVar8) {
                uVar11 = FUN_144b561b0(uVar4,0x30,iVar8,iVar8 + 0x40,*(undefined8 *)(lVar3 + 0x40),
                                       local_res18);
                *(undefined8 *)(lVar3 + 0x40) = uVar11;
                if (local_res18[0] != 0) goto LAB_144e2ad46;
                *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 0x40;
              }
              puVar13 = (undefined8 *)
                        ((ulonglong)*(uint *)(lVar3 + 0x38) * 0x30 + *(longlong *)(lVar3 + 0x40));
              *(uint *)(lVar3 + 0x38) = *(uint *)(lVar3 + 0x38) + 1;
              *puVar13 = *(undefined8 *)(puVar5 + 6);
              *(uint *)(puVar13 + 1) = puVar5[8];
            }
            *puVar5 = *puVar5 & 0x3fffff7f;
            *puVar5 = *puVar5 | 0x80;
            puVar5[6] = 0;
            puVar5[7] = 0;
          }
          else {
            uVar18 = *puVar5;
            if (-1 < (char)uVar18) {
              local_res18[0] = 0xb6;
              goto LAB_144e2ad46;
            }
            if (puVar5[8] == 0xffffffff) {
              lVar19 = (ulonglong)(*(int *)(lVar3 + 0x4c) - 1) * 0x30 + *(longlong *)(lVar3 + 0x50);
            }
            else {
              lVar19 = (ulonglong)(*(int *)(lVar3 + 0x38) - 1) * 0x30 + *(longlong *)(lVar3 + 0x40);
            }
            if ((uVar18 >> 0xb & 1) == 0) {
              iVar8 = strncmp((char *)param_1,"SWIDTH",6);
              if (((iVar8 == 0) && (param_1[6] < 0x21)) &&
                 ((0x100002601U >> ((ulonglong)param_1[6] & 0x3f) & 1) != 0)) {
                local_res18[0] = FUN_144e291f0(puVar5 + 0xe,&DAT_149a1f0bc,param_1,param_2);
                if (local_res18[0] != 0) goto LAB_144e2ad46;
                uVar6 = FUN_144e29780(*(undefined8 *)(*(longlong *)(puVar5 + 0xe) + 8));
                *(undefined2 *)(lVar19 + 0xc) = uVar6;
                *puVar5 = *puVar5 | 0x100;
              }
              else {
                iVar8 = strncmp((char *)param_1,"DWIDTH",6);
                if (((iVar8 == 0) && (param_1[6] < 0x21)) &&
                   ((0x100002601U >> ((ulonglong)param_1[6] & 0x3f) & 1) != 0)) {
                  local_res18[0] = FUN_144e291f0(puVar5 + 0xe,&DAT_149a1f0bc,param_1,param_2);
                  if (local_res18[0] != 0) goto LAB_144e2ad46;
                  uVar6 = FUN_144e29780(*(undefined8 *)(*(longlong *)(puVar5 + 0xe) + 8));
                  *(undefined2 *)(lVar19 + 0xe) = uVar6;
                  if ((*puVar5 & 0x100) == 0) {
                    uVar6 = FUN_144b55580(uVar6,72000,
                                          *(int *)(lVar3 + 0x18) * *(int *)(lVar3 + 0x14));
                    *(undefined2 *)(lVar19 + 0xc) = uVar6;
                  }
                  *puVar5 = *puVar5 | 0x200;
                }
                else {
                  iVar8 = strncmp((char *)param_1,"BBX",3);
                  if (((iVar8 != 0) || (0x20 < param_1[3])) ||
                     ((0x100002601U >> ((ulonglong)param_1[3] & 0x3f) & 1) == 0)) {
                    iVar8 = strncmp((char *)param_1,"BITMAP",6);
                    if (((iVar8 == 0) && (param_1[6] < 0x21)) &&
                       ((0x100002601U >> ((ulonglong)param_1[6] & 0x3f) & 1) != 0)) {
                      if ((*puVar5 & 0x400) == 0) {
                        local_res18[0] = 0xb7;
                      }
                      else {
                        uVar9 = (int)((uint)*(ushort *)(*(longlong *)(puVar5 + 10) + 0x80) *
                                      (uint)*(ushort *)(lVar19 + 0x10) + 7) >> 3;
                        uVar18 = *(ushort *)(lVar19 + 0x12) * uVar9;
                        *(uint *)(lVar19 + 0x28) = uVar9;
                        if ((uVar9 < 0x10000) && (uVar18 < 0x10000)) {
                          *(short *)(lVar19 + 0x2c) = (short)uVar18;
                          uVar11 = FUN_144b561b0(uVar4,1,0,uVar18 & 0xffff,0,local_res18);
                          *(undefined8 *)(lVar19 + 0x20) = uVar11;
                          if (local_res18[0] == 0) {
                            *puVar5 = *puVar5 | 0x800;
                            puVar5[2] = 0;
                            return 0;
                          }
                        }
                        else {
                          local_res18[0] = 0xb8;
                        }
                      }
                      goto LAB_144e2ad46;
                    }
                    goto LAB_144e2ad3e;
                  }
                  local_res18[0] = FUN_144e291f0(puVar5 + 0xe,&DAT_149a1f0bc,param_1,param_2);
                  if (local_res18[0] != 0) goto LAB_144e2ad46;
                  uVar6 = FUN_144e298c0(*(undefined8 *)(*(longlong *)(puVar5 + 0xe) + 8));
                  *(undefined2 *)(lVar19 + 0x10) = uVar6;
                  uVar6 = FUN_144e298c0(*(undefined8 *)(*(longlong *)(puVar5 + 0xe) + 0x10));
                  *(undefined2 *)(lVar19 + 0x12) = uVar6;
                  uVar6 = FUN_144e29970(*(undefined8 *)(*(longlong *)(puVar5 + 0xe) + 0x18));
                  *(undefined2 *)(lVar19 + 0x14) = uVar6;
                  sVar7 = FUN_144e29970(*(undefined8 *)(*(longlong *)(puVar5 + 0xe) + 0x20));
                  sVar12 = *(short *)(lVar19 + 0x12) + sVar7;
                  *(short *)(lVar19 + 0x16) = sVar7;
                  *(short *)(lVar19 + 0x18) = sVar12;
                  *(short *)(lVar19 + 0x1a) = -sVar7;
                  sVar7 = *(short *)((longlong)puVar5 + 0x12);
                  if (sVar7 < sVar12) {
                    sVar7 = sVar12;
                  }
                  *(short *)((longlong)puVar5 + 0x12) = sVar7;
                  sVar7 = *(short *)(lVar19 + 0x1a);
                  if (*(short *)(lVar19 + 0x1a) <= (short)puVar5[5]) {
                    sVar7 = (short)puVar5[5];
                  }
                  sVar12 = (short)puVar5[4];
                  *(short *)(puVar5 + 5) = sVar7;
                  sVar7 = *(short *)(lVar19 + 0x10) + *(short *)(lVar19 + 0x14);
                  *(short *)((longlong)puVar5 + 0x16) = sVar7;
                  if (sVar12 < sVar7) {
                    sVar12 = sVar7;
                  }
                  *(short *)(puVar5 + 4) = sVar12;
                  sVar7 = *(short *)(lVar19 + 0x14);
                  if ((short)puVar5[3] <= *(short *)(lVar19 + 0x14)) {
                    sVar7 = (short)puVar5[3];
                  }
                  *(short *)(puVar5 + 3) = sVar7;
                  sVar7 = *(short *)(lVar19 + 0x14);
                  if (*(short *)(lVar19 + 0x14) <= *(short *)((longlong)puVar5 + 0xe)) {
                    sVar7 = *(short *)((longlong)puVar5 + 0xe);
                  }
                  *(short *)((longlong)puVar5 + 0xe) = sVar7;
                  if ((*puVar5 & 0x200) == 0) {
                    *(undefined2 *)(lVar19 + 0xe) = *(undefined2 *)(lVar19 + 0x10);
                  }
                  if ((**(int **)(puVar5 + 0xc) != 0) &&
                     (sVar7 = FUN_144b55580(*(undefined2 *)(lVar19 + 0xe),72000,
                                            *(int *)(lVar3 + 0x18) * *(int *)(lVar3 + 0x14)),
                     sVar7 != *(short *)(lVar19 + 0xc))) {
                    *(short *)(lVar19 + 0xc) = sVar7;
                    *puVar5 = *puVar5 | 0x1000;
                  }
                  *puVar5 = *puVar5 | 0x400;
                }
              }
            }
            else if (puVar5[2] < (uint)*(ushort *)(lVar19 + 0x12)) {
              uVar17 = 0;
              uVar9 = *(int *)(lVar19 + 0x28) * 2;
              pbVar16 = (byte *)((ulonglong)(*(int *)(lVar19 + 0x28) * puVar5[2]) +
                                *(longlong *)(lVar19 + 0x20));
              pbVar14 = param_1;
              uVar18 = uVar17;
              if (uVar9 != 0) {
                do {
                  bVar2 = *pbVar14;
                  if (((&DAT_149a1eb10)[bVar2 >> 3] & (byte)(1 << (bVar2 & 7))) == 0) {
                    uVar18 = uVar17;
                    if ((uVar17 < uVar9) && ((*puVar5 >> 0x1e & 1) == 0)) {
                      *puVar5 = *puVar5 | 0x40000000;
                    }
                    break;
                  }
                  *pbVar16 = (&DAT_149a1ea70)[(char)bVar2] + *pbVar16 * '\x10';
                  uVar18 = uVar17 + 1;
                  if ((uVar18 < uVar9) && ((uVar17 & 1) != 0)) {
                    pbVar16 = pbVar16 + 1;
                    *pbVar16 = 0;
                  }
                  pbVar14 = pbVar14 + 1;
                  uVar17 = uVar18;
                } while (uVar18 < uVar9);
              }
              if (*(ushort *)(lVar19 + 0x10) != 0) {
                *pbVar16 = *pbVar16 &
                           (&DAT_149a1ea18)
                           [(uint)*(ushort *)(*(longlong *)(puVar5 + 10) + 0x80) *
                            (uint)*(ushort *)(lVar19 + 0x10) & 7];
              }
              if (((uVar18 == uVar9) &&
                  (((&DAT_149a1eb10)[param_1[uVar9] >> 3] & (byte)(1 << (param_1[uVar9] & 7))) != 0)
                  ) && ((*puVar5 >> 0x1e & 1) == 0)) {
                *puVar5 = *puVar5 | 0x40000000;
              }
              puVar5[2] = puVar5[2] + 1;
            }
            else if (-1 < (int)uVar18) {
              *puVar5 = uVar18 | 0x80000000;
            }
          }
        }
      }
    }
  }
  if (local_res18[0] == 0) {
    return 0;
  }
LAB_144e2ad46:
  if ((*puVar5 & 0x40) != 0) {
    FUN_144b56350(uVar4,*(undefined8 *)(puVar5 + 6));
    puVar5[6] = 0;
    puVar5[7] = 0;
  }
  return local_res18[0];
}



// FUNCTION 144e2ad70 FUN_144e2ad70 body=722 status=ok
// SIG undefined FUN_144e2ad70(void)

void FUN_144e2ad70(char *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  uint *param_5)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  char *local_d8;
  char *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar3 = strncmp(param_1,"ENDPROPERTIES",0xd);
  if (((iVar3 == 0) && ((byte)param_1[0xd] < 0x21)) &&
     ((0x100002601U >> ((longlong)param_1[0xd] & 0x3fU) & 1) != 0)) {
    lVar2 = *(longlong *)(param_5 + 10);
    if ((((lVar2 == 0) || (*(int *)(lVar2 + 0x58) == 0)) ||
        (plVar4 = (longlong *)FUN_144b59280("FONT_ASCENT",*(undefined8 *)(lVar2 + 0x78)),
        plVar4 == (longlong *)0x0)) || (*(longlong *)(lVar2 + 0x60) + *plVar4 * 0x18 == 0)) {
      *(int *)(*(longlong *)(param_5 + 10) + 0x2c) =
           (int)*(short *)(*(longlong *)(param_5 + 10) + 0x10);
      FUN_1424c2e40(local_c8,&DAT_149a1f118,(int)*(short *)(*(longlong *)(param_5 + 10) + 0x10));
      iVar3 = FUN_144e29f50(*(undefined8 *)(param_5 + 10),"FONT_ASCENT",local_c8,param_3);
      if (iVar3 != 0) goto LAB_144e2b032;
    }
    lVar2 = *(longlong *)(param_5 + 10);
    if (((lVar2 == 0) || (*(int *)(lVar2 + 0x58) == 0)) ||
       ((plVar4 = (longlong *)FUN_144b59280("FONT_DESCENT",*(undefined8 *)(lVar2 + 0x78)),
        plVar4 == (longlong *)0x0 || (*(longlong *)(lVar2 + 0x60) + *plVar4 * 0x18 == 0)))) {
      *(int *)(*(longlong *)(param_5 + 10) + 0x30) =
           (int)*(short *)(*(longlong *)(param_5 + 10) + 0x12);
      FUN_1424c2e40(local_c8,&DAT_149a1f118,(int)*(short *)(*(longlong *)(param_5 + 10) + 0x12));
      iVar3 = FUN_144e29f50(*(undefined8 *)(param_5 + 10),"FONT_DESCENT",local_c8,param_3);
      if (iVar3 != 0) goto LAB_144e2b032;
    }
    *param_5 = *param_5 & 0xffffffef;
    *param_4 = FUN_144e2a330;
    goto LAB_144e2b032;
  }
  iVar3 = strncmp(param_1,"_XFREE86_GLYPH_RANGES",0x15);
  if (((iVar3 == 0) && ((byte)param_1[0x15] < 0x21)) &&
     ((0x100002601U >> ((longlong)param_1[0x15] & 0x3fU) & 1) != 0)) goto LAB_144e2b032;
  iVar3 = strncmp(param_1,"COMMENT",7);
  if (iVar3 == 0) {
    pcVar7 = param_1 + 7;
    if ((0x20 < (byte)param_1[7]) || ((0x100002601U >> ((longlong)param_1[7] & 0x3fU) & 1) == 0))
    goto LAB_144e2af7b;
    pcVar6 = param_1;
    if (*pcVar7 != '\0') {
      *pcVar7 = '\0';
      pcVar7 = param_1 + 8;
    }
  }
  else {
LAB_144e2af7b:
    local_e8 = *(undefined8 *)(param_5 + 10);
    iVar3 = FUN_144e29df0(param_1,param_2,&local_d0,&local_d8);
    pcVar6 = local_d0;
    pcVar7 = local_d8;
    if (iVar3 == 0) {
      puVar1 = param_5 + 0xe;
      iVar3 = FUN_144e291f0(puVar1,&DAT_149a1f0bc,param_1,param_2);
      if (iVar3 != 0) goto LAB_144e2b032;
      pcVar6 = (char *)**(undefined8 **)puVar1;
      if ((puVar1 != (uint *)0x0) && (param_5[0x11] != 0)) {
        if (param_5[0x11] < 2) {
          param_5[0x11] = 0;
        }
        else {
          uVar9 = 1;
          do {
            uVar5 = uVar9 - 1;
            uVar8 = (ulonglong)uVar9;
            uVar9 = uVar9 + 1;
            *(undefined8 *)(*(longlong *)puVar1 + (ulonglong)uVar5 * 8) =
                 *(undefined8 *)(*(longlong *)puVar1 + uVar8 * 8);
          } while (uVar9 < param_5[0x11]);
          param_5[0x11] = param_5[0x11] - 1;
        }
      }
      pcVar7 = (char *)FUN_144e29140(puVar1,0x20,&local_d8);
    }
  }
  FUN_144e29f50(*(undefined8 *)(param_5 + 10),pcVar6,pcVar7,param_3);
LAB_144e2b032:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
}



// FUNCTION 144e2b060 FUN_144e2b060 body=1877 status=ok
// SIG undefined FUN_144e2b060(void)

void FUN_144e2b060(char *param_1,int param_2,undefined4 param_3,undefined8 *param_4,uint *param_5)

{
  uint uVar1;
  uint *puVar2;
  undefined2 uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *_Src;
  char *pcVar11;
  undefined **ppuVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  int *local_e0;
  int local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar13 = 0;
  local_d8 = 0;
  uVar14 = uVar13;
  if (*(longlong *)(param_5 + 10) != 0) {
    uVar14 = *(ulonglong *)(*(longlong *)(param_5 + 10) + 0x88);
  }
  local_d0 = param_3;
  iVar5 = strncmp(param_1,"COMMENT",7);
  if (iVar5 == 0) {
    pcVar11 = param_1 + 7;
    if (((byte)param_1[7] < 0x21) &&
       ((0x100002601U >> ((ulonglong)(byte)param_1[7] & 0x3f) & 1) != 0)) {
      if ((*(int *)(*(longlong *)(param_5 + 0xc) + 8) != 0) && (*(longlong *)(param_5 + 10) != 0)) {
        iVar5 = param_2 + -7;
        if (*pcVar11 != '\0') {
          pcVar11 = param_1 + 8;
          iVar5 = param_2 + -8;
        }
        FUN_144e29bc0(*(longlong *)(param_5 + 10),pcVar11,iVar5);
      }
      goto LAB_144e2b7a9;
    }
  }
  if ((*param_5 & 1) == 0) {
    uVar10 = *(undefined8 *)(param_5 + 0x14);
    iVar5 = strncmp(param_1,"STARTFONT",9);
    if (((iVar5 == 0) && ((byte)param_1[9] < 0x21)) &&
       ((0x100002601U >> ((ulonglong)(byte)param_1[9] & 0x3f) & 1) != 0)) {
      param_5[10] = 0;
      param_5[0xb] = 0;
      *param_5 = 1;
      lVar8 = FUN_144b560d0(uVar10,200,&local_d8);
      if (local_d8 == 0) {
        *(longlong *)(param_5 + 10) = lVar8;
        *(undefined8 *)(lVar8 + 0x88) = *(undefined8 *)(param_5 + 0x14);
        param_5[0x14] = 0;
        param_5[0x15] = 0;
        local_d8 = FUN_144b590d0(lVar8 + 0xa0,uVar10);
        if (local_d8 == 0) {
          ppuVar12 = &PTR_s_ADD_STYLE_NAME_149a1e1a0;
          do {
            local_d8 = 0;
            local_d8 = thunk_FUN_144b59540(*ppuVar12,uVar13,lVar8 + 0xa0,uVar10);
            if (local_d8 != 0) goto LAB_144e2b7a9;
            uVar13 = uVar13 + 1;
            ppuVar12 = ppuVar12 + 3;
          } while (uVar13 < 0x53);
          uVar9 = FUN_144b560d0(uVar10,0x28,&local_d8);
          *(undefined8 *)(*(longlong *)(param_5 + 10) + 0x78) = uVar9;
          if ((local_d8 == 0) &&
             (local_d8 = FUN_144b590d0(*(undefined8 *)(*(longlong *)(param_5 + 10) + 0x78),uVar10),
             local_d8 == 0)) {
            *(undefined4 *)(*(longlong *)(param_5 + 10) + 0x20) =
                 *(undefined4 *)(*(longlong *)(param_5 + 0xc) + 0xc);
            *(undefined4 *)(*(longlong *)(param_5 + 10) + 0x28) = 0xffffffff;
          }
        }
      }
    }
  }
  else {
    iVar5 = strncmp(param_1,"STARTPROPERTIES",0xf);
    if (((iVar5 == 0) && ((byte)param_1[0xf] < 0x21)) &&
       ((0x100002601U >> ((ulonglong)(byte)param_1[0xf] & 0x3f) & 1) != 0)) {
      if (((*param_5 & 8) != 0) &&
         (local_d8 = FUN_144e291f0(param_5 + 0xe,&DAT_149a1f0bc,param_1,param_2), local_d8 == 0)) {
        uVar6 = FUN_144e29780(*(undefined8 *)(*(longlong *)(param_5 + 0xe) + 8));
        *(uint *)(*(longlong *)(param_5 + 10) + 0x58) = uVar6;
        param_5[1] = uVar6;
        if (param_5[0x16] >> 2 < uVar6) {
          *(undefined4 *)(*(longlong *)(param_5 + 10) + 0x58) = 0;
        }
        else {
          local_e0 = &local_d8;
          local_e8 = 0;
          uVar10 = FUN_144b561b0(uVar14,0x18,0,uVar6);
          *(undefined8 *)(*(longlong *)(param_5 + 10) + 0x60) = uVar10;
          if (local_d8 == 0) {
            *param_5 = *param_5 | 0x10;
            *param_4 = FUN_144e2ad70;
          }
          else {
            *(undefined4 *)(*(longlong *)(param_5 + 10) + 0x58) = 0;
          }
        }
      }
    }
    else {
      iVar5 = strncmp(param_1,"FONTBOUNDINGBOX",0xf);
      if (((iVar5 == 0) && ((byte)param_1[0xf] < 0x21)) &&
         ((0x100002601U >> ((ulonglong)(byte)param_1[0xf] & 0x3f) & 1) != 0)) {
        if (((*param_5 & 4) != 0) &&
           (local_d8 = FUN_144e291f0(param_5 + 0xe,&DAT_149a1f0bc,param_1,param_2), local_d8 == 0))
        {
          uVar3 = FUN_144e298c0(*(undefined8 *)(*(longlong *)(param_5 + 0xe) + 8));
          *(undefined2 *)(*(longlong *)(param_5 + 10) + 8) = uVar3;
          uVar3 = FUN_144e298c0(*(undefined8 *)(*(longlong *)(param_5 + 0xe) + 0x10));
          *(undefined2 *)(*(longlong *)(param_5 + 10) + 10) = uVar3;
          uVar3 = FUN_144e29970(*(undefined8 *)(*(longlong *)(param_5 + 0xe) + 0x18));
          *(undefined2 *)(*(longlong *)(param_5 + 10) + 0xc) = uVar3;
          uVar3 = FUN_144e29970(*(undefined8 *)(*(longlong *)(param_5 + 0xe) + 0x20));
          *(undefined2 *)(*(longlong *)(param_5 + 10) + 0xe) = uVar3;
          lVar8 = *(longlong *)(param_5 + 10);
          *(short *)(lVar8 + 0x10) = *(short *)(lVar8 + 0xe) + *(short *)(lVar8 + 10);
          *(short *)(*(longlong *)(param_5 + 10) + 0x12) =
               -*(short *)(*(longlong *)(param_5 + 10) + 0xe);
          *param_5 = *param_5 | 8;
        }
      }
      else {
        iVar5 = strncmp(param_1,"FONT",4);
        if (((iVar5 == 0) && ((byte)param_1[4] < 0x21)) &&
           ((0x100002601U >> ((ulonglong)(byte)param_1[4] & 0x3f) & 1) != 0)) {
          puVar2 = param_5 + 0xe;
          local_d8 = FUN_144e291f0(puVar2,&DAT_149a1f0bc,param_1,param_2);
          if (local_d8 == 0) {
            uVar6 = 1;
            if ((puVar2 != (uint *)0x0) && (param_5[0x11] != 0)) {
              if (param_5[0x11] < 2) {
                param_5[0x11] = 0;
              }
              else {
                do {
                  uVar1 = uVar6 - 1;
                  uVar13 = (ulonglong)uVar6;
                  uVar6 = uVar6 + 1;
                  *(undefined8 *)(*(longlong *)puVar2 + (ulonglong)uVar1 * 8) =
                       *(undefined8 *)(*(longlong *)puVar2 + uVar13 * 8);
                } while (uVar6 < param_5[0x11]);
                param_5[0x11] = param_5[0x11] - 1;
              }
            }
            _Src = (void *)FUN_144e29140(puVar2,0x20,&local_d4);
            if (_Src != (void *)0x0) {
              FUN_144b56350(uVar14,**(undefined8 **)(param_5 + 10));
              **(undefined8 **)(param_5 + 10) = 0;
              local_e0 = &local_d8;
              local_e8 = 0;
              uVar10 = FUN_144b561b0(uVar14,1,0,local_d4 + 1U);
              **(undefined8 **)(param_5 + 10) = uVar10;
              if (local_d8 == 0) {
                memcpy((void *)**(undefined8 **)(param_5 + 10),_Src,(ulonglong)(local_d4 + 1U));
                iVar5 = FUN_144e29c60(*(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc),
                                      local_d0);
                if (iVar5 == 0) {
                  *param_5 = *param_5 | 2;
                }
              }
            }
          }
        }
        else {
          iVar5 = strncmp(param_1,"SIZE",4);
          if (((iVar5 == 0) && ((byte)param_1[4] < 0x21)) &&
             ((0x100002601U >> ((longlong)param_1[4] & 0x3fU) & 1) != 0)) {
            if (((*param_5 & 2) != 0) &&
               (local_d8 = FUN_144e291f0(param_5 + 0xe,&DAT_149a1f0bc,param_1,param_2),
               local_d8 == 0)) {
              uVar7 = FUN_144e29780(*(undefined8 *)(*(longlong *)(param_5 + 0xe) + 8));
              *(undefined4 *)(*(longlong *)(param_5 + 10) + 0x14) = uVar7;
              uVar7 = FUN_144e29780(*(undefined8 *)(*(longlong *)(param_5 + 0xe) + 0x10));
              *(undefined4 *)(*(longlong *)(param_5 + 10) + 0x18) = uVar7;
              uVar7 = FUN_144e29780(*(undefined8 *)(*(longlong *)(param_5 + 0xe) + 0x18));
              *(undefined4 *)(*(longlong *)(param_5 + 10) + 0x1c) = uVar7;
              if (param_5[0x11] == 5) {
                uVar4 = FUN_144e29970(*(undefined8 *)(*(longlong *)(param_5 + 0xe) + 0x20));
                if (4 < uVar4) {
                  *(undefined2 *)(*(longlong *)(param_5 + 10) + 0x80) = 8;
                  *param_5 = *param_5 | 4;
                  goto LAB_144e2b7a9;
                }
                if (2 < uVar4) {
                  *(undefined2 *)(*(longlong *)(param_5 + 10) + 0x80) = 4;
                  *param_5 = *param_5 | 4;
                  goto LAB_144e2b7a9;
                }
                lVar8 = *(longlong *)(param_5 + 10);
                if (1 < uVar4) {
                  *(undefined2 *)(lVar8 + 0x80) = 2;
                  *param_5 = *param_5 | 4;
                  goto LAB_144e2b7a9;
                }
              }
              else {
                lVar8 = *(longlong *)(param_5 + 10);
              }
              *(undefined2 *)(lVar8 + 0x80) = 1;
              *param_5 = *param_5 | 4;
            }
          }
          else {
            iVar5 = strncmp(param_1,"CHARS",5);
            if ((((iVar5 == 0) && ((byte)param_1[5] < 0x21)) &&
                ((0x100002601U >> ((longlong)param_1[5] & 0x3fU) & 1) != 0)) &&
               ((*param_5 & 8) != 0)) {
              *(int *)(*(longlong *)(param_5 + 10) + 0x2c) =
                   (int)*(short *)(*(longlong *)(param_5 + 10) + 0x10);
              FUN_1424c2e40(local_c8,&DAT_149a1f118,
                            (int)*(short *)(*(longlong *)(param_5 + 10) + 0x10));
              local_d8 = FUN_144e29f50(*(undefined8 *)(param_5 + 10),"FONT_ASCENT",local_c8,param_3)
              ;
              if (local_d8 == 0) {
                *(int *)(*(longlong *)(param_5 + 10) + 0x30) =
                     (int)*(short *)(*(longlong *)(param_5 + 10) + 0x12);
                FUN_1424c2e40(local_c8,&DAT_149a1f118,
                              (int)*(short *)(*(longlong *)(param_5 + 10) + 0x12));
                iVar5 = FUN_144e29f50(*(undefined8 *)(param_5 + 10),"FONT_DESCENT",local_c8,param_3)
                ;
                if (iVar5 == 0) {
                  *param_4 = FUN_144e2a330;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_144e2b7a9:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
}



// FUNCTION 144e2b7d0 FUN_144e2b7d0 body=769 status=ok
// SIG undefined FUN_144e2b7d0(void)

void FUN_144e2b7d0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  size_t _Size;
  size_t sVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [32];
  int local_58 [2];
  char *local_50 [4];
  size_t local_30 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar8 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  local_58[0] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_50[0] = (char *)0x0;
  local_50[1] = (undefined1 *)0x0;
  local_50[2] = (char *)0x0;
  local_50[3] = (char *)0x0;
  uVar10 = uVar11;
  uVar12 = uVar11;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x58) != 0)) {
    plVar7 = (longlong *)FUN_144b59280("SLANT",*(undefined8 *)(lVar8 + 0x78));
    if (((plVar7 != (longlong *)0x0) &&
        (((lVar1 = *(longlong *)(lVar8 + 0x60) + *plVar7 * 0x18, lVar1 != 0 &&
          (*(int *)(lVar1 + 8) == 1)) && (*(char **)(lVar1 + 0x10) != (char *)0x0)))) &&
       ((bVar6 = **(char **)(lVar1 + 0x10) + 0xb7, bVar6 < 0x27 &&
        ((0x4100000041U >> ((ulonglong)bVar6 & 0x3f) & 1) != 0)))) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
      local_50[2] = "Italic";
      if ((**(char **)(lVar1 + 0x10) + 0xb1U & 0xdf) == 0) {
        local_50[2] = "Oblique";
      }
    }
    if (*(int *)(lVar8 + 0x58) != 0) {
      plVar7 = (longlong *)FUN_144b59280("WEIGHT_NAME",*(undefined8 *)(lVar8 + 0x78));
      if (((plVar7 != (longlong *)0x0) &&
          (lVar1 = *(longlong *)(lVar8 + 0x60) + *plVar7 * 0x18, lVar1 != 0)) &&
         ((*(int *)(lVar1 + 8) == 1 &&
          ((*(char **)(lVar1 + 0x10) != (char *)0x0 &&
           ((**(char **)(lVar1 + 0x10) + 0xbeU & 0xdf) == 0)))))) {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
        local_50[1] = "Bold";
      }
      if (*(int *)(lVar8 + 0x58) != 0) {
        plVar7 = (longlong *)FUN_144b59280("SETWIDTH_NAME",*(undefined8 *)(lVar8 + 0x78));
        if (((((plVar7 != (longlong *)0x0) &&
              (lVar1 = *(longlong *)(lVar8 + 0x60) + *plVar7 * 0x18, lVar1 != 0)) &&
             (*(int *)(lVar1 + 8) == 1)) &&
            ((pcVar9 = *(char **)(lVar1 + 0x10), pcVar9 != (char *)0x0 &&
             (cVar2 = *pcVar9, cVar2 != '\0')))) && (cVar2 != 'N')) {
          if (cVar2 != 'n') {
            local_50[3] = pcVar9;
          }
        }
        if ((((*(int *)(lVar8 + 0x58) != 0) &&
             (plVar7 = (longlong *)FUN_144b59280("ADD_STYLE_NAME",*(undefined8 *)(lVar8 + 0x78)),
             plVar7 != (longlong *)0x0)) &&
            ((lVar8 = *(longlong *)(lVar8 + 0x60) + *plVar7 * 0x18, lVar8 != 0 &&
             (((*(int *)(lVar8 + 8) == 1 &&
               (pcVar9 = *(char **)(lVar8 + 0x10), pcVar9 != (char *)0x0)) &&
              (cVar2 = *pcVar9, cVar2 != '\0')))))) && (cVar2 != 'N')) {
          if (cVar2 != 'n') {
            local_50[0] = pcVar9;
          }
        }
      }
    }
  }
  do {
    *(undefined8 *)((longlong)local_30 + uVar10) = 0;
    if (*(longlong *)((longlong)local_50 + uVar10) != 0) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (*(char *)(*(longlong *)((longlong)local_50 + uVar10) + lVar8) != '\0');
      *(longlong *)((longlong)local_30 + uVar10) = lVar8;
      uVar12 = uVar12 + 1 + lVar8;
    }
    uVar10 = uVar10 + 8;
  } while (uVar10 < 0x20);
  if (uVar12 == 0) {
    local_30[0] = 7;
    local_50[0] = "Regular";
    uVar12 = 8;
  }
  pcVar9 = (char *)FUN_144b560d0(uVar3,uVar12 & 0xffffffff,local_58);
  *(char **)(param_1 + 0x20) = pcVar9;
  if (local_58[0] == 0) {
    do {
      pcVar4 = local_50[uVar11];
      _Size = local_30[uVar11];
      if (pcVar4 != (char *)0x0) {
        if (pcVar9 != *(char **)(param_1 + 0x20)) {
          *pcVar9 = ' ';
          pcVar9 = pcVar9 + 1;
        }
        memcpy(pcVar9,pcVar4,_Size);
        sVar5 = _Size;
        pcVar4 = pcVar9;
        if ((uVar11 == 0) || (uVar11 == 3)) {
          for (; sVar5 != 0; sVar5 = sVar5 - 1) {
            if (*pcVar4 == ' ') {
              *pcVar4 = '-';
            }
            pcVar4 = pcVar4 + 1;
          }
        }
        pcVar9 = pcVar9 + _Size;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < 4);
    *pcVar9 = '\0';
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_78);
}



// FUNCTION 144e2bae8 FUN_144e2bae8 body=156 status=ok
// SIG undefined FUN_144e2bae8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144e2bae8(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x144e2bb13;
  capture_current_context(&DAT_14c793a90);
  _DAT_14c793a00 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_14c793b28 = puVar3 + 0x30;
  _DAT_14c7939f0 = 0xc0000409;
  _DAT_14c7939f4 = 1;
  _DAT_14c793a08 = 1;
  DAT_14c793a10 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x144e2bb7f;
  DAT_14c793b88 = _DAT_14c793a00;
  __raise_securityfailure(&PTR_DAT_149a1f150);
  return;
}



// FUNCTION 144e2bb84 FUN_144e2bb84 body=19 status=ok
// SIG undefined FUN_144e2bb84(void)

void FUN_144e2bb84(void)

{
  FUN_144e2bae8(8);
  return;
}



// FUNCTION 144e2bb98 FUN_144e2bb98 body=210 status=ok
// SIG undefined FUN_144e2bb98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144e2bb98(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x144e2bbc3;
  capture_previous_context(&DAT_14c793a90);
  _DAT_14c793a00 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_14c793b28 = puVar3 + 0x40;
  _DAT_14c793b10 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_14c7939f0 = 0xc0000409;
  _DAT_14c7939f4 = 1;
  _DAT_14c793a08 = 1;
  DAT_14c793a10 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_14c707940;
  *(undefined8 *)(puVar3 + 0x28) = DAT_14c707980;
  *(undefined8 *)(puVar3 + -8) = 0x144e2bc65;
  DAT_14c793b88 = _DAT_14c793a00;
  __raise_securityfailure(&PTR_DAT_149a1f150);
  return;
}



// FUNCTION 144e2bc6c capture_current_context body=109 status=ok
// SIG undefined capture_current_context(void)

/* Library Function - Single Match
    capture_current_context
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void capture_current_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18;
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,&local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  return;
}



// FUNCTION 144e2bcdc capture_previous_context body=113 status=ok
// SIG undefined capture_previous_context(void)

/* Library Function - Single Match
    capture_previous_context
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void capture_previous_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}



// FUNCTION 144e2bd50 __raise_securityfailure body=52 status=ok
// SIG undefined __raise_securityfailure(void)

/* Library Function - Single Match
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000144e2bd7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000409);
  return;
}



// FUNCTION 144e2bd90 FUN_144e2bd90 body=199 status=ok
// SIG undefined FUN_144e2bd90(void)

undefined4 FUN_144e2bd90(undefined8 *param_1,char *param_2)

{
  long lVar1;
  FILE *_File;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0x28;
  }
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = param_2;
  _File = fopen(param_2,"rb");
  if (_File == (FILE *)0x0) {
    return 1;
  }
  fseek(_File,0,2);
  lVar1 = ftell(_File);
  *(long *)(param_1 + 1) = lVar1;
  if (lVar1 == 0) {
    fclose(_File);
    return 0x51;
  }
  fseek(_File,0,0);
  param_1[2] = _File;
  param_1[4] = FUN_144e2be90;
  param_1[5] = FUN_144e2be60;
  return 0;
}



// FUNCTION 144e2be60 FUN_144e2be60 body=37 status=ok
// SIG undefined FUN_144e2be60(void)

void FUN_144e2be60(undefined8 *param_1)

{
  fclose((FILE *)param_1[2]);
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 144e2be90 FUN_144e2be90 body=103 status=ok
// SIG undefined FUN_144e2be90(void)

size_t FUN_144e2be90(longlong param_1,uint param_2,void *param_3,uint param_4)

{
  FILE *_File;
  size_t sVar1;
  
  if ((param_4 == 0) && (*(uint *)(param_1 + 8) < param_2)) {
    return 1;
  }
  _File = *(FILE **)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0xc) != param_2) {
    fseek(_File,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000144e2bef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = fread(param_3,1,(ulonglong)param_4,_File);
  return sVar1;
}



// FUNCTION 144e2bf00 FUN_144e2bf00 body=160 status=ok
// SIG undefined FUN_144e2bf00(void)

undefined4 FUN_144e2bf00(char *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char *pcVar5;
  char local_res8 [8];
  
  if (((param_1 == (char *)0x0) || (param_2 == 0)) || (*param_1 == '\0')) {
    return 0;
  }
  if (4 < param_2) {
    param_2 = 4;
  }
  uVar3 = 0;
  if (param_2 != 0) {
    lVar1 = -(longlong)param_1;
    do {
      if (*param_1 == '\0') break;
      param_1[(longlong)(local_res8 + lVar1)] = *param_1;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      param_1 = param_1 + 1;
    } while (uVar2 < param_2);
    if (3 < (uint)uVar3) goto LAB_144e2bf66;
  }
  pcVar5 = local_res8 + uVar3;
  for (uVar4 = (ulonglong)(4 - (int)uVar3); uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar5 = ' ';
    pcVar5 = pcVar5 + 1;
  }
LAB_144e2bf66:
  return CONCAT31(CONCAT21(CONCAT11(local_res8[0],local_res8[1]),local_res8[2]),local_res8[3]);
}



// FUNCTION 144e2bfa0 FUN_144e2bfa0 body=4 status=ok
// SIG undefined FUN_144e2bfa0(void)

undefined8 FUN_144e2bfa0(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 144e2bfb0 FUN_144e2bfb0 body=129 status=ok
// SIG undefined FUN_144e2bfb0(void)

uint FUN_144e2bfb0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = param_1 & 0xdfffffff | 0x202020;
  if (uVar2 < 0x5161616a) {
    if (uVar2 == 0x51616169) {
      return 0x5a696e68;
    }
    if (uVar2 == 0x43797273) {
      return 0x4379726c;
    }
    if ((uVar2 == 0x4c617466) || (uVar2 == 0x4c617467)) {
      return 0x4c61746e;
    }
    if (uVar2 == 0x51616163) {
      return 0x436f7074;
    }
  }
  else if (((uVar2 == 0x53797265) || (uVar2 == 0x5379726a)) || (uVar2 == 0x5379726e)) {
    return 0x53797263;
  }
  uVar1 = 0x5a7a7a7a;
  if ((param_1 & 0xc0e0e0e0 | 0x202020) == 0x40606060) {
    uVar1 = uVar2;
  }
  return uVar1;
}



// FUNCTION 144e2c040 FUN_144e2c040 body=20 status=ok
// SIG undefined FUN_144e2c040(void)

void FUN_144e2c040(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144e2bf00();
  FUN_144e2bfb0(uVar1);
  return;
}



// FUNCTION 144e2c060 FUN_144e2c060 body=361 status=ok
// SIG undefined FUN_144e2c060(void)

undefined8 FUN_144e2c060(uint param_1)

{
  bool bVar1;
  
  if (param_1 < 0x4e617263) {
    if (param_1 == 0x4e617262) {
      return 5;
    }
    if (param_1 < 0x4974616d) {
      if (param_1 == 0x4974616c) {
        return 0;
      }
      if (0x43707274 < param_1) {
        if (param_1 == 0x48617472) {
          return 5;
        }
        if (param_1 != 0x48656272) {
          if (param_1 != 0x48756e67) {
            return 4;
          }
          return 0;
        }
        return 5;
      }
      if (param_1 == 0x43707274) {
        return 5;
      }
      if (param_1 == 0x41646c6d) {
        return 5;
      }
      if (param_1 == 0x41726162) {
        return 5;
      }
      if (param_1 == 0x41726d69) {
        return 5;
      }
      bVar1 = param_1 == 0x41767374;
    }
    else if (param_1 < 0x4d616e6a) {
      if (param_1 == 0x4d616e69) {
        return 5;
      }
      if (param_1 == 0x4b686172) {
        return 5;
      }
      if (param_1 == 0x4c796469) {
        return 5;
      }
      bVar1 = param_1 == 0x4d616e64;
    }
    else {
      if (param_1 == 0x4d656e64) {
        return 5;
      }
      if (param_1 == 0x4d657263) {
        return 5;
      }
      bVar1 = param_1 == 0x4d65726f;
    }
  }
  else if (param_1 < 0x526f6868) {
    if (param_1 == 0x526f6867) {
      return 5;
    }
    if (param_1 == 0x50686c69) {
      return 5;
    }
    if (param_1 == 0x4e626174) {
      return 5;
    }
    if (param_1 == 0x4e6b6f6f) {
      return 5;
    }
    if (param_1 == 0x4f726b68) {
      return 5;
    }
    if (param_1 == 0x50616c6d) {
      return 5;
    }
    if (param_1 == 0x50686c70) {
      return 5;
    }
    if (param_1 == 0x50686e78) {
      return 5;
    }
    bVar1 = param_1 == 0x50727469;
  }
  else if (param_1 < 0x536f6765) {
    if (param_1 == 0x536f6764) {
      return 5;
    }
    if (param_1 == 0x52756e72) {
      return 0;
    }
    if (param_1 == 0x53616d72) {
      return 5;
    }
    bVar1 = param_1 == 0x53617262;
  }
  else {
    if (param_1 == 0x536f676f) {
      return 5;
    }
    if (param_1 == 0x53797263) {
      return 5;
    }
    bVar1 = param_1 == 0x54686161;
  }
  if (bVar1) {
    return 5;
  }
  return 4;
}



// FUNCTION 144e2c1d0 FUN_144e2c1d0 body=258 status=ok
// SIG undefined FUN_144e2c1d0(void)

void FUN_144e2c1d0(void)

{
  char cVar1;
  int iVar2;
  char *_Str;
  char *pcVar3;
  longlong lVar4;
  size_t _MaxCount;
  byte bVar5;
  byte local_res8;
  
  bVar5 = 2;
  local_res8 = 2;
  _Str = getenv("HB_OPTIONS");
  if (_Str != (char *)0x0) {
    cVar1 = *_Str;
    while (cVar1 != '\0') {
      pcVar3 = strchr(_Str,0x3a);
      if (pcVar3 == (char *)0x0) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (_Str[lVar4] != '\0');
        pcVar3 = _Str + lVar4;
      }
      _MaxCount = (longlong)pcVar3 - (longlong)_Str;
      iVar2 = strncmp(_Str,"uniscribe-bug-compatible",_MaxCount);
      if ((iVar2 == 0) && (_MaxCount == 0x18)) {
        bVar5 = bVar5 | 4;
        local_res8 = bVar5;
      }
      iVar2 = strncmp(_Str,"aat",_MaxCount);
      if ((iVar2 == 0) && (_MaxCount == 3)) {
        bVar5 = bVar5 | 8;
        local_res8 = bVar5;
      }
      _Str = pcVar3 + 1;
      if (*pcVar3 == '\0') {
        _Str = pcVar3;
      }
      cVar1 = *_Str;
    }
  }
  DAT_14c7965f8._0_1_ = local_res8;
  DAT_14c7965f8._1_3_ = 0;
  return;
}



// FUNCTION 144e2c2e0 FUN_144e2c2e0 body=3 status=ok
// SIG undefined FUN_144e2c2e0(void)

void FUN_144e2c2e0(void)

{
  return;
}



// FUNCTION 144e2c2f0 FUN_144e2c2f0 body=150 status=ok
// SIG undefined FUN_144e2c2f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_144e2c2f0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  uVar2 = *param_1 + 1;
  if ((int)(*param_1 + 1) < 0) {
    uVar2 = 0;
  }
  cVar3 = FUN_144e2c390();
  if (cVar3 != '\0') {
    uVar1 = *param_1;
    if (uVar1 < uVar2) {
      memset((void *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar1 * 0x18),0,
             (ulonglong)(uVar2 - uVar1) * 0x18);
    }
    *param_1 = uVar2;
    return (undefined4 *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar2 - 1) * 0x18);
  }
  _DAT_14c793f60 = 0;
  _DAT_14c793f68 = 0;
  _DAT_14c793f70 = 0;
  return &DAT_14c793f60;
}



// FUNCTION 144e2c390 FUN_144e2c390 body=139 status=ok
// SIG undefined FUN_144e2c390(void)

undefined8 FUN_144e2c390(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((int)uVar1 < 0) {
    return 0;
  }
  if (param_2 <= uVar1) {
    return 1;
  }
  uVar4 = (ulonglong)uVar1;
  do {
    uVar3 = (int)uVar4 + 8 + (int)(uVar4 >> 1);
    uVar4 = (ulonglong)uVar3;
  } while (uVar3 <= param_2);
  if (((-1 < (int)uVar3) && (uVar1 <= uVar3)) && (uVar3 < 0xaaaaaaa)) {
    lVar2 = FUN_14286436b(*(undefined8 *)(param_1 + 8),uVar4 * 0x18);
    if (lVar2 != 0) {
      *(longlong *)(param_1 + 8) = lVar2;
      *(uint *)(param_1 + 4) = uVar3;
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return 0;
}



// FUNCTION 144e2c420 FUN_144e2c420 body=127 status=ok
// SIG undefined FUN_144e2c420(void)

bool FUN_144e2c420(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5)

{
  longlong lVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  
  if (param_2 == 0) {
    return false;
  }
  if (((param_5 != 0) && (param_3 == 0)) && (param_4 == 0)) {
    FUN_144e2c680(param_1 + 0x28);
    return true;
  }
  local_48 = (undefined4)param_2;
  uStack_44 = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_40 = (undefined4)param_3;
  uStack_3c = (undefined4)((ulonglong)param_3 >> 0x20);
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_18 = param_4;
  lVar1 = FUN_144e2c780(param_1 + 0x28,&local_28,param_1,param_5 != 0);
  return lVar1 != 0;
}



// FUNCTION 144e2c4a0 FUN_144e2c4a0 body=146 status=ok
// SIG undefined FUN_144e2c4a0(void)

longlong * FUN_144e2c4a0(LPCRITICAL_SECTION param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  
  plVar4 = (longlong *)0x0;
  EnterCriticalSection(param_1);
  plVar1 = *(longlong **)&param_1[1].LockCount;
  plVar2 = plVar4;
  plVar3 = plVar4;
  plVar6 = plVar4;
  if (*(uint *)&param_1[1].DebugInfo != 0) {
    do {
      if (*plVar1 == param_2) {
        plVar2 = *(longlong **)&param_1[1].LockCount + (longlong)plVar6 * 3;
        plVar3 = (longlong *)0x0;
        if (plVar2 != (longlong *)0x0) {
          plVar3 = (longlong *)plVar2[1];
        }
        break;
      }
      uVar5 = (int)plVar6 + 1;
      plVar1 = plVar1 + 3;
      plVar6 = (longlong *)(ulonglong)uVar5;
    } while (uVar5 < *(uint *)&param_1[1].DebugInfo);
  }
  LeaveCriticalSection(param_1);
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar3;
  }
  return plVar4;
}



// FUNCTION 144e2c540 FUN_144e2c540 body=116 status=ok
// SIG undefined FUN_144e2c540(void)

void FUN_144e2c540(longlong param_1)

{
  FUN_144e2c2e0("SANITIZE",*(undefined8 *)(param_1 + 8),0,1,0,0xffffffff,
                "end [%p..%p] %u edit requests",*(undefined8 *)(param_1 + 8),
                *(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  FUN_144e3f120(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 144e2c5c0 FUN_144e2c5c0 body=189 status=ok
// SIG undefined FUN_144e2c5c0(void)

char FUN_144e2c5c0(int *param_1,ulonglong param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  
  if ((param_3 == 0) ||
     ((((*(ulonglong *)(param_1 + 2) <= param_2 && (param_2 <= *(ulonglong *)(param_1 + 4))) &&
       (param_3 <= (uint)(param_1[4] - (int)param_2))) &&
      (iVar1 = param_1[6], param_1[6] = iVar1 + -1, 0 < iVar1)))) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  pcVar2 = "OUT-OF-RANGE";
  if (cVar3 != '\0') {
    pcVar2 = "OK";
  }
  FUN_144e2c2e0("SANITIZE",param_2,0,1,*param_1 + 1,0,
                "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s",param_2,param_2 + param_3,
                param_3,*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4),pcVar2);
  return cVar3;
}



// FUNCTION 144e2c680 FUN_144e2c680 body=253 status=ok
// SIG undefined FUN_144e2c680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144e2c680(uint *param_1,longlong param_2,LPCRITICAL_SECTION param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  
  EnterCriticalSection(param_3);
  uVar1 = *param_1;
  uVar9 = 0;
  plVar7 = *(longlong **)(param_1 + 2);
  plVar6 = plVar7;
  if (uVar1 != 0) {
    do {
      if (*plVar6 == param_2) {
        plVar6 = plVar7 + uVar9 * 3;
        if (plVar6 != (longlong *)0x0) {
          lVar4 = plVar6[1];
          UNRECOVERED_JUMPTABLE = (code *)plVar6[2];
          if (uVar1 - 1 < uVar1) {
            plVar7 = plVar7 + (ulonglong)(uVar1 - 1) * 3;
          }
          else {
            plVar7 = (longlong *)&DAT_14c793f60;
            _DAT_14c793f60 = 0;
            _DAT_14c793f68 = 0;
            _DAT_14c793f70 = 0;
          }
          uVar2 = *(undefined4 *)((longlong)plVar7 + 4);
          lVar5 = plVar7[1];
          uVar3 = *(undefined4 *)((longlong)plVar7 + 0xc);
          *(int *)plVar6 = (int)*plVar7;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar2;
          *(int *)(plVar6 + 1) = (int)lVar5;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar3;
          plVar6[2] = plVar7[2];
          if (*param_1 != 0) {
            *param_1 = *param_1 - 1;
          }
          LeaveCriticalSection(param_3);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000144e2c77a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(lVar4);
          return;
        }
        break;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      plVar6 = plVar6 + 3;
    } while (uVar8 < uVar1);
  }
  LeaveCriticalSection(param_3);
  return;
}



// FUNCTION 144e2c780 FUN_144e2c780 body=270 status=ok
// SIG undefined FUN_144e2c780(void)

longlong * FUN_144e2c780(uint *param_1,longlong *param_2,LPCRITICAL_SECTION param_3,char param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  
  EnterCriticalSection(param_3);
  uVar8 = 0;
  plVar6 = *(longlong **)(param_1 + 2);
  if (*param_1 != 0) {
    do {
      if (*plVar6 == *param_2) {
        plVar6 = *(longlong **)(param_1 + 2) + uVar8 * 3;
        if (plVar6 != (longlong *)0x0) {
          if (param_4 == '\0') {
            LeaveCriticalSection(param_3);
            return (longlong *)0x0;
          }
          lVar4 = plVar6[1];
          pcVar1 = (code *)plVar6[2];
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar5 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar6 = (int)*param_2;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar2;
          *(int *)(plVar6 + 1) = (int)lVar5;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar3;
          plVar6[2] = param_2[2];
          LeaveCriticalSection(param_3);
          if (pcVar1 == (code *)0x0) {
            return plVar6;
          }
          (*pcVar1)(lVar4);
          return plVar6;
        }
        break;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      plVar6 = plVar6 + 3;
    } while (uVar7 < *param_1);
  }
  plVar6 = (longlong *)FUN_144e2c2f0(param_1);
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  lVar4 = param_2[1];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(int *)plVar6 = (int)*param_2;
  *(undefined4 *)((longlong)plVar6 + 4) = uVar2;
  *(int *)(plVar6 + 1) = (int)lVar4;
  *(undefined4 *)((longlong)plVar6 + 0xc) = uVar3;
  plVar6[2] = param_2[2];
  LeaveCriticalSection(param_3);
  return plVar6;
}



// FUNCTION 144e2c890 FUN_144e2c890 body=238 status=ok
// SIG undefined FUN_144e2c890(void)

longlong FUN_144e2c890(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  lVar2 = *param_1;
  LOCK();
  UNLOCK();
  while( true ) {
    if (lVar2 != 0) {
      return lVar2;
    }
    lVar2 = param_1[-1];
    if (lVar2 == 0) break;
    local_48[0] = 0;
    local_30 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = FUN_144e2d260(lVar2);
    local_14 = 1;
    uVar1 = FUN_144e2d200(lVar2,0x68656164);
    lVar2 = FUN_144e2cc70(local_48,uVar1);
    if (lVar2 == 0) {
      lVar2 = FUN_144e3f0f0();
    }
    LOCK();
    lVar3 = *param_1;
    if (lVar3 == 0) {
      *param_1 = lVar2;
    }
    UNLOCK();
    if (lVar3 == 0) {
      return lVar2;
    }
    if ((lVar2 != 0) && (lVar3 = FUN_144e3f0f0(), lVar2 != lVar3)) {
      FUN_144e3f120(lVar2);
    }
    lVar2 = *param_1;
    LOCK();
    UNLOCK();
  }
  lVar2 = FUN_144e3f0f0();
  return lVar2;
}



// FUNCTION 144e2c980 FUN_144e2c980 body=76 status=ok
// SIG undefined FUN_144e2c980(void)

void FUN_144e2c980(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  
  lVar2 = FUN_144e2c890(param_1 + 0x50);
  if (*(uint *)(lVar2 + 0x18) < 0x36) {
    puVar3 = &DAT_149a1f1a0;
  }
  else {
    puVar3 = *(undefined1 **)(lVar2 + 0x10);
  }
  iVar4 = (uint)(byte)puVar3[0x12] * 0x100 + (uint)(byte)puVar3[0x13];
  iVar1 = 1000;
  if (iVar4 - 0x10U < 0x3ff1) {
    iVar1 = iVar4;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  return;
}



// FUNCTION 144e2c9d0 FUN_144e2c9d0 body=131 status=ok
// SIG undefined FUN_144e2c9d0(void)

int FUN_144e2c9d0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_14 = 1;
  local_48[0] = 0;
  local_30 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  uVar1 = FUN_144e2d200(0,0x6d617870);
  lVar2 = FUN_144e2cb00(local_48,uVar1);
  puVar3 = &DAT_149a1f1a0;
  if (5 < *(uint *)(lVar2 + 0x18)) {
    puVar3 = *(undefined1 **)(lVar2 + 0x10);
  }
  iVar4 = (uint)(byte)puVar3[4] * 0x100 + (uint)(byte)puVar3[5];
  *(int *)(param_1 + 0x30) = iVar4;
  FUN_144e3f120(lVar2);
  return iVar4;
}



// FUNCTION 144e2ca60 FUN_144e2ca60 body=153 status=ok
// SIG undefined FUN_144e2ca60(void)

ulonglong FUN_144e2ca60(byte *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  short sVar2;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1,6);
  if ((char)uVar1 != '\0') {
    uVar1 = 0;
    sVar2 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
    if (sVar2 == 1) {
      uVar1 = FUN_144e2c5c0(param_2,param_1 + 6,0x1a);
      return uVar1;
    }
    if ((sVar2 == 0) &&
       (uVar1 = 0x5000, (ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) == 0x5000)) {
      return 0x5001;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 144e2cb00 FUN_144e2cb00 body=362 status=ok
// SIG undefined FUN_144e2cb00(void)

longlong FUN_144e2cb00(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  uVar3 = FUN_144e3f100(param_2);
  *(undefined8 *)(param_1 + 10) = uVar3;
  *(undefined1 *)(param_1 + 7) = 0;
  while( true ) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 10) + 0x10);
    *(longlong *)(param_1 + 2) = lVar4;
    lVar7 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 10) + 0x18) + lVar4;
    param_1[8] = 0;
    *(longlong *)(param_1 + 4) = lVar7;
    iVar6 = (int)lVar7 - (int)lVar4;
    *param_1 = 0;
    uVar1 = iVar6 * 8;
    uVar5 = 0x4000;
    if (0x4000 < uVar1) {
      uVar5 = uVar1;
    }
    param_1[6] = uVar5;
    FUN_144e2c2e0("SANITIZE",lVar4,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar4,lVar7,iVar6);
    lVar4 = *(longlong *)(param_1 + 2);
    if (lVar4 == 0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    cVar2 = FUN_144e2ca60(lVar4,param_1);
    if (cVar2 != '\0') break;
    if ((param_1[8] == 0) || (*(char *)(param_1 + 7) != '\0')) goto LAB_144e2cc20;
    lVar4 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar4;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar4;
    if (lVar4 == 0) goto LAB_144e2cc20;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if (param_1[8] != 0) {
    param_1[8] = 0;
    cVar2 = FUN_144e2ca60(lVar4,param_1);
    if (param_1[8] != 0) {
      cVar2 = '\0';
    }
  }
LAB_144e2cc20:
  FUN_144e2c540(param_1);
  if (cVar2 == '\0') {
    FUN_144e3f120(param_2);
    param_2 = FUN_144e3f0f0();
  }
  else {
    FUN_144e3f1a0();
  }
  return param_2;
}



// FUNCTION 144e2cc70 FUN_144e2cc70 body=658 status=ok
// SIG undefined FUN_144e2cc70(void)

longlong FUN_144e2cc70(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  longlong lVar9;
  
  uVar4 = FUN_144e3f100(param_2);
  *(undefined8 *)(param_1 + 10) = uVar4;
  *(undefined1 *)(param_1 + 7) = 0;
  while( true ) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 10) + 0x10);
    *(longlong *)(param_1 + 2) = lVar5;
    lVar9 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 10) + 0x18) + lVar5;
    param_1[8] = 0;
    *(longlong *)(param_1 + 4) = lVar9;
    iVar7 = (int)lVar9 - (int)lVar5;
    *param_1 = 0;
    sVar8 = 1;
    uVar1 = iVar7 * 8;
    uVar6 = 0x4000;
    if (0x4000 < uVar1) {
      uVar6 = uVar1;
    }
    param_1[6] = uVar6;
    FUN_144e2c2e0("SANITIZE",lVar5,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar5,lVar9,iVar7);
    pbVar2 = *(byte **)(param_1 + 2);
    if (pbVar2 == (byte *)0x0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    if (((*(byte **)(param_1 + 4) < pbVar2) ||
        ((uint)((int)*(byte **)(param_1 + 4) - (int)pbVar2) < 0x36)) ||
       (iVar7 = param_1[6], param_1[6] = iVar7 + -1, iVar7 < 1)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = (char)sVar8;
    }
    iVar7 = 0;
    FUN_144e2c2e0("SANITIZE",pbVar2);
    if (((cVar3 != '\0') && ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) == sVar8)) &&
       ((uint)pbVar2[0xd] * 0x10000 + (uint)pbVar2[0xe] * 0x100 + (uint)pbVar2[0xc] * 0x1000000 +
        (uint)pbVar2[0xf] == 0x5f0f3cf5)) break;
    cVar3 = '\0';
    if ((param_1[8] == iVar7) || (*(char *)(param_1 + 7) != (char)iVar7)) goto LAB_144e2ceb2;
    lVar5 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar5;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar5;
    if (lVar5 == 0) goto LAB_144e2ceb2;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  cVar3 = (char)sVar8;
  if (param_1[8] != iVar7) {
    param_1[8] = 0;
    cVar3 = FUN_144e2c5c0(param_1,pbVar2,0x36);
    if (((cVar3 == '\0') || ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 1)) ||
       ((uint)pbVar2[0xd] * 0x10000 + (uint)pbVar2[0xe] * 0x100 + (uint)pbVar2[0xc] * 0x1000000 +
        (uint)pbVar2[0xf] != 0x5f0f3cf5)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    if (param_1[8] != 0) {
      cVar3 = '\0';
    }
  }
LAB_144e2ceb2:
  FUN_144e2c540(param_1);
  if (cVar3 == '\0') {
    FUN_144e3f120(param_2);
    param_2 = FUN_144e3f0f0();
  }
  else {
    FUN_144e3f1a0();
  }
  return param_2;
}



// FUNCTION 144e2cf10 FUN_144e2cf10 body=291 status=ok
// SIG undefined FUN_144e2cf10(void)

undefined4 * FUN_144e2cf10(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if (param_1 == 0) {
    param_1 = FUN_144e3f0f0();
  }
  local_18 = 0x10000;
  local_48[0] = 0;
  local_30 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_14 = 0;
  uVar1 = FUN_144e3f100(param_1);
  uVar1 = FUN_144e2fb30(local_48,uVar1);
  puVar2 = (undefined8 *)FUN_142864336(1,0x10);
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = (undefined4 *)&DAT_14c709bf0;
  }
  else {
    *puVar2 = uVar1;
    *(undefined4 *)(puVar2 + 1) = param_2;
    puVar3 = (undefined4 *)FUN_142864336(1,0x170);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_144e3f120(*puVar2);
      thunk_FUN_1400020a8(puVar2);
      puVar3 = (undefined4 *)&DAT_14c709bf0;
      DAT_14c709c18 = param_2;
    }
    else {
      *puVar3 = 1;
      puVar3[1] = 1;
      *(undefined8 *)(puVar3 + 2) = 0;
      *(code **)(puVar3 + 4) = FUN_144e2fcc0;
      *(code **)(puVar3 + 8) = FUN_144e2fca0;
      *(undefined8 **)(puVar3 + 6) = puVar2;
      puVar3[0xc] = 0xffffffff;
      *(undefined4 **)(puVar3 + 0xe) = puVar3;
      FUN_1451d5830(puVar3 + 0x12,puVar3);
      puVar3[10] = param_2;
    }
  }
  return puVar3;
}



// FUNCTION 144e2d040 FUN_144e2d040 body=156 status=ok
// SIG undefined FUN_144e2d040(void)

undefined4 * FUN_144e2d040(longlong param_1,undefined8 param_2,code *param_3)

{
  undefined4 *puVar1;
  
  if ((param_1 != 0) && (puVar1 = (undefined4 *)FUN_142864336(1,0x170), puVar1 != (undefined4 *)0x0)
     ) {
    *puVar1 = 1;
    puVar1[1] = 1;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(longlong *)(puVar1 + 4) = param_1;
    *(undefined8 *)(puVar1 + 6) = param_2;
    *(code **)(puVar1 + 8) = param_3;
    puVar1[0xc] = 0xffffffff;
    *(undefined4 **)(puVar1 + 0xe) = puVar1;
    FUN_1451d5830(puVar1 + 0x12,puVar1);
    return puVar1;
  }
  if (param_3 != (code *)0x0) {
    (*param_3)(param_2);
  }
  return (undefined4 *)&DAT_14c709bf0;
}



// FUNCTION 144e2d0e0 FUN_144e2d0e0 body=8 status=ok
// SIG undefined FUN_144e2d0e0(void)

undefined * FUN_144e2d0e0(void)

{
  return &DAT_14c709bf0;
}



// FUNCTION 144e2d0f0 FUN_144e2d0f0 body=23 status=ok
// SIG undefined FUN_144e2d0f0(void)

int * FUN_144e2d0f0(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    *param_1 = *param_1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 144e2d110 FUN_144e2d110 body=223 status=ok
// SIG undefined FUN_144e2d110(void)

void FUN_144e2d110(int *param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    iVar1 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 2);
      *param_1 = -0xdead;
      LOCK();
      UNLOCK();
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        FUN_144b61790(lpCriticalSection + 1,lpCriticalSection);
        DeleteCriticalSection(lpCriticalSection);
        thunk_FUN_1400020a8(lpCriticalSection);
      }
      LOCK();
      UNLOCK();
      puVar3 = *(undefined8 **)(param_1 + 0x5a);
      while (puVar3 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)puVar3[1];
        FUN_144e3f7c0(*puVar3);
        thunk_FUN_1400020a8(puVar3);
        puVar3 = puVar2;
      }
      LOCK();
      UNLOCK();
      if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_144e3d500();
      }
      FUN_1451d5840(param_1 + 0x12);
      if (*(code **)(param_1 + 8) != (code *)0x0) {
        (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 6));
      }
      thunk_FUN_1400020a8(param_1);
    }
  }
  return;
}



// FUNCTION 144e2d1f0 FUN_144e2d1f0 body=14 status=ok
// SIG undefined FUN_144e2d1f0(void)

void FUN_144e2d1f0(longlong param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 144e2d200 FUN_144e2d200 body=38 status=ok
// SIG undefined FUN_144e2d200(void)

void FUN_144e2d200(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    lVar1 = (**(code **)(param_1 + 0x10))(param_1,param_2,*(undefined8 *)(param_1 + 0x18));
    if (lVar1 != 0) {
      return;
    }
  }
  FUN_144e3f0f0();
  return;
}



// FUNCTION 144e2d230 FUN_144e2d230 body=10 status=ok
// SIG undefined FUN_144e2d230(void)

void FUN_144e2d230(longlong param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0x28) = param_2;
  }
  return;
}



// FUNCTION 144e2d240 FUN_144e2d240 body=10 status=ok
// SIG undefined FUN_144e2d240(void)

void FUN_144e2d240(longlong param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0x2c) = param_2;
  }
  return;
}



// FUNCTION 144e2d250 FUN_144e2d250 body=12 status=ok
// SIG undefined FUN_144e2d250(void)

void FUN_144e2d250(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    return;
  }
  lVar2 = FUN_144e2c890(param_1 + 0x50);
  if (*(uint *)(lVar2 + 0x18) < 0x36) {
    puVar3 = &DAT_149a1f1a0;
  }
  else {
    puVar3 = *(undefined1 **)(lVar2 + 0x10);
  }
  iVar4 = (uint)(byte)puVar3[0x12] * 0x100 + (uint)(byte)puVar3[0x13];
  iVar1 = 1000;
  if (iVar4 - 0x10U < 0x3ff1) {
    iVar1 = iVar4;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  return;
}



// FUNCTION 144e2d260 FUN_144e2d260 body=13 status=ok
// SIG undefined FUN_144e2d260(void)

int FUN_144e2d260(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 auStack_48 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  if (*(int *)(param_1 + 0x30) != -1) {
    return *(int *)(param_1 + 0x30);
  }
  uStack_14 = 1;
  auStack_48[0] = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uVar1 = FUN_144e2d200(0,0x6d617870);
  lVar2 = FUN_144e2cb00(auStack_48,uVar1);
  puVar3 = &DAT_149a1f1a0;
  if (5 < *(uint *)(lVar2 + 0x18)) {
    puVar3 = *(undefined1 **)(lVar2 + 0x10);
  }
  iVar4 = (uint)(byte)puVar3[4] * 0x100 + (uint)(byte)puVar3[5];
  *(int *)(param_1 + 0x30) = iVar4;
  FUN_144e3f120(lVar2);
  return iVar4;
}



// FUNCTION 144e2d270 FUN_144e2d270 body=3 status=ok
// SIG undefined FUN_144e2d270(void)

void FUN_144e2d270(void)

{
  return;
}



// FUNCTION 144e2d280 FUN_144e2d280 body=171 status=ok
// SIG undefined FUN_144e2d280(void)

ulonglong FUN_144e2d280(int *param_1,longlong param_2,uint param_3)

{
  ulonglong in_RAX;
  char *pcVar1;
  int iVar2;
  
  if (0x1f < (uint)param_1[8]) {
    return in_RAX & 0xffffffffffffff00;
  }
  iVar2 = param_1[8] + 1;
  pcVar1 = "DENIED";
  param_1[8] = iVar2;
  if ((char)param_1[7] != '\0') {
    pcVar1 = "GRANTED";
  }
  FUN_144e2d270("SANITIZE",param_2,0,1,*param_1 + 1,0,
                "may_edit(%u) [%p..%p] (%d bytes) in [%p..%p] -> %s",iVar2,param_2,
                param_2 + (ulonglong)param_3,param_3,*(undefined8 *)(param_1 + 2),
                *(undefined8 *)(param_1 + 4),pcVar1);
  return (ulonglong)*(byte *)(param_1 + 7);
}



// FUNCTION 144e2d330 FUN_144e2d330 body=217 status=ok
// SIG undefined FUN_144e2d330(void)

undefined1 * FUN_144e2d330(longlong *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined1 *)*param_1;
  LOCK();
  UNLOCK();
  while( true ) {
    if (puVar2 != (undefined1 *)0x0) {
      return puVar2;
    }
    lVar1 = param_1[-2];
    if (lVar1 == 0) break;
    puVar2 = (undefined1 *)FUN_142864336(1);
    if (puVar2 != (undefined1 *)0x0) {
      FUN_144e2f5b0(puVar2,lVar1);
    }
    puVar3 = &DAT_149a1f1a0;
    if (puVar2 != (undefined1 *)0x0) {
      puVar3 = puVar2;
    }
    LOCK();
    lVar1 = *param_1;
    if (lVar1 == 0) {
      *param_1 = (longlong)puVar3;
    }
    UNLOCK();
    if (lVar1 == 0) {
      return puVar3;
    }
    if ((puVar3 != (undefined1 *)0x0) && (puVar3 != &DAT_149a1f1a0)) {
      puVar2 = &DAT_149a1f1a0;
      if (*(undefined1 **)(puVar3 + 0x50) != (undefined1 *)0x0) {
        puVar2 = *(undefined1 **)(puVar3 + 0x50);
      }
      FUN_144e3f120(puVar2);
      *(undefined8 *)(puVar3 + 0x50) = 0;
      thunk_FUN_1400020a8(puVar3);
    }
    puVar2 = (undefined1 *)*param_1;
    LOCK();
    UNLOCK();
  }
  return &DAT_149a1f1a0;
}



// FUNCTION 144e2d410 FUN_144e2d410 body=274 status=ok
// SIG undefined FUN_144e2d410(void)

ulonglong FUN_144e2d410(longlong param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  uVar2 = 0;
  iVar5 = (uint)*(byte *)(param_1 + 4) * 0x100 + -1 + (uint)*(byte *)(param_1 + 5);
  if (-1 < iVar5) {
    do {
      uVar1 = (uint)(iVar6 + iVar5) >> 1;
      uVar4 = (param_2 >> 8 & 0xff) * 0x100 + (param_2 & 0xff) + (param_2 & 0xff000000) +
              (param_2 >> 0x10 & 0xff) * 0x10000;
      uVar3 = *(uint *)(param_1 + 0xc + (ulonglong)uVar1 * 0x10);
      uVar3 = uVar3 * 0x1000000 + (uVar3 >> 0x10 & 0xff) * 0x100 + (uVar3 >> 8 & 0xff) * 0x10000 +
              (uVar3 >> 0x18);
      if (uVar3 < uVar4) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = (uint)(uVar3 != uVar4);
      }
      uVar3 = -uVar3;
      uVar2 = (ulonglong)uVar3;
      if ((int)uVar3 < 0) {
        iVar5 = uVar1 - 1;
      }
      else {
        if ((int)uVar3 < 1) {
          if (param_3 != (uint *)0x0) {
            *param_3 = uVar1;
          }
          return CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
        }
        iVar6 = uVar1 + 1;
      }
    } while (iVar6 <= iVar5);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0xffff;
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 144e2d530 FUN_144e2d530 body=121 status=ok
// SIG undefined FUN_144e2d530(void)

undefined8 FUN_144e2d530(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,0xc);
  if (cVar1 != '\0') {
    cVar1 = FUN_144e2c5c0(param_2,param_1 + 4,8);
    if (cVar1 != '\0') {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 0xc,
                            ((uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) *
                            0x10);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144e2d5b0 FUN_144e2d5b0 body=160 status=ok
// SIG undefined FUN_144e2d5b0(void)

undefined1 * FUN_144e2d5b0(longlong param_1,uint param_2)

{
  byte *pbVar1;
  
  if (param_2 < (uint)*(byte *)(param_1 + 9) * 0x10000 + (uint)*(byte *)(param_1 + 10) * 0x100 +
                (uint)*(byte *)(param_1 + 8) * 0x1000000 + (uint)*(byte *)(param_1 + 0xb)) {
    pbVar1 = (byte *)(param_1 + ((ulonglong)param_2 + 3) * 4);
  }
  else {
    pbVar1 = &DAT_149a1f1a0;
  }
  if ((uint)*pbVar1 * 0x1000000 + (uint)pbVar1[2] * 0x100 + (uint)pbVar1[1] * 0x10000 +
      (uint)pbVar1[3] == 0) {
    return &DAT_149a1f1a0;
  }
  return (undefined1 *)
         (((ulonglong)CONCAT11(*pbVar1,pbVar1[1]) * 0x100 + (ulonglong)pbVar1[2]) * 0x100 + param_1
         + (ulonglong)pbVar1[3]);
}



// FUNCTION 144e2d650 FUN_144e2d650 body=148 status=ok
// SIG undefined FUN_144e2d650(void)

bool FUN_144e2d650(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 == '\0') {
    return false;
  }
  if ((uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
      (uint)param_1[3] == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3);
  return cVar1 != '\0';
}



// FUNCTION 144e2d6f0 FUN_144e2d6f0 body=290 status=ok
// SIG undefined FUN_144e2d6f0(void)

undefined1 FUN_144e2d6f0(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = FUN_144e2d820();
  if (cVar1 == '\0') {
    return 0;
  }
  uVar3 = 0;
  uVar2 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
          (uint)param_1[3];
  if (uVar2 != 0) {
    param_1 = param_1 + 6;
    do {
      cVar1 = FUN_144e2d650(param_1 + -2,param_2,param_3);
      if (cVar1 == '\0') {
        return 0;
      }
      if (((uint)param_1[-2] * 0x1000000 + (uint)param_1[-1] * 0x10000 + (uint)*param_1 * 0x100 +
           (uint)param_1[1] != 0) &&
         (cVar1 = FUN_144e2d530((((ulonglong)param_1[-1] + (ulonglong)param_1[-2] * 0x100) * 0x100 +
                                (ulonglong)*param_1) * 0x100 + param_3 + (ulonglong)param_1[1],
                                param_2), cVar1 == '\0')) {
        cVar1 = FUN_144e2d280(param_2,param_1 + -2,4);
        if (cVar1 == '\0') {
          return 0;
        }
        param_1[-2] = 0;
        param_1[-1] = 0;
        param_1[0] = 0;
        param_1[1] = 0;
      }
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 4;
    } while (uVar3 < uVar2);
  }
  return 1;
}



// FUNCTION 144e2d820 FUN_144e2d820 body=131 status=ok
// SIG undefined FUN_144e2d820(void)

undefined8 FUN_144e2d820(byte *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 != '\0') {
    uVar2 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
            (uint)param_1[3];
    if (uVar2 < 0x3fffffff) {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 4,uVar2 * 4);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144e2d8b0 FUN_144e2d8b0 body=118 status=ok
// SIG undefined FUN_144e2d8b0(void)

bool FUN_144e2d8b0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,3);
  if (cVar1 == '\0') {
    return false;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3,
                        (uint)param_1[1] * 0x100 + (uint)*param_1 * 0x10000 + (uint)param_1[2]);
  return cVar1 != '\0';
}



// FUNCTION 144e2d930 FUN_144e2d930 body=120 status=ok
// SIG undefined FUN_144e2d930(void)

undefined8 FUN_144e2d930(byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 != '\0') {
    if ((uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
        (uint)param_1[3] != -1) {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 4);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144e2d9b0 FUN_144e2d9b0 body=133 status=ok
// SIG undefined FUN_144e2d9b0(void)

undefined1 * FUN_144e2d9b0(byte *param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  
  if ((uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
      (uint)param_1[3] == 0x73666e74) {
    uVar1 = param_1[5] + 1 + (uint)param_1[4] * 0x100;
  }
  else {
    uVar1 = 0;
  }
  if (uVar1 <= param_2) {
    return &DAT_149a1f1a0;
  }
  return (undefined1 *)
         ((ulonglong)param_1[7] + (ulonglong)param_1[6] * 0x100 + param_3 + (ulonglong)param_2 * 0xc
         );
}



// FUNCTION 144e2da40 FUN_144e2da40 body=248 status=ok
// SIG undefined FUN_144e2da40(void)

undefined8 FUN_144e2da40(byte *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,8);
  if (cVar1 != '\0') {
    if ((uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
        (uint)param_1[3] == 0x73666e74) {
      iVar2 = param_1[5] + 1 + (uint)param_1[4] * 0x100;
    }
    else {
      iVar2 = 0;
    }
    cVar1 = FUN_144e2c5c0(param_2,param_1 + 6,2);
    if (((cVar1 != '\0') &&
        (cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)param_1[6] * 0x100 + (uint)param_1[7]),
        cVar1 != '\0')) &&
       (cVar1 = FUN_144e2db40((ulonglong)param_1[7] + (ulonglong)param_1[6] * 0x100 + param_3,
                              param_2,iVar2,param_4), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144e2db40 FUN_144e2db40 body=462 status=ok
// SIG undefined FUN_144e2db40(void)

undefined8 FUN_144e2db40(longlong param_1,int *param_2,uint param_3,longlong param_4)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  byte *pbVar6;
  
  if ((0x15555554 < param_3) ||
     (cVar3 = FUN_144e2c5c0(param_2,param_1,param_3 * 0xc), cVar3 == '\0')) {
    return 0;
  }
  uVar5 = 0;
  if (param_3 != 0) {
    pbVar6 = (byte *)(param_1 + 7);
    do {
      pbVar1 = pbVar6 + -7;
      if ((((pbVar1 < *(byte **)(param_2 + 2)) || (*(byte **)(param_2 + 4) < pbVar1)) ||
          ((uint)(param_2[4] - (int)pbVar1) < 0xc)) ||
         (iVar2 = param_2[6], param_2[6] = iVar2 + -1, iVar2 < 1)) {
        cVar3 = '\0';
      }
      else {
        cVar3 = '\x01';
      }
      pcVar4 = "OUT-OF-RANGE";
      if (cVar3 != '\0') {
        pcVar4 = "OK";
      }
      FUN_144e2d270("SANITIZE",pbVar1,0,1,*param_2 + 1,0,
                    "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s",pbVar1,pbVar6 + 5,0xc,
                    *(byte **)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar4);
      if (((cVar3 == '\0') || (cVar3 = FUN_144e2d8b0(pbVar6 + -2,param_2,param_4), cVar3 == '\0'))
         || ((cVar3 = FUN_144e2d930((ulonglong)*pbVar6 +
                                    (ulonglong)CONCAT11(pbVar6[-2],pbVar6[-1]) * 0x100 + param_4,
                                    param_2), cVar3 == '\0' ||
             (cVar3 = FUN_144e2d530((ulonglong)*pbVar6 +
                                    (ulonglong)CONCAT11(pbVar6[-2],pbVar6[-1]) * 0x100 + 4 + param_4
                                    ,param_2), cVar3 == '\0')))) {
        return 0;
      }
      uVar5 = uVar5 + 1;
      pbVar6 = pbVar6 + 0xc;
    } while (uVar5 < param_3);
  }
  return 1;
}



// FUNCTION 144e2dd10 FUN_144e2dd10 body=281 status=ok
// SIG undefined FUN_144e2dd10(void)

undefined1 * FUN_144e2dd10(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  uint uVar6;
  
  uVar4 = 0;
  lVar1 = (ulonglong)*(byte *)(param_1 + 0x18) * 0x100 + param_1;
  uVar6 = *(byte *)((ulonglong)*(byte *)(param_1 + 0x19) + 1 + lVar1) + 1 +
          (uint)*(byte *)((ulonglong)*(byte *)(param_1 + 0x19) + lVar1) * 0x100;
  if (uVar6 != 0) {
    pbVar5 = (byte *)((ulonglong)*(byte *)(param_1 + 0x18) * 0x100 +
                     (ulonglong)*(byte *)(param_1 + 0x19) + param_1);
    do {
      if ((uint)*pbVar5 * 0x100 + (uint)pbVar5[1] < (uint)uVar4) {
        pbVar2 = &DAT_149a1f1a0;
      }
      else {
        pbVar2 = pbVar5 + uVar4 * 8 + 2;
      }
      if (((uint)pbVar2[1] * 0x10000 + (uint)pbVar2[2] * 0x100 + (uint)*pbVar2 * 0x1000000 +
           (uint)pbVar2[3] == 0x73666e74) &&
         (param_2 < (uint)pbVar2[4] * 0x100 + 1 + (uint)pbVar2[5])) {
        lVar1 = FUN_144e2d9b0(pbVar2,param_2,
                              (ulonglong)*(byte *)(param_1 + 0x19) +
                              (ulonglong)*(byte *)(param_1 + 0x18) * 0x100 + param_1);
        return (undefined1 *)
               (param_3 + 4 +
                (ulonglong)CONCAT11(*(undefined1 *)(lVar1 + 5),*(undefined1 *)(lVar1 + 6)) * 0x100 +
               (ulonglong)*(byte *)(lVar1 + 7));
      }
      uVar3 = (uint)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < uVar6);
  }
  return &DAT_149a1f1a0;
}



// FUNCTION 144e2de30 FUN_144e2de30 body=124 status=ok
// SIG undefined FUN_144e2de30(void)

undefined8 FUN_144e2de30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,0x1c);
  if (cVar1 != '\0') {
    cVar1 = FUN_144e2deb0(param_1 + 0x18,param_2,param_1,
                          (ulonglong)*(byte *)(param_1 + 0x19) +
                          (ulonglong)*(byte *)(param_1 + 0x18) * 0x100 + param_1,param_3);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144e2deb0 FUN_144e2deb0 body=147 status=ok
// SIG undefined FUN_144e2deb0(void)

undefined8
FUN_144e2deb0(byte *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (((cVar1 != '\0') &&
      (cVar1 = FUN_144e2c5c0(param_2,param_3,(uint)*param_1 * 0x100 + (uint)param_1[1]),
      cVar1 != '\0')) &&
     (cVar1 = FUN_144e2fe40((ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100 + param_3,param_2,
                            param_4,param_5), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 144e2df50 FUN_144e2df50 body=130 status=ok
// SIG undefined FUN_144e2df50(void)

void FUN_144e2df50(undefined1 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_144e2dd10(param_1 + (ulonglong)(byte)param_1[7] +
                                  ((ulonglong)(byte)param_1[6] +
                                  (ulonglong)CONCAT11(param_1[4],param_1[5]) * 0x100) * 0x100,
                        param_2,param_1 + (ulonglong)(byte)param_1[3] +
                                          ((ulonglong)(byte)param_1[2] +
                                          (ulonglong)CONCAT11(*param_1,param_1[1]) * 0x100) * 0x100)
  ;
  if (param_3 != (int *)0x0) {
    *param_3 = iVar1 - (int)param_1;
  }
  return;
}



// FUNCTION 144e2dfe0 FUN_144e2dfe0 body=144 status=ok
// SIG undefined FUN_144e2dfe0(void)

undefined8 FUN_144e2dfe0(undefined1 *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,0x10);
  if (cVar1 != '\0') {
    cVar1 = FUN_144e2e170(param_1,param_2,param_1,*(undefined4 *)(param_1 + 8));
    if (cVar1 != '\0') {
      cVar1 = FUN_144e2e220(param_1 + 4,param_2,param_1,
                            param_1 + (ulonglong)(byte)param_1[3] +
                                      ((ulonglong)(byte)param_1[2] +
                                      (ulonglong)CONCAT11(*param_1,param_1[1]) * 0x100) * 0x100);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144e2e070 FUN_144e2e070 body=128 status=ok
// SIG undefined FUN_144e2e070(void)

bool FUN_144e2e070(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 == '\0') {
    return false;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3,
                        (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 +
                        (uint)*param_1 * 0x1000000 + (uint)param_1[3]);
  return cVar1 != '\0';
}



// FUNCTION 144e2e0f0 FUN_144e2e0f0 body=128 status=ok
// SIG undefined FUN_144e2e0f0(void)

bool FUN_144e2e0f0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 == '\0') {
    return false;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3,
                        (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 +
                        (uint)*param_1 * 0x1000000 + (uint)param_1[3]);
  return cVar1 != '\0';
}



// FUNCTION 144e2e170 FUN_144e2e170 body=171 status=ok
// SIG undefined FUN_144e2e170(void)

undefined8 FUN_144e2e170(undefined1 *param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  char cVar1;
  
  cVar1 = FUN_144e2e070();
  if (cVar1 != '\0') {
    if ((param_4 >> 0x10 & 0xff) * 0x100 + (param_4 >> 8 & 0xff) * 0x10000 + param_4 * 0x1000000 +
        (param_4 >> 0x18) != -1) {
      cVar1 = FUN_144e2c5c0(param_2,(ulonglong)(byte)param_1[3] +
                                    ((ulonglong)(byte)param_1[2] +
                                    (ulonglong)CONCAT11(*param_1,param_1[1]) * 0x100) * 0x100 +
                                    param_3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144e2e220 FUN_144e2e220 body=123 status=ok
// SIG undefined FUN_144e2e220(void)

undefined8 FUN_144e2e220(undefined1 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_144e2e0f0();
  if ((cVar1 != '\0') &&
     (cVar1 = FUN_144e2de30((ulonglong)(byte)param_1[3] +
                            ((ulonglong)(byte)param_1[2] +
                            (ulonglong)CONCAT11(*param_1,param_1[1]) * 0x100) * 0x100 + param_3,
                            param_2,param_4), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 144e2e2a0 FUN_144e2e2a0 body=294 status=ok
// SIG undefined FUN_144e2e2a0(void)

undefined8 FUN_144e2e2a0(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  uVar2 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
          (uint)param_1[3];
  if (uVar2 < 0x74727566) {
    if (uVar2 == 0x74727565) goto LAB_144e2e342;
    if (uVar2 == 0x100) {
      uVar1 = FUN_144e2dfe0(param_1,param_2);
      return uVar1;
    }
    if (uVar2 == 0x10000) goto LAB_144e2e342;
    bVar3 = uVar2 == 0x4f54544f;
  }
  else {
    if (uVar2 == 0x74746366) {
      uVar1 = FUN_144e2c5c0(param_2,param_1 + 4,4);
      if ((char)uVar1 == '\0') {
        return uVar1;
      }
      uVar2 = (param_1[5] - 1) + (uint)param_1[4] * 0x100;
      if (uVar2 < 2) {
        uVar1 = FUN_144e2d6f0(param_1 + 8,param_2,param_1);
        return uVar1;
      }
      return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
    }
    bVar3 = uVar2 == 0x74797031;
  }
  if (!bVar3) {
    return 1;
  }
LAB_144e2e342:
  uVar1 = FUN_144e2d530(param_1,param_2);
  return uVar1;
}



// FUNCTION 144e2e3d0 FUN_144e2e3d0 body=301 status=ok
// SIG undefined FUN_144e2e3d0(void)

ulonglong FUN_144e2e3d0(longlong *param_1,uint param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong in_RAX;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  lVar1 = param_1[1];
  iVar6 = (int)param_1[5] + -1;
  if (-1 < iVar6) {
    do {
      uVar3 = (uint)(iVar6 + iVar7) >> 1;
      uVar5 = (ulonglong)uVar3;
      if (param_2 < (uint)*(byte *)(lVar1 + (ulonglong)uVar3 * 2) * 0x100 +
                    (uint)*(byte *)(lVar1 + 1 + (ulonglong)uVar3 * 2)) {
        iVar6 = uVar3 - 1;
      }
      else {
        if (param_2 <=
            (uint)*(byte *)(*param_1 + uVar5 * 2) * 0x100 +
            (uint)*(byte *)(*param_1 + 1 + uVar5 * 2)) {
          lVar2 = uVar5 * 2;
          uVar4 = (uint)*(byte *)(lVar2 + param_1[3]) * 0x100 +
                  (uint)*(byte *)(lVar2 + 1 + param_1[3]);
          if (uVar4 == 0) {
            uVar3 = (uint)*(byte *)(lVar2 + 1 + param_1[2]) +
                    param_2 + (uint)*(byte *)(lVar2 + param_1[2]) * 0x100;
          }
          else {
            in_RAX = 0;
            param_2 = ((((uVar4 >> 1) + (uint)*(byte *)(lVar2 + lVar1) * -0x100) -
                       (uint)*(byte *)(lVar2 + 1 + lVar1)) - (int)param_1[5]) + uVar3 + param_2;
            if (*(uint *)((longlong)param_1 + 0x2c) <= param_2) break;
            in_RAX = 0;
            iVar6 = (uint)*(byte *)(param_1[4] + (ulonglong)param_2 * 2) * 0x100 +
                    (uint)*(byte *)(param_1[4] + 1 + (ulonglong)param_2 * 2);
            if (iVar6 == 0) break;
            uVar3 = iVar6 + (uint)*(byte *)(lVar2 + 1 + param_1[2]) +
                    (uint)*(byte *)(lVar2 + param_1[2]) * 0x100;
          }
          uVar3 = uVar3 & 0xffff;
          in_RAX = (ulonglong)uVar3;
          if (uVar3 != 0) {
            *param_3 = uVar3;
            return CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
          }
          break;
        }
        iVar7 = uVar3 + 1;
      }
      in_RAX = 0;
    } while (iVar7 <= iVar6);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 144e2e510 FUN_144e2e510 body=132 status=ok
// SIG undefined FUN_144e2e510(void)

void FUN_144e2e510(longlong param_1,undefined4 param_2)

{
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  uint local_10;
  uint local_c;
  
  local_38 = param_1 + 0xe;
  local_10 = (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7) >> 1;
  local_18 = (ulonglong)local_10 * 2;
  local_30 = param_1 + 0x10 + local_18;
  local_28 = local_18 + local_30;
  local_20 = local_18 + local_28;
  local_18 = local_20 + local_18;
  local_c = (*(byte *)(param_1 + 3) - 0x10) + ((uint)*(byte *)(param_1 + 2) * 0x20 - local_10) * 8
            >> 1;
  FUN_144e2e3d0(&local_38,param_2);
  return;
}



// FUNCTION 144e2e5a0 FUN_144e2e5a0 body=209 status=ok
// SIG undefined FUN_144e2e5a0(void)

ulonglong FUN_144e2e5a0(longlong param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = FUN_144e2c5c0(param_2,param_1,0xe);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_1,
                        (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3));
  if (cVar1 == '\0') {
    uVar2 = *(longlong *)(param_2 + 0x10) - param_1;
    if (0xffff < uVar2) {
      uVar2 = 0xffff;
    }
    uVar3 = FUN_144e2d280(param_2,param_1 + 2,2);
    if ((char)uVar3 == '\0') {
      return uVar3 & 0xffffffffffffff00;
    }
    *(char *)(param_1 + 3) = (char)uVar2;
    *(char *)(param_1 + 2) = (char)(uVar2 >> 8);
  }
  return (ulonglong)
         (((uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7)) * 4 + 0x10 <=
         (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3));
}



// FUNCTION 144e2e6d0 FUN_144e2e6d0 body=120 status=ok
// SIG undefined FUN_144e2e6d0(void)

undefined8 FUN_144e2e6d0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,10);
  if (cVar1 != '\0') {
    cVar1 = FUN_144e2c5c0(param_2,param_1 + 8,2);
    if (cVar1 != '\0') {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 10,
                            ((uint)*(byte *)(param_1 + 8) * 0x100 + (uint)*(byte *)(param_1 + 9)) *
                            2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144e2e7d0 FUN_144e2e7d0 body=126 status=ok
// SIG undefined FUN_144e2e7d0(void)

undefined8 FUN_144e2e7d0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 != '\0') {
    uVar2 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
            (uint)param_1[3];
    if (uVar2 < 0x7fffffff) {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 4,uVar2 * 2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144e2e850 FUN_144e2e850 body=131 status=ok
// SIG undefined FUN_144e2e850(void)

undefined8 FUN_144e2e850(byte *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 != '\0') {
    uVar2 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
            (uint)param_1[3];
    if (uVar2 < 0x15555555) {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 4,uVar2 * 0xc);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144e2e8e0 FUN_144e2e8e0 body=344 status=ok
// SIG undefined FUN_144e2e8e0(void)

uint FUN_144e2e8e0(longlong param_1,uint param_2,int *param_3)

{
  uint uVar1;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar2;
  
  iVar5 = 0;
  iVar4 = (uint)*(byte *)(param_1 + 0xd) * 0x10000 + (uint)*(byte *)(param_1 + 0xe) * 0x100 +
          (uint)*(byte *)(param_1 + 0xc) * 0x1000000 + (uint)*(byte *)(param_1 + 0xf) + -1;
  if (-1 < iVar4) {
    do {
      uVar1 = (uint)(iVar4 + iVar5) >> 1;
      uVar2 = (ulonglong)uVar1;
      pbVar3 = (byte *)(param_1 + 0x10 + uVar2 * 0xc);
      if (param_2 < (uint)*(byte *)(param_1 + 0x11 + uVar2 * 0xc) * 0x10000 +
                    (uint)*(byte *)(param_1 + 0x12 + uVar2 * 0xc) * 0x100 +
                    (uint)*pbVar3 * 0x1000000 + (uint)pbVar3[3]) {
        iVar4 = uVar1 - 1;
      }
      else {
        if (param_2 <=
            (uint)pbVar3[5] * 0x10000 + (uint)pbVar3[6] * 0x100 + (uint)pbVar3[4] * 0x1000000 +
            (uint)pbVar3[7]) {
          pbVar3 = (byte *)(param_1 + 0x10 + (ulonglong)uVar1 * 0xc);
          goto LAB_144e2e995;
        }
        iVar5 = uVar1 + 1;
      }
    } while (iVar5 <= iVar4);
  }
  pbVar3 = &DAT_149a1f188;
LAB_144e2e995:
  uVar1 = (uint)pbVar3[3] + (uint)*pbVar3 * 0x1000000 + (uint)pbVar3[2] * 0x100 +
          (uint)pbVar3[1] * 0x10000;
  if (uVar1 <= (uint)pbVar3[5] * 0x10000 + (uint)pbVar3[6] * 0x100 + (uint)pbVar3[4] * 0x1000000 +
               (uint)pbVar3[7]) {
    uVar1 = 0;
    iVar4 = (((uint)pbVar3[9] * 0x10000 + (uint)pbVar3[10] * 0x100 + (uint)pbVar3[8] * 0x1000000 +
             (uint)pbVar3[0xb]) - (uint)pbVar3[3]) + (uint)*pbVar3 * -0x1000000 +
            (uint)pbVar3[2] * -0x100 + (uint)pbVar3[1] * -0x10000 + param_2;
    if (iVar4 != 0) {
      *param_3 = iVar4;
      return 1;
    }
  }
  return uVar1 & 0xffffff00;
}



// FUNCTION 144e2ea40 FUN_144e2ea40 body=248 status=ok
// SIG undefined FUN_144e2ea40(void)

undefined8 FUN_144e2ea40(longlong param_1,uint param_2,int *param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar3;
  
  iVar6 = 0;
  iVar5 = (uint)*(byte *)(param_1 + 0xd) * 0x10000 + (uint)*(byte *)(param_1 + 0xe) * 0x100 +
          (uint)*(byte *)(param_1 + 0xc) * 0x1000000 + (uint)*(byte *)(param_1 + 0xf) + -1;
  if (-1 < iVar5) {
    do {
      uVar2 = (uint)(iVar5 + iVar6) >> 1;
      uVar3 = (ulonglong)uVar2;
      pbVar1 = (byte *)(param_1 + 0x10 + uVar3 * 0xc);
      if (param_2 < (uint)*(byte *)(param_1 + 0x11 + uVar3 * 0xc) * 0x10000 +
                    (uint)*(byte *)(param_1 + 0x12 + uVar3 * 0xc) * 0x100 +
                    (uint)*pbVar1 * 0x1000000 + (uint)pbVar1[3]) {
        iVar5 = uVar2 - 1;
      }
      else {
        if (param_2 <=
            (uint)pbVar1[5] * 0x10000 + (uint)pbVar1[6] * 0x100 + (uint)pbVar1[4] * 0x1000000 +
            (uint)pbVar1[7]) {
          puVar4 = (undefined1 *)(param_1 + 0x10 + (ulonglong)uVar2 * 0xc);
          goto LAB_144e2eaf1;
        }
        iVar6 = uVar2 + 1;
      }
    } while (iVar6 <= iVar5);
  }
  puVar4 = &DAT_149a1f188;
LAB_144e2eaf1:
  iVar5 = (uint)(byte)puVar4[9] * 0x10000 + (uint)(byte)puVar4[10] * 0x100 +
          (uint)(byte)puVar4[8] * 0x1000000 + (uint)(byte)puVar4[0xb];
  if (iVar5 == 0) {
    return 0;
  }
  *param_3 = iVar5;
  return 1;
}



// FUNCTION 144e2eb40 FUN_144e2eb40 body=131 status=ok
// SIG undefined FUN_144e2eb40(void)

undefined8 FUN_144e2eb40(byte *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 != '\0') {
    uVar2 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
            (uint)param_1[3];
    if (uVar2 < 0x3fffffff) {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 4,uVar2 * 4);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144e2ebd0 FUN_144e2ebd0 body=127 status=ok
// SIG undefined FUN_144e2ebd0(void)

undefined8 FUN_144e2ebd0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 != '\0') {
    uVar2 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
            (uint)param_1[3];
    if (uVar2 < 0x33333333) {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 4,uVar2 * 5);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144e2ec50 FUN_144e2ec50 body=148 status=ok
// SIG undefined FUN_144e2ec50(void)

bool FUN_144e2ec50(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 == '\0') {
    return false;
  }
  if ((uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
      (uint)param_1[3] == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3);
  return cVar1 != '\0';
}



// FUNCTION 144e2ecf0 FUN_144e2ecf0 body=177 status=ok
// SIG undefined FUN_144e2ecf0(void)

undefined8 FUN_144e2ecf0(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2ec50();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((uint)*param_1 * 0x1000000 + (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 +
       (uint)param_1[3] != 0) &&
     (cVar1 = FUN_144e2eb40((((ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100) * 0x100 +
                            (ulonglong)param_1[2]) * 0x100 + param_3 + (ulonglong)param_1[3],param_2
                           ), cVar1 == '\0')) {
    cVar1 = FUN_144e2d280(param_2,param_1,4);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return 1;
}



// FUNCTION 144e2edb0 FUN_144e2edb0 body=148 status=ok
// SIG undefined FUN_144e2edb0(void)

bool FUN_144e2edb0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 == '\0') {
    return false;
  }
  if ((uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
      (uint)param_1[3] == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3);
  return cVar1 != '\0';
}



// FUNCTION 144e2ee50 FUN_144e2ee50 body=177 status=ok
// SIG undefined FUN_144e2ee50(void)

undefined8 FUN_144e2ee50(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2edb0();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((uint)*param_1 * 0x1000000 + (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 +
       (uint)param_1[3] != 0) &&
     (cVar1 = FUN_144e2ebd0((((ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100) * 0x100 +
                            (ulonglong)param_1[2]) * 0x100 + param_3 + (ulonglong)param_1[3],param_2
                           ), cVar1 == '\0')) {
    cVar1 = FUN_144e2d280(param_2,param_1,4);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return 1;
}



// FUNCTION 144e2ef10 FUN_144e2ef10 body=403 status=ok
// SIG undefined FUN_144e2ef10(void)

undefined1 FUN_144e2ef10(byte *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  
  cVar2 = FUN_144e2f0b0();
  if (cVar2 == '\0') {
    return 0;
  }
  uVar6 = 0;
  uVar4 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
          (uint)param_1[3];
  if (uVar4 != 0) {
    do {
      pbVar7 = param_1 + uVar6 * 0xb + 4;
      if ((((pbVar7 < *(byte **)(param_2 + 2)) || (*(byte **)(param_2 + 4) < pbVar7)) ||
          ((uint)(param_2[4] - (int)pbVar7) < 0xb)) ||
         (iVar1 = param_2[6], param_2[6] = iVar1 + -1, iVar1 < 1)) {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
      pcVar3 = "OUT-OF-RANGE";
      if (cVar2 != '\0') {
        pcVar3 = "OK";
      }
      FUN_144e2d270("SANITIZE",pbVar7,0,1,*param_2 + 1,0,
                    "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s",pbVar7,pbVar7 + 0xb,0xb,
                    *(byte **)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
      if (((cVar2 == '\0') || (cVar2 = FUN_144e2ecf0(pbVar7 + 3,param_2,param_3), cVar2 == '\0')) ||
         (cVar2 = FUN_144e2ee50(pbVar7 + 7,param_2,param_3), cVar2 == '\0')) {
        return 0;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < uVar4);
  }
  return 1;
}



// FUNCTION 144e2f0b0 FUN_144e2f0b0 body=127 status=ok
// SIG undefined FUN_144e2f0b0(void)

undefined8 FUN_144e2f0b0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 != '\0') {
    uVar2 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
            (uint)param_1[3];
    if (uVar2 < 0x1745d174) {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 4,uVar2 * 0xb);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144e2f130 FUN_144e2f130 body=304 status=ok
// SIG undefined FUN_144e2f130(void)

ulonglong FUN_144e2f130(byte *param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  byte *pbVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar3 = 0;
  uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (uVar4 < 0xe) {
    uVar3 = (ulonglong)uVar4;
    switch(uVar3) {
    case 0:
      if (param_2 < 0x100) {
        uVar3 = (ulonglong)param_2;
        bVar1 = param_1[uVar3 + 6];
        bVar5 = bVar1 == 0;
        if (!bVar5) {
          *param_3 = (uint)bVar1;
          return (ulonglong)CONCAT31((int3)(param_2 >> 8),bVar1 != 0);
        }
      }
      else {
        bVar5 = true;
      }
      return CONCAT71((int7)(uVar3 >> 8),!bVar5);
    case 4:
      uVar3 = FUN_144e2e510();
      return uVar3;
    case 6:
      uVar4 = (param_2 + (uint)param_1[6] * -0x100) - (uint)param_1[7];
      if (uVar4 < (uint)param_1[8] * 0x100 + (uint)param_1[9]) {
        pbVar2 = param_1 + 8 + ((ulonglong)uVar4 + 1) * 2;
      }
      else {
        pbVar2 = &DAT_149a1f1a0;
      }
      uVar4 = (uint)*pbVar2 * 0x100 + (uint)pbVar2[1];
      if (uVar4 == 0) {
        return 0;
      }
      *param_3 = uVar4;
      return 1;
    case 10:
      uVar4 = (param_2 + (uint)param_1[0xd] * -0x10000 + (uint)param_1[0xe] * -0x100 +
              (uint)param_1[0xc] * -0x1000000) - (uint)param_1[0xf];
      if (uVar4 < (uint)param_1[0x11] * 0x10000 + (uint)param_1[0x12] * 0x100 +
                  (uint)param_1[0x10] * 0x1000000 + (uint)param_1[0x13]) {
        pbVar2 = param_1 + 0x10 + ((ulonglong)uVar4 + 2) * 2;
      }
      else {
        pbVar2 = &DAT_149a1f1a0;
      }
      uVar4 = (uint)*pbVar2 * 0x100 + (uint)pbVar2[1];
      if (uVar4 == 0) {
        return 0;
      }
      *param_3 = uVar4;
      return 1;
    case 0xc:
      uVar3 = FUN_144e2e8e0();
      return uVar3;
    case 0xd:
      uVar3 = FUN_144e2ea40();
      return uVar3;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 144e2f1e0 FUN_144e2f1e0 body=300 status=ok
// SIG undefined FUN_144e2f1e0(void)

undefined8 FUN_144e2f1e0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    switch((uint)*param_1 * 0x100 + (uint)param_1[1]) {
    case 0:
      uVar2 = FUN_144e2c5c0(param_2,param_1,0x106);
      return uVar2;
    default:
      goto switchD_144e2f23a_caseD_1;
    case 4:
      uVar2 = FUN_144e2e5a0(param_1,param_2);
      return uVar2;
    case 6:
      uVar2 = FUN_144e2e6d0(param_1,param_2);
      return uVar2;
    case 10:
      cVar1 = FUN_144e2c5c0(param_2,param_1,0x14);
      if (cVar1 == '\0') {
        return 0;
      }
      cVar1 = FUN_144e2e7d0(param_1 + 0x10,param_2);
      break;
    case 0xc:
    case 0xd:
      cVar1 = FUN_144e2c5c0(param_2,param_1,0x10);
      if (cVar1 == '\0') {
        return 0;
      }
      cVar1 = FUN_144e2e850(param_1 + 0xc,param_2);
      break;
    case 0xe:
      cVar1 = FUN_144e2c5c0(param_2,param_1,10);
      if (cVar1 == '\0') {
        return 0;
      }
      cVar1 = FUN_144e2ef10(param_1 + 6,param_2,param_1);
    }
    if (cVar1 != '\0') {
switchD_144e2f23a_caseD_1:
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144e2f350 FUN_144e2f350 body=148 status=ok
// SIG undefined FUN_144e2f350(void)

bool FUN_144e2f350(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 == '\0') {
    return false;
  }
  if ((uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
      (uint)param_1[3] == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3);
  return cVar1 != '\0';
}



// FUNCTION 144e2f3f0 FUN_144e2f3f0 body=177 status=ok
// SIG undefined FUN_144e2f3f0(void)

undefined8 FUN_144e2f3f0(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2f350();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((uint)*param_1 * 0x1000000 + (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 +
       (uint)param_1[3] != 0) &&
     (cVar1 = FUN_144e2f1e0((((ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100) * 0x100 +
                            (ulonglong)param_1[2]) * 0x100 + param_3 + (ulonglong)param_1[3],param_2
                           ), cVar1 == '\0')) {
    cVar1 = FUN_144e2d280(param_2,param_1,4);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return 1;
}



// FUNCTION 144e2f4b0 FUN_144e2f4b0 body=244 status=ok
// SIG undefined FUN_144e2f4b0(void)

undefined1 * FUN_144e2f4b0(undefined8 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  puVar1 = (undefined1 *)FUN_144e2f7a0(param_1,3,10);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)FUN_144e2f7a0(param_1,0,6);
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = (undefined1 *)FUN_144e2f7a0(param_1,0,4);
      if (puVar1 == (undefined1 *)0x0) {
        puVar1 = (undefined1 *)FUN_144e2f7a0(param_1,3,1);
        if (puVar1 == (undefined1 *)0x0) {
          puVar1 = (undefined1 *)FUN_144e2f7a0(param_1,0,3);
          if (puVar1 == (undefined1 *)0x0) {
            puVar1 = (undefined1 *)FUN_144e2f7a0(param_1,0,2);
            if (puVar1 == (undefined1 *)0x0) {
              puVar1 = (undefined1 *)FUN_144e2f7a0(param_1,0,1);
              if (puVar1 == (undefined1 *)0x0) {
                puVar1 = (undefined1 *)FUN_144e2f7a0(param_1,0,0);
                if (puVar1 == (undefined1 *)0x0) {
                  puVar1 = (undefined1 *)FUN_144e2f7a0(param_1,3,0);
                  if (puVar1 == (undefined1 *)0x0) {
                    puVar1 = &DAT_149a1f1a0;
                  }
                  else if (param_2 != (undefined1 *)0x0) {
                    *param_2 = 1;
                    return puVar1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return puVar1;
}



// FUNCTION 144e2f5b0 FUN_144e2f5b0 body=487 status=ok
// SIG undefined FUN_144e2f5b0(void)

void FUN_144e2f5b0(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  char local_res8 [8];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  int local_18;
  undefined1 local_14;
  
  local_48[0] = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = *(int *)(param_2 + 0x30);
  local_40 = 0;
  uStack_38 = 0;
  if (local_18 == -1) {
    local_18 = FUN_144e2c9d0(param_2);
  }
  local_14 = 1;
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    lVar3 = (**(code **)(param_2 + 0x10))(param_2,0x636d6170,*(undefined8 *)(param_2 + 0x18));
    if (lVar3 != 0) goto LAB_144e2f61a;
  }
  lVar3 = FUN_144e3f0f0();
LAB_144e2f61a:
  puVar4 = (undefined1 *)FUN_144e2ff10(local_48,lVar3);
  param_1[10] = puVar4;
  puVar10 = &DAT_149a1f1a0;
  if (puVar4 != (undefined1 *)0x0) {
    puVar10 = puVar4;
  }
  if (*(uint *)(puVar10 + 0x18) < 4) {
    puVar10 = &DAT_149a1f1a0;
  }
  else {
    puVar10 = *(undefined1 **)(puVar10 + 0x10);
  }
  uVar5 = FUN_144e2f4b0(puVar10,local_res8);
  *param_1 = uVar5;
  param_1[1] = &DAT_149a1f1a0;
  puVar10 = &DAT_149a1f1a0;
  if ((undefined1 *)param_1[10] != (undefined1 *)0x0) {
    puVar10 = (undefined1 *)param_1[10];
  }
  if (*(uint *)(puVar10 + 0x18) < 4) {
    puVar10 = &DAT_149a1f1a0;
  }
  else {
    puVar10 = *(undefined1 **)(puVar10 + 0x10);
  }
  pbVar6 = (byte *)FUN_144e2f7a0(puVar10,0,5);
  if ((pbVar6 != (byte *)0x0) && ((ushort)((ushort)*pbVar6 * 0x100 + (ushort)pbVar6[1]) == 0xe)) {
    param_1[1] = pbVar6;
  }
  pbVar6 = (byte *)*param_1;
  pbVar7 = &DAT_149a1f1a0;
  if (pbVar6 != (byte *)0x0) {
    pbVar7 = pbVar6;
  }
  param_1[3] = pbVar7;
  if (local_res8[0] != '\0') {
    param_1[2] = FUN_144e2faa0;
    return;
  }
  pbVar7 = &DAT_149a1f1a0;
  if (pbVar6 != (byte *)0x0) {
    pbVar7 = pbVar6;
  }
  iVar8 = (uint)*pbVar7 * 0x100 + (uint)pbVar7[1];
  if (iVar8 != 4) {
    puVar10 = &LAB_144e2fb20;
    if (iVar8 != 0xc) {
      puVar10 = &LAB_144e2fb10;
    }
    param_1[2] = puVar10;
    return;
  }
  pbVar7 = &DAT_149a1f1a0;
  if (pbVar6 != (byte *)0x0) {
    pbVar7 = pbVar6;
  }
  bVar1 = pbVar7[7];
  bVar2 = pbVar7[6];
  pbVar6 = pbVar7 + 0xe;
  param_1[4] = pbVar6;
  uVar9 = (uint)bVar1 + (uint)bVar2 * 0x100 >> 1;
  *(uint *)(param_1 + 9) = uVar9;
  pbVar6 = pbVar6 + (ulonglong)uVar9 * 2 + 2;
  param_1[5] = pbVar6;
  pbVar6 = pbVar6 + (ulonglong)uVar9 * 2;
  param_1[6] = pbVar6;
  param_1[7] = pbVar6 + (ulonglong)uVar9 * 2;
  param_1[8] = pbVar6 + (ulonglong)uVar9 * 2 + (ulonglong)uVar9 * 2;
  *(uint *)((longlong)param_1 + 0x4c) =
       (pbVar7[3] - 0x10) + ((uint)pbVar7[2] * 0x20 - uVar9) * 8 >> 1;
  param_1[3] = param_1 + 4;
  param_1[2] = &LAB_144e2e500;
  return;
}



// FUNCTION 144e2f7a0 FUN_144e2f7a0 body=336 status=ok
// SIG undefined FUN_144e2f7a0(void)

undefined1 * FUN_144e2f7a0(longlong param_1,undefined2 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  
  puVar5 = &DAT_149a1f1a0;
  iVar6 = 0;
  iVar7 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3) + -1;
  if (-1 < iVar7) {
    do {
      uVar1 = (uint)(iVar7 + iVar6) >> 1;
      uVar3 = (ulonglong)uVar1;
      iVar2 = ((uint)*(byte *)(param_1 + 4 + (ulonglong)uVar1 * 8) * -0x100 -
              (uint)*(byte *)(param_1 + 5 + uVar3 * 8)) +
              (uint)(byte)((ushort)param_2 >> 8) * 0x100 + (uint)(byte)param_2;
      if ((iVar2 == 0) &&
         (iVar2 = (((param_3 >> 8 & 0xff) - (uint)*(byte *)(param_1 + 6 + uVar3 * 8)) * 0x100 -
                  (uint)*(byte *)(param_1 + 7 + uVar3 * 8)) + (param_3 & 0xff), iVar2 == 0)) {
LAB_144e2f886:
        puVar4 = (undefined1 *)(param_1 + 4 + uVar3 * 8);
        goto LAB_144e2f853;
      }
      if (iVar2 < 0) {
        iVar7 = uVar1 - 1;
      }
      else {
        if (iVar2 < 1) goto LAB_144e2f886;
        iVar6 = uVar1 + 1;
      }
    } while (iVar6 <= iVar7);
  }
  puVar4 = &DAT_149a1f1a0;
LAB_144e2f853:
  if ((uint)(byte)puVar4[5] * 0x10000 + (uint)(byte)puVar4[6] * 0x100 +
      (uint)(byte)puVar4[4] * 0x1000000 + (uint)(byte)puVar4[7] == 0) {
    return (undefined1 *)0x0;
  }
  if ((uint)(byte)puVar4[4] * 0x1000000 + (uint)(byte)puVar4[6] * 0x100 +
      (uint)(byte)puVar4[5] * 0x10000 + (uint)(byte)puVar4[7] != 0) {
    puVar5 = (undefined1 *)
             (((ulonglong)CONCAT11(puVar4[4],puVar4[5]) * 0x100 + (ulonglong)(byte)puVar4[6]) *
              0x100 + param_1 + (ulonglong)(byte)puVar4[7]);
  }
  return puVar5;
}



// FUNCTION 144e2f8f0 FUN_144e2f8f0 body=430 status=ok
// SIG undefined FUN_144e2f8f0(void)

undefined8 FUN_144e2f8f0(byte *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  
  cVar2 = FUN_144e2c5c0(param_2,param_1,2);
  if ((cVar2 == '\0') ||
     (cVar2 = FUN_144e2c5c0(param_2,param_1 + 2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 8),
     cVar2 == '\0')) {
    return 0;
  }
  uVar6 = 0;
  uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (uVar4 != 0) {
    do {
      pbVar7 = param_1 + uVar6 * 8 + 2;
      if ((((pbVar7 < *(byte **)(param_2 + 2)) || (*(byte **)(param_2 + 4) < pbVar7)) ||
          ((uint)(param_2[4] - (int)pbVar7) < 8)) ||
         (iVar1 = param_2[6], param_2[6] = iVar1 + -1, iVar1 < 1)) {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
      pcVar3 = "OUT-OF-RANGE";
      if (cVar2 != '\0') {
        pcVar3 = "OK";
      }
      FUN_144e2d270("SANITIZE",pbVar7,0,1,*param_2 + 1,0,
                    "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s",pbVar7,pbVar7 + 8,8,
                    *(byte **)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
      if ((cVar2 == '\0') || (cVar2 = FUN_144e2f3f0(pbVar7 + 4,param_2,param_3), cVar2 == '\0')) {
        return 0;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < uVar4);
  }
  return 1;
}



// FUNCTION 144e2faa0 FUN_144e2faa0 body=108 status=ok
// SIG undefined FUN_144e2faa0(void)

undefined1 FUN_144e2faa0(undefined8 param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_144e2f130();
  if (cVar1 != '\0') {
    return 1;
  }
  if (param_2 < 0x100) {
    uVar2 = FUN_144e2f130(param_1,param_2 + 0xf000,param_3);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144e2fb30 FUN_144e2fb30 body=362 status=ok
// SIG undefined FUN_144e2fb30(void)

longlong FUN_144e2fb30(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  uVar3 = FUN_144e3f100(param_2);
  *(undefined8 *)(param_1 + 10) = uVar3;
  *(undefined1 *)(param_1 + 7) = 0;
  while( true ) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 10) + 0x10);
    *(longlong *)(param_1 + 2) = lVar4;
    lVar7 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 10) + 0x18) + lVar4;
    param_1[8] = 0;
    *(longlong *)(param_1 + 4) = lVar7;
    iVar6 = (int)lVar7 - (int)lVar4;
    *param_1 = 0;
    uVar1 = iVar6 * 8;
    uVar5 = 0x4000;
    if (0x4000 < uVar1) {
      uVar5 = uVar1;
    }
    param_1[6] = uVar5;
    FUN_144e2d270("SANITIZE",lVar4,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar4,lVar7,iVar6);
    lVar4 = *(longlong *)(param_1 + 2);
    if (lVar4 == 0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    cVar2 = FUN_144e2e2a0(lVar4,param_1);
    if (cVar2 != '\0') break;
    if ((param_1[8] == 0) || (*(char *)(param_1 + 7) != '\0')) goto LAB_144e2fc50;
    lVar4 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar4;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar4;
    if (lVar4 == 0) goto LAB_144e2fc50;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  if (param_1[8] != 0) {
    param_1[8] = 0;
    cVar2 = FUN_144e2e2a0(lVar4,param_1);
    if (param_1[8] != 0) {
      cVar2 = '\0';
    }
  }
LAB_144e2fc50:
  FUN_144e2c540(param_1);
  if (cVar2 == '\0') {
    FUN_144e3f120(param_2);
    param_2 = FUN_144e3f0f0();
  }
  else {
    FUN_144e3f1a0();
  }
  return param_2;
}



// FUNCTION 144e2fca0 FUN_144e2fca0 body=30 status=ok
// SIG undefined FUN_144e2fca0(void)

void FUN_144e2fca0(undefined8 *param_1)

{
  FUN_144e3f120(*param_1);
  thunk_FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144e2fcc0 FUN_144e2fcc0 body=380 status=ok
// SIG undefined FUN_144e2fcc0(void)

void FUN_144e2fcc0(undefined8 param_1,int param_2,longlong *param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint local_res10 [2];
  
  if (param_2 == 0) {
    FUN_144e3f100(*param_3);
    return;
  }
  pbVar3 = &DAT_149a1f1a0;
  if (*(uint *)(*param_3 + 0x18) < 4) {
    pbVar2 = &DAT_149a1f1a0;
  }
  else {
    pbVar2 = *(byte **)(*param_3 + 0x10);
  }
  uVar4 = 0;
  local_res10[0] = 0;
  uVar1 = (uint)pbVar2[1] * 0x10000 + (uint)pbVar2[2] * 0x100 + (uint)*pbVar2 * 0x1000000 +
          (uint)pbVar2[3];
  if (uVar1 < 0x74727566) {
    uVar5 = 0;
    if (uVar1 == 0x74727565) goto LAB_144e2fd80;
    if (uVar1 == 0x100) {
      pbVar2 = (byte *)FUN_144e2df50(pbVar2,(int)param_3[1],local_res10);
      uVar5 = local_res10[0];
      goto LAB_144e2fd80;
    }
    uVar5 = uVar4;
    if (uVar1 == 0x10000) goto LAB_144e2fd80;
    bVar6 = uVar1 == 0x4f54544f;
LAB_144e2fd7b:
    uVar5 = uVar4;
    if (bVar6) goto LAB_144e2fd80;
  }
  else {
    if (uVar1 != 0x74746366) {
      bVar6 = uVar1 == 0x74797031;
      goto LAB_144e2fd7b;
    }
    if ((pbVar2[5] - 1) + (uint)pbVar2[4] * 0x100 < 2) {
      pbVar2 = (byte *)FUN_144e2d5b0(pbVar2,(int)param_3[1]);
      uVar5 = uVar4;
      goto LAB_144e2fd80;
    }
  }
  pbVar2 = &DAT_149a1f1a0;
  uVar5 = uVar4;
LAB_144e2fd80:
  FUN_144e2d410(pbVar2,param_2,local_res10);
  if (local_res10[0] < (uint)pbVar2[4] * 0x100 + (uint)pbVar2[5]) {
    pbVar3 = pbVar2 + (ulonglong)local_res10[0] * 0x10 + 0xc;
  }
  FUN_144e3f000(*param_3,(uint)pbVar3[9] * 0x10000 + (uint)pbVar3[10] * 0x100 +
                         (uint)pbVar3[8] * 0x1000000 + (uint)pbVar3[0xb] + uVar5,
                (uint)pbVar3[0xd] * 0x10000 + (uint)pbVar3[0xe] * 0x100 +
                (uint)pbVar3[0xc] * 0x1000000 + (uint)pbVar3[0xf]);
  return;
}



// FUNCTION 144e2fe40 FUN_144e2fe40 body=208 status=ok
// SIG undefined FUN_144e2fe40(void)

undefined8 FUN_144e2fe40(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if ((cVar1 != '\0') &&
     (cVar1 = FUN_144e2c5c0(param_2,param_1 + 2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 8 + 8)
     , cVar1 != '\0')) {
    uVar3 = 0;
    uVar4 = param_1[1] + 1 + (uint)*param_1 * 0x100;
    if (uVar4 != 0) {
      do {
        cVar1 = FUN_144e2da40(param_1 + uVar3 * 8 + 2,param_2,param_3,param_4);
        if (cVar1 == '\0') {
          return 0;
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < uVar4);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 144e2ff10 FUN_144e2ff10 body=629 status=ok
// SIG undefined FUN_144e2ff10(void)

longlong FUN_144e2ff10(int *param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined4 uVar16;
  byte *pbVar17;
  byte *pbVar18;
  
  uVar5 = FUN_144e3f100(param_2);
  *(undefined8 *)(param_1 + 10) = uVar5;
  *(undefined1 *)(param_1 + 7) = 0;
  while( true ) {
    pcVar11 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s";
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 10) + 0x10);
    *(longlong *)(param_1 + 2) = lVar7;
    lVar10 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 10) + 0x18) + lVar7;
    param_1[8] = 0;
    *(longlong *)(param_1 + 4) = lVar10;
    iVar9 = (int)lVar10 - (int)lVar7;
    *param_1 = 0;
    cVar4 = '\x01';
    uVar1 = iVar9 * 8;
    uVar12 = 0;
    uVar8 = 0x4000;
    if (0x4000 < uVar1) {
      uVar8 = uVar1;
    }
    param_1[6] = uVar8;
    FUN_144e2d270("SANITIZE",lVar7,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar7,lVar10,iVar9);
    pbVar2 = *(byte **)(param_1 + 2);
    if (pbVar2 == (byte *)0x0) {
      FUN_144e2c540(param_1);
      return param_2;
    }
    pbVar18 = *(byte **)(param_1 + 4);
    if (((pbVar18 < pbVar2) || ((uint)((int)pbVar18 - (int)pbVar2) < 4)) ||
       (iVar9 = param_1[6], param_1[6] = iVar9 + -1, iVar9 < 1)) {
      cVar4 = '\0';
    }
    pbVar15 = pbVar2 + 4;
    pcVar6 = "OUT-OF-RANGE";
    if (cVar4 != '\0') {
      pcVar6 = "OK";
    }
    uVar16 = 4;
    uVar13 = 0;
    uVar5 = CONCAT44(uVar12,*param_1 + 1);
    pbVar14 = pbVar2;
    pbVar17 = pbVar2;
    FUN_144e2d270("SANITIZE",pbVar2,0);
    if (((cVar4 != '\0') && ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) == 0)) &&
       (cVar4 = FUN_144e2f8f0(pbVar2 + 2,param_1,pbVar2), cVar4 != '\0')) break;
    bVar3 = false;
    if ((param_1[8] == 0) || ((char)param_1[7] != '\0')) goto LAB_144e30132;
    lVar7 = FUN_144e3f1b0(param_2,0);
    *(longlong *)(param_1 + 2) = lVar7;
    *(ulonglong *)(param_1 + 4) = (ulonglong)*(uint *)(param_2 + 0x18) + lVar7;
    if (lVar7 == 0) goto LAB_144e30132;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  bVar3 = true;
  if (param_1[8] != 0) {
    param_1[8] = 0;
    cVar4 = FUN_144e2c5c0(param_1,pbVar2,4);
    if (((cVar4 == '\0') || ((ushort)((ushort)*pbVar2 * 0x100 + (ushort)pbVar2[1]) != 0)) ||
       (cVar4 = FUN_144e2f8f0(pbVar2 + 2,param_1,pbVar2,0,uVar5,uVar13,pcVar11,pbVar14,pbVar15,
                              uVar16,pbVar17,pbVar18,pcVar6), cVar4 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (param_1[8] != 0) {
      bVar3 = false;
    }
  }
LAB_144e30132:
  FUN_144e2c540(param_1);
  if (bVar3) {
    FUN_144e3f1a0();
  }
  else {
    FUN_144e3f120(param_2);
    param_2 = FUN_144e3f0f0();
  }
  return param_2;
}



// FUNCTION 144e30190 FUN_144e30190 body=50 status=ok
// SIG undefined FUN_144e30190(void)

void FUN_144e30190(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = FUN_144e3a010();
  FUN_144b63c50(param_1,uVar2,lVar1 + 0x48,0);
  return;
}



// FUNCTION 144e301d0 FUN_144e301d0 body=876 status=ok
// SIG undefined FUN_144e301d0(void)

void FUN_144e301d0(undefined1 *param_1,ulonglong param_2,ulonglong param_3,code *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *local_res10;
  
  puVar5 = param_1 + param_2 * param_3;
  while (puVar11 = param_1, 6 < param_2) {
    puVar9 = param_1 + (param_2 >> 1) * param_3;
    puVar11 = param_1 + (param_2 - 1) * param_3;
    iVar4 = (*param_4)(param_1,puVar9,param_5);
    puVar7 = puVar9;
    local_res10 = param_1;
    if (0 < iVar4) {
      puVar7 = param_1;
      local_res10 = puVar9;
    }
    iVar4 = (*param_4)(puVar7,puVar11,param_5);
    if ((0 < iVar4) &&
       (iVar4 = (*param_4)(local_res10,puVar11,param_5), puVar7 = puVar11, 0 < iVar4)) {
      puVar7 = local_res10;
    }
    uVar6 = param_3;
    if (puVar7 + param_3 < puVar7) {
      uVar6 = 0;
    }
    if (uVar6 != 0) {
      puVar9 = puVar7;
      do {
        uVar3 = *puVar9;
        *puVar9 = puVar9[(longlong)puVar11 - (longlong)puVar7];
        puVar9[(longlong)puVar11 - (longlong)puVar7] = uVar3;
        puVar9 = puVar9 + 1;
      } while ((ulonglong)((longlong)puVar9 - (longlong)puVar7) < uVar6);
    }
    puVar7 = param_1;
    puVar9 = param_1;
    if (param_1 < puVar11) {
      do {
        puVar9 = puVar7 + ((longlong)(puVar11 + (1 - (longlong)puVar7)) >> 1);
        if (puVar7 < puVar9) {
LAB_144e30300:
          iVar4 = (*param_4)(puVar7,puVar11,param_5);
          if (iVar4 < 1) goto code_r0x000144e30319;
          lVar10 = -(longlong)puVar11 + (longlong)puVar7;
          uVar6 = param_3;
          if (puVar11 + lVar10 + param_3 < puVar7) {
            uVar6 = 0;
          }
          puVar9 = puVar11;
          if (uVar6 != 0) {
            do {
              uVar3 = puVar9[lVar10];
              puVar9[lVar10] = *puVar9;
              *puVar9 = uVar3;
              puVar9 = puVar9 + 1;
            } while ((ulonglong)(-(longlong)puVar11 + (longlong)puVar9) < uVar6);
          }
          puVar11 = puVar11 + -param_3;
        }
LAB_144e3036e:
        lVar10 = (longlong)puVar11 - (longlong)puVar7;
        for (; puVar9 = puVar7, puVar7 + (lVar10 >> 1) < puVar11; puVar11 = puVar11 + -param_3) {
          iVar4 = (*param_4)(puVar7,puVar11,param_5);
          if (0 < iVar4) {
            puVar9 = puVar7 + param_3;
            uVar6 = param_3;
            if (puVar9 < puVar7) {
              uVar6 = 0;
            }
            if (uVar6 != 0) {
              lVar10 = -(longlong)puVar7;
              do {
                uVar3 = *puVar7;
                lVar2 = (longlong)puVar7 + lVar10;
                *puVar7 = puVar11[lVar2];
                puVar7 = puVar7 + 1;
                puVar11[lVar2] = uVar3;
              } while ((ulonglong)((longlong)puVar7 + lVar10) < uVar6);
            }
            break;
          }
        }
        puVar7 = puVar9;
      } while (puVar9 < puVar11);
    }
    FUN_144e301d0(param_1,(ulonglong)((longlong)puVar9 - (longlong)param_1) / param_3,param_3,
                  param_4,param_5);
    param_1 = puVar9 + param_3;
    param_2 = (ulonglong)(puVar5 + (-param_3 - (longlong)puVar9)) / param_3;
    puVar5 = param_1 + param_2 * param_3;
  }
  do {
    do {
      puVar11 = puVar11 + param_3;
      if (puVar5 <= puVar11) {
        return;
      }
    } while (puVar11 <= param_1);
    puVar7 = puVar11;
    do {
      puVar9 = puVar7 + -param_3;
      iVar4 = (*param_4)(puVar9,puVar7,param_5);
      if (iVar4 < 1) break;
      uVar6 = (longlong)puVar7 - (longlong)puVar9;
      if (puVar7 < puVar9) {
        uVar6 = 0;
      }
      if (uVar6 != 0) {
        puVar8 = puVar7;
        do {
          puVar1 = puVar8 + 1;
          uVar3 = *puVar9;
          *puVar9 = *puVar8;
          puVar9 = puVar9 + 1;
          *puVar8 = uVar3;
          puVar8 = puVar1;
        } while ((ulonglong)((longlong)puVar1 - (longlong)puVar7) < uVar6);
      }
      puVar7 = puVar7 + -param_3;
    } while (param_1 < puVar7);
  } while( true );
code_r0x000144e30319:
  puVar7 = puVar7 + param_3;
  if (puVar9 <= puVar7) goto LAB_144e3036e;
  goto LAB_144e30300;
}



// FUNCTION 144e30540 FUN_144e30540 body=3 status=ok
// SIG undefined FUN_144e30540(void)

void FUN_144e30540(void)

{
  return;
}



// FUNCTION 144e30550 FUN_144e30550 body=122 status=ok
// SIG undefined FUN_144e30550(void)

undefined4 * FUN_144e30550(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  uVar2 = *param_1 + 1;
  if ((int)(*param_1 + 1) < 0) {
    uVar2 = 0;
  }
  cVar3 = FUN_144e305d0();
  if (cVar3 != '\0') {
    uVar1 = *param_1;
    if (uVar1 < uVar2) {
      memset((void *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar1 * 4),0,
             (ulonglong)(uVar2 - uVar1) << 2);
    }
    *param_1 = uVar2;
    return (undefined4 *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar2 - 1) * 4);
  }
  DAT_14c793f60 = 0;
  return &DAT_14c793f60;
}



// FUNCTION 144e305d0 FUN_144e305d0 body=137 status=ok
// SIG undefined FUN_144e305d0(void)

undefined8 FUN_144e305d0(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((int)uVar1 < 0) {
    return 0;
  }
  uVar3 = uVar1;
  if (uVar1 < param_2) {
    do {
      uVar3 = uVar3 + 8 + (uVar3 >> 1);
    } while (uVar3 <= param_2);
    if ((((-1 < (int)uVar3) && (uVar1 <= uVar3)) && (uVar3 < 0x3fffffff)) &&
       (lVar2 = FUN_14286436b(*(undefined8 *)(param_1 + 8),(ulonglong)uVar3 << 2), lVar2 != 0)) {
      *(longlong *)(param_1 + 8) = lVar2;
      *(uint *)(param_1 + 4) = uVar3;
      return 1;
    }
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    return 0;
  }
  return 1;
}



// FUNCTION 144e30660 FUN_144e30660 body=247 status=ok
// SIG undefined FUN_144e30660(void)

undefined1 * FUN_144e30660(longlong *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined1 *)*param_1;
  LOCK();
  UNLOCK();
  while( true ) {
    if (puVar2 != (undefined1 *)0x0) {
      return puVar2;
    }
    lVar1 = param_1[-3];
    if (lVar1 == 0) break;
    puVar2 = (undefined1 *)FUN_142864336(1);
    if (puVar2 != (undefined1 *)0x0) {
      FUN_144e36bb0(puVar2,lVar1,0);
    }
    puVar3 = &DAT_149a1f1a0;
    if (puVar2 != (undefined1 *)0x0) {
      puVar3 = puVar2;
    }
    LOCK();
    lVar1 = *param_1;
    if (lVar1 == 0) {
      *param_1 = (longlong)puVar3;
    }
    UNLOCK();
    if (lVar1 == 0) {
      return puVar3;
    }
    if ((puVar3 != (undefined1 *)0x0) && (puVar3 != &DAT_149a1f1a0)) {
      puVar2 = &DAT_149a1f1a0;
      if (*(undefined1 **)(puVar3 + 0x20) != (undefined1 *)0x0) {
        puVar2 = *(undefined1 **)(puVar3 + 0x20);
      }
      FUN_144e3f120(puVar2);
      *(undefined8 *)(puVar3 + 0x20) = 0;
      puVar2 = &DAT_149a1f1a0;
      if (*(undefined1 **)(puVar3 + 0x28) != (undefined1 *)0x0) {
        puVar2 = *(undefined1 **)(puVar3 + 0x28);
      }
      FUN_144e3f120(puVar2);
      *(undefined8 *)(puVar3 + 0x28) = 0;
      thunk_FUN_1400020a8(puVar3);
    }
    puVar2 = (undefined1 *)*param_1;
    LOCK();
    UNLOCK();
  }
  return &DAT_149a1f1a0;
}



// FUNCTION 144e30760 FUN_144e30760 body=247 status=ok
// SIG undefined FUN_144e30760(void)

undefined1 * FUN_144e30760(longlong *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined1 *)*param_1;
  LOCK();
  UNLOCK();
  while( true ) {
    if (puVar2 != (undefined1 *)0x0) {
      return puVar2;
    }
    lVar1 = param_1[-4];
    if (lVar1 == 0) break;
    puVar2 = (undefined1 *)FUN_142864336(1);
    if (puVar2 != (undefined1 *)0x0) {
      FUN_144e36fc0(puVar2,lVar1,0);
    }
    puVar3 = &DAT_149a1f1a0;
    if (puVar2 != (undefined1 *)0x0) {
      puVar3 = puVar2;
    }
    LOCK();
    lVar1 = *param_1;
    if (lVar1 == 0) {
      *param_1 = (longlong)puVar3;
    }
    UNLOCK();
    if (lVar1 == 0) {
      return puVar3;
    }
    if ((puVar3 != (undefined1 *)0x0) && (puVar3 != &DAT_149a1f1a0)) {
      puVar2 = &DAT_149a1f1a0;
      if (*(undefined1 **)(puVar3 + 0x20) != (undefined1 *)0x0) {
        puVar2 = *(undefined1 **)(puVar3 + 0x20);
      }
      FUN_144e3f120(puVar2);
      *(undefined8 *)(puVar3 + 0x20) = 0;
      puVar2 = &DAT_149a1f1a0;
      if (*(undefined1 **)(puVar3 + 0x28) != (undefined1 *)0x0) {
        puVar2 = *(undefined1 **)(puVar3 + 0x28);
      }
      FUN_144e3f120(puVar2);
      *(undefined8 *)(puVar3 + 0x28) = 0;
      thunk_FUN_1400020a8(puVar3);
    }
    puVar2 = (undefined1 *)*param_1;
    LOCK();
    UNLOCK();
  }
  return &DAT_149a1f1a0;
}



// FUNCTION 144e30860 FUN_144e30860 body=255 status=ok
// SIG undefined FUN_144e30860(void)

undefined8 * FUN_144e30860(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)*param_1;
  LOCK();
  UNLOCK();
  while( true ) {
    if (puVar2 != (undefined8 *)0x0) {
      return puVar2;
    }
    lVar1 = param_1[-5];
    if (lVar1 == 0) break;
    puVar2 = (undefined8 *)FUN_142864336(1);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_144e373f0(puVar2,lVar1);
    }
    puVar4 = (undefined8 *)&DAT_149a1f1a0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar4 = puVar2;
    }
    LOCK();
    lVar1 = *param_1;
    if (lVar1 == 0) {
      *param_1 = (longlong)puVar4;
    }
    UNLOCK();
    if (lVar1 == 0) {
      return puVar4;
    }
    if ((puVar4 != (undefined8 *)0x0) && (puVar4 != (undefined8 *)&DAT_149a1f1a0)) {
      if (puVar4[4] != 0) {
        thunk_FUN_1400020a8();
      }
      puVar4[3] = 0;
      puVar4[4] = 0;
      LOCK();
      UNLOCK();
      thunk_FUN_1400020a8(puVar4[6]);
      puVar3 = &DAT_149a1f1a0;
      if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
        puVar3 = (undefined1 *)*puVar4;
      }
      FUN_144e3f120(puVar3);
      *puVar4 = 0;
      thunk_FUN_1400020a8(puVar4);
    }
    puVar2 = (undefined8 *)*param_1;
    LOCK();
    UNLOCK();
  }
  return (undefined8 *)&DAT_149a1f1a0;
}



// FUNCTION 144e30960 FUN_144e30960 body=244 status=ok
// SIG undefined FUN_144e30960(void)

undefined1 * FUN_144e30960(longlong *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined1 *)*param_1;
  LOCK();
  UNLOCK();
  while( true ) {
    if (puVar2 != (undefined1 *)0x0) {
      return puVar2;
    }
    lVar1 = param_1[-7];
    if (lVar1 == 0) break;
    puVar2 = (undefined1 *)FUN_142864336(1);
    if (puVar2 != (undefined1 *)0x0) {
      FUN_144e31720(puVar2,lVar1);
    }
    puVar3 = &DAT_149a1f1a0;
    if (puVar2 != (undefined1 *)0x0) {
      puVar3 = puVar2;
    }
    LOCK();
    lVar1 = *param_1;
    if (lVar1 == 0) {
      *param_1 = (longlong)puVar3;
    }
    UNLOCK();
    if (lVar1 == 0) {
      return puVar3;
    }
    if ((puVar3 != (undefined1 *)0x0) && (puVar3 != &DAT_149a1f1a0)) {
      puVar2 = &DAT_149a1f1a0;
      if (*(undefined1 **)(puVar3 + 8) != (undefined1 *)0x0) {
        puVar2 = *(undefined1 **)(puVar3 + 8);
      }
      FUN_144e3f120(puVar2);
      *(undefined8 *)(puVar3 + 8) = 0;
      puVar2 = &DAT_149a1f1a0;
      if (*(undefined1 **)(puVar3 + 0x10) != (undefined1 *)0x0) {
        puVar2 = *(undefined1 **)(puVar3 + 0x10);
      }
      FUN_144e3f120(puVar2);
      *(undefined8 *)(puVar3 + 0x10) = 0;
      thunk_FUN_1400020a8(puVar3);
    }
    puVar2 = (undefined1 *)*param_1;
    LOCK();
    UNLOCK();
  }
  return &DAT_149a1f1a0;
}



// FUNCTION 144e30a60 FUN_144e30a60 body=519 status=ok
// SIG undefined FUN_144e30a60(void)

undefined8 * FUN_144e30a60(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  puVar2 = (undefined8 *)*param_1;
  LOCK();
  UNLOCK();
  while( true ) {
    if (puVar2 != (undefined8 *)0x0) {
      return puVar2;
    }
    lVar1 = param_1[-8];
    if (lVar1 == 0) break;
    puVar2 = (undefined8 *)FUN_142864336(1,0x120);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_144e34700(puVar2,lVar1);
    }
    puVar3 = (undefined8 *)&DAT_149a1f1a0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
    }
    LOCK();
    lVar1 = *param_1;
    if (lVar1 == 0) {
      *param_1 = (longlong)puVar3;
    }
    UNLOCK();
    if (lVar1 == 0) {
      return puVar3;
    }
    if ((puVar3 != (undefined8 *)0x0) && (puVar3 != (undefined8 *)&DAT_149a1f1a0)) {
      FUN_144e30540("SANITIZE",puVar3[2],0,1,0,0xffffffff,"end [%p..%p] %u edit requests",puVar3[2],
                    puVar3[3],*(undefined4 *)(puVar3 + 5));
      FUN_144e3f120(puVar3[6]);
      puVar3[6] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      if (puVar3[0x13] != 0) {
        thunk_FUN_1400020a8();
      }
      puVar3[0x12] = 0;
      puVar3[0x13] = 0;
      if (*(uint *)(puVar3 + 0x1f) != 0) {
        plVar5 = (longlong *)(puVar3[0x20] + 0x10);
        uVar4 = (ulonglong)*(uint *)(puVar3 + 0x1f);
        do {
          if (*plVar5 != 0) {
            thunk_FUN_1400020a8();
          }
          plVar5[-1] = 0;
          *plVar5 = 0;
          plVar5 = plVar5 + 5;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (puVar3[0x20] != 0) {
        thunk_FUN_1400020a8();
      }
      puVar3[0x1f] = 0;
      puVar3[0x20] = 0;
      if (*(uint *)(puVar3 + 0x21) != 0) {
        plVar5 = (longlong *)(puVar3[0x22] + 0x10);
        uVar4 = (ulonglong)*(uint *)(puVar3 + 0x21);
        do {
          if (*plVar5 != 0) {
            thunk_FUN_1400020a8();
          }
          plVar5[-1] = 0;
          *plVar5 = 0;
          plVar5 = plVar5 + 5;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (puVar3[0x22] != 0) {
        thunk_FUN_1400020a8();
      }
      puVar3[0x21] = 0;
      puVar3[0x22] = 0;
      FUN_144e3f120(*puVar3);
      *puVar3 = 0;
      thunk_FUN_1400020a8(puVar3);
    }
    puVar2 = (undefined8 *)*param_1;
    LOCK();
    UNLOCK();
  }
  return (undefined8 *)&DAT_149a1f1a0;
}



// FUNCTION 144e30c70 FUN_144e30c70 body=507 status=ok
// SIG undefined FUN_144e30c70(void)

undefined8 * FUN_144e30c70(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  puVar2 = (undefined8 *)*param_1;
  LOCK();
  UNLOCK();
  while( true ) {
    if (puVar2 != (undefined8 *)0x0) {
      return puVar2;
    }
    lVar1 = param_1[-9];
    if (lVar1 == 0) break;
    puVar2 = (undefined8 *)FUN_142864336(1,0xc0);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_144e35d00(puVar2,lVar1);
    }
    puVar3 = (undefined8 *)&DAT_149a1f1a0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
    }
    LOCK();
    lVar1 = *param_1;
    if (lVar1 == 0) {
      *param_1 = (longlong)puVar3;
    }
    UNLOCK();
    if (lVar1 == 0) {
      return puVar3;
    }
    if ((puVar3 != (undefined8 *)0x0) && (puVar3 != (undefined8 *)&DAT_149a1f1a0)) {
      FUN_144e30540("SANITIZE",puVar3[2],0,1,0,0xffffffff,"end [%p..%p] %u edit requests",puVar3[2],
                    puVar3[3],*(undefined4 *)(puVar3 + 5));
      FUN_144e3f120(puVar3[6]);
      puVar3[6] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      if (puVar3[10] != 0) {
        thunk_FUN_1400020a8();
      }
      puVar3[9] = 0;
      puVar3[10] = 0;
      if (*(uint *)(puVar3 + 0x13) != 0) {
        plVar5 = (longlong *)(puVar3[0x14] + 0x10);
        uVar4 = (ulonglong)*(uint *)(puVar3 + 0x13);
        do {
          if (*plVar5 != 0) {
            thunk_FUN_1400020a8();
          }
          plVar5[-1] = 0;
          *plVar5 = 0;
          plVar5 = plVar5 + 5;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (puVar3[0x14] != 0) {
        thunk_FUN_1400020a8();
      }
      puVar3[0x13] = 0;
      puVar3[0x14] = 0;
      if (*(uint *)(puVar3 + 0x15) != 0) {
        plVar5 = (longlong *)(puVar3[0x16] + 0x10);
        uVar4 = (ulonglong)*(uint *)(puVar3 + 0x15);
        do {
          if (*plVar5 != 0) {
            thunk_FUN_1400020a8();
          }
          plVar5[-1] = 0;
          *plVar5 = 0;
          plVar5 = plVar5 + 6;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (puVar3[0x16] != 0) {
        thunk_FUN_1400020a8();
      }
      puVar3[0x15] = 0;
      puVar3[0x16] = 0;
      FUN_144e3f120(*puVar3);
      *puVar3 = 0;
      thunk_FUN_1400020a8(puVar3);
    }
    puVar2 = (undefined8 *)*param_1;
    LOCK();
    UNLOCK();
  }
  return (undefined8 *)&DAT_149a1f1a0;
}



// FUNCTION 144e30e70 FUN_144e30e70 body=238 status=ok
// SIG undefined FUN_144e30e70(void)

longlong FUN_144e30e70(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  lVar2 = *param_1;
  LOCK();
  UNLOCK();
  while( true ) {
    if (lVar2 != 0) {
      return lVar2;
    }
    lVar2 = param_1[-10];
    if (lVar2 == 0) break;
    local_48[0] = 0;
    local_30 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = FUN_144e2d260(lVar2);
    local_14 = 1;
    uVar1 = FUN_144e2d200(lVar2,0x564f5247);
    lVar2 = FUN_144e3aaa0(local_48,uVar1);
    if (lVar2 == 0) {
      lVar2 = FUN_144e3f0f0();
    }
    LOCK();
    lVar3 = *param_1;
    if (lVar3 == 0) {
      *param_1 = lVar2;
    }
    UNLOCK();
    if (lVar3 == 0) {
      return lVar2;
    }
    if ((lVar2 != 0) && (lVar3 = FUN_144e3f0f0(), lVar2 != lVar3)) {
      FUN_144e3f120(lVar2);
    }
    lVar2 = *param_1;
    LOCK();
    UNLOCK();
  }
  lVar2 = FUN_144e3f0f0();
  return lVar2;
}



// FUNCTION 144e30f60 FUN_144e30f60 body=238 status=ok
// SIG undefined FUN_144e30f60(void)

longlong FUN_144e30f60(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  lVar2 = *param_1;
  LOCK();
  UNLOCK();
  while( true ) {
    if (lVar2 != 0) {
      return lVar2;
    }
    lVar2 = param_1[-0xc];
    if (lVar2 == 0) break;
    local_48[0] = 0;
    local_30 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = FUN_144e2d260(lVar2);
    local_14 = 1;
    uVar1 = FUN_144e2d200(lVar2,0x4f532f32);
    lVar2 = FUN_144e3a7c0(local_48,uVar1);
    if (lVar2 == 0) {
      lVar2 = FUN_144e3f0f0();
    }
    LOCK();
    lVar3 = *param_1;
    if (lVar3 == 0) {
      *param_1 = lVar2;
    }
    UNLOCK();
    if (lVar3 == 0) {
      return lVar2;
    }
    if ((lVar2 != 0) && (lVar3 = FUN_144e3f0f0(), lVar2 != lVar3)) {
      FUN_144e3f120(lVar2);
    }
    lVar2 = *param_1;
    LOCK();
    UNLOCK();
  }
  lVar2 = FUN_144e3f0f0();
  return lVar2;
}



// FUNCTION 144e31050 FUN_144e31050 body=245 status=ok
// SIG undefined FUN_144e31050(void)

undefined8 * FUN_144e31050(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)*param_1;
  LOCK();
  UNLOCK();
  while( true ) {
    if (puVar2 != (undefined8 *)0x0) {
      return puVar2;
    }
    lVar1 = param_1[-0x21];
    if (lVar1 == 0) break;
    puVar2 = (undefined8 *)FUN_142864336(1);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_144e38650(puVar2,lVar1);
    }
    puVar4 = (undefined8 *)&DAT_149a1f1a0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar4 = puVar2;
    }
    LOCK();
    lVar1 = *param_1;
    if (lVar1 == 0) {
      *param_1 = (longlong)puVar4;
    }
    UNLOCK();
    if (lVar1 == 0) {
      return puVar4;
    }
    if ((puVar4 != (undefined8 *)0x0) && (puVar4 != (undefined8 *)&DAT_149a1f1a0)) {
      puVar3 = &DAT_149a1f1a0;
      if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
        puVar3 = (undefined1 *)*puVar4;
      }
      FUN_144e3f120(puVar3);
      *puVar4 = 0;
      puVar3 = &DAT_149a1f1a0;
      if ((undefined1 *)puVar4[1] != (undefined1 *)0x0) {
        puVar3 = (undefined1 *)puVar4[1];
      }
      FUN_144e3f120(puVar3);
      puVar4[1] = 0;
      thunk_FUN_1400020a8(puVar4);
    }
    puVar2 = (undefined8 *)*param_1;
    LOCK();
    UNLOCK();
  }
  return (undefined8 *)&DAT_149a1f1a0;
}



// FUNCTION 144e31150 FUN_144e31150 body=310 status=ok
// SIG undefined FUN_144e31150(void)

undefined8 * FUN_144e31150(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  puVar3 = (undefined8 *)*param_1;
  LOCK();
  UNLOCK();
  while( true ) {
    if (puVar3 != (undefined8 *)0x0) {
      return puVar3;
    }
    lVar1 = param_1[-0x22];
    if (lVar1 == 0) break;
    puVar3 = (undefined8 *)FUN_142864336(1);
    if (puVar3 != (undefined8 *)0x0) {
      local_48[0] = 0;
      local_30 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_2c = 0;
      local_28 = 0;
      local_20 = 0;
      local_18 = FUN_144e2d260(lVar1);
      local_14 = 1;
      uVar4 = FUN_144e2d200(lVar1,0x73626978);
      uVar4 = FUN_144e3b2a0(local_48,uVar4);
      *puVar3 = uVar4;
      iVar2 = *(int *)(lVar1 + 0x30);
      if (iVar2 == -1) {
        iVar2 = FUN_144e2c9d0(lVar1);
      }
      *(int *)(puVar3 + 1) = iVar2;
    }
    puVar6 = (undefined8 *)&DAT_149a1f1a0;
    if (puVar3 != (undefined8 *)0x0) {
      puVar6 = puVar3;
    }
    LOCK();
    lVar1 = *param_1;
    if (lVar1 == 0) {
      *param_1 = (longlong)puVar6;
    }
    UNLOCK();
    if (lVar1 == 0) {
      return puVar6;
    }
    if ((puVar6 != (undefined8 *)0x0) && (puVar6 != (undefined8 *)&DAT_149a1f1a0)) {
      puVar5 = &DAT_149a1f1a0;
      if ((undefined1 *)*puVar6 != (undefined1 *)0x0) {
        puVar5 = (undefined1 *)*puVar6;
      }
      FUN_144e3f120(puVar5);
      *puVar6 = 0;
      thunk_FUN_1400020a8(puVar6);
    }
    puVar3 = (undefined8 *)*param_1;
    LOCK();
    UNLOCK();
  }
  return (undefined8 *)&DAT_149a1f1a0;
}



// FUNCTION 144e31290 FUN_144e31290 body=88 status=ok
// SIG undefined FUN_144e31290(void)

longlong FUN_144e31290(longlong param_1,short param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x24);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
  if (iVar1 == 0) {
    iVar1 = FUN_144e2c980();
  }
  lVar3 = (longlong)iVar2 * (longlong)param_2;
  iVar2 = iVar1 / 2;
  if (lVar3 < 0) {
    iVar2 = -iVar2;
  }
  return (iVar2 + lVar3) / (longlong)iVar1;
}



// FUNCTION 144e312f0 FUN_144e312f0 body=401 status=ok
// SIG undefined FUN_144e312f0(void)

bool FUN_144e312f0(longlong param_1,uint param_2,int *param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  uint local_res10 [2];
  
  if ((uint)*(byte *)(param_1 + 3) * 0x1000000 + (uint)*(byte *)(param_1 + 5) * 0x100 +
      (uint)*(byte *)(param_1 + 4) * 0x10000 + (uint)*(byte *)(param_1 + 6) == 0) {
    pbVar4 = &DAT_149a1f1a0;
  }
  else {
    pbVar4 = (byte *)(((ulonglong)CONCAT11(*(byte *)(param_1 + 3),*(byte *)(param_1 + 4)) * 0x100 +
                      (ulonglong)*(byte *)(param_1 + 5)) * 0x100 + param_4 +
                     (ulonglong)*(byte *)(param_1 + 6));
  }
  iVar6 = 0;
  iVar5 = (uint)pbVar4[1] * 0x10000 + (uint)pbVar4[2] * 0x100 + (uint)*pbVar4 * 0x1000000 + -1 +
          (uint)pbVar4[3];
  if (-1 < iVar5) {
    do {
      uVar1 = (uint)(iVar6 + iVar5) >> 1;
      uVar7 = (uint)pbVar4[(ulonglong)uVar1 * 4 + 5] * 0x100 +
              (uint)pbVar4[(ulonglong)uVar1 * 4 + 4] * 0x10000 +
              (uint)pbVar4[(ulonglong)uVar1 * 4 + 6];
      if (param_2 < uVar7) {
        iVar5 = uVar1 - 1;
      }
      else {
        if (param_2 <= pbVar4[(ulonglong)uVar1 * 4 + 7] + uVar7) {
          return (bool)2;
        }
        iVar6 = uVar1 + 1;
      }
    } while (iVar6 <= iVar5);
  }
  if ((uint)*(byte *)(param_1 + 7) * 0x1000000 + (uint)*(byte *)(param_1 + 9) * 0x100 +
      (uint)*(byte *)(param_1 + 8) * 0x10000 + (uint)*(byte *)(param_1 + 10) == 0) {
    puVar3 = &DAT_149a1f1a0;
  }
  else {
    puVar3 = (undefined1 *)
             ((((ulonglong)*(byte *)(param_1 + 8) + (ulonglong)*(byte *)(param_1 + 7) * 0x100) *
               0x100 + (ulonglong)*(byte *)(param_1 + 9)) * 0x100 + param_4 +
             (ulonglong)*(byte *)(param_1 + 10));
  }
  local_res10[0] = param_2;
  lVar2 = FUN_144e31490(puVar3,local_res10,&DAT_149a1f1a0);
  bVar8 = (ushort)((ushort)*(byte *)(lVar2 + 3) * 0x100 + (ushort)*(byte *)(lVar2 + 4)) != 0;
  if (bVar8) {
    *param_3 = (uint)*(byte *)(lVar2 + 3) * 0x100 + (uint)*(byte *)(lVar2 + 4);
  }
  return bVar8;
}



// FUNCTION 144e31490 FUN_144e31490 body=170 status=ok
// SIG undefined FUN_144e31490(void)

byte * FUN_144e31490(byte *param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar2;
  
  iVar5 = 0;
  iVar4 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
          (uint)param_1[3] + -1;
  if (-1 < iVar4) {
    do {
      uVar1 = (uint)(iVar4 + iVar5) >> 1;
      uVar2 = (ulonglong)uVar1;
      uVar3 = (uint)param_1[uVar2 * 5 + 5] * 0x100 + (uint)param_1[uVar2 * 5 + 4] * 0x10000 +
              (uint)param_1[(ulonglong)uVar1 + uVar2 * 4 + 6];
      if (*param_2 < uVar3) {
        iVar4 = uVar1 - 1;
      }
      else {
        if (*param_2 == uVar3) {
          return param_1 + (ulonglong)uVar1 * 5 + 4;
        }
        iVar5 = uVar1 + 1;
      }
    } while (iVar5 <= iVar4);
  }
  return param_3;
}



// FUNCTION 144e31540 FUN_144e31540 body=194 status=ok
// SIG undefined FUN_144e31540(void)

void FUN_144e31540(longlong param_1,undefined4 param_2,uint param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  lVar1 = param_1 + 10;
  iVar6 = 0;
  iVar7 = (uint)*(byte *)(param_1 + 7) * 0x10000 + (uint)*(byte *)(param_1 + 8) * 0x100 +
          (uint)*(byte *)(param_1 + 6) * 0x1000000 + (uint)*(byte *)(param_1 + 9) + -1;
  if (-1 < iVar7) {
    do {
      uVar5 = (uint)(iVar7 + iVar6) >> 1;
      lVar2 = (ulonglong)uVar5 * 0xb;
      uVar4 = (uint)*(byte *)(lVar2 + 1 + lVar1) * 0x100 + (uint)*(byte *)(lVar2 + lVar1) * 0x10000
              + (uint)*(byte *)(lVar2 + 2 + lVar1);
      if (param_3 < uVar4) {
        iVar7 = uVar5 - 1;
      }
      else {
        if (param_3 == uVar4) {
          puVar3 = (undefined1 *)((ulonglong)uVar5 * 0xb + lVar1);
          goto LAB_144e315dc;
        }
        iVar6 = uVar5 + 1;
      }
    } while (iVar6 <= iVar7);
  }
  puVar3 = &DAT_149a1f1a0;
LAB_144e315dc:
  FUN_144e312f0(puVar3,param_2,param_4,param_1);
  return;
}



// FUNCTION 144e31610 FUN_144e31610 body=141 status=ok
// SIG undefined FUN_144e31610(void)

uint FUN_144e31610(longlong param_1,uint param_2,undefined4 *param_3,uint param_4,longlong param_5,
                  uint param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  if (pcVar1 == (code *)0x0) {
    return 0;
  }
  uVar4 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != 0) {
    do {
      cVar3 = (*pcVar1)(uVar2,*param_3,param_5);
      if (cVar3 == '\0') {
        return uVar4;
      }
      param_3 = (undefined4 *)((longlong)param_3 + (ulonglong)param_4);
      param_5 = param_5 + (ulonglong)param_6;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_2);
  }
  return uVar4;
}



// FUNCTION 144e316a0 FUN_144e316a0 body=127 status=ok
// SIG undefined FUN_144e316a0(void)

ulonglong FUN_144e316a0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  
  puVar2 = &DAT_149a1f1a0;
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 8);
  }
  uVar1 = FUN_144e31540(puVar2);
  if ((int)uVar1 != 0) {
    if ((int)uVar1 == 1) {
      return 1;
    }
    uVar1 = 0;
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144e316f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_2,param_4);
      return uVar1;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 144e31720 FUN_144e31720 body=381 status=ok
// SIG undefined FUN_144e31720(void)

void FUN_144e31720(char *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  lVar2 = FUN_144e2c890(param_2 + 0x50);
  puVar4 = &DAT_149a1f1a0;
  if (0x35 < *(uint *)(lVar2 + 0x18)) {
    puVar4 = *(undefined1 **)(lVar2 + 0x10);
  }
  if (((ushort)((ushort)(byte)puVar4[0x32] * 0x100 + (ushort)(byte)puVar4[0x33]) < 2) &&
     ((ushort)((ushort)(byte)puVar4[0x34] * 0x100 + (ushort)(byte)puVar4[0x35]) == 0)) {
    local_48[0] = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    *param_1 = (ushort)((ushort)(byte)puVar4[0x32] * 0x100 + (ushort)(byte)puVar4[0x33]) == 0;
    local_18 = FUN_144e2d260(param_2);
    local_14 = 1;
    uVar3 = FUN_144e2d200(param_2,0x6c6f6361);
    uVar3 = FUN_144e3a600(local_48,uVar3);
    *(undefined8 *)(param_1 + 8) = uVar3;
    local_48[0] = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = FUN_144e2d260(param_2);
    local_14 = 1;
    uVar3 = FUN_144e2d200(param_2,0x676c7966);
    uVar3 = FUN_144e3a6e0(local_48,uVar3);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    puVar4 = &DAT_149a1f1a0;
    if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(param_1 + 8);
    }
    uVar1 = *(uint *)(puVar4 + 0x18) >> (2U - (*param_1 != '\0') & 0x1f);
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    *(uint *)(param_1 + 4) = uVar1 - 1;
  }
  return;
}



// FUNCTION 144e318a0 FUN_144e318a0 body=249 status=ok
// SIG undefined FUN_144e318a0(void)

ulonglong FUN_144e318a0(char *param_1,uint param_2,uint *param_3,uint *param_4)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 *in_RAX;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_2;
  if (param_2 < *(uint *)(param_1 + 4)) {
    puVar5 = *(undefined1 **)(param_1 + 8);
    if (*param_1 == '\0') {
      puVar3 = &DAT_149a1f1a0;
      if (puVar5 != (undefined1 *)0x0) {
        puVar3 = puVar5;
      }
      lVar2 = *(longlong *)(puVar3 + 0x10);
      pbVar1 = (byte *)(lVar2 + uVar6 * 4);
      param_2 = param_2 + 1;
      *param_3 = (uint)pbVar1[1] * 0x10000 + (uint)*(byte *)(lVar2 + 2 + uVar6 * 4) * 0x100 +
                 (uint)*pbVar1 * 0x1000000 + (uint)pbVar1[3];
      uVar4 = (uint)*(byte *)(lVar2 + 1 + (ulonglong)param_2 * 4) * 0x10000 +
              (uint)*(byte *)(lVar2 + 2 + (ulonglong)param_2 * 4) * 0x100 +
              (uint)*(byte *)(lVar2 + (ulonglong)param_2 * 4) * 0x1000000 +
              (uint)*(byte *)(lVar2 + 3 + (ulonglong)param_2 * 4);
    }
    else {
      puVar3 = &DAT_149a1f1a0;
      if (puVar5 != (undefined1 *)0x0) {
        puVar3 = puVar5;
      }
      lVar2 = *(longlong *)(puVar3 + 0x10);
      *param_3 = ((uint)*(byte *)(lVar2 + uVar6 * 2) * 0x100 +
                 (uint)*(byte *)(lVar2 + 1 + uVar6 * 2)) * 2;
      uVar4 = ((uint)*(byte *)(lVar2 + (ulonglong)(param_2 + 1) * 2) * 0x100 +
              (uint)*(byte *)(lVar2 + 1 + (ulonglong)(param_2 + 1) * 2)) * 2;
    }
    in_RAX = (undefined1 *)0x0;
    *param_4 = uVar4;
    if (*param_3 <= uVar4) {
      in_RAX = *(undefined1 **)(param_1 + 0x10);
      puVar5 = &DAT_149a1f1a0;
      if (in_RAX != (undefined1 *)0x0) {
        puVar5 = in_RAX;
      }
      if (uVar4 <= *(uint *)(puVar5 + 0x18)) {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 144e319a0 FUN_144e319a0 body=491 status=ok
// SIG undefined FUN_144e319a0(void)

undefined8 FUN_144e319a0(longlong param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int local_res20 [2];
  uint local_28 [4];
  
  uVar2 = FUN_144e318a0(param_1,param_2,local_28,local_res20);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  uVar1 = local_res20[0] - local_28[0];
  if (9 < uVar1) {
    puVar4 = &DAT_149a1f1a0;
    if (*(undefined1 **)(param_1 + 0x10) != (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(param_1 + 0x10);
    }
    lVar5 = (ulonglong)local_28[0] + *(longlong *)(puVar4 + 0x10);
    lVar3 = 6;
    if ((short)((ushort)*(byte *)(lVar5 + 2) * 0x100 + (ushort)*(byte *)(lVar5 + 3)) <
        (short)((ushort)*(byte *)(lVar5 + 6) * 0x100 + (ushort)*(byte *)(lVar5 + 7))) {
      lVar3 = 2;
    }
    iVar7 = (int)(short)(*(ushort *)(lVar3 + lVar5) * 0x100 + (*(ushort *)(lVar3 + lVar5) >> 8));
    *param_3 = iVar7;
    lVar3 = 8;
    if ((short)((ushort)*(byte *)(lVar5 + 9) + (ushort)*(byte *)(lVar5 + 8) * 0x100) <
        (short)((ushort)*(byte *)(lVar5 + 4) * 0x100 + (ushort)*(byte *)(lVar5 + 5))) {
      lVar3 = 4;
    }
    iVar6 = (int)(short)(*(ushort *)(lVar3 + lVar5) * 0x100 + (*(ushort *)(lVar3 + lVar5) >> 8));
    param_3[1] = iVar6;
    uVar1 = 6;
    if ((short)((ushort)*(byte *)(lVar5 + 6) * 0x100 + (ushort)*(byte *)(lVar5 + 7)) <
        (short)((ushort)*(byte *)(lVar5 + 2) * 0x100 + (ushort)*(byte *)(lVar5 + 3))) {
      uVar1 = 2;
    }
    param_3[2] = (short)((*(ushort *)((ulonglong)uVar1 + lVar5) >> 8) +
                        *(ushort *)((ulonglong)uVar1 + lVar5) * 0x100) - iVar7;
    uVar1 = 8;
    if ((short)((ushort)*(byte *)(lVar5 + 4) * 0x100 + (ushort)*(byte *)(lVar5 + 5)) <
        (short)((ushort)*(byte *)(lVar5 + 8) * 0x100 + (ushort)*(byte *)(lVar5 + 9))) {
      uVar1 = 4;
    }
    uVar1 = (short)((*(ushort *)((ulonglong)uVar1 + lVar5) >> 8) +
                   *(ushort *)((ulonglong)uVar1 + lVar5) * 0x100) - iVar6;
    param_3[3] = uVar1;
  }
  return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
}



// FUNCTION 144e31b90 FUN_144e31b90 body=214 status=ok
// SIG undefined FUN_144e31b90(void)

float FUN_144e31b90(byte *param_1,int param_2)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  
  sVar5 = (ushort)*param_1 * 0x100 + (ushort)param_1[1];
  iVar6 = (int)sVar5;
  sVar2 = (ushort)param_1[2] * 0x100 + (ushort)param_1[3];
  iVar4 = (int)sVar2;
  sVar3 = (ushort)param_1[4] * 0x100 + (ushort)param_1[5];
  iVar1 = (int)sVar3;
  if ((((iVar6 <= iVar4) && (iVar4 <= iVar1)) && ((-1 < sVar5 || (sVar3 < 1)))) &&
     ((sVar2 != 0 && (param_2 != iVar4)))) {
    if ((iVar6 < param_2) && (param_2 < iVar1)) {
      if (param_2 < iVar4) {
        return (float)(param_2 - iVar6) / (float)(iVar4 - iVar6);
      }
      return (float)(iVar1 - param_2) / (float)(iVar1 - iVar4);
    }
    return 0.0;
  }
  return 1.0;
}



// FUNCTION 144e31c70 FUN_144e31c70 body=220 status=ok
// SIG undefined FUN_144e31c70(void)

float FUN_144e31c70(byte *param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  if ((uint)param_1[2] * 0x100 + (uint)param_1[3] <= param_2) {
    return 0.0;
  }
  uVar3 = 0;
  uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  fVar6 = 1.0;
  if (uVar4 != 0) {
    do {
      if ((uint)uVar3 < param_4) {
        uVar1 = *param_3;
      }
      else {
        uVar1 = 0;
      }
      fVar5 = (float)FUN_144e31b90(param_1 + uVar3 * 6 + 4 + (ulonglong)(uVar4 * param_2) * 6,uVar1)
      ;
      if (fVar5 == 0.0) {
        return 0.0;
      }
      uVar2 = (uint)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      fVar6 = fVar6 * fVar5;
      param_3 = param_3 + 1;
    } while (uVar2 < uVar4);
  }
  return fVar6;
}



// FUNCTION 144e31d50 FUN_144e31d50 body=127 status=ok
// SIG undefined FUN_144e31d50(void)

undefined8 FUN_144e31d50(byte *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 != '\0') {
    uVar2 = ((uint)param_1[2] * 0x100 + (uint)param_1[3]) *
            ((uint)*param_1 * 0x100 + (uint)param_1[1]);
    if (uVar2 < 0x2aaaaaaa) {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 4,uVar2 * 6);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144e31dd0 FUN_144e31dd0 body=442 status=ok
// SIG undefined FUN_144e31dd0(void)

void FUN_144e31dd0(byte *param_1,uint param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  byte *pbVar5;
  
  if (param_2 < (uint)*param_1 * 0x100 + (uint)param_1[1]) {
    uVar1 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
    uVar4 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
    uVar3 = 0;
    if (uVar4 != 0) {
      pbVar5 = param_1 + 6;
      uVar3 = (ulonglong)uVar4;
      uVar2 = (ulonglong)uVar4;
      do {
        FUN_144e31c70(param_5,(uint)pbVar5[1] + (uint)*pbVar5 * 0x100,param_3,param_4);
        pbVar5 = pbVar5 + 2;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if ((uint)uVar3 < uVar1) {
      param_1 = param_1 + uVar3 * 2 + 6;
      uVar3 = (ulonglong)(uVar1 - (uint)uVar3);
      do {
        FUN_144e31c70(param_5,(uint)param_1[1] + (uint)*param_1 * 0x100,param_3,param_4);
        param_1 = param_1 + 2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return;
  }
  return;
}



// FUNCTION 144e31f90 FUN_144e31f90 body=301 status=ok
// SIG undefined FUN_144e31f90(void)

undefined8 FUN_144e31f90(byte *param_1,undefined8 param_2)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  cVar2 = FUN_144e2c5c0(param_2,param_1,6);
  if (cVar2 != '\0') {
    pbVar1 = param_1 + 4;
    cVar2 = FUN_144e2c5c0(param_2,pbVar1,2);
    if (cVar2 != '\0') {
      cVar2 = FUN_144e2c5c0(param_2,param_1 + 6,((uint)*pbVar1 * 0x100 + (uint)param_1[5]) * 2);
      if ((cVar2 != '\0') &&
         ((ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) <=
          (ushort)((ushort)*pbVar1 * 0x100 + (ushort)param_1[5]))) {
        uVar3 = ((uint)param_1[2] + (uint)*pbVar1) * 0x100 + (uint)param_1[3] + (uint)param_1[5];
        uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
        if ((uVar3 == 0) || (uVar4 < (uint)(0xffffffff / (ulonglong)uVar3))) {
          cVar2 = FUN_144e2c5c0(param_2,pbVar1 + ((ulonglong)*pbVar1 * 0x100 +
                                                 (ulonglong)param_1[5] + 1) * 2,uVar3 * uVar4);
          if (cVar2 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 144e320c0 FUN_144e320c0 body=288 status=ok
// SIG undefined FUN_144e320c0(void)

undefined8
FUN_144e320c0(longlong param_1,uint param_2,undefined4 param_3,undefined8 param_4,undefined4 param_5
             )

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  if ((uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7) <= param_2) {
    return 0;
  }
  puVar2 = &DAT_149a1f1a0;
  if (param_2 < (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 7)) {
    pbVar1 = (byte *)(param_1 + ((ulonglong)param_2 + 2) * 4);
  }
  else {
    pbVar1 = &DAT_149a1f1a0;
  }
  if ((uint)*pbVar1 * 0x1000000 + (uint)pbVar1[2] * 0x100 + (uint)pbVar1[1] * 0x10000 +
      (uint)pbVar1[3] != 0) {
    puVar2 = (undefined1 *)
             ((((ulonglong)pbVar1[1] + (ulonglong)*pbVar1 * 0x100) * 0x100 + (ulonglong)pbVar1[2]) *
              0x100 + param_1 + (ulonglong)pbVar1[3]);
  }
  uVar3 = FUN_144e31dd0(puVar2,param_3,param_4,param_5);
  return uVar3;
}



// FUNCTION 144e321e0 FUN_144e321e0 body=133 status=ok
// SIG undefined FUN_144e321e0(void)

undefined8 FUN_144e321e0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,8);
  if (cVar1 != '\0') {
    if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) {
      cVar1 = FUN_144e32310(param_1 + 2,param_2,param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_144e32530(param_1 + 6,param_2,param_1);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 144e32270 FUN_144e32270 body=148 status=ok
// SIG undefined FUN_144e32270(void)

bool FUN_144e32270(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 == '\0') {
    return false;
  }
  if ((uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
      (uint)param_1[3] == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3);
  return cVar1 != '\0';
}



// FUNCTION 144e32310 FUN_144e32310 body=177 status=ok
// SIG undefined FUN_144e32310(void)

undefined8 FUN_144e32310(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e32270();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((uint)*param_1 * 0x1000000 + (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 +
       (uint)param_1[3] != 0) &&
     (cVar1 = FUN_144e31d50((((ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100) * 0x100 +
                            (ulonglong)param_1[2]) * 0x100 + param_3 + (ulonglong)param_1[3],param_2
                           ), cVar1 == '\0')) {
    cVar1 = FUN_144e2d280(param_2,param_1,4);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return 1;
}



// FUNCTION 144e323d0 FUN_144e323d0 body=148 status=ok
// SIG undefined FUN_144e323d0(void)

bool FUN_144e323d0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 == '\0') {
    return false;
  }
  if ((uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
      (uint)param_1[3] == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3);
  return cVar1 != '\0';
}



// FUNCTION 144e32470 FUN_144e32470 body=177 status=ok
// SIG undefined FUN_144e32470(void)

undefined8 FUN_144e32470(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e323d0();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((uint)*param_1 * 0x1000000 + (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 +
       (uint)param_1[3] != 0) &&
     (cVar1 = FUN_144e31f90((((ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100) * 0x100 +
                            (ulonglong)param_1[2]) * 0x100 + param_3 + (ulonglong)param_1[3],param_2
                           ), cVar1 == '\0')) {
    cVar1 = FUN_144e2d280(param_2,param_1,4);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return 1;
}



// FUNCTION 144e32530 FUN_144e32530 body=211 status=ok
// SIG undefined FUN_144e32530(void)

undefined8 FUN_144e32530(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if ((cVar1 != '\0') &&
     (cVar1 = FUN_144e2c5c0(param_2,param_1 + 2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 4),
     cVar1 != '\0')) {
    uVar3 = 0;
    uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (uVar4 != 0) {
      do {
        cVar1 = FUN_144e32470(param_1 + uVar3 * 4 + 2,param_2,param_3);
        if (cVar1 == '\0') {
          return 0;
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < uVar4);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 144e32610 FUN_144e32610 body=22 status=ok
// SIG undefined FUN_144e32610(void)

ulonglong FUN_144e32610(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x18);
    in_RAX = (ulonglong)uVar1;
    if (param_2 + uVar1 <= *(uint *)(param_1 + 0x10)) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 144e32630 FUN_144e32630 body=431 status=ok
// SIG undefined FUN_144e32630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144e32630(uint param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  double *pdVar5;
  uint uVar6;
  short sVar7;
  byte *pbVar8;
  
  if (param_1 == 0x1c) {
    uVar6 = *(uint *)(param_2 + 0x18);
    pbVar8 = &DAT_149a1f1a0;
    if (uVar6 < *(uint *)(param_2 + 0x10)) {
      pbVar4 = (byte *)((ulonglong)uVar6 + *(longlong *)(param_2 + 8));
    }
    else {
      *(undefined1 *)(param_2 + 0x1c) = 1;
      pbVar4 = &DAT_149a1f1a0;
    }
    if (uVar6 + 1 < *(uint *)(param_2 + 0x10)) {
      pbVar8 = (byte *)((ulonglong)(uVar6 + 1) + *(longlong *)(param_2 + 8));
    }
    else {
      *(undefined1 *)(param_2 + 0x1c) = 1;
    }
    bVar1 = *pbVar4;
    uVar6 = *(uint *)(param_2 + 0x24);
    bVar2 = *pbVar8;
    if (uVar6 < *(uint *)(param_2 + 0x28)) {
      *(uint *)(param_2 + 0x24) = uVar6 + 1;
      if (*(uint *)(param_2 + 0x28) <= uVar6) goto LAB_144e32797;
      pdVar5 = (double *)(*(longlong *)(param_2 + 0x30) + (ulonglong)uVar6 * 8);
    }
    else {
      *(undefined1 *)(param_2 + 0x20) = 1;
LAB_144e32797:
      _DAT_14c793f60 = 0;
      pdVar5 = (double *)&DAT_14c793f60;
    }
    *pdVar5 = (double)(int)((int)(short)((ushort)bVar1 << 8) | (uint)bVar2);
    if (*(char *)(param_2 + 0x1c) == '\0') {
      uVar6 = *(uint *)(param_2 + 0x10);
      if (*(uint *)(param_2 + 0x18) <= uVar6) {
        uVar3 = *(uint *)(param_2 + 0x18) + 2;
        goto LAB_144e327cb;
      }
    }
  }
  else {
    if (param_1 < 0xf7) {
LAB_144e32700:
      if (param_1 - 0x20 < 0xd7) {
        FUN_144e32d50(param_2 + 0x20,param_1 - 0x8b);
        return;
      }
      *(undefined4 *)(param_2 + 0x24) = 0;
      *(undefined1 *)(param_2 + 0x38) = 1;
      return;
    }
    if (param_1 < 0xfb) {
      if (*(uint *)(param_2 + 0x18) < *(uint *)(param_2 + 0x10)) {
        pbVar8 = (byte *)((ulonglong)*(uint *)(param_2 + 0x18) + *(longlong *)(param_2 + 8));
      }
      else {
        *(undefined1 *)(param_2 + 0x1c) = 1;
        pbVar8 = &DAT_149a1f1a0;
      }
      sVar7 = (short)param_1 * 0x100 + (ushort)*pbVar8 + 0x96c;
    }
    else {
      if (0xfe < param_1) goto LAB_144e32700;
      if (*(uint *)(param_2 + 0x18) < *(uint *)(param_2 + 0x10)) {
        pbVar8 = (byte *)((ulonglong)*(uint *)(param_2 + 0x18) + *(longlong *)(param_2 + 8));
      }
      else {
        *(undefined1 *)(param_2 + 0x1c) = 1;
        pbVar8 = &DAT_149a1f1a0;
      }
      sVar7 = ((short)param_1 * -0x100 + -0x56c) - (ushort)*pbVar8;
    }
    FUN_144e32d50(param_2 + 0x20,(int)sVar7);
    if (*(char *)(param_2 + 0x1c) == '\0') {
      uVar6 = *(uint *)(param_2 + 0x10);
      if (*(uint *)(param_2 + 0x18) <= uVar6) {
        uVar3 = *(uint *)(param_2 + 0x18) + 1;
LAB_144e327cb:
        if (uVar3 <= uVar6) goto LAB_144e327d6;
      }
    }
  }
  *(undefined1 *)(param_2 + 0x1c) = 1;
  uVar3 = *(uint *)(param_2 + 0x10);
LAB_144e327d6:
  *(uint *)(param_2 + 0x18) = uVar3;
  return;
}



// FUNCTION 144e327e0 FUN_144e327e0 body=126 status=ok
// SIG undefined FUN_144e327e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_144e327e0(int param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  if (param_1 == 0x1d) {
    puVar3 = (undefined4 *)FUN_144e32e00(param_2 + 0x20);
    return puVar3;
  }
  if (param_1 != 0x1e) {
    puVar3 = (undefined4 *)FUN_144e32630();
    return puVar3;
  }
  uVar4 = FUN_144e32860(param_2);
  uVar1 = *(uint *)(param_2 + 0x24);
  if (uVar1 < *(uint *)(param_2 + 0x28)) {
    *(uint *)(param_2 + 0x24) = uVar1 + 1;
    if (uVar1 < *(uint *)(param_2 + 0x28)) {
      lVar2 = *(longlong *)(param_2 + 0x30);
      *(undefined8 *)(lVar2 + (ulonglong)uVar1 * 8) = uVar4;
      return (undefined4 *)(lVar2 + (ulonglong)uVar1 * 8);
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x20) = 1;
  }
  _DAT_14c793f60 = uVar4;
  return &DAT_14c793f60;
}



// FUNCTION 144e32860 FUN_144e32860 body=693 status=ok
// SIG undefined FUN_144e32860(void)

void FUN_144e32860(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  
  uVar8 = 0;
  bVar2 = false;
  bVar11 = 0;
  uVar9 = uVar8;
  uVar10 = uVar8;
  uVar12 = uVar8;
  uVar14 = uVar8;
LAB_144e328d0:
  do {
    if ((uVar8 & 1) == 0) {
      cVar3 = FUN_144e32610(param_1,1);
      if (cVar3 == '\0') {
switchD_144e32964_caseD_d:
        *(undefined1 *)(param_1 + 0x1c) = 1;
        return;
      }
      uVar5 = *(uint *)(param_1 + 0x18);
      uVar1 = *(uint *)(param_1 + 0x10);
      if (uVar5 < uVar1) {
        pbVar4 = (byte *)((ulonglong)uVar5 + *(longlong *)(param_1 + 8));
      }
      else {
        *(undefined1 *)(param_1 + 0x1c) = 1;
        pbVar4 = &DAT_149a1f1a0;
      }
      bVar11 = *pbVar4;
      if (((*(char *)(param_1 + 0x1c) == '\0') && (uVar5 <= uVar1)) && (uVar5 + 1 <= uVar1)) {
        *(uint *)(param_1 + 0x18) = uVar5 + 1;
      }
      else {
        *(uint *)(param_1 + 0x18) = uVar1;
        *(undefined1 *)(param_1 + 0x1c) = 1;
      }
      bVar6 = bVar11 >> 4;
    }
    else {
      bVar6 = bVar11 & 0xf;
    }
    iVar7 = (int)uVar8;
    iVar13 = (int)uVar14;
    switch(bVar6) {
    case 10:
      if (iVar13 != 0) goto switchD_144e32964_caseD_d;
      uVar14 = 1;
      uVar8 = (ulonglong)(iVar7 + 1);
      break;
    case 0xc:
    case 0xb:
      if (iVar13 == 2) goto switchD_144e32964_caseD_d;
      uVar14 = 2;
      uVar8 = (ulonglong)(iVar7 + 1);
      break;
    case 0xd:
      goto switchD_144e32964_caseD_d;
    case 0xe:
      if (iVar7 != 0) goto switchD_144e32964_caseD_d;
      uVar8 = 1;
      break;
    case 0xf:
      if ((int)uVar12 != 0) {
        pow(10.0,(double)uVar12);
      }
      if (bVar2) {
        return;
      }
      if ((int)uVar9 == 0) {
        return;
      }
      pow(10.0,(double)uVar9);
      return;
    default:
      goto LAB_144e329a9;
    }
  } while( true );
LAB_144e329a9:
  if (iVar13 == 1) {
    if (uVar10 < 0x199999999999a) {
      uVar12 = (ulonglong)((int)uVar12 + 1);
      uVar10 = (ulonglong)bVar6 + uVar10 * 10;
    }
    uVar8 = (ulonglong)(iVar7 + 1);
  }
  else if (iVar13 == 2) {
    uVar5 = (uint)bVar6 + (int)uVar9 * 10;
    if (uVar5 < 0x800) {
      uVar9 = (ulonglong)uVar5;
      uVar8 = (ulonglong)(iVar7 + 1);
    }
    else {
      bVar2 = true;
      uVar8 = (ulonglong)(iVar7 + 1);
    }
  }
  else {
    uVar8 = (ulonglong)(iVar7 + 1);
  }
  goto LAB_144e328d0;
}



// FUNCTION 144e32b30 FUN_144e32b30 body=30 status=ok
// SIG undefined FUN_144e32b30(void)

undefined1 FUN_144e32b30(longlong param_1)

{
  if ((((*(char *)(param_1 + 0x38) == '\0') && (*(char *)(param_1 + 0x1c) == '\0')) &&
      (*(char *)(param_1 + 0x20) == '\0')) && (-1 < *(int *)(param_1 + 0x2c))) {
    return 0;
  }
  return 1;
}



// FUNCTION 144e32b50 FUN_144e32b50 body=193 status=ok
// SIG undefined FUN_144e32b50(void)

uint FUN_144e32b50(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 0x10);
    if (uVar2 + 1 <= uVar1) {
      pbVar5 = &DAT_149a1f1a0;
      if (uVar2 < uVar1) {
        pbVar4 = (byte *)((ulonglong)uVar2 + *(longlong *)(param_1 + 8));
      }
      else {
        *(undefined1 *)(param_1 + 0x1c) = 1;
        pbVar4 = &DAT_149a1f1a0;
      }
      uVar2 = (uint)*pbVar4;
      if (*pbVar4 != 0xc) {
LAB_144e32be3:
        if (((*(char *)(param_1 + 0x1c) == '\0') && (*(uint *)(param_1 + 0x18) <= uVar1)) &&
           (uVar3 = *(uint *)(param_1 + 0x18) + 1, uVar3 <= uVar1)) {
          *(uint *)(param_1 + 0x18) = uVar3;
          return uVar2;
        }
        *(uint *)(param_1 + 0x18) = uVar1;
        *(undefined1 *)(param_1 + 0x1c) = 1;
        return uVar2;
      }
      if (*(char *)(param_1 + 0x1c) == '\0') {
        uVar2 = *(int *)(param_1 + 0x18) + 1;
        if (uVar2 <= uVar1) {
          if (uVar2 < uVar1) {
            pbVar5 = (byte *)((ulonglong)uVar2 + *(longlong *)(param_1 + 8));
          }
          else {
            *(undefined1 *)(param_1 + 0x1c) = 1;
          }
          uVar2 = *pbVar5 + 0x100;
          if (((*(char *)(param_1 + 0x1c) == '\0') && (*(uint *)(param_1 + 0x18) <= uVar1)) &&
             (uVar3 = *(uint *)(param_1 + 0x18) + 1, uVar3 <= uVar1)) {
            *(uint *)(param_1 + 0x18) = uVar3;
          }
          else {
            *(uint *)(param_1 + 0x18) = uVar1;
            *(undefined1 *)(param_1 + 0x1c) = 1;
          }
          goto LAB_144e32be3;
        }
      }
    }
  }
  return 0xffff;
}



// FUNCTION 144e32c20 FUN_144e32c20 body=156 status=ok
// SIG undefined FUN_144e32c20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144e32c20(undefined1 *param_1)

{
  uint *puVar1;
  char cVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar1 = (uint *)(param_1 + 8);
  *param_1 = 0;
  uVar5 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar1[0] = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  cVar2 = FUN_144e32cc0(puVar1);
  if (cVar2 != '\0') {
    uVar4 = *puVar1;
    if (uVar4 < 0x201) {
      memset((void *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4 * 8),0,
             (ulonglong)(0x201 - uVar4) << 3);
    }
    *puVar1 = 0x201;
  }
  if (*puVar1 != 0) {
    if (*puVar1 != 0) goto LAB_144e32c9e;
    _DAT_14c793f60 = 0;
    puVar3 = (undefined8 *)&DAT_14c793f60;
    while( true ) {
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      *puVar3 = 0;
      if (*puVar1 <= uVar4) break;
LAB_144e32c9e:
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar5 * 8);
    }
  }
  return;
}



// FUNCTION 144e32cc0 FUN_144e32cc0 body=137 status=ok
// SIG undefined FUN_144e32cc0(void)

undefined8 FUN_144e32cc0(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((int)uVar1 < 0) {
    return 0;
  }
  uVar3 = uVar1;
  if (uVar1 < param_2) {
    do {
      uVar3 = uVar3 + 8 + (uVar3 >> 1);
    } while (uVar3 <= param_2);
    if ((((-1 < (int)uVar3) && (uVar1 <= uVar3)) && (uVar3 < 0x1fffffff)) &&
       (lVar2 = FUN_14286436b(*(undefined8 *)(param_1 + 8),(ulonglong)uVar3 << 3), lVar2 != 0)) {
      *(longlong *)(param_1 + 8) = lVar2;
      *(uint *)(param_1 + 4) = uVar3;
      return 1;
    }
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    return 0;
  }
  return 1;
}



// FUNCTION 144e32d50 FUN_144e32d50 body=84 status=ok
// SIG undefined FUN_144e32d50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144e32d50(undefined1 *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 < *(uint *)(param_1 + 8)) {
    *(uint *)(param_1 + 4) = uVar1 + 1;
    if (uVar1 < *(uint *)(param_1 + 8)) {
      *(double *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar1 * 8) = (double)param_2;
      return;
    }
  }
  else {
    *param_1 = 1;
  }
  _DAT_14c793f60 = (double)param_2;
  return;
}



// FUNCTION 144e32db0 FUN_144e32db0 body=75 status=ok
// SIG undefined FUN_144e32db0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_144e32db0(undefined1 *param_1)

{
  uint uVar1;
  int iVar2;
  double *pdVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    *param_1 = 1;
  }
  else {
    uVar1 = *(int *)(param_1 + 4) - 1;
    *(uint *)(param_1 + 4) = uVar1;
    if (uVar1 < *(uint *)(param_1 + 8)) {
      pdVar3 = (double *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar1 * 8);
      goto LAB_144e32de8;
    }
  }
  _DAT_14c793f60 = 0;
  pdVar3 = (double *)&DAT_14c793f60;
LAB_144e32de8:
  iVar4 = (int)*pdVar3;
  if (iVar4 < 0) {
    *param_1 = 1;
  }
  iVar2 = 0;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  return iVar2;
}



// FUNCTION 144e32e00 FUN_144e32e00 body=254 status=ok
// SIG undefined FUN_144e32e00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144e32e00(undefined1 *param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  double *pdVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  
  uVar6 = *(uint *)(param_2 + 0x18);
  puVar9 = &DAT_149a1f1a0;
  uVar5 = *(uint *)(param_2 + 0x10);
  if (uVar6 < uVar5) {
    puVar10 = (undefined1 *)((ulonglong)uVar6 + *(longlong *)(param_2 + 8));
  }
  else {
    *(undefined1 *)(param_2 + 0x1c) = 1;
    puVar10 = &DAT_149a1f1a0;
  }
  if (uVar6 + 1 < uVar5) {
    puVar8 = (undefined1 *)((ulonglong)(uVar6 + 1) + *(longlong *)(param_2 + 8));
  }
  else {
    *(undefined1 *)(param_2 + 0x1c) = 1;
    puVar8 = &DAT_149a1f1a0;
  }
  if (uVar6 + 2 < uVar5) {
    puVar11 = (undefined1 *)((ulonglong)(uVar6 + 2) + *(longlong *)(param_2 + 8));
  }
  else {
    *(undefined1 *)(param_2 + 0x1c) = 1;
    puVar11 = &DAT_149a1f1a0;
  }
  if (uVar6 + 3 < uVar5) {
    puVar9 = (undefined1 *)((ulonglong)(uVar6 + 3) + *(longlong *)(param_2 + 8));
  }
  else {
    *(undefined1 *)(param_2 + 0x1c) = 1;
  }
  uVar1 = *puVar10;
  uVar2 = *puVar8;
  uVar6 = *(uint *)(param_1 + 4);
  uVar3 = *puVar11;
  uVar4 = *puVar9;
  if (uVar6 < *(uint *)(param_1 + 8)) {
    *(uint *)(param_1 + 4) = uVar6 + 1;
    if (*(uint *)(param_1 + 8) <= uVar6) goto LAB_144e32eb5;
    pdVar7 = (double *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar6 * 8);
  }
  else {
    *param_1 = 1;
LAB_144e32eb5:
    _DAT_14c793f60 = 0;
    pdVar7 = (double *)&DAT_14c793f60;
  }
  *pdVar7 = (double)CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
  if (*(char *)(param_2 + 0x1c) == '\0') {
    if ((*(uint *)(param_2 + 0x18) <= *(uint *)(param_2 + 0x10)) &&
       (uVar6 = *(uint *)(param_2 + 0x18) + 4, uVar6 <= *(uint *)(param_2 + 0x10)))
    goto LAB_144e32ef5;
  }
  uVar6 = *(uint *)(param_2 + 0x10);
  *(undefined1 *)(param_2 + 0x1c) = 1;
LAB_144e32ef5:
  *(uint *)(param_2 + 0x18) = uVar6;
  return;
}



// FUNCTION 144e32f00 FUN_144e32f00 body=323 status=ok
// SIG undefined FUN_144e32f00(void)

undefined1 FUN_144e32f00(longlong param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  int iVar5;
  
  cVar2 = FUN_144e2c5c0(param_2,param_1,1);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar4 = 0;
  if (param_2[0xc] != 0) {
    do {
      iVar5 = (int)uVar4;
      uVar4 = uVar4 + param_1;
      if ((((uVar4 < *(ulonglong *)(param_2 + 2)) || (*(ulonglong *)(param_2 + 4) < uVar4)) ||
          (param_2[4] == (int)uVar4)) || (iVar1 = param_2[6], param_2[6] = iVar1 + -1, iVar1 < 1)) {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
      pcVar3 = "OUT-OF-RANGE";
      if (cVar2 != '\0') {
        pcVar3 = "OK";
      }
      FUN_144e30540("SANITIZE",uVar4,0,1,*param_2 + 1,0,
                    "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s",uVar4,uVar4 + 1,1,
                    *(ulonglong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
      if (cVar2 == '\0') {
        return 0;
      }
      uVar4 = (ulonglong)(iVar5 + 1U);
    } while (iVar5 + 1U < (uint)param_2[0xc]);
  }
  return 1;
}



// FUNCTION 144e33050 FUN_144e33050 body=110 status=ok
// SIG undefined FUN_144e33050(void)

void FUN_144e33050(char *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,1);
  if ((cVar1 != '\0') && (*param_1 == '\0')) {
    FUN_144e32f00(param_1 + 1,param_2,param_3);
    return;
  }
  FUN_144e330c0(param_1 + 1,param_2,param_3);
  return;
}



// FUNCTION 144e330c0 FUN_144e330c0 body=463 status=ok
// SIG undefined FUN_144e330c0(void)

ulonglong FUN_144e330c0(ushort *param_1,longlong param_2,undefined4 param_3)

{
  ushort uVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  ushort *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte bStackX_21;
  
  uVar3 = FUN_144e2c5c0(param_2,param_1,2);
  if (((char)uVar3 != '\0') &&
     (uVar3 = FUN_144e3a530(param_1,param_2,0,param_3), (char)uVar3 != '\0')) {
    uVar1 = *param_1;
    uVar3 = (ulonglong)uVar1;
    bVar2 = (byte)uVar1;
    bStackX_21 = (byte)(uVar1 >> 8);
    if ((ushort)(uVar1 * 0x100 + (ushort)bStackX_21) != 0) {
      pbVar10 = &DAT_149a1f1a0;
      puVar8 = (ushort *)&DAT_149a1f1a0;
      uVar7 = (uint)(byte)*param_1 * 0x100 + (uint)*(byte *)((longlong)param_1 + 1);
      if (uVar7 != 0) {
        puVar8 = param_1 + 1;
      }
      if ((ushort)((ushort)(byte)*puVar8 * 0x100 + (ushort)*(byte *)((longlong)puVar8 + 1)) == 0) {
        uVar4 = 1;
        if (1 < (uint)bVar2 * 0x100 + (uint)bStackX_21) {
          do {
            uVar5 = uVar4 - 1;
            if (uVar5 < uVar7) {
              pbVar6 = (byte *)((longlong)param_1 + (ulonglong)uVar5 + (ulonglong)uVar5 * 2 + 2);
            }
            else {
              pbVar6 = &DAT_149a1f1a0;
            }
            if (uVar4 < uVar7) {
              pbVar9 = (byte *)((longlong)param_1 + (ulonglong)uVar4 * 3 + 2);
            }
            else {
              pbVar9 = &DAT_149a1f1a0;
            }
            if ((ushort)((ushort)*pbVar9 * 0x100 + (ushort)pbVar9[1]) <=
                (ushort)((ushort)*pbVar6 * 0x100 + (ushort)pbVar6[1])) goto LAB_144e3327a;
            uVar4 = uVar4 + 1;
          } while (uVar4 < (uint)bVar2 * 0x100 + (uint)bStackX_21);
        }
        uVar4 = (bStackX_21 - 1) + (uint)bVar2 * 0x100;
        if (uVar4 < uVar7) {
          pbVar10 = (byte *)((longlong)param_1 + (ulonglong)uVar4 + (ulonglong)uVar4 * 2 + 2);
        }
        uVar3 = FUN_144e2c5c0(param_2,pbVar10 + 3,2);
        if ((char)uVar3 != '\0') {
          pbVar10 = (byte *)FUN_144e33290(param_1);
          uVar3 = 0;
          if ((uint)*pbVar10 * 0x100 + (uint)pbVar10[1] == *(int *)(param_2 + 0x30)) {
            return 1;
          }
        }
LAB_144e3327a:
        return uVar3 & 0xffffffffffffff00;
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 144e33290 FUN_144e33290 body=68 status=ok
// SIG undefined FUN_144e33290(void)

byte * FUN_144e33290(byte *param_1)

{
  uint uVar1;
  byte bStackX_9;
  
  bStackX_9 = (byte)((ushort)*(undefined2 *)param_1 >> 8);
  uVar1 = (bStackX_9 - 1) + (uint)(byte)*(undefined2 *)param_1 * 0x100;
  if ((uint)*param_1 * 0x100 + (uint)param_1[1] <= uVar1) {
    return &DAT_149a1f1a3;
  }
  return param_1 + (ulonglong)uVar1 * 3 + 5;
}



// FUNCTION 144e332e0 FUN_144e332e0 body=136 status=ok
// SIG undefined FUN_144e332e0(void)

bool FUN_144e332e0(longlong param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 1;
  FUN_144e30540("SANITIZE",param_1,0,1,*param_2 + 1,0,
                "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s",param_1,param_1,0,
                *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4),&DAT_14b40a962);
  cVar1 = FUN_144e2c5c0(param_2,param_1 + (ulonglong)(param_3 - 1) * 2,iVar2 + 1);
  return cVar1 != '\0';
}



// FUNCTION 144e33370 FUN_144e33370 body=143 status=ok
// SIG undefined FUN_144e33370(void)

ulonglong FUN_144e33370(char *param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_144e2c5c0(param_2,param_1,1);
  if ((char)uVar2 != '\0') {
    cVar1 = *param_1;
    uVar2 = 0;
    if (cVar1 == '\0') {
      uVar2 = FUN_144e332e0(param_1 + 1,param_2,*(undefined4 *)(param_2 + 0x30));
      return uVar2;
    }
    if (cVar1 == '\x01') {
      uVar2 = FUN_144e33400(param_1 + 1,param_2,*(undefined4 *)(param_2 + 0x30));
      return uVar2;
    }
    if (cVar1 == '\x02') {
      uVar2 = FUN_144e33570(param_1 + 1,param_2,*(undefined4 *)(param_2 + 0x30));
      return uVar2;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 144e33400 FUN_144e33400 body=360 status=ok
// SIG undefined FUN_144e33400(void)

undefined8 FUN_144e33400(longlong param_1,int *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar5 = 0;
  FUN_144e30540("SANITIZE",param_1,0,1,*param_2 + 1,0,
                "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s",param_1,param_1,0,
                *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4),&DAT_14b40a962);
  uVar6 = param_3 - 1;
  while( true ) {
    if (uVar6 == 0) {
      return 1;
    }
    uVar4 = param_1 + uVar5 * 3;
    if ((((uVar4 < *(ulonglong *)(param_2 + 2)) || (*(ulonglong *)(param_2 + 4) < uVar4)) ||
        ((uint)(param_2[4] - (int)uVar4) < 3)) ||
       (iVar1 = param_2[6], param_2[6] = iVar1 + -1, iVar1 < 1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pcVar3 = "OUT-OF-RANGE";
    if (bVar2) {
      pcVar3 = "OK";
    }
    FUN_144e30540("SANITIZE",uVar4,0,1,*param_2 + 1,0,
                  "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s",uVar4,uVar4 + 3,3,
                  *(ulonglong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
    if (!bVar2) break;
    if (uVar6 < *(byte *)(uVar4 + 2) + 1) {
      return 0;
    }
    uVar5 = (ulonglong)((int)uVar5 + 1);
    uVar6 = uVar6 + (-1 - (uint)*(byte *)(uVar4 + 2));
  }
  return 0;
}



// FUNCTION 144e33570 FUN_144e33570 body=378 status=ok
// SIG undefined FUN_144e33570(void)

undefined8 FUN_144e33570(longlong param_1,int *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar5 = 0;
  FUN_144e30540("SANITIZE",param_1,0,1,*param_2 + 1,0,
                "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s",param_1,param_1,0,
                *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4),&DAT_14b40a962);
  uVar6 = param_3 - 1;
  while( true ) {
    if (uVar6 == 0) {
      return 1;
    }
    uVar4 = param_1 + uVar5 * 4;
    if ((((uVar4 < *(ulonglong *)(param_2 + 2)) || (*(ulonglong *)(param_2 + 4) < uVar4)) ||
        ((uint)(param_2[4] - (int)uVar4) < 4)) ||
       (iVar1 = param_2[6], param_2[6] = iVar1 + -1, iVar1 < 1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pcVar3 = "OUT-OF-RANGE";
    if (bVar2) {
      pcVar3 = "OK";
    }
    FUN_144e30540("SANITIZE",uVar4,0,1,*param_2 + 1,0,
                  "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s",uVar4,uVar4 + 4,4,
                  *(ulonglong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar3);
    if ((!bVar2) || (uVar6 < (uint)*(byte *)(uVar4 + 2) * 0x100 + 1 + (uint)*(byte *)(uVar4 + 3)))
    break;
    uVar5 = (ulonglong)((int)uVar5 + 1);
    uVar6 = uVar6 + (((uint)*(byte *)(uVar4 + 2) * -0x100 + -1) - (uint)*(byte *)(uVar4 + 3));
  }
  return 0;
}



// FUNCTION 144e336f0 FUN_144e336f0 body=283 status=ok
// SIG undefined FUN_144e336f0(void)

undefined8 FUN_144e336f0(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  
  cVar4 = FUN_144e2c5c0(param_2,param_1,2);
  if ((cVar4 != '\0') && ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 0)) {
    return 1;
  }
  cVar4 = FUN_144e2c5c0(param_2,param_1,3);
  if ((cVar4 != '\0') && (bVar1 = param_1[2], (byte)(bVar1 - 1) < 4)) {
    uVar6 = param_1[1] + 1 + (uint)*param_1 * 0x100;
    if (((uint)bVar1 < (uint)(0xffffffff / (ulonglong)uVar6)) &&
       (cVar4 = FUN_144e2c5c0(param_2,param_1 + 3,bVar1 * uVar6), cVar4 != '\0')) {
      bVar1 = param_1[2];
      bVar2 = *param_1;
      bVar3 = param_1[1];
      iVar5 = FUN_144e33a00(param_1);
      uVar6 = iVar5 - 1;
      if ((((uVar6 == 0) || (1 < (uint)(0xffffffff / (ulonglong)uVar6))) && (uVar6 != 0xffffffff))
         && (cVar4 = FUN_144e2c5c0(param_2,param_1 + ((ulonglong)bVar3 + 1 +
                                                     (ulonglong)bVar2 * 0x100) * (ulonglong)bVar1 +
                                                     3), cVar4 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144e33810 FUN_144e33810 body=348 status=ok
// SIG undefined FUN_144e33810(void)

int FUN_144e33810(undefined1 *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  byte *pbVar14;
  
  bVar1 = param_1[2];
  uVar13 = (ulonglong)bVar1;
  iVar9 = 0;
  uVar11 = 0;
  pbVar6 = param_1 + (ulonglong)((param_2 + 1) * (uint)bVar1) + 3;
  uVar8 = (uint)bVar1;
  pbVar12 = pbVar6;
  for (uVar7 = uVar8; uVar7 != 0; uVar7 = uVar7 - 1) {
    bVar2 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    uVar11 = uVar11 * 0x100 + (uint)bVar2;
  }
  uVar3 = 0;
  pbVar14 = param_1 + (ulonglong)(uVar8 * param_2) + 3;
  uVar7 = (uint)bVar1;
  pbVar12 = pbVar14;
  if (uVar7 != 0) {
    do {
      bVar2 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      uVar3 = uVar3 * 0x100 + (uint)bVar2;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    if (uVar11 < uVar3) {
      return 0;
    }
  }
  uVar8 = 0;
  pbVar12 = pbVar6;
  for (uVar11 = uVar7; uVar11 != 0; uVar11 = uVar11 - 1) {
    bVar2 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    uVar8 = uVar8 * 0x100 + (uint)bVar2;
  }
  pbVar12 = param_1 + CONCAT11(*param_1,param_1[1]) * uVar13 + 3;
  uVar11 = 0;
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    bVar2 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    uVar11 = uVar11 * 0x100 + (uint)bVar2;
  }
  if (uVar11 < uVar8) {
    return 0;
  }
  iVar5 = 0;
  uVar4 = uVar13;
  iVar10 = iVar9;
  if (bVar1 != 0) {
    do {
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      iVar5 = iVar5 * 0x100 + (uint)bVar2;
      uVar11 = (int)uVar4 - 1;
      uVar4 = (ulonglong)uVar11;
    } while (uVar11 != 0);
    iVar10 = 0;
    if (bVar1 != 0) {
      do {
        bVar1 = *pbVar14;
        pbVar14 = pbVar14 + 1;
        iVar10 = iVar9 * 0x100 + (uint)bVar1;
        uVar11 = (int)uVar13 - 1;
        uVar13 = (ulonglong)uVar11;
        iVar9 = iVar10;
      } while (uVar11 != 0);
    }
  }
  return iVar5 - iVar10;
}



// FUNCTION 144e33970 FUN_144e33970 body=130 status=ok
// SIG undefined FUN_144e33970(void)

int FUN_144e33970(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (param_1 == &DAT_149a1f1a0) {
    return 0;
  }
  bVar1 = *param_1;
  bVar2 = param_1[1];
  if ((ushort)((ushort)bVar1 * 0x100 + (ushort)bVar2) != 0) {
    bVar3 = param_1[2];
    uVar7 = (ulonglong)bVar3;
    iVar5 = 0;
    param_1 = param_1 + CONCAT11(bVar1,bVar2) * uVar7 + 3;
    if (bVar3 != 0) {
      do {
        bVar4 = *param_1;
        param_1 = param_1 + 1;
        iVar5 = iVar5 * 0x100 + (uint)bVar4;
        uVar6 = (int)uVar7 - 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 != 0);
    }
    return iVar5 + ((uint)bVar1 * 0x100 + bVar2 + 1) * (uint)bVar3 + 2;
  }
  return 2;
}



// FUNCTION 144e33a00 FUN_144e33a00 body=127 status=ok
// SIG undefined FUN_144e33a00(void)

uint FUN_144e33a00(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar7 = 0;
  uVar6 = param_1[1] + 1 + (uint)*param_1 * 0x100;
  if (uVar6 != 0) {
    bVar1 = param_1[2];
    uVar8 = 0;
    uVar5 = (ulonglong)uVar6;
    do {
      pbVar4 = param_1 + uVar8 + 3;
      uVar3 = 0;
      uVar6 = (uint)bVar1;
      if (bVar1 != 0) {
        do {
          bVar2 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          uVar3 = uVar3 * 0x100 + (uint)bVar2;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      uVar8 = (ulonglong)((int)uVar8 + (uint)bVar1);
      if (uVar3 <= uVar7) {
        uVar3 = uVar7;
      }
      uVar7 = uVar3;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return uVar7;
}



// FUNCTION 144e33a80 FUN_144e33a80 body=97 status=ok
// SIG undefined FUN_144e33a80(void)

undefined4 FUN_144e33a80(uint param_1)

{
  if (param_1 < 0x101) {
    if (param_1 == 0x100) {
      return 2;
    }
    if (param_1 == 1) {
      return 1;
    }
    if (param_1 == 2) {
      return 3;
    }
    if (param_1 == 3) {
      return 4;
    }
    if (param_1 == 4) {
      return 5;
    }
  }
  else {
    if (param_1 == 0x115) {
      return 6;
    }
    if (param_1 == 0x116) {
      return 8;
    }
    if (param_1 == 0x126) {
      return 7;
    }
  }
  return 0;
}



// FUNCTION 144e33af0 FUN_144e33af0 body=164 status=ok
// SIG undefined FUN_144e33af0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_144e33af0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  uVar2 = *param_1 + 1;
  if ((int)(*param_1 + 1) < 0) {
    uVar2 = 0;
  }
  cVar3 = FUN_144e33ba0();
  if (cVar3 != '\0') {
    uVar1 = *param_1;
    if (uVar1 < uVar2) {
      memset((void *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar1 * 0x28),0,
             (ulonglong)(uVar2 - uVar1) * 0x28);
    }
    *param_1 = uVar2;
    return (undefined4 *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar2 - 1) * 0x28);
  }
  _DAT_14c793f60 = 0;
  _DAT_14c793f68 = 0;
  _DAT_14c793f80 = 0;
  _DAT_14c793f70 = 0;
  _DAT_14c793f78 = 0;
  return &DAT_14c793f60;
}



// FUNCTION 144e33ba0 FUN_144e33ba0 body=139 status=ok
// SIG undefined FUN_144e33ba0(void)

undefined8 FUN_144e33ba0(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((int)uVar1 < 0) {
    return 0;
  }
  if (param_2 <= uVar1) {
    return 1;
  }
  uVar4 = (ulonglong)uVar1;
  do {
    uVar3 = (int)uVar4 + 8 + (int)(uVar4 >> 1);
    uVar4 = (ulonglong)uVar3;
  } while (uVar3 <= param_2);
  if (((-1 < (int)uVar3) && (uVar1 <= uVar3)) && (uVar3 < 0x6666666)) {
    lVar2 = FUN_14286436b(*(undefined8 *)(param_1 + 8),uVar4 * 0x28);
    if (lVar2 != 0) {
      *(longlong *)(param_1 + 8) = lVar2;
      *(uint *)(param_1 + 4) = uVar3;
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return 0;
}



// FUNCTION 144e33c30 FUN_144e33c30 body=203 status=ok
// SIG undefined FUN_144e33c30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_144e33c30(int param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  double *pdVar5;
  int iVar6;
  undefined8 uVar7;
  
  if (param_1 != 0x11) {
    if (param_1 != 0x107) {
      if (param_1 != 0x124) {
        if (param_1 == 0x1d) {
          puVar4 = (undefined4 *)FUN_144e32e00(param_2 + 0x20);
          return puVar4;
        }
        if (param_1 != 0x1e) {
          puVar4 = (undefined4 *)FUN_144e32630();
          return puVar4;
        }
        uVar7 = FUN_144e32860(param_2);
        uVar2 = *(uint *)(param_2 + 0x24);
        if (uVar2 < *(uint *)(param_2 + 0x28)) {
          *(uint *)(param_2 + 0x24) = uVar2 + 1;
          if (uVar2 < *(uint *)(param_2 + 0x28)) {
            lVar1 = *(longlong *)(param_2 + 0x30);
            *(undefined8 *)(lVar1 + (ulonglong)uVar2 * 8) = uVar7;
            return (undefined4 *)(lVar1 + (ulonglong)uVar2 * 8);
          }
        }
        else {
          *(undefined1 *)(param_2 + 0x20) = 1;
        }
        _DAT_14c793f60 = uVar7;
        return &DAT_14c793f60;
      }
      if (*(int *)(param_2 + 0x24) == 0) {
        *(undefined1 *)(param_2 + 0x20) = 1;
      }
      else {
        uVar2 = *(int *)(param_2 + 0x24) - 1;
        *(uint *)(param_2 + 0x24) = uVar2;
        if (uVar2 < *(uint *)(param_2 + 0x28)) {
          pdVar5 = (double *)(*(longlong *)(param_2 + 0x30) + (ulonglong)uVar2 * 8);
          goto LAB_144e33c81;
        }
      }
      _DAT_14c793f60 = 0;
      pdVar5 = (double *)&DAT_14c793f60;
LAB_144e33c81:
      iVar6 = (int)*pdVar5;
      if (iVar6 < 0) {
        *(undefined1 *)(param_2 + 0x20) = 1;
      }
      iVar3 = 0;
      if (-1 < iVar6) {
        iVar3 = iVar6;
      }
      *(int *)(param_3 + 0x1c) = iVar3;
      *(undefined4 *)(param_2 + 0x24) = 0;
      return (undefined4 *)0x0;
    }
    goto LAB_144e33cf0;
  }
  if (*(int *)(param_2 + 0x24) == 0) {
    *(undefined1 *)(param_2 + 0x20) = 1;
LAB_144e33cc4:
    _DAT_14c793f60 = 0;
    pdVar5 = (double *)&DAT_14c793f60;
  }
  else {
    uVar2 = *(int *)(param_2 + 0x24) - 1;
    *(uint *)(param_2 + 0x24) = uVar2;
    if (*(uint *)(param_2 + 0x28) <= uVar2) goto LAB_144e33cc4;
    pdVar5 = (double *)(*(longlong *)(param_2 + 0x30) + (ulonglong)uVar2 * 8);
  }
  iVar6 = (int)*pdVar5;
  if (iVar6 < 0) {
    *(undefined1 *)(param_2 + 0x20) = 1;
  }
  iVar3 = 0;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  *(int *)(param_3 + 0x18) = iVar3;
LAB_144e33cf0:
  *(undefined4 *)(param_2 + 0x24) = 0;
  return (undefined4 *)0x0;
}



// FUNCTION 144e33d00 FUN_144e33d00 body=604 status=ok
// SIG undefined FUN_144e33d00(void)

/* WARNING: Removing unreachable block (ram,0x000144e33d7d) */
/* WARNING: Removing unreachable block (ram,0x000144e33dac) */
/* WARNING: Removing unreachable block (ram,0x000144e33e8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144e33d00(uint param_1,longlong param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  double *pdVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_2 + 0x44);
  uVar2 = *param_3;
  if (param_1 < 0x101) {
    if (param_1 != 0x100) {
      switch(param_1) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
        goto switchD_144e33d5f_caseD_0;
      case 5:
      case 0xd:
      case 0xe:
        goto switchD_144e33d5f_caseD_5;
      default:
        goto switchD_144e33d5f_caseD_6;
      case 0xf:
        uVar6 = FUN_144e32db0(param_2 + 0x20);
        param_3[0x17] = uVar6;
        *(undefined4 *)(param_2 + 0x24) = 0;
        uVar6 = param_3[0x17];
        break;
      case 0x10:
        uVar6 = FUN_144e32db0(param_2 + 0x20);
        param_3[0x16] = uVar6;
        *(undefined4 *)(param_2 + 0x24) = 0;
        uVar6 = param_3[0x16];
        break;
      case 0x12:
        uVar6 = FUN_144e32db0(param_2 + 0x20);
        param_3[0x19] = uVar6;
        uVar6 = FUN_144e32db0(param_2 + 0x20);
        param_3[0x1a] = uVar6;
        goto LAB_144e33dd7;
      }
      if (uVar6 == 0) {
        return;
      }
      goto LAB_144e33ee2;
    }
switchD_144e33d5f_caseD_0:
    if (*(int *)(param_2 + 0x24) == 0) {
      *(undefined1 *)(param_2 + 0x20) = 1;
LAB_144e33e39:
      _DAT_14c793f60 = 0;
      pdVar3 = (double *)&DAT_14c793f60;
    }
    else {
      uVar6 = *(int *)(param_2 + 0x24) - 1;
      *(uint *)(param_2 + 0x24) = uVar6;
      if (*(uint *)(param_2 + 0x28) <= uVar6) goto LAB_144e33e39;
      pdVar3 = (double *)(*(longlong *)(param_2 + 0x30) + (ulonglong)uVar6 * 8);
    }
    uVar6 = (uint)*pdVar3;
    if ((int)uVar6 < 0) {
      *(undefined1 *)(param_2 + 0x20) = 1;
    }
    uVar5 = 0;
    if (-1 < (int)uVar6) {
      uVar5 = uVar6;
    }
    uVar6 = FUN_144e33a80(param_1);
    param_3[(ulonglong)uVar6 + 8] = uVar5;
switchD_144e33d5f_caseD_5:
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    switch(param_1) {
    case 0x101:
    case 0x102:
    case 0x103:
    case 0x104:
    case 0x105:
    case 0x106:
    case 0x108:
    case 0x114:
    case 0x117:
    case 0x11f:
    case 0x120:
    case 0x121:
    case 0x123:
      goto switchD_144e33d5f_caseD_5;
    default:
switchD_144e33d5f_caseD_6:
      *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_2 + 0x18);
      FUN_144e33c30(param_1,param_2);
      if (*(int *)(param_2 + 0x24) != 0) {
        return;
      }
      goto LAB_144e33ee2;
    case 0x115:
    case 0x116:
      goto switchD_144e33d5f_caseD_0;
    case 0x11e:
      uVar6 = FUN_144e32db0(param_2 + 0x20);
      param_3[0x14] = uVar6;
      uVar6 = FUN_144e32db0(param_2 + 0x20);
      param_3[0x12] = uVar6;
      uVar6 = FUN_144e32db0(param_2 + 0x20);
      param_3[0x11] = uVar6;
      break;
    case 0x122:
      uVar6 = FUN_144e32db0(param_2 + 0x20);
      param_3[0x15] = uVar6;
      break;
    case 0x125:
      uVar6 = FUN_144e32db0(param_2 + 0x20);
      param_3[0x18] = uVar6;
    }
LAB_144e33dd7:
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
LAB_144e33ee2:
  if ((((*(char *)(param_2 + 0x38) == '\0') && (*(char *)(param_2 + 0x1c) == '\0')) &&
      (*(char *)(param_2 + 0x20) == '\0')) && (-1 < *(int *)(param_2 + 0x2c))) {
    puVar4 = (uint *)FUN_144e33af0(param_3 + 2);
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[8] = (iVar1 - uVar2) - 1;
    *puVar4 = param_1;
    uVar2 = *param_3;
    uVar6 = *(int *)(param_2 + 0x18) - uVar2;
    uVar5 = 0;
    if (uVar2 <= *(uint *)(param_2 + 0x10)) {
      uVar5 = *(int *)(param_2 + 0x10) - uVar2;
    }
    if (uVar5 < uVar6) {
      uVar6 = uVar5;
    }
    *(ulonglong *)(puVar4 + 4) = (ulonglong)uVar2 + *(longlong *)(param_2 + 8);
    puVar4[6] = uVar6;
    *param_3 = *(uint *)(param_2 + 0x18);
  }
  return;
}



// FUNCTION 144e33ff0 FUN_144e33ff0 body=107 status=ok
// SIG undefined FUN_144e33ff0(void)

void FUN_144e33ff0(uint *param_1,undefined4 param_2,longlong param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = (undefined4 *)FUN_144e34060(param_1 + 2);
  *puVar2 = param_2;
  uVar1 = *param_1;
  uVar4 = *(int *)(param_3 + 0x18) - uVar1;
  uVar3 = 0;
  if (uVar1 <= *(uint *)(param_3 + 0x10)) {
    uVar3 = *(int *)(param_3 + 0x10) - uVar1;
  }
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  *(ulonglong *)(puVar2 + 4) = (ulonglong)uVar1 + *(longlong *)(param_3 + 8);
  puVar2[6] = uVar4;
  *param_1 = *(uint *)(param_3 + 0x18);
  return;
}



// FUNCTION 144e34060 FUN_144e34060 body=138 status=ok
// SIG undefined FUN_144e34060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_144e34060(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  uVar2 = *param_1 + 1;
  if ((int)(*param_1 + 1) < 0) {
    uVar2 = 0;
  }
  cVar3 = FUN_144e340f0();
  if (cVar3 != '\0') {
    uVar1 = *param_1;
    if (uVar1 < uVar2) {
      memset((void *)((ulonglong)uVar1 * 0x20 + *(longlong *)(param_1 + 2)),0,
             (ulonglong)(uVar2 - uVar1) << 5);
    }
    *param_1 = uVar2;
    return (undefined4 *)((ulonglong)(uVar2 - 1) * 0x20 + *(longlong *)(param_1 + 2));
  }
  _DAT_14c793f60 = 0;
  _DAT_14c793f68 = 0;
  _DAT_14c793f70 = 0;
  _DAT_14c793f78 = 0;
  return &DAT_14c793f60;
}



// FUNCTION 144e340f0 FUN_144e340f0 body=137 status=ok
// SIG undefined FUN_144e340f0(void)

undefined8 FUN_144e340f0(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((int)uVar1 < 0) {
    return 0;
  }
  uVar3 = uVar1;
  if (uVar1 < param_2) {
    do {
      uVar3 = uVar3 + 8 + (uVar3 >> 1);
    } while (uVar3 <= param_2);
    if ((((-1 < (int)uVar3) && (uVar1 <= uVar3)) && (uVar3 < 0x7ffffff)) &&
       (lVar2 = FUN_14286436b(*(undefined8 *)(param_1 + 8),(ulonglong)uVar3 << 5), lVar2 != 0)) {
      *(longlong *)(param_1 + 8) = lVar2;
      *(uint *)(param_1 + 4) = uVar3;
      return 1;
    }
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    return 0;
  }
  return 1;
}



// FUNCTION 144e34180 FUN_144e34180 body=193 status=ok
// SIG undefined FUN_144e34180(void)

/* WARNING: Removing unreachable block (ram,0x000144e34203) */

void FUN_144e34180(int param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0x12) {
    uVar1 = FUN_144e32db0(param_2 + 0x20);
    *(undefined4 *)(param_3 + 0x18) = uVar1;
    uVar1 = FUN_144e32db0(param_2 + 0x20);
    *(undefined4 *)(param_3 + 0x1c) = uVar1;
  }
  else {
    if ((param_1 == 0x105) || (param_1 == 0x107)) {
      *(undefined4 *)(param_2 + 0x24) = 0;
      goto LAB_144e34207;
    }
    if (param_1 != 0x126) {
      FUN_144e327e0();
      if (*(int *)(param_2 + 0x24) != 0) {
        return;
      }
      goto LAB_144e34207;
    }
    uVar1 = FUN_144e32db0(param_2 + 0x20);
    *(undefined4 *)(param_3 + 0x24) = uVar1;
  }
  *(undefined4 *)(param_2 + 0x24) = 0;
LAB_144e34207:
  if ((((*(char *)(param_2 + 0x38) == '\0') && (*(char *)(param_2 + 0x1c) == '\0')) &&
      (*(char *)(param_2 + 0x20) == '\0')) && (-1 < *(int *)(param_2 + 0x2c))) {
    FUN_144e33ff0(param_3,param_1,param_2);
  }
  return;
}



// FUNCTION 144e34250 FUN_144e34250 body=363 status=ok
// SIG undefined FUN_144e34250(void)

/* WARNING: Removing unreachable block (ram,0x000144e342b7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144e34250(uint param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 local_18;
  
  local_18 = 0;
  if (param_1 < 0x10c) {
    if (0x108 < param_1) {
switchD_144e3429f_caseD_a:
      if (*(int *)(param_2 + 0x24) == 0) {
        *(undefined1 *)(param_2 + 0x20) = 1;
LAB_144e3430f:
        _DAT_14c793f60 = 0;
        puVar2 = (undefined8 *)&DAT_14c793f60;
      }
      else {
        uVar1 = *(int *)(param_2 + 0x24) - 1;
        *(uint *)(param_2 + 0x24) = uVar1;
        if (*(uint *)(param_2 + 0x28) <= uVar1) goto LAB_144e3430f;
        puVar2 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + (ulonglong)uVar1 * 8);
      }
      local_18 = *puVar2;
      goto switchD_144e3429f_caseD_6;
    }
    switch(param_1) {
    case 6:
    case 7:
    case 8:
    case 9:
      goto switchD_144e3429f_caseD_6;
    case 10:
    case 0xb:
    case 0x14:
    case 0x15:
      goto switchD_144e3429f_caseD_a;
    default:
switchD_144e3429f_caseD_c:
      FUN_144e327e0(param_1,param_2);
      if (*(int *)(param_2 + 0x24) != 0) {
        return;
      }
      goto LAB_144e34338;
    case 0x13:
      uVar1 = FUN_144e32db0(param_2 + 0x20);
      param_3[6] = uVar1;
    }
  }
  else {
    if (0x10d < param_1) {
      if ((param_1 != 0x10e) && (2 < param_1 - 0x111)) goto switchD_144e3429f_caseD_c;
      goto switchD_144e3429f_caseD_a;
    }
switchD_144e3429f_caseD_6:
  }
  *(undefined4 *)(param_2 + 0x24) = 0;
LAB_144e34338:
  if ((((*(char *)(param_2 + 0x38) == '\0') && (*(char *)(param_2 + 0x1c) == '\0')) &&
      (*(char *)(param_2 + 0x20) == '\0')) && (-1 < *(int *)(param_2 + 0x2c))) {
    puVar3 = (uint *)FUN_144e34400(param_3 + 2);
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *(undefined8 *)(puVar3 + 8) = local_18;
    *puVar3 = param_1;
    uVar1 = *param_3;
    uVar4 = *(int *)(param_2 + 0x18) - uVar1;
    uVar5 = 0;
    if (uVar1 <= *(uint *)(param_2 + 0x10)) {
      uVar5 = *(int *)(param_2 + 0x10) - uVar1;
    }
    if (uVar5 < uVar4) {
      uVar4 = uVar5;
    }
    *(ulonglong *)(puVar3 + 4) = (ulonglong)uVar1 + *(longlong *)(param_2 + 8);
    puVar3[6] = uVar4;
    *param_3 = *(uint *)(param_2 + 0x18);
  }
  return;
}



// FUNCTION 144e34400 FUN_144e34400 body=164 status=ok
// SIG undefined FUN_144e34400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_144e34400(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  uVar2 = *param_1 + 1;
  if ((int)(*param_1 + 1) < 0) {
    uVar2 = 0;
  }
  cVar3 = FUN_144e344b0();
  if (cVar3 != '\0') {
    uVar1 = *param_1;
    if (uVar1 < uVar2) {
      memset((void *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar1 * 0x28),0,
             (ulonglong)(uVar2 - uVar1) * 0x28);
    }
    *param_1 = uVar2;
    return (undefined4 *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar2 - 1) * 0x28);
  }
  _DAT_14c793f60 = 0;
  _DAT_14c793f68 = 0;
  _DAT_14c793f80 = 0;
  _DAT_14c793f70 = 0;
  _DAT_14c793f78 = 0;
  return &DAT_14c793f60;
}



// FUNCTION 144e344b0 FUN_144e344b0 body=139 status=ok
// SIG undefined FUN_144e344b0(void)

undefined8 FUN_144e344b0(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((int)uVar1 < 0) {
    return 0;
  }
  if (param_2 <= uVar1) {
    return 1;
  }
  uVar4 = (ulonglong)uVar1;
  do {
    uVar3 = (int)uVar4 + 8 + (int)(uVar4 >> 1);
    uVar4 = (ulonglong)uVar3;
  } while (uVar3 <= param_2);
  if (((-1 < (int)uVar3) && (uVar1 <= uVar3)) && (uVar3 < 0x6666666)) {
    lVar2 = FUN_14286436b(*(undefined8 *)(param_1 + 8),uVar4 * 0x28);
    if (lVar2 != 0) {
      *(longlong *)(param_1 + 8) = lVar2;
      *(uint *)(param_1 + 4) = uVar3;
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return 0;
}



// FUNCTION 144e34540 FUN_144e34540 body=120 status=ok
// SIG undefined FUN_144e34540(void)

void FUN_144e34540(uint *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (*param_1 != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 2) + 0x10);
    uVar2 = (ulonglong)*param_1;
    do {
      if (*plVar1 != 0) {
        thunk_FUN_1400020a8();
      }
      plVar1[-1] = 0;
      *plVar1 = 0;
      plVar1 = plVar1 + 5;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    thunk_FUN_1400020a8();
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 144e345c0 FUN_144e345c0 body=164 status=ok
// SIG undefined FUN_144e345c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_144e345c0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  uVar2 = *param_1 + 1;
  if ((int)(*param_1 + 1) < 0) {
    uVar2 = 0;
  }
  cVar3 = FUN_144e34670();
  if (cVar3 != '\0') {
    uVar1 = *param_1;
    if (uVar1 < uVar2) {
      memset((void *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar1 * 0x28),0,
             (ulonglong)(uVar2 - uVar1) * 0x28);
    }
    *param_1 = uVar2;
    return (undefined4 *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar2 - 1) * 0x28);
  }
  _DAT_14c793f60 = 0;
  _DAT_14c793f68 = 0;
  _DAT_14c793f80 = 0;
  _DAT_14c793f70 = 0;
  _DAT_14c793f78 = 0;
  return &DAT_14c793f60;
}



// FUNCTION 144e34670 FUN_144e34670 body=139 status=ok
// SIG undefined FUN_144e34670(void)

undefined8 FUN_144e34670(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((int)uVar1 < 0) {
    return 0;
  }
  if (param_2 <= uVar1) {
    return 1;
  }
  uVar4 = (ulonglong)uVar1;
  do {
    uVar3 = (int)uVar4 + 8 + (int)(uVar4 >> 1);
    uVar4 = (ulonglong)uVar3;
  } while (uVar3 <= param_2);
  if (((-1 < (int)uVar3) && (uVar1 <= uVar3)) && (uVar3 < 0x6666666)) {
    lVar2 = FUN_14286436b(*(undefined8 *)(param_1 + 8),uVar4 * 0x28);
    if (lVar2 != 0) {
      *(longlong *)(param_1 + 8) = lVar2;
      *(uint *)(param_1 + 4) = uVar3;
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return 0;
}



// FUNCTION 144e34700 FUN_144e34700 body=1987 status=ok
// SIG undefined FUN_144e34700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144e34700(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  longlong *plVar21;
  undefined8 local_d8;
  undefined1 *local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined1 local_88 [8];
  undefined1 *local_80;
  uint local_78;
  undefined1 local_68 [8];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_48 [8];
  undefined8 local_40;
  longlong local_38;
  undefined1 local_30;
  
  plVar1 = param_1 + 0x11;
  *(undefined4 *)plVar1 = 0;
  plVar2 = param_1 + 0x21;
  param_1[0x12] = 0;
  plVar21 = param_1 + 1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = -1;
  param_1[0x16] = -1;
  param_1[0x17] = -1;
  param_1[0x18] = -1;
  param_1[0x19] = -1;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x2210;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *plVar2 = 0;
  param_1[0x22] = 0;
  if (*(char *)((longlong)param_1 + 0x3c) == '\0') {
    uVar9 = FUN_144e2d260(param_2);
    *(undefined4 *)(param_1 + 7) = uVar9;
    *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  }
  uVar11 = FUN_144e2d200(param_2,0x43464620);
  lVar12 = FUN_144e3b520(plVar21,uVar11);
  *param_1 = lVar12;
  lVar13 = FUN_144e3f100(lVar12);
  param_1[6] = lVar13;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  lVar12 = *(longlong *)(lVar13 + 0x10);
  param_1[2] = lVar12;
  lVar13 = (ulonglong)*(uint *)(lVar13 + 0x18) + lVar12;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[3] = lVar13;
  iVar18 = (int)lVar13 - (int)lVar12;
  *(undefined4 *)plVar21 = 0;
  uVar10 = iVar18 * 8;
  uVar19 = 0x4000;
  if (0x4000 < uVar10) {
    uVar19 = uVar10;
  }
  *(uint *)(param_1 + 4) = uVar19;
  FUN_144e30540("SANITIZE",lVar12,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar12,lVar13,iVar18);
  if ((*(uint *)(*param_1 + 0x18) < 4) ||
     (puVar20 = *(undefined1 **)(*param_1 + 0x10), puVar20 == &DAT_149a1f1a0)) {
LAB_144e34e9a:
    FUN_144e34ed0(param_1);
    return;
  }
  if (puVar20[2] == 0) {
    puVar17 = &DAT_149a1f1a0;
  }
  else {
    puVar17 = puVar20 + (byte)puVar20[2];
  }
  param_1[9] = (longlong)puVar17;
  if ((puVar17 == &DAT_149a1f1a0) || (cVar8 = FUN_144e336f0(puVar17,plVar21), cVar8 == '\0'))
  goto LAB_144e34e9a;
  uVar10 = FUN_144e33970(param_1[9]);
  puVar17 = (undefined1 *)((ulonglong)uVar10 + param_1[9]);
  param_1[10] = (longlong)puVar17;
  if ((puVar17 == &DAT_149a1f1a0) ||
     ((((cVar8 = FUN_144e336f0(puVar17,plVar21), cVar8 == '\0' ||
        (pbVar3 = (byte *)param_1[10], (ushort)((ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1]) == 0))
       || (FUN_144e3a170(pbVar3,local_88,0), uVar10 = local_78, puVar17 = local_80,
          local_78 == 0xffffffff)) ||
      (cVar8 = FUN_144e2c5c0(plVar21,local_80,local_78), cVar8 == '\0')))) goto LAB_144e34e9a;
  local_d0 = puVar17;
  uVar19 = 0;
  local_c8 = (ulonglong)uVar10;
  local_c0 = 0;
  local_d8 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  FUN_144e32c20(&local_b8);
  *(undefined4 *)plVar1 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = -1;
  param_1[0x16] = -1;
  param_1[0x17] = -1;
  param_1[0x18] = -1;
  param_1[0x19] = -1;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x2210;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  local_a0 = local_a0 & 0xffffffffffffff00;
  cVar8 = FUN_144e3a260(&local_d8,plVar1);
  uVar11 = _DAT_14c793f60;
  uVar4 = _DAT_14c793f68;
  uVar9 = DAT_14c793f70;
  uVar5 = DAT_14c793f74;
  uVar6 = DAT_14c793f78;
  uVar7 = _DAT_14c793f7c;
  if (cVar8 != '\0') {
    if (local_a8 != 0) {
      thunk_FUN_1400020a8();
    }
    uVar10 = *(uint *)((longlong)param_1 + 0xe4);
    if (uVar10 < 3) {
      param_1[8] = (longlong)&DAT_149a1f1a0;
    }
    else {
      puVar17 = puVar20 + uVar10;
      if (uVar10 == 0) {
        puVar17 = &DAT_149a1f1a0;
      }
      param_1[8] = (longlong)puVar17;
      if ((puVar17 == &DAT_149a1f1a0) || (cVar8 = FUN_144e33370(puVar17,plVar21), cVar8 == '\0'))
      goto LAB_144e34e9a;
    }
    *(undefined4 *)(param_1 + 0x10) = 1;
    if (*(int *)((longlong)param_1 + 0xcc) == -1) {
      param_1[0xe] = (longlong)&DAT_149a1f1a0;
      param_1[0xf] = (longlong)&DAT_149a1f1a0;
    }
    else {
      puVar17 = puVar20 + *(uint *)((longlong)param_1 + 0xa4);
      if (*(uint *)((longlong)param_1 + 0xa4) == 0) {
        puVar17 = &DAT_149a1f1a0;
      }
      param_1[0xe] = (longlong)puVar17;
      if (*(uint *)(param_1 + 0x1d) == 0) {
        puVar14 = &DAT_149a1f1a0;
      }
      else {
        puVar14 = puVar20 + *(uint *)(param_1 + 0x1d);
      }
      param_1[0xf] = (longlong)puVar14;
      if (((puVar17 == &DAT_149a1f1a0) || (cVar8 = FUN_144e336f0(puVar17,plVar21), cVar8 == '\0'))
         || (((undefined1 *)param_1[0xf] == &DAT_149a1f1a0 ||
             (cVar8 = FUN_144e33050((undefined1 *)param_1[0xf],plVar21,
                                    (uint)*(byte *)param_1[0xe] * 0x100 +
                                    (uint)((byte *)param_1[0xe])[1]), cVar8 == '\0'))))
      goto LAB_144e34e9a;
      *(uint *)(param_1 + 0x10) =
           (uint)((byte *)param_1[0xe])[1] + (uint)*(byte *)param_1[0xe] * 0x100;
    }
    uVar10 = FUN_144e33970(param_1[10]);
    puVar17 = (undefined1 *)((ulonglong)uVar10 + param_1[10]);
    param_1[0xb] = (longlong)puVar17;
    if ((puVar17 == &DAT_149a1f1a0) || (cVar8 = FUN_144e336f0(puVar17,plVar21), cVar8 == '\0'))
    goto LAB_144e34e9a;
    uVar10 = FUN_144e33970(param_1[0xb]);
    puVar17 = (undefined1 *)((ulonglong)uVar10 + param_1[0xb]);
    param_1[0xc] = (longlong)puVar17;
    if ((puVar17 != &DAT_149a1f1a0) && (cVar8 = FUN_144e336f0(puVar17,plVar21), cVar8 == '\0'))
    goto LAB_144e34e9a;
    puVar17 = puVar20 + *(uint *)(param_1 + 0x14);
    if (*(uint *)(param_1 + 0x14) == 0) {
      puVar17 = &DAT_149a1f1a0;
    }
    param_1[0xd] = (longlong)puVar17;
    if (((puVar17 == &DAT_149a1f1a0) || (cVar8 = FUN_144e336f0(puVar17,plVar21), cVar8 == '\0')) ||
       (iVar18 = (uint)*(byte *)param_1[0xd] * 0x100 + (uint)((byte *)param_1[0xd])[1],
       *(int *)(param_1 + 0x23) = iVar18, iVar18 != (int)param_1[7])) goto LAB_144e34e9a;
    FUN_144e350a0(plVar2,(int)param_1[0x10]);
    uVar10 = uVar19;
    if ((int)param_1[0x10] != 0) {
      do {
        puVar15 = (undefined4 *)FUN_144e34fc0(plVar2,uVar10);
        uVar10 = uVar10 + 1;
        *puVar15 = 0;
        *(undefined8 *)(puVar15 + 2) = 0;
        *(undefined8 *)(puVar15 + 4) = 0;
        puVar15[6] = 0;
        *(undefined1 **)(puVar15 + 8) = &DAT_149a1f1a0;
      } while (uVar10 < *(uint *)(param_1 + 0x10));
    }
    plVar21 = param_1 + 1;
    if (*(int *)((longlong)param_1 + 0xcc) != -1) {
      if ((int)param_1[0x10] == 0) {
        return;
      }
      while( true ) {
        FUN_144e3a320(param_1[0xe],local_88,uVar19);
        uVar10 = local_78;
        puVar17 = local_80;
        if ((local_78 == 0xffffffff) ||
           (cVar8 = FUN_144e2c5c0(plVar21,local_80,local_78), cVar8 == '\0')) goto LAB_144e34e9a;
        local_d0 = puVar17;
        local_b0 = 0;
        local_a8 = 0;
        local_c8 = CONCAT44(local_c8._4_4_,uVar10);
        local_c0 = local_c0 & 0xffffff0000000000;
        FUN_144e32c20(&local_b8);
        local_a0 = local_a0 & 0xffffffffffffff00;
        puVar15 = (undefined4 *)FUN_144e345c0(param_1 + 0x1f);
        _DAT_14c793f60 = 0;
        _DAT_14c793f68 = 0;
        _DAT_14c793f80 = 0;
        DAT_14c793f70 = 0;
        DAT_14c793f74 = 0;
        DAT_14c793f78 = 0;
        _DAT_14c793f7c = 0;
        uVar11 = 0;
        uVar4 = 0;
        uVar9 = 0;
        uVar5 = 0;
        uVar6 = 0;
        uVar7 = 0;
        if (puVar15 == &DAT_14c793f60) goto LAB_144e349d5;
        *puVar15 = 0;
        *(undefined8 *)(puVar15 + 2) = 0;
        *(undefined8 *)(puVar15 + 4) = 0;
        *(undefined8 *)(puVar15 + 6) = 0;
        puVar15[8] = 0;
        puVar15[9] = 0xffffffff;
        cVar8 = FUN_144e3a410(&local_d8,puVar15);
        uVar11 = _DAT_14c793f60;
        uVar4 = _DAT_14c793f68;
        uVar9 = DAT_14c793f70;
        uVar5 = DAT_14c793f74;
        uVar6 = DAT_14c793f78;
        uVar7 = _DAT_14c793f7c;
        if (cVar8 == '\0') goto LAB_144e349d5;
        puVar16 = (undefined4 *)FUN_144e34fc0(param_1 + 0x21,uVar19);
        iVar18 = puVar15[7];
        puVar17 = puVar20 + (uint)puVar15[6];
        uVar11 = _DAT_14c793f60;
        uVar4 = _DAT_14c793f68;
        uVar9 = DAT_14c793f70;
        uVar5 = DAT_14c793f74;
        uVar6 = DAT_14c793f78;
        uVar7 = _DAT_14c793f7c;
        if ((iVar18 == -1) ||
           (cVar8 = FUN_144e2c5c0(plVar21,puVar17,iVar18), uVar11 = _DAT_14c793f60,
           uVar4 = _DAT_14c793f68, uVar9 = DAT_14c793f70, uVar5 = DAT_14c793f74,
           uVar6 = DAT_14c793f78, uVar7 = _DAT_14c793f7c, cVar8 == '\0')) goto LAB_144e349d5;
        local_40 = 0;
        local_50 = 0;
        local_38 = 0;
        local_4c = 0;
        local_60 = puVar17;
        local_58 = iVar18;
        FUN_144e32c20(local_48);
        *puVar16 = 0;
        *(undefined8 *)(puVar16 + 2) = 0;
        *(undefined8 *)(puVar16 + 4) = 0;
        puVar16[6] = 0;
        local_30 = 0;
        *(undefined1 **)(puVar16 + 8) = &DAT_149a1f1a0;
        cVar8 = FUN_144e3bea0(local_68,puVar16);
        if (cVar8 == '\0') break;
        puVar17 = puVar17 + (uint)puVar16[6];
        if (puVar16[6] == 0) {
          puVar17 = &DAT_149a1f1a0;
        }
        *(undefined1 **)(puVar16 + 8) = puVar17;
        if ((puVar17 != &DAT_149a1f1a0) && (cVar8 = FUN_144e336f0(puVar17,plVar21), cVar8 == '\0'))
        break;
        if (local_38 != 0) {
          thunk_FUN_1400020a8();
        }
        if (local_a8 != 0) {
          thunk_FUN_1400020a8();
        }
        uVar19 = uVar19 + 1;
        if (*(uint *)(param_1 + 0x10) <= uVar19) {
          return;
        }
      }
      FUN_144e34ed0(param_1);
      if (local_38 != 0) {
        thunk_FUN_1400020a8();
      }
      goto LAB_144e349dd;
    }
    puVar15 = (undefined4 *)FUN_144e34fc0(plVar2,0);
    iVar18 = (int)param_1[0x1e];
    puVar20 = puVar20 + *(uint *)((longlong)param_1 + 0xec);
    if ((iVar18 == -1) || (cVar8 = FUN_144e2c5c0(plVar21,puVar20,iVar18), cVar8 == '\0'))
    goto LAB_144e34e9a;
    local_b0 = 0;
    local_a8 = 0;
    local_c8 = CONCAT44(local_c8._4_4_,iVar18);
    local_c0 = local_c0 & 0xffffff0000000000;
    local_d0 = puVar20;
    FUN_144e32c20(&local_b8);
    *puVar15 = 0;
    *(undefined8 *)(puVar15 + 2) = 0;
    *(undefined8 *)(puVar15 + 4) = 0;
    puVar15[6] = 0;
    *(undefined1 **)(puVar15 + 8) = &DAT_149a1f1a0;
    local_a0 = local_a0 & 0xffffffffffffff00;
    cVar8 = FUN_144e3bea0(&local_d8,puVar15);
    uVar11 = _DAT_14c793f60;
    uVar4 = _DAT_14c793f68;
    uVar9 = DAT_14c793f70;
    uVar5 = DAT_14c793f74;
    uVar6 = DAT_14c793f78;
    uVar7 = _DAT_14c793f7c;
    if (cVar8 != '\0') {
      puVar20 = puVar20 + (uint)puVar15[6];
      if (puVar15[6] == 0) {
        puVar20 = &DAT_149a1f1a0;
      }
      *(undefined1 **)(puVar15 + 8) = puVar20;
      if ((puVar20 == &DAT_149a1f1a0) ||
         (cVar8 = FUN_144e336f0(puVar20,plVar21), uVar11 = _DAT_14c793f60, uVar4 = _DAT_14c793f68,
         uVar9 = DAT_14c793f70, uVar5 = DAT_14c793f74, uVar6 = DAT_14c793f78, uVar7 = _DAT_14c793f7c
         , cVar8 != '\0')) goto LAB_144e349dd;
    }
  }
LAB_144e349d5:
  _DAT_14c793f7c = uVar7;
  DAT_14c793f78 = uVar6;
  DAT_14c793f74 = uVar5;
  DAT_14c793f70 = uVar9;
  _DAT_14c793f68 = uVar4;
  _DAT_14c793f60 = uVar11;
  FUN_144e34ed0(param_1);
LAB_144e349dd:
  if (local_a8 == 0) {
    return;
  }
  thunk_FUN_1400020a8();
  return;
}



// FUNCTION 144e34ed0 FUN_144e34ed0 body=101 status=ok
// SIG undefined FUN_144e34ed0(void)

void FUN_144e34ed0(undefined8 *param_1)

{
  FUN_144e2c540(param_1 + 1);
  if (param_1[0x13] != 0) {
    thunk_FUN_1400020a8();
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_144e34540(param_1 + 0x1f);
  FUN_144e34f40(param_1 + 0x21);
  FUN_144e3f120(*param_1);
  *param_1 = 0;
  return;
}



// FUNCTION 144e34f40 FUN_144e34f40 body=120 status=ok
// SIG undefined FUN_144e34f40(void)

void FUN_144e34f40(uint *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (*param_1 != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 2) + 0x10);
    uVar2 = (ulonglong)*param_1;
    do {
      if (*plVar1 != 0) {
        thunk_FUN_1400020a8();
      }
      plVar1[-1] = 0;
      *plVar1 = 0;
      plVar1 = plVar1 + 5;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    thunk_FUN_1400020a8();
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 144e34fc0 FUN_144e34fc0 body=74 status=ok
// SIG undefined FUN_144e34fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_144e34fc0(uint *param_1,uint param_2)

{
  if (*param_1 <= param_2) {
    _DAT_14c793f60 = 0;
    _DAT_14c793f68 = 0;
    _DAT_14c793f80 = 0;
    _DAT_14c793f70 = 0;
    _DAT_14c793f78 = 0;
    return &DAT_14c793f60;
  }
  return (undefined4 *)(*(longlong *)(param_1 + 2) + (ulonglong)param_2 * 0x28);
}



// FUNCTION 144e35010 FUN_144e35010 body=139 status=ok
// SIG undefined FUN_144e35010(void)

undefined8 FUN_144e35010(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((int)uVar1 < 0) {
    return 0;
  }
  if (param_2 <= uVar1) {
    return 1;
  }
  uVar4 = (ulonglong)uVar1;
  do {
    uVar3 = (int)uVar4 + 8 + (int)(uVar4 >> 1);
    uVar4 = (ulonglong)uVar3;
  } while (uVar3 <= param_2);
  if (((-1 < (int)uVar3) && (uVar1 <= uVar3)) && (uVar3 < 0x6666666)) {
    lVar2 = FUN_14286436b(*(undefined8 *)(param_1 + 8),uVar4 * 0x28);
    if (lVar2 != 0) {
      *(longlong *)(param_1 + 8) = lVar2;
      *(uint *)(param_1 + 4) = uVar3;
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return 0;
}



// FUNCTION 144e350a0 FUN_144e350a0 body=96 status=ok
// SIG undefined FUN_144e350a0(void)

undefined1 FUN_144e350a0(uint *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  cVar2 = FUN_144e35010();
  if (cVar2 == '\0') {
    return 0;
  }
  uVar1 = *param_1;
  if (uVar1 < param_2) {
    memset((void *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar1 * 0x28),0,
           (ulonglong)(param_2 - uVar1) * 0x28);
  }
  *param_1 = param_2;
  return 1;
}



// FUNCTION 144e35100 FUN_144e35100 body=135 status=ok
// SIG undefined FUN_144e35100(void)

void FUN_144e35100(char *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if ((cVar1 != '\0') && (*param_1 == '\0')) {
    FUN_144e32f00(param_1 + 1,param_2,param_3);
    return;
  }
  if (*param_1 == '\x03') {
    FUN_144e330c0();
    return;
  }
  FUN_144e35190(param_1 + 1,param_2,param_3);
  return;
}



// FUNCTION 144e35190 FUN_144e35190 body=553 status=ok
// SIG undefined FUN_144e35190(void)

ulonglong FUN_144e35190(uint *param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint *puVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  byte bStackX_21;
  byte bStackX_22;
  byte bStackX_23;
  
  uVar2 = FUN_144e2c5c0(param_2,param_1,4);
  if (((char)uVar2 != '\0') &&
     (uVar2 = FUN_144e3a0a0(param_1,param_2,0,param_3), (char)uVar2 != '\0')) {
    uVar1 = *param_1;
    uVar2 = (ulonglong)uVar1;
    bStackX_21 = (byte)(uVar1 >> 8);
    bStackX_22 = (byte)(uVar1 >> 0x10);
    bStackX_23 = (byte)(uVar1 >> 0x18);
    if ((uint)bStackX_21 * 0x10000 + (uint)bStackX_22 * 0x100 + uVar1 * 0x1000000 + (uint)bStackX_23
        != 0) {
      puVar5 = (uint *)&DAT_149a1f1a0;
      uVar8 = (uint)*(byte *)((longlong)param_1 + 1) * 0x10000 +
              (uint)*(byte *)((longlong)param_1 + 2) * 0x100 + uVar1 * 0x1000000 +
              (uint)*(byte *)((longlong)param_1 + 3);
      if (uVar8 != 0) {
        puVar5 = param_1 + 1;
      }
      if ((uint)*(byte *)((longlong)puVar5 + 1) * 0x10000 +
          (uint)*(byte *)((longlong)puVar5 + 2) * 0x100 + (uint)(byte)*puVar5 * 0x1000000 +
          (uint)*(byte *)((longlong)puVar5 + 3) == 0) {
        uVar6 = 1;
        if (1 < (uint)bStackX_21 * 0x10000 + uVar1 * 0x1000000 + (uint)bStackX_22 * 0x100 +
                (uint)bStackX_23) {
          do {
            if (uVar6 - 1 < uVar8) {
              pbVar7 = (byte *)((longlong)param_1 + (ulonglong)(uVar6 - 1) * 6 + 4);
            }
            else {
              pbVar7 = &DAT_149a1f1a0;
            }
            if (uVar6 < uVar8) {
              pbVar4 = (byte *)((longlong)param_1 + (ulonglong)uVar6 * 6 + 4);
            }
            else {
              pbVar4 = &DAT_149a1f1a0;
            }
            if ((uint)pbVar4[1] * 0x10000 + (uint)pbVar4[2] * 0x100 + (uint)*pbVar4 * 0x1000000 +
                (uint)pbVar4[3] <=
                (uint)pbVar7[1] * 0x10000 + (uint)pbVar7[2] * 0x100 + (uint)*pbVar7 * 0x1000000 +
                (uint)pbVar7[3]) goto LAB_144e353a5;
            uVar6 = uVar6 + 1;
          } while (uVar6 < (uVar1 >> 0x10 & 0xff) * 0x100 + (uint)bStackX_23 +
                           (uint)bStackX_21 * 0x10000 + uVar1 * 0x1000000);
        }
        uVar3 = FUN_144e353c0(param_1);
        uVar2 = FUN_144e2c5c0(param_2,uVar3,4);
        if ((char)uVar2 != '\0') {
          pbVar7 = (byte *)FUN_144e353c0(param_1);
          uVar2 = 0;
          if ((uint)pbVar7[1] * 0x10000 + (uint)pbVar7[2] * 0x100 + (uint)*pbVar7 * 0x1000000 +
              (uint)pbVar7[3] == *(int *)(param_2 + 0x30)) {
            return 1;
          }
        }
LAB_144e353a5:
        return uVar2 & 0xffffffffffffff00;
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 144e353c0 FUN_144e353c0 body=114 status=ok
// SIG undefined FUN_144e353c0(void)

byte * FUN_144e353c0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  uVar1 = ((uVar1 >> 0x18) - 1) +
          (uVar1 >> 0x10 & 0xff) * 0x100 + (uVar1 >> 8 & 0xff) * 0x10000 + uVar1 * 0x1000000;
  if ((uint)*(byte *)((longlong)param_1 + 1) * 0x10000 +
      (uint)*(byte *)((longlong)param_1 + 2) * 0x100 + (uint)(byte)*param_1 * 0x1000000 +
      (uint)*(byte *)((longlong)param_1 + 3) <= uVar1) {
    return &DAT_149a1f1a6;
  }
  return (byte *)((longlong)param_1 + (ulonglong)uVar1 * 6 + 10);
}



// FUNCTION 144e35440 FUN_144e35440 body=130 status=ok
// SIG undefined FUN_144e35440(void)

undefined8 FUN_144e35440(byte *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 != '\0') {
    uVar2 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
            (uint)param_1[3];
    if (uVar2 < 0x2aaaaaaa) {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 4,uVar2 * 6);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144e354d0 FUN_144e354d0 body=200 status=ok
// SIG undefined FUN_144e354d0(void)

undefined8 FUN_144e354d0(byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,10);
  if (cVar1 != '\0') {
    cVar1 = FUN_144e2c5c0(param_2,param_1 + 2,(uint)*param_1 * 0x100 + (uint)param_1[1]);
    if (cVar1 != '\0') {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 2,8);
      if ((cVar1 != '\0') && ((ushort)((ushort)param_1[2] * 0x100 + (ushort)param_1[3]) == 1)) {
        cVar1 = FUN_144e32310(param_1 + 4,param_2,param_1 + 2);
        if (cVar1 != '\0') {
          cVar1 = FUN_144e32530(param_1 + 8,param_2,param_1 + 2);
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 144e355a0 FUN_144e355a0 body=203 status=ok
// SIG undefined FUN_144e355a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_144e355a0(int param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  double *pdVar5;
  int iVar6;
  undefined8 uVar7;
  
  if (param_1 != 0x11) {
    if (param_1 != 0x107) {
      if (param_1 != 0x124) {
        if (param_1 == 0x1d) {
          puVar4 = (undefined4 *)FUN_144e32e00(param_2 + 0x20);
          return puVar4;
        }
        if (param_1 != 0x1e) {
          puVar4 = (undefined4 *)FUN_144e32630();
          return puVar4;
        }
        uVar7 = FUN_144e32860(param_2);
        uVar2 = *(uint *)(param_2 + 0x24);
        if (uVar2 < *(uint *)(param_2 + 0x28)) {
          *(uint *)(param_2 + 0x24) = uVar2 + 1;
          if (uVar2 < *(uint *)(param_2 + 0x28)) {
            lVar1 = *(longlong *)(param_2 + 0x30);
            *(undefined8 *)(lVar1 + (ulonglong)uVar2 * 8) = uVar7;
            return (undefined4 *)(lVar1 + (ulonglong)uVar2 * 8);
          }
        }
        else {
          *(undefined1 *)(param_2 + 0x20) = 1;
        }
        _DAT_14c793f60 = uVar7;
        return &DAT_14c793f60;
      }
      if (*(int *)(param_2 + 0x24) == 0) {
        *(undefined1 *)(param_2 + 0x20) = 1;
      }
      else {
        uVar2 = *(int *)(param_2 + 0x24) - 1;
        *(uint *)(param_2 + 0x24) = uVar2;
        if (uVar2 < *(uint *)(param_2 + 0x28)) {
          pdVar5 = (double *)(*(longlong *)(param_2 + 0x30) + (ulonglong)uVar2 * 8);
          goto LAB_144e355f1;
        }
      }
      _DAT_14c793f60 = 0;
      pdVar5 = (double *)&DAT_14c793f60;
LAB_144e355f1:
      iVar6 = (int)*pdVar5;
      if (iVar6 < 0) {
        *(undefined1 *)(param_2 + 0x20) = 1;
      }
      iVar3 = 0;
      if (-1 < iVar6) {
        iVar3 = iVar6;
      }
      *(int *)(param_3 + 0x1c) = iVar3;
      *(undefined4 *)(param_2 + 0x24) = 0;
      return (undefined4 *)0x0;
    }
    goto LAB_144e35660;
  }
  if (*(int *)(param_2 + 0x24) == 0) {
    *(undefined1 *)(param_2 + 0x20) = 1;
LAB_144e35634:
    _DAT_14c793f60 = 0;
    pdVar5 = (double *)&DAT_14c793f60;
  }
  else {
    uVar2 = *(int *)(param_2 + 0x24) - 1;
    *(uint *)(param_2 + 0x24) = uVar2;
    if (*(uint *)(param_2 + 0x28) <= uVar2) goto LAB_144e35634;
    pdVar5 = (double *)(*(longlong *)(param_2 + 0x30) + (ulonglong)uVar2 * 8);
  }
  iVar6 = (int)*pdVar5;
  if (iVar6 < 0) {
    *(undefined1 *)(param_2 + 0x20) = 1;
  }
  iVar3 = 0;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  *(int *)(param_3 + 0x18) = iVar3;
LAB_144e35660:
  *(undefined4 *)(param_2 + 0x24) = 0;
  return (undefined4 *)0x0;
}



// FUNCTION 144e35670 FUN_144e35670 body=324 status=ok
// SIG undefined FUN_144e35670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144e35670(int param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  double *pdVar3;
  int iVar4;
  
  if (param_1 == 0x18) {
    if (*(int *)(param_2 + 0x24) == 0) {
      *(undefined1 *)(param_2 + 0x20) = 1;
LAB_144e35749:
      _DAT_14c793f60 = 0;
      pdVar3 = (double *)&DAT_14c793f60;
    }
    else {
      uVar1 = *(int *)(param_2 + 0x24) - 1;
      *(uint *)(param_2 + 0x24) = uVar1;
      if (*(uint *)(param_2 + 0x28) <= uVar1) goto LAB_144e35749;
      pdVar3 = (double *)(*(longlong *)(param_2 + 0x30) + (ulonglong)uVar1 * 8);
    }
    iVar4 = (int)*pdVar3;
    if (iVar4 < 0) {
      *(undefined1 *)(param_2 + 0x20) = 1;
    }
    iVar2 = 0;
    if (-1 < iVar4) {
      iVar2 = iVar4;
    }
    *(int *)(param_3 + 0x20) = iVar2;
  }
  else {
    if (param_1 == 0x107) {
      FUN_144e33ff0(param_3,0x107,param_2);
      *(undefined4 *)(param_2 + 0x24) = 0;
      goto LAB_144e3577f;
    }
    if (param_1 != 0x125) {
      FUN_144e355a0();
      if (*(int *)(param_2 + 0x24) != 0) {
        return;
      }
      goto LAB_144e3577f;
    }
    if (*(int *)(param_2 + 0x24) == 0) {
      *(undefined1 *)(param_2 + 0x20) = 1;
LAB_144e356de:
      _DAT_14c793f60 = 0;
      pdVar3 = (double *)&DAT_14c793f60;
    }
    else {
      uVar1 = *(int *)(param_2 + 0x24) - 1;
      *(uint *)(param_2 + 0x24) = uVar1;
      if (*(uint *)(param_2 + 0x28) <= uVar1) goto LAB_144e356de;
      pdVar3 = (double *)(*(longlong *)(param_2 + 0x30) + (ulonglong)uVar1 * 8);
    }
    iVar4 = (int)*pdVar3;
    if (iVar4 < 0) {
      *(undefined1 *)(param_2 + 0x20) = 1;
    }
    iVar2 = 0;
    if (-1 < iVar4) {
      iVar2 = iVar4;
    }
    *(int *)(param_3 + 0x24) = iVar2;
  }
  *(undefined4 *)(param_2 + 0x24) = 0;
LAB_144e3577f:
  if ((((*(char *)(param_2 + 0x38) == '\0') && (*(char *)(param_2 + 0x1c) == '\0')) &&
      (*(char *)(param_2 + 0x20) == '\0')) && (-1 < *(int *)(param_2 + 0x2c))) {
    FUN_144e33ff0(param_3,param_1,param_2);
  }
  return;
}



// FUNCTION 144e357c0 FUN_144e357c0 body=279 status=ok
// SIG undefined FUN_144e357c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144e357c0(int param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  double *pdVar3;
  int iVar4;
  double *pdVar5;
  
  if (param_1 != 0x12) {
    FUN_144e327e0();
    if (*(int *)(param_2 + 0x24) != 0) {
      return;
    }
    goto LAB_144e358a2;
  }
  if (*(int *)(param_2 + 0x24) == 0) {
    *(undefined1 *)(param_2 + 0x20) = 1;
LAB_144e3582a:
    _DAT_14c793f60 = 0;
    pdVar3 = (double *)&DAT_14c793f60;
  }
  else {
    uVar1 = *(int *)(param_2 + 0x24) - 1;
    *(uint *)(param_2 + 0x24) = uVar1;
    if (*(uint *)(param_2 + 0x28) <= uVar1) goto LAB_144e3582a;
    pdVar3 = (double *)(*(longlong *)(param_2 + 0x30) + (ulonglong)uVar1 * 8);
  }
  pdVar5 = (double *)&DAT_14c793f60;
  iVar4 = (int)*pdVar3;
  if (iVar4 < 0) {
    *(undefined1 *)(param_2 + 0x20) = 1;
  }
  iVar2 = 0;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(int *)(param_3 + 0x18) = iVar2;
  if (*(int *)(param_2 + 0x24) == 0) {
    *(undefined1 *)(param_2 + 0x20) = 1;
LAB_144e35876:
    _DAT_14c793f60 = 0;
  }
  else {
    uVar1 = *(int *)(param_2 + 0x24) - 1;
    *(uint *)(param_2 + 0x24) = uVar1;
    if (*(uint *)(param_2 + 0x28) <= uVar1) goto LAB_144e35876;
    pdVar5 = (double *)(*(longlong *)(param_2 + 0x30) + (ulonglong)uVar1 * 8);
  }
  iVar4 = (int)*pdVar5;
  if (iVar4 < 0) {
    *(undefined1 *)(param_2 + 0x20) = 1;
  }
  iVar2 = 0;
  if (iVar4 >= 0) {
    iVar2 = iVar4;
  }
  *(int *)(param_3 + 0x1c) = iVar2;
  *(undefined4 *)(param_2 + 0x24) = 0;
LAB_144e358a2:
  if ((((*(char *)(param_2 + 0x38) == '\0') && (*(char *)(param_2 + 0x1c) == '\0')) &&
      (*(char *)(param_2 + 0x20) == '\0')) && (-1 < *(int *)(param_2 + 0x2c))) {
    FUN_144e33ff0(param_3,param_1,param_2);
  }
  return;
}



// FUNCTION 144e358e0 FUN_144e358e0 body=95 status=ok
// SIG undefined FUN_144e358e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144e358e0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  double *pdVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x44) != '\0') {
    *(undefined1 *)(param_1 + 0x44) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  else {
    uVar1 = *(int *)(param_1 + 0x24) - 1;
    *(uint *)(param_1 + 0x24) = uVar1;
    if (uVar1 < *(uint *)(param_1 + 0x28)) {
      pdVar3 = (double *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar1 * 8);
      goto LAB_144e3591f;
    }
  }
  _DAT_14c793f60 = 0;
  pdVar3 = (double *)&DAT_14c793f60;
LAB_144e3591f:
  iVar4 = (int)*pdVar3;
  if (iVar4 < 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  iVar2 = 0;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(int *)(param_1 + 0x40) = iVar2;
  return;
}



// FUNCTION 144e35940 FUN_144e35940 body=401 status=ok
// SIG undefined FUN_144e35940(void)

/* WARNING: Removing unreachable block (ram,0x000144e359b3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144e35940(uint param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 local_18;
  
  local_18 = 0;
  if (param_1 < 0x18) {
    if (param_1 == 0x17) goto LAB_144e35a4e;
    switch(param_1) {
    case 6:
    case 7:
    case 8:
    case 9:
      goto switchD_144e35991_caseD_6;
    case 10:
    case 0xb:
      goto switchD_144e35991_caseD_a;
    default:
      goto switchD_144e35991_caseD_c;
    case 0x13:
      uVar1 = FUN_144e32db0(param_2 + 0x20);
      param_3[6] = uVar1;
      *(undefined4 *)(param_2 + 0x24) = 0;
      break;
    case 0x16:
      FUN_144e358e0(param_2);
      param_3[10] = *(uint *)(param_2 + 0x40);
      *(undefined4 *)(param_2 + 0x24) = 0;
    }
    goto LAB_144e35a4e;
  }
  switch(param_1) {
  case 0x109:
  case 0x10a:
  case 0x10b:
  case 0x111:
  case 0x112:
switchD_144e35991_caseD_a:
    if (*(int *)(param_2 + 0x24) == 0) {
      *(undefined1 *)(param_2 + 0x20) = 1;
LAB_144e35a16:
      _DAT_14c793f60 = 0;
      puVar2 = (undefined8 *)&DAT_14c793f60;
    }
    else {
      uVar1 = *(int *)(param_2 + 0x24) - 1;
      *(uint *)(param_2 + 0x24) = uVar1;
      if (*(uint *)(param_2 + 0x28) <= uVar1) goto LAB_144e35a16;
      puVar2 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + (ulonglong)uVar1 * 8);
    }
    local_18 = *puVar2;
switchD_144e35991_caseD_6:
    *(undefined4 *)(param_2 + 0x24) = 0;
LAB_144e35a4e:
    if ((((*(char *)(param_2 + 0x38) == '\0') && (*(char *)(param_2 + 0x1c) == '\0')) &&
        (*(char *)(param_2 + 0x20) == '\0')) && (-1 < *(int *)(param_2 + 0x2c))) {
      puVar3 = (uint *)FUN_144e34400(param_3 + 2);
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      *(undefined8 *)(puVar3 + 8) = local_18;
      *puVar3 = param_1;
      uVar1 = *param_3;
      uVar4 = *(int *)(param_2 + 0x18) - uVar1;
      uVar5 = 0;
      if (uVar1 <= *(uint *)(param_2 + 0x10)) {
        uVar5 = *(int *)(param_2 + 0x10) - uVar1;
      }
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
      *(ulonglong *)(puVar3 + 4) = (ulonglong)uVar1 + *(longlong *)(param_2 + 8);
      puVar3[6] = uVar4;
      *param_3 = *(uint *)(param_2 + 0x18);
    }
    return;
  case 0x10c:
  case 0x10d:
    goto switchD_144e35991_caseD_6;
  default:
switchD_144e35991_caseD_c:
    FUN_144e327e0(param_1);
    if (*(int *)(param_2 + 0x24) != 0) {
      return;
    }
    goto LAB_144e35a4e;
  }
}



// FUNCTION 144e35b40 FUN_144e35b40 body=120 status=ok
// SIG undefined FUN_144e35b40(void)

void FUN_144e35b40(uint *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (*param_1 != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 2) + 0x10);
    uVar2 = (ulonglong)*param_1;
    do {
      if (*plVar1 != 0) {
        thunk_FUN_1400020a8();
      }
      plVar1[-1] = 0;
      *plVar1 = 0;
      plVar1 = plVar1 + 5;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    thunk_FUN_1400020a8();
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 144e35bc0 FUN_144e35bc0 body=164 status=ok
// SIG undefined FUN_144e35bc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_144e35bc0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  uVar2 = *param_1 + 1;
  if ((int)(*param_1 + 1) < 0) {
    uVar2 = 0;
  }
  cVar3 = FUN_144e35c70();
  if (cVar3 != '\0') {
    uVar1 = *param_1;
    if (uVar1 < uVar2) {
      memset((void *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar1 * 0x28),0,
             (ulonglong)(uVar2 - uVar1) * 0x28);
    }
    *param_1 = uVar2;
    return (undefined4 *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar2 - 1) * 0x28);
  }
  _DAT_14c793f60 = 0;
  _DAT_14c793f68 = 0;
  _DAT_14c793f80 = 0;
  _DAT_14c793f70 = 0;
  _DAT_14c793f78 = 0;
  return &DAT_14c793f60;
}



// FUNCTION 144e35c70 FUN_144e35c70 body=139 status=ok
// SIG undefined FUN_144e35c70(void)

undefined8 FUN_144e35c70(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((int)uVar1 < 0) {
    return 0;
  }
  if (param_2 <= uVar1) {
    return 1;
  }
  uVar4 = (ulonglong)uVar1;
  do {
    uVar3 = (int)uVar4 + 8 + (int)(uVar4 >> 1);
    uVar4 = (ulonglong)uVar3;
  } while (uVar3 <= param_2);
  if (((-1 < (int)uVar3) && (uVar1 <= uVar3)) && (uVar3 < 0x6666666)) {
    lVar2 = FUN_14286436b(*(undefined8 *)(param_1 + 8),uVar4 * 0x28);
    if (lVar2 != 0) {
      *(longlong *)(param_1 + 8) = lVar2;
      *(uint *)(param_1 + 4) = uVar3;
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return 0;
}



// FUNCTION 144e35d00 FUN_144e35d00 body=1518 status=ok
// SIG undefined FUN_144e35d00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144e35d00(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  byte bVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint uVar18;
  int iVar19;
  undefined1 local_d8 [8];
  undefined1 *local_d0;
  int local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  undefined1 local_98 [8];
  undefined1 *local_90;
  int local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_78 [8];
  undefined8 local_70;
  longlong local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_48 [8];
  undefined1 *local_40;
  int local_38;
  
  plVar1 = param_1 + 0x15;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *plVar1 = 0;
  param_1[0x16] = 0;
  if (*(char *)((longlong)param_1 + 0x3c) == '\0') {
    uVar10 = FUN_144e2d260(param_2);
    *(undefined4 *)(param_1 + 7) = uVar10;
    *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  }
  uVar11 = FUN_144e2d200(param_2,0x43464632);
  lVar12 = FUN_144e3c770(param_1 + 1,uVar11);
  *param_1 = lVar12;
  lVar13 = FUN_144e3f100(lVar12);
  param_1[6] = lVar13;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  lVar12 = *(longlong *)(lVar13 + 0x10);
  param_1[2] = lVar12;
  lVar13 = (ulonglong)*(uint *)(lVar13 + 0x18) + lVar12;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[3] = lVar13;
  iVar19 = (int)lVar13 - (int)lVar12;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar18 = iVar19 * 8;
  uVar16 = 0x4000;
  if (0x4000 < uVar18) {
    uVar16 = uVar18;
  }
  *(uint *)(param_1 + 4) = uVar16;
  FUN_144e30540("SANITIZE",lVar12,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar12,lVar13,iVar19);
  if ((4 < *(uint *)(*param_1 + 0x18)) &&
     (puVar3 = *(undefined1 **)(*param_1 + 0x10), puVar3 != &DAT_149a1f1a0)) {
    bVar2 = puVar3[2];
    iVar19 = (uint)(byte)puVar3[3] * 0x100 + (uint)(byte)puVar3[4];
    if ((iVar19 != -1) && (cVar9 = FUN_144e2c5c0(param_1 + 1,puVar3 + bVar2,iVar19), cVar9 != '\0'))
    {
      uVar18 = 0;
      local_b0 = 0;
      local_c0 = 0;
      local_a8 = 0;
      local_bc = 0;
      local_d0 = puVar3 + bVar2;
      local_c8 = iVar19;
      FUN_144e32c20(local_b8);
      *(undefined4 *)(param_1 + 8) = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      local_a0 = 0;
      cVar9 = FUN_144e3b740(local_d8,param_1 + 8);
      uVar11 = _DAT_14c793f60;
      uVar5 = _DAT_14c793f68;
      uVar10 = DAT_14c793f70;
      uVar6 = DAT_14c793f74;
      uVar7 = DAT_14c793f78;
      uVar8 = _DAT_14c793f7c;
      if (cVar9 == '\0') {
LAB_144e35eb8:
        _DAT_14c793f7c = uVar8;
        DAT_14c793f78 = uVar7;
        DAT_14c793f74 = uVar6;
        DAT_14c793f70 = uVar10;
        _DAT_14c793f68 = uVar5;
        _DAT_14c793f60 = uVar11;
        FUN_144e362f0(param_1);
LAB_144e35ec0:
        if (local_a8 == 0) {
          return;
        }
        thunk_FUN_1400020a8();
        return;
      }
      if (local_a8 != 0) {
        thunk_FUN_1400020a8();
      }
      param_1[0xd] = (longlong)
                     (puVar3 + (ulonglong)(byte)puVar3[2] +
                               (ulonglong)(byte)puVar3[3] * 0x100 + (ulonglong)(byte)puVar3[4]);
      puVar17 = puVar3 + *(uint *)(param_1 + 0xc);
      if (*(uint *)(param_1 + 0xc) == 0) {
        puVar17 = &DAT_149a1f1a0;
      }
      param_1[0xe] = (longlong)puVar17;
      if (*(uint *)(param_1 + 0xb) == 0) {
        puVar14 = &DAT_149a1f1a0;
      }
      else {
        puVar14 = puVar3 + *(uint *)(param_1 + 0xb);
      }
      param_1[0xf] = (longlong)puVar14;
      if (*(uint *)((longlong)param_1 + 0x5c) == 0) {
        puVar14 = &DAT_149a1f1a0;
      }
      else {
        puVar14 = puVar3 + *(uint *)((longlong)param_1 + 0x5c);
      }
      param_1[0x10] = (longlong)puVar14;
      if (*(uint *)((longlong)param_1 + 100) == 0) {
        puVar14 = &DAT_149a1f1a0;
      }
      else {
        puVar14 = puVar3 + *(uint *)((longlong)param_1 + 100);
      }
      param_1[0x11] = (longlong)puVar14;
      if (((((puVar17 == &DAT_149a1f1a0) ||
            (cVar9 = FUN_144e354d0(puVar17,param_1 + 1), cVar9 != '\0')) &&
           ((undefined1 *)param_1[0xf] != &DAT_149a1f1a0)) &&
          ((cVar9 = FUN_144e3b860((undefined1 *)param_1[0xf],param_1 + 1), cVar9 != '\0' &&
           ((undefined1 *)param_1[0xd] != &DAT_149a1f1a0)))) &&
         ((cVar9 = FUN_144e3b860((undefined1 *)param_1[0xd],param_1 + 1), cVar9 != '\0' &&
          (((undefined1 *)param_1[0x10] != &DAT_149a1f1a0 &&
           (cVar9 = FUN_144e3b860((undefined1 *)param_1[0x10],param_1 + 1), cVar9 != '\0')))))) {
        if ((undefined1 *)param_1[0x11] != &DAT_149a1f1a0) {
          pbVar4 = (byte *)param_1[0x10];
          cVar9 = FUN_144e35100((undefined1 *)param_1[0x11],param_1 + 1,
                                (uint)pbVar4[1] * 0x10000 + (uint)pbVar4[2] * 0x100 +
                                (uint)*pbVar4 * 0x1000000 + (uint)pbVar4[3]);
          if (cVar9 == '\0') goto LAB_144e362c5;
        }
        pbVar4 = (byte *)param_1[0xf];
        iVar19 = (uint)pbVar4[3] +
                 (uint)pbVar4[1] * 0x10000 + (uint)pbVar4[2] * 0x100 + (uint)*pbVar4 * 0x1000000;
        *(int *)(param_1 + 0x17) = iVar19;
        if (iVar19 == (int)param_1[7]) {
          pbVar4 = (byte *)param_1[0x10];
          *(uint *)(param_1 + 0x12) =
               (uint)pbVar4[1] * 0x10000 + (uint)pbVar4[2] * 0x100 + (uint)*pbVar4 * 0x1000000 +
               (uint)pbVar4[3];
          FUN_144e364b0(plVar1);
          if ((int)param_1[0x12] == 0) {
            return;
          }
          while( true ) {
            FUN_144e3bbe0(param_1[0x10],local_48,uVar18);
            iVar19 = local_38;
            puVar17 = local_40;
            if ((local_38 == -1) ||
               (cVar9 = FUN_144e2c5c0(param_1 + 1,local_40,local_38), cVar9 == '\0'))
            goto LAB_144e362c5;
            local_d0 = puVar17;
            local_b0 = 0;
            local_c0 = 0;
            local_a8 = 0;
            local_c8 = iVar19;
            local_bc = 0;
            FUN_144e32c20(local_b8);
            local_a0 = 0;
            puVar15 = (undefined4 *)FUN_144e35bc0(param_1 + 0x13);
            _DAT_14c793f60 = 0;
            _DAT_14c793f68 = 0;
            _DAT_14c793f80 = 0;
            DAT_14c793f70 = 0;
            DAT_14c793f74 = 0;
            DAT_14c793f78 = 0;
            _DAT_14c793f7c = 0;
            uVar11 = 0;
            uVar5 = 0;
            uVar10 = 0;
            uVar6 = 0;
            uVar7 = 0;
            uVar8 = 0;
            if (puVar15 == &DAT_14c793f60) goto LAB_144e35eb8;
            *puVar15 = 0;
            *(undefined8 *)(puVar15 + 2) = 0;
            *(undefined8 *)(puVar15 + 4) = 0;
            *(undefined8 *)(puVar15 + 6) = 0;
            puVar15[8] = 0;
            cVar9 = FUN_144e3bcf0(local_d8,puVar15);
            uVar11 = _DAT_14c793f60;
            uVar5 = _DAT_14c793f68;
            uVar10 = DAT_14c793f70;
            uVar6 = DAT_14c793f74;
            uVar7 = DAT_14c793f78;
            uVar8 = _DAT_14c793f7c;
            if (cVar9 == '\0') goto LAB_144e35eb8;
            puVar17 = puVar3 + (uint)puVar15[6];
            if (puVar15[6] == 0) {
              puVar17 = &DAT_149a1f1a0;
            }
            iVar19 = puVar15[7];
            if ((iVar19 == -1) ||
               (cVar9 = FUN_144e2c5c0(param_1 + 1,puVar17,iVar19), uVar11 = _DAT_14c793f60,
               uVar5 = _DAT_14c793f68, uVar10 = DAT_14c793f70, uVar6 = DAT_14c793f74,
               uVar7 = DAT_14c793f78, uVar8 = _DAT_14c793f7c, cVar9 == '\0')) goto LAB_144e35eb8;
            local_70 = 0;
            local_68 = 0;
            local_80 = 0;
            local_7c = 0;
            local_90 = puVar17;
            local_88 = iVar19;
            FUN_144e32c20(local_78);
            local_60 = 0;
            local_58 = 0;
            local_54 = 0;
            puVar15 = (undefined4 *)FUN_144e363d0(plVar1,uVar18);
            *puVar15 = 0;
            *(undefined8 *)(puVar15 + 2) = 0;
            *(undefined8 *)(puVar15 + 4) = 0;
            *(undefined1 **)(puVar15 + 8) = &DAT_149a1f1a0;
            puVar15[6] = 0;
            puVar15[10] = 0;
            uVar11 = FUN_144e363d0(plVar1,uVar18);
            cVar9 = FUN_144e3be10(local_98,uVar11);
            if (cVar9 == '\0') break;
            puVar14 = &DAT_149a1f1a0;
            if (iVar19 != 0) {
              puVar14 = puVar17;
            }
            lVar12 = FUN_144e363d0(plVar1,uVar18);
            puVar14 = puVar14 + *(uint *)(lVar12 + 0x18);
            if (*(uint *)(lVar12 + 0x18) == 0) {
              puVar14 = &DAT_149a1f1a0;
            }
            lVar12 = FUN_144e363d0(plVar1,uVar18);
            *(undefined1 **)(lVar12 + 0x20) = puVar14;
            lVar12 = FUN_144e363d0(plVar1,uVar18);
            if (*(undefined1 **)(lVar12 + 0x20) != &DAT_149a1f1a0) {
              lVar12 = FUN_144e363d0(plVar1,uVar18);
              cVar9 = FUN_144e3b860(*(undefined8 *)(lVar12 + 0x20),param_1 + 1);
              if (cVar9 == '\0') break;
            }
            if (local_68 != 0) {
              thunk_FUN_1400020a8();
            }
            if (local_a8 != 0) {
              thunk_FUN_1400020a8();
            }
            uVar18 = uVar18 + 1;
            if (*(uint *)(param_1 + 0x12) <= uVar18) {
              return;
            }
          }
          FUN_144e362f0(param_1);
          if (local_68 != 0) {
            thunk_FUN_1400020a8();
          }
          goto LAB_144e35ec0;
        }
      }
    }
  }
LAB_144e362c5:
  FUN_144e362f0(param_1);
  return;
}



// FUNCTION 144e362f0 FUN_144e362f0 body=92 status=ok
// SIG undefined FUN_144e362f0(void)

void FUN_144e362f0(undefined8 *param_1)

{
  FUN_144e2c540(param_1 + 1);
  if (param_1[10] != 0) {
    thunk_FUN_1400020a8();
  }
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_144e35b40(param_1 + 0x13);
  FUN_144e36350(param_1 + 0x15);
  FUN_144e3f120(*param_1);
  *param_1 = 0;
  return;
}



// FUNCTION 144e36350 FUN_144e36350 body=120 status=ok
// SIG undefined FUN_144e36350(void)

void FUN_144e36350(uint *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (*param_1 != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 2) + 0x10);
    uVar2 = (ulonglong)*param_1;
    do {
      if (*plVar1 != 0) {
        thunk_FUN_1400020a8();
      }
      plVar1[-1] = 0;
      *plVar1 = 0;
      plVar1 = plVar1 + 6;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    thunk_FUN_1400020a8();
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 144e363d0 FUN_144e363d0 body=69 status=ok
// SIG undefined FUN_144e363d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_144e363d0(uint *param_1,uint param_2)

{
  if (*param_1 <= param_2) {
    _DAT_14c793f60 = 0;
    _DAT_14c793f68 = 0;
    _DAT_14c793f70 = 0;
    _DAT_14c793f78 = 0;
    _DAT_14c793f80 = 0;
    uRam000000014c793f88 = 0;
    return &DAT_14c793f60;
  }
  return (undefined4 *)((ulonglong)param_2 * 0x30 + *(longlong *)(param_1 + 2));
}



// FUNCTION 144e36420 FUN_144e36420 body=139 status=ok
// SIG undefined FUN_144e36420(void)

undefined8 FUN_144e36420(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((int)uVar1 < 0) {
    return 0;
  }
  if (param_2 <= uVar1) {
    return 1;
  }
  uVar4 = (ulonglong)uVar1;
  do {
    uVar3 = (int)uVar4 + 8 + (int)(uVar4 >> 1);
    uVar4 = (ulonglong)uVar3;
  } while (uVar3 <= param_2);
  if (((-1 < (int)uVar3) && (uVar1 <= uVar3)) && (uVar3 < 0x5555555)) {
    lVar2 = FUN_14286436b(*(undefined8 *)(param_1 + 8),uVar4 * 0x30);
    if (lVar2 != 0) {
      *(longlong *)(param_1 + 8) = lVar2;
      *(uint *)(param_1 + 4) = uVar3;
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return 0;
}



// FUNCTION 144e364b0 FUN_144e364b0 body=98 status=ok
// SIG undefined FUN_144e364b0(void)

undefined1 FUN_144e364b0(uint *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  cVar2 = FUN_144e36420();
  if (cVar2 == '\0') {
    return 0;
  }
  uVar1 = *param_1;
  if (uVar1 < param_2) {
    memset((void *)((ulonglong)uVar1 * 0x30 + *(longlong *)(param_1 + 2)),0,
           (ulonglong)(param_2 - uVar1) * 0x30);
  }
  *param_1 = param_2;
  return 1;
}



// FUNCTION 144e36520 FUN_144e36520 body=226 status=ok
// SIG undefined FUN_144e36520(void)

undefined1 FUN_144e36520(byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,0x4e);
  if (cVar1 == '\0') {
    return 0;
  }
  if (((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) != 0) &&
     (cVar1 = FUN_144e2c5c0(param_2,param_1 + 0x4e,8), cVar1 == '\0')) {
    return 0;
  }
  if ((1 < (ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1])) &&
     (cVar1 = FUN_144e2c5c0(param_2,param_1 + 0x56,10), cVar1 == '\0')) {
    return 0;
  }
  if ((4 < (ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1])) &&
     (cVar1 = FUN_144e2c5c0(param_2,param_1 + 0x60,4), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 144e36610 FUN_144e36610 body=124 status=ok
// SIG undefined FUN_144e36610(void)

undefined8 FUN_144e36610(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 != '\0') {
    uVar2 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
    uVar3 = (*(byte *)(param_1 + 1) >> 4 & 3) + 1;
    if (uVar2 < (uint)(0xffffffff / (ulonglong)uVar3)) {
      cVar1 = FUN_144e2c5c0(param_2,param_1 + 4,uVar3 * uVar2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144e36690 FUN_144e36690 body=161 status=ok
// SIG undefined FUN_144e36690(void)

uint FUN_144e36690(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  
  if ((ushort)((ushort)*(byte *)(param_1 + 2) * 0x100 + (ushort)*(byte *)(param_1 + 3)) == 0) {
    return param_2;
  }
  if ((uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3) <= param_2) {
    param_2 = (*(byte *)(param_1 + 3) - 1) + (uint)*(byte *)(param_1 + 2) * 0x100;
  }
  uVar2 = 0;
  iVar1 = (*(byte *)(param_1 + 1) >> 4 & 3) + 1;
  pbVar3 = (byte *)(param_1 + 4 + (ulonglong)(iVar1 * param_2));
  do {
    bVar4 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    uVar2 = uVar2 * 0x100 + (uint)bVar4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  bVar4 = *(byte *)(param_1 + 1) & 0xf;
  return (1 << bVar4 + 1) - 1U & uVar2 | (uVar2 >> bVar4 + 1) << 0x10;
}



// FUNCTION 144e36740 FUN_144e36740 body=171 status=ok
// SIG undefined FUN_144e36740(void)

undefined8 FUN_144e36740(byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 != '\0') {
    if ((ushort)((ushort)*param_1 * 0x100 + (ushort)param_1[1]) == 1) {
      cVar1 = FUN_144e36990(param_1 + 4,param_2,param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_144e36af0(param_1 + 8,param_2,param_1);
        if (cVar1 != '\0') {
          cVar1 = FUN_144e36af0(param_1 + 0xc,param_2,param_1);
          if (cVar1 != '\0') {
            cVar1 = FUN_144e36af0(param_1 + 0x10,param_2,param_1);
            if (cVar1 != '\0') {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 144e367f0 FUN_144e367f0 body=256 status=ok
// SIG undefined FUN_144e367f0(void)

void FUN_144e367f0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar3 = &DAT_149a1f1a0;
  if ((uint)*(byte *)(param_1 + 8) * 0x1000000 + (uint)*(byte *)(param_1 + 10) * 0x100 +
      (uint)*(byte *)(param_1 + 9) * 0x10000 + (uint)*(byte *)(param_1 + 0xb) == 0) {
    puVar2 = &DAT_149a1f1a0;
  }
  else {
    puVar2 = (undefined1 *)
             (((ulonglong)CONCAT11(*(byte *)(param_1 + 8),*(byte *)(param_1 + 9)) * 0x100 +
              (ulonglong)*(byte *)(param_1 + 10)) * 0x100 + param_1 +
             (ulonglong)*(byte *)(param_1 + 0xb));
  }
  uVar1 = FUN_144e36690(puVar2,param_2);
  if ((uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
      (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 7) != 0) {
    puVar3 = (undefined1 *)
             (((ulonglong)CONCAT11(*(byte *)(param_1 + 4),*(byte *)(param_1 + 5)) * 0x100 +
              (ulonglong)*(byte *)(param_1 + 6)) * 0x100 + param_1 +
             (ulonglong)*(byte *)(param_1 + 7));
  }
  FUN_144e320c0(puVar3,uVar1 >> 0x10,uVar1 & 0xffff,param_3,param_4);
  return;
}



// FUNCTION 144e368f0 FUN_144e368f0 body=148 status=ok
// SIG undefined FUN_144e368f0(void)

bool FUN_144e368f0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 == '\0') {
    return false;
  }
  if ((uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
      (uint)param_1[3] == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3);
  return cVar1 != '\0';
}



// FUNCTION 144e36990 FUN_144e36990 body=177 status=ok
// SIG undefined FUN_144e36990(void)

undefined8 FUN_144e36990(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e368f0();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((uint)*param_1 * 0x1000000 + (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 +
       (uint)param_1[3] != 0) &&
     (cVar1 = FUN_144e321e0((((ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100) * 0x100 +
                            (ulonglong)param_1[2]) * 0x100 + param_3 + (ulonglong)param_1[3],param_2
                           ), cVar1 == '\0')) {
    cVar1 = FUN_144e2d280(param_2,param_1,4);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return 1;
}



// FUNCTION 144e36a50 FUN_144e36a50 body=148 status=ok
// SIG undefined FUN_144e36a50(void)

bool FUN_144e36a50(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,4);
  if (cVar1 == '\0') {
    return false;
  }
  if ((uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
      (uint)param_1[3] == 0) {
    return true;
  }
  cVar1 = FUN_144e2c5c0(param_2,param_3);
  return cVar1 != '\0';
}



// FUNCTION 144e36af0 FUN_144e36af0 body=177 status=ok
// SIG undefined FUN_144e36af0(void)

undefined8 FUN_144e36af0(byte *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_144e36a50();
  if (cVar1 == '\0') {
    return 0;
  }
  if (((uint)*param_1 * 0x1000000 + (uint)param_1[2] * 0x100 + (uint)param_1[1] * 0x10000 +
       (uint)param_1[3] != 0) &&
     (cVar1 = FUN_144e36610((((ulonglong)param_1[1] + (ulonglong)*param_1 * 0x100) * 0x100 +
                            (ulonglong)param_1[2]) * 0x100 + param_3 + (ulonglong)param_1[3],param_2
                           ), cVar1 == '\0')) {
    cVar1 = FUN_144e2d280(param_2,param_1,4);
    if (cVar1 == '\0') {
      return 0;
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return 1;
}



// FUNCTION 144e36bb0 FUN_144e36bb0 body=785 status=ok
// SIG undefined FUN_144e36bb0(void)

void FUN_144e36bb0(char *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  if (param_3 == 0) {
    param_3 = FUN_144e2d250(param_2);
  }
  *(int *)(param_1 + 0x18) = param_3;
  bVar9 = false;
  lVar2 = FUN_144e30f60(param_2 + 0xa8);
  puVar6 = &DAT_149a1f1a0;
  if (0x4d < *(uint *)(lVar2 + 0x18)) {
    puVar6 = *(undefined1 **)(lVar2 + 0x10);
  }
  if ((char)puVar6[0x3f] < '\0') {
    lVar2 = FUN_144e30f60(param_2 + 0xa8);
    puVar6 = &DAT_149a1f1a0;
    if (0x4d < *(uint *)(lVar2 + 0x18)) {
      puVar6 = *(undefined1 **)(lVar2 + 0x10);
    }
    uVar1 = (uint)(short)((ushort)(byte)puVar6[0x45] + (ushort)(byte)puVar6[0x44] * 0x100);
    uVar5 = (int)uVar1 >> 0x1f;
    *(uint *)(param_1 + 4) = (uVar1 ^ uVar5) - uVar5;
    lVar2 = FUN_144e30f60(param_2 + 0xa8);
    puVar6 = &DAT_149a1f1a0;
    if (0x4d < *(uint *)(lVar2 + 0x18)) {
      puVar6 = *(undefined1 **)(lVar2 + 0x10);
    }
    uVar1 = (uint)(short)((ushort)(byte)puVar6[0x47] + (ushort)(byte)puVar6[0x46] * 0x100);
    uVar5 = (int)uVar1 >> 0x1f;
    *(uint *)(param_1 + 8) = -((uVar1 ^ uVar5) - uVar5);
    lVar2 = FUN_144e30f60(param_2 + 0xa8);
    puVar6 = &DAT_149a1f1a0;
    if (0x4d < *(uint *)(lVar2 + 0x18)) {
      puVar6 = *(undefined1 **)(lVar2 + 0x10);
    }
    *(int *)(param_1 + 0xc) =
         (int)(short)((ushort)(byte)puVar6[0x49] + (ushort)(byte)puVar6[0x48] * 0x100);
    bVar9 = *(int *)(param_1 + 4) != 0 || *(int *)(param_1 + 8) != 0;
  }
  local_68[0] = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = FUN_144e2d260(param_2);
  local_34 = 1;
  uVar3 = FUN_144e2d200(param_2,0x68686561);
  lVar2 = FUN_144e3c450(local_68,uVar3);
  puVar6 = &DAT_149a1f1a0;
  if (0x23 < *(uint *)(lVar2 + 0x18)) {
    puVar6 = *(undefined1 **)(lVar2 + 0x10);
  }
  *(uint *)(param_1 + 0x14) = (uint)(byte)puVar6[0x22] * 0x100 + (uint)(byte)puVar6[0x23];
  if (bVar9 == false) {
    uVar1 = (uint)(short)((ushort)(byte)puVar6[5] + (ushort)(byte)puVar6[4] * 0x100);
    uVar5 = (int)uVar1 >> 0x1f;
    iVar8 = (uVar1 ^ uVar5) - uVar5;
    *(int *)(param_1 + 4) = iVar8;
    uVar1 = (uint)(short)((ushort)(byte)puVar6[6] * 0x100 + (ushort)(byte)puVar6[7]);
    uVar5 = (int)uVar1 >> 0x1f;
    iVar7 = -((uVar1 ^ uVar5) - uVar5);
    *(int *)(param_1 + 8) = iVar7;
    bVar9 = iVar8 != 0 || iVar7 != 0;
    *(int *)(param_1 + 0xc) =
         (int)(short)((ushort)(byte)puVar6[8] * 0x100 + (ushort)(byte)puVar6[9]);
  }
  FUN_144e3f120(lVar2);
  *param_1 = bVar9;
  local_68[0] = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = FUN_144e2d260(param_2);
  local_34 = 1;
  uVar3 = FUN_144e2d200(param_2,0x686d7478);
  puVar4 = (undefined1 *)FUN_144e3c690(local_68,uVar3);
  *(undefined1 **)(param_1 + 0x20) = puVar4;
  puVar6 = &DAT_149a1f1a0;
  if (puVar4 != (undefined1 *)0x0) {
    puVar6 = puVar4;
  }
  uVar1 = *(uint *)(puVar6 + 0x18);
  if (uVar1 < (uint)(*(int *)(param_1 + 0x14) << 2)) {
    *(uint *)(param_1 + 0x14) = uVar1 >> 2;
  }
  iVar7 = *(int *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x10) = (uVar1 + iVar7 * -4 >> 1) + iVar7;
  if (iVar7 == 0) {
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    puVar6 = &DAT_149a1f1a0;
    if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
      puVar6 = *(undefined1 **)(param_1 + 0x20);
    }
    FUN_144e3f120(puVar6);
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    uVar3 = FUN_144e3f0f0();
    *(undefined8 *)(param_1 + 0x20) = uVar3;
  }
  local_68[0] = 0;
  local_50 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = FUN_144e2d260(param_2);
  local_34 = 1;
  uVar3 = FUN_144e2d200(param_2,0x48564152);
  uVar3 = FUN_144e3c2e0(local_68,uVar3);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  return;
}



// FUNCTION 144e36ed0 FUN_144e36ed0 body=228 status=ok
// SIG undefined FUN_144e36ed0(void)

ulonglong FUN_144e36ed0(longlong param_1,uint param_2,longlong param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  float fVar8;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  puVar7 = &DAT_149a1f1a0;
  if (param_2 < uVar2) {
    uVar3 = *(int *)(param_1 + 0x14) - 1;
    uVar6 = param_2;
    if (uVar3 <= param_2) {
      uVar6 = uVar3;
    }
    puVar5 = &DAT_149a1f1a0;
    if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)(param_1 + 0x20);
    }
    pbVar1 = *(byte **)(puVar5 + 0x10) + (ulonglong)uVar6 * 4;
    pbVar4 = &DAT_149a1f1a0;
    if (*(byte **)(puVar5 + 0x10) <= pbVar1) {
      pbVar4 = pbVar1;
    }
    uVar6 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1];
  }
  else if (uVar2 == 0) {
    uVar6 = *(uint *)(param_1 + 0x18);
  }
  else {
    uVar6 = 0;
  }
  if (param_2 < uVar2) {
    if (*(int *)(param_3 + 0x34) == 0) {
      fVar8 = 0.0;
    }
    else {
      puVar5 = &DAT_149a1f1a0;
      if (*(undefined1 **)(param_1 + 0x28) != (undefined1 *)0x0) {
        puVar5 = *(undefined1 **)(param_1 + 0x28);
      }
      if (0x13 < *(uint *)(puVar5 + 0x18)) {
        puVar7 = *(undefined1 **)(puVar5 + 0x10);
      }
      fVar8 = (float)FUN_144e367f0(puVar7,param_2,*(undefined8 *)(param_3 + 0x38),
                                   *(int *)(param_3 + 0x34));
    }
    return (longlong)((float)uVar6 + fVar8);
  }
  return (ulonglong)uVar6;
}



// FUNCTION 144e36fc0 FUN_144e36fc0 body=554 status=ok
// SIG undefined FUN_144e36fc0(void)

void FUN_144e36fc0(longlong param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (param_3 == 0) {
    param_3 = FUN_144e2d250(param_2);
  }
  *(int *)(param_1 + 0x18) = param_3;
  local_58[0] = 0;
  local_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = FUN_144e2d260(param_2);
  local_24 = 1;
  uVar2 = FUN_144e2d200(param_2,0x76686561);
  lVar3 = FUN_144e3bfc0(local_58,uVar2);
  puVar6 = &DAT_149a1f1a0;
  if (0x23 < *(uint *)(lVar3 + 0x18)) {
    puVar6 = *(undefined1 **)(lVar3 + 0x10);
  }
  *(uint *)(param_1 + 0x14) = (uint)(byte)puVar6[0x22] * 0x100 + (uint)(byte)puVar6[0x23];
  uVar1 = (uint)(short)((ushort)(byte)puVar6[5] + (ushort)(byte)puVar6[4] * 0x100);
  uVar5 = (int)uVar1 >> 0x1f;
  iVar8 = (uVar1 ^ uVar5) - uVar5;
  *(int *)(param_1 + 4) = iVar8;
  uVar1 = (uint)(short)((ushort)(byte)puVar6[7] + (ushort)(byte)puVar6[6] * 0x100);
  uVar5 = (int)uVar1 >> 0x1f;
  iVar7 = -((uVar1 ^ uVar5) - uVar5);
  *(int *)(param_1 + 8) = iVar7;
  *(int *)(param_1 + 0xc) = (int)(short)((ushort)(byte)puVar6[8] * 0x100 + (ushort)(byte)puVar6[9]);
  FUN_144e3f120(lVar3);
  *(bool *)param_1 = iVar8 != 0 || iVar7 != 0;
  local_58[0] = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = FUN_144e2d260(param_2);
  local_24 = 1;
  uVar2 = FUN_144e2d200(param_2,0x766d7478);
  puVar4 = (undefined1 *)FUN_144e3c200(local_58,uVar2);
  *(undefined1 **)(param_1 + 0x20) = puVar4;
  puVar6 = &DAT_149a1f1a0;
  if (puVar4 != (undefined1 *)0x0) {
    puVar6 = puVar4;
  }
  uVar1 = *(uint *)(puVar6 + 0x18);
  if (uVar1 < (uint)(*(int *)(param_1 + 0x14) << 2)) {
    *(uint *)(param_1 + 0x14) = uVar1 >> 2;
  }
  iVar7 = *(int *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x10) = (uVar1 + iVar7 * -4 >> 1) + iVar7;
  if (iVar7 == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    puVar6 = &DAT_149a1f1a0;
    if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
      puVar6 = *(undefined1 **)(param_1 + 0x20);
    }
    FUN_144e3f120(puVar6);
    *(undefined8 *)(param_1 + 0x20) = 0;
    uVar2 = FUN_144e3f0f0();
    *(undefined8 *)(param_1 + 0x20) = uVar2;
  }
  local_58[0] = 0;
  local_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = FUN_144e2d260(param_2);
  local_24 = 1;
  uVar2 = FUN_144e2d200(param_2,0x56564152);
  uVar2 = FUN_144e3c2e0(local_58,uVar2);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  return;
}



// FUNCTION 144e371f0 FUN_144e371f0 body=148 status=ok
// SIG undefined FUN_144e371f0(void)

int FUN_144e371f0(longlong param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if (param_2 < uVar2) {
    puVar3 = &DAT_149a1f1a0;
    if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
      puVar3 = *(undefined1 **)(param_1 + 0x20);
    }
    puVar1 = *(undefined1 **)(puVar3 + 0x10) + (ulonglong)param_2 * 4;
    puVar4 = &DAT_149a1f1a0;
    if (*(undefined1 **)(puVar3 + 0x10) <= puVar1) {
      puVar4 = puVar1;
    }
    return (int)(short)((ushort)(byte)puVar4[3] + (ushort)(byte)puVar4[2] * 0x100);
  }
  if (*(uint *)(param_1 + 0x10) <= param_2) {
    return 0;
  }
  puVar3 = &DAT_149a1f1a0;
  if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_1 + 0x20);
  }
  puVar1 = *(undefined1 **)(puVar3 + 0x10) + (ulonglong)uVar2 * 4;
  puVar4 = &DAT_149a1f1a0;
  if (*(undefined1 **)(puVar3 + 0x10) <= puVar1) {
    puVar4 = puVar1;
  }
  return (int)(short)((ushort)(byte)puVar4[(ulonglong)(param_2 - uVar2) * 2 + 1] +
                     (ushort)(byte)puVar4[(ulonglong)(param_2 - uVar2) * 2] * 0x100);
}



// FUNCTION 144e37290 FUN_144e37290 body=228 status=ok
// SIG undefined FUN_144e37290(void)

ulonglong FUN_144e37290(longlong param_1,uint param_2,longlong param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  float fVar8;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  puVar7 = &DAT_149a1f1a0;
  if (param_2 < uVar2) {
    uVar3 = *(int *)(param_1 + 0x14) - 1;
    uVar6 = param_2;
    if (uVar3 <= param_2) {
      uVar6 = uVar3;
    }
    puVar5 = &DAT_149a1f1a0;
    if (*(undefined1 **)(param_1 + 0x20) != (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)(param_1 + 0x20);
    }
    pbVar1 = *(byte **)(puVar5 + 0x10) + (ulonglong)uVar6 * 4;
    pbVar4 = &DAT_149a1f1a0;
    if (*(byte **)(puVar5 + 0x10) <= pbVar1) {
      pbVar4 = pbVar1;
    }
    uVar6 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1];
  }
  else if (uVar2 == 0) {
    uVar6 = *(uint *)(param_1 + 0x18);
  }
  else {
    uVar6 = 0;
  }
  if (param_2 < uVar2) {
    if (*(int *)(param_3 + 0x34) == 0) {
      fVar8 = 0.0;
    }
    else {
      puVar5 = &DAT_149a1f1a0;
      if (*(undefined1 **)(param_1 + 0x28) != (undefined1 *)0x0) {
        puVar5 = *(undefined1 **)(param_1 + 0x28);
      }
      if (0x13 < *(uint *)(puVar5 + 0x18)) {
        puVar7 = *(undefined1 **)(puVar5 + 0x10);
      }
      fVar8 = (float)FUN_144e367f0(puVar7,param_2,*(undefined8 *)(param_3 + 0x38),
                                   *(int *)(param_3 + 0x34));
    }
    return (longlong)((float)uVar6 + fVar8);
  }
  return (ulonglong)uVar6;
}



// FUNCTION 144e37380 FUN_144e37380 body=97 status=ok
// SIG undefined FUN_144e37380(void)

undefined8 FUN_144e37380(byte *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144e2c5c0(param_2,param_1,2);
  if (cVar1 != '\0') {
    cVar1 = FUN_144e2c5c0(param_2,param_1 + 2,((uint)*param_1 * 0x100 + (uint)param_1[1]) * 2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144e373f0 FUN_144e373f0 body=385 status=ok
// SIG undefined FUN_144e373f0(void)

void FUN_144e373f0(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  param_1[3] = 0;
  param_1[4] = 0;
  local_48[0] = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = FUN_144e2d260(param_2);
  local_14 = 1;
  uVar3 = FUN_144e2d200(param_2,0x706f7374);
  puVar4 = (undefined1 *)FUN_144e3a930(local_48,uVar3);
  *param_1 = puVar4;
  puVar10 = &DAT_149a1f1a0;
  puVar9 = &DAT_149a1f1a0;
  if (puVar4 != (undefined1 *)0x0) {
    puVar9 = puVar4;
  }
  uVar1 = *(uint *)(puVar9 + 0x18);
  if (*(uint *)(puVar9 + 0x18) < 0x20) {
    pbVar8 = &DAT_149a1f1a0;
  }
  else {
    pbVar8 = *(byte **)(puVar9 + 0x10);
  }
  iVar7 = (((uint)*pbVar8 * 0x100 + (uint)pbVar8[1]) * 0x100 + (uint)pbVar8[2]) * 0x100 +
          (uint)pbVar8[3];
  *(int *)(param_1 + 1) = iVar7;
  if (iVar7 == 0x20000) {
    puVar9 = &DAT_149a1f1a0;
    puVar5 = &DAT_149a1f1a0;
    if (puVar4 != (undefined1 *)0x0) {
      puVar5 = puVar4;
    }
    if (0x1f < *(uint *)(puVar5 + 0x18)) {
      puVar9 = *(undefined1 **)(puVar5 + 0x10);
    }
    pbVar8 = puVar9 + 0x20;
    param_1[2] = pbVar8;
    puVar5 = &DAT_149a1f1a0;
    if (puVar4 != (undefined1 *)0x0) {
      puVar5 = puVar4;
    }
    pbVar8 = pbVar8 + ((ulonglong)*pbVar8 * 0x100 + (ulonglong)(byte)puVar9[0x21] + 1) * 2;
    param_1[5] = pbVar8;
    if (0x1f < *(uint *)(puVar5 + 0x18)) {
      puVar10 = *(undefined1 **)(puVar5 + 0x10);
    }
    uVar2 = *(uint *)(param_1 + 3);
    for (; ((uVar2 < 0xffff && (pbVar8 < puVar10 + uVar1)) && (pbVar8 + *pbVar8 < puVar10 + uVar1));
        pbVar8 = pbVar8 + (ulonglong)*pbVar8 + 1) {
      iVar7 = *(int *)(param_1 + 5);
      piVar6 = (int *)FUN_144e30550(param_1 + 3);
      *piVar6 = (int)pbVar8 - iVar7;
      uVar2 = *(uint *)(param_1 + 3);
    }
  }
  return;
}



// FUNCTION 144e37580 FUN_144e37580 body=421 status=ok
// SIG undefined FUN_144e37580(void)

ulonglong FUN_144e37580(longlong param_1,void *param_2,ulonglong param_3,uint *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 extraout_var;
  uint uVar6;
  undefined2 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_48 [32];
  
  uVar8 = *(uint *)(param_1 + 8);
  uVar4 = (ulonglong)uVar8;
  uVar11 = param_3 & 0xffffffff;
  if (uVar8 == 0x10000) {
    uVar8 = 0x102;
  }
  else {
    if (uVar8 != 0x20000) goto LAB_144e375dd;
    uVar4 = 0;
    uVar8 = (uint)**(byte **)(param_1 + 0x10) * 0x100 + (uint)(*(byte **)(param_1 + 0x10))[1];
    if (uVar8 == 0) goto LAB_144e375dd;
  }
  if ((int)param_3 < 0) {
    uVar11 = 0xffffffffffffffff;
    do {
      uVar11 = uVar11 + 1;
    } while (*(char *)(uVar11 + (longlong)param_2) != '\0');
  }
  uVar10 = (uint)uVar11;
  if (uVar10 != 0) {
    puVar3 = *(undefined2 **)(param_1 + 0x30);
    LOCK();
    UNLOCK();
    while (puVar3 == (undefined2 *)0x0) {
      puVar3 = (undefined2 *)FUN_14286432f();
      if (puVar3 == (undefined2 *)0x0) {
        return 0;
      }
      uVar6 = 0;
      puVar7 = puVar3;
      if (uVar8 != 0) {
        do {
          *puVar7 = (short)uVar6;
          uVar6 = uVar6 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar6 < uVar8);
      }
      FUN_144e301d0(puVar3,uVar8,2,FUN_144e37730,param_1);
      LOCK();
      uVar4 = *(ulonglong *)(param_1 + 0x30);
      bVar13 = uVar4 == 0;
      if (bVar13) {
        *(ulonglong *)(param_1 + 0x30) = (ulonglong)puVar3;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar13) break;
      uVar4 = thunk_FUN_1400020a8(puVar3);
      puVar3 = *(undefined2 **)(param_1 + 0x30);
      LOCK();
      UNLOCK();
    }
    iVar12 = 0;
    iVar9 = uVar8 - 1;
    if (-1 < iVar9) {
      do {
        uVar6 = (uint)(iVar9 + iVar12) >> 1;
        lVar5 = FUN_144e377c0(param_1,local_48,puVar3[uVar6]);
        uVar8 = *(uint *)(lVar5 + 0x10);
        if (uVar8 == uVar10) {
          if (uVar8 == 0) {
            uVar4 = 0;
          }
          else {
            iVar2 = memcmp(param_2,*(void **)(lVar5 + 8),(ulonglong)uVar8);
            uVar4 = CONCAT44(extraout_var,iVar2);
          }
        }
        else {
          uVar4 = (ulonglong)(uVar10 - uVar8);
        }
        if ((int)uVar4 < 0) {
          iVar9 = uVar6 - 1;
        }
        else {
          if ((int)uVar4 < 1) {
            uVar1 = puVar3[uVar6];
            *param_4 = (uint)uVar1;
            return CONCAT71((uint7)(byte)(uVar1 >> 8),1);
          }
          iVar12 = uVar6 + 1;
        }
      } while (iVar12 <= iVar9);
    }
    return uVar4 & 0xffffffffffffff00;
  }
LAB_144e375dd:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 144e37730 FUN_144e37730 body=143 status=ok
// SIG undefined FUN_144e37730(void)

int FUN_144e37730(undefined2 *param_1,undefined2 *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  lVar3 = FUN_144e377c0(param_3,local_38,*param_1);
  lVar4 = FUN_144e377c0(param_3,local_20,*param_2);
  uVar1 = *(uint *)(lVar4 + 0x10);
  if (uVar1 != *(uint *)(lVar3 + 0x10)) {
    return *(uint *)(lVar3 + 0x10) - uVar1;
  }
  if (uVar1 == 0) {
    return 0;
  }
  iVar2 = memcmp(*(void **)(lVar3 + 8),*(void **)(lVar4 + 8),(ulonglong)uVar1);
  return iVar2;
}



// FUNCTION 144e377c0 FUN_144e377c0 body=241 status=ok
// SIG undefined FUN_144e377c0(void)

longlong FUN_144e377c0(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (*(int *)(param_1 + 8) == 0x10000) {
    if (param_3 < 0x102) {
      uVar2 = *(uint *)(&DAT_149a229e0 + (ulonglong)param_3 * 4);
      *(char **)(param_2 + 8) = ".notdef" + uVar2;
      *(uint *)(param_2 + 0x10) =
           (*(int *)(&DAT_149a229e0 + (ulonglong)(param_3 + 1) * 4) - uVar2) + -1;
      return param_2;
    }
  }
  else if ((*(int *)(param_1 + 8) == 0x20000) &&
          (pbVar3 = *(byte **)(param_1 + 0x10), param_3 < (uint)*pbVar3 * 0x100 + (uint)pbVar3[1]))
  {
    uVar2 = (uint)pbVar3[(ulonglong)param_3 * 2 + 2] * 0x100 +
            (uint)pbVar3[(ulonglong)param_3 * 2 + 3];
    if (uVar2 < 0x102) {
      uVar1 = *(uint *)(&DAT_149a229e0 + (ulonglong)uVar2 * 4);
      *(char **)(param_2 + 8) = ".notdef" + uVar1;
      *(uint *)(param_2 + 0x10) =
           (*(int *)(&DAT_149a229e0 + (ulonglong)(uVar2 + 1) * 4) - uVar1) + -1;
      return param_2;
    }
    if (uVar2 - 0x102 < *(uint *)(param_1 + 0x18)) {
      pbVar3 = (byte *)((ulonglong)
                        *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar2 - 0x102) * 4) +
                       *(longlong *)(param_1 + 0x28));
      *(byte **)(param_2 + 8) = pbVar3 + 1;
      *(uint *)(param_2 + 0x10) = (uint)*pbVar3;
      return param_2;
    }
  }
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  return param_2;
}


