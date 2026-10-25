// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144b5ebb0 FUN_144b5ebb0 body=101 status=ok
// SIG undefined FUN_144b5ebb0(void)

ulonglong FUN_144b5ebb0(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if (*(int *)(param_2 + 0x60) != 0x6f75746c) {
    return 0x12;
  }
  uVar1 = FUN_144b5aa70(*param_1,(int)*(short *)(param_2 + 0x9a),(int)*(short *)(param_2 + 0x98),
                        param_1 + 4);
  if ((int)uVar1 == 0) {
    FUN_144b5ade0((short *)(param_2 + 0x98),param_1 + 4);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 144b5ec30 FUN_144b5ec30 body=78 status=ok
// SIG undefined FUN_144b5ec30(void)

ulonglong FUN_144b5ec30(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_144b5aa70(*param_1,(int)*(short *)((longlong)param_1 + 0x22),
                        (int)*(short *)(param_1 + 4),param_2 + 0x20);
  if ((int)uVar1 == 0) {
    FUN_144b5ade0(param_1 + 4,param_2 + 0x20);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 144b5ec80 FUN_144b5ec80 body=61 status=ok
// SIG undefined FUN_144b5ec80(void)

void FUN_144b5ec80(longlong param_1,longlong param_2,undefined4 *param_3)

{
  if (param_2 != 0) {
    FUN_144b5aea0(param_1 + 0x20);
  }
  if (param_3 != (undefined4 *)0x0) {
    FUN_144b5ada0(param_1 + 0x20,*param_3,param_3[1]);
  }
  return;
}



// FUNCTION 144b5ed10 FUN_144b5ed10 body=171 status=ok
// SIG undefined FUN_144b5ed10(void)

undefined8 FUN_144b5ed10(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_1 == 0) || (param_3 == 0)) {
    return 6;
  }
  if ((int)param_2 == 0x62697473) {
    uVar1 = FUN_144b5efd0(param_1,&DAT_149970860);
    return uVar1;
  }
  if ((int)param_2 == 0x6f75746c) {
    uVar1 = FUN_144b5efd0(param_1,&DAT_149970898,param_3);
    return uVar1;
  }
  lVar2 = FUN_144b587b0(param_1,param_2,0);
  if ((lVar2 != 0) && (lVar2 + 0x28 != 0)) {
    uVar1 = FUN_144b5efd0(param_1,lVar2 + 0x28,param_3);
    return uVar1;
  }
  return 0x12;
}



// FUNCTION 144b5edc0 FUN_144b5edc0 body=207 status=ok
// SIG undefined FUN_144b5edc0(void)

int FUN_144b5edc0(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong local_res8;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0x25;
  }
  if (param_2 != (longlong *)0x0) {
    iVar1 = FUN_144b5ed10(*param_1,*(undefined4 *)(param_1 + 0xc),&local_res8);
    if (iVar1 == 0) {
      if ((*(int *)(param_1 + 0xb) + 0x1fffffU < 0x3fffff) &&
         (*(int *)((longlong)param_1 + 0x5c) + 0x1fffffU < 0x3fffff)) {
        *(int *)(local_res8 + 0x14) = *(int *)(param_1 + 0xb) << 10;
        *(int *)(local_res8 + 0x18) = *(int *)((longlong)param_1 + 0x5c) << 10;
        iVar1 = (**(code **)(*(longlong *)(local_res8 + 8) + 8))(local_res8,param_1);
        if (iVar1 == 0) {
          *param_2 = local_res8;
          return 0;
        }
      }
      else {
        iVar1 = 6;
      }
      FUN_144b5ef90(local_res8);
    }
    return iVar1;
  }
  return 6;
}



// FUNCTION 144b5ee90 FUN_144b5ee90 body=250 status=ok
// SIG undefined FUN_144b5ee90(void)

int FUN_144b5ee90(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int local_res10 [2];
  
  if (((param_2 != (undefined8 *)0x0) && (param_1 != (undefined8 *)0x0)) && (param_1[1] != 0)) {
    *param_2 = 0;
    puVar1 = (undefined4 *)param_1[1];
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined8 *)*param_1;
      puVar3 = (undefined8 *)FUN_144b560d0(*puVar2,*puVar1,local_res10);
      if (local_res10[0] == 0) {
        *puVar3 = puVar2;
        puVar3[1] = puVar1;
        *(undefined4 *)(puVar3 + 2) = puVar1[1];
        *(undefined8 *)((longlong)puVar3 + 0x14) = *(undefined8 *)((longlong)param_1 + 0x14);
        *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_1 + 2);
        if ((*(code **)(puVar1 + 6) == (code *)0x0) ||
           (local_res10[0] = (**(code **)(puVar1 + 6))(param_1,puVar3), local_res10[0] == 0)) {
          *param_2 = puVar3;
        }
        else {
          FUN_144b5ef90(puVar3);
        }
      }
      return local_res10[0];
    }
    return 6;
  }
  return 6;
}



// FUNCTION 144b5ef90 FUN_144b5ef90 body=61 status=ok
// SIG undefined FUN_144b5ef90(void)

void FUN_144b5ef90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)*param_1;
    if (*(code **)(param_1[1] + 0x10) != (code *)0x0) {
      (**(code **)(param_1[1] + 0x10))();
    }
    FUN_144b56350(uVar1,param_1);
  }
  return;
}



// FUNCTION 144b5efd0 FUN_144b5efd0 body=108 status=ok
// SIG undefined FUN_144b5efd0(void)

int FUN_144b5efd0(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  
  uVar1 = *param_1;
  *param_3 = 0;
  puVar2 = (undefined8 *)FUN_144b560d0(uVar1,*param_2,local_res8);
  if (local_res8[0] == 0) {
    *puVar2 = param_1;
    puVar2[1] = param_2;
    *(undefined4 *)(puVar2 + 2) = param_2[1];
    *param_3 = puVar2;
    return 0;
  }
  return local_res8[0];
}



// FUNCTION 144b5f040 FUN_144b5f040 body=186 status=ok
// SIG undefined FUN_144b5f040(void)

int FUN_144b5f040(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int local_res8 [2];
  
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  if (param_2 == (longlong *)0x0) {
    return 6;
  }
  uVar1 = *param_1;
  lVar2 = FUN_144b560d0(uVar1,0xa8,local_res8);
  if (local_res8[0] == 0) {
    *(undefined8 **)(lVar2 + 0xa0) = param_1;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined1 *)(lVar2 + 0x68) = 0;
    *(undefined8 *)(lVar2 + 0x60) = uVar1;
    *(undefined4 *)(lVar2 + 0x5c) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0x90) = uVar1;
    *(undefined8 *)(lVar2 + 0x78) = 0;
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(lVar2 + 0x70) = 0;
    *(undefined4 *)(lVar2 + 0x8c) = 0xffffffff;
    *(undefined1 *)(lVar2 + 0x98) = 0;
  }
  *param_2 = lVar2;
  return local_res8[0];
}



// FUNCTION 144b5f100 FUN_144b5f100 body=72 status=ok
// SIG undefined FUN_144b5f100(void)

void FUN_144b5f100(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int param_5)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x3c) = param_2;
    *(undefined4 *)(param_1 + 0x2c) = param_3;
    *(undefined4 *)(param_1 + 0x30) = param_4;
    *(undefined4 *)(param_1 + 0x34) = param_4;
    if (param_5 < 0x10000) {
      param_5 = 0x10000;
    }
    *(int *)(param_1 + 0x38) = param_5;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  return;
}



// FUNCTION 144b5f150 FUN_144b5f150 body=834 status=ok
// SIG undefined FUN_144b5f150(void)

undefined8 FUN_144b5f150(undefined4 *param_1,short *param_2,char param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  uint local_res10;
  undefined8 local_res20;
  undefined8 local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48 [2];
  
  if (param_2 == (short *)0x0) {
    return 0x14;
  }
  if (param_1 == (undefined4 *)0x0) {
    return 6;
  }
  uVar5 = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x17] = 0xffffffff;
  param_1[0x1c] = 0;
  param_1[0x23] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x26) = 0;
  local_res10 = 0;
  if (0 < *param_2) {
    local_50 = 0;
    uVar9 = uVar5;
    do {
      uVar8 = (uint)uVar9;
      uVar14 = (uint)*(short *)(*(longlong *)(param_2 + 0xc) + local_50);
      lVar10 = *(longlong *)(param_2 + 4);
      piVar15 = (int *)(lVar10 + (ulonglong)uVar14 * 8);
      if ((uint)uVar5 < uVar14) {
        lVar11 = *(longlong *)(param_2 + 8);
        uVar2 = *(undefined8 *)piVar15;
        piVar12 = (int *)(lVar10 + uVar5 * 8);
        local_78 = *(undefined8 *)(lVar10 + uVar5 * 8);
        lVar10 = lVar11 + uVar5;
        bVar6 = *(byte *)(lVar11 + uVar5) & 3;
        if (bVar6 == 2) {
          return 0x14;
        }
        local_res20 = local_78;
        if (bVar6 == 0) {
          if ((*(byte *)(lVar11 + (ulonglong)uVar14) & 3) == 1) {
            piVar15 = piVar15 + -2;
            local_res20 = uVar2;
          }
          else {
            local_res20._0_4_ = (int)local_78;
            local_res20._4_4_ = (int)((ulonglong)local_78 >> 0x20);
            local_res20 = CONCAT44(((int)((ulonglong)uVar2 >> 0x20) + local_res20._4_4_) / 2,
                                   ((int)local_res20 + (int)uVar2) / 2);
          }
          piVar12 = piVar12 + -2;
          lVar10 = lVar10 + -1;
        }
        *(undefined1 *)(param_1 + 5) = 1;
        *(undefined8 *)(param_1 + 2) = local_res20;
        *(char *)((longlong)param_1 + 0x15) = param_3;
        if ((param_1[0xc] == 0) && ((param_3 == '\0' || (param_1[0xb] != 0)))) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        *(undefined1 *)(param_1 + 10) = uVar4;
        *(undefined8 *)(param_1 + 7) = local_res20;
        *param_1 = 0;
        if (piVar12 < piVar15) {
          do {
            lVar11 = lVar10 + 1;
            piVar13 = piVar12 + 2;
            bVar6 = *(byte *)(lVar10 + 1) & 3;
            if (bVar6 == 0) {
              iVar7 = *piVar13;
              local_78 = *(undefined8 *)piVar13;
              while( true ) {
                if (piVar15 <= piVar13) {
                  uVar2 = FUN_144b5f7b0(param_1,&local_78,&local_res20);
                  goto LAB_144b5f41a;
                }
                pbVar1 = (byte *)(lVar11 + 1);
                lVar11 = lVar11 + 1;
                uVar2 = *(undefined8 *)(piVar13 + 2);
                piVar13 = piVar13 + 2;
                bVar6 = *pbVar1 & 3;
                local_48[0] = uVar2;
                if (bVar6 == 1) break;
                if (bVar6 != 0) {
                  return 0x14;
                }
                local_68 = ((int)uVar2 + iVar7) / 2;
                local_64 = ((int)((ulonglong)uVar2 >> 0x20) + (int)((ulonglong)local_78 >> 0x20)) /
                           2;
                uVar3 = FUN_144b5f7b0(param_1,&local_78,&local_68);
                iVar7 = (int)uVar2;
                local_78 = uVar2;
                if ((int)uVar3 != 0) {
                  return uVar3;
                }
              }
              uVar2 = FUN_144b5f7b0(param_1,&local_78,local_48);
            }
            else if (bVar6 == 1) {
              local_70 = *piVar13;
              local_6c = piVar12[3];
              uVar2 = FUN_144b5f660(param_1,&local_70);
            }
            else {
              if (piVar15 < piVar12 + 4) {
                return 0x14;
              }
              if ((*(byte *)(lVar10 + 2) & 3) != 2) {
                return 0x14;
              }
              local_58 = *(undefined8 *)piVar13;
              piVar13 = piVar12 + 6;
              lVar11 = lVar10 + 3;
              local_60 = *(undefined8 *)(piVar12 + 4);
              if (piVar15 < piVar13) {
                uVar2 = FUN_144b5fdb0(param_1,&local_58,&local_60,&local_res20);
                break;
              }
              local_48[0] = *(undefined8 *)piVar13;
              uVar2 = FUN_144b5fdb0(param_1,&local_58,&local_60,local_48);
            }
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            lVar10 = lVar11;
            piVar12 = piVar13;
          } while (piVar13 < piVar15);
LAB_144b5f41a:
          uVar8 = local_res10;
          if ((int)uVar2 != 0) {
            return uVar2;
          }
        }
        if ((*(char *)(param_1 + 5) == '\0') && (uVar2 = FUN_144b5f4a0(param_1), (int)uVar2 != 0)) {
          return uVar2;
        }
      }
      uVar5 = (ulonglong)(uVar14 + 1);
      local_50 = local_50 + 2;
      local_res10 = uVar8 + 1;
      uVar9 = (ulonglong)local_res10;
    } while ((int)local_res10 < (int)*param_2);
  }
  return 0;
}



// FUNCTION 144b5f4a0 FUN_144b5f4a0 body=442 status=ok
// SIG undefined FUN_144b5f4a0(void)

int FUN_144b5f4a0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  iVar2 = 0;
  if (param_1 == (undefined4 *)0x0) {
    return 6;
  }
  if (*(char *)((longlong)param_1 + 0x15) == '\0') {
    if (((param_1[2] != param_1[7]) || (param_1[3] != param_1[8])) &&
       (iVar2 = FUN_144b5f660(param_1,param_1 + 7), iVar2 != 0)) {
      return iVar2;
    }
    param_1[1] = param_1[6];
    iVar2 = FUN_144b58c40(*param_1);
    if (iVar2 != 0) {
      iVar1 = FUN_144b60ff0(param_1,iVar2 < 0,param_1[9]);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar2 = FUN_144b61100(param_1,iVar2 >= 0,param_1[9]);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    FUN_144b60990(param_1 + 0x10,0);
    param_1 = param_1 + 0x1c;
    uVar3 = 1;
  }
  else {
    iVar1 = FUN_144b60e60(param_1,*param_1,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = param_1[0x1c] - param_1[0x23];
    if ((0 < iVar1) && (iVar2 = FUN_144b608b0(param_1 + 0x10,iVar1), iVar2 == 0)) {
      pbVar6 = (byte *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uint)param_1[0x10]);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x12) + (ulonglong)(uint)param_1[0x10] * 8);
      pbVar7 = (byte *)(((ulonglong)(uint)param_1[0x1c] - 1) + *(longlong *)(param_1 + 0x20));
      puVar4 = (undefined8 *)
               (*(longlong *)(param_1 + 0x1e) + ((ulonglong)(uint)param_1[0x1c] - 1) * 8);
      if ((undefined8 *)(*(longlong *)(param_1 + 0x1e) + (longlong)(int)param_1[0x23] * 8) <= puVar4
         ) {
        do {
          *puVar5 = *puVar4;
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + -1;
          *pbVar6 = *pbVar7 & 0xf3;
          pbVar6 = pbVar6 + 1;
          pbVar7 = pbVar7 + -1;
        } while ((undefined8 *)(*(longlong *)(param_1 + 0x1e) + (longlong)(int)param_1[0x23] * 8) <=
                 puVar4);
      }
      param_1[0x1c] = param_1[0x23];
      param_1[0x10] = param_1[0x10] + iVar1;
      *(undefined1 *)(param_1 + 0x16) = 0;
      *(undefined1 *)(param_1 + 0x22) = 0;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 7);
    iVar2 = FUN_144b60e60(param_1,param_1[6] + 0xb40000,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar3 = 0;
    param_1 = param_1 + 0x10;
  }
  FUN_144b60990(param_1,uVar3);
  return 0;
}



// FUNCTION 144b5f660 FUN_144b5f660 body=334 status=ok
// SIG undefined FUN_144b5f660(void)

int FUN_144b5f660(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_res8;
  int local_resc;
  int local_res18;
  int local_res1c;
  
  iVar3 = 0;
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    local_res8 = *param_2 - param_1[2];
    local_resc = param_2[1] - param_1[3];
    if ((local_res8 != 0) || (local_resc != 0)) {
      iVar1 = FUN_144b58e10(&local_res8);
      iVar2 = FUN_144b58bd0(local_res8,local_resc);
      FUN_144b58f10(&local_res8,param_1[0xf],iVar2 + 0x5a0000);
      if ((char)param_1[5] == '\0') {
        param_1[1] = iVar2;
        iVar3 = FUN_144b61360(param_1,iVar1);
      }
      else {
        iVar3 = FUN_144b613d0(param_1,iVar2,iVar1);
      }
      if (iVar3 == 0) {
        piVar5 = param_1 + 0x10;
        iVar3 = 1;
        do {
          local_res18 = local_res8 + *param_2;
          local_res1c = param_2[1] + local_resc;
          iVar4 = FUN_144b60a90(piVar5,&local_res18,1);
          if (iVar4 != 0) {
            return iVar4;
          }
          piVar5 = piVar5 + 0xc;
          local_res8 = -local_res8;
          local_resc = -local_resc;
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
        *param_1 = iVar2;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_2;
        param_1[4] = iVar1;
        iVar3 = 0;
      }
    }
    return iVar3;
  }
  return 6;
}



// FUNCTION 144b5f7b0 FUN_144b5f7b0 body=1491 status=ok
// SIG undefined FUN_144b5f7b0(void)

void FUN_144b5f7b0(int *param_1,int *param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int *piVar16;
  undefined1 auStack_1d8 [32];
  char local_1b8;
  int local_1b0;
  int iStack_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int iStack_194;
  int local_190;
  int local_188;
  int local_184;
  int *local_180;
  int *local_178;
  int *local_170;
  int local_168;
  int local_164;
  undefined8 local_160;
  int *local_158;
  int *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  int local_58 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1b8 = '\x01';
  local_158 = param_1;
  local_150 = param_3;
  if (((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (param_3 != (int *)0x0)) {
    if ((((param_1[2] - *param_2) + 1U < 3) && ((param_1[3] - param_2[1]) + 1U < 3)) &&
       (((*param_2 - *param_3) + 1U < 3 && ((param_2[1] - param_3[1]) + 1U < 3)))) {
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_3;
    }
    else {
      local_170 = (int *)&local_148;
      local_148 = *(undefined8 *)param_3;
      local_140 = *(undefined8 *)param_2;
      local_138 = *(undefined8 *)(param_1 + 2);
      local_180 = (int *)((longlong)&local_138 + 4);
      do {
        piVar16 = local_170;
        iVar9 = 0;
        iVar6 = *param_1;
        iVar8 = iVar6;
        local_1a8 = iVar6;
        if (local_170 < local_58) {
          iVar12 = local_170[2];
          local_178 = local_170 + 4;
          iVar13 = *local_170 - iVar12;
          iVar15 = local_170[1] - local_170[3];
          local_1a4 = *local_178;
          if (((iVar12 - local_1a4) + 1U < 3) && ((local_170[3] - local_170[5]) + 1U < 3)) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if ((iVar13 + 1U < 3) && (iVar15 + 1U < 3)) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (bVar4) {
            if (!bVar5) {
              iVar6 = FUN_144b58bd0(iVar13,iVar15);
              iVar8 = iVar6;
            }
          }
          else if (bVar5) {
            iVar6 = FUN_144b58bd0();
            iVar8 = iVar6;
          }
          else {
            iVar8 = FUN_144b58bd0();
            iVar6 = FUN_144b58bd0(iVar13,iVar15);
          }
          local_1a8 = iVar6;
          uVar7 = FUN_144b58c40(iVar8,iVar6);
          if ((int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)) < 0x1e0000)
          goto LAB_144b5f9f4;
          if ((char)param_1[5] != '\0') {
            *param_1 = iVar8;
          }
          piVar16[8] = local_1a4;
          iVar6 = (local_1a4 + iVar12) / 2;
          piVar16[6] = iVar6;
          iVar8 = (*piVar16 + iVar12) / 2;
          piVar16[2] = iVar8;
          *local_178 = (iVar8 + iVar6) / 2;
          piVar16[9] = piVar16[5];
          iVar6 = (piVar16[5] + piVar16[3]) / 2;
          piVar16[7] = iVar6;
          iVar8 = (piVar16[1] + piVar16[3]) / 2;
          piVar16[3] = iVar8;
          local_180 = local_180 + 4;
          piVar16[5] = (iVar8 + iVar6) / 2;
          local_170 = local_178;
        }
        else {
LAB_144b5f9f4:
          if (local_1b8 == '\0') {
            uVar7 = FUN_144b58c40(*param_1,iVar8);
            if (0x78000 < (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f))) {
              *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar16 + 4);
              param_1[1] = iVar8;
              param_1[0xc] = 0;
              iVar9 = FUN_144b61360(param_1,0);
              param_1[0xc] = param_1[0xd];
            }
          }
          else {
            local_1b8 = '\0';
            if ((char)param_1[5] == '\0') {
              param_1[1] = iVar8;
              iVar9 = FUN_144b61360(param_1,0);
            }
            else {
              iVar9 = FUN_144b613d0(param_1,iVar8,0);
            }
          }
          if (iVar9 != 0) goto LAB_144b5fd72;
          local_190 = iVar9;
          iVar9 = FUN_144b58c40(iVar8,iVar6);
          local_19c = iVar9 / 2 + iVar8;
          uVar10 = FUN_144b58b30(iVar9 / 2);
          local_1a4 = FUN_144b555e0(param_1[0xf],uVar10);
          if ((char)param_1[10] != '\0') {
            local_190 = FUN_144b58bd0(*piVar16 - piVar16[4],piVar16[1] - piVar16[5]);
          }
          iVar8 = iVar6 + 0x5a0000;
          iVar9 = 0;
          local_19c = local_19c - iVar6;
          local_178 = (int *)((ulonglong)local_178 & 0xffffffff00000000);
          puVar14 = (uint *)(param_1 + 0x10);
          do {
            local_1a0 = iVar8;
            FUN_144b58f10(&local_198,local_1a4,local_19c + iVar8);
            local_198 = local_198 + piVar16[2];
            iStack_194 = iStack_194 + piVar16[3];
            FUN_144b58f10(&local_1b0,param_1[0xf]);
            local_1b0 = local_1b0 + *piVar16;
            iStack_1ac = iStack_1ac + piVar16[1];
            if ((char)param_1[10] == '\0') {
LAB_144b5fccc:
              iVar6 = FUN_144b608b0(puVar14);
              if (iVar6 == 0) {
                uVar7 = *puVar14;
                lVar3 = *(longlong *)(puVar14 + 4);
                puVar1 = (undefined8 *)(*(longlong *)(puVar14 + 2) + (ulonglong)uVar7 * 8);
                *puVar1 = CONCAT44(iStack_194,local_198);
                puVar1[1] = CONCAT44(iStack_1ac,local_1b0);
                *(undefined2 *)(lVar3 + (ulonglong)uVar7) = 0x100;
                *puVar14 = *puVar14 + 2;
              }
              *(undefined1 *)(puVar14 + 6) = 0;
              if (iVar6 != 0) goto LAB_144b5fd72;
            }
            else {
              uVar2 = *(undefined8 *)(*(longlong *)(puVar14 + 2) + (ulonglong)(*puVar14 - 1) * 8);
              iVar12 = (int)uVar2;
              local_160 = uVar2;
              iVar6 = FUN_144b58bd0(local_1b0 - iVar12,iStack_1ac - (int)((ulonglong)uVar2 >> 0x20))
              ;
              uVar7 = FUN_144b58c40(local_190,iVar6);
              iVar8 = local_1a0;
              if ((int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)) < 0x5a0001)
              goto LAB_144b5fccc;
              iVar8 = local_160._4_4_;
              iVar9 = FUN_144b58bd0(piVar16[4] - iVar12,*local_180 - local_160._4_4_);
              iVar13 = FUN_144b58bd0(*piVar16 - local_1b0,piVar16[1] - iStack_1ac);
              local_168 = local_1b0 - iVar12;
              local_164 = iStack_1ac - iVar8;
              uVar10 = FUN_144b58e10(&local_168);
              uVar7 = FUN_144b58b00(iVar6 - iVar13);
              uVar11 = FUN_144b58b00(iVar9 - iVar13);
              uVar10 = FUN_144b55580(uVar10,(uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f),
                                     (uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f));
              FUN_144b58f10(&local_188,uVar10);
              local_188 = local_188 + iVar12;
              local_184 = local_184 + iVar8;
              *(undefined1 *)(puVar14 + 6) = 0;
              iVar6 = FUN_144b60a90(puVar14,&local_188);
              if ((iVar6 != 0) || (iVar6 = FUN_144b60a90(puVar14,&local_1b0), iVar6 != 0))
              goto LAB_144b5fd72;
              iVar6 = FUN_144b608b0(puVar14,2);
              if (iVar6 == 0) {
                uVar7 = *puVar14;
                lVar3 = *(longlong *)(puVar14 + 4);
                puVar1 = (undefined8 *)(*(longlong *)(puVar14 + 2) + (ulonglong)uVar7 * 8);
                *puVar1 = CONCAT44(iStack_194,local_198);
                puVar1[1] = uVar2;
                *(undefined2 *)(lVar3 + (ulonglong)uVar7) = 0x100;
                *puVar14 = *puVar14 + 2;
              }
              *(undefined1 *)(puVar14 + 6) = 0;
              if ((iVar6 != 0) || (iVar6 = FUN_144b60a90(puVar14), iVar6 != 0)) goto LAB_144b5fd72;
              param_1 = local_158;
              piVar16 = local_170;
              iVar9 = (int)local_178;
              iVar8 = local_1a0;
            }
            iVar9 = iVar9 + 1;
            iVar8 = iVar8 + -0xb40000;
            puVar14 = puVar14 + 0xc;
            local_178 = (int *)CONCAT44(local_178._4_4_,iVar9);
          } while (iVar9 < 2);
          local_170 = piVar16 + -4;
          local_180 = local_180 + -4;
          *param_1 = local_1a8;
          local_1a0 = iVar8;
        }
      } while (&local_148 <= local_170);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)local_150;
    }
  }
LAB_144b5fd72:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_1d8);
}



// FUNCTION 144b5fdb0 FUN_144b5fdb0 body=1431 status=ok
// SIG undefined FUN_144b5fdb0(void)

void FUN_144b5fdb0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  int *piVar15;
  int *piVar16;
  undefined1 auStack_208 [32];
  char local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int iStack_1d4;
  int local_1d0;
  int iStack_1cc;
  int local_1c8;
  int iStack_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  int local_1a0;
  int *local_198;
  int local_190;
  int local_18c;
  undefined8 local_188;
  int *local_180;
  int *local_178;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  int local_68 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1e8 = '\x01';
  local_180 = param_1;
  local_178 = param_4;
  if ((((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (param_3 != (int *)0x0)) &&
     (param_4 != (int *)0x0)) {
    if (((((param_1[2] - *param_2) + 1U < 3) && ((param_1[3] - param_2[1]) + 1U < 3)) &&
        (((*param_2 - *param_3) + 1U < 3 &&
         (((param_2[1] - param_3[1]) + 1U < 3 && ((*param_3 - *param_4) + 1U < 3)))))) &&
       ((param_3[1] - param_4[1]) + 1U < 3)) {
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_4;
    }
    else {
      local_168 = *(undefined8 *)param_4;
      piVar16 = (int *)&local_168;
      piVar15 = (int *)((longlong)&local_150 + 4);
      local_160 = *(undefined8 *)param_3;
      local_158 = *(undefined8 *)param_2;
      local_150 = *(undefined8 *)(param_1 + 2);
      do {
        iVar5 = 0;
        local_1e4 = *param_1;
        local_1e0 = local_1e4;
        local_1dc = local_1e4;
        local_1b0 = piVar15;
        local_198 = piVar16;
        if ((piVar16 < local_68) &&
           (cVar4 = FUN_144b606e0(piVar16,&local_1e4,&local_1e0,&local_1dc), cVar4 == '\0')) {
          if ((char)param_1[5] != '\0') {
            *param_1 = local_1e4;
          }
          FUN_144b60610(piVar16);
          piVar16 = piVar16 + 6;
          piVar15 = piVar15 + 6;
        }
        else {
          iVar6 = local_1dc;
          iVar11 = local_1e0;
          iVar8 = local_1e4;
          if (local_1e8 == '\0') {
            uVar10 = FUN_144b58c40(*param_1,local_1e4);
            if (0x5a000 < (int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f))) {
              *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar16 + 6);
              param_1[1] = iVar8;
              param_1[0xc] = 0;
              iVar5 = FUN_144b61360(param_1,0);
              param_1[0xc] = param_1[0xd];
            }
          }
          else {
            local_1e8 = '\0';
            if ((char)param_1[5] == '\0') {
              param_1[1] = local_1e4;
              iVar5 = FUN_144b61360(param_1,0);
            }
            else {
              iVar5 = FUN_144b613d0(param_1,local_1e4,0);
            }
          }
          if (iVar5 != 0) goto LAB_144b60336;
          local_1c0 = iVar5;
          iVar5 = FUN_144b58c40(iVar8,iVar11);
          iVar6 = FUN_144b58c40(iVar11,iVar6);
          iVar7 = FUN_144b58c40(iVar8,iVar11);
          local_1e0 = iVar7 / 2 + iVar8;
          iVar8 = FUN_144b58c40(iVar11,local_1dc);
          iVar11 = iVar8 / 2 + iVar11;
          uVar9 = FUN_144b58b30(iVar5 / 2);
          local_1a8 = FUN_144b555e0(param_1[0xf],uVar9);
          uVar9 = FUN_144b58b30(iVar6 / 2);
          local_1a4 = FUN_144b555e0(param_1[0xf],uVar9);
          if ((char)param_1[10] != '\0') {
            local_1c0 = FUN_144b58bd0(*piVar16 - piVar16[6],piVar16[1] - piVar16[7]);
          }
          iVar5 = iVar11 + 0x5a0000;
          puVar14 = (uint *)(param_1 + 0x10);
          local_1e0 = local_1e0 - iVar11;
          local_1a0 = local_1dc - iVar11;
          local_1bc = 0;
          do {
            iVar11 = local_1bc;
            local_1e4 = iVar5;
            FUN_144b58f10(&local_1d0,local_1a8,local_1e0 + iVar5);
            local_1d0 = local_1d0 + piVar16[4];
            iStack_1cc = iStack_1cc + piVar16[5];
            FUN_144b58f10(&local_1c8,local_1a4,iVar5);
            local_1c8 = local_1c8 + piVar16[2];
            iStack_1c4 = iStack_1c4 + piVar16[3];
            FUN_144b58f10(&local_1d8,param_1[0xf]);
            local_1d8 = local_1d8 + *piVar16;
            iStack_1d4 = iStack_1d4 + piVar16[1];
            if ((char)param_1[10] == '\0') {
LAB_144b60282:
              iVar8 = FUN_144b608b0(puVar14);
              if (iVar8 == 0) {
                uVar13 = (ulonglong)*puVar14;
                lVar3 = *(longlong *)(puVar14 + 4);
                puVar1 = (undefined8 *)(*(longlong *)(puVar14 + 2) + uVar13 * 8);
                *puVar1 = CONCAT44(iStack_1cc,local_1d0);
                puVar1[1] = CONCAT44(iStack_1c4,local_1c8);
                puVar1[2] = CONCAT44(iStack_1d4,local_1d8);
                *(undefined2 *)(lVar3 + uVar13) = 0x202;
                *(undefined1 *)(lVar3 + 2 + uVar13) = 1;
                *puVar14 = *puVar14 + 3;
              }
              *(undefined1 *)(puVar14 + 6) = 0;
            }
            else {
              uVar2 = *(undefined8 *)(*(longlong *)(puVar14 + 2) + (ulonglong)(*puVar14 - 1) * 8);
              iVar6 = (int)uVar2;
              local_188 = uVar2;
              iVar8 = FUN_144b58bd0(local_1d8 - iVar6,iStack_1d4 - (int)((ulonglong)uVar2 >> 0x20));
              uVar10 = FUN_144b58c40(local_1c0,iVar8);
              iVar5 = local_1e4;
              if ((int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) < 0x5a0001)
              goto LAB_144b60282;
              iVar5 = local_188._4_4_;
              iVar11 = FUN_144b58bd0(piVar16[6] - iVar6,*local_1b0 - local_188._4_4_);
              iVar7 = FUN_144b58bd0(*piVar16 - local_1d8,piVar16[1] - iStack_1d4);
              local_190 = local_1d8 - iVar6;
              local_18c = iStack_1d4 - iVar5;
              uVar9 = FUN_144b58e10(&local_190);
              uVar10 = FUN_144b58b00(iVar8 - iVar7);
              uVar12 = FUN_144b58b00(iVar11 - iVar7);
              uVar9 = FUN_144b55580(uVar9,(uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f),
                                    (uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f));
              FUN_144b58f10(&local_1b8,uVar9);
              local_1b8 = local_1b8 + iVar6;
              local_1b4 = local_1b4 + iVar5;
              *(undefined1 *)(puVar14 + 6) = 0;
              iVar5 = FUN_144b60a90(puVar14,&local_1b8);
              if ((iVar5 != 0) || (iVar5 = FUN_144b60a90(puVar14,&local_1d8), iVar5 != 0))
              goto LAB_144b60336;
              iVar5 = FUN_144b608b0(puVar14,3);
              if (iVar5 == 0) {
                uVar13 = (ulonglong)*puVar14;
                lVar3 = *(longlong *)(puVar14 + 4);
                puVar1 = (undefined8 *)(*(longlong *)(puVar14 + 2) + uVar13 * 8);
                *puVar1 = CONCAT44(iStack_1c4,local_1c8);
                puVar1[1] = CONCAT44(iStack_1cc,local_1d0);
                puVar1[2] = uVar2;
                *(undefined2 *)(lVar3 + uVar13) = 0x202;
                *(undefined1 *)(lVar3 + 2 + uVar13) = 1;
                *puVar14 = *puVar14 + 3;
              }
              *(undefined1 *)(puVar14 + 6) = 0;
              if (iVar5 != 0) goto LAB_144b60336;
              iVar8 = FUN_144b60a90(puVar14);
              param_1 = local_180;
              piVar16 = local_198;
              iVar5 = local_1e4;
              iVar11 = local_1bc;
            }
            if (iVar8 != 0) goto LAB_144b60336;
            local_1bc = iVar11 + 1;
            iVar5 = iVar5 + -0xb40000;
            puVar14 = puVar14 + 0xc;
          } while (local_1bc < 2);
          piVar16 = piVar16 + -6;
          piVar15 = local_1b0 + -6;
          *param_1 = local_1dc;
          local_1e4 = iVar5;
        }
      } while (&local_168 <= piVar16);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)local_178;
      local_1b0 = piVar15;
      local_198 = piVar16;
    }
  }
LAB_144b60336:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_208);
}



// FUNCTION 144b60370 FUN_144b60370 body=48 status=ok
// SIG undefined FUN_144b60370(void)

void FUN_144b60370(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((((param_1 != 0) && (param_3 != 0)) && (param_2 < 2)) &&
     (lVar1 = param_1 + 0x40 + (longlong)(int)param_2 * 0x30, *(char *)(lVar1 + 0x28) != '\0')) {
    FUN_144b60d10(lVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 144b603a0 FUN_144b603a0 body=200 status=ok
// SIG undefined FUN_144b603a0(void)

void FUN_144b603a0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    uVar2 = **(undefined8 **)(param_1 + 0xa0);
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x68) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
    FUN_144b56350(uVar1,*(undefined8 *)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    FUN_144b56350(uVar2,param_1);
  }
  return;
}



// FUNCTION 144b60470 FUN_144b60470 body=412 status=ok
// SIG undefined FUN_144b60470(void)

ulonglong FUN_144b60470(longlong *param_1,longlong param_2,char param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined8 *local_res8;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(undefined **)(lVar1 + 8) != &DAT_149970898)) {
    return 6;
  }
  uVar5 = FUN_144b5ee90(lVar1,&local_res8);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  iVar2 = FUN_144b5b400(local_res8 + 4);
  iVar9 = 0;
  bVar10 = iVar2 != 0;
  iVar2 = 0;
  if (param_3 != '\0') {
    bVar10 = !bVar10;
  }
  uVar5 = (ulonglong)bVar10;
  uVar3 = FUN_144b5f150(param_2,local_res8 + 4,0);
  if (uVar3 != 0) goto LAB_144b605e8;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar4 = 0;
    iVar6 = *(int *)(param_2 + 0x40 + uVar5 * 0x30);
    pbVar7 = *(byte **)(param_2 + 0x50 + uVar5 * 0x30);
    iVar2 = 0;
    if (iVar6 != 0) {
      do {
        if ((*pbVar7 & 4) == 0) {
          if (iVar4 == 0) goto LAB_144b60572;
        }
        else {
          if (iVar4 != 0) goto LAB_144b60572;
          iVar4 = 1;
        }
        iVar2 = iVar9;
        if ((*pbVar7 & 8) != 0) {
          iVar2 = iVar9 + 1;
          iVar4 = 0;
        }
        iVar8 = iVar8 + 1;
        pbVar7 = pbVar7 + 1;
        iVar6 = iVar6 + -1;
        iVar9 = iVar2;
      } while (iVar6 != 0);
      if (iVar4 != 0) {
LAB_144b60572:
        iVar2 = 0;
        iVar8 = 0;
        goto LAB_144b60580;
      }
    }
    *(undefined1 *)(param_2 + 0x68 + uVar5 * 0x30) = 1;
  }
LAB_144b60580:
  FUN_144b5ac70(*local_res8,local_res8 + 4);
  uVar3 = FUN_144b5aa70(*local_res8,iVar8,iVar2,local_res8 + 4);
  if (uVar3 == 0) {
    *(undefined4 *)(local_res8 + 4) = 0;
    FUN_144b60370(param_2,uVar5,local_res8 + 4);
    if (param_4 != '\0') {
      FUN_144b5ef90(*param_1);
    }
    *param_1 = (longlong)local_res8;
    return 0;
  }
LAB_144b605e8:
  FUN_144b5ef90(local_res8);
  if (param_4 == '\0') {
    *param_1 = 0;
  }
  return (ulonglong)uVar3;
}



// FUNCTION 144b60610 FUN_144b60610 body=203 status=ok
// SIG undefined FUN_144b60610(void)

void FUN_144b60610(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[2];
  param_1[0xc] = param_1[6];
  iVar1 = (*param_1 + iVar3) / 2;
  param_1[2] = iVar1;
  iVar2 = (param_1[6] + param_1[4]) / 2;
  param_1[10] = iVar2;
  iVar4 = param_1[3];
  iVar3 = (param_1[4] + iVar3) / 2;
  iVar1 = (iVar3 + iVar1) / 2;
  param_1[4] = iVar1;
  param_1[0xd] = param_1[7];
  iVar3 = (iVar2 + iVar3) / 2;
  param_1[8] = iVar3;
  param_1[6] = (iVar3 + iVar1) / 2;
  iVar3 = (param_1[1] + iVar4) / 2;
  param_1[3] = iVar3;
  iVar1 = (param_1[7] + param_1[5]) / 2;
  param_1[0xb] = iVar1;
  iVar4 = (param_1[5] + iVar4) / 2;
  iVar3 = (iVar4 + iVar3) / 2;
  param_1[5] = iVar3;
  iVar4 = (iVar1 + iVar4) / 2;
  param_1[9] = iVar4;
  param_1[7] = (iVar4 + iVar3) / 2;
  return;
}



// FUNCTION 144b606e0 FUN_144b606e0 body=452 status=ok
// SIG undefined FUN_144b606e0(void)

ulonglong FUN_144b606e0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar10 = param_1[4] - param_1[6];
  iVar9 = param_1[5] - param_1[7];
  iVar7 = param_1[2] - param_1[4];
  iVar8 = param_1[3] - param_1[5];
  iVar12 = *param_1 - param_1[2];
  iVar11 = param_1[1] - param_1[3];
  bVar1 = true;
  if ((iVar10 + 1U < 3) && (iVar9 + 1U < 3)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((iVar7 + 1U < 3) && (iVar8 + 1U < 3)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((2 < iVar12 + 1U) || (2 < iVar11 + 1U)) {
    bVar1 = false;
  }
  if (bVar2) {
    if (bVar3) {
      if (!bVar1) {
        iVar7 = FUN_144b58bd0(iVar12,iVar11);
        *param_4 = iVar7;
        *param_3 = iVar7;
        *param_2 = iVar7;
      }
      goto LAB_144b6084c;
    }
    if (bVar1) {
      iVar7 = FUN_144b58bd0(iVar7,iVar8);
      *param_4 = iVar7;
      *param_3 = iVar7;
      *param_2 = iVar7;
      goto LAB_144b6084c;
    }
    iVar7 = FUN_144b58bd0(iVar7,iVar8);
    *param_3 = iVar7;
    *param_2 = iVar7;
  }
  else {
    if (bVar3) {
      if (bVar1) {
        iVar7 = FUN_144b58bd0(iVar10,iVar9);
        *param_4 = iVar7;
        *param_3 = iVar7;
        *param_2 = iVar7;
      }
      else {
        iVar7 = FUN_144b58bd0(iVar10,iVar9);
        *param_2 = iVar7;
        iVar8 = FUN_144b58bd0(iVar12,iVar11);
        *param_4 = iVar8;
        iVar7 = *param_2;
        iVar8 = FUN_144b58c40(iVar7,iVar8);
        *param_3 = iVar8 / 2 + iVar7;
      }
      goto LAB_144b6084c;
    }
    if (bVar1) {
      iVar9 = FUN_144b58bd0(iVar10,iVar9);
      *param_2 = iVar9;
      iVar7 = FUN_144b58bd0(iVar7,iVar8);
      *param_4 = iVar7;
      *param_3 = iVar7;
      goto LAB_144b6084c;
    }
    iVar9 = FUN_144b58bd0(iVar10,iVar9);
    *param_2 = iVar9;
    iVar7 = FUN_144b58bd0(iVar7,iVar8);
    *param_3 = iVar7;
  }
  iVar7 = FUN_144b58bd0(iVar12,iVar11);
  *param_4 = iVar7;
LAB_144b6084c:
  uVar4 = FUN_144b58c40(*param_2,*param_3);
  uVar5 = FUN_144b58c40(*param_3,*param_4);
  uVar4 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
  if (((int)uVar4 < 0x168000) &&
     (uVar4 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f), (int)uVar4 < 0x168000)) {
    uVar6 = CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
  }
  else {
    uVar6 = (ulonglong)uVar4 & 0xffffffffffffff00;
  }
  return uVar6;
}



// FUNCTION 144b608b0 FUN_144b608b0 body=215 status=ok
// SIG undefined FUN_144b608b0(void)

int FUN_144b608b0(int *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int local_res10 [2];
  
  uVar1 = param_1[1];
  local_res10[0] = 0;
  if ((uint)(*param_1 + param_2) <= uVar1) {
    return 0;
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  for (uVar4 = uVar1; uVar4 < (uint)(*param_1 + param_2); uVar4 = uVar4 + 0x10 + (uVar4 >> 1)) {
  }
  uVar2 = FUN_144b561b0(uVar3,8,uVar1,uVar4,*(undefined8 *)(param_1 + 2),local_res10);
  *(undefined8 *)(param_1 + 2) = uVar2;
  if (local_res10[0] == 0) {
    uVar3 = FUN_144b561b0(uVar3,1,uVar1,uVar4,*(undefined8 *)(param_1 + 4),local_res10);
    *(undefined8 *)(param_1 + 4) = uVar3;
    if (local_res10[0] == 0) {
      param_1[1] = uVar4;
    }
  }
  return local_res10[0];
}



// FUNCTION 144b60990 FUN_144b60990 body=242 status=ok
// SIG undefined FUN_144b60990(void)

void FUN_144b60990(uint *param_1,char param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar10 = param_1[7];
  uVar7 = (ulonglong)uVar10;
  uVar3 = *param_1;
  if (uVar10 + 1 < uVar3) {
    uVar10 = uVar3 - 1;
    uVar11 = (ulonglong)uVar10;
    *param_1 = uVar10;
    *(undefined8 *)(*(longlong *)(param_1 + 2) + uVar7 * 8) =
         *(undefined8 *)(*(longlong *)(param_1 + 2) + uVar11 * 8);
    *(undefined1 *)(*(longlong *)(param_1 + 4) + uVar7) =
         *(undefined1 *)(*(longlong *)(param_1 + 4) + uVar11);
    if (param_2 != '\0') {
      puVar6 = (undefined8 *)(uVar7 * 8 + 8 + *(longlong *)(param_1 + 2));
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 2) + -8 + uVar11 * 8);
      if (puVar6 < puVar8) {
        do {
          uVar4 = *puVar6;
          *puVar6 = *puVar8;
          puVar6 = puVar6 + 1;
          *puVar8 = uVar4;
          puVar8 = puVar8 + -1;
        } while (puVar6 < puVar8);
      }
      puVar5 = (undefined1 *)(*(longlong *)(param_1 + 4) + -1 + (ulonglong)uVar10);
      puVar9 = (undefined1 *)(*(longlong *)(param_1 + 4) + 1 + uVar7);
      if (puVar9 < puVar5) {
        do {
          uVar2 = *puVar9;
          *puVar9 = *puVar5;
          puVar9 = puVar9 + 1;
          *puVar5 = uVar2;
          puVar5 = puVar5 + -1;
        } while (puVar9 < puVar5);
      }
    }
    *(byte *)(uVar7 + *(longlong *)(param_1 + 4)) =
         *(byte *)(uVar7 + *(longlong *)(param_1 + 4)) | 4;
    pbVar1 = (byte *)((ulonglong)(uVar3 - 2) + *(longlong *)(param_1 + 4));
    *pbVar1 = *pbVar1 | 8;
    param_1[7] = 0xffffffff;
    *(undefined1 *)(param_1 + 6) = 0;
    return;
  }
  *param_1 = uVar10;
  param_1[7] = 0xffffffff;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 144b60a90 FUN_144b60a90 body=182 status=ok
// SIG undefined FUN_144b60a90(void)

int FUN_144b60a90(uint *param_1,int *param_2,undefined1 param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = 0;
  if ((char)param_1[6] == '\0') {
    if (((param_1[7] < *param_1) &&
        (uVar4 = (ulonglong)(*param_1 - 1),
        (*(int *)(*(longlong *)(param_1 + 2) + uVar4 * 8) - *param_2) + 1U < 3)) &&
       ((*(int *)(*(longlong *)(param_1 + 2) + uVar4 * 8 + 4) - param_2[1]) + 1U < 3)) {
      return 0;
    }
    iVar3 = FUN_144b608b0(param_1,1);
    if (iVar3 == 0) {
      uVar1 = *param_1;
      lVar2 = *(longlong *)(param_1 + 4);
      *(undefined8 *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar1 * 8) = *(undefined8 *)param_2;
      *(undefined1 *)(lVar2 + (ulonglong)uVar1) = 1;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    *(undefined8 *)(*(longlong *)(param_1 + 2) + (ulonglong)(*param_1 - 1) * 8) =
         *(undefined8 *)param_2;
  }
  *(undefined1 *)(param_1 + 6) = param_3;
  return iVar3;
}



// FUNCTION 144b60b50 FUN_144b60b50 body=441 status=ok
// SIG undefined FUN_144b60b50(void)

int FUN_144b60b50(uint *param_1,int *param_2,undefined4 param_3,int param_4,uint param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  
  FUN_144b58f10(&local_50,param_3,param_4);
  iStack_4c = iStack_4c + param_2[1];
  iVar8 = ((int)param_5 >> 0x1f & 0xff4c0000U) + 0x5a0000;
  local_50 = local_50 + *param_2;
  if (param_5 == 0) {
    return 0;
  }
  while( true ) {
    if ((int)param_5 < 0x5a0001) {
      uVar9 = param_5;
      if ((int)param_5 < -0x5a0000) {
        uVar9 = 0xffa60000;
      }
    }
    else {
      uVar9 = 0x5a0000;
    }
    iVar5 = uVar9 + param_4;
    iVar7 = (int)((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f)) >> 1;
    FUN_144b58f10(&local_58,param_3,iVar5);
    local_58 = local_58 + *param_2;
    iStack_54 = iStack_54 + param_2[1];
    iVar3 = FUN_144b58b30(iVar7);
    iVar7 = FUN_144b58b00(iVar7);
    uVar4 = FUN_144b55580(param_3,iVar7 << 2,(iVar3 + 0x10000) * 3);
    FUN_144b58f10(&local_48,uVar4,param_4 + iVar8);
    local_48 = local_48 + local_50;
    iStack_44 = iStack_44 + iStack_4c;
    FUN_144b58f10(&local_40,uVar4,iVar5 - iVar8);
    local_40 = local_40 + local_58;
    iStack_3c = iStack_3c + iStack_54;
    iVar3 = FUN_144b608b0(param_1,3);
    if (iVar3 == 0) {
      uVar6 = (ulonglong)*param_1;
      lVar2 = *(longlong *)(param_1 + 4);
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 2) + uVar6 * 8);
      *puVar1 = CONCAT44(iStack_44,local_48);
      puVar1[1] = CONCAT44(iStack_3c,local_40);
      puVar1[2] = CONCAT44(iStack_54,local_58);
      *(undefined2 *)(lVar2 + uVar6) = 0x202;
      *(undefined1 *)(lVar2 + 2 + uVar6) = 1;
      *param_1 = *param_1 + 3;
    }
    *(undefined1 *)(param_1 + 6) = 0;
    if (iVar3 != 0) break;
    iStack_4c = iStack_54;
    param_5 = param_5 - uVar9;
    param_4 = iVar5;
    local_50 = local_58;
    if (param_5 == 0) {
      return 0;
    }
  }
  return iVar3;
}



// FUNCTION 144b60d10 FUN_144b60d10 body=188 status=ok
// SIG undefined FUN_144b60d10(void)

void FUN_144b60d10(uint *param_1,short *param_2)

{
  short sVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  short *psVar5;
  
  if (*param_1 != 0) {
    memcpy((void *)(*(longlong *)(param_2 + 4) + (longlong)param_2[1] * 8),*(void **)(param_1 + 2),
           (ulonglong)*param_1 << 3);
  }
  pbVar2 = (byte *)((longlong)param_2[1] + *(longlong *)(param_2 + 8));
  pbVar4 = *(byte **)(param_1 + 4);
  for (uVar3 = *param_1; uVar3 != 0; uVar3 = uVar3 - 1) {
    if ((*pbVar4 & 1) == 0) {
      *pbVar2 = *pbVar4 & 2;
    }
    else {
      *pbVar2 = 1;
    }
    pbVar4 = pbVar4 + 1;
    pbVar2 = pbVar2 + 1;
  }
  pbVar4 = *(byte **)(param_1 + 4);
  psVar5 = (short *)(*(longlong *)(param_2 + 0xc) + (longlong)*param_2 * 2);
  uVar3 = *param_1;
  sVar1 = param_2[1];
  if (uVar3 == 0) {
    param_2[1] = param_2[1];
    return;
  }
  do {
    if ((*pbVar4 & 8) != 0) {
      *psVar5 = sVar1;
      psVar5 = psVar5 + 1;
      *param_2 = *param_2 + 1;
    }
    pbVar4 = pbVar4 + 1;
    sVar1 = sVar1 + 1;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  param_2[1] = param_2[1] + (short)*param_1;
  return;
}



// FUNCTION 144b60dd0 FUN_144b60dd0 body=135 status=ok
// SIG undefined FUN_144b60dd0(void)

void FUN_144b60dd0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[0xf];
  iVar3 = param_2 * -0xb40000 + 0x5a0000;
  iVar2 = FUN_144b58c40(*param_1,param_1[1]);
  if (iVar2 == 0xb40000) {
    iVar2 = iVar3 * -2;
  }
  FUN_144b60b50(param_1 + (longlong)param_2 * 0xc + 0x10,param_1 + 2,iVar1,*param_1 + iVar3,iVar2);
  *(undefined1 *)(param_1 + (longlong)param_2 * 0xc + 0x16) = 0;
  return;
}



// FUNCTION 144b60e60 FUN_144b60e60 body=395 status=ok
// SIG undefined FUN_144b60e60(void)

undefined8 FUN_144b60e60(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int local_res8;
  int local_resc;
  int local_res20;
  int local_res24;
  
  iVar1 = param_1[0xb];
  if (iVar1 == 1) {
    *param_1 = param_2;
    param_1[1] = param_2 + 0xb40000;
    uVar2 = FUN_144b60dd0(param_1,param_3);
    return uVar2;
  }
  if (iVar1 == 2) {
    iVar1 = param_1[0xf];
    iVar3 = param_3 * -0xb40000 + 0x5a0000;
    FUN_144b58f10(&local_res20,iVar1,iVar3 + param_2);
    FUN_144b58f10(&local_res8,iVar1,param_2);
    local_resc = local_resc + param_1[3] + local_res24;
    local_res8 = local_res8 + param_1[2] + local_res20;
    uVar2 = FUN_144b60a90(param_1 + (longlong)param_3 * 0xc + 0x10,&local_res8,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    FUN_144b58f10(&local_res20,iVar1,param_2 - iVar3);
    FUN_144b58f10(&local_res8,iVar1,param_2);
    local_res8 = local_res8 + param_1[2] + local_res20;
    local_resc = local_resc + param_1[3] + local_res24;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = param_1[0xf];
    iVar3 = param_3 * -0xb40000 + 0x5a0000;
    FUN_144b58f10(&local_res8,iVar1,iVar3 + param_2);
    local_res8 = local_res8 + param_1[2];
    local_resc = local_resc + param_1[3];
    uVar2 = FUN_144b60a90(param_1 + (longlong)param_3 * 0xc + 0x10,&local_res8,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    FUN_144b58f10(&local_res8,iVar1,param_2 - iVar3);
    local_res8 = local_res8 + param_1[2];
    local_resc = local_resc + param_1[3];
  }
  uVar2 = FUN_144b60a90(param_1 + (longlong)param_3 * 0xc + 0x10,&local_res8,0);
  return uVar2;
}



// FUNCTION 144b60ff0 FUN_144b60ff0 body=262 status=ok
// SIG undefined FUN_144b60ff0(void)

void FUN_144b60ff0(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int local_res8;
  int local_resc;
  
  lVar6 = (longlong)param_2;
  iVar8 = param_2 * -0xb40000 + 0x5a0000;
  iVar2 = FUN_144b58c40(*param_1,param_1[1]);
  iVar2 = iVar2 / 2;
  if ((((char)param_1[lVar6 * 0xc + 0x16] != '\0') && (param_3 != 0)) &&
     (iVar2 + 0x59c000U < 0xb38001)) {
    uVar3 = FUN_144b58b60(iVar2);
    uVar4 = FUN_144b42fe0(param_1[0xf],uVar3);
    uVar7 = (int)uVar4 >> 0x1f;
    iVar5 = (uVar4 ^ uVar7) - uVar7;
    if ((((uVar4 ^ uVar7) == uVar7) || (param_1[4] < iVar5)) || (param_3 < iVar5)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar5 = *param_1;
      uVar3 = FUN_144b58b30(iVar2);
      uVar3 = FUN_144b555e0(param_1[0xf],uVar3);
      FUN_144b58f10(&local_res8,uVar3,iVar5 + iVar2 + iVar8);
      local_res8 = local_res8 + param_1[2];
      iVar2 = param_1[3];
      goto LAB_144b610ca;
    }
  }
  FUN_144b58f10(&local_res8,param_1[0xf],param_1[1] + iVar8);
  local_res8 = local_res8 + param_1[2];
  iVar2 = param_1[3];
  *(undefined1 *)(param_1 + lVar6 * 0xc + 0x16) = 0;
LAB_144b610ca:
  local_resc = local_resc + iVar2;
  FUN_144b60a90(param_1 + lVar6 * 0xc + 0x10,&local_res8,0);
  return;
}



// FUNCTION 144b61100 FUN_144b61100 body=596 status=ok
// SIG undefined FUN_144b61100(void)

void FUN_144b61100(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int local_res8;
  int local_resc;
  char local_res10;
  int local_res18;
  int local_res20;
  int local_res24;
  
  iVar5 = param_1[0xc];
  piVar8 = param_1 + (longlong)param_2 * 0xc + 0x10;
  local_res18 = param_3;
  if (iVar5 == 0) {
    FUN_144b60dd0();
    return;
  }
  local_res20 = param_1[0xf];
  iVar2 = 0;
  uVar4 = 0;
  iVar7 = 0;
  uVar6 = param_2 * -0xb40000 + 0x5a0000;
  local_res10 = iVar5 == 1;
  iVar1 = 0;
  if (iVar5 == 1) {
LAB_144b611df:
    if (local_res10 == '\0') {
      uVar3 = FUN_144b555e0(param_1[0xf],iVar1);
      FUN_144b58f10(&local_res8,uVar3,iVar7);
      local_res8 = local_res8 + param_1[2];
      local_resc = local_resc + param_1[3];
      iVar5 = FUN_144b60a90(piVar8,&local_res8,0);
      if (iVar5 != 0) {
        return;
      }
      if (local_res18 != 0) {
        return;
      }
      iVar1 = param_1[0xf];
    }
    else {
LAB_144b611e7:
      iVar1 = local_res20;
      if (iVar5 != 2) goto LAB_144b611ed;
      uVar3 = FUN_144b42fe0(local_res20,param_1[0xe]);
      FUN_144b58f10(&local_res20,uVar3,iVar7);
      local_res20 = local_res20 + param_1[2];
      local_res24 = local_res24 + param_1[3];
      uVar4 = FUN_144b58b00(uVar4);
      uVar3 = FUN_144b55580(iVar1,0x10000 - iVar2,
                            (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f));
      FUN_144b58f10(&local_res8,uVar3,uVar6 + iVar7);
      local_res8 = local_res8 + local_res20;
      local_resc = local_resc + local_res24;
      iVar5 = FUN_144b60a90(piVar8,&local_res8,0);
      if (iVar5 != 0) {
        return;
      }
      FUN_144b58f10(&local_res8,uVar3,iVar7 - uVar6);
      local_res8 = local_res8 + local_res20;
      local_resc = local_resc + local_res24;
      iVar5 = FUN_144b60a90(piVar8,&local_res8,0);
      if (iVar5 != 0) {
        return;
      }
      if (local_res18 != 0) {
        return;
      }
    }
    FUN_144b58f10(&local_res8,iVar1,param_1[1] + uVar6);
    local_res8 = local_res8 + param_1[2];
    iVar5 = param_1[3];
  }
  else {
    iVar1 = FUN_144b58c40(*param_1,param_1[1]);
    iVar7 = *param_1;
    uVar4 = uVar6;
    if (iVar1 != 0xb40000) {
      iVar7 = iVar7 + uVar6 + iVar1 / 2;
      uVar4 = iVar1 / 2;
    }
    local_res8 = FUN_144b58b30(uVar4);
    iVar2 = FUN_144b42fe0(param_1[0xe],local_res8);
    iVar1 = local_res8;
    if (0xffff < iVar2) goto LAB_144b611df;
    if (iVar5 == 2) {
      if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) < 0x3a) goto LAB_144b611df;
      goto LAB_144b611e7;
    }
LAB_144b611ed:
    FUN_144b58f10(&local_res8,local_res20,param_1[1] + uVar6);
    local_res8 = local_res8 + param_1[2];
    iVar5 = param_1[3];
    *(undefined1 *)(piVar8 + 6) = 0;
  }
  local_resc = local_resc + iVar5;
  FUN_144b60a90(piVar8,&local_res8,0);
  return;
}



// FUNCTION 144b61360 FUN_144b61360 body=105 status=ok
// SIG undefined FUN_144b61360(void)

undefined8 FUN_144b61360(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_144b58c40(*param_1,param_1[1]);
  if ((iVar1 != 0) && (uVar2 = FUN_144b60ff0(param_1,iVar1 < 0,param_2), (int)uVar2 == 0)) {
    uVar2 = FUN_144b61100(param_1,iVar1 >= 0,param_2);
    return uVar2;
  }
  return uVar2;
}



// FUNCTION 144b613d0 FUN_144b613d0 body=380 status=ok
// SIG undefined FUN_144b613d0(void)

void FUN_144b613d0(longlong param_1,int param_2,undefined4 param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int local_res8;
  int local_resc;
  int local_res20;
  int local_res24;
  
  FUN_144b58f10(&local_res20,*(undefined4 *)(param_1 + 0x3c),param_2 + 0x5a0000);
  local_res8 = *(int *)(param_1 + 8) + local_res20;
  local_resc = local_res24 + *(int *)(param_1 + 0xc);
  uVar5 = *(uint *)(param_1 + 0x5c);
  uVar4 = (ulonglong)uVar5;
  if (-1 < (int)uVar5) {
    uVar2 = *(uint *)(param_1 + 0x40);
    if (uVar5 + 1 < uVar2) {
      uVar5 = uVar2 - 1;
      *(uint *)(param_1 + 0x40) = uVar5;
      *(undefined8 *)(*(longlong *)(param_1 + 0x48) + uVar4 * 8) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (ulonglong)uVar5 * 8);
      *(undefined1 *)(*(longlong *)(param_1 + 0x50) + uVar4) =
           *(undefined1 *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar5);
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x50) + uVar4);
      *pbVar1 = *pbVar1 | 4;
      pbVar1 = (byte *)((ulonglong)(uVar2 - 2) + *(longlong *)(param_1 + 0x50));
      *pbVar1 = *pbVar1 | 8;
    }
    else {
      *(uint *)(param_1 + 0x40) = uVar5;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x58) = 0;
  iVar3 = FUN_144b60a90(param_1 + 0x40,&local_res8,0);
  if (iVar3 == 0) {
    local_res8 = *(int *)(param_1 + 8) - local_res20;
    uVar5 = *(uint *)(param_1 + 0x8c);
    uVar4 = (ulonglong)uVar5;
    local_resc = *(int *)(param_1 + 0xc) - local_res24;
    if (-1 < (int)uVar5) {
      uVar2 = *(uint *)(param_1 + 0x70);
      if (uVar5 + 1 < uVar2) {
        uVar5 = uVar2 - 1;
        *(uint *)(param_1 + 0x70) = uVar5;
        *(undefined8 *)(*(longlong *)(param_1 + 0x78) + uVar4 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar5 * 8);
        *(undefined1 *)(*(longlong *)(param_1 + 0x80) + uVar4) =
             *(undefined1 *)(*(longlong *)(param_1 + 0x80) + (ulonglong)uVar5);
        pbVar1 = (byte *)(*(longlong *)(param_1 + 0x80) + uVar4);
        *pbVar1 = *pbVar1 | 4;
        pbVar1 = (byte *)((ulonglong)(uVar2 - 2) + *(longlong *)(param_1 + 0x80));
        *pbVar1 = *pbVar1 | 8;
      }
      else {
        *(uint *)(param_1 + 0x70) = uVar5;
      }
      *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x88) = 0;
    }
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x70);
    *(undefined1 *)(param_1 + 0x88) = 0;
    FUN_144b60a90(param_1 + 0x70,&local_res8,0);
    *(int *)(param_1 + 0x18) = param_2;
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x24) = param_3;
  }
  return;
}



// FUNCTION 144b61550 FUN_144b61550 body=53 status=ok
// SIG undefined FUN_144b61550(void)

undefined8 FUN_144b61550(int *param_1,int *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
      (*(longlong *)(param_1 + 2) == *(longlong *)(param_2 + 2))) &&
     ((*(longlong *)(param_1 + 4) == *(longlong *)(param_2 + 4) &&
      (*(longlong *)(param_1 + 6) == *(longlong *)(param_2 + 6))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 144b61590 FUN_144b61590 body=94 status=ok
// SIG undefined FUN_144b61590(void)

undefined4 * FUN_144b61590(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_142864336(1,0xd8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    puVar1[1] = 1;
    *(undefined8 *)(puVar1 + 2) = 0;
    puVar1[0xb] = 0x3fffffff;
    puVar1[0xc] = 0x1fffffff;
    FUN_144b618a0(puVar1);
    return puVar1;
  }
  return (undefined4 *)&DAT_1499708d0;
}



// FUNCTION 144b615f0 FUN_144b615f0 body=162 status=ok
// SIG undefined FUN_144b615f0(void)

void FUN_144b615f0(int *param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
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
      FUN_144b65110(*(undefined8 *)(param_1 + 4));
      thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0x1c));
      thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0x20));
      if (*(code **)(param_1 + 0x34) != (code *)0x0) {
        (**(code **)(param_1 + 0x34))(*(undefined8 *)(param_1 + 0x32));
      }
      thunk_FUN_1400020a8(param_1);
    }
  }
  return;
}



// FUNCTION 144b616a0 FUN_144b616a0 body=10 status=ok
// SIG undefined FUN_144b616a0(void)

void FUN_144b616a0(longlong param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0x38) = param_2;
  }
  return;
}



// FUNCTION 144b616b0 FUN_144b616b0 body=10 status=ok
// SIG undefined FUN_144b616b0(void)

void FUN_144b616b0(longlong param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = param_2;
  }
  return;
}



// FUNCTION 144b616c0 FUN_144b616c0 body=10 status=ok
// SIG undefined FUN_144b616c0(void)

void FUN_144b616c0(longlong param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = param_2;
  }
  return;
}



// FUNCTION 144b616d0 thunk_FUN_144b61960 body=5 status=ok
// SIG undefined thunk_FUN_144b61960(void)

void thunk_FUN_144b61960(longlong param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined2 *)(param_1 + 0x58) = 1;
    *(undefined1 *)(param_1 + 0x5a) = 0;
    *(undefined8 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x8c) = 0;
    *(undefined8 *)(param_1 + 0x94) = 0;
    *(undefined8 *)(param_1 + 0x9c) = 0;
    *(undefined8 *)(param_1 + 0xa4) = 0;
    *(undefined8 *)(param_1 + 0xac) = 0;
    *(undefined8 *)(param_1 + 0xb4) = 0;
  }
  return;
}



// FUNCTION 144b616e0 FUN_144b616e0 body=17 status=ok
// SIG undefined FUN_144b616e0(void)

void FUN_144b616e0(longlong param_1)

{
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_144b619f0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 144b61700 thunk_FUN_144b627b0 body=5 status=ok
// SIG undefined thunk_FUN_144b627b0(void)

void thunk_FUN_144b627b0(longlong param_1,short *param_2,int param_3,uint param_4,int param_5)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  short *psVar6;
  ushort *puVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  short *psVar11;
  ushort *puVar12;
  ushort *puVar13;
  
  uVar4 = *(uint *)(param_1 + 0x20);
  if (*(int *)(param_1 + 4) != 0) {
    if (param_3 == -1) {
      param_3 = 0;
      sVar1 = *param_2;
      psVar6 = param_2;
      while (sVar1 != 0) {
        psVar6 = psVar6 + 1;
        param_3 = param_3 + 1;
        sVar1 = *psVar6;
      }
    }
    if (param_5 == -1) {
      param_5 = param_3 - param_4;
    }
    uVar9 = (int)(((longlong)param_5 & 0x7fffffffffffffffU) >> 1) + *(int *)(param_1 + 0x60);
    if ((uVar9 != 0) && (*(uint *)(param_1 + 0x68) <= uVar9)) {
      FUN_144b62380(param_1,uVar9);
    }
    if ((*(int *)(param_1 + 0x60) == 0) && (param_4 != 0)) {
      *(undefined4 *)(param_1 + 0xb4) = 0;
      psVar6 = param_2 + param_4;
      while ((param_2 < psVar6 && (*(uint *)(param_1 + 0xb4) < 5))) {
        uVar2 = psVar6[-1];
        psVar11 = psVar6 + -1;
        uVar9 = (uint)uVar2;
        if ((uVar2 - 0xd800 < 0x800) &&
           (((uVar9 = uVar4, 0xdbff < uVar2 && (param_2 < psVar11)) &&
            ((ushort)psVar6[-2] - 0xd800 < 0x400)))) {
          psVar11 = psVar6 + -2;
          uVar9 = uVar2 + 0xfca02400 + (uint)(ushort)psVar6[-2] * 0x400;
        }
        *(uint *)(param_1 + 0x8c + (ulonglong)*(uint *)(param_1 + 0xb4) * 4) = uVar9;
        *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
        psVar6 = psVar11;
      }
    }
    puVar13 = (ushort *)(param_2 + param_4);
    puVar12 = puVar13;
    while (puVar7 = puVar12, puVar7 < puVar13 + param_5) {
      uVar2 = *puVar7;
      puVar12 = puVar7 + 1;
      uVar9 = (uint)uVar2;
      if (((uVar2 - 0xd800 < 0x800) && (uVar9 = uVar4, uVar2 < 0xdc00)) &&
         ((puVar12 < puVar13 + param_5 && (uVar3 = *puVar12, uVar3 - 0xdc00 < 0x400)))) {
        puVar12 = puVar7 + 2;
        uVar9 = (uint)uVar2 * 0x400 + -0x35fdc00 + (uint)uVar3;
      }
      if (((*(int *)(param_1 + 0x60) == -1) ||
          (*(int *)(param_1 + 0x60) + 1U < *(uint *)(param_1 + 0x68))) ||
         (cVar8 = FUN_144b62380(param_1), cVar8 != '\0')) {
        uVar10 = (ulonglong)*(uint *)(param_1 + 0x60);
        lVar5 = *(longlong *)(param_1 + 0x70);
        *(undefined8 *)(lVar5 + uVar10 * 0x14) = 0;
        *(undefined8 *)(lVar5 + 8 + uVar10 * 0x14) = 0;
        *(undefined4 *)(lVar5 + 0x10 + uVar10 * 0x14) = 0;
        *(uint *)(lVar5 + uVar10 * 0x14) = uVar9;
        *(undefined4 *)(lVar5 + 4 + uVar10 * 0x14) = 0;
        *(int *)(lVar5 + 8 + uVar10 * 0x14) = (int)((longlong)puVar7 - (longlong)param_2 >> 1);
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      }
    }
    *(undefined4 *)(param_1 + 0xb8) = 0;
    while ((puVar7 < param_2 + param_3 && (*(uint *)(param_1 + 0xb8) < 5))) {
      uVar2 = *puVar7;
      puVar13 = puVar7 + 1;
      uVar9 = (uint)uVar2;
      if ((uVar2 - 0xd800 < 0x800) &&
         (((uVar9 = uVar4, uVar2 < 0xdc00 && (puVar13 < param_2 + param_3)) &&
          (uVar3 = *puVar13, uVar3 - 0xdc00 < 0x400)))) {
        puVar13 = puVar7 + 2;
        uVar9 = (uint)uVar2 * 0x400 + -0x35fdc00 + (uint)uVar3;
      }
      *(uint *)(param_1 + 0xa0 + (ulonglong)*(uint *)(param_1 + 0xb8) * 4) = uVar9;
      *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
      puVar7 = puVar13;
    }
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  return;
}



// FUNCTION 144b61710 FUN_144b61710 body=15 status=ok
// SIG undefined FUN_144b61710(void)

undefined8 FUN_144b61710(longlong param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x60);
  }
  return *(undefined8 *)(param_1 + 0x70);
}



// FUNCTION 144b61720 FUN_144b61720 body=102 status=ok
// SIG undefined FUN_144b61720(void)

undefined8 FUN_144b61720(longlong param_1,undefined4 *param_2)

{
  if ((*(char *)(param_1 + 0x5a) == '\0') && (*(int *)(param_1 + 4) != 0)) {
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
    *(undefined2 *)(param_1 + 0x59) = 0x100;
    *(undefined4 *)(param_1 + 100) = 0;
    memset(*(void **)(param_1 + 0x80),0,(ulonglong)*(uint *)(param_1 + 0x60) * 0x14);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x60);
  }
  return *(undefined8 *)(param_1 + 0x80);
}



// FUNCTION 144b61790 FUN_144b61790 body=258 status=ok
// SIG undefined FUN_144b61790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b61790(uint *param_1,LPCRITICAL_SECTION param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  if (*param_1 == 0) {
    if (*(longlong *)(param_1 + 2) != 0) {
      thunk_FUN_1400020a8();
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  EnterCriticalSection(param_2);
  uVar2 = *param_1;
  while (uVar2 != 0) {
    if (uVar2 - 1 < uVar2) {
      puVar4 = (undefined4 *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar2 - 1) * 0x18);
    }
    else {
      puVar4 = &DAT_14c793f60;
      _DAT_14c793f60 = 0;
      _DAT_14c793f68 = 0;
      _DAT_14c793f70 = 0;
    }
    uVar3 = *(undefined8 *)(puVar4 + 2);
    pcVar1 = *(code **)(puVar4 + 4);
    if (*param_1 != 0) {
      *param_1 = *param_1 - 1;
    }
    LeaveCriticalSection(param_2);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar3);
    }
    EnterCriticalSection(param_2);
    uVar2 = *param_1;
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    thunk_FUN_1400020a8();
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
                    /* WARNING: Could not recover jumptable at 0x000144b6188b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_2);
  return;
}



// FUNCTION 144b618a0 FUN_144b618a0 body=186 status=ok
// SIG undefined FUN_144b618a0(void)

void FUN_144b618a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_144b65110(*(undefined8 *)(param_1 + 0x10));
    thunk_FUN_144e3fe90();
    uVar1 = FUN_144b650f0();
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0xfffd;
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined2 *)(param_1 + 0x58) = 1;
      *(undefined1 *)(param_1 + 0x5a) = 0;
      *(undefined8 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x8c) = 0;
      *(undefined8 *)(param_1 + 0x94) = 0;
      *(undefined8 *)(param_1 + 0x9c) = 0;
      *(undefined8 *)(param_1 + 0xa4) = 0;
      *(undefined8 *)(param_1 + 0xac) = 0;
      *(undefined8 *)(param_1 + 0xb4) = 0;
    }
  }
  return;
}



// FUNCTION 144b61960 FUN_144b61960 body=132 status=ok
// SIG undefined FUN_144b61960(void)

void FUN_144b61960(longlong param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined2 *)(param_1 + 0x58) = 1;
    *(undefined1 *)(param_1 + 0x5a) = 0;
    *(undefined8 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x8c) = 0;
    *(undefined8 *)(param_1 + 0x94) = 0;
    *(undefined8 *)(param_1 + 0x9c) = 0;
    *(undefined8 *)(param_1 + 0xa4) = 0;
    *(undefined8 *)(param_1 + 0xac) = 0;
    *(undefined8 *)(param_1 + 0xb4) = 0;
  }
  return;
}



// FUNCTION 144b619f0 FUN_144b619f0 body=221 status=ok
// SIG undefined FUN_144b619f0(void)

void FUN_144b619f0(longlong param_1,uint param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  if (1 < param_3 - param_2) {
    uVar12 = param_3 - 1;
    uVar13 = (ulonglong)uVar12;
    uVar8 = uVar13;
    uVar9 = param_2;
    if (param_2 < uVar12) {
      do {
        uVar10 = (ulonglong)uVar9;
        lVar4 = *(longlong *)(param_1 + 0x70);
        uVar9 = uVar9 + 1;
        puVar1 = (undefined8 *)(lVar4 + uVar10 * 0x14);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        uVar3 = *(undefined4 *)(lVar4 + 0x10 + uVar10 * 0x14);
        puVar1 = (undefined8 *)(lVar4 + uVar10 * 0x14);
        uVar11 = (int)uVar8 - 1;
        puVar2 = (undefined8 *)(lVar4 + uVar8 * 0x14);
        uVar7 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar7;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(lVar4 + 0x10 + uVar8 * 0x14);
        lVar4 = *(longlong *)(param_1 + 0x70);
        puVar1 = (undefined8 *)(lVar4 + uVar8 * 0x14);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        *(undefined4 *)(lVar4 + 0x10 + uVar8 * 0x14) = uVar3;
        uVar8 = (ulonglong)uVar11;
      } while (uVar9 < uVar11);
    }
    if ((*(char *)(param_1 + 0x5a) != '\0') && (param_2 < uVar12)) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x80);
        uVar8 = (ulonglong)param_2;
        param_2 = param_2 + 1;
        puVar1 = (undefined8 *)(lVar4 + uVar8 * 0x14);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        uVar3 = *(undefined4 *)(lVar4 + 0x10 + uVar8 * 0x14);
        puVar1 = (undefined8 *)(lVar4 + uVar8 * 0x14);
        uVar12 = (int)uVar13 - 1;
        puVar2 = (undefined8 *)(lVar4 + uVar13 * 0x14);
        uVar7 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar7;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(lVar4 + 0x10 + uVar13 * 0x14);
        lVar4 = *(longlong *)(param_1 + 0x80);
        puVar1 = (undefined8 *)(lVar4 + uVar13 * 0x14);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        *(undefined4 *)(lVar4 + 0x10 + uVar13 * 0x14) = uVar3;
        uVar13 = (ulonglong)uVar12;
      } while (param_2 < uVar12);
    }
  }
  return;
}



// FUNCTION 144b61ad0 FUN_144b61ad0 body=17 status=ok
// SIG undefined FUN_144b61ad0(void)

void FUN_144b61ad0(longlong param_1)

{
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_144b619f0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 144b61af0 FUN_144b61af0 body=62 status=ok
// SIG undefined FUN_144b61af0(void)

void FUN_144b61af0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    *(undefined1 *)(param_1 + 0x59) = 0;
    lVar2 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x78) != lVar2) {
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x78);
      *(longlong *)(param_1 + 0x78) = lVar2;
      *(longlong *)(param_1 + 0x80) = lVar2;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return;
}



// FUNCTION 144b61b30 FUN_144b61b30 body=28 status=ok
// SIG undefined FUN_144b61b30(void)

void FUN_144b61b30(longlong param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
    *(undefined2 *)(param_1 + 0x59) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}



// FUNCTION 144b61b50 FUN_144b61b50 body=28 status=ok
// SIG undefined FUN_144b61b50(void)

void FUN_144b61b50(longlong param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
    *(undefined2 *)(param_1 + 0x59) = 1;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}



// FUNCTION 144b61b70 FUN_144b61b70 body=53 status=ok
// SIG undefined FUN_144b61b70(void)

void FUN_144b61b70(longlong param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
    *(undefined2 *)(param_1 + 0x59) = 0x100;
    *(undefined4 *)(param_1 + 100) = 0;
    memset(*(void **)(param_1 + 0x80),0,(ulonglong)*(uint *)(param_1 + 0x60) * 0x14);
    return;
  }
  return;
}



// FUNCTION 144b61bb0 FUN_144b61bb0 body=165 status=ok
// SIG undefined FUN_144b61bb0(void)

void FUN_144b61bb0(longlong param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)param_3;
  cVar5 = FUN_144b62480();
  if (cVar5 != '\0') {
    if (1 < param_2) {
      FUN_144b61d00(param_1);
    }
    uVar1 = *(undefined4 *)
             (*(longlong *)(param_1 + 0x70) + 0x10 + (ulonglong)*(uint *)(param_1 + 0x5c) * 0x14);
    puVar6 = (undefined8 *)
             (*(longlong *)(param_1 + 0x70) + (ulonglong)*(uint *)(param_1 + 0x5c) * 0x14);
    uVar3 = *puVar6;
    uVar4 = puVar6[1];
    puVar6 = (undefined8 *)
             (*(longlong *)(param_1 + 0x78) + (ulonglong)*(uint *)(param_1 + 100) * 0x14);
    if (param_3 != 0) {
      do {
        *puVar6 = uVar3;
        puVar6[1] = uVar4;
        *(undefined4 *)(puVar6 + 2) = uVar1;
        uVar2 = *param_4;
        param_4 = param_4 + 1;
        *(undefined4 *)puVar6 = uVar2;
        uVar7 = uVar7 - 1;
        puVar6 = (undefined8 *)((longlong)puVar6 + 0x14);
      } while (uVar7 != 0);
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + param_2;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + param_3;
  }
  return;
}



// FUNCTION 144b61c60 FUN_144b61c60 body=159 status=ok
// SIG undefined FUN_144b61c60(void)

void FUN_144b61c60(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_3 != 0) {
    if ((param_4 == 0) && (param_5 == 0xffffffff)) {
      if (*(uint *)(param_1 + 0x60) != 0) {
        lVar3 = 0;
        uVar4 = (ulonglong)*(uint *)(param_1 + 0x60);
        do {
          lVar3 = lVar3 + 0x14;
          *(uint *)(*(longlong *)(param_1 + 0x70) + -0x10 + lVar3) =
               *(uint *)(*(longlong *)(param_1 + 0x70) + -0x10 + lVar3) & ~param_3 |
               param_2 & param_3;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        return;
      }
    }
    else if (*(uint *)(param_1 + 0x60) != 0) {
      lVar3 = 0;
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x60);
      do {
        lVar2 = *(longlong *)(param_1 + 0x70);
        uVar1 = *(uint *)(lVar2 + 8 + lVar3);
        if ((param_4 <= uVar1) && (uVar1 < param_5)) {
          *(uint *)(lVar2 + 4 + lVar3) = ~param_3 & *(uint *)(lVar2 + 4 + lVar3) | param_2 & param_3
          ;
        }
        lVar3 = lVar3 + 0x14;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}



// FUNCTION 144b61d00 FUN_144b61d00 body=389 status=ok
// SIG undefined FUN_144b61d00(void)

void FUN_144b61d00(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = (ulonglong)param_2;
  if (*(int *)(param_1 + 0x1c) == 2) {
    if (1 < param_3 - param_2) {
      FUN_144b620d0(param_1,uVar5);
      return;
    }
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar6 = param_2 + 1;
    uVar8 = *(uint *)(lVar3 + 8 + uVar5 * 0x14);
    if (uVar6 < param_3) {
      uVar2 = (ulonglong)(param_3 - uVar6);
      puVar4 = (uint *)(lVar3 + ((ulonglong)uVar6 * 4 + 2 + (ulonglong)uVar6) * 4);
      do {
        if (*puVar4 <= uVar8) {
          uVar8 = *puVar4;
        }
        puVar4 = puVar4 + 5;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    while ((param_3 < *(uint *)(param_1 + 0x60) &&
           (*(int *)(lVar3 + 8 + (ulonglong)(param_3 - 1) * 0x14) ==
            *(int *)(lVar3 + 8 + (ulonglong)param_3 * 0x14)))) {
      param_3 = param_3 + 1;
    }
    uVar6 = *(uint *)(param_1 + 0x5c);
    if (uVar6 < param_2) {
      do {
        uVar7 = (int)uVar5 - 1;
        if (*(int *)(lVar3 + 8 + (ulonglong)uVar7 * 0x14) != *(int *)(lVar3 + 8 + uVar5 * 0x14))
        break;
        uVar5 = (ulonglong)uVar7;
      } while (uVar6 < uVar7);
      param_2 = (uint)uVar5;
    }
    if ((uVar6 == param_2) &&
       (uVar2 = (ulonglong)*(uint *)(param_1 + 100), *(uint *)(param_1 + 100) != 0)) {
      do {
        uVar6 = (int)uVar2 - 1;
        uVar2 = (ulonglong)uVar6;
        lVar3 = *(longlong *)(param_1 + 0x78) + uVar2 * 0x14;
        if (*(int *)(lVar3 + 8) != *(int *)(*(longlong *)(param_1 + 0x70) + 8 + uVar5 * 0x14))
        break;
        if (*(uint *)(lVar3 + 8) != uVar8) {
          *(uint *)(lVar3 + 4) = *(uint *)(lVar3 + 4) & 0xfffffffe;
        }
        *(uint *)(lVar3 + 8) = uVar8;
      } while (uVar6 != 0);
    }
    if ((uint)uVar5 < param_3) {
      lVar3 = uVar5 * 0x14;
      uVar5 = (ulonglong)(param_3 - (uint)uVar5);
      do {
        lVar1 = *(longlong *)(param_1 + 0x70);
        if (*(uint *)(lVar3 + 8 + lVar1) != uVar8) {
          puVar4 = (uint *)(lVar3 + 4 + lVar1);
          *puVar4 = *puVar4 & 0xfffffffe;
        }
        *(uint *)(lVar3 + 8 + lVar1) = uVar8;
        lVar3 = lVar3 + 0x14;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}



// FUNCTION 144b61e90 FUN_144b61e90 body=353 status=ok
// SIG undefined FUN_144b61e90(void)

void FUN_144b61e90(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = (ulonglong)param_2;
  if ((*(int *)(param_1 + 0x1c) != 2) && (1 < param_3 - param_2)) {
    lVar3 = *(longlong *)(param_1 + 0x78);
    uVar8 = *(uint *)(lVar3 + 8 + uVar5 * 0x14);
    uVar6 = param_2 + 1;
    if (uVar6 < param_3) {
      uVar2 = (ulonglong)(param_3 - uVar6);
      puVar4 = (uint *)(lVar3 + ((ulonglong)uVar6 * 4 + 2 + (ulonglong)uVar6) * 4);
      do {
        if (*puVar4 <= uVar8) {
          uVar8 = *puVar4;
        }
        puVar4 = puVar4 + 5;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    while (uVar6 = 0, param_2 != 0) {
      uVar6 = (uint)uVar5;
      param_2 = uVar6 - 1;
      if (*(int *)(lVar3 + 8 + (ulonglong)param_2 * 0x14) != *(int *)(lVar3 + 8 + uVar5 * 0x14))
      break;
      uVar5 = (ulonglong)param_2;
    }
    while ((param_3 < *(uint *)(param_1 + 100) &&
           (*(int *)(lVar3 + 8 + (ulonglong)(param_3 - 1) * 0x14) ==
            *(int *)(lVar3 + 8 + (ulonglong)param_3 * 0x14)))) {
      param_3 = param_3 + 1;
    }
    if ((param_3 == *(uint *)(param_1 + 100)) &&
       (uVar7 = *(uint *)(param_1 + 0x5c), uVar7 < *(uint *)(param_1 + 0x60))) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x70) + (ulonglong)uVar7 * 0x14;
        if (*(int *)(lVar3 + 8) !=
            *(int *)(*(longlong *)(param_1 + 0x78) + 8 + (ulonglong)(param_3 - 1) * 0x14)) break;
        if (*(uint *)(lVar3 + 8) != uVar8) {
          *(uint *)(lVar3 + 4) = *(uint *)(lVar3 + 4) & 0xfffffffe;
        }
        uVar7 = uVar7 + 1;
        *(uint *)(lVar3 + 8) = uVar8;
      } while (uVar7 < *(uint *)(param_1 + 0x60));
    }
    if (uVar6 < param_3) {
      lVar3 = (ulonglong)uVar6 * 0x14;
      uVar5 = (ulonglong)(param_3 - uVar6);
      do {
        lVar1 = *(longlong *)(param_1 + 0x78);
        if (*(uint *)(lVar3 + 8 + lVar1) != uVar8) {
          puVar4 = (uint *)(lVar3 + 4 + lVar1);
          *puVar4 = *puVar4 & 0xfffffffe;
        }
        *(uint *)(lVar3 + 8 + lVar1) = uVar8;
        lVar3 = lVar3 + 0x14;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}



// FUNCTION 144b62000 FUN_144b62000 body=203 status=ok
// SIG undefined FUN_144b62000(void)

void FUN_144b62000(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  lVar4 = *(longlong *)(param_1 + 0x70);
  uVar3 = *(uint *)(lVar4 + 8 + (ulonglong)uVar2 * 0x14);
  uVar7 = uVar2 + 1;
  if ((*(uint *)(param_1 + 0x60) <= uVar7) ||
     (uVar3 != *(uint *)(lVar4 + 8 + (ulonglong)uVar7 * 0x14))) {
    uVar5 = *(uint *)(param_1 + 100);
    uVar6 = (ulonglong)uVar5;
    if (uVar5 == 0) {
      if (uVar7 < *(uint *)(param_1 + 0x60)) {
        FUN_144b61d00(param_1);
      }
    }
    else {
      uVar7 = *(uint *)(*(longlong *)(param_1 + 0x78) + 8 + (ulonglong)(uVar5 - 1) * 0x14);
      if (uVar3 < uVar7) {
        uVar2 = *(uint *)(lVar4 + (ulonglong)uVar2 * 0x14 + 4);
        while( true ) {
          lVar4 = *(longlong *)(param_1 + 0x78);
          uVar5 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar5;
          if (*(uint *)(lVar4 + 8 + uVar6 * 0x14) != uVar7) break;
          if (*(uint *)(lVar4 + 8 + uVar6 * 0x14) != uVar3) {
            if ((uVar2 & 1) == 0) {
              puVar1 = (uint *)(lVar4 + 4 + uVar6 * 0x14);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            else {
              puVar1 = (uint *)(lVar4 + 4 + uVar6 * 0x14);
              *puVar1 = *puVar1 | 1;
            }
          }
          *(uint *)(lVar4 + 8 + uVar6 * 0x14) = uVar3;
          if (uVar5 == 0) {
            *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
            return;
          }
        }
      }
    }
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  return;
}



// FUNCTION 144b620d0 FUN_144b620d0 body=131 status=ok
// SIG undefined FUN_144b620d0(void)

void FUN_144b620d0(longlong param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = 0xffffffff;
  if (param_2 < param_3) {
    uVar2 = (ulonglong)(param_3 - param_2);
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x70) + (ulonglong)param_2 * 0x14 + 8);
    do {
      if (*puVar1 <= uVar3) {
        uVar3 = *puVar1;
      }
      puVar1 = puVar1 + 5;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (param_2 < param_3) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x70) + (ulonglong)param_2 * 0x14 + 4);
    uVar2 = (ulonglong)(param_3 - param_2);
    do {
      if (uVar3 != puVar1[1]) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
        *puVar1 = *puVar1 | 1;
      }
      puVar1 = puVar1 + 5;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 144b62160 FUN_144b62160 body=271 status=ok
// SIG undefined FUN_144b62160(void)

void FUN_144b62160(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  
  uVar4 = (ulonglong)param_2;
  if (*(char *)(param_1 + 0x59) == '\0') {
    FUN_144b620d0(param_1,uVar4);
    return;
  }
  uVar2 = 0xffffffff;
  uVar1 = *(uint *)(param_1 + 100);
  if (param_2 < uVar1) {
    uVar3 = (ulonglong)(uVar1 - param_2);
    puVar5 = (uint *)(*(longlong *)(param_1 + 0x78) + uVar4 * 0x14 + 8);
    do {
      if (*puVar5 <= uVar2) {
        uVar2 = *puVar5;
      }
      puVar5 = puVar5 + 5;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (*(uint *)(param_1 + 0x5c) < param_3) {
    puVar5 = (uint *)(*(longlong *)(param_1 + 0x70) + (ulonglong)*(uint *)(param_1 + 0x5c) * 0x14 +
                     8);
    uVar3 = (ulonglong)(param_3 - *(int *)(param_1 + 0x5c));
    do {
      if (*puVar5 <= uVar2) {
        uVar2 = *puVar5;
      }
      puVar5 = puVar5 + 5;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_2 < uVar1) {
    puVar5 = (uint *)(*(longlong *)(param_1 + 0x78) + uVar4 * 0x14 + 4);
    uVar4 = (ulonglong)(uVar1 - param_2);
    do {
      if (uVar2 != puVar5[1]) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
        *puVar5 = *puVar5 | 1;
      }
      puVar5 = puVar5 + 5;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x5c);
  if (uVar1 < param_3) {
    puVar5 = (uint *)(*(longlong *)(param_1 + 0x70) + (ulonglong)uVar1 * 0x14 + 4);
    uVar4 = (ulonglong)(param_3 - uVar1);
    do {
      if (uVar2 != puVar5[1]) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
        *puVar5 = *puVar5 | 1;
      }
      puVar5 = puVar5 + 5;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 144b62270 FUN_144b62270 body=259 status=ok
// SIG undefined FUN_144b62270(void)

undefined8 FUN_144b62270(longlong param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x59) == '\0') {
    *(uint *)(param_1 + 0x5c) = param_2;
    return 1;
  }
  if (*(char *)(param_1 + 0x58) != '\0') {
    uVar2 = *(uint *)(param_1 + 100);
    if (uVar2 < param_2) {
      param_2 = param_2 - uVar2;
      cVar1 = FUN_144b62480(param_1,param_2,param_2);
      if (cVar1 == '\0') {
        return 0;
      }
      memmove((void *)(*(longlong *)(param_1 + 0x78) + (ulonglong)*(uint *)(param_1 + 100) * 0x14),
              (void *)(*(longlong *)(param_1 + 0x70) + (ulonglong)*(uint *)(param_1 + 0x5c) * 0x14),
              (ulonglong)param_2 * 0x14);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + param_2;
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + param_2;
      return 1;
    }
    if (param_2 < uVar2) {
      uVar2 = uVar2 - param_2;
      if ((*(uint *)(param_1 + 0x5c) < uVar2) &&
         (cVar1 = FUN_144b62510(param_1,uVar2), cVar1 == '\0')) {
        return 0;
      }
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) - uVar2;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - uVar2;
      memmove((void *)(*(longlong *)(param_1 + 0x70) + (ulonglong)*(uint *)(param_1 + 0x5c) * 0x14),
              (void *)(*(longlong *)(param_1 + 0x78) + (ulonglong)*(uint *)(param_1 + 100) * 0x14),
              (ulonglong)uVar2 * 0x14);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 144b62380 FUN_144b62380 body=248 status=ok
// SIG undefined FUN_144b62380(void)

ulonglong FUN_144b62380(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x58) == '\0') {
LAB_144b62398:
    return in_RAX & 0xffffffffffffff00;
  }
  if (*(uint *)(param_1 + 0x2c) < param_2) {
    *(undefined1 *)(param_1 + 0x58) = 0;
    goto LAB_144b62398;
  }
  lVar3 = 0;
  uVar6 = *(uint *)(param_1 + 0x68);
  lVar1 = *(longlong *)(param_1 + 0x78);
  lVar2 = *(longlong *)(param_1 + 0x70);
  lVar4 = lVar3;
  if (param_2 < 0xccccccc) {
    for (; uVar6 <= param_2; uVar6 = uVar6 + 0x20 + (uVar6 >> 1)) {
    }
    lVar4 = 0;
    if (uVar6 < 0xccccccc) {
      lVar3 = FUN_14286436b(*(undefined8 *)(param_1 + 0x80),(ulonglong)uVar6 * 0x14);
      lVar4 = FUN_14286436b(*(undefined8 *)(param_1 + 0x70),(ulonglong)uVar6 * 0x14);
      if ((lVar3 != 0) && (lVar4 != 0)) goto LAB_144b62428;
    }
  }
  *(undefined1 *)(param_1 + 0x58) = 0;
LAB_144b62428:
  if (lVar3 != 0) {
    *(longlong *)(param_1 + 0x80) = lVar3;
  }
  if (lVar4 != 0) {
    *(longlong *)(param_1 + 0x70) = lVar4;
  }
  if (lVar1 == lVar2) {
    uVar5 = *(undefined8 *)(param_1 + 0x70);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x80);
  }
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  if (*(byte *)(param_1 + 0x58) != 0) {
    *(uint *)(param_1 + 0x68) = uVar6;
  }
  return (ulonglong)*(byte *)(param_1 + 0x58);
}



// FUNCTION 144b62480 FUN_144b62480 body=136 status=ok
// SIG undefined FUN_144b62480(void)

undefined1 FUN_144b62480(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = param_3 + *(int *)(param_1 + 100);
  if ((uVar2 != 0) && (*(uint *)(param_1 + 0x68) <= uVar2)) {
    cVar1 = FUN_144b62380();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  if (*(void **)(param_1 + 0x78) == *(void **)(param_1 + 0x70)) {
    if ((uint)(*(int *)(param_1 + 0x5c) + param_2) < *(uint *)(param_1 + 100) + param_3) {
      *(void **)(param_1 + 0x78) = *(void **)(param_1 + 0x80);
      memcpy(*(void **)(param_1 + 0x80),*(void **)(param_1 + 0x70),
             (ulonglong)*(uint *)(param_1 + 100) * 0x14);
    }
  }
  return 1;
}



// FUNCTION 144b62510 FUN_144b62510 body=156 status=ok
// SIG undefined FUN_144b62510(void)

undefined1 FUN_144b62510(longlong param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 0x60) + param_2;
  if ((uVar2 != 0) && (*(uint *)(param_1 + 0x68) <= uVar2)) {
    cVar1 = FUN_144b62380();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x5c);
  memmove((void *)(*(longlong *)(param_1 + 0x70) + ((ulonglong)uVar2 + (ulonglong)param_2) * 0x14),
          (void *)(*(longlong *)(param_1 + 0x70) + (ulonglong)uVar2 * 0x14),
          (ulonglong)(*(int *)(param_1 + 0x60) - uVar2) * 0x14);
  uVar2 = *(uint *)(param_1 + 0x60);
  if (uVar2 < *(int *)(param_1 + 0x5c) + param_2) {
    memset((void *)(*(longlong *)(param_1 + 0x70) + (ulonglong)uVar2 * 0x14),0,
           (ulonglong)((*(int *)(param_1 + 0x5c) - uVar2) + param_2) * 0x14);
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + param_2;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + param_2;
  return 1;
}



// FUNCTION 144b625b0 FUN_144b625b0 body=338 status=ok
// SIG undefined FUN_144b625b0(void)

void FUN_144b625b0(longlong param_1,uint param_2,uint param_3,code *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  
  uVar11 = (ulonglong)(param_2 + 1);
  if (param_2 + 1 < param_3) {
    lVar14 = uVar11 * 0x14;
    do {
      uVar12 = (uint)uVar11;
      if (param_2 < uVar12) {
        lVar2 = uVar11 * 0x14;
        do {
          uVar10 = (uint)uVar11;
          uVar13 = uVar10 - 1;
          uVar11 = (ulonglong)uVar13;
          iVar9 = (*param_4)(*(longlong *)(param_1 + 0x70) + uVar11 * 0x14,
                             *(longlong *)(param_1 + 0x70) + lVar2);
          if (iVar9 < 1) break;
          uVar10 = uVar13;
        } while (param_2 < uVar13);
        if (uVar12 != uVar10) {
          if (1 < (uVar12 - uVar10) + 1) {
            FUN_144b61d00(param_1,uVar10,uVar12 + 1);
          }
          lVar4 = *(longlong *)(param_1 + 0x70);
          puVar1 = (undefined4 *)(lVar14 + lVar4);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          uVar7 = puVar1[2];
          uVar8 = puVar1[3];
          uVar3 = *(undefined4 *)(lVar14 + 0x10 + lVar4);
          lVar2 = (ulonglong)uVar10 * 0x14;
          memmove((void *)(lVar4 + (ulonglong)(uVar10 + 1) * 0x14),(void *)(lVar2 + lVar4),
                  (ulonglong)(uVar12 - uVar10) * 0x14);
          lVar4 = *(longlong *)(param_1 + 0x70);
          puVar1 = (undefined4 *)(lVar2 + lVar4);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          puVar1[2] = uVar7;
          puVar1[3] = uVar8;
          *(undefined4 *)(lVar2 + 0x10 + lVar4) = uVar3;
        }
      }
      lVar14 = lVar14 + 0x14;
      uVar11 = (ulonglong)(uVar12 + 1);
    } while (uVar12 + 1 < param_3);
  }
  return;
}



// FUNCTION 144b62710 FUN_144b62710 body=133 status=ok
// SIG undefined FUN_144b62710(void)

void FUN_144b62710(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar1 = (ulonglong *)FUN_144737586();
  local_b8 = 0;
  local_b0 = param_4;
  __stdio_common_vsprintf(*puVar1 | 2,local_a8,100,param_3);
  (**(code **)(param_1 + 0xc0))(param_1,param_2,local_a8,*(undefined8 *)(param_1 + 200));
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_d8);
}



// FUNCTION 144b627b0 FUN_144b627b0 body=617 status=ok
// SIG undefined FUN_144b627b0(void)

void FUN_144b627b0(longlong param_1,short *param_2,int param_3,uint param_4,int param_5)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  short *psVar6;
  ushort *puVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  short *psVar11;
  ushort *puVar12;
  ushort *puVar13;
  
  uVar4 = *(uint *)(param_1 + 0x20);
  if (*(int *)(param_1 + 4) != 0) {
    if (param_3 == -1) {
      param_3 = 0;
      sVar1 = *param_2;
      psVar6 = param_2;
      while (sVar1 != 0) {
        psVar6 = psVar6 + 1;
        param_3 = param_3 + 1;
        sVar1 = *psVar6;
      }
    }
    if (param_5 == -1) {
      param_5 = param_3 - param_4;
    }
    uVar9 = (int)(((longlong)param_5 & 0x7fffffffffffffffU) >> 1) + *(int *)(param_1 + 0x60);
    if ((uVar9 != 0) && (*(uint *)(param_1 + 0x68) <= uVar9)) {
      FUN_144b62380(param_1,uVar9);
    }
    if ((*(int *)(param_1 + 0x60) == 0) && (param_4 != 0)) {
      *(undefined4 *)(param_1 + 0xb4) = 0;
      psVar6 = param_2 + param_4;
      while ((param_2 < psVar6 && (*(uint *)(param_1 + 0xb4) < 5))) {
        uVar2 = psVar6[-1];
        psVar11 = psVar6 + -1;
        uVar9 = (uint)uVar2;
        if ((uVar2 - 0xd800 < 0x800) &&
           (((uVar9 = uVar4, 0xdbff < uVar2 && (param_2 < psVar11)) &&
            ((ushort)psVar6[-2] - 0xd800 < 0x400)))) {
          psVar11 = psVar6 + -2;
          uVar9 = uVar2 + 0xfca02400 + (uint)(ushort)psVar6[-2] * 0x400;
        }
        *(uint *)(param_1 + 0x8c + (ulonglong)*(uint *)(param_1 + 0xb4) * 4) = uVar9;
        *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
        psVar6 = psVar11;
      }
    }
    puVar13 = (ushort *)(param_2 + param_4);
    puVar12 = puVar13;
    while (puVar7 = puVar12, puVar7 < puVar13 + param_5) {
      uVar2 = *puVar7;
      puVar12 = puVar7 + 1;
      uVar9 = (uint)uVar2;
      if (((uVar2 - 0xd800 < 0x800) && (uVar9 = uVar4, uVar2 < 0xdc00)) &&
         ((puVar12 < puVar13 + param_5 && (uVar3 = *puVar12, uVar3 - 0xdc00 < 0x400)))) {
        puVar12 = puVar7 + 2;
        uVar9 = (uint)uVar2 * 0x400 + -0x35fdc00 + (uint)uVar3;
      }
      if (((*(int *)(param_1 + 0x60) == -1) ||
          (*(int *)(param_1 + 0x60) + 1U < *(uint *)(param_1 + 0x68))) ||
         (cVar8 = FUN_144b62380(param_1), cVar8 != '\0')) {
        uVar10 = (ulonglong)*(uint *)(param_1 + 0x60);
        lVar5 = *(longlong *)(param_1 + 0x70);
        *(undefined8 *)(lVar5 + uVar10 * 0x14) = 0;
        *(undefined8 *)(lVar5 + 8 + uVar10 * 0x14) = 0;
        *(undefined4 *)(lVar5 + 0x10 + uVar10 * 0x14) = 0;
        *(uint *)(lVar5 + uVar10 * 0x14) = uVar9;
        *(undefined4 *)(lVar5 + 4 + uVar10 * 0x14) = 0;
        *(int *)(lVar5 + 8 + uVar10 * 0x14) = (int)((longlong)puVar7 - (longlong)param_2 >> 1);
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      }
    }
    *(undefined4 *)(param_1 + 0xb8) = 0;
    while ((puVar7 < param_2 + param_3 && (*(uint *)(param_1 + 0xb8) < 5))) {
      uVar2 = *puVar7;
      puVar13 = puVar7 + 1;
      uVar9 = (uint)uVar2;
      if ((uVar2 - 0xd800 < 0x800) &&
         (((uVar9 = uVar4, uVar2 < 0xdc00 && (puVar13 < param_2 + param_3)) &&
          (uVar3 = *puVar13, uVar3 - 0xdc00 < 0x400)))) {
        puVar13 = puVar7 + 2;
        uVar9 = (uint)uVar2 * 0x400 + -0x35fdc00 + (uint)uVar3;
      }
      *(uint *)(param_1 + 0xa0 + (ulonglong)*(uint *)(param_1 + 0xb8) * 4) = uVar9;
      *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
      puVar7 = puVar13;
    }
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  return;
}



// FUNCTION 144b62a40 FUN_144b62a40 body=231 status=ok
// SIG undefined FUN_144b62a40(void)

ulonglong FUN_144b62a40(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  uVar4 = (**(code **)(*(longlong *)(lVar1 + 0x40) + 0x120))
                    (lVar1,*(undefined8 *)(lVar1 + 0x48),param_3,
                     *(undefined8 *)(*(longlong *)(lVar1 + 0x40) + 0x10));
  if ((int)uVar4 != 0) {
    iVar2 = *param_3;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x24);
      if (iVar3 != *(int *)(param_1 + 0x24)) {
        iVar2 = (int)(((longlong)*(int *)(param_1 + 0x24) * (longlong)iVar2) / (longlong)iVar3);
      }
    }
    iVar3 = param_3[1];
    *param_3 = iVar2;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x24);
      if (iVar2 != *(int *)(param_1 + 0x24)) {
        iVar3 = (int)(((longlong)*(int *)(param_1 + 0x24) * (longlong)iVar3) / (longlong)iVar2);
      }
    }
    param_3[1] = iVar3;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x24);
      if (iVar2 != *(int *)(param_1 + 0x24)) {
        param_3[2] = (int)(((longlong)*(int *)(param_1 + 0x24) * (longlong)param_3[2]) /
                          (longlong)iVar2);
        return uVar4 & 0xffffffff;
      }
    }
    param_3[2] = param_3[2];
    uVar4 = uVar4 & 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 144b62b50 FUN_144b62b50 body=231 status=ok
// SIG undefined FUN_144b62b50(void)

ulonglong FUN_144b62b50(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  uVar4 = (**(code **)(*(longlong *)(lVar1 + 0x40) + 0x128))
                    (lVar1,*(undefined8 *)(lVar1 + 0x48),param_3,
                     *(undefined8 *)(*(longlong *)(lVar1 + 0x40) + 0x18));
  if ((int)uVar4 != 0) {
    iVar2 = *param_3;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x20);
      if (iVar3 != *(int *)(param_1 + 0x20)) {
        iVar2 = (int)(((longlong)*(int *)(param_1 + 0x20) * (longlong)iVar2) / (longlong)iVar3);
      }
    }
    iVar3 = param_3[1];
    *param_3 = iVar2;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x20);
      if (iVar2 != *(int *)(param_1 + 0x20)) {
        iVar3 = (int)(((longlong)*(int *)(param_1 + 0x20) * (longlong)iVar3) / (longlong)iVar2);
      }
    }
    param_3[1] = iVar3;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x20);
      if (iVar2 != *(int *)(param_1 + 0x20)) {
        param_3[2] = (int)(((longlong)*(int *)(param_1 + 0x20) * (longlong)param_3[2]) /
                          (longlong)iVar2);
        return uVar4 & 0xffffffff;
      }
    }
    param_3[2] = param_3[2];
    uVar4 = uVar4 & 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 144b62c50 FUN_144b62c50 body=115 status=ok
// SIG undefined FUN_144b62c50(void)

void FUN_144b62c50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 local_res18 [4];
  ulonglong in_stack_ffffffffffffffd8;
  
  local_res18[0] = (undefined4)param_3;
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x40) + 0x138);
  if (pcVar1 != FUN_144b62cd0) {
    (*pcVar1)(param_1,*(undefined8 *)(param_1 + 0x48),1,local_res18,
              in_stack_ffffffffffffffd8 & 0xffffffff00000000,param_4,0,
              *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x28));
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  *param_4 = 0;
  (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x130))
            (lVar2,*(undefined8 *)(lVar2 + 0x48),param_3,param_4,
             *(undefined8 *)(*(longlong *)(lVar2 + 0x40) + 0x20));
  return;
}



// FUNCTION 144b62cd0 FUN_144b62cd0 body=246 status=ok
// SIG undefined FUN_144b62cd0(void)

ulonglong FUN_144b62cd0(longlong param_1,undefined8 param_2,uint param_3,undefined4 *param_4,
                       uint param_5,undefined4 *param_6,uint param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if (*(code **)(*(longlong *)(param_1 + 0x40) + 0x130) == FUN_144b62c50) {
    lVar2 = *(longlong *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000144b62dbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x138))(lVar2,*(undefined8 *)(lVar2 + 0x48));
    return uVar5;
  }
  uVar6 = 0;
  uVar3 = param_3;
  if (param_3 != 0) {
    do {
      uVar1 = *param_4;
      *param_6 = 0;
      iVar4 = (**(code **)(*(longlong *)(param_1 + 0x40) + 0x130))
                        (param_1,*(undefined8 *)(param_1 + 0x48),uVar1,param_6,
                         *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x20));
      uVar3 = uVar6;
      if (iVar4 == 0) break;
      param_4 = (undefined4 *)((longlong)param_4 + (ulonglong)param_5);
      param_6 = (undefined4 *)((longlong)param_6 + (ulonglong)param_7);
      uVar6 = uVar6 + 1;
      uVar3 = param_3;
    } while (uVar6 < param_3);
  }
  return (ulonglong)uVar3;
}



// FUNCTION 144b62e20 FUN_144b62e20 body=170 status=ok
// SIG undefined FUN_144b62e20(void)

ulonglong FUN_144b62e20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint local_res8 [4];
  undefined4 local_res18 [4];
  
  local_res18[0] = (undefined4)param_3;
  pcVar2 = *(code **)(*(longlong *)(param_1 + 0x40) + 0x158);
  if (pcVar2 != FUN_144b62f90) {
    (*pcVar2)(param_1,*(undefined8 *)(param_1 + 0x48),1,local_res18,0,local_res8,0,
              *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x48));
    return (ulonglong)local_res8[0];
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  uVar4 = (**(code **)(*(longlong *)(lVar3 + 0x40) + 0x148))
                    (lVar3,*(undefined8 *)(lVar3 + 0x48),param_3,
                     *(undefined8 *)(*(longlong *)(lVar3 + 0x40) + 0x38));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x20);
    if (iVar1 != *(int *)(param_1 + 0x20)) {
      return ((longlong)*(int *)(param_1 + 0x20) * (longlong)(int)uVar4) / (longlong)iVar1;
    }
  }
  return (ulonglong)uVar4;
}



// FUNCTION 144b62ee0 FUN_144b62ee0 body=170 status=ok
// SIG undefined FUN_144b62ee0(void)

ulonglong FUN_144b62ee0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint local_res8 [4];
  undefined4 local_res18 [4];
  
  local_res18[0] = (undefined4)param_3;
  pcVar2 = *(code **)(*(longlong *)(param_1 + 0x40) + 0x160);
  if (pcVar2 != FUN_144b630c0) {
    (*pcVar2)(param_1,*(undefined8 *)(param_1 + 0x48),1,local_res18,0,local_res8,0,
              *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x50));
    return (ulonglong)local_res8[0];
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  uVar4 = (**(code **)(*(longlong *)(lVar3 + 0x40) + 0x150))
                    (lVar3,*(undefined8 *)(lVar3 + 0x48),param_3,
                     *(undefined8 *)(*(longlong *)(lVar3 + 0x40) + 0x40));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x24);
    if (iVar1 != *(int *)(param_1 + 0x24)) {
      return ((longlong)*(int *)(param_1 + 0x24) * (longlong)(int)uVar4) / (longlong)iVar1;
    }
  }
  return (ulonglong)uVar4;
}



// FUNCTION 144b62f90 FUN_144b62f90 body=294 status=ok
// SIG undefined FUN_144b62f90(void)

void FUN_144b62f90(longlong param_1,undefined8 param_2,uint param_3,undefined4 *param_4,uint param_5
                  ,int *param_6,uint param_7)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_3;
  if (*(code **)(*(longlong *)(param_1 + 0x40) + 0x148) == FUN_144b62e20) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x158))
              (lVar2,*(undefined8 *)(lVar2 + 0x48),param_3,param_4,param_5,param_6,param_7,
               *(undefined8 *)(*(longlong *)(lVar2 + 0x40) + 0x48));
    if (param_3 != 0) {
      do {
        iVar3 = *param_6;
        if (*(longlong *)(param_1 + 0x10) != 0) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x20);
          if (iVar1 != *(int *)(param_1 + 0x20)) {
            iVar3 = (int)(((longlong)*(int *)(param_1 + 0x20) * (longlong)iVar3) / (longlong)iVar1);
          }
        }
        *param_6 = iVar3;
        param_6 = (int *)((longlong)param_6 + (ulonglong)param_7);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else if (param_3 != 0) {
    do {
      iVar3 = (**(code **)(*(longlong *)(param_1 + 0x40) + 0x148))
                        (param_1,*(undefined8 *)(param_1 + 0x48),*param_4,
                         *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38));
      *param_6 = iVar3;
      param_4 = (undefined4 *)((longlong)param_4 + (ulonglong)param_5);
      param_6 = (int *)((longlong)param_6 + (ulonglong)param_7);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 144b630c0 FUN_144b630c0 body=294 status=ok
// SIG undefined FUN_144b630c0(void)

void FUN_144b630c0(longlong param_1,undefined8 param_2,uint param_3,undefined4 *param_4,uint param_5
                  ,int *param_6,uint param_7)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_3;
  if (*(code **)(*(longlong *)(param_1 + 0x40) + 0x150) == FUN_144b62ee0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x160))
              (lVar2,*(undefined8 *)(lVar2 + 0x48),param_3,param_4,param_5,param_6,param_7,
               *(undefined8 *)(*(longlong *)(lVar2 + 0x40) + 0x50));
    if (param_3 != 0) {
      do {
        iVar3 = *param_6;
        if (*(longlong *)(param_1 + 0x10) != 0) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x24);
          if (iVar1 != *(int *)(param_1 + 0x24)) {
            iVar3 = (int)(((longlong)*(int *)(param_1 + 0x24) * (longlong)iVar3) / (longlong)iVar1);
          }
        }
        *param_6 = iVar3;
        param_6 = (int *)((longlong)param_6 + (ulonglong)param_7);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else if (param_3 != 0) {
    do {
      iVar3 = (**(code **)(*(longlong *)(param_1 + 0x40) + 0x150))
                        (param_1,*(undefined8 *)(param_1 + 0x48),*param_4,
                         *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x40));
      *param_6 = iVar3;
      param_4 = (undefined4 *)((longlong)param_4 + (ulonglong)param_5);
      param_6 = (int *)((longlong)param_6 + (ulonglong)param_7);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 144b63200 FUN_144b63200 body=174 status=ok
// SIG undefined FUN_144b63200(void)

ulonglong FUN_144b63200(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                       int *param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  *param_5 = 0;
  *param_4 = 0;
  uVar4 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x168))
                    (lVar2,*(undefined8 *)(lVar2 + 0x48),param_3,param_4,param_5,
                     *(undefined8 *)(*(longlong *)(lVar2 + 0x40) + 0x58));
  if ((int)uVar4 != 0) {
    iVar3 = *param_4;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x20);
      if (iVar1 != *(int *)(param_1 + 0x20)) {
        iVar3 = (int)(((longlong)*(int *)(param_1 + 0x20) * (longlong)iVar3) / (longlong)iVar1);
      }
    }
    *param_4 = iVar3;
    iVar3 = *param_5;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x24);
      if (iVar1 != *(int *)(param_1 + 0x24)) {
        iVar3 = (int)(((longlong)*(int *)(param_1 + 0x24) * (longlong)iVar3) / (longlong)iVar1);
      }
    }
    *param_5 = iVar3;
    uVar4 = uVar4 & 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 144b632c0 FUN_144b632c0 body=174 status=ok
// SIG undefined FUN_144b632c0(void)

ulonglong FUN_144b632c0(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                       int *param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  *param_5 = 0;
  *param_4 = 0;
  uVar4 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x170))
                    (lVar2,*(undefined8 *)(lVar2 + 0x48),param_3,param_4,param_5,
                     *(undefined8 *)(*(longlong *)(lVar2 + 0x40) + 0x60));
  if ((int)uVar4 != 0) {
    iVar3 = *param_4;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x20);
      if (iVar1 != *(int *)(param_1 + 0x20)) {
        iVar3 = (int)(((longlong)*(int *)(param_1 + 0x20) * (longlong)iVar3) / (longlong)iVar1);
      }
    }
    *param_4 = iVar3;
    iVar3 = *param_5;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x24);
      if (iVar1 != *(int *)(param_1 + 0x24)) {
        iVar3 = (int)(((longlong)*(int *)(param_1 + 0x24) * (longlong)iVar3) / (longlong)iVar1);
      }
    }
    *param_5 = iVar3;
    uVar4 = uVar4 & 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 144b63380 FUN_144b63380 body=88 status=ok
// SIG undefined FUN_144b63380(void)

ulonglong FUN_144b63380(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar3 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x178))
                    (lVar2,*(undefined8 *)(lVar2 + 0x48),param_3,param_4,
                     *(undefined8 *)(*(longlong *)(lVar2 + 0x40) + 0x68));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x20);
    if (iVar1 != *(int *)(param_1 + 0x20)) {
      return ((longlong)*(int *)(param_1 + 0x20) * (longlong)(int)uVar3) / (longlong)iVar1;
    }
  }
  return (ulonglong)uVar3;
}



// FUNCTION 144b633f0 FUN_144b633f0 body=88 status=ok
// SIG undefined FUN_144b633f0(void)

ulonglong FUN_144b633f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar3 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x180))
                    (lVar2,*(undefined8 *)(lVar2 + 0x48),param_3,param_4,
                     *(undefined8 *)(*(longlong *)(lVar2 + 0x40) + 0x70));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x24);
    if (iVar1 != *(int *)(param_1 + 0x24)) {
      return ((longlong)*(int *)(param_1 + 0x24) * (longlong)(int)uVar3) / (longlong)iVar1;
    }
  }
  return (ulonglong)uVar3;
}



// FUNCTION 144b63460 FUN_144b63460 body=268 status=ok
// SIG undefined FUN_144b63460(void)

ulonglong FUN_144b63460(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  param_4[0] = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  uVar4 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x188))
                    (lVar2,*(undefined8 *)(lVar2 + 0x48),param_3,param_4,
                     *(undefined8 *)(*(longlong *)(lVar2 + 0x40) + 0x78));
  if ((int)uVar4 != 0) {
    iVar3 = *param_4;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x20);
      if (iVar1 != *(int *)(param_1 + 0x20)) {
        iVar3 = (int)(((longlong)*(int *)(param_1 + 0x20) * (longlong)iVar3) / (longlong)iVar1);
      }
    }
    *param_4 = iVar3;
    iVar3 = param_4[1];
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x24);
      if (iVar1 != *(int *)(param_1 + 0x24)) {
        iVar3 = (int)(((longlong)*(int *)(param_1 + 0x24) * (longlong)iVar3) / (longlong)iVar1);
      }
    }
    param_4[1] = iVar3;
    iVar3 = param_4[2];
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x20);
      if (iVar1 != *(int *)(param_1 + 0x20)) {
        iVar3 = (int)(((longlong)*(int *)(param_1 + 0x20) * (longlong)iVar3) / (longlong)iVar1);
      }
    }
    param_4[2] = iVar3;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x24);
      if (iVar3 != *(int *)(param_1 + 0x24)) {
        param_4[3] = (int)(((longlong)*(int *)(param_1 + 0x24) * (longlong)param_4[3]) /
                          (longlong)iVar3);
        return uVar4 & 0xffffffff;
      }
    }
    param_4[3] = param_4[3];
    uVar4 = uVar4 & 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 144b63590 FUN_144b63590 body=183 status=ok
// SIG undefined FUN_144b63590(void)

ulonglong FUN_144b63590(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       int *param_5,int *param_6)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  *param_6 = 0;
  *param_5 = 0;
  uVar4 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 400))
                    (lVar2,*(undefined8 *)(lVar2 + 0x48),param_3,param_4,param_5,param_6,
                     *(undefined8 *)(*(longlong *)(lVar2 + 0x40) + 0x80));
  if ((int)uVar4 != 0) {
    iVar3 = *param_5;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x20);
      if (iVar1 != *(int *)(param_1 + 0x20)) {
        iVar3 = (int)(((longlong)*(int *)(param_1 + 0x20) * (longlong)iVar3) / (longlong)iVar1);
      }
    }
    *param_5 = iVar3;
    iVar3 = *param_6;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x24);
      if (iVar1 != *(int *)(param_1 + 0x24)) {
        iVar3 = (int)(((longlong)*(int *)(param_1 + 0x24) * (longlong)iVar3) / (longlong)iVar1);
      }
    }
    *param_6 = iVar3;
    uVar4 = uVar4 & 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 144b636f0 FUN_144b636f0 body=8 status=ok
// SIG undefined FUN_144b636f0(void)

undefined4 * FUN_144b636f0(void)

{
  return &DAT_149970bd0;
}



// FUNCTION 144b63700 FUN_144b63700 body=141 status=ok
// SIG undefined FUN_144b63700(void)

void FUN_144b63700(longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 4) == 0) {
    if (param_4 != (code *)0x0) {
      (*param_4)(param_3);
    }
  }
  else {
    if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
      (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0x18));
    }
    if (param_2 == 0) {
      *(code **)(param_1 + 0x128) = FUN_144b62b50;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x128) = param_2;
      *(undefined8 *)(param_1 + 0x18) = param_3;
      *(code **)(param_1 + 0xa0) = param_4;
    }
  }
  return;
}



// FUNCTION 144b63790 FUN_144b63790 body=141 status=ok
// SIG undefined FUN_144b63790(void)

void FUN_144b63790(longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 4) == 0) {
    if (param_4 != (code *)0x0) {
      (*param_4)(param_3);
    }
  }
  else {
    if (*(code **)(param_1 + 0xb8) != (code *)0x0) {
      (**(code **)(param_1 + 0xb8))(*(undefined8 *)(param_1 + 0x30));
    }
    if (param_2 == 0) {
      *(undefined1 **)(param_1 + 0x140) = &LAB_144b62de0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x140) = param_2;
      *(undefined8 *)(param_1 + 0x30) = param_3;
      *(code **)(param_1 + 0xb8) = param_4;
    }
  }
  return;
}



// FUNCTION 144b63820 FUN_144b63820 body=150 status=ok
// SIG undefined FUN_144b63820(void)

void FUN_144b63820(longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 4) == 0) {
    if (param_4 != (code *)0x0) {
      (*param_4)(param_3);
    }
  }
  else {
    if (*(code **)(param_1 + 0x110) != (code *)0x0) {
      (**(code **)(param_1 + 0x110))(*(undefined8 *)(param_1 + 0x88));
    }
    if (param_2 == 0) {
      *(undefined1 **)(param_1 + 0x198) = &LAB_144b63660;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x110) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x198) = param_2;
      *(undefined8 *)(param_1 + 0x88) = param_3;
      *(code **)(param_1 + 0x110) = param_4;
    }
  }
  return;
}



// FUNCTION 144b638c0 FUN_144b638c0 body=150 status=ok
// SIG undefined FUN_144b638c0(void)

void FUN_144b638c0(longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 4) == 0) {
    if (param_4 != (code *)0x0) {
      (*param_4)(param_3);
    }
  }
  else {
    if (*(code **)(param_1 + 0x118) != (code *)0x0) {
      (**(code **)(param_1 + 0x118))(*(undefined8 *)(param_1 + 0x90));
    }
    if (param_2 == 0) {
      *(undefined1 **)(param_1 + 0x1a0) = &LAB_144b636a0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x118) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x1a0) = param_2;
      *(undefined8 *)(param_1 + 0x90) = param_3;
      *(code **)(param_1 + 0x118) = param_4;
    }
  }
  return;
}



// FUNCTION 144b63960 FUN_144b63960 body=22 status=ok
// SIG undefined FUN_144b63960(void)

void FUN_144b63960(longlong param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000144b6396f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x40) + 0x148))
            (param_1,*(undefined8 *)(param_1 + 0x48),param_2,
             *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38));
  return;
}



// FUNCTION 144b63980 FUN_144b63980 body=84 status=ok
// SIG undefined FUN_144b63980(void)

void FUN_144b63980(longlong param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  
  *param_4 = 0;
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (param_3 != 0) {
    (**(code **)(lVar1 + 0x140))
              (param_1,*(undefined8 *)(param_1 + 0x48),param_2,param_3,param_4,
               *(undefined8 *)(lVar1 + 0x30));
    return;
  }
  (**(code **)(lVar1 + 0x130))
            (param_1,*(undefined8 *)(param_1 + 0x48),param_2,param_4,*(undefined8 *)(lVar1 + 0x20));
  return;
}



// FUNCTION 144b639e0 FUN_144b639e0 body=31 status=ok
// SIG undefined FUN_144b639e0(void)

undefined8 FUN_144b639e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144b63fc0();
  FUN_144e30190(uVar1);
  return uVar1;
}



// FUNCTION 144b63a00 FUN_144b63a00 body=304 status=ok
// SIG undefined FUN_144b63a00(void)

undefined4 * FUN_144b63a00(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  void *_Dst;
  int *piVar6;
  
  piVar6 = (int *)&DAT_1499709b0;
  if (param_1 != (int *)0x0) {
    piVar6 = param_1;
  }
  lVar3 = *(longlong *)(piVar6 + 6);
  if (lVar3 == 0) {
    lVar3 = FUN_144e2d0e0();
  }
  puVar4 = (undefined4 *)FUN_142864336(1,0x68);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)&DAT_1499709b0;
  }
  else {
    *puVar4 = 1;
    puVar4[1] = 1;
    *(undefined8 *)(puVar4 + 2) = 0;
    FUN_144e2d1f0(lVar3);
    *(undefined **)(puVar4 + 4) = &DAT_1499709b0;
    uVar5 = FUN_144e2d0f0(lVar3);
    *(undefined8 *)(puVar4 + 6) = uVar5;
    *(undefined4 **)(puVar4 + 0x16) = puVar4;
    *(undefined4 **)(puVar4 + 0x10) = &DAT_149970bd0;
    uVar2 = FUN_144e2d250(lVar3);
    puVar4[9] = uVar2;
    puVar4[8] = uVar2;
  }
  if (puVar4[1] != 0) {
    if ((piVar6 != (int *)0x0) && (*piVar6 != 0)) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    *(int **)(puVar4 + 4) = piVar6;
    puVar4[8] = piVar6[8];
    puVar4[9] = piVar6[9];
    puVar4[10] = piVar6[10];
    puVar4[0xb] = piVar6[0xb];
    puVar4[0xc] = piVar6[0xc];
    iVar1 = piVar6[0xd];
    puVar4[0xd] = iVar1;
    if (iVar1 == 0) {
      *(undefined8 *)(puVar4 + 0xe) = 0;
    }
    else {
      iVar1 = piVar6[0xd];
      _Dst = (void *)FUN_14286432f(iVar1 << 2);
      *(void **)(puVar4 + 0xe) = _Dst;
      if (_Dst == (void *)0x0) {
        puVar4[0xd] = 0;
      }
      else {
        memcpy(_Dst,*(void **)(piVar6 + 0xe),(ulonglong)(uint)(iVar1 << 2));
      }
    }
  }
  return puVar4;
}



// FUNCTION 144b63b30 FUN_144b63b30 body=185 status=ok
// SIG undefined FUN_144b63b30(void)

void FUN_144b63b30(int *param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
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
      if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_144e3d520();
      }
      if (*(code **)(param_1 + 0x14) != (code *)0x0) {
        (**(code **)(param_1 + 0x14))(*(undefined8 *)(param_1 + 0x12));
      }
      FUN_144b63b30(*(undefined8 *)(param_1 + 4));
      FUN_144e2d110(*(undefined8 *)(param_1 + 6));
      FUN_144b49210(*(undefined8 *)(param_1 + 0x10));
      thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0xe));
      thunk_FUN_1400020a8(param_1);
    }
  }
  return;
}



// FUNCTION 144b63bf0 FUN_144b63bf0 body=25 status=ok
// SIG undefined FUN_144b63bf0(void)

undefined1 FUN_144b63bf0(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_144b64060();
  return uVar1;
}



// FUNCTION 144b63c10 FUN_144b63c10 body=44 status=ok
// SIG undefined FUN_144b63c10(void)

undefined8 FUN_144b63c10(int *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    UNLOCK();
    if (*(longlong *)(param_1 + 2) != 0) {
      uVar1 = FUN_144e2c4a0();
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 144b63c40 FUN_144b63c40 body=5 status=ok
// SIG undefined FUN_144b63c40(void)

undefined8 FUN_144b63c40(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 144b63c50 FUN_144b63c50 body=152 status=ok
// SIG undefined FUN_144b63c50(void)

void FUN_144b63c50(longlong param_1,int *param_2,undefined8 param_3,code *param_4)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (param_4 != (code *)0x0) {
      (*param_4)(param_3);
    }
  }
  else {
    if (*(code **)(param_1 + 0x50) != (code *)0x0) {
      (**(code **)(param_1 + 0x50))(*(undefined8 *)(param_1 + 0x48));
    }
    piVar1 = &DAT_149970bd0;
    if (param_2 != (int *)0x0) {
      piVar1 = param_2;
    }
    if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_144b49210(*(undefined8 *)(param_1 + 0x40));
    *(int **)(param_1 + 0x40) = piVar1;
    *(undefined8 *)(param_1 + 0x48) = param_3;
    *(code **)(param_1 + 0x50) = param_4;
  }
  return;
}



// FUNCTION 144b63cf0 FUN_144b63cf0 body=14 status=ok
// SIG undefined FUN_144b63cf0(void)

void FUN_144b63cf0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0x24) = param_3;
  }
  return;
}



// FUNCTION 144b63d00 FUN_144b63d00 body=22 status=ok
// SIG undefined FUN_144b63d00(void)

void FUN_144b63d00(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x20);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x24);
  }
  return;
}



// FUNCTION 144b63d20 FUN_144b63d20 body=15 status=ok
// SIG undefined FUN_144b63d20(void)

undefined8 FUN_144b63d20(longlong param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x34);
  }
  return *(undefined8 *)(param_1 + 0x38);
}



// FUNCTION 144b63d30 FUN_144b63d30 body=76 status=ok
// SIG undefined FUN_144b63d30(void)

undefined8 FUN_144b63d30(longlong param_1,uint param_2)

{
  char cVar1;
  
  if (*(undefined **)(*(longlong *)(param_1 + 0x40) + 0x120 + (ulonglong)param_2 * 8) !=
      (&PTR_FUN_149970cf0)[param_2]) {
    return 1;
  }
  if (((*(undefined **)(param_1 + 0x10) != (undefined *)0x0) &&
      (*(undefined **)(param_1 + 0x10) != &DAT_1499709b0)) &&
     (cVar1 = FUN_144b63d30(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 144b63d80 FUN_144b63d80 body=275 status=ok
// SIG undefined FUN_144b63d80(void)

void FUN_144b63d80(longlong param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  int *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_4 = 0;
  *param_3 = 0;
  local_70 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x58);
  local_78 = param_4;
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x40) + 0x168))
                    (param_1,*(undefined8 *)(param_1 + 0x48),param_2,param_3);
  if (iVar1 == 0) {
    *param_4 = 0;
    *param_3 = 0;
    local_70 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x60);
    local_78 = param_4;
    iVar1 = (**(code **)(*(longlong *)(param_1 + 0x40) + 0x170))
                      (param_1,*(undefined8 *)(param_1 + 0x48),param_2,param_3);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(longlong *)(param_1 + 0x40) + 0x148))
                        (param_1,*(undefined8 *)(param_1 + 0x48),param_2,
                         *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38));
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      iVar2 = (**(code **)(*(longlong *)(param_1 + 0x40) + 0x120))
                        (param_1,*(undefined8 *)(param_1 + 0x48),&local_68,
                         *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10));
      if (iVar2 == 0) {
        iVar2 = (int)((double)*(int *)(param_1 + 0x24) * 0.8);
      }
      else {
        iVar2 = (int)local_68;
      }
      *param_3 = *param_3 - iVar1 / 2;
      *param_4 = *param_4 - iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
}



// FUNCTION 144b63ea0 FUN_144b63ea0 body=275 status=ok
// SIG undefined FUN_144b63ea0(void)

void FUN_144b63ea0(longlong param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  int *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_4 = 0;
  *param_3 = 0;
  local_70 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x60);
  local_78 = param_4;
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0x40) + 0x170))
                    (param_1,*(undefined8 *)(param_1 + 0x48),param_2,param_3);
  if (iVar1 == 0) {
    *param_4 = 0;
    *param_3 = 0;
    local_70 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x58);
    local_78 = param_4;
    iVar1 = (**(code **)(*(longlong *)(param_1 + 0x40) + 0x168))
                      (param_1,*(undefined8 *)(param_1 + 0x48),param_2,param_3);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(longlong *)(param_1 + 0x40) + 0x148))
                        (param_1,*(undefined8 *)(param_1 + 0x48),param_2,
                         *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38));
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      iVar2 = (**(code **)(*(longlong *)(param_1 + 0x40) + 0x120))
                        (param_1,*(undefined8 *)(param_1 + 0x48),&local_68,
                         *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10));
      if (iVar2 == 0) {
        iVar2 = (int)((double)*(int *)(param_1 + 0x24) * 0.8);
      }
      else {
        iVar2 = (int)local_68;
      }
      *param_3 = *param_3 + iVar1 / 2;
      *param_4 = *param_4 + iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
}



// FUNCTION 144b63fc0 FUN_144b63fc0 body=160 status=ok
// SIG undefined FUN_144b63fc0(void)

undefined4 * FUN_144b63fc0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    param_1 = FUN_144e2d0e0();
  }
  puVar2 = (undefined4 *)FUN_142864336(1);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 1;
    puVar2[1] = 1;
    *(undefined8 *)(puVar2 + 2) = 0;
    FUN_144e2d1f0(param_1);
    *(undefined **)(puVar2 + 4) = &DAT_1499709b0;
    uVar3 = FUN_144e2d0f0(param_1);
    *(undefined8 *)(puVar2 + 6) = uVar3;
    *(undefined4 **)(puVar2 + 0x16) = puVar2;
    *(undefined4 **)(puVar2 + 0x10) = &DAT_149970bd0;
    uVar1 = FUN_144e2d250(param_1);
    puVar2[9] = uVar1;
    puVar2[8] = uVar1;
    return puVar2;
  }
  return (undefined4 *)&DAT_1499709b0;
}



// FUNCTION 144b64060 FUN_144b64060 body=237 status=ok
// SIG undefined FUN_144b64060(void)

ulonglong FUN_144b64060(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 param_5)

{
  ulonglong in_RAX;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar1;
  bool bVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 2);
  LOCK();
  UNLOCK();
  while (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_142864336(0x38);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      return 0;
    }
    InitializeCriticalSection(lpCriticalSection);
    lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    lpCriticalSection[1].LockCount = 0;
    lpCriticalSection[1].RecursionCount = 0;
    LOCK();
    bVar2 = *(longlong *)(param_1 + 2) == 0;
    if (bVar2) {
      *(LPCRITICAL_SECTION *)(param_1 + 2) = lpCriticalSection;
    }
    UNLOCK();
    if (bVar2) break;
    FUN_144b61790(lpCriticalSection + 1,lpCriticalSection);
    DeleteCriticalSection(lpCriticalSection);
    thunk_FUN_1400020a8(lpCriticalSection);
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 2);
    LOCK();
    UNLOCK();
  }
  uVar1 = FUN_144e2c420(lpCriticalSection,param_2,param_3,param_4,param_5);
  return uVar1;
}



// FUNCTION 144b64150 FUN_144b64150 body=147 status=ok
// SIG undefined FUN_144b64150(void)

undefined8 FUN_144b64150(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0xa0);
  if (puVar1[4] == 0) {
    uVar2 = FUN_144e3ef30(*puVar1,*(undefined4 *)(puVar1 + 1),1,param_1,param_2);
    uVar3 = FUN_144e2cf10(uVar2,*(undefined4 *)(param_1 + 4));
    FUN_144e3f120(uVar2);
  }
  else {
    uVar3 = FUN_144e2d040(FUN_144b64e00,param_1,param_2);
  }
  FUN_144e2d230(uVar3,*(undefined4 *)(param_1 + 4));
  FUN_144e2d240(uVar3,*(undefined2 *)(param_1 + 0x68));
  return uVar3;
}



// FUNCTION 144b641f0 FUN_144b641f0 body=205 status=ok
// SIG undefined FUN_144b641f0(void)

longlong FUN_144b641f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  uVar3 = FUN_144b64150();
  lVar4 = FUN_144b639e0(uVar3);
  FUN_144e2d110(uVar3);
  if ((*(longlong *)(param_1 + 0x88) == 0) ||
     (*(int *)(*(longlong *)(param_1 + 0x88) + 8) != 0x73796d62)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  uVar3 = FUN_144b64320(param_1,uVar3,0);
  uVar5 = FUN_144b64d70();
  FUN_144b63c50(lVar4,uVar5,uVar3,FUN_144b64400);
  if (*(code **)(lVar4 + 0x50) == FUN_144b64400) {
    lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x48) + 0x28);
    lVar2 = *(longlong *)(lVar1 + 0x80);
    uVar6 = (ulonglong)*(ushort *)(lVar1 + 0x68);
    FUN_144b63cf0(lVar4,uVar6 * (longlong)*(int *)(lVar2 + 0x1c) + 0x8000 >> 0x10,
                  (longlong)*(int *)(lVar2 + 0x20) * uVar6 + 0x8000 >> 0x10);
  }
  return lVar4;
}



// FUNCTION 144b642c0 FUN_144b642c0 body=25 status=ok
// SIG undefined FUN_144b642c0(void)

undefined8 FUN_144b642c0(longlong param_1)

{
  if (*(code **)(param_1 + 0x50) != FUN_144b64400) {
    return 0;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x28);
}



// FUNCTION 144b642e0 FUN_144b642e0 body=27 status=ok
// SIG undefined FUN_144b642e0(void)

void FUN_144b642e0(longlong param_1,undefined4 param_2)

{
  if ((*(int *)(param_1 + 4) != 0) && (*(code **)(param_1 + 0x50) == FUN_144b64400)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x30) = param_2;
  }
  return;
}



// FUNCTION 144b64300 FUN_144b64300 body=24 status=ok
// SIG undefined FUN_144b64300(void)

undefined4 FUN_144b64300(longlong param_1)

{
  if (*(code **)(param_1 + 0x50) != FUN_144b64400) {
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x30);
}



// FUNCTION 144b64320 FUN_144b64320 body=209 status=ok
// SIG undefined FUN_144b64320(void)

LPCRITICAL_SECTION
FUN_144b64320(PRTL_CRITICAL_SECTION_DEBUG param_1,undefined1 param_2,undefined1 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  longlong lVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_142864336(1,0x440);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    InitializeCriticalSection(lpCriticalSection);
    lpCriticalSection[1].DebugInfo = param_1;
    *(undefined1 *)&lpCriticalSection[1].RecursionCount = param_2;
    *(undefined1 *)((longlong)&lpCriticalSection[1].RecursionCount + 1) = param_3;
    lpCriticalSection[1].LockCount = 2;
    LOCK();
    UNLOCK();
    *(undefined4 *)&lpCriticalSection[1].OwningThread = 0;
    lVar2 = 0x10;
    puVar1 = (undefined8 *)((longlong)&lpCriticalSection[1].OwningThread + 4);
    do {
      *puVar1 = 0xffffffffffffffff;
      puVar1[1] = 0xffffffffffffffff;
      puVar1[2] = 0xffffffffffffffff;
      puVar1[3] = 0xffffffffffffffff;
      puVar1[4] = 0xffffffffffffffff;
      puVar1[5] = 0xffffffffffffffff;
      puVar1[6] = 0xffffffffffffffff;
      puVar1[7] = 0xffffffffffffffff;
      lVar2 = lVar2 + -1;
      puVar1 = puVar1 + 8;
    } while (lVar2 != 0);
  }
  return lpCriticalSection;
}



// FUNCTION 144b64400 FUN_144b64400 body=46 status=ok
// SIG undefined FUN_144b64400(void)

void FUN_144b64400(LPCRITICAL_SECTION param_1)

{
  if (*(char *)((longlong)&param_1[1].RecursionCount + 1) != '\0') {
    FUN_144b54b00(param_1[1].DebugInfo);
  }
  DeleteCriticalSection(param_1);
  thunk_FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144b64430 FUN_144b64430 body=118 status=ok
// SIG undefined FUN_144b64430(void)

undefined4 FUN_144b64430(undefined8 param_1,LPCRITICAL_SECTION param_2,uint param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  EnterCriticalSection(param_2);
  iVar1 = FUN_144b42f90(param_2[1].DebugInfo,param_3);
  if (iVar1 == 0) {
    if (((char)param_2[1].RecursionCount != '\0') && (param_3 < 0x100)) {
      iVar1 = FUN_144b42f90(param_2[1].DebugInfo,param_3 + 0xf000);
      if (iVar1 != 0) goto LAB_144b64484;
    }
    uVar2 = 0;
  }
  else {
LAB_144b64484:
    *param_4 = iVar1;
    uVar2 = 1;
  }
  LeaveCriticalSection(param_2);
  return uVar2;
}



// FUNCTION 144b644b0 FUN_144b644b0 body=138 status=ok
// SIG undefined FUN_144b644b0(void)

uint FUN_144b644b0(undefined8 param_1,LPCRITICAL_SECTION param_2,uint param_3,undefined4 *param_4,
                  uint param_5,int *param_6,uint param_7)

{
  int iVar1;
  uint uVar2;
  
  EnterCriticalSection(param_2);
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      iVar1 = FUN_144b42f90(param_2[1].DebugInfo,*param_4);
      *param_6 = iVar1;
      if (iVar1 == 0) break;
      param_4 = (undefined4 *)((longlong)param_4 + (ulonglong)param_5);
      param_6 = (int *)((longlong)param_6 + (ulonglong)param_7);
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  LeaveCriticalSection(param_2);
  return uVar2;
}



// FUNCTION 144b64540 FUN_144b64540 body=96 status=ok
// SIG undefined FUN_144b64540(void)

bool FUN_144b64540(undefined8 param_1,LPCRITICAL_SECTION param_2,undefined4 param_3,
                  undefined4 param_4,int *param_5)

{
  int iVar1;
  
  EnterCriticalSection(param_2);
  iVar1 = FUN_144b55500(param_2[1].DebugInfo,param_3,param_4);
  if (iVar1 != 0) {
    *param_5 = iVar1;
  }
  LeaveCriticalSection(param_2);
  return iVar1 != 0;
}



// FUNCTION 144b645a0 FUN_144b645a0 body=391 status=ok
// SIG undefined FUN_144b645a0(void)

void FUN_144b645a0(longlong param_1,LPCRITICAL_SECTION param_2,uint param_3,uint *param_4,
                  uint param_5,int *param_6,uint param_7)

{
  int iVar1;
  LONG LVar2;
  uint uVar3;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint local_res18 [2];
  
  uVar8 = (ulonglong)param_3;
  EnterCriticalSection(param_2);
  iVar1 = *(int *)(param_1 + 0x20);
  p_Var4 = param_2[1].DebugInfo;
  LVar2 = param_2[1].LockCount;
  LOCK();
  UNLOCK();
  if (*(int *)(param_1 + 0x20) != *(int *)&param_2[1].OwningThread) {
    lVar7 = 0x10;
    puVar5 = (undefined8 *)((longlong)&param_2[1].OwningThread + 4);
    do {
      *puVar5 = 0xffffffffffffffff;
      puVar5[1] = 0xffffffffffffffff;
      puVar5[2] = 0xffffffffffffffff;
      puVar5[3] = 0xffffffffffffffff;
      puVar5[4] = 0xffffffffffffffff;
      puVar5[5] = 0xffffffffffffffff;
      puVar5[6] = 0xffffffffffffffff;
      puVar5[7] = 0xffffffffffffffff;
      lVar7 = lVar7 + -1;
      puVar5 = puVar5 + 8;
    } while (lVar7 != 0);
    LOCK();
    UNLOCK();
    *(undefined4 *)&param_2[1].OwningThread = *(undefined4 *)(param_1 + 0x20);
  }
  if (param_3 != 0) {
    do {
      uVar3 = *param_4;
      local_res18[0] = 0;
      uVar6 = *(uint *)((longlong)&param_2[1].OwningThread + (ulonglong)(uVar3 & 0xff) * 4 + 4);
      if ((uVar6 == 0xffffffff) || (((uVar6 >> 0x10 ^ uVar3) & 0xffffff00) != 0)) {
        FUN_144b43000(p_Var4,uVar3,LVar2,local_res18);
        uVar6 = local_res18[0];
        if (((uVar3 & 0xffff0000) == 0) && (local_res18[0] < 0x1000000)) {
          *(uint *)((longlong)&param_2[1].OwningThread + (ulonglong)(uVar3 & 0xff) * 4 + 4) =
               (uVar3 & 0xff00) << 0x10 | local_res18[0];
        }
      }
      else {
        uVar6 = uVar6 & 0xffffff;
      }
      param_4 = (uint *)((longlong)param_4 + (ulonglong)param_5);
      *param_6 = (int)(uVar6 * ((iVar1 >> 0x1f & 0xfffffffeU) + 1) + 0x200) >> 10;
      param_6 = (int *)((longlong)param_6 + (ulonglong)param_7);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x000144b64720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_2);
  return;
}



// FUNCTION 144b64730 FUN_144b64730 body=118 status=ok
// SIG undefined FUN_144b64730(void)

int FUN_144b64730(longlong param_1,LPCRITICAL_SECTION param_2,undefined4 param_3)

{
  int iVar1;
  int local_res10 [2];
  
  EnterCriticalSection(param_2);
  iVar1 = FUN_144b43000(param_2[1].DebugInfo,param_3,param_2[1].LockCount | 0x10,local_res10);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x24) < 0) {
      local_res10[0] = -local_res10[0];
    }
    iVar1 = 0x200 - local_res10[0] >> 10;
  }
  else {
    iVar1 = 0;
  }
  LeaveCriticalSection(param_2);
  return iVar1;
}



// FUNCTION 144b647b0 FUN_144b647b0 body=169 status=ok
// SIG undefined FUN_144b647b0(void)

undefined4
FUN_144b647b0(longlong param_1,LPCRITICAL_SECTION param_2,undefined4 param_3,int *param_4,
             int *param_5)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  int iVar3;
  undefined4 uVar4;
  
  EnterCriticalSection(param_2);
  p_Var1 = param_2[1].DebugInfo;
  iVar3 = FUN_144b54d40(p_Var1,param_3,param_2[1].LockCount);
  if (iVar3 == 0) {
    p_Var2 = p_Var1[2].ProcessLocksList.Blink;
    *param_4 = *(int *)&p_Var2[3].Blink - *(int *)((longlong)&p_Var2[4].Flink + 4);
    p_Var2 = p_Var1[2].ProcessLocksList.Blink;
    *param_5 = *(int *)&p_Var2[4].Blink + *(int *)((longlong)&p_Var2[3].Blink + 4);
    if (*(int *)(param_1 + 0x20) < 0) {
      *param_4 = -*param_4;
    }
    if (*(int *)(param_1 + 0x24) < 0) {
      *param_5 = -*param_5;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  LeaveCriticalSection(param_2);
  return uVar4;
}



// FUNCTION 144b64860 FUN_144b64860 body=199 status=ok
// SIG undefined FUN_144b64860(void)

undefined4
FUN_144b64860(longlong param_1,LPCRITICAL_SECTION param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  int iVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  p_Var3 = param_2[1].DebugInfo;
  iVar4 = FUN_144b54d40(p_Var3,param_3,param_2[1].LockCount);
  if (iVar4 == 0) {
    iVar4 = *(int *)&p_Var3[2].ProcessLocksList.Blink[3].Blink;
    *param_4 = iVar4;
    param_4[1] = *(int *)((longlong)&p_Var3[2].ProcessLocksList.Blink[3].Blink + 4);
    iVar1 = *(int *)&p_Var3[2].ProcessLocksList.Blink[3].Flink;
    param_4[2] = iVar1;
    iVar2 = *(int *)((longlong)&p_Var3[2].ProcessLocksList.Blink[3].Flink + 4);
    param_4[3] = -iVar2;
    if (*(int *)(param_1 + 0x20) < 0) {
      *param_4 = -iVar4;
      param_4[2] = -iVar1;
    }
    if (*(int *)(param_1 + 0x24) < 0) {
      param_4[1] = -param_4[1];
      param_4[3] = iVar2;
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  LeaveCriticalSection(param_2);
  return uVar5;
}



// FUNCTION 144b64930 FUN_144b64930 body=172 status=ok
// SIG undefined FUN_144b64930(void)

undefined4
FUN_144b64930(undefined8 param_1,LPCRITICAL_SECTION param_2,undefined4 param_3,uint param_4,
             undefined4 *param_5,undefined4 *param_6)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  int iVar3;
  undefined4 uVar4;
  
  EnterCriticalSection(param_2);
  p_Var1 = param_2[1].DebugInfo;
  iVar3 = FUN_144b54d40(p_Var1,param_3,param_2[1].LockCount);
  if (((iVar3 == 0) &&
      (p_Var2 = p_Var1[2].ProcessLocksList.Blink, *(int *)&p_Var2[6].Flink == 0x6f75746c)) &&
     (param_4 < (uint)(int)*(short *)((longlong)&p_Var2[9].Blink + 2))) {
    uVar4 = 1;
    *param_5 = *(undefined4 *)(&(p_Var2[10].Flink)->Flink + param_4);
    *param_6 = *(undefined4 *)
                ((longlong)&(p_Var1[2].ProcessLocksList.Blink[10].Flink)->Flink +
                (ulonglong)param_4 * 8 + 4);
  }
  else {
    uVar4 = 0;
  }
  LeaveCriticalSection(param_2);
  return uVar4;
}



// FUNCTION 144b649e0 FUN_144b649e0 body=104 status=ok
// SIG undefined FUN_144b649e0(void)

bool FUN_144b649e0(undefined8 param_1,LPCRITICAL_SECTION param_2,undefined4 param_3,char *param_4,
                  int param_5)

{
  int iVar1;
  bool bVar2;
  
  EnterCriticalSection(param_2);
  iVar1 = FUN_144b551f0(param_2[1].DebugInfo,param_3,param_4,param_5);
  bVar2 = iVar1 == 0;
  if (((bVar2) && (param_5 != 0)) && (*param_4 == '\0')) {
    bVar2 = false;
  }
  LeaveCriticalSection(param_2);
  return bVar2;
}



// FUNCTION 144b64a50 FUN_144b64a50 body=297 status=ok
// SIG undefined FUN_144b64a50(void)

void FUN_144b64a50(undefined8 param_1,LPCRITICAL_SECTION param_2,byte *param_3,int param_4,
                  int *param_5)

{
  byte *pbVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  ulonglong _Count;
  undefined1 auStack_d8 [32];
  byte local_b8 [128];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  EnterCriticalSection(param_2);
  p_Var2 = param_2[1].DebugInfo;
  pbVar4 = param_3;
  if (-1 < param_4) {
    if (0x7e < param_4) {
      param_4 = 0x7f;
    }
    _Count = (ulonglong)param_4;
    strncpy((char *)local_b8,(char *)param_3,_Count);
    if (0x7f < _Count) {
                    /* WARNING: Subroutine does not return */
      FUN_144e2bb84();
    }
    local_b8[_Count] = 0;
    pbVar4 = local_b8;
  }
  iVar3 = FUN_144b55460(p_Var2,pbVar4);
  *param_5 = iVar3;
  if (iVar3 == 0) {
    iVar3 = FUN_144b551f0(p_Var2,0,local_b8,0x80);
    if ((iVar3 == 0) && (param_4 < 0)) {
      pbVar4 = local_b8;
      lVar5 = (longlong)param_3 - (longlong)pbVar4;
      do {
        pbVar1 = pbVar4 + lVar5;
        iVar3 = (uint)*pbVar4 - (uint)*pbVar1;
        if (iVar3 != 0) break;
        pbVar4 = pbVar4 + 1;
      } while (*pbVar1 != 0);
    }
    else {
      iVar3 = strncmp((char *)local_b8,(char *)param_3,(longlong)param_4);
    }
    if (iVar3 == 0) {
      LeaveCriticalSection(param_2);
      goto LAB_144b64b50;
    }
  }
  LeaveCriticalSection(param_2);
LAB_144b64b50:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_d8);
}



// FUNCTION 144b64ba0 FUN_144b64ba0 body=184 status=ok
// SIG undefined FUN_144b64ba0(void)

undefined8 FUN_144b64ba0(longlong param_1,LPCRITICAL_SECTION param_2,int *param_3)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  EnterCriticalSection(param_2);
  p_Var1 = param_2[1].DebugInfo;
  iVar2 = FUN_144b42fe0((int)*(short *)((longlong)&p_Var1[2].CriticalSection + 2),
                        *(undefined4 *)(*(longlong *)&p_Var1[2].EntryCount + 0x20));
  *param_3 = iVar2;
  iVar3 = FUN_144b42fe0((int)*(short *)((longlong)&p_Var1[2].CriticalSection + 4),
                        *(undefined4 *)(*(longlong *)&p_Var1[2].EntryCount + 0x20));
  iVar2 = *param_3;
  param_3[1] = iVar3;
  iVar4 = FUN_144b42fe0((int)*(short *)((longlong)&p_Var1[2].CriticalSection + 6),
                        *(undefined4 *)(*(longlong *)&p_Var1[2].EntryCount + 0x20));
  iVar4 = iVar4 + (iVar3 - iVar2);
  param_3[2] = iVar4;
  if (*(int *)(param_1 + 0x24) < 0) {
    *param_3 = -iVar2;
    param_3[2] = -iVar4;
    param_3[1] = -iVar3;
  }
  LeaveCriticalSection(param_2);
  return 1;
}



// FUNCTION 144b64c60 FUN_144b64c60 body=262 status=ok
// SIG undefined FUN_144b64c60(void)

undefined8 FUN_144b64c60(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144b490e0();
  FUN_144b48aa0(uVar1,FUN_144b64ba0,0,0);
  FUN_144b48b30(uVar1,FUN_144b64430,0,0);
  FUN_144b48bc0(uVar1,FUN_144b644b0,0,0);
  FUN_144b63790(uVar1,FUN_144b64540,0,0);
  FUN_144b48ce0(uVar1,FUN_144b645a0,0,0);
  FUN_144b48d70(uVar1,FUN_144b64730,0,0);
  FUN_144b48e90(uVar1,FUN_144b647b0,0,0);
  FUN_144b48fb0(uVar1,FUN_144b64860,0,0);
  FUN_144b49040(uVar1,FUN_144b64930,0,0);
  FUN_144b63820(uVar1,FUN_144b649e0,0,0);
  FUN_144b638c0(uVar1,FUN_144b64a50,0,0);
  FUN_144b48a90(uVar1);
  return uVar1;
}



// FUNCTION 144b64d70 FUN_144b64d70 body=129 status=ok
// SIG undefined FUN_144b64d70(void)

longlong FUN_144b64d70(void)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  LOCK();
  UNLOCK();
  lVar1 = DAT_14c77eec8;
  if (DAT_14c77eec8 == 0) {
    while( true ) {
      lVar1 = FUN_144b64c60();
      if (lVar1 == 0) {
        lVar1 = FUN_144b636f0();
      }
      LOCK();
      bVar3 = DAT_14c77eec8 == 0;
      lVar2 = lVar1;
      if (!bVar3) {
        lVar2 = DAT_14c77eec8;
      }
      DAT_14c77eec8 = lVar2;
      UNLOCK();
      if (bVar3) break;
      if ((lVar1 != 0) && (lVar2 = FUN_144b636f0(), lVar1 != lVar2)) {
        FUN_144b49210(lVar1);
      }
      LOCK();
      UNLOCK();
      if (DAT_14c77eec8 != 0) {
        return DAT_14c77eec8;
      }
    }
  }
  return lVar1;
}



// FUNCTION 144b64e00 FUN_144b64e00 body=188 status=ok
// SIG undefined FUN_144b64e00(void)

undefined8 FUN_144b64e00(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  iVar1 = FUN_144b58f30(param_3,param_2,0,0,local_res18);
  if (iVar1 != 0) {
    return 0;
  }
  lVar2 = FUN_14286432f(local_res18[0]);
  if (lVar2 != 0) {
    iVar1 = FUN_144b58f30(param_3,param_2 & 0xffffffff,0,lVar2,local_res18);
    if (iVar1 == 0) {
      uVar3 = FUN_144e3ef30(lVar2,local_res18[0],2,lVar2,thunk_FUN_1400020a8);
      return uVar3;
    }
    thunk_FUN_1400020a8();
  }
  return 0;
}



// FUNCTION 144b64ec0 FUN_144b64ec0 body=23 status=ok
// SIG undefined FUN_144b64ec0(void)

void FUN_144b64ec0(void)

{
  FUN_144b64ee0();
  return;
}



// FUNCTION 144b64ee0 FUN_144b64ee0 body=152 status=ok
// SIG undefined FUN_144b64ee0(void)

int FUN_144b64ee0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_144e3f4c0(*(undefined8 *)(param_1 + 0x18),param_2 + 0x38,param_3,param_4,
                        *(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x34),param_5);
  iVar1 = FUN_144e3f840(uVar2,param_1,param_2,param_3,param_4 & 0xffffffff);
  FUN_144e3f7c0(uVar2);
  if (iVar1 != 0) {
    *(undefined4 *)(param_2 + 0x34) = 2;
  }
  return iVar1;
}



// FUNCTION 144b65000 thunk_FUN_144e3fe90 body=5 status=ok
// SIG undefined thunk_FUN_144e3fe90(void)

longlong thunk_FUN_144e3fe90(void)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  LOCK();
  UNLOCK();
  lVar1 = DAT_14c796620;
  if (DAT_14c796620 == 0) {
    while( true ) {
      lVar1 = FUN_144e40300();
      if (lVar1 == 0) {
        lVar1 = FUN_144b650e0();
      }
      LOCK();
      bVar3 = DAT_14c796620 == 0;
      lVar2 = lVar1;
      if (!bVar3) {
        lVar2 = DAT_14c796620;
      }
      DAT_14c796620 = lVar2;
      UNLOCK();
      if (bVar3) break;
      if ((lVar1 != 0) && (lVar2 = FUN_144b650e0(), lVar1 != lVar2)) {
        FUN_144b65110(lVar1);
      }
      LOCK();
      UNLOCK();
      if (DAT_14c796620 != 0) {
        return DAT_14c796620;
      }
    }
  }
  return lVar1;
}



// FUNCTION 144b65010 FUN_144b65010 body=194 status=ok
// SIG undefined FUN_144b65010(void)

undefined4 * FUN_144b65010(int *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)FUN_142864336(1,0xd8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 1;
    *(undefined8 *)(puVar2 + 2) = 0;
    puVar2[1] = 1;
    piVar3 = &DAT_149970e80;
    if (param_1 != (int *)0x0) {
      piVar3 = param_1;
    }
    if (piVar3[1] != 0) {
      piVar3[1] = 0;
    }
    if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    *(int **)(puVar2 + 4) = piVar3;
    uVar1 = *(undefined8 *)(piVar3 + 8);
    *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(piVar3 + 6);
    *(undefined8 *)(puVar2 + 8) = uVar1;
    uVar1 = *(undefined8 *)(piVar3 + 0xc);
    *(undefined8 *)(puVar2 + 10) = *(undefined8 *)(piVar3 + 10);
    *(undefined8 *)(puVar2 + 0xc) = uVar1;
    uVar1 = *(undefined8 *)(piVar3 + 0x10);
    *(undefined8 *)(puVar2 + 0xe) = *(undefined8 *)(piVar3 + 0xe);
    *(undefined8 *)(puVar2 + 0x10) = uVar1;
    uVar1 = *(undefined8 *)(piVar3 + 0x14);
    *(undefined8 *)(puVar2 + 0x12) = *(undefined8 *)(piVar3 + 0x12);
    *(undefined8 *)(puVar2 + 0x14) = uVar1;
    uVar1 = *(undefined8 *)(piVar3 + 0x18);
    *(undefined8 *)(puVar2 + 0x16) = *(undefined8 *)(piVar3 + 0x16);
    *(undefined8 *)(puVar2 + 0x18) = uVar1;
    uVar1 = *(undefined8 *)(piVar3 + 0x1c);
    *(undefined8 *)(puVar2 + 0x1a) = *(undefined8 *)(piVar3 + 0x1a);
    *(undefined8 *)(puVar2 + 0x1c) = uVar1;
    uVar1 = *(undefined8 *)(piVar3 + 0x20);
    *(undefined8 *)(puVar2 + 0x1e) = *(undefined8 *)(piVar3 + 0x1e);
    *(undefined8 *)(puVar2 + 0x20) = uVar1;
    uVar1 = *(undefined8 *)(piVar3 + 0x24);
    *(undefined8 *)(puVar2 + 0x22) = *(undefined8 *)(piVar3 + 0x22);
    *(undefined8 *)(puVar2 + 0x24) = uVar1;
    return puVar2;
  }
  return &DAT_149970e80;
}



// FUNCTION 144b650e0 FUN_144b650e0 body=8 status=ok
// SIG undefined FUN_144b650e0(void)

undefined4 * FUN_144b650e0(void)

{
  return &DAT_149970e80;
}



// FUNCTION 144b650f0 FUN_144b650f0 body=23 status=ok
// SIG undefined FUN_144b650f0(void)

int * FUN_144b650f0(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    *param_1 = *param_1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 144b65110 FUN_144b65110 body=277 status=ok
// SIG undefined FUN_144b65110(void)

void FUN_144b65110(int *param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
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
      if (*(code **)(param_1 + 0x26) != (code *)0x0) {
        (**(code **)(param_1 + 0x26))(*(undefined8 *)(param_1 + 0x16));
      }
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
      }
      if (*(code **)(param_1 + 0x2a) != (code *)0x0) {
        (**(code **)(param_1 + 0x2a))(*(undefined8 *)(param_1 + 0x1a));
      }
      if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
        (**(code **)(param_1 + 0x2c))(*(undefined8 *)(param_1 + 0x1c));
      }
      if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
        (**(code **)(param_1 + 0x2e))(*(undefined8 *)(param_1 + 0x1e));
      }
      if (*(code **)(param_1 + 0x30) != (code *)0x0) {
        (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x20));
      }
      if (*(code **)(param_1 + 0x32) != (code *)0x0) {
        (**(code **)(param_1 + 0x32))(*(undefined8 *)(param_1 + 0x22));
      }
      if (*(code **)(param_1 + 0x34) != (code *)0x0) {
        (**(code **)(param_1 + 0x34))(*(undefined8 *)(param_1 + 0x24));
      }
      FUN_144b65110(*(undefined8 *)(param_1 + 4));
      thunk_FUN_1400020a8(param_1);
    }
  }
  return;
}



// FUNCTION 144b65230 FUN_144b65230 body=14 status=ok
// SIG undefined FUN_144b65230(void)

void FUN_144b65230(longlong param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 144b65240 FUN_144b65240 body=130 status=ok
// SIG undefined FUN_144b65240(void)

void FUN_144b65240(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (*(code **)(param_1 + 0x98) != (code *)0x0) {
      (**(code **)(param_1 + 0x98))(*(undefined8 *)(param_1 + 0x58));
    }
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x58);
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x18) = param_2;
      *(undefined8 *)(param_1 + 0x58) = param_3;
      *(undefined8 *)(param_1 + 0x98) = param_4;
    }
  }
  return;
}



// FUNCTION 144b652d0 FUN_144b652d0 body=130 status=ok
// SIG undefined FUN_144b652d0(void)

void FUN_144b652d0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (*(code **)(param_1 + 0xa8) != (code *)0x0) {
      (**(code **)(param_1 + 0xa8))(*(undefined8 *)(param_1 + 0x68));
    }
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x68);
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x28) = param_2;
      *(undefined8 *)(param_1 + 0x68) = param_3;
      *(undefined8 *)(param_1 + 0xa8) = param_4;
    }
  }
  return;
}



// FUNCTION 144b65360 FUN_144b65360 body=130 status=ok
// SIG undefined FUN_144b65360(void)

void FUN_144b65360(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
      (**(code **)(param_1 + 0xb0))(*(undefined8 *)(param_1 + 0x70));
    }
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x30);
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70);
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x30) = param_2;
      *(undefined8 *)(param_1 + 0x70) = param_3;
      *(undefined8 *)(param_1 + 0xb0) = param_4;
    }
  }
  return;
}



// FUNCTION 144b653f0 FUN_144b653f0 body=130 status=ok
// SIG undefined FUN_144b653f0(void)

void FUN_144b653f0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (*(code **)(param_1 + 0xb8) != (code *)0x0) {
      (**(code **)(param_1 + 0xb8))(*(undefined8 *)(param_1 + 0x78));
    }
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38);
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x78);
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x38) = param_2;
      *(undefined8 *)(param_1 + 0x78) = param_3;
      *(undefined8 *)(param_1 + 0xb8) = param_4;
    }
  }
  return;
}



// FUNCTION 144b65480 FUN_144b65480 body=142 status=ok
// SIG undefined FUN_144b65480(void)

void FUN_144b65480(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (*(code **)(param_1 + 0xc0) != (code *)0x0) {
      (**(code **)(param_1 + 0xc0))(*(undefined8 *)(param_1 + 0x80));
    }
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x40);
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x80);
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x40) = param_2;
      *(undefined8 *)(param_1 + 0x80) = param_3;
      *(undefined8 *)(param_1 + 0xc0) = param_4;
    }
  }
  return;
}



// FUNCTION 144b65510 FUN_144b65510 body=142 status=ok
// SIG undefined FUN_144b65510(void)

void FUN_144b65510(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(int *)(param_1 + 4) != 0) {
    if (*(code **)(param_1 + 200) != (code *)0x0) {
      (**(code **)(param_1 + 200))(*(undefined8 *)(param_1 + 0x88));
    }
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x48);
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x88);
      *(undefined8 *)(param_1 + 200) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x48) = param_2;
      *(undefined8 *)(param_1 + 0x88) = param_3;
      *(undefined8 *)(param_1 + 200) = param_4;
    }
  }
  return;
}



// FUNCTION 144b655a0 FUN_144b655a0 body=8 status=ok
// SIG undefined FUN_144b655a0(void)

void FUN_144b655a0(longlong param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000144b655a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(param_1,param_2,*(undefined8 *)(param_1 + 0x78));
  return;
}



// FUNCTION 144b655b0 FUN_144b655b0 body=71 status=ok
// SIG undefined FUN_144b655b0(void)

undefined4 FUN_144b655b0(uint param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = 0x4c;
  do {
    iVar2 = iVar6 + iVar5;
    iVar3 = iVar2 / 2;
    lVar1 = (longlong)iVar3 * 8;
    puVar4 = &DAT_149970f60 + lVar1;
    if (param_1 < *(uint *)(&DAT_149970f60 + (longlong)iVar3 * 8)) {
      iVar6 = iVar3 + -1;
    }
    else {
      if (param_1 <= *(uint *)(&DAT_149970f64 + lVar1)) goto LAB_144b655f0;
      iVar5 = iVar3 + 1;
    }
  } while (iVar5 <= iVar6);
  puVar4 = (undefined *)0x0;
LAB_144b655f0:
  return CONCAT31((int3)(iVar2 - (iVar2 >> 0x1f) >> 9),puVar4 != (undefined *)0x0);
}



// FUNCTION 144b65600 FUN_144b65600 body=50 status=ok
// SIG undefined FUN_144b65600(void)

undefined8 * FUN_144b65600(undefined8 *param_1,undefined4 *param_2)

{
  FUN_144e472d0();
  *param_1 = Imf_3_2::TypedAttribute<int>::vftable;
  *(undefined4 *)(param_1 + 1) = *param_2;
  return param_1;
}



// FUNCTION 144b65640 FUN_144b65640 body=15 status=ok
// SIG undefined FUN_144b65640(void)

void FUN_144b65640(undefined8 *param_1)

{
  *param_1 = Imf_3_2::TypedAttribute<int>::vftable;
  FUN_144e472e0();
  return;
}



// FUNCTION 144b65650 FUN_144b65650 body=5 status=ok
// SIG undefined FUN_144b65650(void)

longlong FUN_144b65650(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144b65660 FUN_144b65660 body=8 status=ok
// SIG undefined FUN_144b65660(void)

undefined1 * FUN_144b65660(void)

{
  return &DAT_149971208;
}



// FUNCTION 144b65670 FUN_144b65670 body=70 status=ok
// SIG undefined FUN_144b65670(void)

undefined8 * FUN_144b65670(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<int>::vftable;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144b656c0 FUN_144b656c0 body=133 status=ok
// SIG undefined FUN_144b656c0(void)

longlong * FUN_144b656c0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14494321d(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    *plVar1 = 0;
    plVar1[1] = 0;
    FUN_144e472d0(plVar1);
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<int>::vftable;
  }
  if (*(code **)(*plVar1 + 0x28) == FUN_144b657f0) {
    lVar2 = FUN_144b65880(param_1);
    *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(lVar2 + 8);
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 144b65750 FUN_144b65750 body=70 status=ok
// SIG undefined FUN_144b65750(void)

void FUN_144b65750(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  return;
}



// FUNCTION 144b657a0 FUN_144b657a0 body=76 status=ok
// SIG undefined FUN_144b657a0(void)

void FUN_144b657a0(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [8];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  return;
}



// FUNCTION 144b657f0 FUN_144b657f0 body=126 status=ok
// SIG undefined FUN_144b657f0(void)

void FUN_144b657f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<int>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144b65880 FUN_144b65880 body=109 status=ok
// SIG undefined FUN_144b65880(void)

void FUN_144b65880(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<int>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144b65900 FUN_144b65900 body=19 status=ok
// SIG undefined FUN_144b65900(void)

void FUN_144b65900(void)

{
  FUN_144e475b0(&DAT_149971208,FUN_144b65670);
  return;
}



// FUNCTION 144b65920 FUN_144b65920 body=62 status=ok
// SIG undefined FUN_144b65920(void)

undefined8 * FUN_144b65920(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<int>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144b65960 FUN_144b65960 body=69 status=ok
// SIG undefined FUN_144b65960(void)

void FUN_144b65960(longlong *param_1,undefined4 *param_2)

{
  undefined4 local_res8 [8];
  
  (**(code **)(*param_1 + 0x10))(param_1,local_res8,4);
  *param_2 = local_res8[0];
  return;
}



// FUNCTION 144b659b0 FUN_144b659b0 body=61 status=ok
// SIG undefined FUN_144b659b0(void)

void FUN_144b659b0(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  
  lVar1 = param_2;
  if (0xfff < param_3) {
    lVar1 = *(longlong *)(param_2 + -8);
    param_3 = param_3 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,param_3);
  return;
}



// FUNCTION 144b659f0 FUN_144b659f0 body=87 status=ok
// SIG undefined FUN_144b659f0(void)

ulonglong FUN_144b659f0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x1000) {
    if (param_2 != 0) {
      uVar2 = FUN_14494321d(param_2);
      return uVar2;
    }
    return 0;
  }
  if (param_2 < param_2 + 0x27) {
    lVar1 = FUN_14494321d();
    if (lVar1 != 0) {
      uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar2 - 8) = lVar1;
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
                    /* WARNING: Subroutine does not return */
  FUN_14694ac37();
}



// FUNCTION 144b65a50 FUN_144b65a50 body=192 status=ok
// SIG undefined FUN_144b65a50(void)

undefined8 * FUN_144b65a50(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  void *_Dst;
  undefined8 *_Src;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  _Src = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    _Src = (undefined8 *)*param_2;
  }
  uVar1 = param_2[2];
  if (uVar1 < 0x8000000000000000) {
    param_1[3] = 0xf;
    if (uVar1 < 0x10) {
      param_1[2] = uVar1;
      uVar2 = _Src[1];
      *param_1 = *_Src;
      param_1[1] = uVar2;
    }
    else {
      uVar3 = uVar1 | 0xf;
      uVar4 = 0x7fffffffffffffff;
      if ((uVar3 < 0x8000000000000000) && (uVar4 = uVar3, uVar3 < 0x16)) {
        uVar4 = 0x16;
      }
      _Dst = (void *)FUN_144b659f0(param_1,uVar4 + 1);
      *param_1 = _Dst;
      param_1[2] = uVar1;
      param_1[3] = uVar4;
      memcpy(_Dst,_Src,uVar1 + 1);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_146eb22ad();
}



// FUNCTION 144b65b20 FUN_144b65b20 body=94 status=ok
// SIG undefined FUN_144b65b20(void)

void FUN_144b65b20(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
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
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



// FUNCTION 144b65b80 FUN_144b65b80 body=22 status=ok
// SIG undefined FUN_144b65b80(void)

undefined4 *
FUN_144b65b80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  *(undefined1 *)(param_1 + 3) = param_5;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return param_1;
}



// FUNCTION 144b65ba0 FUN_144b65ba0 body=576 status=ok
// SIG undefined FUN_144b65ba0(void)

void FUN_144b65ba0(longlong *param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  byte *pbVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_2c8 [32];
  longlong *local_2a8;
  undefined8 uStack_2a0;
  longlong *local_298;
  uint uStack_290;
  undefined4 uStack_28c;
  undefined1 local_278 [16];
  undefined1 local_268 [240];
  undefined1 local_178 [96];
  byte local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if (*param_2 == '\0') {
    FUN_144e47110();
    FUN_1470a639e(local_278,1);
    FUN_141302cc4(local_268,"Image channel name cannot be an empty string.");
    FUN_144e40dd0(local_178,local_278);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_178,(ThrowInfo *)&DAT_14c6d50e0);
  }
  strncpy((char *)local_118,param_2,0xff);
  local_19 = 0;
  plVar3 = (longlong *)*param_1;
  plVar10 = (longlong *)plVar3[1];
  uStack_290 = 0;
  cVar1 = *(char *)((longlong)plVar10 + 0x19);
  plVar12 = plVar3;
  local_298 = plVar10;
  while (plVar8 = plVar10, cVar1 == '\0') {
    pbVar9 = (byte *)((longlong)plVar8 + 0x1c);
    lVar14 = -(longlong)pbVar9;
    do {
      bVar2 = *pbVar9;
      uVar13 = (uint)pbVar9[(longlong)(local_118 + lVar14)];
      if (bVar2 != uVar13) break;
      pbVar9 = pbVar9 + 1;
    } while (uVar13 != 0);
    bVar15 = -1 < (int)(bVar2 - uVar13);
    if (bVar15) {
      plVar10 = (longlong *)*plVar8;
      plVar12 = plVar8;
    }
    else {
      plVar10 = (longlong *)plVar8[2];
    }
    uStack_290 = (uint)bVar15;
    cVar1 = *(char *)((longlong)plVar10 + 0x19);
    local_298 = plVar8;
  }
  if (*(char *)((longlong)plVar12 + 0x19) == '\0') {
    pbVar9 = local_118;
    lVar14 = 0x1c - (longlong)pbVar9;
    do {
      bVar2 = *pbVar9;
      uVar13 = (uint)pbVar9[(longlong)plVar12 + lVar14];
      if (bVar2 != uVar13) break;
      pbVar9 = pbVar9 + 1;
    } while (uVar13 != 0);
    if (-1 < (int)(bVar2 - uVar13)) goto LAB_144b65d74;
  }
  if (param_1[1] == 0xd79435e50d7943) {
                    /* WARNING: Subroutine does not return */
    FUN_1470a938d();
  }
  uStack_2a0 = 0;
  local_2a8 = param_1;
  plVar10 = (longlong *)FUN_14494321d(0x130);
  pbVar9 = local_118;
  lVar14 = 2;
  puVar11 = (undefined8 *)((longlong)plVar10 + 0x1c);
  do {
    uVar7 = *(undefined8 *)(pbVar9 + 8);
    *puVar11 = *(undefined8 *)pbVar9;
    puVar11[1] = uVar7;
    uVar7 = *(undefined8 *)(pbVar9 + 0x18);
    puVar11[2] = *(undefined8 *)(pbVar9 + 0x10);
    puVar11[3] = uVar7;
    uVar7 = *(undefined8 *)(pbVar9 + 0x28);
    puVar11[4] = *(undefined8 *)(pbVar9 + 0x20);
    puVar11[5] = uVar7;
    uVar7 = *(undefined8 *)(pbVar9 + 0x38);
    puVar11[6] = *(undefined8 *)(pbVar9 + 0x30);
    puVar11[7] = uVar7;
    uVar7 = *(undefined8 *)(pbVar9 + 0x48);
    puVar11[8] = *(undefined8 *)(pbVar9 + 0x40);
    puVar11[9] = uVar7;
    uVar7 = *(undefined8 *)(pbVar9 + 0x58);
    puVar11[10] = *(undefined8 *)(pbVar9 + 0x50);
    puVar11[0xb] = uVar7;
    uVar7 = *(undefined8 *)(pbVar9 + 0x68);
    puVar11[0xc] = *(undefined8 *)(pbVar9 + 0x60);
    puVar11[0xd] = uVar7;
    uVar4 = *(undefined4 *)(pbVar9 + 0x74);
    uVar5 = *(undefined4 *)(pbVar9 + 0x78);
    uVar6 = *(undefined4 *)(pbVar9 + 0x7c);
    *(undefined4 *)(puVar11 + 0xe) = *(undefined4 *)(pbVar9 + 0x70);
    *(undefined4 *)((longlong)puVar11 + 0x74) = uVar4;
    *(undefined4 *)(puVar11 + 0xf) = uVar5;
    *(undefined4 *)((longlong)puVar11 + 0x7c) = uVar6;
    pbVar9 = pbVar9 + 0x80;
    lVar14 = lVar14 + -1;
    puVar11 = puVar11 + 0x10;
  } while (lVar14 != 0);
  *(undefined4 *)((longlong)plVar10 + 0x11c) = 1;
  *(undefined4 *)(plVar10 + 0x24) = 1;
  *(undefined4 *)((longlong)plVar10 + 0x124) = 1;
  *(undefined1 *)(plVar10 + 0x25) = 0;
  *plVar10 = (longlong)plVar3;
  plVar10[1] = (longlong)plVar3;
  plVar10[2] = (longlong)plVar3;
  *(undefined2 *)(plVar10 + 3) = 0;
  local_2a8 = local_298;
  uStack_2a0 = CONCAT44(uStack_28c,uStack_290);
  plVar12 = (longlong *)FUN_144b66150(param_1,&local_2a8);
LAB_144b65d74:
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)((longlong)plVar12 + 0x11c) = *param_3;
  *(undefined4 *)(plVar12 + 0x24) = uVar4;
  *(undefined4 *)((longlong)plVar12 + 0x124) = uVar5;
  *(undefined4 *)(plVar12 + 0x25) = uVar6;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_2c8);
}



// FUNCTION 144b65e00 FUN_144b65e00 body=249 status=ok
// SIG undefined FUN_144b65e00(void)

void FUN_144b65e00(longlong *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  uint uVar8;
  longlong lVar9;
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
  puVar6 = puVar3;
  puVar5 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar7 = (byte *)((longlong)puVar5 + 0x1c);
    lVar9 = -(longlong)pbVar7;
    do {
      bVar2 = *pbVar7;
      uVar8 = (uint)pbVar7[(longlong)(local_118 + lVar9)];
      if (bVar2 != uVar8) break;
      pbVar7 = pbVar7 + 1;
    } while (uVar8 != 0);
    if ((int)(bVar2 - uVar8) < 0) {
      puVar10 = (undefined8 *)puVar5[2];
      puVar5 = puVar6;
    }
    else {
      puVar10 = (undefined8 *)*puVar5;
    }
    puVar6 = puVar5;
    puVar5 = puVar10;
    cVar1 = *(char *)((longlong)puVar10 + 0x19);
  }
  if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
    pbVar7 = local_118;
    lVar9 = 0x1c - (longlong)pbVar7;
    do {
      bVar2 = *pbVar7;
      uVar8 = (uint)pbVar7[(longlong)puVar6 + lVar9];
      if (bVar2 != uVar8) break;
      pbVar7 = pbVar7 + 1;
    } while (uVar8 != 0);
    if (-1 < (int)(bVar2 - uVar8)) {
      bVar4 = true;
      goto LAB_144b65ed0;
    }
  }
  bVar4 = false;
LAB_144b65ed0:
  if (!bVar4) {
    puVar6 = puVar3;
  }
  lVar9 = 0;
  if (puVar6 != puVar3) {
    lVar9 = (longlong)puVar6 + 0x11c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_138,lVar9);
}



// FUNCTION 144b65f10 FUN_144b65f10 body=13 status=ok
// SIG undefined FUN_144b65f10(void)

undefined8 * FUN_144b65f10(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)*param_1;
  return param_2;
}



// FUNCTION 144b65f20 FUN_144b65f20 body=13 status=ok
// SIG undefined FUN_144b65f20(void)

undefined8 * FUN_144b65f20(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)*param_1;
  return param_2;
}



// FUNCTION 144b65f30 FUN_144b65f30 body=10 status=ok
// SIG undefined FUN_144b65f30(void)

undefined8 * FUN_144b65f30(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  return param_2;
}



// FUNCTION 144b65f40 FUN_144b65f40 body=10 status=ok
// SIG undefined FUN_144b65f40(void)

undefined8 * FUN_144b65f40(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  return param_2;
}



// FUNCTION 144b65f50 FUN_144b65f50 body=233 status=ok
// SIG undefined FUN_144b65f50(void)

void FUN_144b65f50(longlong *param_1,longlong *param_2,char *param_3)

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
    pbVar6 = (byte *)((longlong)puVar9 + 0x1c);
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
    lVar4 = 0x1c - (longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar7 = (uint)pbVar6[(longlong)puVar10 + lVar4];
      if (bVar2 != uVar7) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    if (-1 < (int)(bVar2 - uVar7)) {
      bVar5 = true;
      goto LAB_144b6601d;
    }
  }
  bVar5 = false;
LAB_144b6601d:
  if (!bVar5) {
    puVar10 = puVar3;
  }
  *param_2 = (longlong)puVar10;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_138);
}



// FUNCTION 144b66050 FUN_144b66050 body=233 status=ok
// SIG undefined FUN_144b66050(void)

void FUN_144b66050(longlong *param_1,longlong *param_2,char *param_3)

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
    pbVar6 = (byte *)((longlong)puVar9 + 0x1c);
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
    lVar4 = 0x1c - (longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar7 = (uint)pbVar6[(longlong)puVar10 + lVar4];
      if (bVar2 != uVar7) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    if (-1 < (int)(bVar2 - uVar7)) {
      bVar5 = true;
      goto LAB_144b6611d;
    }
  }
  bVar5 = false;
LAB_144b6611d:
  if (!bVar5) {
    puVar10 = puVar3;
  }
  *param_2 = (longlong)puVar10;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_138);
}



// FUNCTION 144b66150 FUN_144b66150 body=603 status=ok
// SIG undefined FUN_144b66150(void)

longlong * FUN_144b66150(longlong *param_1,longlong *param_2,longlong *param_3)

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
LAB_144b6638d:
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
        goto LAB_144b6638d;
      }
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      plVar6 = *(longlong **)(plVar6[1] + 8);
    }
    cVar1 = *(char *)(plVar6[1] + 0x18);
  } while( true );
}



// FUNCTION 144b663b0 FUN_144b663b0 body=102 status=ok
// SIG undefined FUN_144b663b0(void)

longlong * FUN_144b663b0(longlong *param_1)

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



// FUNCTION 144b66420 FUN_144b66420 body=207 status=ok
// SIG undefined FUN_144b66420(void)

void FUN_144b66420(basic_streambuf<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  *(undefined ***)param_1 = &PTR_FUN_14a179f40;
  if (((byte)param_1[0x70] & 1) != 0) {
    pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::pptr(param_1);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::egptr(param_1);
    }
    else {
      pcVar1 = std::basic_streambuf<char,std::char_traits<char>_>::epptr(param_1);
    }
    pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::eback(param_1);
    pcVar3 = std::basic_streambuf<char,std::char_traits<char>_>::eback(param_1);
    pcVar4 = pcVar2;
    if ((0xfff < (ulonglong)((longlong)pcVar1 - (longlong)pcVar3)) &&
       (pcVar4 = *(char **)(pcVar2 + -8), (char *)0x1f < pcVar2 + (-8 - (longlong)pcVar4))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    thunk_FUN_1400020a8(pcVar4);
  }
  std::basic_streambuf<char,std::char_traits<char>_>::setg
            (param_1,(char *)0x0,(char *)0x0,(char *)0x0);
  std::basic_streambuf<char,std::char_traits<char>_>::setp(param_1,(char *)0x0,(char *)0x0);
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfffffffe;
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x000144b664e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (param_1);
  return;
}



// FUNCTION 144b664f0 FUN_144b664f0 body=91 status=ok
// SIG undefined FUN_144b664f0(void)

void FUN_144b664f0(longlong *param_1)

{
  basic_ios<char,std::char_traits<char>_> *this;
  
  this = (basic_ios<char,std::char_traits<char>_> *)(param_1 + 0x13);
  *(undefined ***)(this + (longlong)*(int *)(*param_1 + 4) + -0x98) = &PTR_LAB_14a179f28;
  *(int *)(this + (longlong)*(int *)(*param_1 + 4) + -0x9c) = *(int *)(*param_1 + 4) + -0x98;
  FUN_144b66420(param_1 + 3);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(param_1 + 4));
                    /* WARNING: Could not recover jumptable at 0x000144b66544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(this);
  return;
}



// FUNCTION 144b66550 FUN_144b66550 body=109 status=ok
// SIG undefined FUN_144b66550(void)

uint FUN_144b66550(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 *_Buf2;
  undefined8 *_Buf1;
  ulonglong _Size;
  
  _Buf2 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    _Buf2 = (undefined8 *)*param_3;
  }
  _Buf1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    _Buf1 = (undefined8 *)*param_2;
  }
  uVar1 = param_3[2];
  uVar2 = param_2[2];
  _Size = uVar2;
  if (uVar1 < uVar2) {
    _Size = uVar1;
  }
  uVar3 = memcmp(_Buf1,_Buf2,_Size);
  if (uVar3 == 0) {
    if (uVar2 < uVar1) {
      return 1;
    }
    uVar3 = 0;
  }
  return uVar3 >> 0x1f;
}



// FUNCTION 144b665c0 FUN_144b665c0 body=603 status=ok
// SIG undefined FUN_144b665c0(void)

longlong * FUN_144b665c0(longlong *param_1,longlong *param_2,longlong *param_3)

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
LAB_144b667fd:
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
        goto LAB_144b667fd;
      }
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      plVar6 = *(longlong **)(plVar6[1] + 8);
    }
    cVar1 = *(char *)(plVar6[1] + 0x18);
  } while( true );
}



// FUNCTION 144b66820 FUN_144b66820 body=191 status=ok
// SIG undefined FUN_144b66820(void)

void FUN_144b66820(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_144b66820(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    uVar3 = param_3[7];
    if (0xf < uVar3) {
      lVar4 = param_3[4];
      uVar6 = uVar3 + 1;
      lVar5 = lVar4;
      if (0xfff < uVar6) {
        lVar5 = *(longlong *)(lVar4 + -8);
        uVar6 = uVar3 + 0x28;
        if (0x1f < (lVar4 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar5,uVar6);
    }
    param_3[6] = 0;
    param_3[7] = 0xf;
    *(undefined1 *)(param_3 + 4) = 0;
    thunk_FUN_1400020a8(param_3,0x40);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_3 = plVar2;
  } while( true );
}



// FUNCTION 144b66940 FUN_144b66940 body=60 status=ok
// SIG undefined FUN_144b66940(void)

undefined8 * FUN_144b66940(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::logic_error::vftable;
  return param_1;
}



// FUNCTION 144b66980 FUN_144b66980 body=66 status=ok
// SIG undefined FUN_144b66980(void)

undefined8 * FUN_144b66980(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144b669d0 FUN_144b669d0 body=71 status=ok
// SIG undefined FUN_144b669d0(void)

undefined8 * FUN_144b669d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  __std_exception_copy(&local_18);
  *param_1 = std::invalid_argument::vftable;
  return param_1;
}



// FUNCTION 144b66a40 FUN_144b66a40 body=60 status=ok
// SIG undefined FUN_144b66a40(void)

undefined8 * FUN_144b66a40(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::invalid_argument::vftable;
  return param_1;
}



// FUNCTION 144b66a80 FUN_144b66a80 body=66 status=ok
// SIG undefined FUN_144b66a80(void)

undefined8 * FUN_144b66a80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144b66ad0 FUN_144b66ad0 body=61 status=ok
// SIG undefined FUN_144b66ad0(void)

undefined4 *
FUN_144b66ad0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = *param_3;
  param_1[3] = param_3[1];
  param_1[4] = *param_4;
  param_1[5] = param_4[1];
  param_1[6] = *param_5;
  param_1[7] = param_5[1];
  return param_1;
}



// FUNCTION 144b66b10 FUN_144b66b10 body=108 status=ok
// SIG undefined FUN_144b66b10(void)

undefined1 FUN_144b66b10(float *param_1,float *param_2)

{
  if (((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
      ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))) &&
     ((param_1[5] == param_2[5] && ((param_1[6] == param_2[6] && (param_1[7] == param_2[7])))))) {
    return 0;
  }
  return 1;
}



// FUNCTION 144b66b80 FUN_144b66b80 body=939 status=ok
// SIG undefined FUN_144b66b80(void)

float * FUN_144b66b80(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_c8 [200];
  
  fVar4 = ABS(param_2[7]);
  if (fVar4 <= 1.0) {
    if (fVar4 * 3.4028235e+38 <= ABS(param_3 * param_2[6])) {
      FUN_144b669d0(local_c8,"Bad chromaticities: white.y cannot be zero");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_c8,(ThrowInfo *)&DAT_14c6d5148);
    }
  }
  fVar4 = param_2[3];
  fVar5 = param_2[1];
  fVar12 = param_2[2];
  fVar1 = param_2[4];
  fVar2 = *param_2;
  fVar10 = (param_2[6] * param_3) / param_2[7];
  fVar3 = param_2[5];
  fVar7 = (fVar3 - fVar4) * fVar2 + (fVar4 - fVar5) * fVar1 + (fVar5 - fVar3) * fVar12;
  fVar8 = (((1.0 - param_2[6]) - param_2[7]) * param_3) / param_2[7] + fVar10;
  fVar11 = (fVar3 - 1.0) * param_3 + fVar8 * fVar3;
  fVar6 = (fVar4 - 1.0) * param_3 + fVar8 * fVar4;
  fVar9 = ((fVar3 - fVar4) * fVar10 - fVar11 * fVar12) + fVar6 * fVar1;
  fVar8 = (fVar5 - 1.0) * param_3 + fVar8 * fVar5;
  fVar12 = ((fVar4 - fVar5) * fVar10 - fVar6 * fVar2) + fVar8 * fVar12;
  fVar4 = (fVar11 * fVar2 + (fVar5 - fVar3) * fVar10) - fVar8 * fVar1;
  if (ABS(fVar7) < 1.0) {
    fVar5 = ABS(fVar7) * 3.4028235e+38;
    if (((fVar5 <= ABS(fVar9)) || (fVar5 <= ABS(fVar4))) || (fVar5 <= ABS(fVar12))) {
      FUN_144b669d0(local_c8,"Bad chromaticities: RGBtoXYZ matrix is degenerate");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_c8,(ThrowInfo *)&DAT_14c6d5148);
    }
  }
  param_1[0] = 1.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 1.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 1.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  fVar9 = fVar9 / fVar7;
  fVar4 = fVar4 / fVar7;
  fVar12 = fVar12 / fVar7;
  *param_1 = fVar9 * *param_2;
  param_1[1] = fVar9 * param_2[1];
  param_1[2] = ((1.0 - *param_2) - param_2[1]) * fVar9;
  param_1[4] = fVar4 * param_2[2];
  param_1[5] = fVar4 * param_2[3];
  param_1[6] = ((1.0 - param_2[2]) - param_2[3]) * fVar4;
  param_1[8] = fVar12 * param_2[4];
  param_1[9] = fVar12 * param_2[5];
  param_1[10] = ((1.0 - param_2[4]) - param_2[5]) * fVar12;
  return param_1;
}



// FUNCTION 144b66f30 FUN_144b66f30 body=8 status=ok
// SIG undefined FUN_144b66f30(void)

longlong FUN_144b66f30(longlong *param_1)

{
  return *param_1 + 0x1c;
}



// FUNCTION 144b66f40 FUN_144b66f40 body=52 status=ok
// SIG undefined FUN_144b66f40(void)

undefined8 FUN_144b66f40(undefined8 param_1,ulonglong param_2)

{
  FUN_144e48610();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144b66f80 FUN_144b66f80 body=274 status=ok
// SIG undefined FUN_144b66f80(void)

void FUN_144b66f80(longlong *param_1,int param_2,int param_3,undefined4 param_4,undefined8 param_5,
                  undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong lVar1;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  int local_b0;
  int local_ac;
  longlong *local_a8;
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = 0;
  param_1[1] = 0;
  local_a8 = param_1;
  lVar1 = FUN_14494321d(0x128);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  if ((0 < param_2) && (0 < param_3)) {
    FUN_144b6a1f0();
    local_b8 = 0;
    local_b0 = param_2 + -1;
    local_ac = param_3 + -1;
    local_c0 = param_8;
    local_c8 = param_7;
    local_d0 = param_6;
    local_d8 = param_5;
    FUN_144b6b0d0(param_1,&local_b8,&local_b8,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_f8);
  }
  FUN_144e40d70(local_98,"Invalid display window in image header.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 144b670b0 FUN_144b670b0 body=227 status=ok
// SIG undefined FUN_144b670b0(void)

longlong * FUN_144b670b0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = FUN_14494321d(0x128);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)(lVar4 + 0x10) = lVar4;
  *(undefined2 *)(lVar4 + 0x18) = 0x101;
  *param_1 = lVar4;
  *(char *)(param_1 + 2) = (char)param_2[2];
  plVar5 = *(longlong **)*param_2;
  if (plVar5 != (longlong *)*param_2) {
    do {
      FUN_144b674a0(param_1,plVar5 + 4,plVar5[0x24]);
      plVar2 = (longlong *)plVar5[2];
      if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x19);
        plVar5 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x19);
          plVar5 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar3 = (longlong *)plVar5[1];
        plVar2 = plVar5;
        while ((plVar5 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar3 = (longlong *)plVar5[1];
          plVar2 = plVar5;
        }
      }
    } while (plVar5 != (longlong *)*param_2);
  }
  FUN_144b6afb0(param_1,param_2);
  return param_1;
}



// FUNCTION 144b671a0 FUN_144b671a0 body=118 status=ok
// SIG undefined FUN_144b671a0(void)

longlong * FUN_144b671a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_14494321d(0x128);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  *param_1 = lVar1;
  *param_1 = *param_2;
  *param_2 = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = lVar1;
  *(char *)(param_1 + 2) = (char)param_2[2];
  FUN_144b6afb0(param_1,param_2);
  return param_1;
}



// FUNCTION 144b67220 FUN_144b67220 body=236 status=ok
// SIG undefined FUN_144b67220(void)

void FUN_144b67220(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)*param_1;
  if (plVar5 != (longlong *)*param_1) {
    do {
      puVar2 = (undefined8 *)plVar5[0x24];
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
    } while (plVar5 != (longlong *)*param_1);
  }
  FUN_144b6ac50(param_1);
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar5 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_144b6b680(param_1,param_1,plVar5[2]);
    plVar3 = (longlong *)*plVar5;
    thunk_FUN_1400020a8(plVar5,0x128);
    plVar5 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  thunk_FUN_1400020a8(*param_1,0x128);
  return;
}



// FUNCTION 144b67310 FUN_144b67310 body=395 status=ok
// SIG undefined FUN_144b67310(void)

longlong * FUN_144b67310(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_1 != param_2) {
    plVar5 = (longlong *)*param_1;
    plVar4 = (longlong *)*plVar5;
    if (plVar4 != plVar5) {
      do {
        puVar2 = (undefined8 *)plVar4[0x24];
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        plVar5 = (longlong *)plVar4[2];
        if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x19);
          plVar4 = plVar5;
          plVar5 = (longlong *)*plVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar5 + 0x19);
            plVar4 = plVar5;
            plVar5 = (longlong *)*plVar5;
          }
        }
        else {
          cVar1 = *(char *)(plVar4[1] + 0x19);
          plVar3 = (longlong *)plVar4[1];
          plVar5 = plVar4;
          while ((plVar4 = plVar3, cVar1 == '\0' && (plVar5 == (longlong *)plVar4[2]))) {
            cVar1 = *(char *)(plVar4[1] + 0x19);
            plVar3 = (longlong *)plVar4[1];
            plVar5 = plVar4;
          }
        }
        plVar5 = (longlong *)*param_1;
      } while (plVar4 != plVar5);
    }
    cVar1 = *(char *)(plVar5[1] + 0x19);
    plVar4 = (longlong *)plVar5[1];
    while (cVar1 == '\0') {
      FUN_144b6b680(param_1,param_1,plVar4[2]);
      plVar3 = (longlong *)*plVar4;
      thunk_FUN_1400020a8(plVar4,0x128);
      plVar4 = plVar3;
      cVar1 = *(char *)((longlong)plVar3 + 0x19);
    }
    plVar5[1] = (longlong)plVar5;
    *plVar5 = (longlong)plVar5;
    plVar5[2] = (longlong)plVar5;
    param_1[1] = 0;
    plVar5 = *(longlong **)*param_2;
    if (plVar5 != (longlong *)*param_2) {
      do {
        FUN_144b674a0(param_1,plVar5 + 4,plVar5[0x24]);
        plVar4 = (longlong *)plVar5[2];
        if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x19);
          plVar5 = plVar4;
          plVar4 = (longlong *)*plVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x19);
            plVar5 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar3 = (longlong *)plVar5[1];
          plVar4 = plVar5;
          while ((plVar5 = plVar3, cVar1 == '\0' && (plVar4 == (longlong *)plVar5[2]))) {
            cVar1 = *(char *)(plVar5[1] + 0x19);
            plVar3 = (longlong *)plVar5[1];
            plVar4 = plVar5;
          }
        }
      } while (plVar5 != (longlong *)*param_2);
    }
    FUN_144b6afb0(param_1,param_2);
    *(char *)(param_1 + 2) = (char)param_2[2];
  }
  return param_1;
}



// FUNCTION 144b674a0 FUN_144b674a0 body=800 status=ok
// SIG undefined FUN_144b674a0(void)

void FUN_144b674a0(longlong *param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 auStack_338 [32];
  undefined4 local_318;
  undefined8 *local_308 [2];
  char local_2f8 [16];
  undefined1 local_2e8 [239];
  undefined1 local_1f9;
  undefined1 local_1f8 [96];
  undefined1 local_198 [96];
  byte local_138 [255];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_338;
  if (*param_2 == '\0') {
    FUN_144e47110();
    FUN_1470a639e(local_2f8,1);
    FUN_141302cc4(local_2e8,"Image attribute name cannot be an empty string.");
    FUN_144e40dd0(local_1f8,local_2f8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_1f8,(ThrowInfo *)&DAT_14c6d50e0);
  }
  strncpy((char *)local_138,param_2,0xff);
  local_39 = 0;
  puVar12 = (undefined8 *)*param_1;
  cVar1 = *(char *)((longlong)puVar12[1] + 0x19);
  puVar13 = puVar12;
  puVar19 = (undefined8 *)puVar12[1];
  while (cVar1 == '\0') {
    pbVar7 = (byte *)(puVar19 + 4);
    lVar10 = -(longlong)pbVar7;
    do {
      bVar2 = *pbVar7;
      uVar17 = (uint)pbVar7[(longlong)(local_138 + lVar10)];
      if (bVar2 != uVar17) break;
      pbVar7 = pbVar7 + 1;
    } while (uVar17 != 0);
    if ((int)(bVar2 - uVar17) < 0) {
      puVar20 = (undefined8 *)puVar19[2];
      puVar19 = puVar13;
    }
    else {
      puVar20 = (undefined8 *)*puVar19;
    }
    puVar13 = puVar19;
    puVar19 = puVar20;
    cVar1 = *(char *)((longlong)puVar20 + 0x19);
  }
  if (*(char *)((longlong)puVar13 + 0x19) == '\0') {
    pbVar7 = local_138;
    lVar10 = 0x20 - (longlong)pbVar7;
    do {
      bVar2 = *pbVar7;
      uVar17 = (uint)pbVar7[(longlong)puVar13 + lVar10];
      if (bVar2 != uVar17) break;
      pbVar7 = pbVar7 + 1;
    } while (uVar17 != 0);
    if (-1 < (int)(bVar2 - uVar17)) {
      bVar5 = true;
      goto LAB_144b6757d;
    }
  }
  bVar5 = false;
LAB_144b6757d:
  if (!bVar5) {
    puVar13 = puVar12;
  }
  local_308[0] = puVar13;
  iVar6 = strcmp(param_2,"dwaCompressionLevel");
  if (iVar6 == 0) {
    lVar8 = (**(code **)(*param_3 + 8))(param_3);
    lVar10 = 0;
    do {
      lVar18 = lVar10 + 1;
      if (*(char *)(lVar8 + lVar10) != "float"[lVar10]) goto LAB_144b675ff;
      lVar10 = lVar18;
    } while (lVar18 != 6);
    local_318 = 1;
    uVar9 = __RTDynamicCast(param_3,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                            &Imf_3_2::TypedAttribute<float>::RTTI_Type_Descriptor);
    lVar10 = FUN_144b6aea0(param_1);
    puVar11 = (undefined4 *)FUN_144e5e610(uVar9);
    *(undefined4 *)(lVar10 + 4) = *puVar11;
  }
LAB_144b675ff:
  if (puVar13 == (undefined8 *)*param_1) {
    puVar12 = (undefined8 *)(**(code **)(*param_3 + 0x10))();
    local_308[0] = puVar12;
    strncpy(local_2f8,param_2,0xff);
    local_1f9 = 0;
    puVar13 = (undefined8 *)FUN_144b69f70(param_1,local_2f8);
    *puVar13 = puVar12;
  }
  else {
    plVar4 = (longlong *)puVar13[0x24];
    lVar10 = (**(code **)(*param_3 + 8))(param_3);
    pcVar14 = (char *)(**(code **)(*plVar4 + 8))(plVar4);
    lVar10 = lVar10 - (longlong)pcVar14;
    do {
      cVar1 = *pcVar14;
      cVar3 = pcVar14[lVar10];
      if (cVar1 != cVar3) break;
      pcVar14 = pcVar14 + 1;
    } while (cVar3 != '\0');
    if (cVar1 != cVar3) {
      FUN_144e47110();
      FUN_1470a639e(local_2f8,1);
      lVar10 = FUN_144b6a1e0(local_308);
      uVar9 = (**(code **)(**(longlong **)(lVar10 + 0x100) + 8))();
      uVar15 = (**(code **)(*param_3 + 8))(param_3);
      uVar16 = FUN_141302cc4(local_2e8,"Cannot assign a value of type \"");
      uVar15 = FUN_141302cc4(uVar16,uVar15);
      uVar15 = FUN_141302cc4(uVar15,"\" to image attribute \"");
      uVar15 = FUN_141302cc4(uVar15,param_2);
      uVar15 = FUN_141302cc4(uVar15,"\" of type \"");
      uVar9 = FUN_141302cc4(uVar15,uVar9);
      FUN_141302cc4(uVar9,&DAT_149971260);
      FUN_144e416d0(local_198,local_2f8);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_198,(ThrowInfo *)&DAT_14c6d5050);
    }
    uVar9 = (**(code **)(*param_3 + 0x10))(param_3);
    puVar12 = (undefined8 *)puVar13[0x24];
    if (puVar12 != (undefined8 *)0x0) {
      (**(code **)*puVar12)(puVar12,1);
    }
    puVar13[0x24] = uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_338);
}



// FUNCTION 144b677e0 FUN_144b677e0 body=346 status=ok
// SIG undefined FUN_144b677e0(void)

void FUN_144b677e0(longlong *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined1 auStack_298 [32];
  undefined1 local_278 [16];
  undefined1 local_268 [240];
  undefined1 local_178 [96];
  byte local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_298;
  strncpy((char *)local_118,param_2,0xff);
  local_19 = 0;
  puVar3 = (undefined8 *)*param_1;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar7 = puVar3;
  puVar6 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar9 = (byte *)(puVar6 + 4);
    lVar4 = -(longlong)pbVar9;
    do {
      bVar2 = *pbVar9;
      uVar10 = (uint)pbVar9[(longlong)(local_118 + lVar4)];
      if (bVar2 != uVar10) break;
      pbVar9 = pbVar9 + 1;
    } while (uVar10 != 0);
    if ((int)(bVar2 - uVar10) < 0) {
      puVar11 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar11 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar11;
    cVar1 = *(char *)((longlong)puVar11 + 0x19);
  }
  if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
    pbVar9 = local_118;
    lVar4 = 0x20 - (longlong)pbVar9;
    do {
      bVar2 = *pbVar9;
      uVar10 = (uint)pbVar9[(longlong)puVar7 + lVar4];
      if (bVar2 != uVar10) break;
      pbVar9 = pbVar9 + 1;
    } while (uVar10 != 0);
    if (-1 < (int)(bVar2 - uVar10)) {
      bVar5 = true;
      goto LAB_144b678b2;
    }
  }
  bVar5 = false;
LAB_144b678b2:
  if (!bVar5) {
    puVar7 = puVar3;
  }
  if (puVar7 != puVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_298);
  }
  FUN_144e47110();
  FUN_1470a639e(local_278,1);
  uVar8 = FUN_141302cc4(local_268,"Cannot find image attribute \"");
  uVar8 = FUN_141302cc4(uVar8,param_2);
  FUN_141302cc4(uVar8,&DAT_149971260);
  FUN_144e40dd0(local_178,local_278);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_178,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 144b67950 FUN_144b67950 body=346 status=ok
// SIG undefined FUN_144b67950(void)

void FUN_144b67950(longlong *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined1 auStack_298 [32];
  undefined1 local_278 [16];
  undefined1 local_268 [240];
  undefined1 local_178 [96];
  byte local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_298;
  strncpy((char *)local_118,param_2,0xff);
  local_19 = 0;
  puVar3 = (undefined8 *)*param_1;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar7 = puVar3;
  puVar6 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar9 = (byte *)(puVar6 + 4);
    lVar4 = -(longlong)pbVar9;
    do {
      bVar2 = *pbVar9;
      uVar10 = (uint)pbVar9[(longlong)(local_118 + lVar4)];
      if (bVar2 != uVar10) break;
      pbVar9 = pbVar9 + 1;
    } while (uVar10 != 0);
    if ((int)(bVar2 - uVar10) < 0) {
      puVar11 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar11 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar11;
    cVar1 = *(char *)((longlong)puVar11 + 0x19);
  }
  if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
    pbVar9 = local_118;
    lVar4 = 0x20 - (longlong)pbVar9;
    do {
      bVar2 = *pbVar9;
      uVar10 = (uint)pbVar9[(longlong)puVar7 + lVar4];
      if (bVar2 != uVar10) break;
      pbVar9 = pbVar9 + 1;
    } while (uVar10 != 0);
    if (-1 < (int)(bVar2 - uVar10)) {
      bVar5 = true;
      goto LAB_144b67a22;
    }
  }
  bVar5 = false;
LAB_144b67a22:
  if (!bVar5) {
    puVar7 = puVar3;
  }
  if (puVar7 != puVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_298);
  }
  FUN_144e47110();
  FUN_1470a639e(local_278,1);
  uVar8 = FUN_141302cc4(local_268,"Cannot find image attribute \"");
  uVar8 = FUN_141302cc4(uVar8,param_2);
  FUN_141302cc4(uVar8,&DAT_149971260);
  FUN_144e40dd0(local_178,local_278);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_178,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 144b67ac0 FUN_144b67ac0 body=13 status=ok
// SIG undefined FUN_144b67ac0(void)

undefined8 * FUN_144b67ac0(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)*param_1;
  return param_2;
}



// FUNCTION 144b67ad0 FUN_144b67ad0 body=10 status=ok
// SIG undefined FUN_144b67ad0(void)

undefined8 * FUN_144b67ad0(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  return param_2;
}



// FUNCTION 144b67ae0 FUN_144b67ae0 body=28 status=ok
// SIG undefined FUN_144b67ae0(void)

void FUN_144b67ae0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144b67950(param_1,"displayWindow");
  FUN_144e47ce0(uVar1);
  return;
}



// FUNCTION 144b67b00 FUN_144b67b00 body=28 status=ok
// SIG undefined FUN_144b67b00(void)

void FUN_144b67b00(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144b677e0(param_1,"dataWindow");
  FUN_144e47cd0(uVar1);
  return;
}



// FUNCTION 144b67b20 FUN_144b67b20 body=28 status=ok
// SIG undefined FUN_144b67b20(void)

void FUN_144b67b20(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144b67950(param_1,"dataWindow");
  FUN_144e47ce0(uVar1);
  return;
}



// FUNCTION 144b67b40 FUN_144b67b40 body=28 status=ok
// SIG undefined FUN_144b67b40(void)

void FUN_144b67b40(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144b67950(param_1,"pixelAspectRatio");
  FUN_144e5e610(uVar1);
  return;
}



// FUNCTION 144b67b60 FUN_144b67b60 body=28 status=ok
// SIG undefined FUN_144b67b60(void)

void FUN_144b67b60(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144b677e0(param_1,"channels");
  FUN_144e48640(uVar1);
  return;
}



// FUNCTION 144b67b80 FUN_144b67b80 body=28 status=ok
// SIG undefined FUN_144b67b80(void)

void FUN_144b67b80(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144b67950(param_1,"channels");
  FUN_144e48650(uVar1);
  return;
}



// FUNCTION 144b67ba0 FUN_144b67ba0 body=28 status=ok
// SIG undefined FUN_144b67ba0(void)

void FUN_144b67ba0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144b677e0(param_1,"lineOrder");
  FUN_144e5fb00(uVar1);
  return;
}



// FUNCTION 144b67bc0 FUN_144b67bc0 body=28 status=ok
// SIG undefined FUN_144b67bc0(void)

void FUN_144b67bc0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144b67950(param_1,"lineOrder");
  FUN_144e5fb10(uVar1);
  return;
}



// FUNCTION 144b67be0 FUN_144b67be0 body=28 status=ok
// SIG undefined FUN_144b67be0(void)

void FUN_144b67be0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144b677e0(param_1,"compression");
  FUN_144e494e0(uVar1);
  return;
}



// FUNCTION 144b67c00 FUN_144b67c00 body=28 status=ok
// SIG undefined FUN_144b67c00(void)

void FUN_144b67c00(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144b67950(param_1,"compression");
  FUN_144e494f0(uVar1);
  return;
}



// FUNCTION 144b67c20 FUN_144b67c20 body=24 status=ok
// SIG undefined FUN_144b67c20(void)

undefined4 FUN_144b67c20(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined1 local_res10 [24];
  
  puVar1 = (undefined4 *)FUN_144b6ade0(local_res10,param_1);
  return *puVar1;
}



// FUNCTION 144b67c40 FUN_144b67c40 body=27 status=ok
// SIG undefined FUN_144b67c40(void)

undefined4 FUN_144b67c40(undefined8 param_1)

{
  longlong lVar1;
  undefined1 local_res10 [24];
  
  lVar1 = FUN_144b6ade0(local_res10,param_1);
  return *(undefined4 *)(lVar1 + 4);
}



// FUNCTION 144b67c60 FUN_144b67c60 body=132 status=ok
// SIG undefined FUN_144b67c60(void)

void FUN_144b67c60(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_144b677e0(param_1,&DAT_149971528);
  local_88 = 0;
  lVar2 = __RTDynamicCast(uVar1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::
                           TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                           ::RTTI_Type_Descriptor);
  if (lVar2 != 0) {
    FUN_144e63480(lVar2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144b67cf0 FUN_144b67cf0 body=27 status=ok
// SIG undefined FUN_144b67cf0(void)

bool FUN_144b67cf0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144b6b340(param_1,&DAT_149971528);
  return lVar1 != 0;
}



// FUNCTION 144b67d10 FUN_144b67d10 body=461 status=ok
// SIG undefined FUN_144b67d10(void)

void FUN_144b67d10(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8 [2];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [40];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  cVar1 = FUN_144e61fb0(param_2);
  if (cVar1 != '\0') {
    uVar2 = FUN_144e633c0(local_1a0);
    FUN_144b674a0(param_1,&DAT_149971580,uVar2);
    FUN_144e63400(local_1a0);
    cVar1 = FUN_144e61f10(param_2);
    if (cVar1 != '\0') {
      lVar3 = FUN_1498c6680(param_1,"version");
      if (lVar3 == 0) {
        local_1c8[0] = 1;
        uVar2 = FUN_144b65600(local_1c0,local_1c8);
        FUN_144b674a0(param_1,"version",uVar2);
        FUN_144b65640(local_1c0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1e8);
  }
  uVar2 = FUN_14895e1c3(local_1c0,param_2,"is not a supported image type.");
  uVar2 = FUN_144b6b440(local_178,uVar2,"The following are supported: ");
  uVar2 = FUN_144b6b4b0(local_158,uVar2,&DAT_14c6d9508);
  uVar2 = FUN_144b6b440(local_138,uVar2,&DAT_14997153c);
  uVar2 = FUN_144b6b4b0(local_118,uVar2,&DAT_14c6d9528);
  uVar2 = FUN_144b6b440(local_f8,uVar2,&DAT_14997153c);
  uVar2 = FUN_144b6b4b0(local_d8,uVar2,&DAT_14c6d9548);
  uVar2 = FUN_144b6b440(local_b8,uVar2,&DAT_149971534);
  uVar2 = FUN_144b6b4b0(local_98,uVar2,s_deeptile_14c6d9568);
  uVar2 = FUN_144b6b440(local_1a0,uVar2,&DAT_149971530);
  FUN_144e40da0(local_78,uVar2);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 144b67ef0 FUN_144b67ef0 body=132 status=ok
// SIG undefined FUN_144b67ef0(void)

void FUN_144b67ef0(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_144b677e0(param_1,&DAT_149971580);
  local_88 = 0;
  lVar2 = __RTDynamicCast(uVar1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::
                           TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                           ::RTTI_Type_Descriptor);
  if (lVar2 != 0) {
    FUN_144e63480(lVar2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144b67f80 FUN_144b67f80 body=132 status=ok
// SIG undefined FUN_144b67f80(void)

void FUN_144b67f80(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_144b67950(param_1,&DAT_149971580);
  local_88 = 0;
  lVar2 = __RTDynamicCast(uVar1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::
                           TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                           ::RTTI_Type_Descriptor);
  if (lVar2 != 0) {
    FUN_144e63490(lVar2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144b68010 FUN_144b68010 body=27 status=ok
// SIG undefined FUN_144b68010(void)

bool FUN_144b68010(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144b6b340(param_1,&DAT_149971580);
  return lVar1 != 0;
}



// FUNCTION 144b68030 FUN_144b68030 body=132 status=ok
// SIG undefined FUN_144b68030(void)

void FUN_144b68030(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_144b67950(param_1,"version");
  local_88 = 0;
  lVar2 = __RTDynamicCast(uVar1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<int>::RTTI_Type_Descriptor);
  if (lVar2 != 0) {
    FUN_144b65650(lVar2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144b680c0 FUN_144b680c0 body=27 status=ok
// SIG undefined FUN_144b680c0(void)

bool FUN_144b680c0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1498c6680(param_1,"chunkCount");
  return lVar1 != 0;
}



// FUNCTION 144b680e0 FUN_144b680e0 body=132 status=ok
// SIG undefined FUN_144b680e0(void)

void FUN_144b680e0(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_144b67950(param_1,"chunkCount");
  local_88 = 0;
  lVar2 = __RTDynamicCast(uVar1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<int>::RTTI_Type_Descriptor);
  if (lVar2 != 0) {
    FUN_144b65650(lVar2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144b68170 FUN_144b68170 body=132 status=ok
// SIG undefined FUN_144b68170(void)

void FUN_144b68170(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_144b677e0(param_1,"tiles");
  local_88 = 0;
  lVar2 = __RTDynamicCast(uVar1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::TileDescription>::RTTI_Type_Descriptor);
  if (lVar2 != 0) {
    FUN_144e64300(lVar2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144b68200 FUN_144b68200 body=132 status=ok
// SIG undefined FUN_144b68200(void)

void FUN_144b68200(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_144b67950(param_1,"tiles");
  local_88 = 0;
  lVar2 = __RTDynamicCast(uVar1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::TileDescription>::RTTI_Type_Descriptor);
  if (lVar2 != 0) {
    FUN_144e64310(lVar2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144b68290 FUN_144b68290 body=251 status=ok
// SIG undefined FUN_144b68290(void)

void FUN_144b68290(longlong *param_1)

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
  strncpy((char *)local_118,"tiles",0xff);
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
                      &Imf_3_2::TypedAttribute<Imf_3_2::TileDescription>::RTTI_Type_Descriptor);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_148);
}



// FUNCTION 144b683a0 FUN_144b683a0 body=4283 status=ok
// SIG undefined FUN_144b683a0(void)

void FUN_144b683a0(longlong *param_1,char param_2,char param_3)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char cVar9;
  char cVar10;
  short sVar11;
  int iVar12;
  undefined8 uVar13;
  int *piVar14;
  longlong lVar15;
  int *piVar16;
  float *pfVar17;
  longlong *plVar18;
  uint *puVar19;
  byte *pbVar20;
  undefined4 *puVar21;
  longlong *plVar22;
  basic_ostream<char,std::char_traits<char>_> *pbVar23;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar24;
  undefined8 uVar25;
  uint uVar26;
  undefined8 ****ppppuVar27;
  ulonglong uVar28;
  uint uVar29;
  longlong lVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined1 auStack_348 [32];
  undefined4 local_328;
  uint local_318;
  undefined4 uStack_314;
  undefined1 local_310 [8];
  undefined1 local_308 [16];
  undefined1 local_2f8 [240];
  undefined1 local_208 [96];
  undefined8 ***local_1a8 [2];
  longlong local_198;
  ulonglong local_190;
  longlong local_188 [4];
  undefined1 local_168;
  undefined7 uStack_167;
  undefined8 local_158;
  ulonglong uStack_150;
  byte local_148 [255];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_318 = 0;
  uVar13 = FUN_144b67950(param_1,"displayWindow");
  piVar14 = (int *)FUN_144e47ce0(uVar13);
  if (piVar14[2] < *piVar14) {
LAB_144b68c37:
    FUN_144e40d70(local_208,"Invalid display window in image header.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
  }
  if ((((piVar14[3] < piVar14[1]) || (*piVar14 < -0x3ffffffe)) || (piVar14[1] < -0x3ffffffe)) ||
     ((0x3ffffffe < piVar14[2] || (0x3ffffffe < piVar14[3])))) goto LAB_144b68c37;
  uVar13 = FUN_144b67950(param_1,"dataWindow");
  piVar14 = (int *)FUN_144e47ce0(uVar13);
  iVar12 = *piVar14;
  iVar3 = piVar14[2];
  if (iVar3 < iVar12) {
LAB_144b68bf5:
    FUN_144e40d70(local_208,"Invalid data window in image header.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
  }
  iVar4 = piVar14[1];
  iVar5 = piVar14[3];
  if (((iVar5 < iVar4) || (iVar12 < -0x3ffffffe)) ||
     ((iVar4 < -0x3ffffffe || ((0x3ffffffe < iVar3 || (0x3ffffffe < iVar5)))))) goto LAB_144b68bf5;
  if ((0 < DAT_14c77eef0) && (DAT_14c77eef0 < (iVar3 - iVar12) + 1)) {
    FUN_144e47110();
    FUN_1470a639e(local_308,1);
    pbVar23 = (basic_ostream<char,std::char_traits<char>_> *)
              FUN_141302cc4(local_2f8,"The width of the data window exceeds the maximum width of ");
    pbVar24 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar23,DAT_14c77eef0);
    FUN_141302cc4(pbVar24,"pixels.");
    FUN_144e40dd0(local_208,local_308);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
  }
  if (0 < DAT_14c77eef4) {
    if (DAT_14c77eef4 < (iVar5 - iVar4) + 1) {
      FUN_144e47110();
      FUN_1470a639e(local_308,1);
      pbVar23 = (basic_ostream<char,std::char_traits<char>_> *)
                FUN_141302cc4(local_2f8,
                              "The height of the data window exceeds the maximum height of ");
      pbVar24 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar23,DAT_14c77eef4);
      FUN_141302cc4(pbVar24,"pixels.");
      FUN_144e40dd0(local_208,local_308);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
    }
    if ((0 < DAT_14c77eef0) && (lVar15 = FUN_1498c6680(param_1,"chunkCount"), lVar15 != 0)) {
      uVar13 = FUN_144b67950(param_1,"chunkCount");
      local_328 = 0;
      lVar15 = __RTDynamicCast(uVar13,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                               &Imf_3_2::TypedAttribute<int>::RTTI_Type_Descriptor);
      if (lVar15 == 0) {
        FUN_144e416a0(local_208,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d5050);
      }
      piVar16 = (int *)FUN_144b65650(lVar15);
      if ((ulonglong)((longlong)DAT_14c77eef4 * (longlong)DAT_14c77eef0) <
          (ulonglong)(longlong)*piVar16) {
        FUN_144e47110();
        FUN_1470a639e(local_308,1);
        lVar30 = (longlong)DAT_14c77eef4;
        lVar15 = (longlong)DAT_14c77eef0;
        pbVar23 = (basic_ostream<char,std::char_traits<char>_> *)
                  FUN_141302cc4(local_2f8,"chunkCount exceeds maximum area of ");
        pbVar24 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            (pbVar23,lVar30 * lVar15);
        FUN_141302cc4(pbVar24," pixels.");
        FUN_144e40dd0(local_208,local_308);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
      }
    }
  }
  uVar13 = FUN_144b67950(param_1,"pixelAspectRatio");
  pfVar17 = (float *)FUN_144e5e610(uVar13);
  fVar1 = *pfVar17;
  sVar11 = _fdclass();
  if (((sVar11 != -1) || (fVar1 < 1e-06)) || (1e+06 < fVar1)) {
    FUN_144e40d70(local_208,"Invalid pixel aspect ratio in image header.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
  }
  uVar13 = FUN_144b67950(param_1,"screenWindowWidth");
  pfVar17 = (float *)FUN_144e5e610(uVar13);
  if (*pfVar17 <= 0.0 && *pfVar17 != 0.0) {
    FUN_144e40d70(local_208,"Invalid screen window width in image header.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
  }
  if (param_3 != '\0') {
    lVar15 = FUN_144b6b340(param_1,&DAT_149971528);
    if (lVar15 == 0) {
      FUN_144e40d70(local_208,"Headers in a multipart file should have name attribute.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
    }
    lVar15 = FUN_144b6b340(param_1,&DAT_149971580);
    if (lVar15 == 0) {
      FUN_144e40d70(local_208,"Headers in a multipart file should have type attribute.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
    }
  }
  lVar15 = FUN_144b6b340(param_1,&DAT_149971580);
  if (lVar15 == 0) {
    local_188[1] = 0;
    local_188[2] = 0;
    local_188[3] = 0xf;
    local_188[0] = 0;
    plVar18 = local_188;
    uVar29 = 2;
  }
  else {
    uVar13 = FUN_144b67950(param_1,&DAT_149971580);
    local_328 = 0;
    lVar15 = __RTDynamicCast(uVar13,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                             &Imf_3_2::
                              TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                              ::RTTI_Type_Descriptor);
    if (lVar15 == 0) {
      FUN_144e416a0(local_208,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d5050);
    }
    uVar13 = FUN_144e63490(lVar15);
    plVar18 = (longlong *)FUN_144b65a50(&local_168,uVar13);
    uVar29 = 1;
  }
  local_318 = uVar29;
  FUN_144b65a50(local_1a8,plVar18);
  if (((uVar29 & 2) != 0) && (uVar29 = uVar29 & 0xfffffffd, 0xf < (ulonglong)local_188[3])) {
    uVar28 = local_188[3] + 1;
    lVar15 = local_188[0];
    if (0xfff < uVar28) {
      uVar28 = local_188[3] + 0x28;
      lVar15 = *(longlong *)(local_188[0] + -8);
      if (0x1f < (local_188[0] - lVar15) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar15,uVar28);
  }
  if ((uVar29 & 1) != 0) {
    if (0xf < uStack_150) {
      uVar28 = uStack_150 + 1;
      lVar30 = CONCAT71(uStack_167,local_168);
      lVar15 = lVar30;
      if (0xfff < uVar28) {
        uVar28 = uStack_150 + 0x28;
        lVar15 = *(longlong *)(lVar30 + -8);
        if (0x1f < (lVar30 - lVar15) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar15,uVar28);
    }
    local_158 = 0;
    uStack_150 = 0xf;
    local_168 = 0;
  }
  ppppuVar27 = local_1a8;
  if (0xf < local_190) {
    ppppuVar27 = (undefined8 ****)local_1a8[0];
  }
  if (((local_198 == 0) && (iVar12 = memcmp(ppppuVar27,&DAT_14996de1b,0), iVar12 == 0)) ||
     (cVar9 = FUN_144e61fb0(local_1a8), cVar9 != '\0')) {
    cVar9 = FUN_144e61f10(local_1a8);
    uVar13 = FUN_144b67950(param_1,"lineOrder");
    puVar19 = (uint *)FUN_144e5fb10(uVar13);
    uVar29 = *puVar19;
    if (param_2 == '\0') {
      if ((uVar29 != 0) && (uVar29 != 1)) {
        FUN_144e40d70(local_208,"Invalid line order in image header.");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
      }
    }
    else {
      strncpy((char *)local_148,"tiles",0xff);
      local_49 = 0;
      puVar7 = (undefined8 *)*param_1;
      cVar10 = *(char *)((longlong)puVar7[1] + 0x19);
      puVar8 = puVar7;
      puVar32 = (undefined8 *)puVar7[1];
      while (cVar10 == '\0') {
        pbVar20 = (byte *)(puVar32 + 4);
        lVar15 = -(longlong)pbVar20;
        do {
          bVar2 = *pbVar20;
          uVar26 = (uint)pbVar20[(longlong)(local_148 + lVar15)];
          if (bVar2 != uVar26) break;
          pbVar20 = pbVar20 + 1;
        } while (uVar26 != 0);
        if ((int)(bVar2 - uVar26) < 0) {
          puVar31 = (undefined8 *)puVar32[2];
          puVar32 = puVar8;
        }
        else {
          puVar31 = (undefined8 *)*puVar32;
        }
        puVar8 = puVar32;
        puVar32 = puVar31;
        cVar10 = *(char *)((longlong)puVar31 + 0x19);
      }
      if (*(char *)((longlong)puVar8 + 0x19) != '\0') {
LAB_144b68fc1:
        FUN_144e40d70(local_208,"Tiled image has no tile description attribute.");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
      }
      pbVar20 = local_148;
      lVar15 = 0x20 - (longlong)pbVar20;
      do {
        bVar2 = *pbVar20;
        uVar26 = (uint)pbVar20[(longlong)puVar8 + lVar15];
        if (bVar2 != uVar26) break;
        pbVar20 = pbVar20 + 1;
      } while (uVar26 != 0);
      if (((int)(bVar2 - uVar26) < 0) || (puVar8 == puVar7)) goto LAB_144b68fc1;
      local_328 = 0;
      lVar15 = __RTDynamicCast(puVar8[0x24],0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                               &Imf_3_2::TypedAttribute<Imf_3_2::TileDescription>::
                                RTTI_Type_Descriptor);
      if (lVar15 == 0) goto LAB_144b68fc1;
      uVar13 = FUN_144b67950(param_1,"tiles");
      local_328 = 0;
      lVar15 = __RTDynamicCast(uVar13,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                               &Imf_3_2::TypedAttribute<Imf_3_2::TileDescription>::
                                RTTI_Type_Descriptor);
      if (lVar15 == 0) {
        FUN_144e416a0(local_208,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d5050);
      }
      puVar19 = (uint *)FUN_144e64310(lVar15);
      uVar26 = *puVar19;
      if ((((uVar26 == 0) || (uVar6 = puVar19[1], uVar6 == 0)) || (0x7fffffff < uVar26)) ||
         (0x7fffffff < uVar6)) {
        FUN_144e40d70(local_208,"Invalid tile size in image header.");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
      }
      if ((0 < DAT_14c77eef8) && (DAT_14c77eef8 < (int)uVar26)) {
        FUN_144e47110();
        FUN_1470a639e(local_308,1);
        pbVar23 = (basic_ostream<char,std::char_traits<char>_> *)
                  FUN_141302cc4(local_2f8,"The width of the tiles exceeds the maximum width of ");
        pbVar24 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            (pbVar23,DAT_14c77eef8);
        FUN_141302cc4(pbVar24,"pixels.");
        FUN_144e40dd0(local_208,local_308);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
      }
      if ((0 < DAT_14c77eefc) && (DAT_14c77eefc < (int)uVar6)) {
        FUN_144e47110();
        FUN_1470a639e(local_308,1);
        pbVar23 = (basic_ostream<char,std::char_traits<char>_> *)
                  FUN_141302cc4(local_2f8,"The width of the tiles exceeds the maximum width of ");
        pbVar24 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            (pbVar23,DAT_14c77eefc);
        FUN_141302cc4(pbVar24,"pixels.");
        FUN_144e40dd0(local_208,local_308);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
      }
      if ((1 < puVar19[2]) && (puVar19[2] != 2)) {
        FUN_144e40d70(local_208,"Invalid level mode in image header.");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
      }
      if ((puVar19[3] != 1) && (puVar19[3] != 0)) {
        FUN_144e40d70(local_208,"Invalid level rounding mode in image header.");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
      }
      if ((1 < uVar29) && (uVar29 != 2)) {
        FUN_144e40d70(local_208,"Invalid line order in image header.");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
      }
      FUN_144e66660(param_1);
    }
    uVar13 = FUN_144b67950(param_1,"compression");
    puVar21 = (undefined4 *)FUN_144e494f0(uVar13);
    cVar10 = FUN_144e49860(*puVar21);
    if (cVar10 == '\0') {
      FUN_144e40d70(local_208,"Unknown compression type in image header.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
    }
    if (cVar9 != '\0') {
      uVar13 = FUN_144b67950(param_1,"compression");
      puVar21 = (undefined4 *)FUN_144e494f0(uVar13);
      cVar10 = FUN_144e498b0(*puVar21);
      if (cVar10 == '\0') {
        FUN_144e40d70(local_208,"Compression type in header not valid for deep data");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
      }
    }
    uVar13 = FUN_144b67950(param_1,"channels");
    uVar13 = FUN_144e48650(uVar13);
    plVar18 = (longlong *)FUN_144b65f40(uVar13,local_310);
    plVar22 = (longlong *)FUN_144b65f20(uVar13,&local_318);
    if (*plVar22 == *plVar18) {
      FUN_144e47110();
      FUN_1470a639e(local_308,1);
      FUN_141302cc4(local_2f8,"Missing or empty channel list in header");
      FUN_144e40dd0(local_208,local_308);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
    }
    if ((param_2 == '\0') && (cVar9 == '\0')) {
      FUN_144b65f20(uVar13,&local_318);
      while( true ) {
        plVar18 = (longlong *)FUN_144b65f40(uVar13,local_310);
        lVar15 = CONCAT44(uStack_314,local_318);
        if (lVar15 == *plVar18) break;
        if ((1 < *(uint *)(lVar15 + 0x11c)) && (*(uint *)(lVar15 + 0x11c) != 2)) {
          FUN_144e47110();
          FUN_1470a639e(local_308,1);
          uVar13 = FUN_144b66f30(&local_318);
          uVar25 = FUN_141302cc4(local_2f8,"Pixel type of \"");
          uVar13 = FUN_141302cc4(uVar25,uVar13);
          FUN_141302cc4(uVar13,"\" image channel is invalid.");
          FUN_144e40dd0(local_208,local_308);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
        }
        iVar12 = *(int *)(lVar15 + 0x120);
        if (iVar12 < 1) {
          FUN_144e47110();
          FUN_1470a639e(local_308,1);
          uVar13 = FUN_144b66f30(&local_318);
          uVar25 = FUN_141302cc4(local_2f8,"The x subsampling factor for the \"");
          uVar13 = FUN_141302cc4(uVar25,uVar13);
          FUN_141302cc4(uVar13,"\" channel is invalid.");
          FUN_144e40dd0(local_208,local_308);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
        }
        iVar3 = *(int *)(lVar15 + 0x124);
        if (iVar3 < 1) {
          FUN_144e47110();
          FUN_1470a639e(local_308,1);
          uVar13 = FUN_144b66f30(&local_318);
          uVar25 = FUN_141302cc4(local_2f8,"The y subsampling factor for the \"");
          uVar13 = FUN_141302cc4(uVar25,uVar13);
          FUN_141302cc4(uVar13,"\" channel is invalid.");
          FUN_144e40dd0(local_208,local_308);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
        }
        if (*piVar14 % iVar12 != 0) {
          FUN_144e47110();
          FUN_1470a639e(local_308,1);
          uVar13 = FUN_144b66f30(&local_318);
          uVar25 = FUN_141302cc4(local_2f8,
                                 "The minimum x coordinate of the image\'s data window is not a multiple of the x subsampling factor of the \""
                                );
          uVar13 = FUN_141302cc4(uVar25,uVar13);
          FUN_141302cc4(uVar13,"\" channel.");
          FUN_144e40dd0(local_208,local_308);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
        }
        if (piVar14[1] % iVar3 != 0) {
          FUN_144e47110();
          FUN_1470a639e(local_308,1);
          uVar13 = FUN_144b66f30(&local_318);
          uVar25 = FUN_141302cc4(local_2f8,
                                 "The minimum y coordinate of the image\'s data window is not a multiple of the y subsampling factor of the \""
                                );
          uVar13 = FUN_141302cc4(uVar25,uVar13);
          FUN_141302cc4(uVar13,"\" channel.");
          FUN_144e40dd0(local_208,local_308);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
        }
        if (((piVar14[2] - *piVar14) + 1) % iVar12 != 0) {
          FUN_144e47110();
          FUN_1470a639e(local_308,1);
          uVar13 = FUN_144b66f30(&local_318);
          uVar25 = FUN_141302cc4(local_2f8,
                                 "Number of pixels per row in the image\'s data window is not a multiple of the x subsampling factor of the \""
                                );
          uVar13 = FUN_141302cc4(uVar25,uVar13);
          FUN_141302cc4(uVar13,"\" channel.");
          FUN_144e40dd0(local_208,local_308);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
        }
        if (((piVar14[3] - piVar14[1]) + 1) % iVar3 != 0) {
          FUN_144e47110();
          FUN_1470a639e(local_308,1);
          uVar13 = FUN_144b66f30(&local_318);
          uVar25 = FUN_141302cc4(local_2f8,
                                 "Number of pixels per column in the image\'s data window is not a multiple of the y subsampling factor of the \""
                                );
          uVar13 = FUN_141302cc4(uVar25,uVar13);
          FUN_141302cc4(uVar13,"\" channel.");
          FUN_144e40dd0(local_208,local_308);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
        }
        FUN_144b663b0(&local_318);
      }
    }
    else {
      FUN_144b65f20(uVar13,&local_318);
      while( true ) {
        plVar18 = (longlong *)FUN_144b65f40(uVar13,local_310);
        lVar15 = CONCAT44(uStack_314,local_318);
        if (lVar15 == *plVar18) break;
        if ((1 < *(uint *)(lVar15 + 0x11c)) && (*(uint *)(lVar15 + 0x11c) != 2)) {
          FUN_144e47110();
          FUN_1470a639e(local_308,1);
          uVar13 = FUN_144b66f30(&local_318);
          uVar25 = FUN_141302cc4(local_2f8,"Pixel type of \"");
          uVar13 = FUN_141302cc4(uVar25,uVar13);
          FUN_141302cc4(uVar13,"\" image channel is invalid.");
          FUN_144e40dd0(local_208,local_308);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
        }
        if (*(int *)(lVar15 + 0x120) != 1) {
          FUN_144e47110();
          FUN_1470a639e(local_308,1);
          uVar13 = FUN_144b66f30(&local_318);
          uVar25 = FUN_141302cc4(local_2f8,"The x subsampling factor for the \"");
          uVar13 = FUN_141302cc4(uVar25,uVar13);
          FUN_141302cc4(uVar13,"\" channel is not 1.");
          FUN_144e40dd0(local_208,local_308);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
        }
        if (*(int *)(lVar15 + 0x124) != 1) {
          FUN_144e47110();
          FUN_1470a639e(local_308,1);
          uVar13 = FUN_144b66f30(&local_318);
          uVar25 = FUN_141302cc4(local_2f8,"The y subsampling factor for the \"");
          uVar13 = FUN_141302cc4(uVar25,uVar13);
          FUN_141302cc4(uVar13,"\" channel is not 1.");
          FUN_144e40dd0(local_208,local_308);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_208,(ThrowInfo *)&DAT_14c6d50e0);
        }
        FUN_144b663b0(&local_318);
      }
    }
    if (local_190 < 0x10) goto LAB_144b687de;
    uVar28 = local_190 + 1;
    ppppuVar27 = (undefined8 ****)local_1a8[0];
    if (0xfff < uVar28) {
      uVar28 = local_190 + 0x28;
      ppppuVar27 = (undefined8 ****)local_1a8[0][-1];
      if (0x1f < (ulonglong)((longlong)local_1a8[0] + (-8 - (longlong)ppppuVar27))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  else {
    if (local_190 < 0x10) goto LAB_144b687de;
    uVar28 = local_190 + 1;
    ppppuVar27 = (undefined8 ****)local_1a8[0];
    if (0xfff < uVar28) {
      uVar28 = local_190 + 0x28;
      ppppuVar27 = (undefined8 ****)local_1a8[0][-1];
      if (0x1f < (ulonglong)((longlong)local_1a8[0] + (-8 - (longlong)local_1a8[0][-1]))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  thunk_FUN_1400020a8(ppppuVar27,uVar28);
LAB_144b687de:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_348);
}



// FUNCTION 144b694b0 FUN_144b694b0 body=5 status=ok
// SIG undefined FUN_144b694b0(void)

undefined1 FUN_144b694b0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



// FUNCTION 144b694c0 FUN_144b694c0 body=536 status=ok
// SIG undefined FUN_144b694c0(void)

void FUN_144b694c0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  char *pcVar7;
  bool bVar8;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined1 local_187;
  undefined1 local_186;
  undefined1 local_185;
  longlong local_180;
  undefined1 local_178;
  undefined7 uStack_177;
  ulonglong local_168;
  ulonglong local_160;
  undefined1 local_158 [272];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar3 = FUN_144b6b520(param_1,"preview");
  local_180 = *(longlong *)*param_1;
  bVar8 = (longlong *)local_180 == (longlong *)*param_1;
  do {
    lVar4 = local_180;
    if (bVar8) {
      (**(code **)(*param_2 + 8))(param_2,&DAT_14996de1b,1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1a8);
    }
    pcVar7 = (char *)(local_180 + 0x20);
    cVar1 = *pcVar7;
    while (cVar1 != '\0') {
      (**(code **)(*param_2 + 8))(param_2,pcVar7,1);
      pcVar7 = pcVar7 + 1;
      cVar1 = *pcVar7;
    }
    (**(code **)(*param_2 + 8))(param_2,pcVar7,1);
    pcVar7 = (char *)(**(code **)(**(longlong **)(lVar4 + 0x120) + 8))();
    cVar1 = *pcVar7;
    while (cVar1 != '\0') {
      (**(code **)(*param_2 + 8))(param_2,pcVar7,1);
      pcVar7 = pcVar7 + 1;
      cVar1 = *pcVar7;
    }
    (**(code **)(*param_2 + 8))(param_2,pcVar7,1);
    FUN_144e62d10(local_158);
    (**(code **)(**(longlong **)(lVar4 + 0x120) + 0x18))(*(longlong **)(lVar4 + 0x120),local_158,2);
    FUN_144e62ee0(local_158,&local_178);
    local_188 = (undefined1)local_168;
    local_187 = (undefined1)(local_168 >> 8);
    local_186 = (undefined1)(local_168 >> 0x10);
    local_185 = (undefined1)(local_168 >> 0x18);
    (**(code **)(*param_2 + 8))(param_2,&local_188,4);
    if (*(longlong *)(lVar4 + 0x120) == lVar3) {
      (**(code **)(*param_2 + 0x10))(param_2);
    }
    puVar5 = &local_178;
    if (0xf < local_160) {
      puVar5 = (undefined1 *)CONCAT71(uStack_177,local_178);
    }
    (**(code **)(*param_2 + 8))(param_2,puVar5,local_168 & 0xffffffff);
    if (0xf < local_160) {
      uVar6 = local_160 + 1;
      lVar2 = CONCAT71(uStack_177,local_178);
      lVar4 = lVar2;
      if (0xfff < uVar6) {
        uVar6 = local_160 + 0x28;
        lVar4 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar4,uVar6);
    }
    local_168 = 0;
    local_160 = 0xf;
    local_178 = 0;
    FUN_144e62de0(local_158);
    FUN_144b6a170(&local_180);
    bVar8 = local_180 == *param_1;
  } while( true );
}



// FUNCTION 144b69700 FUN_144b69700 body=1513 status=ok
// SIG undefined FUN_144b69700(void)

void FUN_144b69700(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  byte *pbVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  basic_ostream<char,std::char_traits<char>_> *pbVar15;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar16;
  uint uVar17;
  longlong *plVar18;
  char *pcVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  bool bVar26;
  undefined1 auStack_738 [32];
  int local_718 [2];
  longlong *local_710;
  undefined8 *local_708;
  uint uStack_700;
  longlong *local_6e8;
  undefined8 local_6e0;
  longlong local_6d8;
  undefined1 local_6c8 [16];
  undefined1 local_6b8 [240];
  undefined1 local_5c8 [96];
  undefined1 local_568 [96];
  undefined1 local_508 [96];
  undefined1 local_4a8 [96];
  byte local_448 [255];
  undefined1 local_349;
  byte local_348 [255];
  undefined1 local_249;
  char local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_738;
  uVar25 = 0;
  uVar24 = uVar25;
LAB_144b69740:
  do {
    pcVar19 = local_248 + 0x100;
    iVar20 = 0xff;
    do {
      (**(code **)(*param_2 + 0x10))(param_2,pcVar19,1);
      if (*pcVar19 == '\0') break;
      pcVar19 = pcVar19 + 1;
      iVar20 = iVar20 + -1;
    } while (-1 < iVar20);
    if (local_248[0x100] == '\0') {
      *(bool *)(param_1 + 2) = (int)uVar24 == 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_738);
    }
    uVar24 = (ulonglong)((int)uVar24 + 1);
    uVar13 = uVar25;
    while( true ) {
      if (0xff < uVar13) {
        FUN_1470a639e(local_6c8,1);
        uVar14 = FUN_141302cc4(local_6b8,"Invalid ");
        uVar14 = FUN_141302cc4(uVar14,"attribute name");
        pbVar15 = (basic_ostream<char,std::char_traits<char>_> *)
                  FUN_141302cc4(uVar14,": it is more than ");
        pbVar16 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar15,0xff);
        FUN_141302cc4(pbVar16," characters long.");
        FUN_144e410c0(local_4a8,local_6c8);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_4a8,(ThrowInfo *)&DAT_14c6d51d8);
      }
      if (local_248[uVar13 + 0x100] == '\0') break;
      uVar13 = uVar13 + 1;
    }
    pcVar19 = local_248;
    iVar20 = 0xff;
    do {
      (**(code **)(*param_2 + 0x10))(param_2,pcVar19,1);
      uVar13 = uVar25;
      if (*pcVar19 == '\0') break;
      pcVar19 = pcVar19 + 1;
      iVar20 = iVar20 + -1;
    } while (-1 < iVar20);
    while( true ) {
      if (0xff < uVar13) {
        FUN_1470a639e(local_6c8,1);
        uVar14 = FUN_141302cc4(local_6b8,"Invalid ");
        uVar14 = FUN_141302cc4(uVar14,"attribute type name");
        pbVar15 = (basic_ostream<char,std::char_traits<char>_> *)
                  FUN_141302cc4(uVar14,": it is more than ");
        pbVar16 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar15,0xff);
        FUN_141302cc4(pbVar16," characters long.");
        FUN_144e410c0(local_508,local_6c8);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_508,(ThrowInfo *)&DAT_14c6d51d8);
      }
      if (local_248[uVar13] == '\0') break;
      uVar13 = uVar13 + 1;
    }
    (**(code **)(*param_2 + 0x10))(param_2,local_718,4);
    iVar20 = local_718[0];
    if (local_718[0] < 0) {
      FUN_144e41060(local_5c8,"Invalid size field in header attribute");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_5c8,(ThrowInfo *)&DAT_14c6d51d8);
    }
    strncpy((char *)local_348,local_248 + 0x100,0xff);
    local_249 = 0;
    puVar2 = (undefined8 *)*param_1;
    cVar7 = *(char *)((longlong)puVar2[1] + 0x19);
    puVar22 = puVar2;
    puVar12 = (undefined8 *)puVar2[1];
    while (cVar7 == '\0') {
      pbVar9 = (byte *)(puVar12 + 4);
      lVar23 = -(longlong)pbVar9;
      do {
        bVar1 = *pbVar9;
        uVar17 = (uint)pbVar9[(longlong)(local_348 + lVar23)];
        if (bVar1 != uVar17) break;
        pbVar9 = pbVar9 + 1;
      } while (uVar17 != 0);
      if ((int)(bVar1 - uVar17) < 0) {
        puVar21 = (undefined8 *)puVar12[2];
        puVar12 = puVar22;
      }
      else {
        puVar21 = (undefined8 *)*puVar12;
      }
      puVar22 = puVar12;
      puVar12 = puVar21;
      cVar7 = *(char *)((longlong)puVar21 + 0x19);
    }
    if (*(char *)((longlong)puVar22 + 0x19) != '\0') {
LAB_144b69943:
      cVar7 = FUN_144e474a0(local_248);
      if (cVar7 == '\0') {
        local_6d8 = FUN_14494321d(0x40);
        if (local_6d8 == 0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)FUN_144e61a80(local_6d8,local_248);
        }
      }
      else {
        plVar10 = (longlong *)FUN_144e472f0(local_248);
      }
      local_710 = plVar10;
      (**(code **)(*plVar10 + 0x20))(plVar10,param_2,iVar20,*param_3);
      strncpy((char *)local_448,local_248 + 0x100,0xff);
      local_349 = 0;
      puVar2 = (undefined8 *)*param_1;
      puVar22 = (undefined8 *)puVar2[1];
      uStack_700 = 0;
      cVar7 = *(char *)((longlong)puVar22 + 0x19);
      puVar12 = puVar2;
      local_708 = puVar22;
      while (puVar21 = puVar22, cVar7 == '\0') {
        pbVar9 = (byte *)(puVar21 + 4);
        lVar23 = -(longlong)pbVar9;
        do {
          bVar1 = *pbVar9;
          uVar17 = (uint)pbVar9[(longlong)(local_448 + lVar23)];
          if (bVar1 != uVar17) break;
          pbVar9 = pbVar9 + 1;
        } while (uVar17 != 0);
        bVar26 = -1 < (int)(bVar1 - uVar17);
        if (bVar26) {
          puVar22 = (undefined8 *)*puVar21;
          puVar12 = puVar21;
        }
        else {
          puVar22 = (undefined8 *)puVar21[2];
        }
        uStack_700 = (uint)bVar26;
        cVar7 = *(char *)((longlong)puVar22 + 0x19);
        local_708 = puVar21;
      }
      if (*(char *)((longlong)puVar12 + 0x19) == '\0') {
        pbVar9 = local_448;
        lVar23 = 0x20 - (longlong)pbVar9;
        do {
          bVar1 = *pbVar9;
          uVar17 = (uint)pbVar9[(longlong)puVar12 + lVar23];
          if (bVar1 != uVar17) break;
          pbVar9 = pbVar9 + 1;
        } while (uVar17 != 0);
        if ((int)(bVar1 - uVar17) < 0) goto LAB_144b69a6c;
      }
      else {
LAB_144b69a6c:
        if (param_1[1] == 0xdd67c8a60dd67c) {
                    /* WARNING: Subroutine does not return */
          FUN_1470a938d();
        }
        local_6e0 = 0;
        local_6e8 = param_1;
        plVar11 = (longlong *)FUN_14494321d(0x128);
        pbVar9 = local_448;
        lVar23 = 2;
        plVar18 = plVar11 + 4;
        do {
          lVar6 = *(longlong *)(pbVar9 + 8);
          *plVar18 = *(longlong *)pbVar9;
          plVar18[1] = lVar6;
          lVar6 = *(longlong *)(pbVar9 + 0x18);
          plVar18[2] = *(longlong *)(pbVar9 + 0x10);
          plVar18[3] = lVar6;
          lVar6 = *(longlong *)(pbVar9 + 0x28);
          plVar18[4] = *(longlong *)(pbVar9 + 0x20);
          plVar18[5] = lVar6;
          lVar6 = *(longlong *)(pbVar9 + 0x38);
          plVar18[6] = *(longlong *)(pbVar9 + 0x30);
          plVar18[7] = lVar6;
          lVar6 = *(longlong *)(pbVar9 + 0x48);
          plVar18[8] = *(longlong *)(pbVar9 + 0x40);
          plVar18[9] = lVar6;
          lVar6 = *(longlong *)(pbVar9 + 0x58);
          plVar18[10] = *(longlong *)(pbVar9 + 0x50);
          plVar18[0xb] = lVar6;
          lVar6 = *(longlong *)(pbVar9 + 0x68);
          plVar18[0xc] = *(longlong *)(pbVar9 + 0x60);
          plVar18[0xd] = lVar6;
          uVar3 = *(undefined4 *)(pbVar9 + 0x74);
          uVar4 = *(undefined4 *)(pbVar9 + 0x78);
          uVar5 = *(undefined4 *)(pbVar9 + 0x7c);
          *(undefined4 *)(plVar18 + 0xe) = *(undefined4 *)(pbVar9 + 0x70);
          *(undefined4 *)((longlong)plVar18 + 0x74) = uVar3;
          *(undefined4 *)(plVar18 + 0xf) = uVar4;
          *(undefined4 *)((longlong)plVar18 + 0x7c) = uVar5;
          pbVar9 = pbVar9 + 0x80;
          lVar23 = lVar23 + -1;
          plVar18 = plVar18 + 0x10;
        } while (lVar23 != 0);
        plVar11[0x24] = 0;
        *plVar11 = (longlong)puVar2;
        plVar11[1] = (longlong)puVar2;
        plVar11[2] = (longlong)puVar2;
        *(undefined2 *)(plVar11 + 3) = 0;
        local_6e0 = 0;
        puVar12 = (undefined8 *)FUN_144b69d10(param_1,&local_708,plVar11);
      }
      puVar12[0x24] = plVar10;
      goto LAB_144b69740;
    }
    pbVar9 = local_348;
    lVar23 = 0x20 - (longlong)pbVar9;
    do {
      bVar1 = *pbVar9;
      uVar17 = (uint)pbVar9[(longlong)puVar22 + lVar23];
      if (bVar1 != uVar17) break;
      pbVar9 = pbVar9 + 1;
    } while (uVar17 != 0);
    if (((int)(bVar1 - uVar17) < 0) || (puVar22 == puVar2)) goto LAB_144b69943;
    pcVar19 = (char *)(**(code **)(*(longlong *)puVar22[0x24] + 8))();
    iVar8 = strncmp(pcVar19,local_248,0x100);
    if (iVar8 != 0) {
      FUN_144e47110();
      FUN_1470a639e(local_6c8,1);
      uVar14 = FUN_141302cc4(local_6b8,"Unexpected type for image attribute \"");
      uVar14 = FUN_141302cc4(uVar14,local_248 + 0x100);
      FUN_141302cc4(uVar14,&DAT_149971260);
      FUN_144e410c0(local_568,local_6c8);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_568,(ThrowInfo *)&DAT_14c6d51d8);
    }
    (**(code **)(*(longlong *)puVar22[0x24] + 0x20))
              ((longlong *)puVar22[0x24],param_2,iVar20,*param_3);
  } while( true );
}



// FUNCTION 144b69d10 FUN_144b69d10 body=603 status=ok
// SIG undefined FUN_144b69d10(void)

longlong * FUN_144b69d10(longlong *param_1,longlong *param_2,longlong *param_3)

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
LAB_144b69f4d:
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
        goto LAB_144b69f4d;
      }
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      plVar6 = *(longlong **)(plVar6[1] + 8);
    }
    cVar1 = *(char *)(plVar6[1] + 0x18);
  } while( true );
}



// FUNCTION 144b69f70 FUN_144b69f70 body=404 status=ok
// SIG undefined FUN_144b69f70(void)

longlong * FUN_144b69f70(longlong *param_1,byte *param_2)

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
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  plVar3 = (longlong *)*param_1;
  plVar11 = (longlong *)plVar3[1];
  uStack_20 = 0;
  cVar1 = *(char *)((longlong)plVar11 + 0x19);
  plVar10 = plVar3;
  local_28 = plVar11;
  while (plVar8 = plVar11, cVar1 == '\0') {
    pbVar9 = (byte *)(plVar8 + 4);
    lVar13 = (longlong)param_2 - (longlong)pbVar9;
    do {
      bVar2 = *pbVar9;
      uVar12 = (uint)pbVar9[lVar13];
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
    uStack_20 = (uint)bVar14;
    cVar1 = *(char *)((longlong)plVar11 + 0x19);
    local_28 = plVar8;
  }
  if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
    pbVar9 = param_2;
    do {
      bVar2 = *pbVar9;
      uVar12 = (uint)pbVar9[(longlong)plVar10 + (0x20 - (longlong)param_2)];
      if (bVar2 != uVar12) break;
      pbVar9 = pbVar9 + 1;
    } while (uVar12 != 0);
    if (-1 < (int)(bVar2 - uVar12)) goto LAB_144b6a0e3;
  }
  if (param_1[1] == 0xdd67c8a60dd67c) {
                    /* WARNING: Subroutine does not return */
    FUN_1470a938d();
  }
  uStack_30 = 0;
  local_38 = param_1;
  plVar10 = (longlong *)FUN_14494321d(0x128);
  lVar13 = 2;
  plVar11 = plVar10 + 4;
  do {
    lVar7 = *(longlong *)(param_2 + 8);
    *plVar11 = *(longlong *)param_2;
    plVar11[1] = lVar7;
    lVar7 = *(longlong *)(param_2 + 0x18);
    plVar11[2] = *(longlong *)(param_2 + 0x10);
    plVar11[3] = lVar7;
    lVar7 = *(longlong *)(param_2 + 0x28);
    plVar11[4] = *(longlong *)(param_2 + 0x20);
    plVar11[5] = lVar7;
    lVar7 = *(longlong *)(param_2 + 0x38);
    plVar11[6] = *(longlong *)(param_2 + 0x30);
    plVar11[7] = lVar7;
    lVar7 = *(longlong *)(param_2 + 0x48);
    plVar11[8] = *(longlong *)(param_2 + 0x40);
    plVar11[9] = lVar7;
    lVar7 = *(longlong *)(param_2 + 0x58);
    plVar11[10] = *(longlong *)(param_2 + 0x50);
    plVar11[0xb] = lVar7;
    lVar7 = *(longlong *)(param_2 + 0x68);
    plVar11[0xc] = *(longlong *)(param_2 + 0x60);
    plVar11[0xd] = lVar7;
    uVar4 = *(undefined4 *)(param_2 + 0x74);
    uVar5 = *(undefined4 *)(param_2 + 0x78);
    uVar6 = *(undefined4 *)(param_2 + 0x7c);
    *(undefined4 *)(plVar11 + 0xe) = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)((longlong)plVar11 + 0x74) = uVar4;
    *(undefined4 *)(plVar11 + 0xf) = uVar5;
    *(undefined4 *)((longlong)plVar11 + 0x7c) = uVar6;
    param_2 = param_2 + 0x80;
    lVar13 = lVar13 + -1;
    plVar11 = plVar11 + 0x10;
  } while (lVar13 != 0);
  plVar10[0x24] = 0;
  *plVar10 = (longlong)plVar3;
  plVar10[1] = (longlong)plVar3;
  plVar10[2] = (longlong)plVar3;
  *(undefined2 *)(plVar10 + 3) = 0;
  local_38 = local_28;
  uStack_30 = CONCAT44(uStack_1c,uStack_20);
  plVar10 = (longlong *)FUN_144b69d10(param_1,&local_38);
LAB_144b6a0e3:
  return plVar10 + 0x24;
}



// FUNCTION 144b6a110 FUN_144b6a110 body=92 status=ok
// SIG undefined FUN_144b6a110(void)

void FUN_144b6a110(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_144b6b680(param_1,param_1,plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    thunk_FUN_1400020a8(plVar3,0x128);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  thunk_FUN_1400020a8(*param_1,0x128);
  return;
}



// FUNCTION 144b6a170 FUN_144b6a170 body=102 status=ok
// SIG undefined FUN_144b6a170(void)

longlong * FUN_144b6a170(longlong *param_1)

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



// FUNCTION 144b6a1e0 FUN_144b6a1e0 body=8 status=ok
// SIG undefined FUN_144b6a1e0(void)

longlong FUN_144b6a1e0(longlong *param_1)

{
  return *param_1 + 0x20;
}



// FUNCTION 144b6a1f0 FUN_144b6a1f0 body=378 status=ok
// SIG undefined FUN_144b6a1f0(void)

void FUN_144b6a1f0(void)

{
  int iVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c77efd0) {
    FUN_144b3d300(&DAT_14c77efd0);
    if (DAT_14c77efd0 == -1) {
      _Mtx_init_in_situ(&DAT_14c77ef80,2);
      atexit((_func_5014 *)&LAB_1499267d0);
      _Init_thread_footer(&DAT_14c77efd0);
    }
  }
  iVar1 = _Mtx_lock(&DAT_14c77ef80);
  if (iVar1 == 0) {
    if (DAT_14c77efcc != 0x7fffffff) {
      if (DAT_14c77efd4 == '\0') {
        FUN_144e48550();
        FUN_144e480c0();
        FUN_144e48c40();
        FUN_144e49770();
        FUN_144e49430();
        FUN_144e4a0b0();
        FUN_144e4a460();
        FUN_144e5e560();
        FUN_144e5e8d0();
        FUN_144e5ecf0();
        FUN_144b65900();
        FUN_144e5fa50();
        FUN_144e5fd90();
        FUN_144e60990();
        FUN_144e60510();
        FUN_144e61a20();
        FUN_144e61510();
        FUN_144e62600();
        FUN_144e629c0();
        FUN_144e63870();
        FUN_144e64040();
        FUN_144e64700();
        FUN_144e64ae0();
        FUN_144e655a0();
        FUN_144e652a0();
        FUN_144e64e80();
        FUN_144e65f80();
        FUN_144e65d10();
        FUN_144e65930();
        FUN_144e5f350();
        FUN_144e4ee50();
        FUN_144e4a960();
        DAT_14c77efd4 = '\x01';
      }
      _Mtx_unlock(&DAT_14c77ef80);
      return;
    }
    DAT_14c77efcc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
                    /* WARNING: Subroutine does not return */
  std::_Throw_Cpp_error(5);
}



// FUNCTION 144b6a390 FUN_144b6a390 body=85 status=ok
// SIG undefined FUN_144b6a390(void)

void FUN_144b6a390(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x19) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*param_1 + 8)) {
    *(longlong **)(*param_1 + 8) = plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (param_2 == *plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}



// FUNCTION 144b6a3f0 FUN_144b6a3f0 body=89 status=ok
// SIG undefined FUN_144b6a3f0(void)

void FUN_144b6a3f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x19) == '\0') {
    *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = param_2;
  }
  *(longlong *)(lVar1 + 8) = param_2[1];
  if (param_2 == *(longlong **)(*param_1 + 8)) {
    *(longlong *)(*param_1 + 8) = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  plVar2 = (longlong *)param_2[1];
  if (param_2 == (longlong *)plVar2[2]) {
    plVar2[2] = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  *plVar2 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}



// FUNCTION 144b6a450 FUN_144b6a450 body=970 status=ok
// SIG undefined FUN_144b6a450(void)

longlong * FUN_144b6a450(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar4 = (longlong *)param_2[2];
  plVar5 = param_2 + 2;
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar7 = (longlong *)*plVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar7 + 0x19);
      plVar4 = plVar7;
      plVar7 = (longlong *)*plVar7;
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0x19);
    plVar8 = (longlong *)param_2[1];
    plVar7 = param_2;
    while ((plVar4 = plVar8, cVar1 == '\0' && (plVar7 == (longlong *)plVar4[2]))) {
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar8 = (longlong *)plVar4[1];
      plVar7 = plVar4;
    }
  }
  plVar6 = param_2 + 1;
  plVar7 = (longlong *)*param_2;
  plVar8 = (longlong *)*plVar5;
  if (((*(char *)((longlong)plVar7 + 0x19) == '\0') &&
      (plVar8 = plVar7, *(char *)(*plVar5 + 0x19) == '\0')) &&
     (plVar8 = (longlong *)plVar4[2], plVar4 != param_2)) {
    plVar7[1] = (longlong)plVar4;
    *plVar4 = *param_2;
    plVar7 = plVar4;
    if (plVar4 != (longlong *)*plVar5) {
      plVar7 = (longlong *)plVar4[1];
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        plVar8[1] = (longlong)plVar7;
      }
      *plVar7 = (longlong)plVar8;
      plVar4[2] = *plVar5;
      *(longlong **)(*plVar5 + 8) = plVar4;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar4;
    }
    else {
      puVar3 = (undefined8 *)*plVar6;
      if ((longlong *)*puVar3 == param_2) {
        *puVar3 = plVar4;
      }
      else {
        puVar3[2] = plVar4;
      }
    }
    lVar2 = plVar4[3];
    plVar4[1] = *plVar6;
    *(char *)(plVar4 + 3) = (char)param_2[3];
    *(char *)(param_2 + 3) = (char)lVar2;
  }
  else {
    plVar7 = (longlong *)*plVar6;
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      plVar8[1] = (longlong)plVar7;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar8;
    }
    else if ((longlong *)*plVar7 == param_2) {
      *plVar7 = (longlong)plVar8;
    }
    else {
      plVar7[2] = (longlong)plVar8;
    }
    if (*(longlong **)*param_1 == param_2) {
      plVar5 = plVar7;
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        plVar4 = (longlong *)*plVar8;
        plVar5 = plVar8;
        while (plVar6 = plVar4, cVar1 == '\0') {
          plVar4 = (longlong *)*plVar6;
          cVar1 = *(char *)((longlong)plVar4 + 0x19);
          plVar5 = plVar6;
        }
      }
      *(longlong **)*param_1 = plVar5;
    }
    lVar2 = *param_1;
    if (*(longlong **)(lVar2 + 0x10) == param_2) {
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar8[2] + 0x19);
        plVar5 = (longlong *)plVar8[2];
        plVar4 = plVar8;
        while (plVar6 = plVar5, cVar1 == '\0') {
          plVar5 = (longlong *)plVar6[2];
          cVar1 = *(char *)((longlong)plVar5 + 0x19);
          plVar4 = plVar6;
        }
        *(longlong **)(lVar2 + 0x10) = plVar4;
      }
      else {
        *(longlong **)(lVar2 + 0x10) = plVar7;
      }
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (plVar8 != *(longlong **)(*param_1 + 8)) {
      do {
        plVar5 = plVar7;
        if ((char)plVar8[3] != '\x01') break;
        plVar4 = (longlong *)*plVar5;
        if (plVar8 == plVar4) {
          plVar4 = (longlong *)plVar5[2];
          if ((char)plVar4[3] == '\0') {
            *(undefined1 *)(plVar4 + 3) = 1;
            plVar4 = (longlong *)plVar5[2];
            *(undefined1 *)(plVar5 + 3) = 0;
            plVar5[2] = *plVar4;
            if (*(char *)(*plVar4 + 0x19) == '\0') {
              *(longlong **)(*plVar4 + 8) = plVar5;
            }
            plVar7 = plVar5 + 1;
            plVar4[1] = plVar5[1];
            if (plVar5 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar4;
              *plVar4 = (longlong)plVar5;
              *plVar7 = (longlong)plVar4;
              plVar4 = (longlong *)plVar5[2];
            }
            else {
              puVar3 = (undefined8 *)*plVar7;
              if (plVar5 == (longlong *)*puVar3) {
                *puVar3 = plVar4;
                *plVar4 = (longlong)plVar5;
                *plVar7 = (longlong)plVar4;
                plVar4 = (longlong *)plVar5[2];
              }
              else {
                puVar3[2] = plVar4;
                *plVar4 = (longlong)plVar5;
                *plVar7 = (longlong)plVar4;
                plVar4 = (longlong *)plVar5[2];
              }
            }
          }
          if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
            if ((*(char *)(*plVar4 + 0x18) != '\x01') || (*(char *)(plVar4[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar4[2] + 0x18) == '\x01') {
                *(undefined1 *)(*plVar4 + 0x18) = 1;
                *(undefined1 *)(plVar4 + 3) = 0;
                FUN_144b6a3f0(param_1);
                plVar4 = (longlong *)plVar5[2];
              }
              *(char *)(plVar4 + 3) = (char)plVar5[3];
              *(undefined1 *)(plVar5 + 3) = 1;
              *(undefined1 *)(plVar4[2] + 0x18) = 1;
              FUN_144b6a390(param_1,plVar5);
              break;
            }
LAB_144b6a79d:
            *(undefined1 *)(plVar4 + 3) = 0;
          }
        }
        else {
          if ((char)plVar4[3] == '\0') {
            *(undefined1 *)(plVar4 + 3) = 1;
            lVar2 = *plVar5;
            *(undefined1 *)(plVar5 + 3) = 0;
            *plVar5 = *(longlong *)(lVar2 + 0x10);
            if (*(char *)(*(longlong *)(lVar2 + 0x10) + 0x19) == '\0') {
              *(longlong **)(*(longlong *)(lVar2 + 0x10) + 8) = plVar5;
            }
            plVar4 = plVar5 + 1;
            *(longlong *)(lVar2 + 8) = plVar5[1];
            if (plVar5 == *(longlong **)(*param_1 + 8)) {
              *(longlong *)(*param_1 + 8) = lVar2;
              *(longlong **)(lVar2 + 0x10) = plVar5;
              *plVar4 = lVar2;
              plVar4 = (longlong *)*plVar5;
            }
            else {
              plVar7 = (longlong *)*plVar4;
              if (plVar5 == (longlong *)plVar7[2]) {
                plVar7[2] = lVar2;
                *(longlong **)(lVar2 + 0x10) = plVar5;
                *plVar4 = lVar2;
                plVar4 = (longlong *)*plVar5;
              }
              else {
                *plVar7 = lVar2;
                *(longlong **)(lVar2 + 0x10) = plVar5;
                *plVar4 = lVar2;
                plVar4 = (longlong *)*plVar5;
              }
            }
          }
          if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
            if ((*(char *)(plVar4[2] + 0x18) == '\x01') && (*(char *)(*plVar4 + 0x18) == '\x01'))
            goto LAB_144b6a79d;
            if (*(char *)(*plVar4 + 0x18) == '\x01') {
              *(undefined1 *)(plVar4[2] + 0x18) = 1;
              *(undefined1 *)(plVar4 + 3) = 0;
              FUN_144b6a390(param_1);
              plVar4 = (longlong *)*plVar5;
            }
            *(char *)(plVar4 + 3) = (char)plVar5[3];
            *(undefined1 *)(plVar5 + 3) = 1;
            *(undefined1 *)(*plVar4 + 0x18) = 1;
            FUN_144b6a3f0(param_1,plVar5);
            break;
          }
        }
        plVar7 = (longlong *)plVar5[1];
        plVar8 = plVar5;
      } while (plVar5 != *(longlong **)(*param_1 + 8));
    }
    *(undefined1 *)(plVar8 + 3) = 1;
  }
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  return param_2;
}



// FUNCTION 144b6a820 FUN_144b6a820 body=603 status=ok
// SIG undefined FUN_144b6a820(void)

longlong * FUN_144b6a820(longlong *param_1,longlong *param_2,longlong *param_3)

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
LAB_144b6aa5d:
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
        goto LAB_144b6aa5d;
      }
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      plVar6 = *(longlong **)(plVar6[1] + 8);
    }
    cVar1 = *(char *)(plVar6[1] + 0x18);
  } while( true );
}



// FUNCTION 144b6aa80 FUN_144b6aa80 body=260 status=ok
// SIG undefined FUN_144b6aa80(void)

longlong * FUN_144b6aa80(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  plVar1 = (longlong *)*param_1;
  local_28 = (longlong *)plVar1[1];
  uStack_20 = 0;
  plVar3 = plVar1;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar2 = local_28;
    do {
      local_28 = plVar2;
      if (*param_2 <= (ulonglong)local_28[4]) {
        plVar2 = (longlong *)*local_28;
        plVar3 = local_28;
      }
      else {
        plVar2 = (longlong *)local_28[2];
      }
      uStack_20 = (uint)(*param_2 <= (ulonglong)local_28[4]);
    } while (*(char *)((longlong)plVar2 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar3 + 0x19) != '\0') || (*param_2 < (ulonglong)plVar3[4])) {
    if (param_1[1] == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
      FUN_1470a938d();
    }
    uStack_30 = 0;
    local_38 = param_1;
    plVar3 = (longlong *)FUN_14494321d(0x30);
    plVar3[4] = *param_2;
    FUN_144e66020(plVar3 + 5);
    FUN_144e66030((longlong)plVar3 + 0x2c);
    *plVar3 = (longlong)plVar1;
    plVar3[1] = (longlong)plVar1;
    plVar3[2] = (longlong)plVar1;
    *(undefined2 *)(plVar3 + 3) = 0;
    local_38 = local_28;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    plVar3 = (longlong *)FUN_144b6a820(param_1,&local_38,plVar3);
  }
  return plVar3 + 5;
}



// FUNCTION 144b6ab90 FUN_144b6ab90 body=191 status=ok
// SIG undefined FUN_144b6ab90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144b6ab90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c77ef60) {
    FUN_144b3d300(&DAT_14c77ef60);
    if (DAT_14c77ef60 == -1) {
      _Mtx_init_in_situ(&DAT_14c77ef00,2);
      DAT_14c77ef50 = 0;
      _DAT_14c77ef58 = 0;
      DAT_14c77ef50 = FUN_14494321d(0x30);
      *(longlong *)DAT_14c77ef50 = DAT_14c77ef50;
      *(longlong *)(DAT_14c77ef50 + 8) = DAT_14c77ef50;
      *(longlong *)(DAT_14c77ef50 + 0x10) = DAT_14c77ef50;
      *(undefined2 *)(DAT_14c77ef50 + 0x18) = 0x101;
      LOCK();
      DAT_14c77eee8 = &DAT_14c77ef00;
      UNLOCK();
      atexit(FUN_1499266a0);
      _Init_thread_footer(&DAT_14c77ef60);
      return DAT_14c77eee8;
    }
  }
  return DAT_14c77eee8;
}



// FUNCTION 144b6ac50 FUN_144b6ac50 body=254 status=ok
// SIG undefined FUN_144b6ac50(void)

void FUN_144b6ac50(ulonglong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  lVar6 = FUN_144b6ab90();
  if (lVar6 != 0) {
    iVar5 = _Mtx_lock(lVar6);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(5);
    }
    if (*(int *)(lVar6 + 0x4c) == 0x7fffffff) {
      *(undefined4 *)(lVar6 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(6);
    }
    puVar2 = *(undefined8 **)(lVar6 + 0x50);
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    puVar4 = puVar2;
    puVar7 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
      if ((ulonglong)puVar7[4] < param_1) {
        puVar9 = (undefined8 *)puVar7[2];
        puVar7 = puVar4;
      }
      else {
        puVar9 = (undefined8 *)*puVar7;
      }
      puVar4 = puVar7;
      puVar7 = puVar9;
      cVar1 = *(char *)((longlong)puVar9 + 0x19);
    }
    if (((*(char *)((longlong)puVar4 + 0x19) == '\0') && ((ulonglong)puVar4[4] <= param_1)) &&
       (puVar4 != puVar2)) {
      if (*(char *)((longlong)puVar4[2] + 0x19) == '\0') {
        plVar3 = *(longlong **)puVar4[2];
        cVar1 = *(char *)((longlong)plVar3 + 0x19);
        while (cVar1 == '\0') {
          plVar3 = (longlong *)*plVar3;
          cVar1 = *(char *)((longlong)plVar3 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar4[1] + 0x19);
        puVar7 = (undefined8 *)puVar4[1];
        puVar2 = puVar4;
        while ((puVar9 = puVar7, cVar1 == '\0' && (puVar2 == (undefined8 *)puVar9[2]))) {
          cVar1 = *(char *)((longlong)puVar9[1] + 0x19);
          puVar7 = (undefined8 *)puVar9[1];
          puVar2 = puVar9;
        }
      }
      uVar8 = FUN_144b6a450(lVar6 + 0x50,puVar4);
      thunk_FUN_1400020a8(uVar8,0x30);
    }
    _Mtx_unlock(lVar6);
  }
  return;
}



// FUNCTION 144b6ad50 FUN_144b6ad50 body=136 status=ok
// SIG undefined FUN_144b6ad50(void)

longlong * FUN_144b6ad50(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)param_3[2];
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar5 + 0x19);
    plVar2 = (longlong *)*plVar5;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar5 = plVar2;
      plVar2 = (longlong *)*plVar2;
    }
  }
  else {
    cVar1 = *(char *)(param_3[1] + 0x19);
    plVar3 = (longlong *)param_3[1];
    plVar2 = param_3;
    while ((plVar5 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)plVar5[2]))) {
      cVar1 = *(char *)(plVar5[1] + 0x19);
      plVar3 = (longlong *)plVar5[1];
      plVar2 = plVar5;
    }
  }
  uVar4 = FUN_144b6a450(param_1,param_3);
  thunk_FUN_1400020a8(uVar4,0x30);
  *param_2 = (longlong)plVar5;
  return param_2;
}



// FUNCTION 144b6ade0 FUN_144b6ade0 body=187 status=ok
// SIG undefined FUN_144b6ade0(void)

undefined8 * FUN_144b6ade0(undefined8 *param_1,ulonglong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  FUN_144e66020();
  FUN_144e66030((longlong)param_1 + 4);
  lVar5 = FUN_144b6ab90();
  if (lVar5 != 0) {
    iVar4 = _Mtx_lock(lVar5);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(5);
    }
    if (*(int *)(lVar5 + 0x4c) == 0x7fffffff) {
      *(undefined4 *)(lVar5 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(6);
    }
    puVar2 = *(undefined8 **)(lVar5 + 0x50);
    cVar1 = *(char *)((longlong)puVar2[1] + 0x19);
    puVar3 = puVar2;
    puVar7 = (undefined8 *)puVar2[1];
    while (cVar1 == '\0') {
      if ((ulonglong)puVar7[4] < param_2) {
        puVar6 = (undefined8 *)puVar7[2];
        puVar7 = puVar3;
      }
      else {
        puVar6 = (undefined8 *)*puVar7;
      }
      puVar3 = puVar7;
      puVar7 = puVar6;
      cVar1 = *(char *)((longlong)puVar6 + 0x19);
    }
    if (((*(char *)((longlong)puVar3 + 0x19) == '\0') && ((ulonglong)puVar3[4] <= param_2)) &&
       (puVar3 != puVar2)) {
      *param_1 = puVar3[5];
    }
    _Mtx_unlock(lVar5);
  }
  return param_1;
}



// FUNCTION 144b6aea0 FUN_144b6aea0 body=258 status=ok
// SIG undefined FUN_144b6aea0(void)

undefined * FUN_144b6aea0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined8 local_res10;
  longlong local_res18;
  
  lVar2 = FUN_144b6ab90();
  if (lVar2 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c77ef70) {
      FUN_144b3d300(&DAT_14c77ef70);
      if (DAT_14c77ef70 == -1) {
        FUN_144e66020(&DAT_14c77ef68);
        FUN_144e66030(&DAT_14c77ef6c);
        _Init_thread_footer(&DAT_14c77ef70);
        return &DAT_14c77ef68;
      }
    }
    return &DAT_14c77ef68;
  }
  local_res18 = lVar2;
  iVar1 = _Mtx_lock(lVar2);
  if (iVar1 == 0) {
    if (*(int *)(lVar2 + 0x4c) != 0x7fffffff) {
      local_res10 = param_1;
      puVar3 = (undefined *)FUN_144b6aa80(lVar2 + 0x50,&local_res10);
      _Mtx_unlock(lVar2);
      return puVar3;
    }
    *(undefined4 *)(lVar2 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
                    /* WARNING: Subroutine does not return */
  std::_Throw_Cpp_error(5);
}



// FUNCTION 144b6afb0 FUN_144b6afb0 body=279 status=ok
// SIG undefined FUN_144b6afb0(void)

void FUN_144b6afb0(ulonglong param_1,ulonglong param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong local_res18;
  longlong local_res20;
  
  lVar5 = FUN_144b6ab90();
  if (lVar5 != 0) {
    local_res20 = lVar5;
    iVar4 = _Mtx_lock(lVar5);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(5);
    }
    if (*(int *)(lVar5 + 0x4c) == 0x7fffffff) {
      *(undefined4 *)(lVar5 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(6);
    }
    puVar6 = *(undefined8 **)(lVar5 + 0x50);
    puVar10 = (undefined8 *)puVar6[1];
    cVar1 = *(char *)((longlong)puVar10 + 0x19);
    puVar7 = puVar6;
    puVar9 = puVar10;
    cVar2 = cVar1;
    while (cVar2 == '\0') {
      if ((ulonglong)puVar9[4] < param_2) {
        puVar8 = (undefined8 *)puVar9[2];
        puVar9 = puVar7;
      }
      else {
        puVar8 = (undefined8 *)*puVar9;
      }
      puVar7 = puVar9;
      puVar9 = puVar8;
      cVar2 = *(char *)((longlong)puVar8 + 0x19);
    }
    puVar9 = puVar6;
    if (((*(char *)((longlong)puVar7 + 0x19) == '\0') && ((ulonglong)puVar7[4] <= param_2)) &&
       (puVar7 != puVar6)) {
      uVar3 = puVar7[5];
      local_res18 = param_1;
      puVar6 = (undefined8 *)FUN_144b6aa80(lVar5 + 0x50,&local_res18);
      *puVar6 = uVar3;
    }
    else {
      while (cVar1 == '\0') {
        if ((ulonglong)puVar10[4] < param_1) {
          puVar7 = (undefined8 *)puVar10[2];
          puVar10 = puVar9;
        }
        else {
          puVar7 = (undefined8 *)*puVar10;
        }
        puVar9 = puVar10;
        puVar10 = puVar7;
        cVar1 = *(char *)((longlong)puVar7 + 0x19);
      }
      if (((*(char *)((longlong)puVar9 + 0x19) == '\0') && ((ulonglong)puVar9[4] <= param_1)) &&
         (puVar9 != puVar6)) {
        FUN_144b6ad50(lVar5 + 0x50,&local_res18);
      }
    }
    _Mtx_unlock(lVar5);
  }
  return;
}



// FUNCTION 144b6b0d0 FUN_144b6b0d0 body=599 status=ok
// SIG undefined FUN_144b6b0d0(void)

void FUN_144b6b0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  undefined8 param_5)

{
  short sVar1;
  undefined8 uVar2;
  undefined1 auStack_1e8 [32];
  float local_1c8 [2];
  undefined1 local_1c0 [16];
  undefined **local_1b0;
  longlong lStack_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [240];
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_1c8[0] = param_4;
  uVar2 = FUN_144e47c70(&local_1b0);
  FUN_144b674a0(param_1,"displayWindow",uVar2);
  FUN_144e47cc0(&local_1b0);
  uVar2 = FUN_144e47c70(&local_1b0,param_3);
  FUN_144b674a0(param_1,"dataWindow",uVar2);
  FUN_144e47cc0(&local_1b0);
  sVar1 = _fdclass(local_1c8[0]);
  if ((sVar1 == -1) && (0.0 <= local_1c8[0])) {
    uVar2 = FUN_144e5e5c0(local_1c0,local_1c8);
    FUN_144b674a0(param_1,"pixelAspectRatio",uVar2);
    FUN_144e5e600(local_1c0);
    uVar2 = FUN_144e64ee0(local_1c0,param_5);
    FUN_144b674a0(param_1,"screenWindowCenter",uVar2);
    FUN_144e64f20(local_1c0);
    uVar2 = FUN_144e5e5c0(local_1c0,&stack0x00000030);
    FUN_144b674a0(param_1,"screenWindowWidth",uVar2);
    FUN_144e5e600(local_1c0);
    uVar2 = FUN_144e5fab0(local_1c0,&stack0x00000038);
    FUN_144b674a0(param_1,"lineOrder",uVar2);
    FUN_144e5faf0(local_1c0);
    uVar2 = FUN_144e49490(local_1c0,&stack0x00000040);
    FUN_144b674a0(param_1,"compression",uVar2);
    FUN_144e494d0(local_1c0);
    local_1b0 = (undefined **)0x0;
    lStack_1a8 = 0;
    local_1a0 = 0;
    FUN_144e472d0(&local_1b0);
    local_1b0 = Imf_3_2::TypedAttribute<Imf_3_2::ChannelList>::vftable;
    lStack_1a8 = 0;
    local_1a0 = 0;
    lStack_1a8 = FUN_14494321d(0x130);
    *(longlong *)lStack_1a8 = lStack_1a8;
    *(longlong *)(lStack_1a8 + 8) = lStack_1a8;
    *(longlong *)(lStack_1a8 + 0x10) = lStack_1a8;
    *(undefined2 *)(lStack_1a8 + 0x18) = 0x101;
    FUN_144b674a0(param_1,"channels",&local_1b0);
    FUN_144e48610(&local_1b0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_1e8);
  }
  FUN_144e47110();
  FUN_1470a639e(local_198,1);
  FUN_141302cc4(local_188,"Invalid pixel aspect ratio");
  FUN_144e40dd0(local_98,local_198);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 144b6b340 FUN_144b6b340 body=247 status=ok
// SIG undefined FUN_144b6b340(void)

void FUN_144b6b340(longlong *param_1,char *param_2)

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
                      &Imf_3_2::
                       TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                       ::RTTI_Type_Descriptor);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_148);
}



// FUNCTION 144b6b440 FUN_144b6b440 body=109 status=ok
// SIG undefined FUN_144b6b440(void)

undefined8 * FUN_144b6b440(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(param_3 + lVar3) != '\0');
  puVar2 = (undefined8 *)FUN_144a6594a(param_2,param_3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  uVar1 = puVar2[3];
  param_1[2] = puVar2[2];
  param_1[3] = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0xf;
  *(undefined1 *)puVar2 = 0;
  return param_1;
}



// FUNCTION 144b6b4b0 FUN_144b6b4b0 body=100 status=ok
// SIG undefined FUN_144b6b4b0(void)

undefined8 * FUN_144b6b4b0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar2 = (undefined8 *)*param_3;
  }
  puVar2 = (undefined8 *)FUN_144a6594a(param_2,puVar2,param_3[2]);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  uVar1 = puVar2[3];
  param_1[2] = puVar2[2];
  param_1[3] = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0xf;
  *(undefined1 *)puVar2 = 0;
  return param_1;
}



// FUNCTION 144b6b520 FUN_144b6b520 body=247 status=ok
// SIG undefined FUN_144b6b520(void)

void FUN_144b6b520(longlong *param_1,char *param_2)

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
                      &Imf_3_2::TypedAttribute<Imf_3_2::PreviewImage>::RTTI_Type_Descriptor);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_148);
}



// FUNCTION 144b6b620 FUN_144b6b620 body=85 status=ok
// SIG undefined FUN_144b6b620(void)

void FUN_144b6b620(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_144b6b620(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    thunk_FUN_1400020a8(param_3,0x30);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 144b6b680 FUN_144b6b680 body=85 status=ok
// SIG undefined FUN_144b6b680(void)

void FUN_144b6b680(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_144b6b680(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    thunk_FUN_1400020a8(param_3,0x128);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 144b6b720 FUN_144b6b720 body=106 status=ok
// SIG undefined FUN_144b6b720(void)

void FUN_144b6b720(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = Imf_3_2::IStream::vftable;
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



// FUNCTION 144b6b790 FUN_144b6b790 body=3 status=ok
// SIG undefined FUN_144b6b790(void)

undefined1 FUN_144b6b790(void)

{
  return 0;
}



// FUNCTION 144b6b7a0 FUN_144b6b7a0 body=59 status=ok
// SIG undefined FUN_144b6b7a0(void)

void FUN_144b6b7a0(void)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144e41060(local_78,
                "Attempt to perform a memory-mapped read on a file that is not memory mapped.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d51d8);
}



// FUNCTION 144b6b7e0 FUN_144b6b7e0 body=3 status=ok
// SIG undefined FUN_144b6b7e0(void)

void FUN_144b6b7e0(void)

{
  return;
}



// FUNCTION 144b6b7f0 FUN_144b6b7f0 body=15 status=ok
// SIG undefined FUN_144b6b7f0(void)

longlong * FUN_144b6b7f0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (0xf < *(ulonglong *)(param_1 + 0x20)) {
    plVar1 = (longlong *)*plVar1;
  }
  return plVar1;
}



// FUNCTION 144b6b800 FUN_144b6b800 body=71 status=ok
// SIG undefined FUN_144b6b800(void)

undefined8 * FUN_144b6b800(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = Imf_3_2::IStream::vftable;
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



// FUNCTION 144b6b850 FUN_144b6b850 body=139 status=ok
// SIG undefined FUN_144b6b850(void)

undefined8 * FUN_144b6b850(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = Imf_3_2::IStream::vftable;
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


