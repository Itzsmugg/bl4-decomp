// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14538cb30 FUN_14538cb30 body=67 status=ok
// SIG undefined FUN_14538cb30(void)

undefined8 * FUN_14538cb30(undefined8 *param_1)

{
  FUN_1450e6280();
  *param_1 = &PTR_LAB_149d43c58;
  param_1[0xd] = &PTR_LAB_149d43ce8;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 14538cb80 FUN_14538cb80 body=138 status=ok
// SIG undefined FUN_14538cb80(void)

undefined8 FUN_14538cb80(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  cVar2 = (**(code **)(*(longlong *)param_1[0x3a] + 0x118))((longlong *)param_1[0x3a],1);
  if (cVar2 == '\0') {
    return 2;
  }
  lVar1 = param_1[0x3a];
  uVar3 = (**(code **)(*param_1 + 0x38))(param_1);
  uVar4 = (**(code **)(*param_1 + 0x30))(param_1,local_res8);
  FUN_145073eb0(param_1,lVar1,uVar4,uVar3);
  FUN_1450e90c0(param_1);
  uVar4 = FUN_1450e8db0(param_1);
  return uVar4;
}



// FUNCTION 14538cc10 FUN_14538cc10 body=203 status=ok
// SIG undefined FUN_14538cc10(void)

void FUN_14538cc10(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  uVar2 = (**(code **)(*param_1 + 0x38))();
  uVar3 = (**(code **)(*param_1 + 0x30))(param_1,local_res8);
  FUN_145073fe0(param_1,uVar3,uVar2);
  (**(code **)(*(longlong *)param_1[0x3a] + 0x120))((longlong *)param_1[0x3a],1);
  if (((param_1[0x44] != 0) || (param_1[0xe] != 0)) || (DAT_14c7fdf48 == param_1)) {
    if (param_1[0xe] != 0) {
      *(longlong *)(param_1[0xe] + 0x220) = param_1[0x44];
    }
    plVar1 = (longlong *)param_1[0xe];
    if (param_1 != DAT_14c7fdf48) {
      *(longlong **)(param_1[0x44] + 0x70) = (longlong *)param_1[0xe];
      plVar1 = DAT_14c7fdf48;
    }
    DAT_14c7fdf48 = plVar1;
    param_1[0x44] = 0;
    param_1[0xe] = 0;
  }
  FUN_1450e6820(param_1,param_2);
  return;
}



// FUNCTION 14538cce0 FUN_14538cce0 body=639 status=ok
// SIG undefined FUN_14538cce0(void)

void FUN_14538cce0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,float param_6)

{
  byte *pbVar1;
  float fVar2;
  longlong lVar3;
  short sVar4;
  short sVar5;
  float fVar6;
  float fVar7;
  char local_res18 [16];
  undefined8 local_48;
  undefined4 local_40;
  
  switch(param_3) {
  case 5:
    if ((DAT_14c791034 != 1) || ((*(byte *)(param_1 + 0x128) & 1) == 0)) {
      *(float *)(param_1 + 0x88) = param_6 + *(float *)(param_1 + 0x88);
      return;
    }
    fVar7 = 0.0;
    if (param_6 != 0.0) {
      local_48 = 0;
      local_40 = 0;
      fVar6 = 0.0;
      local_res18[0] = '\0';
      lVar3 = FUN_1450899e0(param_1 + 0xf0,&local_48,local_res18);
      if (lVar3 != 0) {
        if (local_res18[0] == '\0') {
          *(undefined4 *)(lVar3 + 0xc) = 0;
        }
        fVar7 = *(float *)(lVar3 + 0xc);
        fVar6 = fVar7 + param_6;
        *(float *)(lVar3 + 0xc) = fVar6;
      }
      if (((*(byte *)(param_1 + 0x138) & 1) != 0) ||
         ((fVar2 = *(float *)(param_1 + 0x88), fVar7 == fVar2 && (fVar6 < fVar2)))) {
        *(byte *)(param_1 + 0x14b) = *(byte *)(param_1 + 0x14b) | 4;
      }
      else if (fVar2 < fVar6) {
        *(float *)(param_1 + 0x88) = fVar6;
      }
    }
    break;
  default:
    FUN_1450e83c0(param_1);
    return;
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
    lVar3 = *(longlong *)(param_1 + 0x218);
    sVar4 = *(short *)(lVar3 + 0xd4 + (ulonglong)(param_3 - 0x1d) * 0x30);
    sVar5 = (short)(int)param_6 + sVar4;
    if ((sVar4 != 0) != (sVar5 != 0)) {
      *(byte *)(lVar3 + 0x1b4) = *(byte *)(lVar3 + 0x1b4) | 2;
    }
    *(short *)(lVar3 + 0xd4 + (ulonglong)(param_3 - 0x1d) * 0x30) = sVar5;
    if (((*(byte *)(lVar3 + 0x1b4) & 2) != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
      *(undefined4 *)(*(longlong *)(lVar3 + 8) + 0x174) = 0x42ca0000;
      return;
    }
    break;
  case 0x21:
    lVar3 = *(longlong *)(param_1 + 0x218);
    sVar4 = (short)(int)param_6 + *(short *)(lVar3 + 0x1b0);
    if ((*(short *)(lVar3 + 0x1b0) != 0) != (sVar4 != 0)) {
      *(byte *)(lVar3 + 0x1b4) = *(byte *)(lVar3 + 0x1b4) | 2;
    }
    *(short *)(lVar3 + 0x1b0) = sVar4;
    if (((*(byte *)(lVar3 + 0x1b4) & 2) != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
      *(undefined4 *)(*(longlong *)(lVar3 + 8) + 0x174) = 0x42ca0000;
    }
    return;
  case 0x22:
  case 0x24:
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x1d0) + 0x19c);
      *pbVar1 = *pbVar1 | 0x20;
      return;
    }
    break;
  case 0x23:
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x1d0) + 0x19c);
      *pbVar1 = *pbVar1 | 0x10;
      return;
    }
  }
  return;
}



// FUNCTION 14538cf80 FUN_14538cf80 body=453 status=ok
// SIG undefined FUN_14538cf80(void)

void FUN_14538cf80(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(byte *)((longlong)param_1 + 0x14b) = *(byte *)((longlong)param_1 + 0x14b) & 0xf8;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined2 *)(param_1 + 0x29) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x14a) = 0;
  FUN_1450d7830(param_1[0x3a],param_1 + 1,param_1 + 0x2c,param_1[0x39]);
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x42ca0000;
  FUN_14508c0f0(param_1[0x3a],param_1 + 0x11,param_1 + 1);
  FUN_14538d330(param_1);
  bVar1 = *(byte *)(param_1 + 0x41);
  if ((bVar1 & 4) != 0) {
    local_58 = 0;
    local_50 = 0xff00;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 1;
    local_28 = 0;
    (**(code **)(*param_1 + 0x60))(param_1,&local_58,1);
    (**(code **)(*(longlong *)param_1[0x3a] + 0x138))
              ((longlong *)param_1[0x3a],&local_58,param_1 + 0xf,1);
    FUN_1450d78a0(param_1[0x3a],param_1 + 1,param_1 + 0x2c,param_1 + 0x31);
    bVar1 = *(byte *)(param_1 + 0x41) & 0xfb;
  }
  *(byte *)(param_1 + 0x41) = bVar1 | 3;
  cVar2 = FUN_1450e7120(param_1);
  if ((((cVar2 != '\0') && (param_1[0x44] == 0)) && (param_1[0xe] == 0)) &&
     (DAT_14c7fdf48 != param_1)) {
    if (DAT_14c7fdf48 != (longlong *)0x0) {
      DAT_14c7fdf48[0x44] = (longlong)param_1;
      if (DAT_14c7fdf48 != (longlong *)0x0) {
        param_1[0xe] = (longlong)DAT_14c7fdf48;
        DAT_14c7fdf48 = param_1;
        goto LAB_14538d129;
      }
    }
    DAT_14c7fdf48 = param_1;
    param_1[0xe] = 0;
  }
LAB_14538d129:
  FUN_1450e8bb0(param_1);
  return;
}



// FUNCTION 14538d210 FUN_14538d210 body=224 status=ok
// SIG undefined FUN_14538d210(void)

void FUN_14538d210(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  do {
    lVar3 = DAT_14c7fdf48;
    lVar5 = DAT_14c7fdf48;
    lVar7 = 0;
    if (DAT_14c7fdf48 == 0) {
      return;
    }
    do {
      plVar1 = (longlong *)(lVar5 + 0x70);
      cVar4 = FUN_1453893b0(*(undefined8 *)(lVar5 + 0x218));
      if (cVar4 == '\0') {
        puVar2 = (undefined8 *)(lVar5 + 0x220);
        if (*plVar1 != 0) {
          *(undefined8 *)(*plVar1 + 0x220) = *puVar2;
        }
        lVar6 = *plVar1;
        if (lVar5 == DAT_14c7fdf48) {
          DAT_14c7fdf48 = lVar6;
          *puVar2 = 0;
          *plVar1 = 0;
        }
        else {
          *(longlong *)(lVar7 + 0x70) = lVar6;
          *puVar2 = 0;
          *plVar1 = 0;
        }
      }
      else {
        lVar6 = *plVar1;
        lVar7 = lVar5;
      }
      lVar5 = lVar6;
    } while (lVar6 != 0);
  } while (lVar3 != DAT_14c7fdf48);
  return;
}



// FUNCTION 14538d330 FUN_14538d330 body=511 status=ok
// SIG undefined FUN_14538d330(void)

void FUN_14538d330(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1d0);
  if ((*(longlong *)(param_1 + 0x218) != 0) && (lVar1 != 0)) {
    sVar3 = FUN_1450d7ab0(lVar1,0,*(undefined8 *)(param_1 + 8));
    lVar2 = *(longlong *)(param_1 + 0x218);
    if ((*(short *)(lVar2 + 0xd4) != 0) != (sVar3 != 0)) {
      *(byte *)(lVar2 + 0x1b4) = *(byte *)(lVar2 + 0x1b4) | 2;
    }
    *(short *)(lVar2 + 0xd4) = sVar3;
    if (((*(byte *)(lVar2 + 0x1b4) & 2) != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
      *(undefined4 *)(*(longlong *)(lVar2 + 8) + 0x174) = 0x42ca0000;
    }
    sVar3 = FUN_1450d7ab0(lVar1,1,*(undefined8 *)(param_1 + 8));
    lVar2 = *(longlong *)(param_1 + 0x218);
    if ((*(short *)(lVar2 + 0x104) != 0) != (sVar3 != 0)) {
      *(byte *)(lVar2 + 0x1b4) = *(byte *)(lVar2 + 0x1b4) | 2;
    }
    *(short *)(lVar2 + 0x104) = sVar3;
    if (((*(byte *)(lVar2 + 0x1b4) & 2) != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
      *(undefined4 *)(*(longlong *)(lVar2 + 8) + 0x174) = 0x42ca0000;
    }
    sVar3 = FUN_1450d7ab0(lVar1,2,*(undefined8 *)(param_1 + 8));
    lVar2 = *(longlong *)(param_1 + 0x218);
    if ((*(short *)(lVar2 + 0x134) != 0) != (sVar3 != 0)) {
      *(byte *)(lVar2 + 0x1b4) = *(byte *)(lVar2 + 0x1b4) | 2;
    }
    *(short *)(lVar2 + 0x134) = sVar3;
    if (((*(byte *)(lVar2 + 0x1b4) & 2) != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
      *(undefined4 *)(*(longlong *)(lVar2 + 8) + 0x174) = 0x42ca0000;
    }
    sVar3 = FUN_1450d7ab0(lVar1,3,*(undefined8 *)(param_1 + 8));
    lVar2 = *(longlong *)(param_1 + 0x218);
    if ((*(short *)(lVar2 + 0x164) != 0) != (sVar3 != 0)) {
      *(byte *)(lVar2 + 0x1b4) = *(byte *)(lVar2 + 0x1b4) | 2;
    }
    *(short *)(lVar2 + 0x164) = sVar3;
    if (((*(byte *)(lVar2 + 0x1b4) & 2) != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
      *(undefined4 *)(*(longlong *)(lVar2 + 8) + 0x174) = 0x42ca0000;
    }
    sVar3 = FUN_1450d84c0(lVar1,*(undefined8 *)(param_1 + 8));
    lVar1 = *(longlong *)(param_1 + 0x218);
    if ((*(short *)(lVar1 + 0x1b0) != 0) != (sVar3 != 0)) {
      *(byte *)(lVar1 + 0x1b4) = *(byte *)(lVar1 + 0x1b4) | 2;
    }
    *(short *)(lVar1 + 0x1b0) = sVar3;
    if (((*(byte *)(lVar1 + 0x1b4) & 2) != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
      *(undefined4 *)(*(longlong *)(lVar1 + 8) + 0x174) = 0x42ca0000;
    }
  }
  return;
}



// FUNCTION 14538d530 FUN_14538d530 body=73 status=ok
// SIG undefined FUN_14538d530(void)

undefined8 * FUN_14538d530(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_149d43c58;
  param_1[0xd] = &PTR_LAB_149d43ce8;
  FUN_1450e6450();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x228);
  }
  return param_1;
}



// FUNCTION 14538d590 FUN_14538d590 body=55 status=ok
// SIG undefined FUN_14538d590(void)

undefined8 *
FUN_14538d590(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[3] = param_5;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  uVar1 = *param_6;
  uVar2 = param_6[1];
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0xffffffffffffffff;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 14538d5d0 FUN_14538d5d0 body=24 status=ok
// SIG undefined FUN_14538d5d0(void)

void FUN_14538d5d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_14538d620(param_1,local_res10);
  return;
}



// FUNCTION 14538d5f0 FUN_14538d5f0 body=24 status=ok
// SIG undefined FUN_14538d5f0(void)

void FUN_14538d5f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_14538d860(param_1,local_res10);
  return;
}



// FUNCTION 14538d610 FUN_14538d610 body=13 status=ok
// SIG undefined FUN_14538d610(void)

void FUN_14538d610(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  return;
}



// FUNCTION 14538d620 FUN_14538d620 body=575 status=ok
// SIG undefined FUN_14538d620(void)

void FUN_14538d620(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  longlong *plVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong local_48 [2];
  
  plVar6 = (longlong *)*param_2;
  bVar7 = 0;
  uVar11 = 0;
  if (0 < (int)plVar6[1]) {
    do {
      plVar6 = (longlong *)(uVar11 * 0x30 + *plVar6);
      lVar9 = plVar6[3];
      FUN_1453778e0(*param_1,local_48,plVar6,lVar9,param_1 + 4);
      local_48[0] = FUN_145377b20(*param_1,local_48,plVar6,lVar9,param_1 + 4);
      if (local_48[0] != 0) {
        bVar1 = *(byte *)(plVar6 + 1);
        uVar8 = (ulonglong)bVar1;
        if (*(int *)(local_48[0] + 0xb0) == 3) {
          uVar2 = *(ushort *)(plVar6 + 2);
          uVar4 = *(ushort *)((longlong)plVar6 + 0x12);
          if (uVar2 <= *(ushort *)((longlong)plVar6 + 0x12)) {
            uVar4 = uVar2;
          }
          iVar5 = (uint)uVar2 - (uint)uVar4;
          if (iVar5 != 0) {
            if (bVar1 != 0) {
              lVar9 = 0;
              do {
                memset((void *)(*plVar6 +
                               ((ulonglong)*(ushort *)(plVar6 + 2) * lVar9 + (ulonglong)(uint)uVar4)
                               * 4),0,(ulonglong)(uint)(iVar5 * 4));
                lVar9 = lVar9 + 1;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            *(short *)((longlong)plVar6 + 0x12) = (short)plVar6[2];
          }
        }
        else if (bVar7 <= bVar1) {
          bVar7 = bVar1;
        }
      }
      plVar6 = (longlong *)*param_2;
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)plVar6[1]);
  }
  if (((undefined4 *)param_1[3] != (undefined4 *)0x0) &&
     (*(undefined4 *)param_1[3] = *(undefined4 *)(*param_1 + 0x20), *(int *)param_1[3] != 0)) {
    FUN_1453776e0(*param_1);
  }
  if (bVar7 == 0) {
    if (param_1[1] != 0) {
      *(undefined2 *)(param_1[1] + 0x12) = 0;
    }
    if ((*(char *)((longlong)param_1 + 0x2c) != '\0') && (param_1[2] != 0)) {
      *(undefined2 *)(param_1[2] + 0x12) = 0;
    }
    return;
  }
  *(undefined2 *)(param_1[1] + 0x12) = *(undefined2 *)(param_1[1] + 0x10);
  puVar3 = (undefined8 *)param_1[1];
  memset((void *)*puVar3,0,
         (ulonglong)((uint)*(byte *)(puVar3 + 1) * (uint)*(ushort *)((longlong)puVar3 + 0x12) * 4));
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    *(undefined2 *)(param_1[2] + 0x12) = *(undefined2 *)(param_1[2] + 0x10);
    puVar3 = (undefined8 *)param_1[2];
    memset((void *)*puVar3,0,
           (ulonglong)((uint)*(byte *)(puVar3 + 1) * (uint)*(ushort *)((longlong)puVar3 + 0x12) * 4)
          );
  }
  FUN_14538dac0(*param_1,bVar7,param_1[1],param_1[2],param_3);
  FUN_14538dac0(*param_1 + 0x10,bVar7,param_1[1],param_1[2],param_3);
  return;
}



// FUNCTION 14538d860 FUN_14538d860 body=598 status=ok
// SIG undefined FUN_14538d860(void)

void FUN_14538d860(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  ushort uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ushort uVar6;
  int *piVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong local_res8;
  longlong local_48 [2];
  
  piVar7 = (int *)*param_2;
  uVar10 = 0;
  iVar8 = 0;
  if (0 < *piVar7) {
    local_res8 = 0;
    uVar13 = uVar10;
    do {
      plVar3 = *(longlong **)(local_res8 + *(longlong *)(piVar7 + 2));
      uVar4 = *(undefined8 *)(local_res8 + *(longlong *)(piVar7 + 4));
      FUN_1453778e0(*param_1,local_48,plVar3,uVar4,param_1 + 4);
      local_48[0] = FUN_145377b20(*param_1,local_48,plVar3,uVar4,param_1 + 4);
      if (local_48[0] != 0) {
        bVar1 = *(byte *)(plVar3 + 1);
        uVar9 = (ulonglong)bVar1;
        if (*(int *)(local_48[0] + 0xb0) == 3) {
          uVar2 = *(ushort *)(plVar3 + 2);
          uVar6 = *(ushort *)((longlong)plVar3 + 0x12);
          if (uVar2 <= *(ushort *)((longlong)plVar3 + 0x12)) {
            uVar6 = uVar2;
          }
          iVar8 = (uint)uVar2 - (uint)uVar6;
          if (iVar8 != 0) {
            if (bVar1 != 0) {
              lVar11 = 0;
              do {
                memset((void *)(*plVar3 +
                               ((ulonglong)*(ushort *)(plVar3 + 2) * lVar11 + (ulonglong)(uint)uVar6
                               ) * 4),0,(ulonglong)(uint)(iVar8 * 4));
                lVar11 = lVar11 + 1;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            *(short *)((longlong)plVar3 + 0x12) = (short)plVar3[2];
          }
        }
        else if ((uint)uVar13 <= (uint)bVar1) {
          uVar13 = uVar9;
        }
      }
      iVar8 = (int)uVar13;
      piVar7 = (int *)*param_2;
      local_res8 = local_res8 + 8;
      uVar12 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar12;
    } while ((int)uVar12 < *piVar7);
  }
  if (((undefined4 *)param_1[3] != (undefined4 *)0x0) &&
     (*(undefined4 *)param_1[3] = *(undefined4 *)(*param_1 + 0x20), *(int *)param_1[3] != 0)) {
    FUN_1453776e0(*param_1);
  }
  if (iVar8 == 0) {
    if (param_1[1] != 0) {
      *(undefined2 *)(param_1[1] + 0x12) = 0;
    }
    if ((*(char *)((longlong)param_1 + 0x2c) != '\0') && (param_1[2] != 0)) {
      *(undefined2 *)(param_1[2] + 0x12) = 0;
    }
    return;
  }
  *(undefined2 *)(param_1[1] + 0x12) = *(undefined2 *)(param_1[1] + 0x10);
  puVar5 = (undefined8 *)param_1[1];
  memset((void *)*puVar5,0,
         (ulonglong)((uint)*(byte *)(puVar5 + 1) * (uint)*(ushort *)((longlong)puVar5 + 0x12) * 4));
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    *(undefined2 *)(param_1[2] + 0x12) = *(undefined2 *)(param_1[2] + 0x10);
    puVar5 = (undefined8 *)param_1[2];
    memset((void *)*puVar5,0,
           (ulonglong)((uint)*(byte *)(puVar5 + 1) * (uint)*(ushort *)((longlong)puVar5 + 0x12) * 4)
          );
  }
  FUN_14538dcc0(*param_1,iVar8,param_1[1],param_1[2],param_3);
  FUN_14538dcc0(*param_1 + 0x10,iVar8,param_1[1],param_1[2],param_3);
  return;
}



// FUNCTION 14538dac0 FUN_14538dac0 body=504 status=ok
// SIG undefined FUN_14538dac0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14538dac0(longlong *param_1,int param_2,AkAudioBuffer *param_3,AkAudioBuffer *param_4,
                  longlong *param_5)

{
  AkAudioBuffer *_Src;
  AkAudioBuffer AVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  void *pvVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  AkAudioBuffer *pAVar13;
  ulonglong uVar14;
  undefined8 auStack_b0 [5];
  undefined8 uStack_88;
  float afStack_80 [2];
  uint local_78 [4];
  AkAudioBuffer local_68 [8];
  uint uStack_60;
  undefined8 local_58;
  
  uVar14 = (ulonglong)*(uint *)(param_1 + 1);
  AVar1 = param_3[8];
  uVar12 = (uint)(byte)AVar1;
  if (param_4 != (AkAudioBuffer *)0x0) {
    uVar12 = (uint)(byte)AVar1;
    if ((uint)(byte)AVar1 < (*(uint *)(param_4 + 8) & 0xff)) {
      uVar12 = *(uint *)(param_4 + 8) & 0xff;
    }
  }
  uVar7 = (ulonglong)((uVar12 + 7 >> 3) * param_2 * 0x20);
  uVar9 = uVar7 + 0xf;
  if (uVar9 <= uVar7) {
    uVar9 = 0xffffffffffffff0;
  }
  auStack_b0[0] = 0x14538db39;
  uVar2 = *(ushort *)(param_3 + 0x10);
  lVar6 = -(uVar9 & 0xfffffffffffffff0);
  _Src = local_68 + lVar6;
  if (*(uint *)(param_1 + 1) != 0) {
    lVar10 = 0;
    do {
      lVar3 = *param_1;
      if (*(int *)(lVar10 + 0xb0 + lVar3) != 3) {
        _local_68 = *(undefined1 (*) [16])(lVar10 + 0x98 + lVar3);
        local_58 = *(undefined8 *)(lVar10 + 0xa8 + lVar3);
        if ((short)((ulonglong)local_58 >> 0x10) != 0) {
          uVar12 = uStack_60;
          pAVar13 = param_3;
          if (*(int *)(lVar10 + 0xb0 + lVar3) == 2) {
            pAVar13 = param_4;
          }
          *(AkAudioBuffer **)((longlong)&uStack_88 + lVar6) = _Src;
          uVar11 = ((*(uint *)(pAVar13 + 8) & 0xff) + 7 >> 3) * (uVar12 & 0xff) * 0x20;
          pcVar4 = *(code **)(*param_5 + 0x88);
          *(undefined8 *)((longlong)auStack_b0 + lVar6) = 0x14538dbf4;
          (*pcVar4)(param_5,lVar3 + 8 + lVar10);
          if (*(longlong *)(lVar10 + 0xb8 + lVar3) == 0) {
            AVar1 = pAVar13[8];
            *(undefined8 *)((longlong)auStack_b0 + lVar6) = 0x14538dc1c;
            pvVar8 = AK::MemoryMgr::Malign
                               (0,(ulonglong)(((byte)AVar1 + 7 >> 3) * (uVar12 & 0xff) * 0x20),0x10)
            ;
            *(void **)(lVar10 + 0xb8 + lVar3) = pvVar8;
            if (pvVar8 != (void *)0x0) {
              *(undefined8 *)((longlong)auStack_b0 + lVar6) = 0x14538dc37;
              memcpy(pvVar8,_Src,(ulonglong)uVar11);
            }
          }
          pfVar5 = *(float **)(lVar10 + 0xb8 + lVar3);
          if (pfVar5 != (float *)0x0) {
            *(uint *)((longlong)local_78 + lVar6) = (uint)local_58._2_2_;
            *(float *)((longlong)afStack_80 + lVar6) = 1.0 / (float)uVar2;
            *(AkAudioBuffer **)((longlong)&uStack_88 + lVar6) = _Src;
            *(undefined8 *)((longlong)auStack_b0 + lVar6) = 0x14538dc6a;
            AkMixer::MixNinNChannels
                      (local_68,pAVar13,(AkRamp *)(lVar3 + 0x50 + lVar10),pfVar5,
                       *(float **)((longlong)&uStack_88 + lVar6),
                       *(float *)((longlong)afStack_80 + lVar6),
                       *(uint *)((longlong)local_78 + lVar6));
            pvVar8 = *(void **)(lVar10 + 0xb8 + lVar3);
            *(undefined8 *)((longlong)auStack_b0 + lVar6) = 0x14538dc7d;
            memcpy(pvVar8,_Src,(ulonglong)uVar11);
          }
        }
      }
      lVar10 = lVar10 + 0xc0;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return;
}



// FUNCTION 14538dcc0 FUN_14538dcc0 body=504 status=ok
// SIG undefined FUN_14538dcc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14538dcc0(longlong *param_1,int param_2,AkAudioBuffer *param_3,AkAudioBuffer *param_4,
                  longlong *param_5)

{
  AkAudioBuffer *_Src;
  AkAudioBuffer AVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  void *pvVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  AkAudioBuffer *pAVar13;
  ulonglong uVar14;
  undefined8 auStack_b0 [5];
  undefined8 uStack_88;
  float afStack_80 [2];
  uint local_78 [4];
  AkAudioBuffer local_68 [8];
  uint uStack_60;
  undefined8 local_58;
  
  uVar14 = (ulonglong)*(uint *)(param_1 + 1);
  AVar1 = param_3[8];
  uVar12 = (uint)(byte)AVar1;
  if (param_4 != (AkAudioBuffer *)0x0) {
    uVar12 = (uint)(byte)AVar1;
    if ((uint)(byte)AVar1 < (*(uint *)(param_4 + 8) & 0xff)) {
      uVar12 = *(uint *)(param_4 + 8) & 0xff;
    }
  }
  uVar7 = (ulonglong)((uVar12 + 7 >> 3) * param_2 * 0x20);
  uVar9 = uVar7 + 0xf;
  if (uVar9 <= uVar7) {
    uVar9 = 0xffffffffffffff0;
  }
  auStack_b0[0] = 0x14538dd39;
  uVar2 = *(ushort *)(param_3 + 0x10);
  lVar6 = -(uVar9 & 0xfffffffffffffff0);
  _Src = local_68 + lVar6;
  if (*(uint *)(param_1 + 1) != 0) {
    lVar10 = 0;
    do {
      lVar3 = *param_1;
      if (*(int *)(lVar10 + 0xb0 + lVar3) != 3) {
        _local_68 = *(undefined1 (*) [16])(lVar10 + 0x98 + lVar3);
        local_58 = *(undefined8 *)(lVar10 + 0xa8 + lVar3);
        if ((short)((ulonglong)local_58 >> 0x10) != 0) {
          uVar12 = uStack_60;
          pAVar13 = param_3;
          if (*(int *)(lVar10 + 0xb0 + lVar3) == 2) {
            pAVar13 = param_4;
          }
          *(AkAudioBuffer **)((longlong)&uStack_88 + lVar6) = _Src;
          uVar11 = ((*(uint *)(pAVar13 + 8) & 0xff) + 7 >> 3) * (uVar12 & 0xff) * 0x20;
          pcVar4 = *(code **)(*param_5 + 0xc0);
          *(undefined8 *)((longlong)auStack_b0 + lVar6) = 0x14538ddf4;
          (*pcVar4)(param_5,lVar3 + 8 + lVar10);
          if (*(longlong *)(lVar10 + 0xb8 + lVar3) == 0) {
            AVar1 = pAVar13[8];
            *(undefined8 *)((longlong)auStack_b0 + lVar6) = 0x14538de1c;
            pvVar8 = AK::MemoryMgr::Malign
                               (0,(ulonglong)(((byte)AVar1 + 7 >> 3) * (uVar12 & 0xff) * 0x20),0x10)
            ;
            *(void **)(lVar10 + 0xb8 + lVar3) = pvVar8;
            if (pvVar8 != (void *)0x0) {
              *(undefined8 *)((longlong)auStack_b0 + lVar6) = 0x14538de37;
              memcpy(pvVar8,_Src,(ulonglong)uVar11);
            }
          }
          pfVar5 = *(float **)(lVar10 + 0xb8 + lVar3);
          if (pfVar5 != (float *)0x0) {
            *(uint *)((longlong)local_78 + lVar6) = (uint)local_58._2_2_;
            *(float *)((longlong)afStack_80 + lVar6) = 1.0 / (float)uVar2;
            *(AkAudioBuffer **)((longlong)&uStack_88 + lVar6) = _Src;
            *(undefined8 *)((longlong)auStack_b0 + lVar6) = 0x14538de6a;
            AkMixer::MixNinNChannels
                      (local_68,pAVar13,(AkRamp *)(lVar3 + 0x50 + lVar10),pfVar5,
                       *(float **)((longlong)&uStack_88 + lVar6),
                       *(float *)((longlong)afStack_80 + lVar6),
                       *(uint *)((longlong)local_78 + lVar6));
            pvVar8 = *(void **)(lVar10 + 0xb8 + lVar3);
            *(undefined8 *)((longlong)auStack_b0 + lVar6) = 0x14538de7d;
            memcpy(pvVar8,_Src,(ulonglong)uVar11);
          }
        }
      }
      lVar10 = lVar10 + 0xc0;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return;
}



// FUNCTION 14538dec0 FUN_14538dec0 body=56 status=ok
// SIG undefined FUN_14538dec0(void)

void FUN_14538dec0(undefined8 *param_1)

{
  FUN_14538e020();
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 14538df00 FUN_14538df00 body=230 status=ok
// SIG undefined FUN_14538df00(void)

longlong * FUN_14538df00(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  
  FUN_14538e020();
  if (((*(uint *)(param_2 + 1) <= *(uint *)((longlong)param_1 + 0xc)) ||
      (cVar7 = FUN_14538e0b0(param_1,*(uint *)(param_2 + 1) - *(uint *)((longlong)param_1 + 0xc)),
      cVar7 != '\0')) && (plVar9 = (longlong *)*param_2, plVar9 != plVar9 + *(uint *)(param_2 + 1)))
  {
    do {
      uVar3 = *(uint *)(param_1 + 1);
      uVar4 = *(uint *)((longlong)param_1 + 0xc);
      lVar6 = *plVar9;
      uVar5 = uVar3;
      if (uVar3 < uVar4) {
LAB_14538df8a:
        if (uVar3 < *(uint *)((longlong)param_1 + 0xc)) {
          *(uint *)(param_1 + 1) = uVar5 + 1;
          plVar2 = (longlong *)(*param_1 + (ulonglong)uVar5 * 8);
          if (plVar2 != (longlong *)0x0) {
            *plVar2 = lVar6;
            piVar1 = (int *)(lVar6 + 0xbc);
            *piVar1 = *piVar1 + 1;
            *(int *)(*plVar2 + 0xd0) = *(int *)(*plVar2 + 0xd0) + 1;
          }
        }
      }
      else {
        iVar8 = (uVar4 >> 1) + uVar4;
        if (uVar4 == 0) {
          iVar8 = 1;
        }
        cVar7 = FUN_14538e0b0(param_1,iVar8);
        if (cVar7 != '\0') {
          uVar5 = *(uint *)(param_1 + 1);
          goto LAB_14538df8a;
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != (longlong *)(*param_2 + (ulonglong)*(uint *)(param_2 + 1) * 8));
  }
  return param_1;
}



// FUNCTION 14538dff0 FUN_14538dff0 body=36 status=ok
// SIG undefined FUN_14538dff0(void)

ulonglong FUN_14538dff0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  plVar1 = plVar2 + *(uint *)(param_1 + 1);
  while( true ) {
    if (plVar2 == plVar1) {
      return (ulonglong)plVar2 & 0xffffffffffffff00;
    }
    if (*plVar2 == param_2) break;
    plVar2 = plVar2 + 1;
  }
  return CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
}



// FUNCTION 14538e020 FUN_14538e020 body=135 status=ok
// SIG undefined FUN_14538e020(void)

void FUN_14538e020(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == plVar3 + *(uint *)(param_1 + 1)) {
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  do {
    *(int *)(*plVar3 + 0xd0) = *(int *)(*plVar3 + 0xd0) + -1;
    plVar2 = (longlong *)*plVar3;
    piVar1 = (int *)((longlong)plVar2 + 0xbc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
      AK::MemoryMgr::Free(0,plVar2);
    }
    plVar3 = plVar3 + 1;
  } while (plVar3 != (longlong *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 8));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14538e0b0 FUN_14538e0b0 body=170 status=ok
// SIG undefined FUN_14538e0b0(void)

undefined8 FUN_14538e0b0(longlong *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  __uint64 _Var3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar1 = *(uint *)(param_1 + 1);
  _Var3 = (ulonglong)uVar5 << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(0,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar2)) {
      uVar4 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar2 + uVar4 * 8) = *(undefined8 *)(*param_1 + uVar4 * 8);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar2 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 14538e160 FUN_14538e160 body=298 status=ok
// SIG undefined FUN_14538e160(void)

void FUN_14538e160(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  for (puVar2 = (undefined8 *)*param_1; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2)
  {
    plVar3 = (longlong *)puVar2[1];
    if ((*(int *)(puVar2 + 3) != 0) && (*(char *)(puVar2 + 4) != '\0')) {
      *(short *)((longlong)plVar3 + 0xdc) = *(short *)((longlong)plVar3 + 0xdc) + -1;
    }
    *(int *)(plVar3 + 0x1a) = (int)plVar3[0x1a] + -1;
    piVar1 = (int *)((longlong)plVar3 + 0xbc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
      AK::MemoryMgr::Free(0,plVar3);
    }
    if ((void *)puVar2[2] != (void *)0x0) {
      *(undefined4 *)(puVar2 + 3) = 0;
      AK::MemoryMgr::Free(0,(void *)puVar2[2]);
      puVar2[2] = 0;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    }
  }
  while (plVar3 = (longlong *)*param_1, plVar3 != (longlong *)0x0) {
    *param_1 = *plVar3;
    if (plVar3 == (longlong *)param_1[1]) {
      param_1[1] = 0;
    }
    *plVar3 = param_1[2];
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
    param_1[2] = (longlong)plVar3;
  }
  puVar2 = (undefined8 *)param_1[2];
  while (puVar4 = puVar2, puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    if ((puVar4 < (undefined8 *)param_1[3]) ||
       ((undefined8 *)param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 5 <= puVar4)) {
      AK::MemoryMgr::Free(0,puVar4);
    }
  }
  if ((void *)param_1[3] != (void *)0x0) {
    AK::MemoryMgr::Free(0,(void *)param_1[3]);
    param_1[3] = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 14538e290 FUN_14538e290 body=294 status=ok
// SIG undefined FUN_14538e290(void)

undefined8 FUN_14538e290(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  plVar5 = (longlong *)*param_1;
  plVar7 = (longlong *)0x0;
  if (plVar5 == (longlong *)0x0) {
LAB_14538e2da:
    plVar5 = (longlong *)param_1[2];
    if (plVar5 == (longlong *)0x0) {
      plVar5 = AK::MemoryMgr::Malloc(0,0x28);
      if (plVar5 != (longlong *)0x0) {
        if (plVar5 + 1 != (longlong *)0x0) {
          plVar5[1] = 0;
          plVar5[2] = 0;
          plVar5[3] = 0;
          *(undefined1 *)(plVar5 + 4) = 0;
        }
        *plVar5 = param_1[2];
        param_1[2] = (longlong)plVar5;
        goto LAB_14538e317;
      }
    }
    else {
LAB_14538e317:
      if ((longlong *)param_1[1] == (longlong *)0x0) {
        *param_1 = (longlong)plVar5;
      }
      else {
        *(longlong *)param_1[1] = (longlong)plVar5;
      }
      plVar5 = (longlong *)param_1[2];
      param_1[1] = (longlong)plVar5;
      param_1[2] = *plVar5;
      *plVar5 = 0;
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
      plVar7 = (longlong *)(param_1[1] + 8);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = param_2;
        *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + 1;
        *(int *)(*plVar7 + 0xd0) = *(int *)(*plVar7 + 0xd0) + 1;
        goto LAB_14538e359;
      }
    }
    uVar6 = 2;
  }
  else {
    do {
      plVar1 = plVar5 + 1;
      plVar2 = plVar5 + 1;
      plVar5 = (longlong *)*plVar5;
      if (param_2 == *plVar1) {
        plVar7 = plVar2;
      }
    } while (plVar5 != (longlong *)0x0);
    if (plVar7 == (longlong *)0x0) goto LAB_14538e2da;
LAB_14538e359:
    puVar4 = *(undefined8 **)(param_4 + 8);
    if (puVar4 != (undefined8 *)0x0) {
      uVar3 = *(uint *)(plVar7 + 2);
      (**(code **)*puVar4)(puVar4,plVar7 + 1,*(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0x10));
      if (((char)plVar7[3] == '\0') && (uVar3 < *(uint *)(plVar7 + 2))) {
        *(short *)(*plVar7 + 0xdc) = *(short *)(*plVar7 + 0xdc) + 1;
        *(undefined1 *)(plVar7 + 3) = 1;
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 14538e3c0 FUN_14538e3c0 body=28 status=ok
// SIG undefined FUN_14538e3c0(void)

undefined8 FUN_14538e3c0(undefined8 *param_1,longlong param_2)

{
  param_1 = (undefined8 *)*param_1;
  while( true ) {
    if (param_1 == (undefined8 *)0x0) {
      return 0;
    }
    if (param_2 == param_1[1]) break;
    param_1 = (undefined8 *)*param_1;
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),1);
}



// FUNCTION 14538e3e0 FUN_14538e3e0 body=50 status=ok
// SIG undefined FUN_14538e3e0(void)

void FUN_14538e3e0(undefined8 *param_1,undefined4 param_2)

{
  for (param_1 = (undefined8 *)*param_1; param_1 != (undefined8 *)0x0;
      param_1 = (undefined8 *)*param_1) {
    FUN_14535e2d0(param_1[1],param_2);
  }
  return;
}



// FUNCTION 14538e420 FUN_14538e420 body=88 status=ok
// SIG undefined FUN_14538e420(void)

void FUN_14538e420(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  
  for (param_1 = (undefined8 *)*param_1; param_1 != (undefined8 *)0x0;
      param_1 = (undefined8 *)*param_1) {
    lVar1 = param_1[1];
    iVar2 = *(int *)(lVar1 + 0xd8) + 1;
    *(int *)(lVar1 + 0xd8) = iVar2;
    if (((*(int *)(lVar1 + 0xc4) != 3) && (*(int *)(lVar1 + 0xd0) <= iVar2)) &&
       (*(longlong *)(lVar1 + 0xa8) != 0)) {
      *(undefined4 *)(lVar1 + 200) = *(undefined4 *)(*(longlong *)(lVar1 + 0xa8) + 0xc);
      *(undefined8 *)(lVar1 + 0xa8) = 0;
    }
  }
  return;
}



// FUNCTION 14538e480 FUN_14538e480 body=35 status=ok
// SIG undefined FUN_14538e480(void)

void FUN_14538e480(undefined8 *param_1)

{
  for (param_1 = (undefined8 *)*param_1; param_1 != (undefined8 *)0x0;
      param_1 = (undefined8 *)*param_1) {
    *(int *)(param_1[1] + 0xd8) = *(int *)(param_1[1] + 0xd8) + -1;
  }
  return;
}



// FUNCTION 14538e4b0 FUN_14538e4b0 body=134 status=ok
// SIG undefined FUN_14538e4b0(void)

void FUN_14538e4b0(undefined8 *param_1,ulonglong *param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_4 = 0;
  *param_3 = 0;
  for (param_1 = (undefined8 *)*param_1; param_1 != (undefined8 *)0x0;
      param_1 = (undefined8 *)*param_1) {
    if ((param_1[1] != 0) &&
       (lVar2 = param_1[2], lVar2 != lVar2 + (ulonglong)*(uint *)(param_1 + 3) * 0xc)) {
      do {
        if ((*param_2 >> ((ulonglong)*(uint *)(lVar2 + 8) & 0x3f) & 1) != 0) {
          plVar1 = *(longlong **)(param_1[1] + 0xa8);
          if (((plVar1 == (longlong *)0x0) || (*(int *)(param_1[1] + 0xd4) == 0)) || (*plVar1 == 0))
          {
            *param_4 = *param_4 + 1;
          }
          else {
            *param_3 = *param_3 + 1;
          }
        }
        lVar2 = lVar2 + 0xc;
      } while (lVar2 != param_1[2] + (ulonglong)*(uint *)(param_1 + 3) * 0xc);
    }
  }
  return;
}



// FUNCTION 14538e540 FUN_14538e540 body=52 status=ok
// SIG undefined FUN_14538e540(void)

void FUN_14538e540(undefined8 *param_1)

{
  for (param_1 = (undefined8 *)*param_1; param_1 != (undefined8 *)0x0;
      param_1 = (undefined8 *)*param_1) {
    if ((*(int *)(param_1 + 3) != 0) && (*(char *)(param_1 + 4) != '\0')) {
      *(short *)(param_1[1] + 0xdc) = *(short *)(param_1[1] + 0xdc) + -1;
      *(undefined1 *)(param_1 + 4) = 0;
    }
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return;
}



// FUNCTION 14538e580 FUN_14538e580 body=374 status=ok
// SIG undefined FUN_14538e580(void)

void FUN_14538e580(longlong *param_1,ulonglong *param_2,longlong param_3,longlong param_4,
                  longlong param_5,uint *param_6,uint *param_7)

{
  longlong lVar1;
  longlong *plVar2;
  float *pfVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  
  param_1 = (longlong *)*param_1;
  uVar5 = 0;
  uVar6 = uVar5;
  if (param_1 == (longlong *)0x0) {
    *param_6 = 0;
    *param_7 = 0;
    return;
  }
  do {
    if ((param_1[1] != 0) &&
       (pfVar3 = (float *)param_1[2], uVar4 = uVar5,
       pfVar3 != pfVar3 + (ulonglong)*(uint *)(param_1 + 3) * 3)) {
      do {
        uVar5 = uVar4;
        if ((*param_2 >> ((ulonglong)(uint)pfVar3[2] & 0x3f) & 1) != 0) {
          lVar1 = param_1[1];
          plVar2 = *(longlong **)(lVar1 + 0xa8);
          if (plVar2 == (longlong *)0x0) {
LAB_14538e646:
            if ((uint)uVar4 < *param_7) {
              *(float *)(param_4 + uVar4 * 8) = *(float *)(lVar1 + 200) * pfVar3[1] + *pfVar3;
              lVar1 = *(longlong *)(param_1[1] + 0xa8);
              if (lVar1 == 0) {
                fVar7 = *(float *)(param_1[1] + 200);
              }
              else {
                fVar7 = *(float *)(lVar1 + 0xc);
              }
              uVar5 = (ulonglong)((uint)uVar4 + 1);
              *(float *)(param_4 + 4 + uVar4 * 8) = fVar7 * pfVar3[1] + *pfVar3;
            }
          }
          else if (((*(int *)(lVar1 + 0xd4) == 0) || (*plVar2 == 0)) || (*param_6 <= (uint)uVar6)) {
            if (((plVar2 == (longlong *)0x0) || (*(int *)(lVar1 + 0xd4) == 0)) || (*plVar2 == 0))
            goto LAB_14538e646;
          }
          else {
            *(longlong *)(param_5 + uVar6 * 8) = *plVar2;
            *(undefined8 *)(param_3 + uVar6 * 8) = *(undefined8 *)pfVar3;
            uVar6 = (ulonglong)((uint)uVar6 + 1);
          }
        }
        pfVar3 = pfVar3 + 3;
        uVar4 = uVar5;
      } while (pfVar3 != (float *)(param_1[2] + (ulonglong)*(uint *)(param_1 + 3) * 0xc));
    }
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      *param_6 = (uint)uVar6;
      *param_7 = (uint)uVar5;
      return;
    }
  } while( true );
}



// FUNCTION 14538e700 FUN_14538e700 body=116 status=ok
// SIG undefined FUN_14538e700(void)

float FUN_14538e700(undefined8 *param_1,ulonglong *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  
  fVar3 = 1.0;
  for (param_1 = (undefined8 *)*param_1; param_1 != (undefined8 *)0x0;
      param_1 = (undefined8 *)*param_1) {
    pfVar2 = (float *)param_1[2];
    pfVar1 = pfVar2 + (ulonglong)*(uint *)(param_1 + 3) * 3;
    if (pfVar2 != pfVar1) {
      do {
        if ((*param_2 >> ((ulonglong)(uint)pfVar2[2] & 0x3f) & 1) != 0) {
          fVar3 = fVar3 * (*(float *)(param_1[1] + 200) * pfVar2[1] + *pfVar2);
        }
        pfVar2 = pfVar2 + 3;
      } while (pfVar2 != pfVar1);
    }
  }
  return fVar3;
}



// FUNCTION 14538e780 FUN_14538e780 body=139 status=ok
// SIG undefined FUN_14538e780(void)

float FUN_14538e780(undefined8 *param_1,ulonglong *param_2)

{
  float *pfVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = 1.0;
  for (param_1 = (undefined8 *)*param_1; param_1 != (undefined8 *)0x0;
      param_1 = (undefined8 *)*param_1) {
    pfVar3 = (float *)param_1[2];
    pfVar1 = pfVar3 + (ulonglong)*(uint *)(param_1 + 3) * 3;
    if (pfVar3 != pfVar1) {
      do {
        if ((*param_2 >> ((ulonglong)(uint)pfVar3[2] & 0x3f) & 1) != 0) {
          lVar2 = *(longlong *)(param_1[1] + 0xa8);
          if (lVar2 == 0) {
            fVar4 = *(float *)(param_1[1] + 200);
          }
          else {
            fVar4 = *(float *)(lVar2 + 0x10);
          }
          fVar5 = fVar5 * (fVar4 * pfVar3[1] + *pfVar3);
        }
        pfVar3 = pfVar3 + 3;
      } while (pfVar3 != pfVar1);
    }
  }
  return fVar5;
}



// FUNCTION 14538e810 FUN_14538e810 body=173 status=ok
// SIG undefined FUN_14538e810(void)

void FUN_14538e810(undefined8 *param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  
  param_1 = (undefined8 *)*param_1;
  do {
    if (param_1 == (undefined8 *)0x0) {
      return;
    }
    lVar5 = param_1[1];
    if (*(int *)(lVar5 + 0xc4) == param_2) {
      uVar2 = *(uint *)(param_3 + 1);
      uVar3 = *(uint *)((longlong)param_3 + 0xc);
      uVar4 = uVar2;
      if (uVar3 <= uVar2) {
        iVar7 = (uVar3 >> 1) + uVar3;
        if (uVar3 == 0) {
          iVar7 = 1;
        }
        cVar6 = FUN_14538e0b0(param_3,iVar7);
        if (cVar6 == '\0') goto LAB_14538e89d;
        uVar4 = *(uint *)(param_3 + 1);
      }
      if (uVar2 < *(uint *)((longlong)param_3 + 0xc)) {
        *(uint *)(param_3 + 1) = uVar4 + 1;
        plVar1 = (longlong *)(*param_3 + (ulonglong)uVar4 * 8);
        if (plVar1 != (longlong *)0x0) {
          *plVar1 = lVar5;
          *(int *)(lVar5 + 0xbc) = *(int *)(lVar5 + 0xbc) + 1;
          *(int *)(*plVar1 + 0xd0) = *(int *)(*plVar1 + 0xd0) + 1;
        }
      }
    }
LAB_14538e89d:
    param_1 = (undefined8 *)*param_1;
  } while( true );
}



// FUNCTION 14538e8c0 FUN_14538e8c0 body=18 status=ok
// SIG undefined FUN_14538e8c0(void)

undefined8 * FUN_14538e8c0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return param_1;
}



// FUNCTION 14538e8e0 FUN_14538e8e0 body=144 status=ok
// SIG undefined FUN_14538e8e0(void)

void FUN_14538e8e0(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *pvVar4;
  
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    for (puVar2 = *(undefined8 **)*param_1; puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      lVar3 = puVar2[1];
      *(undefined1 *)(lVar3 + 0xde) = 0;
      if (*(void **)(lVar3 + 0x70) != (void *)0x0) {
        *(undefined4 *)(lVar3 + 0x78) = 0;
        AK::MemoryMgr::Free(0,*(void **)(lVar3 + 0x70));
        *(undefined8 *)(lVar3 + 0x70) = 0;
        *(undefined4 *)(lVar3 + 0x7c) = 0;
      }
    }
    pvVar4 = (void *)*param_1;
    piVar1 = (int *)((longlong)pvVar4 + 0x28);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14538e160();
      AK::MemoryMgr::Free(0,pvVar4);
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14538e970 FUN_14538e970 body=144 status=ok
// SIG undefined FUN_14538e970(void)

void FUN_14538e970(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *pvVar4;
  
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    for (puVar2 = *(undefined8 **)*param_1; puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      lVar3 = puVar2[1];
      *(undefined1 *)(lVar3 + 0xde) = 0;
      if (*(void **)(lVar3 + 0x70) != (void *)0x0) {
        *(undefined4 *)(lVar3 + 0x78) = 0;
        AK::MemoryMgr::Free(0,*(void **)(lVar3 + 0x70));
        *(undefined8 *)(lVar3 + 0x70) = 0;
        *(undefined4 *)(lVar3 + 0x7c) = 0;
      }
    }
    pvVar4 = (void *)*param_1;
    piVar1 = (int *)((longlong)pvVar4 + 0x28);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14538e160();
      AK::MemoryMgr::Free(0,pvVar4);
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14538ea00 FUN_14538ea00 body=213 status=ok
// SIG undefined FUN_14538ea00(void)

undefined8 FUN_14538ea00(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  
  puVar1 = AK::MemoryMgr::Malloc(0,0x30);
  uVar5 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 1;
    *param_1 = puVar1;
    plVar2 = AK::MemoryMgr::Malloc(0,0xa0);
    puVar1[3] = plVar2;
    if (plVar2 != (longlong *)0x0) {
      puVar1[2] = plVar2;
      lVar3 = (longlong)plVar2 + 0x1c;
      *(undefined4 *)(puVar1 + 4) = 4;
      do {
        plVar4 = plVar2;
        if ((undefined8 *)(lVar3 + -0x14) != (undefined8 *)0x0) {
          *(undefined8 *)(lVar3 + -0x14) = 0;
          *(undefined8 *)(lVar3 + -0xc) = 0;
          *(undefined8 *)(lVar3 + -4) = 0;
          *(undefined1 *)(lVar3 + 4) = 0;
        }
        uVar5 = uVar5 + 1;
        *plVar4 = lVar3 + 0xc;
        lVar3 = lVar3 + 0x28;
        plVar2 = plVar4 + 5;
      } while (uVar5 < *(uint *)(puVar1 + 4));
      *plVar4 = 0;
    }
    return 1;
  }
  *param_1 = 0;
  return 2;
}



// FUNCTION 14538eae0 FUN_14538eae0 body=29 status=ok
// SIG undefined FUN_14538eae0(void)

undefined8 * FUN_14538eae0(undefined8 *param_1)

{
  *param_1 = 0;
  *(byte *)((longlong)param_1 + 0x12) = *(byte *)((longlong)param_1 + 0x12) & 0xfc;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 14538eb00 FUN_14538eb00 body=126 status=ok
// SIG undefined FUN_14538eb00(void)

void FUN_14538eb00(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 8))();
    param_1[1] = 0;
  }
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))();
    }
    param_1[3] = 0;
  }
  lVar3 = *param_1;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))();
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14538eb80 FUN_14538eb80 body=206 status=ok
// SIG undefined FUN_14538eb80(void)

longlong * FUN_14538eb80(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  if (param_2 != param_1) {
    lVar5 = *param_2;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + 1;
      UNLOCK();
    }
    lVar3 = *param_1;
    *param_1 = lVar5;
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 0x24);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))();
      }
    }
    if ((longlong *)param_2[1] == (longlong *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(longlong *)param_2[1];
      uVar4 = FUN_1450c43f0(*param_1);
      lVar5 = (**(code **)(lVar5 + 0x18))(param_2[1],uVar4);
    }
    param_1[1] = lVar5;
    *(int *)(param_1 + 2) = (int)param_2[2];
    lVar5 = param_2[3];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + 1;
      UNLOCK();
    }
    lVar3 = param_1[3];
    param_1[3] = lVar5;
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 0x24);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))();
      }
    }
    param_1[4] = param_2[4];
  }
  return param_1;
}



// FUNCTION 14538ec50 FUN_14538ec50 body=50 status=ok
// SIG undefined FUN_14538ec50(void)

undefined8 * FUN_14538ec50(void)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(0,0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 1;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14538ec90 FUN_14538ec90 body=4 status=ok
// SIG undefined FUN_14538ec90(void)

void FUN_14538ec90(longlong param_1)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}



// FUNCTION 14538eca0 FUN_14538eca0 body=291 status=ok
// SIG undefined FUN_14538eca0(void)

void FUN_14538eca0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  piVar1 = (int *)(param_1 + 2);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    uVar5 = (ulonglong)*(uint *)(param_1 + 1);
    plVar6 = (longlong *)*param_1;
    plVar7 = plVar6;
    if (plVar6 != plVar6 + uVar5 * 5) {
      do {
        if ((plVar7[3] != 0) && (plVar7[4] != 0)) {
          FUN_145540000();
        }
        uVar5 = (ulonglong)*(uint *)(param_1 + 1);
        plVar7 = plVar7 + 5;
        plVar6 = (longlong *)*param_1;
      } while (plVar7 != plVar6 + uVar5 * 5);
    }
    if (plVar6 != (longlong *)0x0) {
      if (plVar6 != plVar6 + uVar5 * 5) {
        plVar7 = plVar6 + 3;
        do {
          if ((longlong *)plVar7[-2] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar7[-2] + 8))();
            plVar7[-2] = 0;
          }
          lVar4 = *plVar7;
          if (lVar4 != 0) {
            LOCK();
            piVar1 = (int *)(lVar4 + 0x24);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*(longlong *)(lVar4 + 0x10) + 0x18))();
            }
            *plVar7 = 0;
          }
          lVar4 = plVar7[-3];
          if (lVar4 != 0) {
            LOCK();
            piVar1 = (int *)(lVar4 + 0x24);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*(longlong *)(lVar4 + 0x10) + 0x18))();
            }
            plVar7[-3] = 0;
          }
          plVar2 = plVar7 + 2;
          plVar7 = plVar7 + 5;
        } while (plVar2 != plVar6 + uVar5 * 5);
      }
      *(undefined4 *)(param_1 + 1) = 0;
      AK::MemoryMgr::Free(0,(void *)*param_1);
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    AK::MemoryMgr::Free(0,param_1);
  }
  return;
}



// FUNCTION 14538edd0 FUN_14538edd0 body=129 status=ok
// SIG undefined FUN_14538edd0(void)

undefined8 * FUN_14538edd0(undefined8 *param_1)

{
  undefined4 in_stack_00000030;
  
  FUN_1453996f0();
  *param_1 = &PTR_FUN_149d43d18;
  param_1[2] = &PTR_FUN_149d43d90;
  param_1[3] = &PTR_LAB_149d43d98;
  param_1[0x10] = &PTR_LAB_149d43e28;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = in_stack_00000030;
  *(undefined1 *)(param_1 + 0x7e) = 1;
  *(undefined4 *)(param_1 + 0x7f) = *(undefined4 *)(param_1[0x53] + 0x98);
  param_1[0x80] = *(undefined8 *)(param_1[0x53] + 0xa0);
  return param_1;
}



// FUNCTION 14538ee60 FUN_14538ee60 body=74 status=ok
// SIG undefined FUN_14538ee60(void)

void FUN_14538ee60(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_1450b2bc0(DAT_14c790fc0,*(undefined4 *)(param_1 + 0x268),*(undefined4 *)(param_1 + 0x3e0),
                  *(undefined8 *)(param_1 + 1000));
  }
  FUN_145399a20(param_1,param_2);
  return;
}



// FUNCTION 14538eeb0 FUN_14538eeb0 body=285 status=ok
// SIG undefined FUN_14538eeb0(void)

void FUN_14538eeb0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_res8 [2];
  undefined8 local_res18;
  
  FUN_145399f10();
  if (((*(byte *)(param_1 + 0x3ec) & 4) != 0) && ((*(byte *)(param_1 + 0x314) & 0x10) == 0)) {
    if (*(int *)(param_1 + 0x3e4) != 0) {
      *(undefined1 *)(param_1 + 0x3f0) = 0;
      return;
    }
    if ((*(char *)(param_1 + 0x3f0) != '\0') &&
       ((param_2 == '\0' || (*(int *)(param_1 + 0x3f4) == 0)))) {
      uVar1 = *(undefined8 *)(param_1 + 0x298);
      *(undefined1 *)(param_1 + 0x3f0) = 0;
      local_res18 = 0;
      local_res8[0] = 0;
      iVar2 = FUN_1450ae1d0(uVar1,local_res8,&local_res18,param_1 + 0x26c);
      while ((iVar2 != 0 && (iVar3 = FUN_14538efd0(param_1,iVar2,local_res8[0]), iVar3 != 1))) {
        FUN_1450b2bc0(DAT_14c790fc0,*(undefined4 *)(param_1 + 0x280),iVar2,local_res18);
        local_res18 = 0;
        local_res8[0] = 0;
        iVar2 = FUN_1450ae1d0(uVar1,local_res8,&local_res18,param_1 + 0x26c);
      }
    }
  }
  return;
}



// FUNCTION 14538efd0 FUN_14538efd0 body=906 status=ok
// SIG undefined FUN_14538efd0(void)

int FUN_14538efd0(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  byte local_res20 [8];
  undefined4 local_388;
  undefined4 local_384;
  undefined8 local_380;
  undefined8 local_378;
  longlong local_370;
  longlong local_368;
  undefined4 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined4 local_348 [2];
  undefined8 local_340;
  undefined8 local_338;
  undefined4 *local_330;
  int *local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined8 *local_2c0;
  undefined8 local_2b8;
  undefined2 local_2b0 [2];
  char local_2ab;
  undefined8 local_2a0;
  undefined1 local_298 [600];
  undefined4 local_40;
  byte local_3c;
  byte local_38;
  
  piVar2 = DAT_14c791060;
  do {
    while (iVar4 = *piVar2, iVar4 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(piVar2 + 2));
      if (*piVar2 < 0) goto LAB_14538f018;
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar2 + 2));
    }
    LOCK();
    iVar1 = *piVar2;
    if (iVar4 == iVar1) {
      *piVar2 = iVar4 + 1;
    }
    UNLOCK();
  } while (iVar4 != iVar1);
LAB_14538f018:
  plVar7 = (longlong *)0x0;
  plVar8 = plVar7;
  if (piVar2[0x12] != 0) {
    for (plVar9 = *(longlong **)
                   (*(longlong *)(piVar2 + 0x10) +
                   ((ulonglong)param_2 % (ulonglong)(uint)piVar2[0x12]) * 8);
        (plVar8 = plVar7, plVar9 != (longlong *)0x0 &&
        (plVar8 = plVar9, *(uint *)(plVar9 + 2) != param_2)); plVar9 = (longlong *)plVar9[1]) {
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar4 = *piVar2;
  while (-1 < iVar4) {
    LOCK();
    iVar1 = *piVar2;
    if (iVar4 == iVar1) {
      *piVar2 = iVar4 + -1;
    }
    UNLOCK();
    if (iVar4 == iVar1) {
      if ((iVar4 + -1 == 0) && (0 < piVar2[0xc])) {
        SetEvent(*(HANDLE *)(piVar2 + 0xe));
      }
      goto LAB_14538f090;
    }
    iVar4 = *piVar2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar2 + 2));
LAB_14538f090:
  plVar9 = plVar8 + -2;
  if (plVar8 == (longlong *)0x0) {
    plVar9 = plVar7;
  }
  if (plVar9 == (longlong *)0x0) {
    return 2;
  }
  local_380 = *(undefined8 *)(param_1 + 0x288);
  local_378 = *(undefined8 *)(param_1 + 0x290);
  local_370 = param_1 + 0x168;
  local_360 = *(undefined4 *)(param_1 + 0x334);
  local_368 = 0;
  local_358 = 0;
  local_350 = 0;
  lVar5 = FUN_14538ec50();
  bVar10 = local_368 != 0;
  local_368 = lVar5;
  if (bVar10) {
    FUN_14538eca0();
  }
  local_388 = 0;
  local_384 = 9;
  local_340 = 0;
  local_318 = 0;
  local_320 = 0;
  local_328 = (int *)0x0;
  local_2cc = 0;
  local_2b8 = 0;
  local_2b0[0] = 0xff00;
  local_2a0 = 0;
  FUN_144d51920(local_298);
  local_3c = local_3c & 0xfe;
  local_38 = local_38 & 0xf3 | 3;
  piVar2 = *(int **)(param_1 + 0x26c);
  local_340 = *(undefined8 *)(param_1 + 0x298);
  local_318._4_4_ = *(undefined4 *)(param_1 + 0x280);
  local_320 = *(undefined8 *)(param_1 + 0x274);
  local_318._0_4_ = *(undefined4 *)(param_1 + 0x27c);
  local_40 = 0;
  local_310 = 0;
  local_348[0] = 2;
  if (local_328 != (int *)0x0) {
    FUN_144d4a460();
  }
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  bVar6 = local_38 & 0xfd;
  local_2c8 = 0;
  local_338 = *(undefined8 *)(param_1 + 0x20);
  local_330 = &local_388;
  local_2c0 = &local_380;
  local_2a0 = *(undefined8 *)(param_1 + 0x368);
  local_2c4 = (undefined4)((longlong)((ulonglong)DAT_14c72f42c * (longlong)param_3) / 1000);
  local_2b8 = CONCAT44(param_2,*(undefined4 *)(param_1 + 0x328));
  local_328 = piVar2;
  if (((char)local_2b0[0] == -0x70) && (local_2ab != '\0')) {
    local_res20[0] = local_38 & 1;
    local_38 = bVar6;
    uVar3 = FUN_1450e98e0(local_348);
    iVar4 = FUN_14536f6c0(plVar9,local_2b0,uVar3,local_res20,local_338,local_318._4_4_);
    if (iVar4 != 1) goto LAB_14538f2d3;
    bVar6 = local_res20[0] & 1 | local_38 & 0xfe;
  }
  local_38 = bVar6;
  iVar4 = FUN_14536f160(plVar9,local_348);
  if (iVar4 == 3) {
    iVar4 = 1;
  }
  else if (iVar4 == 1) {
    iVar4 = (**(code **)(*plVar9 + 0x250))(plVar9,local_348);
  }
LAB_14538f2d3:
  if ((*(byte *)(param_1 + 0x314) & 1) != 0) {
    *(byte *)(param_1 + 0x314) = *(byte *)(param_1 + 0x314) | 2;
  }
  LOCK();
  piVar2 = (int *)((longlong)plVar9 + 0x24);
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar1 == 1) {
    (**(code **)(plVar9[2] + 0x18))();
  }
  DAT_14c7fdcb8 = DAT_14c7fdcb8 + 1;
  FUN_144d51aa0(local_298);
  if (local_328 != (int *)0x0) {
    FUN_144d4a460();
  }
  FUN_14538dec0(&local_358);
  if (local_368 != 0) {
    FUN_14538eca0();
  }
  return iVar4;
}



// FUNCTION 14538f360 FUN_14538f360 body=98 status=ok
// SIG undefined FUN_14538f360(void)

undefined8 * FUN_14538f360(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d43d18;
  param_1[2] = &PTR_FUN_149d43d90;
  param_1[3] = &PTR_LAB_149d43d98;
  param_1[0x10] = &PTR_LAB_149d43e28;
  FUN_145399890();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x408);
  }
  return param_1;
}



// FUNCTION 14538f3e0 FUN_14538f3e0 body=36 status=ok
// SIG undefined FUN_14538f3e0(void)

undefined8 * FUN_14538f3e0(undefined8 *param_1)

{
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *param_1 = 0x20000000;
  return param_1;
}



// FUNCTION 14538f410 FUN_14538f410 body=53 status=ok
// SIG undefined FUN_14538f410(void)

void FUN_14538f410(longlong param_1)

{
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}



// FUNCTION 14538f450 FUN_14538f450 body=384 status=ok
// SIG undefined FUN_14538f450(void)

undefined8 FUN_14538f450(undefined8 *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  float fVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = *(uint *)(param_1 + 3);
  uVar5 = 0;
  if (param_2 < uVar2 + *(uint *)((longlong)param_1 + 0x1c)) {
    bVar1 = *(byte *)(param_1 + 8);
    fVar7 = 0.0;
    if (((bVar1 & 2) == 0) || (*(float *)((longlong)param_1 + 0x44) == 0.0)) {
      if (uVar2 < param_2) {
        fVar7 = (float)(param_2 - uVar2) / (float)*(uint *)((longlong)param_1 + 0x1c);
      }
      *(float *)(param_1 + 4) = fVar7;
      fVar7 = (float)FUN_14538f8d0(uVar2,*(undefined4 *)(param_1 + 1),
                                   *(undefined4 *)((longlong)param_1 + 0xc),
                                   *(undefined4 *)(param_1 + 7));
    }
    else {
      fVar7 = (*(float *)(param_1 + 2) - *(float *)((longlong)param_1 + 0x14)) *
              *(float *)((longlong)param_1 + 0x44) + *(float *)((longlong)param_1 + 0x14);
    }
    if ((bVar1 & 1) != 0) {
      fVar3 = (float)(((uint)fVar7 & 0x7fffff) + 0x3f800000);
      fVar6 = fVar3 + 1.0;
      fVar7 = (((fVar3 * fVar3 * fVar3 - 1.0) * 1.1581186) / (fVar6 * fVar6 * fVar6)) * 20.0 +
              ((float)((uint)fVar7 >> 0x17 & 0xff) - 127.0) * 6.0206003;
    }
  }
  else {
    fVar7 = *(float *)((longlong)param_1 + 0x14);
    uVar5 = 1;
  }
  puVar4 = (undefined8 *)param_1[5];
  *(float *)(param_1 + 2) = fVar7;
  if (puVar4 != puVar4 + *(uint *)(param_1 + 6)) {
    do {
      (*(code *)**(undefined8 **)*puVar4)((undefined8 *)*puVar4,*param_1,fVar7,uVar5);
      puVar4 = puVar4 + 1;
    } while (puVar4 != (undefined8 *)(param_1[5] + (ulonglong)*(uint *)(param_1 + 6) * 8));
  }
  return uVar5;
}



// FUNCTION 14538f5d0 FUN_14538f5d0 body=88 status=ok
// SIG undefined FUN_14538f5d0(void)

void FUN_14538f5d0(longlong param_1,int param_2)

{
  float fVar1;
  
  if (((*(byte *)(param_1 + 0x40) & 2) != 0) && (param_2 != 0)) {
    fVar1 = expf((float)(int)-(uint)DAT_14c72f434 /
                 ((float)param_2 * 0.00020000001 * (float)DAT_14c72f42c));
    *(float *)(param_1 + 0x44) = fVar1;
  }
  return;
}



// FUNCTION 14538f630 FUN_14538f630 body=19 status=ok
// SIG undefined FUN_14538f630(void)

undefined8 FUN_14538f630(longlong *param_1)

{
  return CONCAT71((int7)(*param_1 - 0x2000000U >> 8),
                  (*param_1 - 0x2000000U & 0xfffffffffdffffff) == 0);
}



// FUNCTION 14538f650 FUN_14538f650 body=635 status=ok
// SIG undefined FUN_14538f650(void)

undefined8 FUN_14538f650(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  byte bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  
  *param_1 = param_2[1];
  bVar8 = (*(byte *)(param_1 + 8) ^ *(byte *)((longlong)param_2 + 0x24)) & 1 ^
          *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar8;
  *(byte *)(param_1 + 8) = (*(char *)((longlong)param_2 + 0x26) * '\x02' ^ bVar8) & 2 ^ bVar8;
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 2) = (int)param_2[2];
  fVar11 = *(float *)(param_2 + 2);
  fVar10 = *(float *)((longlong)param_2 + 0x14);
  if (*(char *)((longlong)param_2 + 0x24) != '\0') {
    fVar11 = fVar11 * 0.05;
    if ((fVar11 < -37.0) || (37.0 < fVar11)) {
      fVar11 = 0.0;
    }
    else {
      uVar5 = (uint)(longlong)(fVar11 * 27866352.0 + 1.0653532e+09);
      fVar11 = (float)((uVar5 & 0x7fffff) + 0x3f800000);
      fVar11 = ((fVar11 * 0.32518977 + 0.020805772) * fVar11 + 0.65304345) *
               (float)(uVar5 & 0xff800000);
    }
    fVar10 = fVar10 * 0.05;
    if ((fVar10 < -37.0) || (37.0 < fVar10)) {
      fVar10 = 0.0;
    }
    else {
      uVar5 = (uint)(longlong)(fVar10 * 27866352.0 + 1.0653532e+09);
      fVar10 = (float)((uVar5 & 0x7fffff) + 0x3f800000);
      fVar10 = ((fVar10 * 0.32518977 + 0.020805772) * fVar10 + 0.65304345) *
               (float)(uVar5 & 0xff800000);
    }
  }
  *(float *)(param_1 + 1) = fVar11;
  *(float *)((longlong)param_1 + 0xc) = fVar10;
  if (((*(char *)((longlong)param_2 + 0x25) == '\0') || (fVar11 < fVar10)) ||
     ((*(int *)((longlong)param_2 + 0x1c) - 3U & 0xfffffffd) == 0)) {
    iVar3 = *(int *)((longlong)param_2 + 0x1c);
  }
  else {
    iVar3 = 8 - *(int *)((longlong)param_2 + 0x1c);
  }
  *(int *)(param_1 + 7) = iVar3;
  *(undefined4 *)(param_1 + 3) = param_3;
  *(int *)((longlong)param_1 + 0x1c) = ((int)param_2[3] + -1 + DAT_14c72f428) / DAT_14c72f428;
  *(undefined4 *)(param_1 + 4) = 0;
  *(int *)(param_1 + 9) = (int)param_2[4];
  if (((*(byte *)(param_1 + 8) & 2) != 0) && ((int)param_2[3] != 0)) {
    fVar11 = expf((float)(int)-(uint)DAT_14c72f434 /
                  ((float)(int)param_2[3] * 0.00020000001 * (float)DAT_14c72f42c));
    *(float *)((longlong)param_1 + 0x44) = fVar11;
  }
  plVar4 = (longlong *)param_1[5];
  uVar6 = (ulonglong)*(uint *)(param_1 + 6);
  lVar1 = *param_2;
  plVar7 = plVar4 + uVar6;
  bVar9 = plVar4 == plVar7;
  if (!bVar9) {
    do {
      if (*plVar4 == lVar1) break;
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar7);
    bVar9 = plVar4 == plVar7;
  }
  plVar7 = (longlong *)0x0;
  if (!bVar9) {
    plVar7 = plVar4;
  }
  if (plVar7 != (longlong *)0x0) {
    return 1;
  }
  if ((*(uint *)((longlong)param_1 + 0x34) <= uVar6) &&
     (cVar2 = FUN_1450b0960(param_1 + 5), cVar2 == '\0')) {
    return 2;
  }
  if (uVar6 < *(uint *)((longlong)param_1 + 0x34)) {
    uVar5 = *(uint *)(param_1 + 6);
    *(uint *)(param_1 + 6) = uVar5 + 1;
    plVar7 = (longlong *)(param_1[5] + (ulonglong)uVar5 * 8);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = lVar1;
      return 1;
    }
  }
  return 2;
}



// FUNCTION 14538f8d0 FUN_14538f8d0 body=802 status=ok
// SIG undefined FUN_14538f8d0(void)

float FUN_14538f8d0(float param_1,float param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  
  switch(param_4) {
  case 0:
    param_1 = 1.0 - param_1;
    return (param_2 - param_3) * param_1 * param_1 * param_1 + param_3;
  case 1:
    fVar1 = param_1 * 1.5707964;
    fVar2 = 0.28647888 - fVar1 * 0.09118906;
    return ((param_1 * fVar2 * param_1 * 3.1415927 - fVar1 * fVar2 * param_1 * param_1) +
           (0.98676056 - fVar1 * 0.31409565) * fVar1) * (param_3 - param_2) + param_2;
  case 2:
    return (param_1 - 3.0) * param_1 * (param_2 - param_3) * 0.5 + param_2;
  case 3:
    break;
  case 4:
    return (param_3 - param_2) * param_1 + param_2;
  case 5:
    fVar2 = param_1 * param_1 * 9.869605;
    fVar2 = ((fVar2 * 0.000484834 - 0.01961384) * fVar2 + 0.2476748) * fVar2 + 0.00069670216;
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    return fVar2 * (param_3 - param_2) + param_2;
  case 6:
    return (param_1 + 1.0) * param_1 * (param_3 - param_2) * 0.5 + param_2;
  case 7:
    fVar2 = param_1 * param_1 * 2.4674013;
    return (((0.04148775 - fVar2 * 0.0012712094) * fVar2 - 0.49991244) * fVar2 + 0.9999933) *
           (param_2 - param_3) + param_3;
  case 8:
    return (param_3 - param_2) * param_1 * param_1 * param_1 + param_2;
  default:
    return 0.0;
  }
  if (0.5 < param_1) {
    fVar1 = 3.1415927 - param_1 * 3.1415927;
    fVar2 = fVar1 * fVar1;
    return (1.0 - (((0.0041531627 - fVar2 * 9.181827e-05) * fVar2 - 0.08332414) * fVar2 + 0.4999983)
                  * fVar1) * (param_3 - param_2) + param_2;
  }
  fVar2 = param_1 * param_1 * 9.869605;
  return (((0.0041531627 - fVar2 * 9.181827e-05) * fVar2 - 0.08332414) * fVar2 + 0.4999983) *
         param_1 * 3.1415927 * (param_3 - param_2) + param_2;
}



// FUNCTION 14538fc20 FUN_14538fc20 body=75 status=ok
// SIG undefined FUN_14538fc20(void)

undefined4 * FUN_14538fc20(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined2 *)((longlong)param_1 + 0x22) = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x15] = 0;
  *(undefined8 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  return param_1;
}



// FUNCTION 14538fc70 FUN_14538fc70 body=89 status=ok
// SIG undefined FUN_14538fc70(void)

void FUN_14538fc70(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    if (*(short *)(puVar1 + 2) == 1) {
      if ((void *)*puVar1 != (void *)0x0) {
        *(undefined4 *)(puVar1 + 1) = 0;
        AK::MemoryMgr::Free(0,(void *)*puVar1);
        *puVar1 = 0;
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      AK::MemoryMgr::Free(0,puVar1);
      return;
    }
    *(short *)(puVar1 + 2) = *(short *)(puVar1 + 2) + -1;
  }
  return;
}



// FUNCTION 14538fcd0 FUN_14538fcd0 body=174 status=ok
// SIG undefined FUN_14538fcd0(void)

void FUN_14538fcd0(undefined4 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    param_1[0xe] = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0xc));
    *(undefined8 *)(param_1 + 0xc) = 0;
    param_1[0xf] = 0;
  }
  if ((*(byte *)(param_1 + 10) & 2) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 4);
    if (puVar1 != (undefined8 *)0x0) {
      if (*(short *)(puVar1 + 2) == 1) {
        if ((void *)*puVar1 != (void *)0x0) {
          *(undefined4 *)(puVar1 + 1) = 0;
          AK::MemoryMgr::Free(0,(void *)*puVar1);
          *puVar1 = 0;
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        AK::MemoryMgr::Free(0,puVar1);
      }
      else {
        *(short *)(puVar1 + 2) = *(short *)(puVar1 + 2) + -1;
      }
    }
    *(undefined8 *)(param_1 + 4) = 0;
  }
  if (*(void **)(param_1 + 0x22) != (void *)0x0) {
    param_1[0x24] = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x22));
    *(undefined8 *)(param_1 + 0x22) = 0;
    param_1[0x25] = 0;
  }
  return;
}



// FUNCTION 14538fd80 FUN_14538fd80 body=7 status=ok
// SIG undefined FUN_14538fd80(void)

bool FUN_14538fd80(int *param_1)

{
  return *param_1 == 0;
}



// FUNCTION 14538fd90 FUN_14538fd90 body=270 status=ok
// SIG undefined FUN_14538fd90(void)

void FUN_14538fd90(longlong param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  plVar4 = *(longlong **)(param_1 + 0x30);
  fVar5 = (float)(param_2 - *(int *)(param_1 + 0x44)) * *(float *)(param_1 + 0x50);
  if (1.0 <= fVar5) {
    fVar5 = 1.0;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar7 = fVar5 * *(float *)(param_1 + 100) + *(float *)(param_1 + 0x58);
  fVar8 = fVar5 * *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x5c);
  fVar6 = fVar5 * *(float *)(param_1 + 0x6c) + *(float *)(param_1 + 0x60);
  fVar5 = *(float *)(param_1 + 0x70);
  fVar1 = *(float *)(param_1 + 0x74);
  fVar2 = *(float *)(param_1 + 0x78);
  if (plVar4 != plVar4 + *(uint *)(param_1 + 0x38)) {
    do {
      lVar3 = *plVar4;
      plVar4 = plVar4 + 1;
      lVar3 = *(longlong *)(lVar3 + 0x1c8);
      *(float *)(lVar3 + 4) = (fVar7 - fVar5) + *(float *)(lVar3 + 4);
      *(float *)(lVar3 + 8) = *(float *)(lVar3 + 8) + (fVar8 - fVar1);
      *(float *)(lVar3 + 0xc) = *(float *)(lVar3 + 0xc) + (fVar6 - fVar2);
    } while (plVar4 != (longlong *)
                       (*(longlong *)(param_1 + 0x30) + (ulonglong)*(uint *)(param_1 + 0x38) * 8));
  }
  *(ulonglong *)(param_1 + 0x70) = CONCAT44(fVar8,fVar7);
  *(float *)(param_1 + 0x78) = fVar6;
  if (*(uint *)(param_1 + 0x48) <= param_2) {
    FUN_1453906a0(param_1);
  }
  return;
}



// FUNCTION 14538fea0 FUN_14538fea0 body=496 status=ok
// SIG undefined FUN_14538fea0(void)

undefined8
FUN_14538fea0(int *param_1,undefined8 param_2,uint param_3,uint param_4,undefined1 param_5,
             ushort *param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong *plVar5;
  void *pvVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if (*param_1 != 0) {
    return 2;
  }
  *(undefined8 *)(param_1 + 2) = param_2;
  *(short *)((longlong)param_1 + 0x22) = (short)param_3;
  param_1[10] = param_4;
  *(undefined1 *)((longlong)param_1 + 0x2d) = param_5;
  lVar2 = *(longlong *)(param_6 + 4);
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 4);
    if (puVar3 != (undefined8 *)0x0) {
      if (*(short *)(puVar3 + 2) == 1) {
        if ((void *)*puVar3 != (void *)0x0) {
          *(undefined4 *)(puVar3 + 1) = 0;
          AK::MemoryMgr::Free(0,(void *)*puVar3);
          *puVar3 = 0;
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        }
        AK::MemoryMgr::Free(0,puVar3);
      }
      else {
        *(short *)(puVar3 + 2) = *(short *)(puVar3 + 2) + -1;
      }
    }
    *(longlong *)(param_1 + 4) = lVar2;
    *(short *)(lVar2 + 0x10) = *(short *)(lVar2 + 0x10) + 1;
    uVar1 = *param_6;
    *(ushort *)(param_1 + 8) = uVar1;
    *(ulonglong *)(param_1 + 6) = *(longlong *)(param_1 + 2) + (ulonglong)uVar1 * 0x18;
    return 1;
  }
  *(undefined8 *)(param_1 + 6) = param_2;
  *(undefined2 *)(param_1 + 8) = 0;
  plVar5 = AK::MemoryMgr::Malloc(0,0x18);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = 0;
    plVar5[1] = 0;
    *(undefined2 *)(plVar5 + 2) = 0;
    if (param_3 == 0) goto LAB_145390007;
    pvVar6 = AK::MemoryMgr::Malloc(0,(ulonglong)param_3);
    if (pvVar6 != (void *)0x0) {
      pvVar4 = (void *)*plVar5;
      if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar6)) {
        AK::MemoryMgr::Free(0,pvVar4);
      }
      *plVar5 = (longlong)pvVar6;
      *(uint *)((longlong)plVar5 + 0xc) = param_3;
      *(uint *)(plVar5 + 1) = param_3;
      uVar8 = 0;
      do {
        uVar7 = (int)uVar8 + 1;
        *(undefined1 *)(uVar8 + *plVar5) = 0;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < *(uint *)(plVar5 + 1));
      goto LAB_145390007;
    }
    if ((void *)*plVar5 != (void *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 0;
      AK::MemoryMgr::Free(0,(void *)*plVar5);
      *plVar5 = 0;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 0;
    }
    AK::MemoryMgr::Free(0,plVar5);
  }
  plVar5 = (longlong *)0x0;
LAB_145390007:
  puVar3 = *(undefined8 **)(param_1 + 4);
  if (puVar3 != (undefined8 *)0x0) {
    if (*(short *)(puVar3 + 2) == 1) {
      if ((void *)*puVar3 != (void *)0x0) {
        *(undefined4 *)(puVar3 + 1) = 0;
        AK::MemoryMgr::Free(0,(void *)*puVar3);
        *puVar3 = 0;
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      AK::MemoryMgr::Free(0,puVar3);
    }
    else {
      *(short *)(puVar3 + 2) = *(short *)(puVar3 + 2) + -1;
    }
  }
  *(longlong **)(param_1 + 4) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *(short *)(plVar5 + 2) = (short)plVar5[2] + 1;
  }
  if (*(longlong *)(param_1 + 4) != 0) {
    if ((param_4 & 1) != 0) {
      FUN_1453909b0(param_1);
    }
    return 1;
  }
  return 2;
}



// FUNCTION 145390090 FUN_145390090 body=4 status=ok
// SIG undefined FUN_145390090(void)

void FUN_145390090(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  return;
}



// FUNCTION 1453900a0 FUN_1453900a0 body=7 status=ok
// SIG undefined FUN_1453900a0(void)

void FUN_1453900a0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x80) = param_2;
  return;
}



// FUNCTION 1453900b0 FUN_1453900b0 body=4 status=ok
// SIG undefined FUN_1453900b0(void)

void FUN_1453900b0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2d) = param_2;
  return;
}



// FUNCTION 1453900c0 FUN_1453900c0 body=127 status=ok
// SIG undefined FUN_1453900c0(void)

void FUN_1453900c0(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x30);
  if (plVar4 != plVar4 + *(uint *)(param_1 + 0x38)) {
    do {
      lVar3 = *plVar4;
      plVar4 = plVar4 + 1;
      fVar1 = *(float *)(param_1 + 0x5c);
      fVar2 = *(float *)(param_1 + 0x60);
      lVar3 = *(longlong *)(lVar3 + 0x1c8);
      *(float *)(lVar3 + 4) = *(float *)(param_1 + 0x58) + *(float *)(lVar3 + 4);
      *(float *)(lVar3 + 8) = *(float *)(lVar3 + 8) + fVar1;
      *(float *)(lVar3 + 0xc) = *(float *)(lVar3 + 0xc) + fVar2;
    } while (plVar4 != (longlong *)
                       (*(longlong *)(param_1 + 0x30) + (ulonglong)*(uint *)(param_1 + 0x38) * 8));
  }
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x60);
  return;
}



// FUNCTION 145390140 FUN_145390140 body=441 status=ok
// SIG undefined FUN_145390140(void)

void FUN_145390140(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  plVar7 = *(longlong **)(param_2 + 0x10);
  if (plVar7 != plVar7 + *(uint *)(param_2 + 0x18)) {
    plVar1 = (longlong *)(param_1 + 0x88);
    do {
      plVar5 = (longlong *)*plVar1;
      uVar9 = (ulonglong)*(uint *)(param_1 + 0x90);
      lVar3 = *plVar7;
      plVar6 = plVar5 + uVar9 * 6;
      for (; (plVar5 != plVar6 && (*plVar5 != lVar3)); plVar5 = plVar5 + 6) {
      }
      plVar8 = plVar5 + 1;
      if (plVar5 == plVar6) {
        plVar8 = (longlong *)0x0;
      }
      if (plVar8 == (longlong *)0x0) {
        if (((uVar9 < *(uint *)(param_1 + 0x94)) || (cVar4 = FUN_145390b70(plVar1), cVar4 != '\0'))
           && (uVar9 < *(uint *)(param_1 + 0x94))) {
          uVar2 = *(uint *)(param_1 + 0x90);
          *(uint *)(param_1 + 0x90) = uVar2 + 1;
          plVar8 = (longlong *)((ulonglong)uVar2 * 0x30 + *plVar1);
          if (plVar8 != (longlong *)0x0) {
            *plVar8 = lVar3;
            plVar8 = plVar8 + 1;
            if (plVar8 != (longlong *)0x0) goto LAB_145390220;
          }
        }
      }
      else {
LAB_145390220:
        plVar5 = (longlong *)FUN_1450793c0(lVar3);
        if (plVar5 == (longlong *)0x0) {
          plVar5 = (longlong *)*plVar1;
          for (plVar6 = plVar5; plVar6 != plVar5 + (ulonglong)*(uint *)(param_1 + 0x90) * 6;
              plVar6 = plVar6 + 6) {
            if (*plVar6 == lVar3) {
              if (plVar6 < plVar5 + (ulonglong)(*(uint *)(param_1 + 0x90) - 1) * 6) {
                memmove(plVar6,plVar6 + 6,
                        (ulonglong)
                        (uint)((int)(((longlong)
                                      (plVar5 + (ulonglong)(*(uint *)(param_1 + 0x90) - 1) * 6) -
                                     (longlong)plVar6) / 0x30) * 0x30));
              }
              *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + -1;
              break;
            }
          }
        }
        else {
          lVar3 = plVar5[1];
          *plVar8 = *plVar5;
          plVar8[1] = lVar3;
          lVar3 = plVar5[3];
          plVar8[2] = plVar5[2];
          plVar8[3] = lVar3;
          *(int *)(plVar8 + 4) = (int)plVar5[4];
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != (longlong *)
                       (*(longlong *)(param_2 + 0x10) + (ulonglong)*(uint *)(param_2 + 0x18) * 8));
  }
  return;
}



// FUNCTION 145390300 FUN_145390300 body=350 status=ok
// SIG undefined FUN_145390300(void)

longlong * FUN_145390300(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  plVar5 = (longlong *)(param_1 + 0x88);
  plVar4 = (longlong *)*plVar5;
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x90);
  plVar7 = plVar4 + uVar8 * 6;
  for (; (plVar4 != plVar7 && (*plVar4 != param_2)); plVar4 = plVar4 + 6) {
  }
  plVar6 = plVar4 + 1;
  if (plVar4 == plVar7) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 == (longlong *)0x0) {
    if ((*(uint *)(param_1 + 0x94) <= uVar8) && (cVar3 = FUN_145390b70(plVar5), cVar3 == '\0')) {
      return (longlong *)0x0;
    }
    if (*(uint *)(param_1 + 0x94) <= uVar8) {
      return (longlong *)0x0;
    }
    uVar1 = *(uint *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x90) = uVar1 + 1;
    plVar6 = (longlong *)((ulonglong)uVar1 * 0x30 + *plVar5);
    if (plVar6 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    *plVar6 = param_2;
    plVar6 = plVar6 + 1;
    if (plVar6 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  }
  plVar5 = (longlong *)FUN_1450793c0(param_2);
  if (plVar5 != (longlong *)0x0) {
    lVar2 = plVar5[1];
    *plVar6 = *plVar5;
    plVar6[1] = lVar2;
    lVar2 = plVar5[3];
    plVar6[2] = plVar5[2];
    plVar6[3] = lVar2;
    *(int *)(plVar6 + 4) = (int)plVar5[4];
    return plVar6;
  }
  plVar5 = *(longlong **)(param_1 + 0x88);
  plVar4 = plVar5;
  while( true ) {
    if (plVar4 == plVar5 + (ulonglong)*(uint *)(param_1 + 0x90) * 6) {
      return (longlong *)0x0;
    }
    if (*plVar4 == param_2) break;
    plVar4 = plVar4 + 6;
  }
  if (plVar4 < plVar5 + (ulonglong)(*(uint *)(param_1 + 0x90) - 1) * 6) {
    memmove(plVar4,plVar4 + 6,
            (ulonglong)
            (uint)((int)(((longlong)(plVar5 + (ulonglong)(*(uint *)(param_1 + 0x90) - 1) * 6) -
                         (longlong)plVar4) / 0x30) * 0x30));
  }
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + -1;
  return (longlong *)0x0;
}



// FUNCTION 145390460 FUN_145390460 body=529 status=ok
// SIG undefined FUN_145390460(void)

undefined8 FUN_145390460(undefined4 *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 local_18;
  float local_10;
  
  plVar7 = *(longlong **)(param_1 + 6);
  if (plVar7 == (longlong *)0x0) {
    return 2;
  }
  *(undefined1 *)(param_1 + 0xb) = 1;
  if ((int)plVar7[1] < 1) {
    return 0x25;
  }
  *(undefined2 *)(param_1 + 9) = 0;
  pfVar4 = (float *)*plVar7;
  *(undefined2 *)(param_1 + 9) = 1;
  fVar1 = *pfVar4;
  param_1[0x16] = fVar1;
  fVar2 = pfVar4[1];
  param_1[0x17] = fVar2;
  fVar3 = pfVar4[2];
  param_1[0x18] = fVar3;
  iVar6 = ((int)pfVar4[3] + -1 + DAT_14c72f428) / DAT_14c72f428;
  if (iVar6 == 0) {
    iVar6 = 1;
  }
  param_1[0x13] = iVar6;
  if ((int)plVar7[1] < 2) {
    local_10 = 0.0;
    local_18._4_4_ = 0.0;
    local_18._0_4_ = 0.0;
  }
  else {
    local_18 = *(undefined8 *)(*plVar7 + 0x10);
    local_10 = *(float *)(*plVar7 + 0x18);
    if ((((fVar1 == (float)local_18) &&
         (local_18._4_4_ = (float)((ulonglong)local_18 >> 0x20), fVar2 == local_18._4_4_)) &&
        (fVar3 == local_10)) && ((int)plVar7[1] < 3)) {
      FUN_145390aa0(param_1,param_1 + 0x16);
      local_18._0_4_ = (float)param_1[0x16] - (float)param_1[0x16];
      local_18._4_4_ = (float)param_1[0x17] - (float)param_1[0x17];
      local_10 = (float)param_1[0x18] - (float)param_1[0x18];
    }
    else {
      FUN_145390aa0(param_1,param_1 + 0x16);
      FUN_145390aa0(param_1,&local_18);
      local_10 = local_10 - (float)param_1[0x18];
      local_18._4_4_ = local_18._4_4_ - (float)param_1[0x17];
      local_18._0_4_ = (float)local_18 - (float)param_1[0x16];
    }
  }
  param_1[0x19] = (float)local_18;
  param_1[0x1a] = local_18._4_4_;
  param_1[0x1b] = local_10;
  plVar7 = *(longlong **)(param_1 + 0xc);
  if (plVar7 != plVar7 + (uint)param_1[0xe]) {
    do {
      lVar5 = *plVar7;
      plVar7 = plVar7 + 1;
      fVar1 = (float)param_1[0x17];
      fVar2 = (float)param_1[0x18];
      lVar5 = *(longlong *)(lVar5 + 0x1c8);
      *(float *)(lVar5 + 4) = (float)param_1[0x16] + *(float *)(lVar5 + 4);
      *(float *)(lVar5 + 8) = *(float *)(lVar5 + 8) + fVar1;
      *(float *)(lVar5 + 0xc) = *(float *)(lVar5 + 0xc) + fVar2;
    } while (plVar7 != (longlong *)
                       (*(longlong *)(param_1 + 0xc) + (ulonglong)(uint)param_1[0xe] * 8));
  }
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 0x16);
  param_1[0x1e] = param_1[0x18];
  param_1[0x12] = param_1[0x13] + param_2;
  *param_1 = 1;
  param_1[0x11] = param_2;
  param_1[0x14] = 1.0 / (float)(uint)param_1[0x13];
  return 1;
}



// FUNCTION 145390680 FUN_145390680 body=10 status=ok
// SIG undefined FUN_145390680(void)

void FUN_145390680(undefined4 *param_1,undefined4 param_2)

{
  param_1[0x15] = param_2;
  *param_1 = 2;
  return;
}



// FUNCTION 145390690 FUN_145390690 body=16 status=ok
// SIG undefined FUN_145390690(void)

void FUN_145390690(undefined4 *param_1,int param_2)

{
  param_1[0x11] = param_1[0x11] + (param_2 - param_1[0x15]);
  param_1[0x12] = param_1[0x12] + (param_2 - param_1[0x15]);
  *param_1 = 1;
  return;
}



// FUNCTION 1453906a0 FUN_1453906a0 body=594 status=ok
// SIG undefined FUN_1453906a0(void)

void FUN_1453906a0(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  ushort uVar5;
  short sVar6;
  float fVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong lVar14;
  
  uVar5 = *(ushort *)(param_1 + 9);
  if ((int)(uint)uVar5 < (int)(*(longlong **)(param_1 + 6))[1]) {
    puVar13 = (undefined4 *)((ulonglong)uVar5 * 0x10 + **(longlong **)(param_1 + 6));
    *(ushort *)(param_1 + 9) = uVar5 + 1;
    param_1[0x16] = *puVar13;
    param_1[0x17] = puVar13[1];
    param_1[0x18] = puVar13[2];
    FUN_145390aa0(param_1,param_1 + 0x16);
    iVar9 = (puVar13[3] + -1 + DAT_14c72f428) / DAT_14c72f428;
    if (iVar9 == 0) {
      iVar9 = 1;
    }
    param_1[0x13] = iVar9;
  }
  lVar11 = *(longlong *)(param_1 + 6);
  if ((int)(uint)*(ushort *)(param_1 + 9) < *(int *)(lVar11 + 8)) {
LAB_1453907ab:
    uVar4 = *(undefined8 *)
             (**(longlong **)(param_1 + 6) + (ulonglong)*(ushort *)(param_1 + 9) * 0x10);
    fVar7 = *(float *)(**(longlong **)(param_1 + 6) + 8 + (ulonglong)*(ushort *)(param_1 + 9) * 0x10
                      );
    lVar12 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
    fVar1 = *(float *)(*(longlong *)(param_1 + 6) + 0xc);
    lVar14 = lVar12 * 0x5851f42d4c957f2d + 1;
    fVar2 = *(float *)(*(longlong *)(param_1 + 6) + 0x10);
    lVar11 = lVar14 * 0x5851f42d4c957f2d + 1;
    fVar3 = *(float *)(*(longlong *)(param_1 + 6) + 0x14);
    DAT_14c791078 = lVar11;
    param_1[0x11] = param_1[0x12];
    param_1[0x12] = param_1[0x12] + param_1[0x13];
    param_1[0x19] =
         (((float)(uint)((ulonglong)lVar12 >> 0x21) * 9.313226e-10 - 1.0) * fVar1 + (float)uVar4) -
         (float)param_1[0x16];
    param_1[0x1a] =
         (((float)(uint)((ulonglong)lVar11 >> 0x21) * 9.313226e-10 - 1.0) * fVar3 +
         (float)((ulonglong)uVar4 >> 0x20)) - (float)param_1[0x17];
    param_1[0x1b] =
         (((float)(uint)((ulonglong)lVar14 >> 0x21) * 9.313226e-10 - 1.0) * fVar2 + fVar7) -
         (float)param_1[0x18];
    param_1[0x14] = 1.0 / (float)(uint)param_1[0x13];
  }
  else {
    if (lVar11 != 0) {
      if ((param_1[10] & 1) == 0) {
        sVar6 = *(short *)(param_1 + 8);
        cVar8 = '\0';
        uVar10 = param_1[10] & 2;
        *(ushort *)(param_1 + 8) = sVar6 + 1U;
        if ((ushort)(sVar6 + 1U) < *(ushort *)((longlong)param_1 + 0x22)) {
          if (uVar10 != 0) {
            *(longlong *)(param_1 + 6) = lVar11 + 0x18;
          }
        }
        else {
          if (uVar10 != 0) {
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 2);
          }
          *(undefined2 *)(param_1 + 8) = 0;
          cVar8 = '\x01';
        }
      }
      else {
        cVar8 = FUN_1453909b0(param_1);
      }
      if (((*(byte *)(param_1 + 10) & 2) != 0) &&
         ((cVar8 == '\0' || (*(char *)((longlong)param_1 + 0x2d) != '\0')))) {
        *(undefined2 *)(param_1 + 9) = 0;
        goto LAB_1453907ab;
      }
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 145390900 FUN_145390900 body=167 status=ok
// SIG undefined FUN_145390900(void)

undefined8 FUN_145390900(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return 0x11;
  }
  if ((*(uint *)(param_1 + 0x28) & 1) == 0) {
    cVar1 = '\0';
    uVar2 = *(short *)(param_1 + 0x20) + 1;
    uVar3 = *(uint *)(param_1 + 0x28) & 2;
    *(ushort *)(param_1 + 0x20) = uVar2;
    if (uVar2 < *(ushort *)(param_1 + 0x22)) {
      if (uVar3 != 0) {
        *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 0x18;
      }
    }
    else {
      if (uVar3 != 0) {
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
      }
      *(undefined2 *)(param_1 + 0x20) = 0;
      cVar1 = '\x01';
    }
  }
  else {
    cVar1 = FUN_1453909b0(param_1);
  }
  if (((*(byte *)(param_1 + 0x28) & 2) != 0) &&
     ((cVar1 == '\0' || (*(char *)(param_1 + 0x2d) != '\0')))) {
    *(undefined2 *)(param_1 + 0x24) = 0;
    return 1;
  }
  return 0x11;
}



// FUNCTION 1453909b0 FUN_1453909b0 body=231 status=ok
// SIG undefined FUN_1453909b0(void)

ulonglong FUN_1453909b0(longlong param_1)

{
  ulonglong *puVar1;
  uint7 uVar3;
  ulonglong uVar2;
  uint uVar4;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar5;
  
  DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
  uVar2 = (DAT_14c791078 >> 0x21) / (ulonglong)*(ushort *)(param_1 + 0x22);
  uVar5 = (DAT_14c791078 >> 0x21) % (ulonglong)*(ushort *)(param_1 + 0x22);
  *(short *)(param_1 + 0x20) = (short)uVar5;
  if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
    uVar2 = *(ulonglong *)(param_1 + 8);
    *(ulonglong *)(param_1 + 0x18) = uVar2 + uVar5 * 0x18;
  }
  puVar1 = *(ulonglong **)(param_1 + 0x10);
  uVar3 = (uint7)(uVar2 >> 8);
  if (puVar1 == (ulonglong *)0x0) {
    return (ulonglong)uVar3 << 8;
  }
  uVar7 = 0;
  uVar6 = (uint)puVar1[1];
  uVar2 = CONCAT71(uVar3,1);
  uVar5 = uVar7;
  if (uVar6 != 0) {
    do {
      if (((char)uVar2 == '\0') || (uVar2 = *puVar1, *(char *)(uVar5 + uVar2) == '\0')) {
        uVar2 = uVar2 & 0xffffffffffffff00;
      }
      else {
        uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < uVar6);
  }
  if (((char)uVar2 != '\0') && (uVar6 != 0)) {
    do {
      *(undefined1 *)(uVar7 + *puVar1) = 0;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < (uint)puVar1[1]);
  }
  *(undefined1 *)((ulonglong)*(ushort *)(param_1 + 0x20) + **(longlong **)(param_1 + 0x10)) = 1;
  return uVar2;
}



// FUNCTION 145390aa0 FUN_145390aa0 body=202 status=ok
// SIG undefined FUN_145390aa0(void)

void FUN_145390aa0(longlong param_1,float *param_2)

{
  DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
  *param_2 = ((float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 9.313226e-10 - 1.0) *
             *(float *)(*(longlong *)(param_1 + 0x18) + 0xc) + *param_2;
  DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
  param_2[2] = ((float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 9.313226e-10 - 1.0) *
               *(float *)(*(longlong *)(param_1 + 0x18) + 0x10) + param_2[2];
  DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
  param_2[1] = ((float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 9.313226e-10 - 1.0) *
               *(float *)(*(longlong *)(param_1 + 0x18) + 0x14) + param_2[1];
  return;
}



// FUNCTION 145390b70 FUN_145390b70 body=210 status=ok
// SIG undefined FUN_145390b70(void)

undefined8 FUN_145390b70(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  void *pvVar7;
  longlong lVar8;
  __uint64 _Var9;
  ulonglong uVar10;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  iVar5 = (uVar3 >> 1) + uVar3;
  if (uVar3 == 0) {
    iVar5 = 1;
  }
  _Var9 = (ulonglong)(iVar5 + uVar3) * 0x30;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar7 = AK::MemoryMgr::Malloc(0,_Var9);
    if (pvVar7 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar7)) {
        if (uVar10 != 0) {
          lVar8 = 0;
          do {
            lVar4 = *param_1;
            uVar6 = ((undefined8 *)(lVar8 + lVar4))[1];
            *(undefined8 *)(lVar8 + (longlong)pvVar7) = *(undefined8 *)(lVar8 + lVar4);
            ((undefined8 *)(lVar8 + (longlong)pvVar7))[1] = uVar6;
            puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar4);
            uVar6 = puVar1[1];
            puVar2 = (undefined8 *)(lVar8 + 0x10 + (longlong)pvVar7);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar4);
            uVar6 = puVar1[1];
            puVar2 = (undefined8 *)(lVar8 + 0x20 + (longlong)pvVar7);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            uVar10 = uVar10 - 1;
            lVar8 = lVar8 + 0x30;
          } while (uVar10 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_145390c25;
    }
  }
  else {
    pvVar7 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var9);
    if (pvVar7 != (void *)0x0) {
LAB_145390c25:
      *param_1 = (longlong)pvVar7;
      *(uint *)((longlong)param_1 + 0xc) = iVar5 + uVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145390c50 FUN_145390c50 body=8 status=ok
// SIG undefined FUN_145390c50(void)

undefined ** FUN_145390c50(void)

{
  return &PTR_PTR_14c7389c0;
}



// FUNCTION 145390c60 FUN_145390c60 body=49 status=ok
// SIG undefined FUN_145390c60(void)

void FUN_145390c60(void)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(0,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_149d43e78;
    return;
  }
  return;
}



// FUNCTION 145390ca0 FUN_145390ca0 body=229 status=ok
// SIG undefined FUN_145390ca0(void)

ulonglong FUN_145390ca0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    local_1c = 0xffffffff;
    local_34 = 1;
    local_14 = 0;
    local_38 = 0;
    local_20 = 0;
    local_28 = 0;
    uVar3 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x20))
                      (AK::IAkStreamMgr::m_pStreamMgr,param_2,&local_38,2,puVar1,1);
    if ((int)uVar3 == 1) {
      uVar2 = (**(code **)(*(longlong *)*puVar1 + 0x38))
                        ((longlong *)*puVar1,param_3,param_4,1,100,0,local_res8);
      uVar3 = (ulonglong)uVar2;
      if (uVar2 != 1) {
        (**(code **)(*(longlong *)*puVar1 + 8))();
        *puVar1 = 0;
      }
    }
    return uVar3;
  }
  return 1;
}



// FUNCTION 145390d90 FUN_145390d90 body=165 status=ok
// SIG undefined FUN_145390d90(void)

int FUN_145390d90(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 local_res8 [8];
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 == (longlong *)0x0) {
    return 2;
  }
  iVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,0,0,0);
  if (iVar2 == 1) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
                      (*(longlong **)(param_1 + 8),param_2,param_3,1,100,0,local_res8);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  *(undefined8 *)(param_1 + 8) = 0;
  return iVar2;
}



// FUNCTION 145390e40 FUN_145390e40 body=46 status=ok
// SIG undefined FUN_145390e40(void)

void FUN_145390e40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [32];
  
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
            (*(longlong **)(param_1 + 8),param_2,param_3,
             CONCAT71((int7)((ulonglong)local_res8 >> 8),1),100,0,local_res8);
  return;
}



// FUNCTION 145390e70 FUN_145390e70 body=46 status=ok
// SIG undefined FUN_145390e70(void)

void FUN_145390e70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [32];
  
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
            (*(longlong **)(param_1 + 8),param_2,param_3,
             CONCAT71((int7)((ulonglong)local_res8 >> 8),1),100,0,local_res8);
  return;
}



// FUNCTION 145390ea0 FUN_145390ea0 body=62 status=ok
// SIG undefined FUN_145390ea0(void)

void FUN_145390ea0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = &PTR_FUN_149d43e78;
    if ((longlong *)param_1[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[1] + 8))();
      param_1[1] = 0;
    }
    AK::MemoryMgr::Free(0,param_1);
  }
  return;
}



// FUNCTION 145390ee0 FUN_145390ee0 body=32 status=ok
// SIG undefined FUN_145390ee0(void)

undefined8 FUN_145390ee0(undefined8 param_1)

{
  FUN_14555d370(param_1,2,0x10);
  return param_1;
}



// FUNCTION 145390f00 FUN_145390f00 body=10 status=ok
// SIG undefined FUN_145390f00(void)

void FUN_145390f00(undefined8 param_1)

{
  FUN_14555d410(param_1,0x10);
  return;
}



// FUNCTION 145390f10 FUN_145390f10 body=11 status=ok
// SIG undefined FUN_145390f10(void)

void FUN_145390f10(undefined8 param_1,undefined8 param_2)

{
  FUN_14555d470(param_1,param_2,0x10);
  return;
}



// FUNCTION 145390f30 FUN_145390f30 body=106 status=ok
// SIG undefined FUN_145390f30(void)

void FUN_145390f30(undefined8 param_1,code *param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  
  if ((param_2 != (code *)0x0) && (lVar1 = FUN_14555d5a0(param_1,param_6), lVar1 != 0)) {
    (*param_2)(param_3,param_4,param_5,param_6);
    FUN_14555d520(param_1,param_6);
  }
  return;
}



// FUNCTION 145390fa0 FUN_145390fa0 body=119 status=ok
// SIG undefined FUN_145390fa0(void)

undefined8 FUN_145390fa0(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  *(undefined4 *)(param_1 + 2) = 0;
  if (((0xb < *(uint *)(param_1 + 1)) || (10 < *(uint *)((longlong)param_1 + 0xc))) ||
     (uVar2 = FUN_145391460(param_1,0xb - *(uint *)((longlong)param_1 + 0xc)), (char)uVar2 != '\0'))
  {
    *(undefined4 *)(param_1 + 1) = 0xb;
    uVar3 = 0;
    do {
      uVar1 = (int)uVar3 + 1;
      *(undefined8 *)(*param_1 + uVar3 * 8) = 0;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 1));
    uVar2 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  return uVar2;
}



// FUNCTION 145391020 FUN_145391020 body=51 status=ok
// SIG undefined FUN_145391020(void)

void FUN_145391020(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 145391060 FUN_145391060 body=282 status=ok
// SIG undefined FUN_145391060(void)

void FUN_145391060(longlong *param_1,int *param_2,int *param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
  if (*(uint *)(param_1 + 1) != 0) {
    for (piVar6 = *(int **)(*param_1 +
                           ((ulonglong)
                            (uint)((int)((ulonglong)*(undefined8 *)param_2 >> 0x20) +
                                   (int)*(undefined8 *)(param_2 + 2) + (int)*(undefined8 *)param_2)
                           % (ulonglong)*(uint *)(param_1 + 1)) * 8); piVar6 != (int *)0x0;
        piVar6 = *(int **)(piVar6 + 4)) {
      if (((*piVar6 == *param_2) && (piVar6[1] == param_2[1])) &&
         (*(longlong *)(piVar6 + 2) == *(longlong *)(param_2 + 2))) goto LAB_1453910e2;
    }
    piVar6 = (int *)0x0;
LAB_1453910e2:
    if (piVar6 != (int *)0x0) goto LAB_14539115d;
  }
  iVar3 = param_2[1];
  iVar4 = param_2[2];
  iVar5 = param_2[3];
  puVar1 = (uint *)(param_1 + 2);
  *param_3 = *param_2;
  param_3[1] = iVar3;
  param_3[2] = iVar4;
  param_3[3] = iVar5;
  if ((*(uint *)(param_1 + 1) == 0) || (0.9 < (float)*puVar1 / (float)*(uint *)(param_1 + 1))) {
    FUN_1453912d0(param_1);
  }
  if (*(uint *)(param_1 + 1) != 0) {
    uVar2 = (ulonglong)
            (uint)((int)((ulonglong)*(undefined8 *)param_3 >> 0x20) +
                   (int)*(undefined8 *)(param_3 + 2) + (int)*(undefined8 *)param_3) %
            (ulonglong)*(uint *)(param_1 + 1);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(*param_1 + uVar2 * 8);
    *(int **)(*param_1 + uVar2 * 8) = param_3;
    *puVar1 = *puVar1 + 1;
  }
LAB_14539115d:
                    /* WARNING: Could not recover jumptable at 0x000145391173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
  return;
}



// FUNCTION 145391180 FUN_145391180 body=149 status=ok
// SIG undefined FUN_145391180(void)

int * FUN_145391180(longlong *param_1,int *param_2)

{
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
  if (*(uint *)(param_1 + 1) != 0) {
    for (piVar1 = *(int **)(*param_1 +
                           ((ulonglong)
                            (uint)((int)((ulonglong)*(undefined8 *)param_2 >> 0x20) +
                                   (int)*(undefined8 *)(param_2 + 2) + (int)*(undefined8 *)param_2)
                           % (ulonglong)*(uint *)(param_1 + 1)) * 8); piVar1 != (int *)0x0;
        piVar1 = *(int **)(piVar1 + 4)) {
      if (((*piVar1 == *param_2) && (piVar1[1] == param_2[1])) &&
         (*(longlong *)(piVar1 + 2) == *(longlong *)(param_2 + 2))) goto LAB_1453911fa;
    }
  }
  piVar1 = (int *)0x0;
LAB_1453911fa:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
  return piVar1;
}



// FUNCTION 145391220 FUN_145391220 body=162 status=ok
// SIG undefined FUN_145391220(void)

void FUN_145391220(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
  if (*(uint *)(param_1 + 1) != 0) {
    iVar5 = (int)*param_2;
    puVar1 = (undefined8 *)
             (*param_1 +
             ((ulonglong)(uint)((int)((ulonglong)*param_2 >> 0x20) + iVar5 + (int)param_2[1]) %
             (ulonglong)*(uint *)(param_1 + 1)) * 8);
    piVar4 = (int *)*puVar1;
    piVar3 = (int *)0x0;
    while (piVar2 = piVar4, piVar2 != (int *)0x0) {
      if (((*piVar2 == iVar5) && (piVar2[1] == *(int *)((longlong)param_2 + 4))) &&
         (*(longlong *)(piVar2 + 2) == param_2[1])) {
        if (piVar3 == (int *)0x0) {
          *puVar1 = *(undefined8 *)(piVar2 + 4);
        }
        else {
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(piVar2 + 4);
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + -1;
        break;
      }
      piVar3 = piVar2;
      piVar4 = *(int **)(piVar2 + 4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001453912bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7fdf50);
  return;
}



// FUNCTION 1453912d0 FUN_1453912d0 body=399 status=ok
// SIG undefined FUN_1453912d0(void)

undefined8 FUN_1453912d0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  
  uVar11 = 0;
  puVar14 = &DAT_149d43ea0;
  do {
    uVar2 = *puVar14;
    uVar12 = (ulonglong)uVar2;
    if (param_2 < uVar2) {
      if (uVar2 == 0) {
        return 2;
      }
      uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
      puVar5 = (undefined8 *)*param_1;
      uVar11 = *(uint *)(param_1 + 1);
      uVar16 = (ulonglong)uVar11;
      param_1[1] = 0;
      *param_1 = 0;
      pvVar9 = AK::MemoryMgr::Malloc(0,uVar12 * 8);
      pvVar6 = (void *)*param_1;
      if (pvVar9 == (void *)0x0) {
        if (pvVar6 != (void *)0x0) {
          *(undefined4 *)(param_1 + 1) = 0;
          AK::MemoryMgr::Free(0,pvVar6);
        }
        *param_1 = (longlong)puVar5;
        uVar10 = 2;
        *(uint *)(param_1 + 1) = uVar11;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
      }
      else {
        if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar9)) {
          AK::MemoryMgr::Free(0,pvVar6);
        }
        *param_1 = (longlong)pvVar9;
        *(uint *)((longlong)param_1 + 0xc) = uVar2;
        uVar13 = uVar12;
        do {
          uVar4 = *(uint *)(param_1 + 1);
          if (uVar4 < (uint)uVar12) {
            *(uint *)(param_1 + 1) = uVar4 + 1;
            puVar15 = (undefined8 *)(*param_1 + (ulonglong)uVar4 * 8);
            if (puVar15 != (undefined8 *)0x0) {
              *puVar15 = 0;
              uVar12 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
            }
          }
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        puVar15 = puVar5;
        if (uVar11 != 0) {
          do {
            puVar8 = (undefined8 *)*puVar15;
            while (puVar8 != (undefined8 *)0x0) {
              puVar7 = (undefined8 *)puVar8[2];
              lVar1 = ((ulonglong)
                       (uint)((int)((ulonglong)*puVar8 >> 0x20) + (int)puVar8[1] + (int)*puVar8) %
                      (ulonglong)uVar2) * 8;
              puVar8[2] = *(undefined8 *)(lVar1 + *param_1);
              *(undefined8 **)(lVar1 + *param_1) = puVar8;
              puVar8 = puVar7;
            }
            uVar16 = uVar16 - 1;
            puVar15 = puVar15 + 1;
          } while (uVar16 != 0);
        }
        if (puVar5 != (undefined8 *)0x0) {
          AK::MemoryMgr::Free(0,puVar5);
        }
        uVar10 = 1;
      }
      return uVar10;
    }
    uVar11 = uVar11 + 1;
    puVar14 = puVar14 + 1;
  } while (uVar11 < 0x1b);
  return 2;
}



// FUNCTION 145391460 FUN_145391460 body=170 status=ok
// SIG undefined FUN_145391460(void)

undefined8 FUN_145391460(longlong *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  __uint64 _Var3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar1 = *(uint *)(param_1 + 1);
  _Var3 = (ulonglong)uVar5 << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(0,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar2)) {
      uVar4 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar2 + uVar4 * 8) = *(undefined8 *)(*param_1 + uVar4 * 8);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar2 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 145391520 FUN_145391520 body=163 status=ok
// SIG undefined FUN_145391520(void)

undefined8 * FUN_145391520(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar1 = AK::MemoryMgr::Malloc(2,0x220);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1453734e0(puVar1);
    lVar3 = 0x13;
    *puVar1 = &PTR_FUN_149d43f10;
    puVar2 = puVar1 + 6;
    lVar4 = 0;
    do {
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 1;
      puVar2 = puVar2 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    puVar1[0x42] = 0;
    lVar3 = (longlong)puVar1 + 0x3c;
    puVar1[0x43] = 0;
    do {
      *(undefined1 *)((longlong)puVar1 + lVar4 + 0x1f8) = 0xff;
      lVar4 = lVar4 + 1;
      *(undefined8 *)(lVar3 + -0xc) = 0;
      *(undefined8 *)(lVar3 + -4) = 0;
      *(undefined4 *)(lVar3 + 4) = 1;
      lVar3 = lVar3 + 0x18;
    } while (lVar4 < 0x13);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1453915d0 FUN_1453915d0 body=1006 status=ok
// SIG undefined FUN_1453915d0(void)

/* WARNING: Removing unreachable block (ram,0x000145391992) */

undefined8 FUN_1453915d0(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  void *pvVar4;
  undefined8 uVar5;
  uint uVar6;
  float *pfVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  byte bVar11;
  float *local_res10;
  int local_res18 [4];
  
  bVar1 = *(byte *)(param_1 + 0x20b);
  bVar11 = -(*(char *)(param_2 + 4) != '\0') & 2;
  *(byte *)(param_1 + 0x20b) = bVar11 | bVar1 & 0xfd;
  cVar2 = *(char *)(param_2 + 5);
  pfVar7 = (float *)(param_2 + 6);
  *(byte *)(param_1 + 0x20b) = cVar2 != '\0' | bVar11 | bVar1 & 0xfc;
  if (cVar2 != '\0') {
    *(float *)(param_1 + 0x18) = *pfVar7 * 0.008726646;
    *(float *)(param_1 + 0x1c) = *(float *)(param_2 + 10) * 0.008726646;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0xe);
    pfVar7 = (float *)(param_2 + 0x1a);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x12);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x16);
  }
  local_res10 = pfVar7 + 5;
  *(undefined1 *)(param_1 + 0x1f8) = *(undefined1 *)pfVar7;
  *(undefined1 *)(param_1 + 0x1f9) = *(undefined1 *)((longlong)pfVar7 + 1);
  *(undefined1 *)(param_1 + 0x1fa) = *(undefined1 *)((longlong)pfVar7 + 2);
  *(undefined1 *)(param_1 + 0x1fb) = *(undefined1 *)((longlong)pfVar7 + 3);
  *(undefined1 *)(param_1 + 0x1fc) = *(undefined1 *)(pfVar7 + 1);
  *(undefined1 *)(param_1 + 0x1fd) = *(undefined1 *)((longlong)pfVar7 + 5);
  *(undefined1 *)(param_1 + 0x1fe) = *(undefined1 *)((longlong)pfVar7 + 6);
  *(undefined1 *)(param_1 + 0x1ff) = *(undefined1 *)((longlong)pfVar7 + 7);
  *(undefined1 *)(param_1 + 0x200) = *(undefined1 *)(pfVar7 + 2);
  *(undefined1 *)(param_1 + 0x201) = *(undefined1 *)((longlong)pfVar7 + 9);
  *(undefined1 *)(param_1 + 0x202) = *(undefined1 *)((longlong)pfVar7 + 10);
  *(undefined1 *)(param_1 + 0x203) = *(undefined1 *)((longlong)pfVar7 + 0xb);
  *(undefined1 *)(param_1 + 0x204) = *(undefined1 *)(pfVar7 + 3);
  *(undefined1 *)(param_1 + 0x205) = *(undefined1 *)((longlong)pfVar7 + 0xd);
  *(undefined1 *)(param_1 + 0x206) = *(undefined1 *)((longlong)pfVar7 + 0xe);
  *(undefined1 *)(param_1 + 0x207) = *(undefined1 *)((longlong)pfVar7 + 0xf);
  *(undefined1 *)(param_1 + 0x208) = *(undefined1 *)(pfVar7 + 4);
  *(undefined1 *)(param_1 + 0x209) = *(undefined1 *)((longlong)pfVar7 + 0x11);
  *(undefined1 *)(param_1 + 0x20a) = *(undefined1 *)((longlong)pfVar7 + 0x12);
  uVar10 = 0;
  bVar1 = *(byte *)((longlong)pfVar7 + 0x13);
  if (bVar1 == 0) {
    return 2;
  }
  plVar9 = (longlong *)(param_1 + 0x30);
  do {
    uVar3 = *(ushort *)((longlong)local_res10 + 1);
    pfVar7 = (float *)((longlong)local_res10 + 3);
    bVar11 = *(byte *)local_res10;
    local_res10 = pfVar7;
    local_res18[0] = param_3;
    if ((void *)*plVar9 != (void *)0x0) {
      AK::MemoryMgr::Free(0,(void *)*plVar9);
    }
    *plVar9 = 0;
    plVar9[1] = 0;
    *(undefined4 *)(plVar9 + 2) = 1;
    if ((pfVar7 == (float *)0x0) || (uVar3 == 0)) {
      return 0x1f;
    }
    *(undefined4 *)(plVar9 + 2) = 1;
    *(uint *)(plVar9 + 1) = uVar3 + 2;
    pvVar4 = AK::MemoryMgr::Malloc(0,(ulonglong)((uVar3 + 2) * 0x14));
    *plVar9 = (longlong)pvVar4;
    if (pvVar4 == (void *)0x0) {
      *(undefined4 *)(plVar9 + 1) = 0;
      return 0x34;
    }
    *(uint *)((longlong)plVar9 + 0xc) = (uint)bVar11;
    memcpy((void *)((longlong)pvVar4 + 0xc),pfVar7,(ulonglong)(((uint)uVar3 + (uint)uVar3 * 2) * 4))
    ;
    *(undefined4 *)(*plVar9 + 8) = 9;
    *(undefined4 *)*plVar9 = 0xff7fffff;
    *(undefined4 *)(*plVar9 + 4) = *(undefined4 *)(*plVar9 + 0x10);
    *(undefined4 *)(*plVar9 + 8 + (ulonglong)((int)plVar9[1] - 1) * 0xc) = 9;
    *(undefined4 *)(*plVar9 + (ulonglong)((int)plVar9[1] - 1) * 0xc) = 0x7f7fffff;
    *(undefined4 *)(*plVar9 + 4 + (ulonglong)((int)plVar9[1] - 1) * 0xc) =
         *(undefined4 *)(*plVar9 + 4 + (ulonglong)((int)plVar9[1] - 2) * 0xc);
    FUN_1450c8860(plVar9);
    if ((((*(byte *)(param_1 + 0x1f8) == uVar10) || (*(byte *)(param_1 + 0x1f9) == uVar10)) ||
        (*(byte *)(param_1 + 0x1fa) == uVar10)) ||
       (((*(byte *)(param_1 + 0x1ff) == uVar10 || (*(byte *)(param_1 + 0x202) == uVar10)) ||
        ((*(byte *)(param_1 + 0x205) == uVar10 || (*(byte *)(param_1 + 0x208) == uVar10)))))) {
      if (*(int *)((longlong)plVar9 + 0xc) == 0) {
        *(undefined4 *)((longlong)plVar9 + 0xc) = 4;
      }
      else if (*(int *)((longlong)plVar9 + 0xc) == 2) {
        uVar8 = 0;
        if ((int)plVar9[1] != 0) {
          do {
            uVar6 = (int)uVar8 + 1;
            *(float *)(*plVar9 + 4 + uVar8 * 0xc) = *(float *)(*plVar9 + 4 + uVar8 * 0xc) + 1.0;
            uVar8 = (ulonglong)uVar6;
          } while (uVar6 < *(uint *)(plVar9 + 1));
        }
        *(undefined4 *)((longlong)plVar9 + 0xc) = 0;
        FUN_1450c8860(plVar9);
      }
    }
    local_res10 = pfVar7 + (ulonglong)uVar3 * 3;
    uVar10 = uVar10 + 1;
    plVar9 = plVar9 + 3;
    param_3 = param_3 + (uint)uVar3 * -0xc;
  } while (uVar10 < bVar1);
  local_res18[0] = param_3;
  uVar5 = FUN_145391a70(&local_res10,local_res18,param_1);
  return uVar5;
}



// FUNCTION 1453919c0 FUN_1453919c0 body=170 status=ok
// SIG undefined FUN_1453919c0(void)

undefined8 * FUN_1453919c0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_149d43f10;
  FUN_1453526b0();
  puVar1 = param_1 + 6;
  lVar2 = 0x13;
  do {
    if ((void *)*puVar1 != (void *)0x0) {
      AK::MemoryMgr::Free(0,(void *)*puVar1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 1;
    puVar1 = puVar1 + 3;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1453525f0(param_1 + 0x42);
  FUN_145373500(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 145391a70 FUN_145391a70 body=549 status=ok
// SIG undefined FUN_145391a70(void)

undefined8 FUN_145391a70(longlong *param_1,int *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  bool bVar8;
  char cVar9;
  void *pvVar10;
  byte *pbVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 local_res8;
  
  uVar4 = *(ushort *)*param_1;
  uVar15 = (uint)uVar4;
  *param_1 = (longlong)((ushort *)*param_1 + 1);
  if (uVar4 == 0) {
    return 1;
  }
  plVar1 = (longlong *)(param_3 + 0x210);
  if (uVar15 <= *(uint *)(param_3 + 0x21c)) goto LAB_145391b4c;
  uVar14 = *(uint *)(param_3 + 0x218);
  if ((void *)*plVar1 == (void *)0x0) {
    pvVar10 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar4 << 3);
    bVar8 = false;
    if (pvVar10 != (void *)0x0) {
      if (((void *)*plVar1 != (void *)0x0) && ((void *)*plVar1 != pvVar10)) {
        uVar13 = 0;
        if ((ulonglong)uVar14 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar10 + uVar13 * 8) = *(undefined8 *)(*plVar1 + uVar13 * 8);
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar14);
        }
        AK::MemoryMgr::Free(0,(void *)*plVar1);
      }
      goto LAB_145391b2d;
    }
  }
  else {
    pvVar10 = AK::MemoryMgr::Realloc(0,(void *)*plVar1,(ulonglong)uVar4 << 3);
    if (pvVar10 == (void *)0x0) {
      bVar8 = false;
    }
    else {
LAB_145391b2d:
      *plVar1 = (longlong)pvVar10;
      bVar8 = true;
      *(uint *)(param_3 + 0x21c) = uVar15;
    }
  }
  if (!bVar8) {
    return 0x34;
  }
LAB_145391b4c:
  uVar14 = 0;
  if (uVar4 != 0) {
    do {
      puVar7 = (undefined4 *)*param_1;
      uVar5 = *puVar7;
      *param_1 = (longlong)(puVar7 + 1);
      uVar2 = *(undefined1 *)(puVar7 + 1);
      *param_1 = (longlong)puVar7 + 5;
      cVar9 = *(char *)((longlong)puVar7 + 5);
      *param_1 = (longlong)puVar7 + 6;
      bVar3 = *(byte *)((longlong)puVar7 + 6);
      pbVar11 = (byte *)((longlong)puVar7 + 7);
      *param_1 = (longlong)pbVar11;
      uVar16 = bVar3 & 0x7f;
      while ((char)bVar3 < '\0') {
        bVar3 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        *param_1 = (longlong)pbVar11;
        uVar16 = bVar3 & 0x7f | uVar16 << 7;
      }
      uVar6 = *(undefined4 *)pbVar11;
      *param_1 = (longlong)(pbVar11 + 4);
      bVar3 = pbVar11[4];
      *param_1 = (longlong)(pbVar11 + 5);
      uVar4 = *(ushort *)(pbVar11 + 5);
      *param_1 = (longlong)(pbVar11 + 7);
      if ((cVar9 == '\x06') && (cVar9 = '\x02', DAT_14c791034 == 1)) {
        cVar9 = '\x05';
      }
      local_res8 = 0;
      uVar12 = FUN_145352770(plVar1,1,*(undefined4 *)(param_3 + 0x10),uVar5,uVar2,cVar9,uVar16,uVar6
                             ,bVar3,pbVar11 + 7,(uint)uVar4,&local_res8);
      if ((int)uVar12 != 1) {
        return uVar12;
      }
      uVar14 = uVar14 + 1;
      *param_1 = *param_1 + (ulonglong)uVar4 * 0xc;
      *param_2 = *param_2 + (uint)uVar4 * -0xc;
    } while (uVar14 < uVar15);
  }
  return 1;
}



// FUNCTION 145391cb0 FUN_145391cb0 body=76 status=ok
// SIG undefined FUN_145391cb0(void)

undefined8 * FUN_145391cb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(2,0x28);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1453734e0(puVar1);
    puVar1[4] = 0;
    *puVar1 = &PTR_FUN_149d43f38;
    puVar1[3] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145391d00 FUN_145391d00 body=5 status=ok
// SIG undefined FUN_145391d00(void)

void FUN_145391d00(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 145391d10 FUN_145391d10 body=9 status=ok
// SIG undefined FUN_145391d10(void)

void FUN_145391d10(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 145391d20 FUN_145391d20 body=37 status=ok
// SIG undefined FUN_145391d20(void)

void FUN_145391d20(longlong param_1,longlong param_2)

{
  longlong local_res10;
  undefined1 local_res18 [16];
  
  local_res10 = param_2 + 4;
  FUN_145391d50(param_1 + 0x18,&local_res10,local_res18);
  return;
}



// FUNCTION 145391d50 FUN_145391d50 body=196 status=ok
// SIG undefined FUN_145391d50(void)

undefined4 FUN_145391d50(undefined8 *param_1,longlong *param_2)

{
  size_t sVar1;
  ushort uVar2;
  void *pvVar3;
  ushort *puVar4;
  uint uVar5;
  
  uVar2 = *(ushort *)*param_2;
  *param_2 = (longlong)((ushort *)*param_2 + 1);
  pvVar3 = (void *)*param_1;
  if (uVar2 == 0) {
    if (pvVar3 != (void *)0x0) {
      AK::MemoryMgr::Free(0,pvVar3);
      *param_1 = 0;
    }
  }
  else {
    uVar5 = (uint)uVar2 * 2 + 5 & 0xfffffffc;
    puVar4 = AK::MemoryMgr::Realloc(0,pvVar3,(ulonglong)(uVar5 + (uint)uVar2 * 4));
    if (puVar4 == (ushort *)0x0) {
      return 0x34;
    }
    *puVar4 = uVar2;
    sVar1 = (ulonglong)uVar2 * 2;
    memcpy(puVar4 + 1,(void *)*param_2,sVar1);
    *param_2 = *param_2 + sVar1;
    sVar1 = (ulonglong)uVar2 * 4;
    memcpy((void *)((ulonglong)uVar5 + (longlong)puVar4),(void *)*param_2,sVar1);
    *param_2 = *param_2 + sVar1;
    *param_1 = puVar4;
  }
  return 1;
}



// FUNCTION 145391e20 FUN_145391e20 body=80 status=ok
// SIG undefined FUN_145391e20(void)

longlong FUN_145391e20(longlong param_1,uint param_2)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_145373500(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 145391e70 FUN_145391e70 body=124 status=ok
// SIG undefined FUN_145391e70(void)

void FUN_145391e70(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149d43f58;
  param_1[1] = &PTR_FUN_149d441d0;
  param_1[2] = &PTR_LAB_149d441d8;
  param_1[5] = &PTR_LAB_149d44200;
  puVar1 = (undefined8 *)param_1[0x1f];
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (param_1 + 0x1e != puVar1) {
      AK::MemoryMgr::Free(0,puVar1);
    }
    param_1[0x1f] = 0;
    *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  }
  FUN_14536d640(param_1);
  return;
}



// FUNCTION 145391ef0 FUN_145391ef0 body=52 status=ok
// SIG undefined FUN_145391ef0(void)

undefined8 FUN_145391ef0(undefined8 param_1,ulonglong param_2)

{
  FUN_145391e70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 145391f30 FUN_145391f30 body=95 status=ok
// SIG undefined FUN_145391f30(void)

undefined8 * FUN_145391f30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d44280;
  param_1[1] = &PTR_FUN_149d444f8;
  param_1[2] = &PTR_LAB_149d44500;
  param_1[5] = &PTR_LAB_149d44528;
  FUN_145391e70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 145391f90 FUN_145391f90 body=172 status=ok
// SIG undefined FUN_145391f90(void)

/* WARNING: Removing unreachable block (ram,0x000145392007) */
/* WARNING: Removing unreachable block (ram,0x000145392010) */
/* WARNING: Removing unreachable block (ram,0x000145392015) */

undefined8 * FUN_145391f90(void)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(2,0x108);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14536d5e0(puVar1);
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    *puVar1 = &PTR_FUN_149d445a8;
    puVar1[1] = &PTR_FUN_149d44820;
    puVar1[2] = &PTR_LAB_149d44828;
    puVar1[5] = &PTR_LAB_149d44850;
    *(byte *)((longlong)puVar1 + 0xd4) = *(byte *)((longlong)puVar1 + 0xd4) & 0x7f;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145392040 FUN_145392040 body=116 status=ok
// SIG undefined FUN_145392040(void)

undefined4 FUN_145392040(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  if (*(longlong *)(param_2 + 0x78) != 0) {
    return 0x15;
  }
  iVar1 = *(int *)(param_2 + 0x20);
  lVar2 = FUN_14508a500(param_1 + 0xf0,iVar1);
  if (lVar2 != 0) {
    return 5;
  }
  uVar3 = 1;
  if (*(int *)(param_1 + 0x20) == iVar1) {
    uVar3 = 0x17;
  }
  return uVar3;
}



// FUNCTION 1453920c0 FUN_1453920c0 body=6 status=ok
// SIG undefined FUN_1453920c0(void)

undefined8 FUN_1453920c0(void)

{
  return 1;
}



// FUNCTION 1453920e0 FUN_1453920e0 body=271 status=ok
// SIG undefined FUN_1453920e0(void)

int FUN_1453920e0(longlong *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uStackX_c;
  uint *local_res10;
  undefined4 local_res18 [2];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  iVar6 = (**(code **)(*param_1 + 0x70))();
  if (iVar6 != 1) {
    lVar3 = param_1[4];
    uVar7 = (**(code **)(*param_1 + 0x70))();
    FUN_1450b8920(DAT_14c790fe0,(int)lVar3,1,uVar7);
    return 0x5b;
  }
  local_res10 = local_res10 + 1;
  iVar6 = FUN_1450d7ad0(param_1,&local_res10,local_res18,0);
  if (iVar6 == 1) {
    iVar6 = 1;
    uVar1 = *local_res10;
    local_res10 = local_res10 + 1;
    if (uVar1 != 0) {
      if ((*(uint *)((longlong)param_1 + 0x104) < uVar1) &&
         (cVar5 = FUN_1450c15a0(param_1 + 0x1e,uVar1 - *(uint *)((longlong)param_1 + 0x104)),
         cVar5 == '\0')) {
        return 0x34;
      }
      uVar8 = 0;
      if (uVar1 != 0) {
        do {
          uVar4 = uStackX_c;
          uVar2 = *local_res10;
          local_res10 = local_res10 + 1;
          uStackX_c = uStackX_c & 0xffffff00;
          iVar6 = (**(code **)(*param_1 + 0x40))(param_1,CONCAT44(uVar4,uVar2) & 0xffffff00ffffffff)
          ;
          if ((iVar6 != 1) && (iVar6 != 0xf)) {
            return iVar6;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar1);
      }
    }
  }
  return iVar6;
}



// FUNCTION 1453921f0 FUN_1453921f0 body=95 status=ok
// SIG undefined FUN_1453921f0(void)

undefined8 * FUN_1453921f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d44280;
  param_1[1] = &PTR_FUN_149d444f8;
  param_1[2] = &PTR_LAB_149d44500;
  param_1[5] = &PTR_LAB_149d44528;
  FUN_145391e70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 1453922a0 FUN_1453922a0 body=152 status=ok
// SIG undefined FUN_1453922a0(void)

/* WARNING: Removing unreachable block (ram,0x000145392303) */
/* WARNING: Removing unreachable block (ram,0x00014539230c) */
/* WARNING: Removing unreachable block (ram,0x000145392311) */

undefined8 * FUN_1453922a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(2,0x1a0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14508ebe0(puVar1);
    *puVar1 = &PTR_FUN_149d448d0;
    puVar1[1] = &PTR_FUN_149d44b38;
    puVar1[2] = &PTR_LAB_149d44b40;
    puVar1[5] = &PTR_LAB_149d44b68;
    *(byte *)((longlong)puVar1 + 0xd4) = *(byte *)((longlong)puVar1 + 0xd4) & 0x7f | 0x80;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145392340 FUN_145392340 body=6 status=ok
// SIG undefined FUN_145392340(void)

undefined8 FUN_145392340(void)

{
  return 10;
}



// FUNCTION 145392350 FUN_145392350 body=95 status=ok
// SIG undefined FUN_145392350(void)

undefined8 * FUN_145392350(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d448d0;
  param_1[1] = &PTR_FUN_149d44b38;
  param_1[2] = &PTR_LAB_149d44b40;
  param_1[5] = &PTR_LAB_149d44b68;
  FUN_14508ed00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 1453923d0 FUN_1453923d0 body=73 status=ok
// SIG undefined FUN_1453923d0(void)

longlong * FUN_1453923d0(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  piVar1 = (int *)*param_2;
  if (*param_1 != 0) {
    FUN_144d4a460();
  }
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  *param_1 = (longlong)piVar1;
  return param_1;
}



// FUNCTION 145392420 FUN_145392420 body=465 status=ok
// SIG undefined FUN_145392420(void)

undefined4 * FUN_145392420(longlong *param_1,ulonglong param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = *(uint *)(param_1 + 1);
  iVar2 = 0;
  if (uVar9 != 0) {
    uVar8 = (param_2 >> 0x20 & 0xff) << 0x20 | param_2 & 0xffffffff;
    do {
      iVar7 = (uVar9 >> 1) + iVar2;
      lVar6 = (longlong)iVar7 * 8;
      uVar3 = *(ulonglong *)(lVar6 + *param_1);
      uVar3 = (uVar3 >> 0x20 & 0xff) << 0x20 | uVar3 & 0xffffffff;
      if (uVar3 == uVar8) {
        *param_3 = 1;
        lVar4 = *param_1;
        lVar6 = lVar6 + lVar4;
        goto LAB_1453924d1;
      }
      uVar10 = uVar9 - 1;
      iVar7 = iVar7 + 1;
      if (uVar8 <= uVar3) {
        uVar10 = uVar9;
        iVar7 = iVar2;
      }
      iVar2 = iVar7;
      uVar9 = uVar10 >> 1;
    } while (uVar9 != 0);
  }
  *param_3 = 0;
  lVar4 = *param_1;
  lVar6 = lVar4 + (longlong)iVar2 * 8;
LAB_1453924d1:
  uVar9 = *(uint *)(param_1 + 1);
  uVar10 = *(uint *)((longlong)param_1 + 0xc);
  if (lVar6 == 0) {
    if (uVar10 <= uVar9) {
      if (uVar10 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = (uVar10 >> 1) + uVar10;
      }
      cVar1 = FUN_145362ff0(param_1,iVar2);
      if (cVar1 == '\0') {
        return (undefined4 *)0x0;
      }
    }
    if (uVar9 < *(uint *)((longlong)param_1 + 0xc)) {
      uVar9 = *(uint *)(param_1 + 1);
      puVar5 = (undefined4 *)(*param_1 + (ulonglong)uVar9 * 8);
      *(uint *)(param_1 + 1) = uVar9 + 1;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0;
        *(undefined1 *)(puVar5 + 1) = 8;
        return puVar5;
      }
    }
  }
  else {
    uVar8 = lVar6 - lVar4 >> 3;
    if (uVar10 <= uVar9) {
      iVar2 = (uVar10 >> 1) + uVar10;
      if (uVar10 == 0) {
        iVar2 = 1;
      }
      cVar1 = FUN_145362ff0(param_1,iVar2);
      if (cVar1 == '\0') {
        return (undefined4 *)0x0;
      }
    }
    if (uVar9 < *(uint *)((longlong)param_1 + 0xc)) {
      uVar9 = (uint)uVar8;
      lVar6 = (uVar8 & 0xffffffff) * 8;
      puVar5 = (undefined4 *)(*param_1 + lVar6);
      if (uVar9 < *(uint *)(param_1 + 1)) {
        memmove(puVar5 + 2,puVar5,(ulonglong)((*(uint *)(param_1 + 1) - uVar9) * 8));
      }
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0;
        *(undefined1 *)(puVar5 + 1) = 8;
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      return (undefined4 *)(*param_1 + lVar6);
    }
  }
  return (undefined4 *)0x0;
}



// FUNCTION 145392600 FUN_145392600 body=256 status=ok
// SIG undefined FUN_145392600(void)

undefined8 FUN_145392600(void *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  __uint64 _Var4;
  ulonglong uVar5;
  uint uVar6;
  
  pvVar2 = *(void **)((longlong)param_1 + 8);
  uVar6 = *(int *)((longlong)param_1 + 0x14) + param_2;
  uVar1 = *(uint *)((longlong)param_1 + 0x10);
  _Var4 = (ulonglong)uVar6 << 2;
  pvVar3 = param_1;
  if (pvVar2 == (void *)0x0) {
    if (4 < _Var4) {
      pvVar3 = AK::MemoryMgr::Malign(0,_Var4,1);
    }
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    if ((*(void **)((longlong)param_1 + 8) != (void *)0x0) &&
       (*(void **)((longlong)param_1 + 8) != pvVar3)) {
      uVar5 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined4 *)((longlong)pvVar3 + uVar5 * 4) =
               *(undefined4 *)(*(longlong *)((longlong)param_1 + 8) + uVar5 * 4);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
      }
      if (param_1 != *(void **)((longlong)param_1 + 8)) {
        AK::MemoryMgr::Free(0,*(void **)((longlong)param_1 + 8));
      }
    }
  }
  else {
    if (4 < _Var4) {
      if (param_1 == pvVar2) {
        pvVar3 = AK::MemoryMgr::Malign(0,_Var4,1);
        if (pvVar3 == (void *)0x0) {
          return 0;
        }
        memcpy(pvVar3,param_1,(ulonglong)(uVar1 * 4));
        goto LAB_1453926e2;
      }
      pvVar3 = AK::MemoryMgr::ReallocAligned(0,pvVar2,_Var4,1);
    }
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
  }
LAB_1453926e2:
  *(void **)((longlong)param_1 + 8) = pvVar3;
  *(uint *)((longlong)param_1 + 0x14) = uVar6;
  return 1;
}



// FUNCTION 145392700 FUN_145392700 body=363 status=ok
// SIG undefined FUN_145392700(void)

undefined8 * FUN_145392700(void)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = AK::MemoryMgr::Malloc(2,0x1a8);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  FUN_145540090(puVar3);
  *(undefined1 *)((longlong)puVar3 + 0x134) = 2;
  puVar3[0x24] = 0;
  *puVar3 = &PTR_FUN_149d44bf8;
  *(undefined4 *)(puVar3 + 0x25) = 0;
  puVar3[1] = &PTR_FUN_149d44e78;
  puVar3[2] = &PTR_LAB_149d44e80;
  puVar3[5] = &PTR_LAB_149d44ea8;
  puVar3[0x23] = &PTR_FUN_149d44f28;
  *(undefined4 *)(puVar3 + 0x26) = 0;
  *(undefined4 *)(puVar3 + 0x27) = 0;
  puVar3[0x28] = 0;
  puVar3[0x29] = 0;
  puVar3[0x2a] = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  puVar3[0x2d] = 0;
  puVar3[0x2e] = 0;
  puVar3[0x2f] = 0;
  puVar3[0x30] = 0;
  puVar3[0x31] = 0;
  *(undefined4 *)(puVar3 + 0x32) = 0;
  puVar3[0x33] = 0;
  *(undefined1 *)(puVar3 + 0x34) = 0;
  iVar2 = FUN_145540120(puVar3);
  if (iVar2 != 1) {
    LOCK();
    piVar1 = (int *)((longlong)puVar3 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if (*(code **)(puVar3[2] + 0x18) == FUN_14508a0e0) {
        FUN_145373550(puVar3 + 2,0);
        return (undefined8 *)0x0;
      }
      (**(code **)(puVar3[2] + 0x18))(puVar3 + 2);
    }
    return (undefined8 *)0x0;
  }
  return puVar3;
}



// FUNCTION 145392870 FUN_145392870 body=573 status=ok
// SIG undefined FUN_145392870(void)

void FUN_145392870(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  for (puVar1 = *(undefined8 **)(param_1 + 0x140); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    puVar2 = (undefined8 *)puVar1[3];
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar1 + 4) = 0;
      if (puVar1 + 2 != puVar2) {
        AK::MemoryMgr::Free(0,puVar2);
      }
      puVar1[3] = 0;
      *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
    }
  }
  while (puVar1 = *(undefined8 **)(param_1 + 0x140), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x140) = *puVar1;
    if (puVar1 == *(undefined8 **)(param_1 + 0x148)) {
      *(undefined8 *)(param_1 + 0x148) = 0;
    }
    *puVar1 = *(undefined8 *)(param_1 + 0x150);
    *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + -1;
    *(undefined8 **)(param_1 + 0x150) = puVar1;
  }
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  while (puVar1 = *(undefined8 **)(param_1 + 0x168), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x168) = *puVar1;
    if (puVar1 == *(undefined8 **)(param_1 + 0x170)) {
      *(undefined8 *)(param_1 + 0x170) = 0;
    }
    *puVar1 = *(undefined8 *)(param_1 + 0x178);
    *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + -1;
    *(undefined8 **)(param_1 + 0x178) = puVar1;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x178);
  while (puVar2 = puVar1, puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    if ((puVar2 < *(undefined8 **)(param_1 + 0x180)) ||
       (*(undefined8 **)(param_1 + 0x180) + (ulonglong)*(uint *)(param_1 + 0x188) * 3 <= puVar2)) {
      AK::MemoryMgr::Free(0,puVar2);
    }
  }
  if (*(void **)(param_1 + 0x180) != (void *)0x0) {
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x180));
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  while (puVar1 = *(undefined8 **)(param_1 + 0x140), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x140) = *puVar1;
    if (puVar1 == *(undefined8 **)(param_1 + 0x148)) {
      *(undefined8 *)(param_1 + 0x148) = 0;
    }
    *puVar1 = *(undefined8 *)(param_1 + 0x150);
    *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + -1;
    *(undefined8 **)(param_1 + 0x150) = puVar1;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x150);
  while (puVar2 = puVar1, puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    if ((puVar2 < *(undefined8 **)(param_1 + 0x158)) ||
       (*(undefined8 **)(param_1 + 0x158) + (ulonglong)*(uint *)(param_1 + 0x160) * 5 <= puVar2)) {
      AK::MemoryMgr::Free(0,puVar2);
    }
  }
  if (*(void **)(param_1 + 0x158) != (void *)0x0) {
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x158));
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  FUN_145540160(param_1);
  return;
}



// FUNCTION 145392ab0 FUN_145392ab0 body=107 status=ok
// SIG undefined FUN_145392ab0(void)

void FUN_145392ab0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x198);
  while (lVar1 != 0) {
    FUN_1453955a0(param_1,lVar1);
    lVar1 = *(longlong *)(param_1 + 0x198);
    if (lVar1 != 0) {
      *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(lVar1 + 8);
      *(undefined8 *)(lVar1 + 8) = 0;
      *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + -1;
    }
    lVar1 = *(longlong *)(param_1 + 0x198);
  }
  FUN_145353c50(param_1 + 0x28);
  return;
}



// FUNCTION 145392b20 FUN_145392b20 body=169 status=ok
// SIG undefined FUN_145392b20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145392b20(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x188);
  while (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 8);
    uVar3 = *(undefined8 *)(lVar2 + 8);
    if (lVar2 == *(longlong *)(param_1 + 0x188)) {
      *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(lVar2 + 8);
      uVar3 = _DAT_00000008;
    }
    _DAT_00000008 = uVar3;
    *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + -1;
    if ((*(char *)(param_1 + 400) != '\0') && (*(longlong *)(lVar2 + 0x30) != 0)) {
      FUN_1450ad0e0(g_pRegistryMgr,*(undefined4 *)(param_1 + 0x10));
    }
    FUN_1453955a0(param_1 + -0x10,lVar2);
    lVar2 = lVar1;
  }
  FUN_1450d4530(param_1);
  return;
}



// FUNCTION 145392be0 FUN_145392be0 body=2228 status=ok
// SIG undefined FUN_145392be0(void)

int FUN_145392be0(longlong *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint *puVar14;
  undefined1 uVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  bool bVar19;
  bool bVar20;
  int local_res10;
  int local_408;
  int local_404;
  undefined8 *local_400;
  longlong local_3f8;
  undefined8 local_3f0;
  int iStack_3e8;
  undefined4 uStack_3e4;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined8 uStack_3c8;
  undefined1 local_3a8 [24];
  longlong local_390 [5];
  int local_368 [2];
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  int *local_348;
  undefined8 local_340;
  int local_338;
  int local_334;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  int local_300;
  int iStack_2fc;
  int iStack_2f8;
  int iStack_2f4;
  undefined8 local_2f0;
  int local_2e8;
  int local_2e4;
  undefined1 *local_2e0;
  int local_2d8;
  int local_2d4;
  undefined8 local_2d0;
  int local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8 [200];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined8 local_60;
  byte local_58;
  
  iVar4 = *param_2;
  iVar10 = 2;
  if (((int)param_1[0x26] == 0) || (*(int *)((longlong)param_1 + 0x164) == 0)) {
    return 2;
  }
  uVar3 = *(undefined1 *)((longlong)param_2 + 0x99);
  if ((((char)param_2[0x26] + 0x80U & 0xcf) == 0) && ((char)param_2[0x26] != -0x50)) {
    uVar15 = (undefined1)param_2[0x27];
  }
  else {
    uVar15 = 0xff;
  }
  iVar9 = param_2[0xd];
  local_3e0 = FUN_1450e98e0(param_2);
  local_3f0 = *(undefined8 *)(param_2 + 4);
  uStack_3c8 = 0;
  uStack_3d8 = CONCAT31(uStack_3d8._1_3_,uVar3);
  local_3d0 = CONCAT31(local_3d0._1_3_,uVar15);
  iStack_3e8 = iVar9;
  iVar9 = FUN_14507fe40(g_pGameSyncMgr,&local_3f0,param_1[0x26]);
  if (((*(byte *)((longlong)param_1 + 0xd6) & 2) != 0) && ((char)param_2[0x26] == '\0')) {
    cVar8 = (**(code **)(*param_1 + 0x118))(param_1,1);
    if (cVar8 == '\0') {
      (**(code **)(*param_1 + 0x120))(param_1,1);
      return 2;
    }
    FUN_1450dabb0();
    for (pvVar11 = DAT_14c7fdf80; pvVar11 != (void *)0x0;
        pvVar11 = *(void **)((longlong)pvVar11 + 0x5800)) {
      if (*(longlong *)((longlong)pvVar11 + 0x5810) != 0) goto LAB_145392d8c;
    }
    pvVar11 = AK::MemoryMgr::Malloc(0,0x5818);
    puVar17 = (undefined8 *)0x0;
    if (pvVar11 != (void *)0x0) {
      FUN_145395790(pvVar11);
      if (DAT_14c7fdf80 == (void *)0x0) {
        DAT_14c7fdf80 = pvVar11;
        *(undefined8 *)((longlong)pvVar11 + 0x5800) = 0;
      }
      else {
        *(void **)((longlong)pvVar11 + 0x5800) = DAT_14c7fdf80;
        DAT_14c7fdf80 = pvVar11;
      }
LAB_145392d8c:
      puVar17 = *(undefined8 **)((longlong)pvVar11 + 0x5810);
      if (puVar17 != (undefined8 *)0x0) {
        puVar12 = (undefined8 *)*puVar17;
        if ((undefined8 *)*puVar17 == (undefined8 *)0x0) {
          puVar12 = (undefined8 *)0x0;
        }
        *(undefined8 **)((longlong)pvVar11 + 0x5810) = puVar12;
        *puVar17 = 0;
        *(int *)((longlong)pvVar11 + 0x5808) = *(int *)((longlong)pvVar11 + 0x5808) + -1;
      }
    }
    if (puVar17 == (undefined8 *)0x0) {
LAB_145392f3e:
      (**(code **)(*param_1 + 0x120))(param_1,1);
      FUN_1450dabf0(param_1);
      return 2;
    }
    puVar17[5] = 0;
    puVar17[4] = 0;
    puVar17[3] = 0;
    puVar17[6] = 0;
    *(undefined4 *)(puVar17 + 7) = 0;
    *(undefined4 *)(puVar17 + 8) = 0;
    *(undefined1 *)(puVar17 + 9) = 0xff;
    *(undefined1 *)(puVar17 + 10) = 0xff;
    puVar17[0xb] = 0;
    *(undefined4 *)((longlong)puVar17 + 0xa4) = 0;
    *puVar17 = &PTR_LAB_149d44be8;
    puVar17[2] = param_1;
    LOCK();
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
    UNLOCK();
    *(int *)(puVar17 + 0x15) = param_2[0x20];
    puVar17[6] = local_3f0;
    puVar17[7] = CONCAT44(uStack_3e4,iStack_3e8);
    *(undefined4 *)(puVar17 + 8) = local_3e0;
    *(undefined4 *)((longlong)puVar17 + 0x44) = uStack_3dc;
    *(undefined4 *)(puVar17 + 9) = uStack_3d8;
    *(undefined4 *)((longlong)puVar17 + 0x4c) = uStack_3d4;
    *(undefined4 *)(puVar17 + 10) = local_3d0;
    *(undefined4 *)((longlong)puVar17 + 0x54) = uStack_3cc;
    *(undefined4 *)(puVar17 + 0xb) = (undefined4)uStack_3c8;
    *(undefined4 *)((longlong)puVar17 + 0x5c) = uStack_3c8._4_4_;
    FUN_1453923d0(puVar17 + 3,param_2 + 8);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    puVar17[0xc] = *(undefined8 *)(param_2 + 0xe);
    puVar17[0xd] = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x14);
    puVar17[0xe] = *(undefined8 *)(param_2 + 0x12);
    puVar17[0xf] = uVar7;
    iVar10 = param_2[0x17];
    iVar2 = param_2[0x18];
    iVar6 = param_2[0x19];
    *(int *)(puVar17 + 0x10) = param_2[0x16];
    *(int *)((longlong)puVar17 + 0x84) = iVar10;
    *(int *)(puVar17 + 0x11) = iVar2;
    *(int *)((longlong)puVar17 + 0x8c) = iVar6;
    iVar10 = param_2[0x1b];
    iVar2 = param_2[0x1c];
    iVar6 = param_2[0x1d];
    *(int *)(puVar17 + 0x12) = param_2[0x1a];
    *(int *)((longlong)puVar17 + 0x94) = iVar10;
    *(int *)(puVar17 + 0x13) = iVar2;
    *(int *)((longlong)puVar17 + 0x9c) = iVar6;
    *(int *)(puVar17 + 0x14) = param_2[0x1e];
    *(int *)((longlong)puVar17 + 0xa4) = param_2[0x1f];
    lVar13 = puVar17[6];
    uVar5 = *(uint *)(lVar13 + 0x60);
    if ((uVar5 < 2) && (*(char *)(lVar13 + 100) != '\0')) {
      *(uint *)(lVar13 + 0x60) = uVar5 + 1;
      if ((1 < uVar5 + 1) || (*(char *)(lVar13 + 100) == '\0')) {
        FUN_145355090();
      }
    }
    else {
      *(uint *)(lVar13 + 0x60) = uVar5 + 1;
    }
    iVar10 = FUN_14507ec00(g_pGameSyncMgr,param_1[0x26],puVar17);
    if (iVar10 != 1) {
      FUN_1453955a0(param_1,puVar17);
      goto LAB_145392f3e;
    }
    if (param_1[0x33] == 0) {
      param_1[0x33] = (longlong)puVar17;
      puVar17[1] = 0;
    }
    else {
      puVar17[1] = param_1[0x33];
      param_1[0x33] = (longlong)puVar17;
    }
    *(int *)(param_1 + 0x32) = (int)param_1[0x32] + 1;
    FUN_1450b2830(DAT_14c790fc0,param_2[0xd]);
    iVar10 = 1;
  }
  FUN_14553fd60(&local_3f8,param_2,param_1);
  local_res10 = 0;
  if (iVar9 != 0) {
    for (puVar17 = (undefined8 *)param_1[0x28]; puVar17 != (undefined8 *)0x0;
        puVar17 = (undefined8 *)*puVar17) {
      if (*(int *)(puVar17 + 1) == iVar9) {
        puVar17 = puVar17 + 2;
        local_400 = puVar17;
        if (puVar17 != (undefined8 *)0x0) goto LAB_145392fb8;
        break;
      }
    }
  }
  iVar9 = (int)param_1[0x27];
  if (iVar9 != 0) {
    for (puVar17 = (undefined8 *)param_1[0x28]; puVar17 != (undefined8 *)0x0;
        puVar17 = (undefined8 *)*puVar17) {
      if (*(int *)(puVar17 + 1) == iVar9) {
        puVar17 = puVar17 + 2;
        local_400 = puVar17;
        if (puVar17 != (undefined8 *)0x0) goto LAB_145392fb8;
        break;
      }
    }
  }
  local_res10 = 0;
  if (iVar4 == 0) {
    iVar10 = 1;
    goto LAB_14539346a;
  }
LAB_145393437:
  if ((local_res10 == 0) && ((*(byte *)((longlong)param_1 + 0xd6) & 2) == 0)) {
    iVar10 = FUN_145540330(param_1,param_2);
  }
  else if (local_3f8 != 0) {
    iVar10 = FUN_145540000(param_1,local_3f8);
  }
LAB_14539346a:
  if (local_3f8 != 0) {
    FUN_14538eca0();
  }
  return iVar10;
LAB_145392fb8:
  local_400 = puVar17;
  if ((char)param_1[0x34] == '\0') {
    bVar19 = false;
  }
  else {
    FUN_1450ad020(g_pRegistryMgr,&local_408,*(undefined8 *)(param_2 + 4),(int)param_1[4]);
    if (local_408 == iVar9) {
      local_404 = local_404 + 1;
    }
    else {
      local_404 = 1;
      local_408 = iVar9;
    }
    bVar19 = local_404 == 1;
    FUN_1450ad080(g_pRegistryMgr,*(undefined8 *)(param_2 + 4),(int)param_1[4],&local_408);
  }
  if ((iVar4 == 0) && (*(int *)(puVar17 + 2) == 0)) {
    iVar10 = 1;
    goto LAB_14539346a;
  }
  if (1 < *(uint *)(puVar17 + 2)) {
    FUN_1450e9900(param_2,param_1);
  }
  puVar14 = (uint *)puVar17[1];
  if (puVar14 != puVar14 + *(uint *)(puVar17 + 2)) {
    do {
      local_368[0] = *param_2;
      local_360 = *(undefined8 *)(param_2 + 2);
      local_358 = *(undefined8 *)(param_2 + 4);
      local_350 = *(undefined8 *)(param_2 + 6);
      local_334 = param_2[0xd];
      local_340 = *(undefined8 *)(param_2 + 10);
      local_338 = param_2[0xc];
      local_348 = *(int **)(param_2 + 8);
      if (local_348 != (int *)0x0) {
        *local_348 = *local_348 + 1;
      }
      local_330 = *(undefined8 *)(param_2 + 0xe);
      uStack_328 = *(undefined8 *)(param_2 + 0x10);
      local_2e8 = param_2[0x20];
      local_320 = *(undefined8 *)(param_2 + 0x12);
      uStack_318 = *(undefined8 *)(param_2 + 0x14);
      local_2e4 = param_2[0x21];
      local_2e0 = *(undefined1 **)(param_2 + 0x22);
      local_2d8 = param_2[0x24];
      local_2d4 = param_2[0x25];
      local_310 = *(undefined8 *)(param_2 + 0x16);
      uStack_308 = *(undefined8 *)(param_2 + 0x18);
      local_2c8 = param_2[0x28];
      local_2f0 = *(undefined8 *)(param_2 + 0x1e);
      local_2c0 = *(undefined8 *)(param_2 + 0x2a);
      local_300 = param_2[0x1a];
      iStack_2fc = param_2[0x1b];
      iStack_2f8 = param_2[0x1c];
      iStack_2f4 = param_2[0x1d];
      local_2d0 = *(undefined8 *)(param_2 + 0x26);
      FUN_1450896a0(local_2b8);
      local_70 = param_2[0xbe];
      iStack_6c = param_2[0xbf];
      iStack_68 = param_2[0xc0];
      iStack_64 = param_2[0xc1];
      local_1f0 = 0;
      local_1e8 = 0;
      local_1e0 = 0;
      local_1d8 = 0;
      local_1d0 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = *(undefined8 *)(param_2 + 0xbc);
      FUN_1450c1160(local_2b8);
      piVar1 = DAT_14c791060;
      local_60 = *(undefined8 *)(param_2 + 0xc2);
      uVar5 = *puVar14;
      local_58 = *(byte *)(param_2 + 0xc4) & 0xf | local_58 & 0xf0;
      for (puVar17 = (undefined8 *)param_1[0x2d]; puVar17 != (undefined8 *)0x0;
          puVar17 = (undefined8 *)*puVar17) {
        if (*(uint *)(puVar17 + 1) == uVar5) {
          if (puVar17 != (undefined8 *)&DAT_fffffffffffffff4) {
            uVar16 = *(uint *)((longlong)puVar17 + 0x14);
            goto LAB_14539320e;
          }
          break;
        }
      }
      uVar16 = 0;
LAB_14539320e:
      if (((bVar19) || ((uVar16 & 8) == 0)) && ((local_2d8 == 0 || (local_res10 == 0)))) {
        do {
          while (iVar9 = *piVar1, iVar9 < 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
            if (*piVar1 < 0) goto LAB_145393250;
            LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
          }
          LOCK();
          iVar2 = *piVar1;
          if (iVar9 == iVar2) {
            *piVar1 = iVar9 + 1;
          }
          UNLOCK();
        } while (iVar9 != iVar2);
LAB_145393250:
        if (piVar1[0x12] == 0) {
          lVar13 = 0;
        }
        else {
          for (lVar13 = *(longlong *)
                         (*(longlong *)(piVar1 + 0x10) +
                         ((ulonglong)uVar5 % (ulonglong)(uint)piVar1[0x12]) * 8); lVar13 != 0;
              lVar13 = *(longlong *)(lVar13 + 8)) {
            if (*(uint *)(lVar13 + 0x10) == uVar5) goto LAB_145393285;
          }
          lVar13 = 0;
LAB_145393285:
          if (lVar13 != 0) {
            LOCK();
            *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
            UNLOCK();
          }
        }
        iVar9 = *piVar1;
        while (-1 < iVar9) {
          LOCK();
          iVar2 = *piVar1;
          if (iVar9 == iVar2) {
            *piVar1 = iVar9 + -1;
          }
          UNLOCK();
          if (iVar9 == iVar2) {
            if ((iVar9 + -1 == 0) && (0 < piVar1[0xc])) {
              SetEvent(*(HANDLE *)(piVar1 + 0xe));
            }
            goto LAB_1453932e9;
          }
          iVar9 = *piVar1;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_1453932e9:
        lVar18 = lVar13 + -0x10;
        if (lVar13 == 0) {
          lVar18 = 0;
        }
        if (lVar18 != 0) {
          if (iVar4 == 0) {
            iVar10 = FUN_1450c1350(lVar18,local_368);
          }
          else {
            FUN_14553fe20(local_3a8,local_2e0);
            if (*(int *)(local_400 + 2) == 1) {
              FUN_14553fee0(param_1,*(undefined8 *)(local_2e0 + 0x18),local_390);
LAB_14539339d:
              local_2e0 = local_3a8;
              iVar10 = FUN_1450c1350(lVar18,local_368);
            }
            else {
              lVar13 = FUN_14538ec50();
              bVar20 = local_390[0] != 0;
              local_390[0] = lVar13;
              if (bVar20) {
                FUN_14538eca0();
              }
              if (local_390[0] == 0) {
                iVar10 = 0x34;
              }
              else {
                iVar10 = FUN_1455401c0(param_1,local_3a8,local_368,&local_3f8);
                if (iVar10 == 1) goto LAB_14539339d;
              }
            }
            FUN_14553fe90(local_3a8);
          }
          if (iVar10 == 1) {
            local_res10 = local_res10 + 1;
          }
          LOCK();
          piVar1 = (int *)(lVar18 + 0x24);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*(longlong *)(lVar18 + 0x10) + 0x18))();
          }
        }
      }
      FUN_144d51aa0(local_2b8);
      if (local_348 != (int *)0x0) {
        FUN_144d4a460();
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != (uint *)(local_400[1] + (ulonglong)*(uint *)(local_400 + 2) * 4));
  }
  if (iVar4 == 0) goto LAB_14539346a;
  goto LAB_145393437;
}



// FUNCTION 1453934a0 FUN_1453934a0 body=200 status=ok
// SIG undefined FUN_1453934a0(void)

void FUN_1453934a0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  
  LOCK();
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  UNLOCK();
  FUN_145395340();
  lVar5 = *(longlong *)(param_1 + 0x70);
  if ((lVar5 != 0) &&
     (((0 < *(short *)(lVar5 + 0xd0) || (0 < *(short *)(lVar5 + 0xd4))) &&
      (uVar4 = *(uint *)(param_1 + 0x100), uVar4 != 0)))) {
    lVar5 = (ulonglong)uVar4 << 3;
    do {
      lVar5 = lVar5 + -8;
      uVar4 = uVar4 - 1;
      plVar3 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0xf8));
      if ((*(char *)(param_2 + 0x1c) == '\0') || (plVar3[0x10] == 0)) {
        (**(code **)(*plVar3 + 0x80))(plVar3,param_2);
      }
    } while (uVar4 != 0);
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x24);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014539355f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))();
  return;
}



// FUNCTION 145393570 FUN_145393570 body=104 status=ok
// SIG undefined FUN_145393570(void)

void FUN_145393570(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  LOCK();
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  UNLOCK();
  FUN_145395340();
  if ((*(char *)((longlong)param_2 + 0x1f) == '\0') || (*(char *)((longlong)param_2 + 0x1d) == '\0')
     ) goto LAB_1453935b0;
  iVar2 = *param_2;
  if (iVar2 == 0) {
LAB_1453935a5:
    uVar3 = 0;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) goto LAB_1453935b0;
      goto LAB_1453935a5;
    }
    uVar3 = 1;
  }
  FUN_145354bf0(param_1 + 0x28,uVar3);
LAB_1453935b0:
  LOCK();
  piVar1 = (int *)(param_1 + 0x24);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))();
  }
  return;
}



// FUNCTION 1453935e0 FUN_1453935e0 body=730 status=ok
// SIG undefined FUN_1453935e0(void)

void FUN_1453935e0(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  LOCK();
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  UNLOCK();
  iVar2 = *param_2;
  if (iVar2 == 0) {
    lVar11 = *(longlong *)(param_1 + 0x198);
    lVar10 = 0;
    puVar3 = *(undefined8 **)(param_2 + 2);
    bVar5 = false;
    if (lVar11 != 0) {
      do {
        if ((puVar3 == (undefined8 *)0x0) || (puVar3 == *(undefined8 **)(lVar11 + 0x30))) {
          lVar9 = *(longlong *)(lVar11 + 8);
          if (lVar11 == *(longlong *)(param_1 + 0x198)) {
            *(longlong *)(param_1 + 0x198) = lVar9;
          }
          else {
            *(longlong *)(lVar10 + 8) = lVar9;
          }
          *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + -1;
          if ((puVar3 == (undefined8 *)0x0) || (bVar5)) {
            if ((*(char *)(param_1 + 0x1a0) != '\0') &&
               ((puVar3 == (undefined8 *)0x0 && (*(longlong *)(lVar11 + 0x30) != 0)))) {
              FUN_1450ad0e0(g_pRegistryMgr,*(undefined4 *)(param_1 + 0x20));
            }
          }
          else {
            uVar8 = *(uint *)(puVar3 + 0xc);
            if ((uVar8 < 2) && (*(char *)((longlong)puVar3 + 100) != '\0')) {
              *(uint *)(puVar3 + 0xc) = uVar8 + 1;
              if ((1 < uVar8 + 1) || (*(char *)((longlong)puVar3 + 100) == '\0')) {
                FUN_145355090(puVar3);
                bVar5 = true;
                goto LAB_145393765;
              }
            }
            else {
              *(uint *)(puVar3 + 0xc) = uVar8 + 1;
            }
            bVar5 = true;
          }
LAB_145393765:
          FUN_1453955a0(param_1,lVar11);
        }
        else {
          lVar9 = *(longlong *)(lVar11 + 8);
          lVar10 = lVar11;
        }
        lVar11 = lVar9;
      } while (lVar9 != 0);
      if (bVar5) {
        if (*(char *)(param_1 + 0x1a0) != '\0') {
          FUN_1450ad0e0(g_pRegistryMgr,*(undefined4 *)(param_1 + 0x20),puVar3);
        }
        if ((*(uint *)(puVar3 + 0xc) < 2) && (*(char *)((longlong)puVar3 + 100) != '\0')) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        uVar8 = *(uint *)(puVar3 + 0xc) - 1;
        *(uint *)(puVar3 + 0xc) = uVar8;
        if ((uVar8 == 0) ||
           (((bVar5 && (uVar8 < 2)) && (*(char *)((longlong)puVar3 + 100) != '\0')))) {
          FUN_1453550a0(puVar3);
        }
        if (*(int *)(puVar3 + 0xc) == 0) {
          (**(code **)*puVar3)(puVar3,0);
          AK::MemoryMgr::Free(4,puVar3);
        }
      }
    }
  }
  else if (iVar2 == 1) {
    lVar10 = *(longlong *)(param_2 + 2);
    for (lVar11 = *(longlong *)(param_1 + 0x198); lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 8)) {
      if (((lVar10 == 0) || (lVar10 == *(longlong *)(lVar11 + 0x30))) &&
         (*(int *)(lVar11 + 0xa8) != 1)) {
        *(undefined4 *)(lVar11 + 0xa8) = 1;
      }
    }
  }
  else if (iVar2 == 2) {
    lVar10 = *(longlong *)(param_2 + 2);
    for (lVar11 = *(longlong *)(param_1 + 0x198); lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 8)) {
      if (((lVar10 == 0) || (lVar10 == *(longlong *)(lVar11 + 0x30))) &&
         (*(int *)(lVar11 + 0xa8) != 0)) {
        *(undefined4 *)(lVar11 + 0xa8) = 0;
      }
    }
  }
  if ((*(char *)((longlong)param_2 + 0x1f) == '\0') || (*(char *)((longlong)param_2 + 0x1d) == '\0')
     ) goto LAB_145393821;
  iVar2 = *param_2;
  if (iVar2 == 0) {
LAB_145393816:
    uVar7 = 0;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) goto LAB_145393821;
      goto LAB_145393816;
    }
    uVar7 = 1;
  }
  FUN_145354bf0(param_1 + 0x28,uVar7);
LAB_145393821:
  uVar8 = *(uint *)(param_1 + 0x100);
  if (uVar8 != 0) {
    lVar11 = (ulonglong)uVar8 << 3;
    do {
      lVar11 = lVar11 + -8;
      uVar8 = uVar8 - 1;
      plVar4 = *(longlong **)(lVar11 + *(longlong *)(param_1 + 0xf8));
      if ((((char)param_2[7] == '\0') || (plVar4[0x10] == 0)) &&
         (cVar6 = FUN_1450d5200(plVar4,*(undefined8 *)(param_2 + 0xc)), cVar6 == '\0')) {
        (**(code **)(*plVar4 + 0x90))(plVar4,param_2);
      }
    } while (uVar8 != 0);
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x24);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001453938aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))();
    return;
  }
  return;
}



// FUNCTION 1453938c0 FUN_1453938c0 body=246 status=ok
// SIG undefined FUN_1453938c0(void)

void FUN_1453938c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  void *_Dst;
  
  lVar7 = param_2[4];
  bVar5 = false;
  if (param_2[0xf] == param_1) {
    (**(code **)(*param_2 + 0x20))(param_2,0);
    _Dst = (void *)FUN_14508a500(param_1 + 0xf0);
    if (_Dst != (void *)0x0) {
      pvVar2 = (void *)(*(longlong *)(param_1 + 0xf8) +
                       (ulonglong)(*(int *)(param_1 + 0x100) - 1) * 8);
      if (_Dst < pvVar2) {
        memmove(_Dst,(void *)((longlong)_Dst + 8),(ulonglong)((int)pvVar2 - (int)_Dst & 0xfffffff8))
        ;
      }
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + -1;
    }
    bVar5 = true;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x168);
  puVar8 = (undefined8 *)0x0;
  do {
    puVar6 = puVar8;
    puVar8 = puVar4;
    if (puVar8 == (undefined8 *)0x0) goto LAB_14539398d;
    puVar4 = (undefined8 *)*puVar8;
  } while (*(int *)(puVar8 + 1) != (int)lVar7);
  if (puVar8 == *(undefined8 **)(param_1 + 0x168)) {
    *(undefined8 **)(param_1 + 0x168) = puVar4;
  }
  else {
    *puVar6 = puVar4;
  }
  if (puVar8 == *(undefined8 **)(param_1 + 0x170)) {
    *(undefined8 **)(param_1 + 0x170) = puVar6;
  }
  *puVar8 = *(undefined8 *)(param_1 + 0x178);
  *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + -1;
  *(undefined8 **)(param_1 + 0x178) = puVar8;
LAB_14539398d:
  if (bVar5) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x24);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))();
    }
  }
  return;
}



// FUNCTION 1453939c0 FUN_1453939c0 body=82 status=ok
// SIG undefined FUN_1453939c0(void)

undefined8 FUN_1453939c0(longlong param_1,int param_2,char param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != (longlong *)0x0)) {
    while ((int)plVar2[1] != param_2) {
      plVar2 = (longlong *)*plVar2;
      if (plVar2 == (longlong *)0x0) {
        return 1;
      }
    }
    if (param_3 != '\0') {
      uVar1 = FUN_145394cd0();
      return uVar1;
    }
    FUN_145394d70(param_1 + -0x118,plVar2 + 2);
  }
  return 1;
}



// FUNCTION 145393a20 FUN_145393a20 body=543 status=ok
// SIG undefined FUN_145393a20(void)

int FUN_145393a20(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (DAT_14c791090 == '\0') {
    puVar3 = (undefined8 *)param_1[0x1f];
    if (puVar3 == puVar3 + *(uint *)(param_1 + 0x20)) {
      return 1;
    }
    while (iVar2 = (**(code **)(*(longlong *)*puVar3 + 0x128))(), iVar2 == 1) {
      puVar3 = puVar3 + 1;
      if (puVar3 == (undefined8 *)(param_1[0x1f] + (ulonglong)*(uint *)(param_1 + 0x20) * 8)) {
        return 1;
      }
    }
    puVar6 = (undefined8 *)param_1[0x1f];
    if (puVar6 == puVar3) {
      return iVar2;
    }
    do {
      (**(code **)(*(longlong *)*puVar6 + 0x130))();
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar3);
    return iVar2;
  }
  if ((int)param_1[0x25] != 0) {
    *(int *)(param_1 + 0x25) = (int)param_1[0x25] + 1;
    return 1;
  }
  puVar3 = (undefined8 *)
           FUN_14555d5d0(param_1 + 0x23,(int)param_1[0x26],
                         *(char *)((longlong)param_1 + 0x134) != '\x02');
  if (puVar3 == (undefined8 *)0x0) {
    return 0x34;
  }
  puVar6 = (undefined8 *)param_1[0x28];
  do {
    if (puVar6 == (undefined8 *)0x0) {
      *(int *)(param_1 + 0x25) = (int)param_1[0x25] + 1;
      iVar2 = FUN_14555d600(param_1 + 0x23,(int)param_1[0x26],
                            *(char *)((longlong)param_1 + 0x134) != '\x02');
      if (iVar2 == 1) {
        return 1;
      }
      (**(code **)(*param_1 + 0x130))(param_1);
      return iVar2;
    }
    piVar4 = (int *)*puVar3;
    piVar1 = piVar4 + *(uint *)(puVar3 + 1);
    for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
      if (*piVar4 == *(int *)(puVar6 + 1)) {
        iVar2 = FUN_145394cd0(param_1,puVar6 + 2);
        if (iVar2 != 1) {
          puVar7 = (undefined8 *)param_1[0x28];
          if (puVar7 == puVar6) {
            return iVar2;
          }
          goto LAB_145393bc0;
        }
        break;
      }
    }
    puVar6 = (undefined8 *)*puVar6;
  } while( true );
LAB_145393bc0:
  piVar4 = (int *)*puVar3;
  piVar1 = piVar4 + *(uint *)(puVar3 + 1);
  for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
    if (*piVar4 == *(int *)(puVar7 + 1)) {
      puVar5 = (undefined4 *)puVar7[3];
      if (puVar5 != puVar5 + *(uint *)(puVar7 + 4)) {
        do {
          FUN_1450d5550(*puVar5);
          puVar5 = puVar5 + 1;
        } while (puVar5 != (undefined4 *)(puVar7[3] + (ulonglong)*(uint *)(puVar7 + 4) * 4));
      }
      break;
    }
  }
  puVar7 = (undefined8 *)*puVar7;
  if (puVar7 == puVar6) {
    return iVar2;
  }
  goto LAB_145393bc0;
}



// FUNCTION 145393c40 FUN_145393c40 body=352 status=ok
// SIG undefined FUN_145393c40(void)

void FUN_145393c40(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  if (DAT_14c791090 == '\0') {
    puVar4 = *(undefined8 **)(param_1 + 0xf8);
    if (puVar4 != puVar4 + *(uint *)(param_1 + 0x100)) {
      do {
        (**(code **)(*(longlong *)*puVar4 + 0x130))();
        puVar4 = puVar4 + 1;
      } while (puVar4 != (undefined8 *)
                         (*(longlong *)(param_1 + 0xf8) + (ulonglong)*(uint *)(param_1 + 0x100) * 8)
              );
      return;
    }
  }
  else if ((*(int *)(param_1 + 0x128) != 0) &&
          (iVar3 = *(int *)(param_1 + 0x128) + -1, *(int *)(param_1 + 0x128) = iVar3, iVar3 == 0)) {
    puVar4 = (undefined8 *)
             FUN_14555d5d0(param_1 + 0x118,*(undefined4 *)(param_1 + 0x130),
                           *(char *)(param_1 + 0x134) != '\x02');
    if (puVar4 != (undefined8 *)0x0) {
      for (puVar2 = *(undefined8 **)(param_1 + 0x140); puVar2 != (undefined8 *)0x0;
          puVar2 = (undefined8 *)*puVar2) {
        piVar5 = (int *)*puVar4;
        piVar1 = piVar5 + *(uint *)(puVar4 + 1);
        for (; piVar5 != piVar1; piVar5 = piVar5 + 1) {
          if (*piVar5 == *(int *)(puVar2 + 1)) {
            puVar6 = (undefined4 *)puVar2[3];
            if (puVar6 != puVar6 + *(uint *)(puVar2 + 4)) {
              do {
                FUN_1450d5550(*puVar6);
                puVar6 = puVar6 + 1;
              } while (puVar6 != (undefined4 *)(puVar2[3] + (ulonglong)*(uint *)(puVar2 + 4) * 4));
            }
            break;
          }
        }
      }
    }
    FUN_14555d660(param_1 + 0x118,*(undefined4 *)(param_1 + 0x130),
                  *(char *)(param_1 + 0x134) != '\x02');
  }
  return;
}



// FUNCTION 145393da0 FUN_145393da0 body=187 status=ok
// SIG undefined FUN_145393da0(void)

undefined4 FUN_145393da0(undefined8 param_1,longlong param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  ulonglong uVar7;
  
  piVar5 = *(int **)(param_2 + 8);
  uVar7 = (ulonglong)*(uint *)(param_2 + 0x10);
  piVar1 = piVar5 + uVar7;
  for (; (piVar5 != piVar1 && (*piVar5 != param_3)); piVar5 = piVar5 + 1) {
  }
  piVar6 = (int *)0x0;
  if (piVar5 != piVar1) {
    piVar6 = piVar5;
  }
  if (piVar6 != (int *)0x0) {
    return 0x39;
  }
  uVar2 = *(uint *)(param_2 + 0x14);
  if (uVar2 <= uVar7) {
    iVar3 = (uVar2 >> 1) + uVar2;
    if (uVar2 == 0) {
      iVar3 = 1;
    }
    cVar4 = FUN_145392600(param_2,iVar3);
    if (cVar4 == '\0') {
      return 2;
    }
  }
  if (uVar7 < *(uint *)(param_2 + 0x14)) {
    uVar2 = *(uint *)(param_2 + 0x10);
    *(uint *)(param_2 + 0x10) = uVar2 + 1;
    piVar1 = (int *)(*(longlong *)(param_2 + 8) + (ulonglong)uVar2 * 4);
    if (piVar1 != (int *)0x0) {
      *piVar1 = param_3;
      return 1;
    }
  }
  return 2;
}



// FUNCTION 145393e80 FUN_145393e80 body=1466 status=ok
// SIG undefined FUN_145393e80(void)

int FUN_145393e80(longlong *param_1,uint *param_2,undefined4 param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  uint *puVar13;
  byte bVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  byte bVar19;
  uint uStackX_c;
  uint *local_res10;
  undefined4 local_res18 [2];
  undefined4 local_40;
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  iVar9 = (**(code **)(*param_1 + 0x70))();
  if (iVar9 != 4) {
    lVar7 = param_1[4];
    uVar10 = (**(code **)(*param_1 + 0x70))();
    FUN_1450b8920(DAT_14c790fe0,(int)lVar7,4,uVar10);
    return 0x5b;
  }
  local_res10 = local_res10 + 1;
  iVar9 = FUN_1450d7ad0(param_1,&local_res10,local_res18,0);
  if (iVar9 == 1) {
    uVar18 = *local_res10;
    uVar2 = *(uint *)((longlong)local_res10 + 1);
    uVar10 = *(undefined4 *)((longlong)local_res10 + 5);
    cVar8 = *(char *)((longlong)local_res10 + 9);
    local_res10 = (uint *)((longlong)local_res10 + 10);
    uStackX_c = CONCAT31(uStackX_c._1_3_,((char)uVar18 == '\x01') + '\x02');
    if ((ulonglong)*(uint5 *)(param_1 + 0x26) !=
        (((ulonglong)uStackX_c & 0xff) << 0x20 | (ulonglong)uVar2)) {
      for (lVar7 = param_1[0x33]; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 8)) {
        FUN_14507ee00(g_pGameSyncMgr,param_1[0x26],lVar7);
        if (uVar2 != 0) {
          FUN_14507ec00(g_pGameSyncMgr,CONCAT44(uStackX_c,uVar2),lVar7);
        }
      }
    }
    param_1[0x26] = CONCAT44(uStackX_c,uVar2);
    iVar9 = 1;
    *(undefined4 *)(param_1 + 0x27) = uVar10;
    *(byte *)((longlong)param_1 + 0xd6) =
         -(cVar8 != '\0') & 2U | *(byte *)((longlong)param_1 + 0xd6) & 0xfd;
    uVar2 = *local_res10;
    local_res10 = local_res10 + 1;
    if (uVar2 != 0) {
      if ((*(uint *)((longlong)param_1 + 0x104) < uVar2) &&
         (cVar8 = FUN_1450c15a0(param_1 + 0x1e,uVar2 - *(uint *)((longlong)param_1 + 0x104)),
         cVar8 == '\0')) {
        return 0x34;
      }
      iVar9 = 1;
      uVar18 = 0;
      if (uVar2 != 0) {
        do {
          uVar17 = uStackX_c;
          uVar3 = *local_res10;
          local_res10 = local_res10 + 1;
          uStackX_c = uStackX_c & 0xffffff00;
          iVar9 = (**(code **)(*param_1 + 0x40))
                            (param_1,CONCAT44(uVar17,uVar3) & 0xffffff00ffffffff);
          if ((iVar9 != 1) && (iVar9 != 0xf)) break;
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar2);
      }
    }
    if (iVar9 == 1) {
      uVar2 = *local_res10;
      local_res10 = local_res10 + 1;
      if (uVar2 != 0) {
        puVar11 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar2 * 0x28);
        uVar18 = 0;
        param_1[0x2b] = (longlong)puVar11;
        if (puVar11 != (undefined8 *)0x0) {
          *(uint *)(param_1 + 0x2c) = uVar2;
          param_1[0x2a] = (longlong)puVar11;
          if (uVar2 != 0) {
            puVar15 = puVar11 + 4;
            do {
              if (puVar15 != (undefined8 *)&DAT_00000018) {
                puVar15[-1] = 0;
                *puVar15 = 0;
              }
              uVar18 = uVar18 + 1;
              *puVar11 = puVar15 + 1;
              puVar15 = puVar15 + 5;
              puVar11 = puVar11 + 5;
            } while (uVar18 < *(uint *)(param_1 + 0x2c));
          }
          puVar11[-5] = 0;
        }
      }
      uVar18 = 0;
      if (uVar2 != 0) {
        do {
          puVar11 = (undefined8 *)0x0;
          uVar3 = *local_res10;
          local_res10 = local_res10 + 1;
          for (puVar15 = (undefined8 *)param_1[0x28]; puVar15 != (undefined8 *)0x0;
              puVar15 = (undefined8 *)*puVar15) {
            if (*(uint *)(puVar15 + 1) == uVar3) {
              puVar11 = puVar15 + 2;
              if (puVar11 != (undefined8 *)0x0) goto LAB_1453941f5;
              break;
            }
          }
          plVar12 = (longlong *)param_1[0x2a];
          if (plVar12 == (longlong *)0x0) {
            plVar12 = AK::MemoryMgr::Malloc(0,0x28);
            if (plVar12 != (longlong *)0x0) {
              if (plVar12 != (longlong *)&DAT_fffffffffffffff8) {
                plVar12[3] = 0;
                plVar12[4] = 0;
              }
              *plVar12 = param_1[0x2a];
              param_1[0x2a] = (longlong)plVar12;
              goto LAB_145394191;
            }
          }
          else {
LAB_145394191:
            if ((undefined8 *)param_1[0x29] == (undefined8 *)0x0) {
              param_1[0x28] = (longlong)plVar12;
            }
            else {
              *(undefined8 *)param_1[0x29] = plVar12;
            }
            plVar12 = (longlong *)param_1[0x2a];
            param_1[0x29] = (longlong)plVar12;
            param_1[0x2a] = *plVar12;
            *plVar12 = 0;
            *(int *)((longlong)param_1 + 0x164) = *(int *)((longlong)param_1 + 0x164) + 1;
            lVar7 = param_1[0x29];
            puVar13 = (uint *)(lVar7 + 8);
            if (puVar13 != (uint *)0x0) {
              *puVar13 = uVar3;
              puVar11 = (undefined8 *)(lVar7 + 0x10);
            }
          }
          if (puVar11 == (undefined8 *)0x0) {
            return 0x34;
          }
LAB_1453941f5:
          uVar3 = *local_res10;
          local_res10 = local_res10 + 1;
          if (*(uint *)((longlong)puVar11 + 0x14) < uVar3) {
            FUN_145392600(puVar11,uVar3 - *(uint *)((longlong)puVar11 + 0x14));
          }
          uVar17 = 0;
          if (uVar3 != 0) {
            do {
              uVar4 = *local_res10;
              local_res10 = local_res10 + 1;
              iVar9 = FUN_145393da0(param_1,puVar11,uVar4);
              if (iVar9 != 1) {
                return iVar9;
              }
              uVar17 = uVar17 + 1;
              iVar9 = 1;
            } while (uVar17 < uVar3);
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar2);
      }
      uVar2 = *local_res10;
      local_res10 = local_res10 + 1;
      if (uVar2 != 0) {
        plVar12 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar2 * 0x18);
        param_1[0x30] = (longlong)plVar12;
        if (plVar12 != (longlong *)0x0) {
          uVar18 = 0;
          *(uint *)(param_1 + 0x31) = uVar2;
          param_1[0x2f] = (longlong)plVar12;
          plVar16 = plVar12;
          if (uVar2 != 0) {
            do {
              plVar12 = plVar16 + 3;
              uVar18 = uVar18 + 1;
              *plVar16 = (longlong)plVar12;
              plVar16 = plVar12;
            } while (uVar18 < *(uint *)(param_1 + 0x31));
          }
          plVar12[-3] = 0;
        }
      }
      uVar18 = 0;
      if (uVar2 != 0) {
        bVar19 = (byte)local_40;
        do {
          uVar3 = *local_res10;
          pcVar1 = (char *)((longlong)local_res10 + 6);
          bVar14 = ((byte)local_res10[1] & 3) << 3;
          bVar19 = bVar14 | bVar19 & 0xe0 | *(byte *)((longlong)local_res10 + 5) & 7;
          local_40 = CONCAT31(local_40._1_3_,bVar19);
          local_res10 = (uint *)((longlong)local_res10 + 0xe);
          uVar6 = *(undefined8 *)pcVar1;
          uVar5 = *(undefined8 *)pcVar1;
          *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | (bVar14 & 8) >> 3;
          for (puVar11 = (undefined8 *)param_1[0x2d]; puVar11 != (undefined8 *)0x0;
              puVar11 = (undefined8 *)*puVar11) {
            if (*(uint *)(puVar11 + 1) == uVar3) {
              if ((undefined8 *)((longlong)puVar11 + 0xc) != (undefined8 *)0x0) {
                *(undefined8 *)((longlong)puVar11 + 0xc) = uVar5;
                *(undefined4 *)((longlong)puVar11 + 0x14) = local_40;
                goto LAB_1453943fd;
              }
              break;
            }
          }
          plVar12 = (longlong *)param_1[0x2f];
          if (plVar12 == (longlong *)0x0) {
            plVar12 = AK::MemoryMgr::Malloc(0,0x18);
            if (plVar12 == (longlong *)0x0) {
              return 0x34;
            }
            *plVar12 = param_1[0x2f];
            param_1[0x2f] = (longlong)plVar12;
          }
          if ((undefined8 *)param_1[0x2e] == (undefined8 *)0x0) {
            param_1[0x2d] = (longlong)plVar12;
          }
          else {
            *(undefined8 *)param_1[0x2e] = plVar12;
          }
          plVar12 = (longlong *)param_1[0x2f];
          param_1[0x2e] = (longlong)plVar12;
          param_1[0x2f] = *plVar12;
          *plVar12 = 0;
          *(int *)((longlong)param_1 + 0x18c) = *(int *)((longlong)param_1 + 0x18c) + 1;
          lVar7 = param_1[0x2e];
          if ((uint *)(lVar7 + 8) == (uint *)0x0) {
            return 0x34;
          }
          *(uint *)(lVar7 + 8) = uVar3;
          *(undefined8 *)(lVar7 + 0xc) = uVar6;
          *(undefined4 *)(lVar7 + 0x14) = local_40;
          if ((undefined8 *)(lVar7 + 0xc) == (undefined8 *)0x0) {
            return 0x34;
          }
LAB_1453943fd:
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar2);
      }
    }
  }
  return iVar9;
}



// FUNCTION 145394440 FUN_145394440 body=1292 status=ok
// SIG undefined FUN_145394440(void)

void FUN_145394440(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,undefined8 param_6,int param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint *puVar8;
  longlong lVar9;
  char cVar10;
  longlong *local_88;
  longlong *local_80;
  
  if (*(int *)(param_1 + 0x164) != 0) {
    if (*(char *)(param_1 + 0x134) == '\x03') {
      if (param_5 != '\0') {
        uVar4 = *(undefined8 *)(param_1 + 0x130);
        puVar6 = (undefined8 *)FUN_145392420(param_4);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = uVar4;
        }
      }
      iVar5 = param_8;
      if (*(int *)(param_1 + 0x130) != param_7) {
        iVar5 = FUN_14507fe40(g_pGameSyncMgr);
      }
      local_88 = *(longlong **)(param_1 + 0x140);
      local_80 = local_88;
      plVar7 = local_88;
      if (local_88 == (longlong *)0x0) {
LAB_14539455a:
        iVar5 = *(int *)(param_1 + 0x138);
        goto joined_r0x000145394566;
      }
      do {
        if ((int)local_80[1] == iVar5) {
          local_80 = local_80 + 2;
          if (local_80 == (longlong *)0x0) goto LAB_14539455a;
          goto joined_r0x000145394591;
        }
        local_80 = (longlong *)*local_80;
      } while (local_80 != (longlong *)0x0);
      iVar5 = *(int *)(param_1 + 0x138);
      do {
        if ((int)plVar7[1] == iVar5) {
          local_80 = plVar7 + 2;
          goto LAB_1453945a0;
        }
        plVar7 = (longlong *)*plVar7;
joined_r0x000145394566:
      } while (plVar7 != (longlong *)0x0);
      local_80 = (longlong *)0x0;
joined_r0x000145394591:
      for (; local_88 != (longlong *)0x0; local_88 = (longlong *)*local_88) {
LAB_1453945a0:
        puVar8 = (uint *)local_88[3];
        cVar10 = param_5;
        if (local_88 + 2 != local_80) {
          cVar10 = '\0';
        }
        if (puVar8 != puVar8 + *(uint *)(local_88 + 4)) {
          do {
            piVar1 = DAT_14c791060;
            uVar3 = *puVar8;
            do {
              while (iVar5 = *piVar1, iVar5 < 0) {
                EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
                if (*piVar1 < 0) goto LAB_1453945ef;
                LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
              }
              LOCK();
              iVar2 = *piVar1;
              if (iVar5 == iVar2) {
                *piVar1 = iVar5 + 1;
              }
              UNLOCK();
            } while (iVar5 != iVar2);
LAB_1453945ef:
            if (piVar1[0x12] == 0) {
              lVar9 = 0;
            }
            else {
              for (lVar9 = *(longlong *)
                            (*(longlong *)(piVar1 + 0x10) +
                            ((ulonglong)uVar3 % (ulonglong)(uint)piVar1[0x12]) * 8); lVar9 != 0;
                  lVar9 = *(longlong *)(lVar9 + 8)) {
                if (*(uint *)(lVar9 + 0x10) == uVar3) goto LAB_145394625;
              }
              lVar9 = 0;
LAB_145394625:
              if (lVar9 != 0) {
                LOCK();
                *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
                UNLOCK();
              }
            }
            iVar5 = *piVar1;
            while (-1 < iVar5) {
              LOCK();
              iVar2 = *piVar1;
              if (iVar5 == iVar2) {
                *piVar1 = iVar5 + -1;
              }
              UNLOCK();
              if (iVar5 == iVar2) {
                if ((iVar5 + -1 == 0) && (0 < piVar1[0xc])) {
                  SetEvent(*(HANDLE *)(piVar1 + 0xe));
                }
                goto LAB_145394690;
              }
              iVar5 = *piVar1;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_145394690:
            plVar7 = (longlong *)(lVar9 + -0x10);
            if (lVar9 == 0) {
              plVar7 = (longlong *)0x0;
            }
            if (plVar7 != (longlong *)0x0) {
              (**(code **)(*plVar7 + 0x68))
                        (plVar7,param_2,param_3,param_4,cVar10,param_6,param_7,param_8);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0x24);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(plVar7[2] + 0x18))();
              }
            }
            puVar8 = puVar8 + 1;
          } while (puVar8 != (uint *)(local_88[3] + (ulonglong)*(uint *)(local_88 + 4) * 4));
        }
      }
    }
    else {
      for (puVar6 = *(undefined8 **)(param_1 + 0x140); puVar6 != (undefined8 *)0x0;
          puVar6 = (undefined8 *)*puVar6) {
        puVar8 = (uint *)puVar6[3];
        if (puVar8 != puVar8 + *(uint *)(puVar6 + 4)) {
          do {
            piVar1 = DAT_14c791060;
            uVar3 = *puVar8;
            do {
              while (iVar5 = *piVar1, iVar5 < 0) {
                EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
                if (*piVar1 < 0) goto LAB_1453947cf;
                LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
              }
              LOCK();
              iVar2 = *piVar1;
              if (iVar5 == iVar2) {
                *piVar1 = iVar5 + 1;
              }
              UNLOCK();
            } while (iVar5 != iVar2);
LAB_1453947cf:
            if (piVar1[0x12] == 0) {
              lVar9 = 0;
            }
            else {
              for (lVar9 = *(longlong *)
                            (*(longlong *)(piVar1 + 0x10) +
                            ((ulonglong)uVar3 % (ulonglong)(uint)piVar1[0x12]) * 8); lVar9 != 0;
                  lVar9 = *(longlong *)(lVar9 + 8)) {
                if (*(uint *)(lVar9 + 0x10) == uVar3) goto LAB_145394805;
              }
              lVar9 = 0;
LAB_145394805:
              if (lVar9 != 0) {
                LOCK();
                *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
                UNLOCK();
              }
            }
            iVar5 = *piVar1;
            while (-1 < iVar5) {
              LOCK();
              iVar2 = *piVar1;
              if (iVar5 == iVar2) {
                *piVar1 = iVar5 + -1;
              }
              UNLOCK();
              if (iVar5 == iVar2) {
                if ((iVar5 + -1 == 0) && (0 < piVar1[0xc])) {
                  SetEvent(*(HANDLE *)(piVar1 + 0xe));
                }
                goto LAB_145394860;
              }
              iVar5 = *piVar1;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_145394860:
            plVar7 = (longlong *)(lVar9 + -0x10);
            if (lVar9 == 0) {
              plVar7 = (longlong *)0x0;
            }
            if (plVar7 != (longlong *)0x0) {
              (**(code **)(*plVar7 + 0x68))
                        (plVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0x24);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(plVar7[2] + 0x18))();
              }
            }
            puVar8 = puVar8 + 1;
          } while (puVar8 != (uint *)(puVar6[3] + (ulonglong)*(uint *)(puVar6 + 4) * 4));
        }
      }
    }
  }
  return;
}



// FUNCTION 145394960 FUN_145394960 body=159 status=ok
// SIG undefined FUN_145394960(void)

void FUN_145394960(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  uVar1 = *param_4;
  uVar2 = *param_5;
  if (*(char *)(lVar3 + 0x1a0) != '\0') {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      FUN_1450ad0e0(g_pRegistryMgr,*(undefined4 *)(lVar3 + 0x20));
    }
    else {
      FUN_1450ad020(g_pRegistryMgr,&param_5,*(longlong *)(param_1 + 0x30),
                    *(undefined4 *)(lVar3 + 0x20));
      param_5._4_4_ = 1;
      param_5._0_4_ = 0;
      FUN_1450ad080(g_pRegistryMgr,*(undefined8 *)(param_1 + 0x30),
                    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x20),&param_5);
    }
  }
  FUN_145394a10(*(undefined8 *)(param_1 + 0x10),param_1,uVar1,uVar2);
  return;
}



// FUNCTION 145394a10 FUN_145394a10 body=691 status=ok
// SIG undefined FUN_145394a10(void)

void FUN_145394a10(longlong param_1,longlong param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 local_48;
  uint local_40;
  
  if (param_3 == 0) {
    param_3 = *(int *)(param_1 + 0x138);
  }
  puVar8 = *(undefined8 **)(param_1 + 0x140);
  for (puVar3 = puVar8; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
    if (*(int *)(puVar3 + 1) == param_3) {
      puVar12 = puVar3 + 2;
      plVar11 = puVar3 + 3;
      puVar10 = (uint *)(puVar3 + 4);
      goto LAB_145394a6b;
    }
  }
  puVar12 = (undefined8 *)0x0;
  puVar10 = (uint *)&DAT_00000010;
  plVar11 = (longlong *)&DAT_00000008;
LAB_145394a6b:
  if (param_4 != 0) {
    for (; puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8) {
      if (*(int *)(puVar8 + 1) == param_4) {
        puVar8 = puVar8 + 2;
        if (puVar8 != (undefined8 *)0x0) goto LAB_145394ada;
        break;
      }
    }
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    for (puVar8 = *(undefined8 **)(param_1 + 0x140); puVar8 != (undefined8 *)0x0;
        puVar8 = (undefined8 *)*puVar8) {
      if (*(int *)(puVar8 + 1) == *(int *)(param_1 + 0x138)) {
        puVar8 = puVar8 + 2;
        if (puVar8 != (undefined8 *)0x0) goto LAB_145394ada;
        break;
      }
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_145394ada:
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  if ((puVar12 != (undefined8 *)0x0) && (piVar7 = (int *)puVar12[1], piVar7 != piVar7 + *puVar10)) {
    uVar9 = local_40 & 0xff;
    do {
      iVar2 = *piVar7;
      for (puVar3 = *(undefined8 **)(param_1 + 0x168); puVar3 != (undefined8 *)0x0;
          puVar3 = (undefined8 *)*puVar3) {
        if (*(int *)(puVar3 + 1) == iVar2) {
          if ((undefined8 *)((longlong)puVar3 + 0xc) != (undefined8 *)0x0) {
            local_48 = *(undefined8 *)((longlong)puVar3 + 0xc);
            local_40 = *(uint *)((longlong)puVar3 + 0x14);
            uVar9 = local_40;
            goto LAB_145394b47;
          }
          break;
        }
      }
      local_48 = 0;
      local_40 = CONCAT31(local_40._1_3_,(byte)uVar9) & 0xffffffe1 | 1;
      uVar9 = (uint)((byte)uVar9 & 0xe1 | 1);
LAB_145394b47:
      if ((((*(byte *)(param_1 + 0xd6) & 2) != 0) && ((uVar9 & 0x10) != 0)) &&
         (puVar8 != (undefined8 *)0x0)) {
        piVar5 = (int *)puVar8[1];
        piVar6 = piVar5;
        if (piVar5 != piVar5 + *(uint *)(puVar8 + 2)) {
          do {
            if (*piVar6 == iVar2) goto LAB_145394b96;
            piVar6 = piVar6 + 1;
          } while (piVar6 != piVar5 + *(uint *)(puVar8 + 2));
        }
      }
      FUN_1453951a0(param_1,iVar2,&local_48,uVar4,uVar1);
LAB_145394b96:
      piVar7 = piVar7 + 1;
    } while (piVar7 != (int *)(*plVar11 + (ulonglong)*puVar10 * 4));
  }
  if ((puVar8 != (undefined8 *)0x0) &&
     (piVar7 = (int *)puVar8[1], piVar7 != piVar7 + *(uint *)(puVar8 + 2))) {
    do {
      iVar2 = *piVar7;
      for (puVar3 = *(undefined8 **)(param_1 + 0x168); puVar3 != (undefined8 *)0x0;
          puVar3 = (undefined8 *)*puVar3) {
        if (*(int *)(puVar3 + 1) == iVar2) {
          if (puVar3 != (undefined8 *)&DAT_fffffffffffffff4) {
            uVar9 = *(uint *)((longlong)puVar3 + 0x14);
            goto LAB_145394c19;
          }
          break;
        }
      }
      uVar9 = 0;
LAB_145394c19:
      if (((uVar9 & 0x10) != 0) && (puVar12 != (undefined8 *)0x0)) {
        piVar5 = (int *)puVar12[1];
        piVar6 = piVar5;
        if (piVar5 != piVar5 + *puVar10) {
          do {
            if (*piVar6 == iVar2) goto LAB_145394c53;
            piVar6 = piVar6 + 1;
          } while (piVar6 != piVar5 + *puVar10);
        }
      }
      FUN_145394dc0(param_1,iVar2,param_2);
LAB_145394c53:
      piVar7 = piVar7 + 1;
    } while (piVar7 != (int *)(puVar8[1] + (ulonglong)*(uint *)(puVar8 + 2) * 4));
  }
  return;
}



// FUNCTION 145394cd0 FUN_145394cd0 body=146 status=ok
// SIG undefined FUN_145394cd0(void)

ulonglong FUN_145394cd0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = *(undefined4 **)(param_2 + 8);
  if (puVar2 == puVar2 + *(uint *)(param_2 + 0x10)) {
    return 1;
  }
  do {
    uVar1 = FUN_1450d5430(*puVar2);
    if ((int)uVar1 != 1) {
      puVar3 = *(undefined4 **)(param_2 + 8);
      if (puVar3 == puVar2) {
        return uVar1;
      }
      do {
        FUN_1450d5550(*puVar3);
        puVar3 = puVar3 + 1;
      } while (puVar3 != puVar2);
      return uVar1 & 0xffffffff;
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 != (undefined4 *)
                     (*(longlong *)(param_2 + 8) + (ulonglong)*(uint *)(param_2 + 0x10) * 4));
  return uVar1 & 0xffffffff;
}



// FUNCTION 145394d70 FUN_145394d70 body=70 status=ok
// SIG undefined FUN_145394d70(void)

void FUN_145394d70(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 8);
  if (puVar1 != puVar1 + *(uint *)(param_2 + 0x10)) {
    do {
      FUN_1450d5550(*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)
                       (*(longlong *)(param_2 + 8) + (ulonglong)*(uint *)(param_2 + 0x10) * 4));
  }
  return;
}



// FUNCTION 145394dc0 FUN_145394dc0 body=984 status=ok
// SIG undefined FUN_145394dc0(void)

ulonglong FUN_145394dc0(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong extraout_RAX;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  byte local_res20 [8];
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_348 [2];
  longlong *local_340;
  undefined8 local_338;
  undefined4 *local_330;
  int *local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined8 local_2c0;
  ulonglong local_2b8;
  undefined2 local_2b0 [2];
  char local_2ab;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 local_228;
  undefined4 local_220;
  undefined8 local_21c;
  undefined8 local_214;
  undefined4 local_20c;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined2 local_1d8;
  undefined1 local_1d6;
  byte local_1d5;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  byte local_3c;
  byte local_38;
  
  puVar4 = DAT_14c791060;
  do {
    while (uVar7 = *puVar4, (int)uVar7 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(puVar4 + 2));
      if ((int)*puVar4 < 0) goto LAB_145394e02;
      LeaveCriticalSection((LPCRITICAL_SECTION)(puVar4 + 2));
    }
    LOCK();
    uVar1 = *puVar4;
    if (uVar7 == uVar1) {
      *puVar4 = uVar7 + 1;
    }
    UNLOCK();
  } while (uVar7 != uVar1);
LAB_145394e02:
  plVar10 = (longlong *)0x0;
  plVar11 = plVar10;
  if (puVar4[0x12] != 0) {
    for (plVar9 = *(longlong **)
                   (*(longlong *)(puVar4 + 0x10) +
                   ((ulonglong)param_2 % (ulonglong)puVar4[0x12]) * 8);
        (plVar11 = plVar10, plVar9 != (longlong *)0x0 &&
        (plVar11 = plVar9, *(uint *)(plVar9 + 2) != param_2)); plVar9 = (longlong *)plVar9[1]) {
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar11 + 0x14) = *(int *)((longlong)plVar11 + 0x14) + 1;
      UNLOCK();
    }
  }
  uVar7 = *puVar4;
  while (-1 < (int)uVar7) {
    LOCK();
    uVar1 = *puVar4;
    bVar12 = uVar7 == uVar1;
    if (bVar12) {
      *puVar4 = uVar7 - 1;
      uVar1 = uVar7;
    }
    uVar8 = (ulonglong)uVar1;
    UNLOCK();
    if (bVar12) {
      if ((uVar7 - 1 == 0) && (uVar8 = (ulonglong)puVar4[0xc], 0 < (int)puVar4[0xc])) {
        uVar7 = SetEvent(*(HANDLE *)(puVar4 + 0xe));
        uVar8 = (ulonglong)uVar7;
      }
      goto LAB_145394e7f;
    }
    uVar7 = *puVar4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(puVar4 + 2));
  uVar8 = extraout_RAX;
LAB_145394e7f:
  plVar9 = plVar11 + -2;
  if (plVar11 == (longlong *)0x0) {
    plVar9 = plVar10;
  }
  if (plVar9 == (longlong *)0x0) {
    return uVar8;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x168);
  local_354 = 4;
  local_358 = 0;
  for (; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
    if (*(uint *)(puVar2 + 1) == param_2) {
      if (puVar2 != (undefined8 *)&DAT_fffffffffffffff4) {
        local_358 = *(undefined4 *)(puVar2 + 2);
      }
      break;
    }
  }
  local_310 = *(undefined8 *)(param_3 + 0x60);
  uStack_308 = *(undefined8 *)(param_3 + 0x68);
  local_300 = *(undefined8 *)(param_3 + 0x70);
  uStack_2f8 = *(undefined8 *)(param_3 + 0x78);
  local_340 = (longlong *)0x0;
  local_318 = 0;
  local_2f0 = *(undefined8 *)(param_3 + 0x80);
  uStack_2e8 = *(undefined8 *)(param_3 + 0x88);
  local_320 = 0;
  local_328 = (int *)0x0;
  local_2e0 = *(undefined4 *)(param_3 + 0x90);
  uStack_2dc = *(undefined4 *)(param_3 + 0x94);
  uStack_2d8 = *(undefined4 *)(param_3 + 0x98);
  uStack_2d4 = *(undefined4 *)(param_3 + 0x9c);
  local_2b8 = 0;
  local_2b0[0] = 0xff00;
  local_2d0 = *(undefined8 *)(param_3 + 0xa0);
  local_2a0 = 0;
  FUN_1450896a0(&local_298);
  local_3c = local_3c & 0xfe;
  piVar3 = *(int **)(param_3 + 0x18);
  local_238 = 0;
  local_1d5 = local_1d5 & 0xf8;
  local_1d6 = 0;
  local_340 = plVar9 + 2;
  local_1d0 = 0;
  local_38 = local_38 & 0xf3 | 3;
  local_1c8 = 0;
  local_338 = *(undefined8 *)(param_3 + 0x30);
  local_330 = &local_358;
  local_318._4_4_ = *(undefined4 *)(param_3 + 0x2c);
  local_320 = *(undefined8 *)(param_3 + 0x20);
  local_318._0_4_ = *(undefined4 *)(param_3 + 0x28);
  local_68 = 0;
  local_60 = 0;
  local_228 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_21c = 0;
  local_214 = 0;
  local_20c = 0;
  local_1d8 = 0;
  local_220 = 0x3f800000;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_348[0] = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  if (local_328 != (int *)0x0) {
    FUN_144d4a460();
  }
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  local_2c8 = *(undefined4 *)(param_3 + 0xa8);
  local_2c4 = 0;
  local_2c0 = 0;
  local_2b8 = local_2b8 & 0xffffffff00000000;
  local_328 = piVar3;
  if (((char)local_2b0[0] == -0x70) && (local_2ab != '\0')) {
    local_res20[0] = local_38 & 1;
    uVar5 = FUN_1450e98e0(local_348);
    iVar6 = FUN_14536f6c0(plVar9,local_2b0,uVar5,local_res20,local_338,local_318._4_4_);
    if (iVar6 != 1) goto LAB_145395117;
    local_38 = local_res20[0] & 1 | local_38 & 0xfe;
  }
  iVar6 = FUN_14536f160(plVar9,local_348);
  if (iVar6 == 1) {
    (**(code **)(*plVar9 + 0x250))(plVar9,local_348);
  }
LAB_145395117:
  LOCK();
  piVar3 = (int *)((longlong)plVar9 + 0x24);
  iVar6 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar6 == 1) {
    (**(code **)(plVar9[2] + 0x18))();
  }
  uVar8 = FUN_144d51aa0(&local_298);
  if (local_328 != (int *)0x0) {
    uVar8 = FUN_144d4a460();
  }
  return uVar8;
}



// FUNCTION 1453951a0 FUN_1453951a0 body=416 status=ok
// SIG undefined FUN_1453951a0(void)

ulonglong FUN_1453951a0(undefined8 param_1,uint param_2,undefined4 *param_3,undefined8 param_4,
                       undefined4 param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong extraout_RAX;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined2 local_29;
  undefined8 local_20;
  
  puVar1 = DAT_14c791060;
  do {
    while (uVar3 = *puVar1, (int)uVar3 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(puVar1 + 2));
      if ((int)*puVar1 < 0) goto LAB_1453951e1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(puVar1 + 2));
    }
    LOCK();
    uVar2 = *puVar1;
    if (uVar3 == uVar2) {
      *puVar1 = uVar3 + 1;
    }
    UNLOCK();
  } while (uVar3 != uVar2);
LAB_1453951e1:
  plVar6 = (longlong *)0x0;
  plVar7 = plVar6;
  if (puVar1[0x12] != 0) {
    for (plVar5 = *(longlong **)
                   (*(longlong *)(puVar1 + 0x10) +
                   ((ulonglong)param_2 % (ulonglong)puVar1[0x12]) * 8);
        (plVar7 = plVar6, plVar5 != (longlong *)0x0 &&
        (plVar7 = plVar5, *(uint *)(plVar5 + 2) != param_2)); plVar5 = (longlong *)plVar5[1]) {
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0x14) = *(int *)((longlong)plVar7 + 0x14) + 1;
      UNLOCK();
    }
  }
  uVar3 = *puVar1;
  do {
    if ((int)uVar3 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(puVar1 + 2));
      uVar4 = extraout_RAX;
LAB_14539525a:
      plVar5 = plVar7 + -2;
      if (plVar7 == (longlong *)0x0) {
        plVar5 = plVar6;
      }
      if (plVar5 != (longlong *)0x0) {
        if ((*(byte *)(param_3 + 2) & 7) == 1) {
          local_34 = *param_3;
          local_29 = 0;
          local_20 = 0;
          local_2c = 0;
          local_2a = 0;
          local_30 = 4;
          local_48[0] = 0;
          local_38 = param_5;
          local_40 = param_4;
          (**(code **)(*plVar5 + 0x80))(plVar5,local_48);
        }
        else {
          (**(code **)(*plVar5 + 0xa0))(plVar5,param_4,param_1,0);
        }
        FUN_145081890(DAT_14c790fd8,plVar5,param_4,param_5);
        LOCK();
        puVar1 = (uint *)((longlong)plVar5 + 0x24);
        uVar3 = *puVar1;
        uVar4 = (ulonglong)uVar3;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if (uVar3 == 1) {
          uVar4 = (**(code **)(plVar5[2] + 0x18))();
        }
      }
      return uVar4;
    }
    LOCK();
    uVar2 = *puVar1;
    bVar8 = uVar3 == uVar2;
    if (bVar8) {
      *puVar1 = uVar3 - 1;
      uVar2 = uVar3;
    }
    uVar4 = (ulonglong)uVar2;
    UNLOCK();
    if (bVar8) {
      if ((uVar3 - 1 == 0) && (uVar4 = (ulonglong)puVar1[0xc], 0 < (int)puVar1[0xc])) {
        uVar3 = SetEvent(*(HANDLE *)(puVar1 + 0xe));
        uVar4 = (ulonglong)uVar3;
      }
      goto LAB_14539525a;
    }
    uVar3 = *puVar1;
  } while( true );
}



// FUNCTION 145395340 FUN_145395340 body=595 status=ok
// SIG undefined FUN_145395340(void)

void FUN_145395340(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      lVar6 = *(longlong *)(param_1 + 0x198);
      iVar1 = param_2[4];
      lVar5 = *(longlong *)(param_2 + 2);
      if (lVar6 == 0) {
        return;
      }
      do {
        if ((((lVar5 == 0) || (lVar5 == *(longlong *)(lVar6 + 0x30))) &&
            ((iVar1 == 0 || (*(int *)(lVar6 + 0x2c) == iVar1)))) && (*(int *)(lVar6 + 0xa8) != 1)) {
          *(undefined4 *)(lVar6 + 0xa8) = 1;
        }
        lVar6 = *(longlong *)(lVar6 + 8);
      } while (lVar6 != 0);
      return;
    }
    if (iVar1 == 2) {
      lVar5 = *(longlong *)(param_1 + 0x198);
      iVar1 = param_2[4];
      lVar6 = *(longlong *)(param_2 + 2);
      if (lVar5 == 0) {
        return;
      }
      do {
        if (((lVar6 == 0) || (lVar6 == *(longlong *)(lVar5 + 0x30))) &&
           (((iVar1 == 0 || (*(int *)(lVar5 + 0x2c) == iVar1)) && (*(int *)(lVar5 + 0xa8) != 0)))) {
          *(undefined4 *)(lVar5 + 0xa8) = 0;
        }
        lVar5 = *(longlong *)(lVar5 + 8);
      } while (lVar5 != 0);
      return;
    }
    if (iVar1 != 3) {
      return;
    }
  }
  lVar5 = 0;
  puVar2 = *(undefined8 **)(param_2 + 2);
  lVar6 = *(longlong *)(param_1 + 0x198);
  iVar1 = param_2[4];
  bVar3 = false;
  if (lVar6 != 0) {
    do {
      if (((puVar2 == (undefined8 *)0x0) || (puVar2 == *(undefined8 **)(lVar6 + 0x30))) &&
         ((iVar1 == 0 || (*(int *)(lVar6 + 0x2c) == iVar1)))) {
        lVar7 = *(longlong *)(lVar6 + 8);
        if (lVar6 == *(longlong *)(param_1 + 0x198)) {
          *(longlong *)(param_1 + 0x198) = lVar7;
        }
        else {
          *(longlong *)(lVar5 + 8) = lVar7;
        }
        *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + -1;
        if ((puVar2 == (undefined8 *)0x0) || (bVar3)) {
          if ((*(char *)(param_1 + 0x1a0) != '\0') &&
             ((puVar2 == (undefined8 *)0x0 && (*(longlong *)(lVar6 + 0x30) != 0)))) {
            FUN_1450ad0e0(g_pRegistryMgr,*(undefined4 *)(param_1 + 0x20));
          }
        }
        else {
          uVar4 = *(uint *)(puVar2 + 0xc);
          if ((uVar4 < 2) && (*(char *)((longlong)puVar2 + 100) != '\0')) {
            *(uint *)(puVar2 + 0xc) = uVar4 + 1;
            if ((1 < uVar4 + 1) || (*(char *)((longlong)puVar2 + 100) == '\0')) {
              FUN_145355090(puVar2);
              bVar3 = true;
              goto LAB_1453954ef;
            }
          }
          else {
            *(uint *)(puVar2 + 0xc) = uVar4 + 1;
          }
          bVar3 = true;
        }
LAB_1453954ef:
        FUN_1453955a0(param_1,lVar6);
      }
      else {
        lVar7 = *(longlong *)(lVar6 + 8);
        lVar5 = lVar6;
      }
      lVar6 = lVar7;
    } while (lVar7 != 0);
    if (bVar3) {
      if (*(char *)(param_1 + 0x1a0) != '\0') {
        FUN_1450ad0e0(g_pRegistryMgr,*(undefined4 *)(param_1 + 0x20),puVar2);
      }
      if ((*(uint *)(puVar2 + 0xc) < 2) && (*(char *)((longlong)puVar2 + 100) != '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      uVar4 = *(uint *)(puVar2 + 0xc) - 1;
      *(uint *)(puVar2 + 0xc) = uVar4;
      if ((uVar4 == 0) || (((bVar3 && (uVar4 < 2)) && (*(char *)((longlong)puVar2 + 100) != '\0'))))
      {
        FUN_1453550a0(puVar2);
      }
      if (*(int *)(puVar2 + 0xc) == 0) {
        (**(code **)*puVar2)(puVar2,0);
        AK::MemoryMgr::Free(4,puVar2);
      }
    }
  }
  return;
}



// FUNCTION 1453955a0 FUN_1453955a0 body=355 status=ok
// SIG undefined FUN_1453955a0(void)

void FUN_1453955a0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  
  FUN_14507ee00(g_pGameSyncMgr,param_1[0x26],param_2);
  FUN_1450b28b0(DAT_14c790fc0,*(undefined4 *)((longlong)param_2 + 0x2c));
  (**(code **)(*param_1 + 0x120))(param_1);
  FUN_1450dabf0(param_1);
  puVar3 = (undefined8 *)param_2[6];
  if ((*(uint *)(puVar3 + 0xc) < 2) && (*(char *)((longlong)puVar3 + 100) != '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  uVar8 = *(uint *)(puVar3 + 0xc) - 1;
  *(uint *)(puVar3 + 0xc) = uVar8;
  if ((uVar8 == 0) || (((bVar4 && (uVar8 < 2)) && (*(char *)((longlong)puVar3 + 100) != '\0')))) {
    FUN_1453550a0(puVar3);
  }
  if (*(int *)(puVar3 + 0xc) == 0) {
    (**(code **)*puVar3)(puVar3,0);
    AK::MemoryMgr::Free(4,puVar3);
  }
  if (param_2[3] != 0) {
    FUN_144d4a460();
  }
  plVar5 = (longlong *)0x0;
  for (plVar6 = DAT_14c7fdf80;
      (plVar6 != (longlong *)0x0 && ((param_2 < plVar6 || (plVar6 + 0xb00 <= param_2))));
      plVar6 = (longlong *)plVar6[0xb00]) {
    plVar5 = plVar6;
  }
  if (plVar6[0xb02] == 0) {
    plVar6[0xb02] = (longlong)param_2;
    *param_2 = 0;
  }
  else {
    *param_2 = plVar6[0xb02];
    plVar6[0xb02] = (longlong)param_2;
  }
  *(int *)(plVar6 + 0xb01) = (int)plVar6[0xb01] + 1;
  if ((int)plVar6[0xb01] == 0x80) {
    plVar7 = (longlong *)plVar6[0xb00];
    if (plVar6 != DAT_14c7fdf80) {
      plVar5[0xb00] = plVar6[0xb00];
      plVar7 = DAT_14c7fdf80;
    }
    DAT_14c7fdf80 = plVar7;
    AK::MemoryMgr::Free(0,plVar6);
  }
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x24);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (**(code **)(param_1[2] + 0x18))();
  }
  return;
}



// FUNCTION 145395710 FUN_145395710 body=117 status=ok
// SIG undefined FUN_145395710(void)

undefined8 * FUN_145395710(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d44bf8;
  param_1[1] = &PTR_FUN_149d44e78;
  param_1[2] = &PTR_LAB_149d44e80;
  param_1[5] = &PTR_LAB_149d44ea8;
  param_1[0x23] = &PTR_FUN_149d44f28;
  FUN_145392870();
  FUN_1455400f0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x1a8);
  }
  return param_1;
}



// FUNCTION 145395790 FUN_145395790 body=918 status=ok
// SIG undefined FUN_145395790(void)

longlong FUN_145395790(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  
  *(undefined8 *)(param_1 + 0x5800) = 0;
  *(undefined4 *)(param_1 + 0x5808) = 0;
  *(undefined8 *)(param_1 + 0x5810) = 0;
  uVar3 = 2;
  do {
    plVar2 = (longlong *)((ulonglong)(uVar3 - 2) * 0xb0 + param_1);
    if (*(longlong *)(param_1 + 0x5810) == 0) {
      *(longlong **)(param_1 + 0x5810) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x5810);
      *(longlong **)(param_1 + 0x5810) = plVar2;
    }
    *(int *)(param_1 + 0x5808) = *(int *)(param_1 + 0x5808) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 - 1) * 0xb0 + param_1);
    if (*(longlong *)(param_1 + 0x5810) == 0) {
      *(longlong **)(param_1 + 0x5810) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x5810);
      *(longlong **)(param_1 + 0x5810) = plVar2;
    }
    *(int *)(param_1 + 0x5808) = *(int *)(param_1 + 0x5808) + 1;
    plVar2 = (longlong *)((ulonglong)uVar3 * 0xb0 + param_1);
    if (*(longlong *)(param_1 + 0x5810) == 0) {
      *(longlong **)(param_1 + 0x5810) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x5810);
      *(longlong **)(param_1 + 0x5810) = plVar2;
    }
    *(int *)(param_1 + 0x5808) = *(int *)(param_1 + 0x5808) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 1) * 0xb0 + param_1);
    if (*(longlong *)(param_1 + 0x5810) == 0) {
      *(longlong **)(param_1 + 0x5810) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x5810);
      *(longlong **)(param_1 + 0x5810) = plVar2;
    }
    *(int *)(param_1 + 0x5808) = *(int *)(param_1 + 0x5808) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 2) * 0xb0 + param_1);
    if (*(longlong *)(param_1 + 0x5810) == 0) {
      *(longlong **)(param_1 + 0x5810) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x5810);
      *(longlong **)(param_1 + 0x5810) = plVar2;
    }
    *(int *)(param_1 + 0x5808) = *(int *)(param_1 + 0x5808) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 3) * 0xb0 + param_1);
    if (*(longlong *)(param_1 + 0x5810) == 0) {
      *(longlong **)(param_1 + 0x5810) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x5810);
      *(longlong **)(param_1 + 0x5810) = plVar2;
    }
    *(int *)(param_1 + 0x5808) = *(int *)(param_1 + 0x5808) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 4) * 0xb0 + param_1);
    if (*(longlong *)(param_1 + 0x5810) == 0) {
      *(longlong **)(param_1 + 0x5810) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x5810);
      *(longlong **)(param_1 + 0x5810) = plVar2;
    }
    *(int *)(param_1 + 0x5808) = *(int *)(param_1 + 0x5808) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 5) * 0xb0 + param_1);
    if (*(longlong *)(param_1 + 0x5810) == 0) {
      *(longlong **)(param_1 + 0x5810) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x5810);
      *(longlong **)(param_1 + 0x5810) = plVar2;
    }
    *(int *)(param_1 + 0x5808) = *(int *)(param_1 + 0x5808) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 6) * 0xb0 + param_1);
    if (*(longlong *)(param_1 + 0x5810) == 0) {
      *(longlong **)(param_1 + 0x5810) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x5810);
      *(longlong **)(param_1 + 0x5810) = plVar2;
    }
    *(int *)(param_1 + 0x5808) = *(int *)(param_1 + 0x5808) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 7) * 0xb0 + param_1);
    if (*(longlong *)(param_1 + 0x5810) == 0) {
      *(longlong **)(param_1 + 0x5810) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x5810);
      *(longlong **)(param_1 + 0x5810) = plVar2;
    }
    *(int *)(param_1 + 0x5808) = *(int *)(param_1 + 0x5808) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 8) * 0xb0 + param_1);
    if (*(longlong *)(param_1 + 0x5810) == 0) {
      *(longlong **)(param_1 + 0x5810) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x5810);
      *(longlong **)(param_1 + 0x5810) = plVar2;
    }
    *(int *)(param_1 + 0x5808) = *(int *)(param_1 + 0x5808) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 9) * 0xb0 + param_1);
    if (*(longlong *)(param_1 + 0x5810) == 0) {
      *(longlong **)(param_1 + 0x5810) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x5810);
      *(longlong **)(param_1 + 0x5810) = plVar2;
    }
    *(int *)(param_1 + 0x5808) = *(int *)(param_1 + 0x5808) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 10) * 0xb0 + param_1);
    if (*(longlong *)(param_1 + 0x5810) == 0) {
      *(longlong **)(param_1 + 0x5810) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x5810);
      *(longlong **)(param_1 + 0x5810) = plVar2;
    }
    *(int *)(param_1 + 0x5808) = *(int *)(param_1 + 0x5808) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 0xb) * 0xb0 + param_1);
    if (*(longlong *)(param_1 + 0x5810) == 0) {
      *(longlong **)(param_1 + 0x5810) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x5810);
      *(longlong **)(param_1 + 0x5810) = plVar2;
    }
    *(int *)(param_1 + 0x5808) = *(int *)(param_1 + 0x5808) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 0xc) * 0xb0 + param_1);
    if (*(longlong *)(param_1 + 0x5810) == 0) {
      *(longlong **)(param_1 + 0x5810) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x5810);
      *(longlong **)(param_1 + 0x5810) = plVar2;
    }
    *(int *)(param_1 + 0x5808) = *(int *)(param_1 + 0x5808) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 0xd) * 0xb0 + param_1);
    if (*(longlong *)(param_1 + 0x5810) == 0) {
      *(longlong **)(param_1 + 0x5810) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x5810);
      *(longlong **)(param_1 + 0x5810) = plVar2;
    }
    *(int *)(param_1 + 0x5808) = *(int *)(param_1 + 0x5808) + 1;
    uVar1 = uVar3 + 0xe;
    uVar3 = uVar3 + 0x10;
  } while (uVar1 < 0x80);
  return param_1;
}



// FUNCTION 145395b40 FUN_145395b40 body=797 status=ok
// SIG undefined FUN_145395b40(void)

void FUN_145395b40(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined4 uVar9;
  void *pvVar10;
  undefined1 uVar11;
  longlong *plVar12;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  undefined8 local_30;
  
  uVar7 = local_40;
  uVar5 = uStack_48;
  *(longlong *)(param_1 + 8) = param_2;
  LOCK();
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  UNLOCK();
  local_78 = *(longlong *)(param_3 + 0x98);
  local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(param_3 + 0xa0));
  if ((((int)local_78 + 0x80U & 0xcf) == 0) && ((char)local_78 != -0x50)) {
    uVar11 = (undefined1)((ulonglong)local_78 >> 0x20);
  }
  else {
    uVar11 = 0xff;
  }
  if (((char)local_78 == '\0') || (*(longlong *)(param_3 + 8) == 0)) {
    local_50 = 0;
  }
  else {
    local_50 = *(undefined4 *)(*(longlong *)(param_3 + 8) + 0x10);
  }
  local_60 = *(undefined8 *)(param_3 + 0x10);
  uStack_58 = CONCAT44(uStack_58._4_4_,*(undefined4 *)(param_3 + 0x34));
  uStack_48 = CONCAT71(uStack_48._1_7_,(char)((ulonglong)local_78 >> 8));
  uVar6 = uStack_48;
  uStack_48._4_4_ = SUB84(uVar5,4);
  uStack_38 = 0;
  *(undefined8 *)(param_1 + 0x10) = local_60;
  *(undefined8 *)(param_1 + 0x18) = uStack_58;
  local_40 = CONCAT71(local_40._1_7_,uVar11);
  uVar5 = local_40;
  local_40._4_4_ = SUB84(uVar7,4);
  *(undefined4 *)(param_1 + 0x20) = local_50;
  *(undefined4 *)(param_1 + 0x24) = uStack_4c;
  *(undefined4 *)(param_1 + 0x28) = (undefined4)uStack_48;
  *(undefined4 *)(param_1 + 0x2c) = uStack_48._4_4_;
  *(undefined4 *)(param_1 + 0x30) = (undefined4)local_40;
  *(undefined4 *)(param_1 + 0x34) = local_40._4_4_;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  lVar3 = *(longlong *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar3 + 0x60);
  uStack_48 = uVar6;
  local_40 = uVar5;
  if ((uVar2 < 2) && (*(char *)(lVar3 + 100) != '\0')) {
    *(uint *)(lVar3 + 0x60) = uVar2 + 1;
    if ((1 < uVar2 + 1) || (*(char *)(lVar3 + 100) == '\0')) {
      FUN_145355090();
    }
  }
  else {
    *(uint *)(lVar3 + 0x60) = uVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_3 + 0x34);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_3 + 0x30);
  piVar4 = *(int **)(param_3 + 0x20);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_144d4a460();
  }
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  *(int **)(param_1 + 0x40) = piVar4;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_3 + 0x80);
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x138) != '\0') {
    FUN_1450b2830(DAT_14c790fc0,*(undefined4 *)(param_1 + 0x54));
  }
  local_78 = *(longlong *)(param_1 + 8);
  plVar12 = *(longlong **)(local_78 + 0x118);
  if (plVar12 != plVar12 + *(uint *)(local_78 + 0x120)) {
    do {
      local_68 = 0;
      if (*plVar12 == 0) {
        local_70 = 0;
      }
      else {
        local_70 = *plVar12 + 0x18;
      }
      local_50 = *(undefined4 *)(param_3 + 0xa0);
      uStack_58 = *(undefined8 *)(param_3 + 0x98);
      uStack_48 = *(undefined8 *)(param_3 + 0xa8);
      local_60 = 0;
      local_40 = 0;
      uStack_38 = 0x100000000;
      local_30 = 0;
      uVar9 = FUN_1450e98e0(param_3);
      local_60 = *(undefined8 *)(param_3 + 0x10);
      local_40 = CONCAT44(*(undefined4 *)(param_3 + 0x34),uVar9);
      local_30 = 0;
      uStack_38 = (ulonglong)
                  CONCAT14(*(byte *)(param_3 + 0x310) >> 1,*(undefined4 *)(param_3 + 0x84)) &
                  0x1ffffffff;
      FUN_14507d830(DAT_14c791028,&local_78,*plVar12 + 0x20,&local_60,param_1 + 0x60);
      if (*(char *)(*plVar12 + 0x4c) == '\x04') {
        FUN_14507da20(DAT_14c791028,&local_78,*(undefined4 *)(*plVar12 + 0x48),&local_60,
                      param_1 + 0x60);
      }
      lVar3 = *plVar12;
      pvVar10 = AK::MemoryMgr::Malloc(0x10,0x68);
      if ((pvVar10 != (void *)0x0) &&
         (pvVar10 = (void *)FUN_145540e50(pvVar10,param_1,lVar3), pvVar10 != (void *)0x0)) {
        uVar2 = *(uint *)(param_1 + 0x80);
        if ((uVar2 < *(uint *)(param_1 + 0x84)) ||
           ((cVar8 = FUN_145395fb0(param_1 + 0x78), cVar8 != '\0' &&
            (uVar2 < *(uint *)(param_1 + 0x84))))) {
          uVar2 = *(uint *)(param_1 + 0x80);
          *(uint *)(param_1 + 0x80) = uVar2 + 1;
          puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar2 * 8);
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = pvVar10;
            goto LAB_145395e10;
          }
        }
        FUN_145541230(pvVar10);
        AK::MemoryMgr::Free(0x10,pvVar10);
      }
LAB_145395e10:
      local_78 = *(longlong *)(param_1 + 8);
      plVar12 = plVar12 + 1;
    } while (plVar12 !=
             (longlong *)
             (*(longlong *)(local_78 + 0x118) + (ulonglong)*(uint *)(local_78 + 0x120) * 8));
  }
  return;
}



// FUNCTION 145395e60 FUN_145395e60 body=308 status=ok
// SIG undefined FUN_145395e60(void)

void FUN_145395e60(longlong param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(param_1 + 0x78);
  puVar7 = puVar8;
  if (puVar8 != puVar8 + *(uint *)(param_1 + 0x80)) {
    do {
      pvVar3 = (void *)*puVar7;
      if (pvVar3 != (void *)0x0) {
        FUN_145541230(pvVar3);
        AK::MemoryMgr::Free(0x10,pvVar3);
      }
      puVar8 = *(undefined8 **)(param_1 + 0x78);
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar8 + *(uint *)(param_1 + 0x80));
  }
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    AK::MemoryMgr::Free(0,puVar8);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    if (*(char *)(*(longlong *)(param_1 + 8) + 0x138) != '\0') {
      FUN_1450b28b0(DAT_14c790fc0);
    }
    lVar4 = *(longlong *)(param_1 + 8);
    LOCK();
    piVar1 = (int *)(lVar4 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)(lVar4 + 0x10) + 0x18))();
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  FUN_14538e970(param_1 + 0x60);
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  if (puVar8 != (undefined8 *)0x0) {
    if ((*(uint *)(puVar8 + 0xc) < 2) && (*(char *)((longlong)puVar8 + 100) != '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    uVar6 = *(uint *)(puVar8 + 0xc) - 1;
    *(uint *)(puVar8 + 0xc) = uVar6;
    if ((uVar6 == 0) || (((bVar5 && (uVar6 < 2)) && (*(char *)((longlong)puVar8 + 100) != '\0')))) {
      FUN_1453550a0(puVar8);
    }
    if (*(int *)(puVar8 + 0xc) == 0) {
      (**(code **)*puVar8)(puVar8,0);
      AK::MemoryMgr::Free(4,puVar8);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 145395fa0 FUN_145395fa0 body=12 status=ok
// SIG undefined FUN_145395fa0(void)

undefined1 FUN_145395fa0(longlong param_1)

{
  return *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x138);
}



// FUNCTION 145395fb0 FUN_145395fb0 body=186 status=ok
// SIG undefined FUN_145395fb0(void)

undefined8 FUN_145395fb0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 1);
  iVar3 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar3 = 1;
  }
  _Var6 = (ulonglong)(iVar3 + uVar1) << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        uVar5 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar5 * 8) = *(undefined8 *)(*param_1 + uVar5 * 8);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_14539604d;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_14539604d:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145396070 FUN_145396070 body=236 status=ok
// SIG undefined FUN_145396070(void)

undefined8 * FUN_145396070(void)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = AK::MemoryMgr::Malloc(2,0x140);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  FUN_145540090(puVar3);
  *(undefined1 *)(puVar3 + 0x27) = 0;
  *puVar3 = &PTR_FUN_149d44fa0;
  puVar3[0x23] = 0;
  puVar3[1] = &PTR_FUN_149d45220;
  puVar3[2] = &PTR_LAB_149d45228;
  puVar3[5] = &PTR_LAB_149d45250;
  puVar3[0x24] = 0;
  puVar3[0x26] = 0;
  iVar2 = FUN_145540120(puVar3);
  if (iVar2 != 1) {
    LOCK();
    piVar1 = (int *)((longlong)puVar3 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if (*(code **)(puVar3[2] + 0x18) == FUN_14508a0e0) {
        FUN_145373550(puVar3 + 2,0);
        return (undefined8 *)0x0;
      }
      (**(code **)(puVar3[2] + 0x18))(puVar3 + 2);
    }
    return (undefined8 *)0x0;
  }
  return puVar3;
}



// FUNCTION 145396170 FUN_145396170 body=499 status=ok
// SIG undefined FUN_145396170(void)

ulonglong FUN_145396170(longlong *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  short sVar7;
  
  FUN_1450e9900(param_2,param_1);
  uVar6 = 0;
  for (pvVar4 = DAT_14c7fdf90; pvVar4 != (void *)0x0; pvVar4 = *(void **)((longlong)pvVar4 + 0x4400)
      ) {
    if (*(longlong *)((longlong)pvVar4 + 0x4410) != 0) goto LAB_14539620f;
  }
  pvVar4 = AK::MemoryMgr::Malloc(0,0x4418);
  if (pvVar4 != (void *)0x0) {
    FUN_145398000(pvVar4);
    if (DAT_14c7fdf90 == (void *)0x0) {
      DAT_14c7fdf90 = pvVar4;
      *(undefined8 *)((longlong)pvVar4 + 0x4400) = 0;
    }
    else {
      *(void **)((longlong)pvVar4 + 0x4400) = DAT_14c7fdf90;
      DAT_14c7fdf90 = pvVar4;
    }
LAB_14539620f:
    puVar1 = *(ulonglong **)((longlong)pvVar4 + 0x4410);
    if (puVar1 != (ulonglong *)0x0) {
      uVar5 = *puVar1;
      if (*puVar1 == 0) {
        uVar5 = uVar6;
      }
      *(ulonglong *)((longlong)pvVar4 + 0x4410) = uVar5;
      *puVar1 = 0;
      *(int *)((longlong)pvVar4 + 0x4408) = *(int *)((longlong)pvVar4 + 0x4408) + -1;
      if (puVar1 != (ulonglong *)0x0) {
        *puVar1 = 0;
        puVar1[2] = 0;
        *(undefined4 *)(puVar1 + 3) = 0;
        *(undefined4 *)(puVar1 + 4) = 0;
        *(undefined1 *)(puVar1 + 5) = 0xff;
        *(undefined1 *)(puVar1 + 6) = 0xff;
        puVar1[7] = 0;
        puVar1[10] = 0;
        puVar1[9] = 0;
        puVar1[8] = 0;
        FUN_14538e8c0(puVar1 + 0xc);
        *(undefined4 *)(puVar1 + 0xe) = 0;
        puVar1[0xf] = 0;
        puVar1[0x10] = 0;
        if (param_1[0x26] == 0) {
          param_1[0x26] = (longlong)puVar1;
          *puVar1 = 0;
        }
        else {
          *puVar1 = param_1[0x26];
          param_1[0x26] = (longlong)puVar1;
        }
        FUN_145395b40(puVar1,param_1,param_2);
        if ((char)param_1[0x27] == '\0') {
          if (param_1[0xe] == 0) {
            sVar7 = 0;
          }
          else {
            sVar7 = *(short *)(param_1[0xe] + 0xd4);
          }
          uVar3 = FUN_145396740(param_1,param_2);
          if (param_1[0xe] != 0) {
            uVar6 = (ulonglong)*(ushort *)(param_1[0xe] + 0xd4);
          }
          if (sVar7 < (short)uVar6) {
            return 1;
          }
          FUN_145397b60(param_1,puVar1);
          return (ulonglong)uVar3;
        }
        cVar2 = (**(code **)(*param_1 + 0x118))(param_1,1);
        if (cVar2 != '\0') {
          uVar6 = FUN_145396370(param_1,param_2,puVar1);
          return uVar6;
        }
        (**(code **)(*param_1 + 0x120))(param_1,1);
        FUN_145397b60(param_1,puVar1);
      }
    }
  }
  return 2;
}



// FUNCTION 145396370 FUN_145396370 body=966 status=ok
// SIG undefined FUN_145396370(void)

undefined8 FUN_145396370(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  byte local_res20 [8];
  undefined4 local_368 [4];
  undefined4 local_358 [2];
  longlong local_350;
  undefined8 local_348;
  undefined8 local_340;
  int *local_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined4 local_324;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8 [200];
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  byte local_48;
  
  plVar12 = *(longlong **)(param_1 + 0xf8);
  if (plVar12 != plVar12 + *(uint *)(param_1 + 0x100)) {
    do {
      plVar11 = *(longlong **)(param_1 + 0x118);
      iVar6 = 0;
      plVar2 = (longlong *)*plVar12;
      plVar1 = plVar11 + *(uint *)(param_1 + 0x120);
      for (; plVar11 != plVar1; plVar11 = plVar11 + 1) {
        lVar3 = *plVar11;
        if (*(int *)(lVar3 + 0x48) != 0) {
          piVar9 = *(int **)(lVar3 + 0x30);
          piVar7 = piVar9 + (ulonglong)*(uint *)(lVar3 + 0x38) * 4;
          for (; piVar9 != piVar7; piVar9 = piVar9 + 4) {
            if (*piVar9 == (int)plVar2[4]) {
              FUN_14507fa00(g_pGameSyncMgr,*(undefined8 *)(lVar3 + 0x48),param_3 + 0x10,local_368,0)
              ;
              cVar4 = FUN_145540b20(*(undefined8 *)(piVar9 + 2),local_368[0]);
              if (cVar4 != '\0') {
                iVar6 = iVar6 + 1;
              }
              break;
            }
          }
        }
      }
      puVar10 = *(undefined8 **)(param_3 + 0x78);
      lVar3 = plVar2[4];
      if (puVar10 != puVar10 + *(uint *)(param_3 + 0x80)) {
        do {
          lVar8 = FUN_145541610(*puVar10,(int)lVar3);
          if (lVar8 != 0) {
            *(int *)(lVar8 + 8) = iVar6;
            if (iVar6 != 0) goto LAB_1453966d7;
            break;
          }
          puVar10 = puVar10 + 1;
        } while (puVar10 !=
                 (undefined8 *)
                 (*(longlong *)(param_3 + 0x78) + (ulonglong)*(uint *)(param_3 + 0x80) * 8));
      }
      local_358[0] = *param_2;
      local_350 = *(longlong *)(param_2 + 2);
      local_348 = *(undefined8 *)(param_2 + 4);
      local_340 = *(undefined8 *)(param_2 + 6);
      local_324 = param_2[0xd];
      local_330 = *(undefined8 *)(param_2 + 10);
      local_328 = param_2[0xc];
      local_338 = *(int **)(param_2 + 8);
      if (local_338 != (int *)0x0) {
        *local_338 = *local_338 + 1;
      }
      local_320 = *(undefined8 *)(param_2 + 0xe);
      uStack_318 = *(undefined8 *)(param_2 + 0x10);
      local_2d8 = param_2[0x20];
      local_310 = *(undefined8 *)(param_2 + 0x12);
      uStack_308 = *(undefined8 *)(param_2 + 0x14);
      local_2d4 = param_2[0x21];
      local_2d0 = *(undefined8 *)(param_2 + 0x22);
      local_2c8 = param_2[0x24];
      local_2c4 = param_2[0x25];
      local_300 = *(undefined8 *)(param_2 + 0x16);
      uStack_2f8 = *(undefined8 *)(param_2 + 0x18);
      local_2b8 = param_2[0x28];
      local_2e0 = *(undefined8 *)(param_2 + 0x1e);
      local_2b0 = *(undefined8 *)(param_2 + 0x2a);
      local_2f0 = param_2[0x1a];
      uStack_2ec = param_2[0x1b];
      uStack_2e8 = param_2[0x1c];
      uStack_2e4 = param_2[0x1d];
      local_2c0 = *(undefined8 *)(param_2 + 0x26);
      FUN_1450896a0(local_2a8);
      local_60 = param_2[0xbe];
      uStack_5c = param_2[0xbf];
      uStack_58 = param_2[0xc0];
      uStack_54 = param_2[0xc1];
      local_68 = *(undefined8 *)(param_2 + 0xbc);
      local_1e0 = 0;
      local_1d8 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      local_78 = 0;
      local_70 = 0;
      FUN_1450c1160(local_2a8,param_2 + 0x2c);
      local_50 = *(undefined8 *)(param_2 + 0xc2);
      local_358[0] = 0;
      local_48 = *(byte *)(param_2 + 0xc4) & 0xf | local_48 & 0xf0;
      local_2d0 = 0;
      local_350 = param_1 + 0x10;
      local_2c8 = 0;
      if (((char)local_2c0 == -0x70) && (local_2c0._5_1_ != '\0')) {
        local_res20[0] = *(byte *)(param_2 + 0xc4) & 1;
        uVar5 = FUN_1450e98e0(local_358);
        iVar6 = FUN_14536f6c0(plVar2,&local_2c0,uVar5,local_res20,local_348,local_324);
        if (iVar6 == 1) {
          local_48 = local_48 & 0xfe | local_res20[0] & 1;
          goto LAB_145396697;
        }
      }
      else {
LAB_145396697:
        iVar6 = FUN_14536f160(plVar2,local_358);
        if (iVar6 == 1) {
          (**(code **)(*plVar2 + 0x250))(plVar2,local_358);
        }
      }
      FUN_144d51aa0(local_2a8);
      if (local_338 != (int *)0x0) {
        FUN_144d4a460();
      }
LAB_1453966d7:
      plVar12 = plVar12 + 1;
    } while (plVar12 !=
             (longlong *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)*(uint *)(param_1 + 0x100) * 8)
            );
  }
  return 1;
}



// FUNCTION 145396740 FUN_145396740 body=1179 status=ok
// SIG undefined FUN_145396740(void)

int FUN_145396740(longlong param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  short sVar7;
  bool bVar8;
  byte local_res8 [8];
  int local_res10;
  uint local_res18;
  longlong local_res20;
  undefined1 local_3a8 [24];
  longlong local_390 [5];
  int local_368 [2];
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  int *local_348;
  undefined8 local_340;
  int local_338;
  int local_334;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  int local_300;
  int iStack_2fc;
  int iStack_2f8;
  int iStack_2f4;
  undefined8 local_2f0;
  int local_2e8;
  int local_2e4;
  undefined1 *local_2e0;
  int local_2d8;
  int local_2d4;
  undefined8 local_2d0;
  int local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8 [200];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined8 local_60;
  byte local_58;
  
  iVar4 = 1;
  FUN_14553fd60(&local_res20,param_2,param_1);
  local_res10 = *param_2;
  sVar7 = 0;
  if (*(longlong *)(param_1 + 0x70) == 0) {
    local_res18 = 0;
  }
  else {
    local_res18 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x70) + 0xd4);
  }
  puVar6 = *(undefined8 **)(param_1 + 0xf8);
  uVar1 = *(uint *)(param_1 + 0x100);
  if (puVar6 != puVar6 + uVar1) {
    do {
      local_368[0] = *param_2;
      plVar2 = (longlong *)*puVar6;
      local_360 = *(undefined8 *)(param_2 + 2);
      local_358 = *(undefined8 *)(param_2 + 4);
      local_350 = *(undefined8 *)(param_2 + 6);
      local_334 = param_2[0xd];
      local_340 = *(undefined8 *)(param_2 + 10);
      local_338 = param_2[0xc];
      local_348 = *(int **)(param_2 + 8);
      if (local_348 != (int *)0x0) {
        *local_348 = *local_348 + 1;
      }
      local_330 = *(undefined8 *)(param_2 + 0xe);
      uStack_328 = *(undefined8 *)(param_2 + 0x10);
      local_2e8 = param_2[0x20];
      local_320 = *(undefined8 *)(param_2 + 0x12);
      uStack_318 = *(undefined8 *)(param_2 + 0x14);
      local_2e4 = param_2[0x21];
      local_2e0 = *(undefined1 **)(param_2 + 0x22);
      local_2d8 = param_2[0x24];
      local_2d4 = param_2[0x25];
      local_310 = *(undefined8 *)(param_2 + 0x16);
      uStack_308 = *(undefined8 *)(param_2 + 0x18);
      local_2c8 = param_2[0x28];
      local_2f0 = *(undefined8 *)(param_2 + 0x1e);
      local_2c0 = *(undefined8 *)(param_2 + 0x2a);
      local_300 = param_2[0x1a];
      iStack_2fc = param_2[0x1b];
      iStack_2f8 = param_2[0x1c];
      iStack_2f4 = param_2[0x1d];
      local_2d0 = *(undefined8 *)(param_2 + 0x26);
      FUN_1450896a0(local_2b8);
      local_70 = param_2[0xbe];
      iStack_6c = param_2[0xbf];
      iStack_68 = param_2[0xc0];
      iStack_64 = param_2[0xc1];
      local_78 = *(undefined8 *)(param_2 + 0xbc);
      local_1f0 = 0;
      local_1e8 = 0;
      local_1e0 = 0;
      local_1d8 = 0;
      local_1d0 = 0;
      local_88 = 0;
      local_80 = 0;
      FUN_1450c1160(local_2b8,param_2 + 0x2c);
      local_60 = *(undefined8 *)(param_2 + 0xc2);
      local_58 = local_58 & 0xf0 | *(byte *)(param_2 + 0xc4) & 0xf;
      if (local_res10 == 0) {
        if (((char)local_2d0 == -0x70) && (local_2d0._5_1_ != '\0')) {
          local_res8[0] = *(byte *)(param_2 + 0xc4) & 1;
          uVar3 = FUN_1450e98e0(local_368);
          iVar4 = FUN_14536f6c0(plVar2,&local_2d0,uVar3,local_res8,local_358,local_334);
          if (iVar4 != 1) goto LAB_145396b0e;
          local_58 = local_58 & 0xfe | local_res8[0] & 1;
        }
        iVar4 = FUN_14536f160(plVar2,local_368);
        if (iVar4 == 3) {
          iVar4 = 1;
        }
        else if (iVar4 == 1) {
          iVar4 = (**(code **)(*plVar2 + 0x250))(plVar2,local_368);
        }
      }
      else {
        FUN_14553fe20(local_3a8,local_2e0);
        if (uVar1 == 1) {
          FUN_14553fee0(param_1,*(undefined8 *)(local_2e0 + 0x18),local_390);
LAB_145396a55:
          local_2e0 = local_3a8;
          if (((char)local_2d0 == -0x70) && (local_2d0._5_1_ != '\0')) {
            local_res8[0] = local_58 & 1;
            uVar3 = FUN_1450e98e0(local_368);
            iVar4 = FUN_14536f6c0(plVar2,&local_2d0,uVar3,local_res8,local_358,local_334);
            if (iVar4 != 1) goto LAB_145396b04;
            local_58 = local_58 & 0xfe | local_res8[0] & 1;
          }
          iVar4 = FUN_14536f160(plVar2,local_368);
          if (iVar4 == 3) {
            iVar4 = 1;
          }
          else if (iVar4 == 1) {
            iVar4 = (**(code **)(*plVar2 + 0x250))(plVar2,local_368);
          }
        }
        else {
          local_2d8 = 0;
          lVar5 = FUN_14538ec50();
          bVar8 = local_390[0] != 0;
          local_390[0] = lVar5;
          if (bVar8) {
            FUN_14538eca0();
          }
          if (local_390[0] == 0) {
            iVar4 = 0x34;
          }
          else {
            iVar4 = FUN_1455401c0(param_1,local_3a8,local_368,&local_res20);
            if (iVar4 == 1) goto LAB_145396a55;
          }
        }
LAB_145396b04:
        FUN_14553fe90(local_3a8);
      }
LAB_145396b0e:
      FUN_144d51aa0(local_2b8);
      if (local_348 != (int *)0x0) {
        FUN_144d4a460();
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != (undefined8 *)
                       (*(longlong *)(param_1 + 0xf8) + (ulonglong)*(uint *)(param_1 + 0x100) * 8));
  }
  if (local_res10 != 0) {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      sVar7 = *(short *)(*(longlong *)(param_1 + 0x70) + 0xd4);
    }
    if (sVar7 == (short)local_res18) {
      iVar4 = FUN_145540330(param_1,param_2);
    }
    else if (local_res20 != 0) {
      iVar4 = FUN_145540000(param_1,local_res20);
    }
  }
  if (local_res20 != 0) {
    FUN_14538eca0();
  }
  return iVar4;
}



// FUNCTION 145396be0 FUN_145396be0 body=200 status=ok
// SIG undefined FUN_145396be0(void)

void FUN_145396be0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  
  LOCK();
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  UNLOCK();
  FUN_145397e60();
  lVar5 = *(longlong *)(param_1 + 0x70);
  if ((lVar5 != 0) &&
     (((0 < *(short *)(lVar5 + 0xd0) || (0 < *(short *)(lVar5 + 0xd4))) &&
      (uVar4 = *(uint *)(param_1 + 0x100), uVar4 != 0)))) {
    lVar5 = (ulonglong)uVar4 << 3;
    do {
      lVar5 = lVar5 + -8;
      uVar4 = uVar4 - 1;
      plVar3 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0xf8));
      if ((*(char *)(param_2 + 0x1c) == '\0') || (plVar3[0x10] == 0)) {
        (**(code **)(*plVar3 + 0x80))(plVar3,param_2);
      }
    } while (uVar4 != 0);
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x24);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145396c9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))();
  return;
}



// FUNCTION 145396cb0 FUN_145396cb0 body=104 status=ok
// SIG undefined FUN_145396cb0(void)

void FUN_145396cb0(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  LOCK();
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  UNLOCK();
  FUN_145397e60();
  if ((*(char *)((longlong)param_2 + 0x1f) == '\0') || (*(char *)((longlong)param_2 + 0x1d) == '\0')
     ) goto LAB_145396cf0;
  iVar2 = *param_2;
  if (iVar2 == 0) {
LAB_145396ce5:
    uVar3 = 0;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) goto LAB_145396cf0;
      goto LAB_145396ce5;
    }
    uVar3 = 1;
  }
  FUN_145354bf0(param_1 + 0x28,uVar3);
LAB_145396cf0:
  LOCK();
  piVar1 = (int *)(param_1 + 0x24);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))();
  }
  return;
}



// FUNCTION 145396d20 FUN_145396d20 body=375 status=ok
// SIG undefined FUN_145396d20(void)

void FUN_145396d20(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  
  LOCK();
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  UNLOCK();
  iVar2 = *param_2;
  if (iVar2 == 0) {
    FUN_145397cf0(param_1,*(undefined8 *)(param_2 + 2),param_2[4]);
  }
  else if (iVar2 == 1) {
    iVar2 = param_2[4];
    lVar8 = *(longlong *)(param_2 + 2);
    for (puVar3 = *(undefined8 **)(param_1 + 0x130); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)*puVar3) {
      if (((lVar8 == 0) || (lVar8 == puVar3[2])) &&
         ((iVar2 == 0 || (*(int *)((longlong)puVar3 + 0x54) == iVar2)))) {
        *(undefined4 *)(puVar3 + 0xb) = 1;
      }
    }
  }
  else if (iVar2 == 2) {
    iVar2 = param_2[4];
    lVar8 = *(longlong *)(param_2 + 2);
    for (puVar3 = *(undefined8 **)(param_1 + 0x130); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)*puVar3) {
      if (((lVar8 == 0) || (lVar8 == puVar3[2])) &&
         ((iVar2 == 0 || (*(int *)((longlong)puVar3 + 0x54) == iVar2)))) {
        *(undefined4 *)(puVar3 + 0xb) = 0;
      }
    }
  }
  if ((*(char *)((longlong)param_2 + 0x1f) == '\0') || (*(char *)((longlong)param_2 + 0x1d) == '\0')
     ) goto LAB_145396df5;
  iVar2 = *param_2;
  if (iVar2 == 0) {
LAB_145396dea:
    uVar6 = 0;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) goto LAB_145396df5;
      goto LAB_145396dea;
    }
    uVar6 = 1;
  }
  FUN_145354bf0(param_1 + 0x28,uVar6);
LAB_145396df5:
  uVar7 = *(uint *)(param_1 + 0x100);
  if (uVar7 != 0) {
    lVar8 = (ulonglong)uVar7 << 3;
    do {
      lVar8 = lVar8 + -8;
      uVar7 = uVar7 - 1;
      plVar4 = *(longlong **)(lVar8 + *(longlong *)(param_1 + 0xf8));
      if ((((char)param_2[7] == '\0') || (plVar4[0x10] == 0)) &&
         (cVar5 = FUN_1450d5200(plVar4,*(undefined8 *)(param_2 + 0xc)), cVar5 == '\0')) {
        (**(code **)(*plVar4 + 0x90))(plVar4,param_2);
      }
    } while (uVar7 != 0);
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x24);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000145396e87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))();
    return;
  }
  return;
}



// FUNCTION 145396ea0 FUN_145396ea0 body=65 status=ok
// SIG undefined FUN_145396ea0(void)

void FUN_145396ea0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if ((lVar1 != 0) && ((0 < *(short *)(lVar1 + 0xd0) || (0 < *(short *)(lVar1 + 0xd4))))) {
    FUN_145397cf0(param_1 + -0x10,0,0);
  }
  FUN_1450d4530(param_1);
  return;
}



// FUNCTION 145396ef0 FUN_145396ef0 body=1015 status=ok
// SIG undefined FUN_145396ef0(void)

int FUN_145396ef0(longlong *param_1,uint *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  uint uVar11;
  bool bVar12;
  uint local_res8;
  uint uStackX_c;
  uint *local_res10;
  undefined4 local_res18 [4];
  int *local_58 [3];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  iVar8 = (**(code **)(*param_1 + 0x70))();
  if (iVar8 != 5) {
    lVar6 = param_1[4];
    uVar9 = (**(code **)(*param_1 + 0x70))();
    FUN_1450b8920(DAT_14c790fe0,(int)lVar6,5,uVar9);
    return 0x5b;
  }
  local_res10 = local_res10 + 1;
  iVar8 = FUN_1450d7ad0(param_1,&local_res10,local_res18,0);
  if (iVar8 == 1) {
    iVar8 = 1;
    uVar3 = *local_res10;
    local_res10 = local_res10 + 1;
    if (uVar3 != 0) {
      if ((*(uint *)((longlong)param_1 + 0x104) < uVar3) &&
         (cVar7 = FUN_1450c15a0(param_1 + 0x1e,uVar3 - *(uint *)((longlong)param_1 + 0x104)),
         cVar7 == '\0')) {
        return 0x34;
      }
      iVar8 = 1;
      uVar11 = 0;
      if (uVar3 != 0) {
        do {
          uVar4 = uStackX_c;
          local_res8 = *local_res10;
          local_res10 = local_res10 + 1;
          uStackX_c = uStackX_c & 0xffffff00;
          iVar8 = (**(code **)(*param_1 + 0x40))
                            (param_1,CONCAT44(uVar4,local_res8) & 0xffffff00ffffffff);
          if ((iVar8 != 1) && (iVar8 != 0xf)) break;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar3);
      }
    }
    if (iVar8 == 1) {
      uVar3 = *local_res10;
      local_res10 = local_res10 + 1;
      uVar11 = 0;
      if (uVar3 != 0) {
        do {
          lVar6 = DAT_14c791060;
          uVar4 = *local_res10;
          do {
            while (iVar5 = *(int *)(lVar6 + 0x1b8), iVar5 < 0) {
              EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x1c0));
              if (*(int *)(lVar6 + 0x1b8) < 0) goto LAB_145397097;
              LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x1c0));
            }
            LOCK();
            bVar12 = iVar5 == *(int *)(lVar6 + 0x1b8);
            if (bVar12) {
              *(int *)(lVar6 + 0x1b8) = iVar5 + 1;
            }
            UNLOCK();
          } while (!bVar12);
LAB_145397097:
          if (*(uint *)(lVar6 + 0x200) == 0) {
            plVar10 = (longlong *)0x0;
          }
          else {
            for (plVar10 = *(longlong **)
                            (*(longlong *)(lVar6 + 0x1f8) +
                            ((ulonglong)uVar4 % (ulonglong)*(uint *)(lVar6 + 0x200)) * 8);
                plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[1]) {
              if (*(uint *)(plVar10 + 2) == uVar4) goto LAB_1453970c7;
            }
            plVar10 = (longlong *)0x0;
LAB_1453970c7:
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)plVar10 + 0x14) = *(int *)((longlong)plVar10 + 0x14) + 1;
              UNLOCK();
            }
          }
          iVar5 = *(int *)(lVar6 + 0x1b8);
          while (-1 < iVar5) {
            LOCK();
            bVar12 = iVar5 == *(int *)(lVar6 + 0x1b8);
            if (bVar12) {
              *(int *)(lVar6 + 0x1b8) = iVar5 + -1;
            }
            UNLOCK();
            if (bVar12) {
              if ((iVar5 + -1 == 0) && (0 < *(int *)(lVar6 + 0x1e8))) {
                SetEvent(*(HANDLE *)(lVar6 + 0x1f0));
              }
              goto LAB_14539712c;
            }
            iVar5 = *(int *)(lVar6 + 0x1b8);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x1c0));
LAB_14539712c:
          lVar6 = DAT_14c791060;
          if (plVar10 == (longlong *)0x0) {
            FUN_144d41d30(local_58,DAT_14c791060 + 0x1b8);
            plVar10 = (longlong *)FUN_145541c80();
            if (plVar10 != (longlong *)0x0) {
              *(uint *)(plVar10 + 2) = uVar4;
              cVar7 = FUN_144d41e40(lVar6 + 0x1f8,plVar10,&local_res8);
              if (cVar7 == '\0') {
                *(undefined4 *)(plVar10 + 2) = 0;
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0x14);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar10 + 0x18))(plVar10);
                }
                plVar10 = (longlong *)0x0;
              }
            }
            LOCK();
            *local_58[0] = *local_58[0] + 1;
            UNLOCK();
            if (*local_58[0] == 0) {
              local_58[0][1] = 0;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(local_58[0] + 2));
            if (plVar10 == (longlong *)0x0) {
              iVar8 = 0x34;
              break;
            }
            FUN_145542590(plVar10,param_1);
            iVar8 = FUN_145541cf0(plVar10,&local_res10,local_res18);
            if (iVar8 != 1) {
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0x14);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar10 + 0x18))(plVar10);
              }
              break;
            }
          }
          else {
            FUN_145542590(plVar10);
          }
          uVar4 = *(uint *)(param_1 + 0x24);
          if ((uVar4 < *(uint *)((longlong)param_1 + 0x124)) ||
             ((cVar7 = FUN_1453700b0(param_1 + 0x23), cVar7 != '\0' &&
              (uVar4 < *(uint *)((longlong)param_1 + 0x124))))) {
            uVar4 = *(uint *)(param_1 + 0x24);
            *(uint *)(param_1 + 0x24) = uVar4 + 1;
            puVar2 = (undefined8 *)(param_1[0x23] + (ulonglong)uVar4 * 8);
            if (puVar2 == (undefined8 *)0x0) goto LAB_145397275;
            *puVar2 = plVar10;
          }
          else {
LAB_145397275:
            iVar8 = 2;
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0x14);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar10 + 0x18))(plVar10);
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar3);
      }
      *(bool *)(param_1 + 0x27) = (char)*local_res10 != '\0';
    }
  }
  return iVar8;
}



// FUNCTION 1453972f0 FUN_1453972f0 body=106 status=ok
// SIG undefined FUN_1453972f0(void)

ulonglong FUN_1453972f0(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_14508a130();
  uVar4 = uVar2 & 0xffffffff;
  if ((int)uVar2 == 1) {
    puVar3 = *(undefined8 **)(param_1 + 0x118);
    puVar1 = puVar3 + *(uint *)(param_1 + 0x120);
    for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      FUN_145542670(*puVar3,param_2);
      uVar2 = uVar4;
    }
  }
  return uVar2;
}



// FUNCTION 145397360 FUN_145397360 body=224 status=ok
// SIG undefined FUN_145397360(void)

void FUN_145397360(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  void *pvVar3;
  int iVar4;
  void *_Dst;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0x118);
  puVar2 = puVar5 + *(uint *)(param_1 + 0x120);
  for (; puVar5 != puVar2; puVar5 = puVar5 + 1) {
    FUN_145542510(*puVar5,(int)param_2[4]);
  }
  if (param_2[0xf] == param_1) {
    (**(code **)(*param_2 + 0x20))(param_2,0);
    _Dst = (void *)FUN_14508a500(param_1 + 0xf0,(int)param_2[4]);
    if (_Dst != (void *)0x0) {
      pvVar3 = (void *)(*(longlong *)(param_1 + 0xf8) +
                       (ulonglong)(*(int *)(param_1 + 0x100) - 1) * 8);
      if (_Dst < pvVar3) {
        memmove(_Dst,(void *)((longlong)_Dst + 8),(ulonglong)((int)pvVar3 - (int)_Dst & 0xfffffff8))
        ;
      }
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + -1;
    }
    LOCK();
    piVar1 = (int *)(param_1 + 0x24);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))();
    }
  }
  return;
}



// FUNCTION 145397440 FUN_145397440 body=212 status=ok
// SIG undefined FUN_145397440(void)

int FUN_145397440(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  
  iVar3 = (**(code **)(*param_1 + 0x270))();
  if (iVar3 == 1) {
    puVar4 = (undefined8 *)FUN_1450c16b0(param_1 + 0x1e,(int)param_2[4],local_res8);
    if (puVar4 == (undefined8 *)0x0) {
      iVar3 = 2;
    }
    else {
      *puVar4 = param_2;
      (**(code **)(*param_2 + 0x20))(param_2,param_1);
      LOCK();
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
      UNLOCK();
    }
  }
  plVar7 = (longlong *)param_1[0x23];
  plVar1 = plVar7 + *(uint *)(param_1 + 0x24);
  do {
    if (plVar7 == plVar1) {
      return iVar3;
    }
    lVar2 = *plVar7;
    piVar6 = *(int **)(lVar2 + 0x30);
    piVar5 = piVar6 + (ulonglong)*(uint *)(lVar2 + 0x38) * 4;
    for (; piVar6 != piVar5; piVar6 = piVar6 + 4) {
      if (*piVar6 == (int)param_2[4]) {
        if (*(longlong *)(*(longlong *)(piVar6 + 2) + 8) == 0) {
          FUN_145542670(lVar2,*piVar6);
        }
        break;
      }
    }
    plVar7 = plVar7 + 1;
  } while( true );
}



// FUNCTION 145397520 FUN_145397520 body=229 status=ok
// SIG undefined FUN_145397520(void)

void FUN_145397520(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  puVar3 = *(undefined8 **)(param_1 + 0x130);
  do {
    if (puVar3 == (undefined8 *)0x0) {
      return;
    }
    plVar5 = (longlong *)puVar3[0xf];
    plVar6 = plVar5 + *(uint *)(puVar3 + 0x10);
    for (; plVar5 != plVar6; plVar5 = plVar5 + 1) {
      lVar4 = *plVar5;
      if (*(longlong *)(lVar4 + 0x50) == param_2) {
        if (lVar4 != 0) {
          plVar6 = *(longlong **)(lVar4 + 0x58);
          plVar5 = plVar6 + (ulonglong)*(uint *)(lVar4 + 0x60) * 4;
          goto joined_r0x00014539759d;
        }
        break;
      }
    }
LAB_1453975de:
    puVar3 = (undefined8 *)*puVar3;
  } while( true );
joined_r0x00014539759d:
  if (plVar6 == plVar5) goto LAB_1453975de;
  if (*plVar6 == param_3) {
    if (param_4 != 0) {
      LOCK();
      piVar1 = (int *)(param_4 + 0x24);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)(param_4 + 0x10) + 0x18))();
      }
    }
    if (*(longlong *)(*plVar6 + 8) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(*plVar6 + 8) + 0x24);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    goto LAB_1453975de;
  }
  plVar6 = plVar6 + 4;
  goto joined_r0x00014539759d;
}



// FUNCTION 145397610 FUN_145397610 body=453 status=ok
// SIG undefined FUN_145397610(void)

int FUN_145397610(longlong *param_1,longlong param_2,char param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  cVar4 = FUN_1450d9d90();
  if (cVar4 == '\0') {
    return 2;
  }
  iVar7 = 1;
  if (((param_3 != '\0') && (*(longlong *)(param_2 + 0x18) != 0)) &&
     (*(longlong *)(param_2 + 0x10) != 0)) {
    cVar4 = (**(code **)(*param_1 + 0x118))(param_1,1);
    iVar7 = 2 - (uint)(cVar4 != '\0');
    for (puVar1 = (undefined8 *)param_1[0x26]; puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      lVar2 = *(longlong *)(param_2 + 0x18);
      if ((((((puVar1[2] == 0) || (*(longlong *)(lVar2 + 0x20) == puVar1[2])) &&
            ((*(int *)(puVar1 + 3) == 0 ||
             ((int)*(undefined8 *)(lVar2 + 0x28) == *(int *)(puVar1 + 3))))) &&
           ((*(int *)(puVar1 + 4) == 0 || (*(int *)(lVar2 + 0x30) == *(int *)(puVar1 + 4))))) &&
          ((*(char *)(puVar1 + 5) == -1 ||
           ((char)*(undefined4 *)(lVar2 + 0x38) == *(char *)(puVar1 + 5))))) &&
         (((*(char *)(puVar1 + 6) == -1 ||
           ((char)*(undefined8 *)(lVar2 + 0x40) == *(char *)(puVar1 + 6))) &&
          ((puVar1[7] == 0 || (*(longlong *)(lVar2 + 0x48) == puVar1[7])))))) {
        puVar6 = (undefined8 *)puVar1[0xf];
        uVar3 = *(undefined8 *)(param_2 + 0x10);
        if (puVar6 != puVar6 + *(uint *)(puVar1 + 0x10)) {
          do {
            FUN_1455413f0(*puVar6,lVar2,uVar3);
            puVar6 = puVar6 + 1;
          } while (puVar6 != (undefined8 *)(puVar1[0xf] + (ulonglong)*(uint *)(puVar1 + 0x10) * 8));
        }
        *(int *)(puVar1 + 0xe) = *(int *)(puVar1 + 0xe) + 1;
      }
    }
  }
  iVar5 = FUN_14536ec70(param_1,param_2,param_3,param_4);
  if (iVar7 != 1) {
    iVar5 = iVar7;
  }
  return iVar5;
}



// FUNCTION 1453977e0 FUN_1453977e0 body=470 status=ok
// SIG undefined FUN_1453977e0(void)

void FUN_1453977e0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *local_38;
  undefined8 *puStack_30;
  undefined1 local_28 [16];
  
  if (param_1[0xe] != 0) {
    if ((*(longlong *)(param_2 + 0x18) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) {
      local_38 = (undefined8 *)param_1[0x26];
      puStack_30 = (undefined8 *)0x0;
      if (local_38 != (undefined8 *)0x0) {
        do {
          puVar4 = local_38;
          lVar1 = *(longlong *)(param_2 + 0x18);
          if ((((((local_38[2] == 0) || (*(longlong *)(lVar1 + 0x20) == local_38[2])) &&
                ((*(int *)(local_38 + 3) == 0 ||
                 ((int)*(undefined8 *)(lVar1 + 0x28) == *(int *)(local_38 + 3))))) &&
               ((*(int *)(local_38 + 4) == 0 || (*(int *)(lVar1 + 0x30) == *(int *)(local_38 + 4))))
               ) && ((*(char *)(local_38 + 5) == -1 ||
                     ((char)*(undefined4 *)(lVar1 + 0x38) == *(char *)(local_38 + 5))))) &&
             (((*(char *)(local_38 + 6) == -1 ||
               ((char)*(undefined8 *)(lVar1 + 0x40) == *(char *)(local_38 + 6))) &&
              ((local_38[7] == 0 || (*(longlong *)(lVar1 + 0x48) == local_38[7])))))) {
            puVar5 = (undefined8 *)local_38[0xf];
            uVar2 = *(undefined8 *)(param_2 + 0x10);
            uVar3 = *(undefined8 *)(param_2 + 0x18);
            if (puVar5 != puVar5 + *(uint *)(local_38 + 0x10)) {
              do {
                FUN_145541510(*puVar5,uVar3,uVar2);
                puVar5 = puVar5 + 1;
              } while (puVar5 != (undefined8 *)
                                 (puVar4[0xf] + (ulonglong)*(uint *)(puVar4 + 0x10) * 8));
            }
            *(int *)(puVar4 + 0xe) = *(int *)(puVar4 + 0xe) + -1;
          }
          if ((*(char *)(puVar4[1] + 0x138) == '\0') && (*(int *)(puVar4 + 0xe) == 0)) {
            puVar4 = (undefined8 *)FUN_145397bd0(param_1,local_28,&local_38);
            local_38 = (undefined8 *)*puVar4;
            puStack_30 = (undefined8 *)puVar4[1];
          }
          else {
            local_38 = (undefined8 *)*puVar4;
            puStack_30 = puVar4;
          }
        } while (local_38 != (undefined8 *)0x0);
        local_38 = (undefined8 *)0x0;
      }
      (**(code **)(*param_1 + 0x120))(param_1,1);
    }
    FUN_14536ee00(param_1,param_2);
  }
  return;
}



// FUNCTION 1453979c0 FUN_1453979c0 body=42 status=ok
// SIG undefined FUN_1453979c0(void)

undefined1 FUN_1453979c0(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_1450d52d0();
  if (cVar1 != '\0') {
    FUN_1450dabb0(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 1453979f0 FUN_1453979f0 body=359 status=ok
// SIG undefined FUN_1453979f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1453979f0(longlong *param_1,undefined2 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if ((param_1[0xe] != 0) && (*(short *)(param_1[0xe] + 0xd4) == 1)) {
    FUN_1450dabf0();
    plVar2 = (longlong *)param_1[0x26];
    while (plVar2 != (longlong *)0x0) {
      plVar1 = (longlong *)*plVar2;
      plVar4 = plVar1;
      if (plVar2 == (longlong *)param_1[0x26]) {
        param_1[0x26] = (longlong)plVar1;
        plVar4 = _DAT_00000000;
      }
      _DAT_00000000 = plVar4;
      if (*(char *)(plVar2[1] + 0x138) != '\0') {
        (**(code **)(*param_1 + 0x120))(param_1,1);
      }
      FUN_145395e60(plVar2);
      FUN_14538e8e0(plVar2 + 0xc);
      plVar4 = (longlong *)0x0;
      plVar3 = DAT_14c7fdf90;
      if (plVar2[8] != 0) {
        FUN_144d4a460();
        plVar3 = DAT_14c7fdf90;
      }
      for (; (plVar3 != (longlong *)0x0 && ((plVar2 < plVar3 || (plVar3 + 0x880 <= plVar2))));
          plVar3 = (longlong *)plVar3[0x880]) {
        plVar4 = plVar3;
      }
      if (plVar3[0x882] == 0) {
        plVar3[0x882] = (longlong)plVar2;
        *plVar2 = 0;
      }
      else {
        *plVar2 = plVar3[0x882];
        plVar3[0x882] = (longlong)plVar2;
      }
      *(int *)(plVar3 + 0x881) = (int)plVar3[0x881] + 1;
      plVar2 = plVar1;
      if ((int)plVar3[0x881] == 0x80) {
        plVar1 = (longlong *)plVar3[0x880];
        if (plVar3 != DAT_14c7fdf90) {
          plVar4[0x880] = plVar3[0x880];
          plVar1 = DAT_14c7fdf90;
        }
        DAT_14c7fdf90 = plVar1;
        AK::MemoryMgr::Free(0,plVar3);
      }
    }
  }
  FUN_1450d5370(param_1,param_2);
  return;
}



// FUNCTION 145397b60 FUN_145397b60 body=103 status=ok
// SIG undefined FUN_145397b60(void)

void FUN_145397b60(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *local_28;
  longlong *plStack_20;
  undefined1 local_18 [24];
  
  plStack_20 = (longlong *)0x0;
  plVar1 = *(longlong **)(param_1 + 0x130);
  if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
    while (local_28 = plVar1, local_28 != param_2) {
      plVar1 = (longlong *)*local_28;
      plStack_20 = local_28;
      if ((longlong *)*local_28 == (longlong *)0x0) {
        return;
      }
    }
    if (local_28 != (longlong *)0x0) {
      FUN_145397bd0(param_1,local_18,&local_28);
    }
  }
  return;
}



// FUNCTION 145397bd0 FUN_145397bd0 body=275 status=ok
// SIG undefined FUN_145397bd0(void)

longlong * FUN_145397bd0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)*param_3;
  plVar2 = (longlong *)param_3[1];
  lVar3 = *plVar1;
  if (plVar1 == (longlong *)param_1[0x26]) {
    param_1[0x26] = lVar3;
  }
  else {
    *plVar2 = lVar3;
  }
  *param_3 = lVar3;
  lVar3 = plVar1[1];
  param_3[1] = (longlong)plVar2;
  if (*(char *)(lVar3 + 0x138) != '\0') {
    (**(code **)(*param_1 + 0x120))(param_1,1);
  }
  FUN_145395e60(plVar1);
  FUN_14538e8e0(plVar1 + 0xc);
  if (plVar1[8] != 0) {
    FUN_144d4a460();
  }
  plVar2 = (longlong *)0x0;
  for (plVar4 = DAT_14c7fdf90;
      (plVar4 != (longlong *)0x0 && ((plVar1 < plVar4 || (plVar4 + 0x880 <= plVar1))));
      plVar4 = (longlong *)plVar4[0x880]) {
    plVar2 = plVar4;
  }
  if (plVar4[0x882] == 0) {
    plVar4[0x882] = (longlong)plVar1;
    *plVar1 = 0;
  }
  else {
    *plVar1 = plVar4[0x882];
    plVar4[0x882] = (longlong)plVar1;
  }
  *(int *)(plVar4 + 0x881) = (int)plVar4[0x881] + 1;
  if ((int)plVar4[0x881] == 0x80) {
    plVar1 = (longlong *)plVar4[0x880];
    if (plVar4 != DAT_14c7fdf90) {
      plVar2[0x880] = plVar4[0x880];
      plVar1 = DAT_14c7fdf90;
    }
    DAT_14c7fdf90 = plVar1;
    AK::MemoryMgr::Free(0,plVar4);
  }
  lVar3 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar3;
  return param_2;
}



// FUNCTION 145397cf0 FUN_145397cf0 body=357 status=ok
// SIG undefined FUN_145397cf0(void)

void FUN_145397cf0(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)0x0;
  plVar1 = (longlong *)param_1[0x26];
  plVar4 = plVar6;
  while (plVar5 = plVar1, plVar5 != (longlong *)0x0) {
    if (((param_2 == 0) || (param_2 == plVar5[2])) &&
       ((param_3 == 0 || (*(int *)((longlong)plVar5 + 0x54) == param_3)))) {
      plVar1 = (longlong *)*plVar5;
      if (plVar5 == (longlong *)param_1[0x26]) {
        param_1[0x26] = (longlong)plVar1;
      }
      else {
        *plVar4 = (longlong)plVar1;
      }
      if (*(char *)(plVar5[1] + 0x138) != '\0') {
        (**(code **)(*param_1 + 0x120))(param_1,1);
      }
      FUN_145395e60(plVar5);
      FUN_14538e8e0(plVar5 + 0xc);
      plVar2 = plVar6;
      plVar3 = DAT_14c7fdf90;
      if (plVar5[8] != 0) {
        FUN_144d4a460();
        plVar3 = DAT_14c7fdf90;
      }
      for (; (plVar3 != (longlong *)0x0 && ((plVar5 < plVar3 || (plVar3 + 0x880 <= plVar5))));
          plVar3 = (longlong *)plVar3[0x880]) {
        plVar2 = plVar3;
      }
      if (plVar3[0x882] == 0) {
        plVar3[0x882] = (longlong)plVar5;
        *plVar5 = 0;
      }
      else {
        *plVar5 = plVar3[0x882];
        plVar3[0x882] = (longlong)plVar5;
      }
      *(int *)(plVar3 + 0x881) = (int)plVar3[0x881] + 1;
      if ((int)plVar3[0x881] == 0x80) {
        plVar5 = (longlong *)plVar3[0x880];
        if (plVar3 != DAT_14c7fdf90) {
          plVar2[0x880] = plVar3[0x880];
          plVar5 = DAT_14c7fdf90;
        }
        DAT_14c7fdf90 = plVar5;
        AK::MemoryMgr::Free(0,plVar3);
      }
    }
    else {
      plVar1 = (longlong *)*plVar5;
      plVar4 = plVar5;
    }
  }
  return;
}



// FUNCTION 145397e60 FUN_145397e60 body=151 status=ok
// SIG undefined FUN_145397e60(void)

void FUN_145397e60(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
LAB_145397e7d:
    FUN_145397cf0(param_1,*(undefined8 *)(param_2 + 2),param_2[4]);
    return;
  }
  if (iVar1 == 1) {
    plVar3 = *(longlong **)(param_1 + 0x130);
    iVar1 = param_2[4];
    lVar2 = *(longlong *)(param_2 + 2);
    if (plVar3 != (longlong *)0x0) {
      do {
        if (((lVar2 == 0) || (lVar2 == plVar3[2])) &&
           ((iVar1 == 0 || (*(int *)((longlong)plVar3 + 0x54) == iVar1)))) {
          *(undefined4 *)(plVar3 + 0xb) = 1;
        }
        plVar3 = (longlong *)*plVar3;
      } while (plVar3 != (longlong *)0x0);
      return;
    }
  }
  else if (iVar1 == 2) {
    plVar3 = *(longlong **)(param_1 + 0x130);
    iVar1 = param_2[4];
    lVar2 = *(longlong *)(param_2 + 2);
    if (plVar3 != (longlong *)0x0) {
      do {
        if (((lVar2 == 0) || (lVar2 == plVar3[2])) &&
           ((iVar1 == 0 || (*(int *)((longlong)plVar3 + 0x54) == iVar1)))) {
          *(undefined4 *)(plVar3 + 0xb) = 0;
        }
        plVar3 = (longlong *)*plVar3;
      } while (plVar3 != (longlong *)0x0);
      return;
    }
  }
  else if (iVar1 == 3) goto LAB_145397e7d;
  return;
}



// FUNCTION 145397f00 FUN_145397f00 body=245 status=ok
// SIG undefined FUN_145397f00(void)

undefined8 * FUN_145397f00(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)param_1[0x23];
  *param_1 = &PTR_FUN_149d44fa0;
  param_1[1] = &PTR_FUN_149d45220;
  param_1[2] = &PTR_LAB_149d45228;
  param_1[5] = &PTR_LAB_149d45250;
  plVar2 = plVar5 + *(uint *)(param_1 + 0x24);
  for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
    FUN_145542590(*plVar5,0);
    plVar4 = (longlong *)*plVar5;
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0x14);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if ((void *)param_1[0x23] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x23]);
    param_1[0x23] = 0;
    *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  }
  param_1[0x26] = 0;
  FUN_145540160(param_1);
  FUN_1455400f0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 145398000 FUN_145398000 body=918 status=ok
// SIG undefined FUN_145398000(void)

longlong FUN_145398000(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  
  *(undefined8 *)(param_1 + 0x4400) = 0;
  *(undefined4 *)(param_1 + 0x4408) = 0;
  *(undefined8 *)(param_1 + 0x4410) = 0;
  uVar3 = 2;
  do {
    plVar2 = (longlong *)((ulonglong)(uVar3 - 2) * 0x88 + param_1);
    if (*(longlong *)(param_1 + 0x4410) == 0) {
      *(longlong **)(param_1 + 0x4410) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x4410);
      *(longlong **)(param_1 + 0x4410) = plVar2;
    }
    *(int *)(param_1 + 0x4408) = *(int *)(param_1 + 0x4408) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 - 1) * 0x88 + param_1);
    if (*(longlong *)(param_1 + 0x4410) == 0) {
      *(longlong **)(param_1 + 0x4410) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x4410);
      *(longlong **)(param_1 + 0x4410) = plVar2;
    }
    *(int *)(param_1 + 0x4408) = *(int *)(param_1 + 0x4408) + 1;
    plVar2 = (longlong *)((ulonglong)uVar3 * 0x88 + param_1);
    if (*(longlong *)(param_1 + 0x4410) == 0) {
      *(longlong **)(param_1 + 0x4410) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x4410);
      *(longlong **)(param_1 + 0x4410) = plVar2;
    }
    *(int *)(param_1 + 0x4408) = *(int *)(param_1 + 0x4408) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 1) * 0x88 + param_1);
    if (*(longlong *)(param_1 + 0x4410) == 0) {
      *(longlong **)(param_1 + 0x4410) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x4410);
      *(longlong **)(param_1 + 0x4410) = plVar2;
    }
    *(int *)(param_1 + 0x4408) = *(int *)(param_1 + 0x4408) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 2) * 0x88 + param_1);
    if (*(longlong *)(param_1 + 0x4410) == 0) {
      *(longlong **)(param_1 + 0x4410) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x4410);
      *(longlong **)(param_1 + 0x4410) = plVar2;
    }
    *(int *)(param_1 + 0x4408) = *(int *)(param_1 + 0x4408) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 3) * 0x88 + param_1);
    if (*(longlong *)(param_1 + 0x4410) == 0) {
      *(longlong **)(param_1 + 0x4410) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x4410);
      *(longlong **)(param_1 + 0x4410) = plVar2;
    }
    *(int *)(param_1 + 0x4408) = *(int *)(param_1 + 0x4408) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 4) * 0x88 + param_1);
    if (*(longlong *)(param_1 + 0x4410) == 0) {
      *(longlong **)(param_1 + 0x4410) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x4410);
      *(longlong **)(param_1 + 0x4410) = plVar2;
    }
    *(int *)(param_1 + 0x4408) = *(int *)(param_1 + 0x4408) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 5) * 0x88 + param_1);
    if (*(longlong *)(param_1 + 0x4410) == 0) {
      *(longlong **)(param_1 + 0x4410) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x4410);
      *(longlong **)(param_1 + 0x4410) = plVar2;
    }
    *(int *)(param_1 + 0x4408) = *(int *)(param_1 + 0x4408) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 6) * 0x88 + param_1);
    if (*(longlong *)(param_1 + 0x4410) == 0) {
      *(longlong **)(param_1 + 0x4410) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x4410);
      *(longlong **)(param_1 + 0x4410) = plVar2;
    }
    *(int *)(param_1 + 0x4408) = *(int *)(param_1 + 0x4408) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 7) * 0x88 + param_1);
    if (*(longlong *)(param_1 + 0x4410) == 0) {
      *(longlong **)(param_1 + 0x4410) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x4410);
      *(longlong **)(param_1 + 0x4410) = plVar2;
    }
    *(int *)(param_1 + 0x4408) = *(int *)(param_1 + 0x4408) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 8) * 0x88 + param_1);
    if (*(longlong *)(param_1 + 0x4410) == 0) {
      *(longlong **)(param_1 + 0x4410) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x4410);
      *(longlong **)(param_1 + 0x4410) = plVar2;
    }
    *(int *)(param_1 + 0x4408) = *(int *)(param_1 + 0x4408) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 9) * 0x88 + param_1);
    if (*(longlong *)(param_1 + 0x4410) == 0) {
      *(longlong **)(param_1 + 0x4410) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x4410);
      *(longlong **)(param_1 + 0x4410) = plVar2;
    }
    *(int *)(param_1 + 0x4408) = *(int *)(param_1 + 0x4408) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 10) * 0x88 + param_1);
    if (*(longlong *)(param_1 + 0x4410) == 0) {
      *(longlong **)(param_1 + 0x4410) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x4410);
      *(longlong **)(param_1 + 0x4410) = plVar2;
    }
    *(int *)(param_1 + 0x4408) = *(int *)(param_1 + 0x4408) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 0xb) * 0x88 + param_1);
    if (*(longlong *)(param_1 + 0x4410) == 0) {
      *(longlong **)(param_1 + 0x4410) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x4410);
      *(longlong **)(param_1 + 0x4410) = plVar2;
    }
    *(int *)(param_1 + 0x4408) = *(int *)(param_1 + 0x4408) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 0xc) * 0x88 + param_1);
    if (*(longlong *)(param_1 + 0x4410) == 0) {
      *(longlong **)(param_1 + 0x4410) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x4410);
      *(longlong **)(param_1 + 0x4410) = plVar2;
    }
    *(int *)(param_1 + 0x4408) = *(int *)(param_1 + 0x4408) + 1;
    plVar2 = (longlong *)((ulonglong)(uVar3 + 0xd) * 0x88 + param_1);
    if (*(longlong *)(param_1 + 0x4410) == 0) {
      *(longlong **)(param_1 + 0x4410) = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = *(longlong *)(param_1 + 0x4410);
      *(longlong **)(param_1 + 0x4410) = plVar2;
    }
    *(int *)(param_1 + 0x4408) = *(int *)(param_1 + 0x4408) + 1;
    uVar1 = uVar3 + 0xe;
    uVar3 = uVar3 + 0x10;
  } while (uVar1 < 0x80);
  return param_1;
}



// FUNCTION 1453983b0 FUN_1453983b0 body=162 status=ok
// SIG undefined FUN_1453983b0(void)

undefined4 FUN_1453983b0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  iVar3 = (**(code **)(*param_2 + 0x70))(param_2);
  sVar2 = (**(code **)(*param_1 + 0x268))(param_1);
  if (sVar2 == -1) {
    uVar4 = 9;
  }
  else if (iVar3 - 2U < 4) {
    if (param_2[0xf] == 0) {
      lVar1 = param_2[4];
      lVar5 = FUN_14508a500(param_1 + 0x1e,(int)lVar1);
      if (lVar5 == 0) {
        uVar4 = 1;
        if ((int)param_1[4] == (int)lVar1) {
          uVar4 = 0x17;
        }
      }
      else {
        uVar4 = 5;
      }
    }
    else {
      uVar4 = 0x15;
    }
  }
  else {
    uVar4 = 4;
  }
  return uVar4;
}



// FUNCTION 145398460 FUN_145398460 body=82 status=ok
// SIG undefined FUN_145398460(void)

undefined8 * FUN_145398460(undefined8 *param_1)

{
  FUN_14536d5e0();
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *param_1 = &PTR_FUN_149d452d0;
  param_1[1] = &PTR_FUN_149d45548;
  param_1[2] = &PTR_LAB_149d45550;
  param_1[5] = &PTR_LAB_149d45578;
  return param_1;
}



// FUNCTION 1453984c0 FUN_1453984c0 body=48 status=ok
// SIG undefined FUN_1453984c0(void)

void FUN_1453984c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d44280;
  param_1[1] = &PTR_FUN_149d444f8;
  param_1[2] = &PTR_LAB_149d44500;
  param_1[5] = &PTR_LAB_149d44528;
  FUN_145391e70();
  return;
}



// FUNCTION 1453984f0 FUN_1453984f0 body=95 status=ok
// SIG undefined FUN_1453984f0(void)

undefined8 * FUN_1453984f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d44280;
  param_1[1] = &PTR_FUN_149d444f8;
  param_1[2] = &PTR_LAB_149d44500;
  param_1[5] = &PTR_LAB_149d44528;
  FUN_145391e70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 145398570 FUN_145398570 body=43 status=ok
// SIG undefined FUN_145398570(void)

undefined8 * FUN_145398570(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d455f8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1453985a0 FUN_1453985a0 body=58 status=ok
// SIG undefined FUN_1453985a0(void)

undefined8 * FUN_1453985a0(undefined8 *param_1,ushort param_2)

{
  *(ushort *)(param_1 + 2) = param_2;
  *param_1 = &PTR_FUN_149d45628;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(uint *)(param_1 + 1) = (uint)param_2 * 50000;
  *(uint *)((longlong)param_1 + 0xc) = (uint)param_2 * 50000;
  *(ushort *)((longlong)param_1 + 0x12) = param_2;
  return param_1;
}



// FUNCTION 1453985e0 FUN_1453985e0 body=163 status=ok
// SIG undefined FUN_1453985e0(void)

undefined4 FUN_1453985e0(longlong param_1,ushort param_2)

{
  char cVar1;
  undefined4 uVar2;
  void *_Dst;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(ushort *)(param_1 + 0x12) + 7 >> 3;
  uVar3 = uVar4 * 2;
  _Dst = AK::MemoryMgr::Malloc(0,(ulonglong)uVar3);
  *(void **)(param_1 + 0x28) = _Dst;
  if (_Dst == (void *)0x0) {
    uVar2 = 2;
  }
  else {
    *(ulonglong *)(param_1 + 0x30) = (ulonglong)uVar4 + (longlong)_Dst;
    memset(_Dst,0,(ulonglong)uVar3);
    uVar3 = (uint)param_2;
    if (3 < param_2) {
      uVar3 = 4;
    }
    if (*(uint *)(param_1 + 0x24) < uVar3) {
      cVar1 = FUN_145398df0(param_1 + 0x18,uVar3 - *(uint *)(param_1 + 0x24));
      uVar2 = 0x34;
      if (cVar1 != '\0') {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 145398690 FUN_145398690 body=36 status=ok
// SIG undefined FUN_145398690(void)

void FUN_145398690(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(0,param_1);
  }
  return;
}



// FUNCTION 1453986c0 FUN_1453986c0 body=681 status=ok
// SIG undefined FUN_1453986c0(void)

longlong * FUN_1453986c0(longlong param_1,ushort param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  void *pvVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  
  if (param_2 == 0) {
    return (longlong *)0x0;
  }
  plVar7 = AK::MemoryMgr::Malloc(0,0x38);
  if (plVar7 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  *(ushort *)(plVar7 + 2) = param_2;
  *plVar7 = (longlong)&PTR_FUN_149d45628;
  uVar10 = 0;
  *(ushort *)((longlong)plVar7 + 0x12) = param_2;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  *(uint *)(plVar7 + 1) = (uint)param_2 * 50000;
  *(uint *)((longlong)plVar7 + 0xc) = (uint)param_2 * 50000;
  *(undefined4 *)(plVar7 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)plVar7 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined2 *)(plVar7 + 2) = *(undefined2 *)(param_1 + 0x10);
  *(undefined2 *)((longlong)plVar7 + 0x12) = *(undefined2 *)(param_1 + 0x12);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar6 = param_2 + 7 >> 3;
    uVar2 = uVar6 * 2;
    pvVar8 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar2);
    plVar7[5] = (longlong)pvVar8;
    if (pvVar8 == (void *)0x0) {
      puVar3 = (undefined8 *)*plVar7;
      pcVar4 = (code *)puVar3[1];
      goto joined_r0x0001453988c2;
    }
    plVar7[6] = (longlong)pvVar8 + (ulonglong)uVar6;
    memcpy(pvVar8,*(void **)(param_1 + 0x28),(ulonglong)uVar2);
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if (*(uint *)((longlong)plVar7 + 0x24) < uVar2) {
    uVar6 = *(uint *)(plVar7 + 4);
    if ((void *)plVar7[3] == (void *)0x0) {
      pvVar8 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar2 * 2);
      if (pvVar8 != (void *)0x0) {
        if (((void *)plVar7[3] != (void *)0x0) && ((void *)plVar7[3] != pvVar8)) {
          if ((ulonglong)uVar6 != 0) {
            do {
              *(undefined2 *)((longlong)pvVar8 + uVar10 * 2) =
                   *(undefined2 *)(plVar7[3] + uVar10 * 2);
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar6);
          }
          AK::MemoryMgr::Free(0,(void *)plVar7[3]);
        }
        goto LAB_14539883f;
      }
    }
    else {
      pvVar8 = AK::MemoryMgr::Realloc(0,(void *)plVar7[3],(ulonglong)uVar2 * 2);
      if (pvVar8 != (void *)0x0) {
LAB_14539883f:
        plVar7[3] = (longlong)pvVar8;
        *(uint *)((longlong)plVar7 + 0x24) = uVar2;
      }
    }
  }
  puVar11 = *(undefined2 **)(param_1 + 0x18);
  puVar9 = puVar11 + *(uint *)(param_1 + 0x20);
  while( true ) {
    if (puVar11 == puVar9) {
      return plVar7;
    }
    uVar2 = *(uint *)(plVar7 + 4);
    uVar6 = *(uint *)((longlong)plVar7 + 0x24);
    uVar1 = *puVar11;
    if (uVar6 <= uVar2) break;
LAB_14539892c:
    uVar2 = *(uint *)(plVar7 + 4);
    *(uint *)(plVar7 + 4) = uVar2 + 1;
    puVar9 = (undefined2 *)(plVar7[3] + (ulonglong)uVar2 * 2);
    if (puVar9 == (undefined2 *)0x0) goto LAB_1453988ae;
    *puVar9 = uVar1;
    puVar11 = puVar11 + 1;
    puVar9 = (undefined2 *)
             (*(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 2);
  }
  iVar5 = (uVar6 >> 1) + uVar6;
  if (uVar6 == 0) {
    iVar5 = 1;
  }
  uVar6 = iVar5 + uVar6;
  if ((void *)plVar7[3] == (void *)0x0) {
    pvVar8 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar6 * 2);
    if (pvVar8 != (void *)0x0) {
      if (((void *)plVar7[3] != (void *)0x0) && ((void *)plVar7[3] != pvVar8)) {
        uVar10 = 0;
        if (uVar2 != 0) {
          do {
            *(undefined2 *)((longlong)pvVar8 + uVar10 * 2) = *(undefined2 *)(plVar7[3] + uVar10 * 2)
            ;
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar2);
        }
        AK::MemoryMgr::Free(0,(void *)plVar7[3]);
      }
      goto LAB_14539891f;
    }
  }
  else {
    pvVar8 = AK::MemoryMgr::Realloc(0,(void *)plVar7[3],(ulonglong)uVar6 * 2);
    if (pvVar8 != (void *)0x0) {
LAB_14539891f:
      plVar7[3] = (longlong)pvVar8;
      *(uint *)((longlong)plVar7 + 0x24) = uVar6;
      if (uVar2 < uVar6) goto LAB_14539892c;
    }
  }
LAB_1453988ae:
  puVar3 = (undefined8 *)*plVar7;
  pcVar4 = (code *)puVar3[1];
joined_r0x0001453988c2:
  if (pcVar4 == FUN_145398690) {
    (*(code *)*puVar3)(plVar7,0);
    AK::MemoryMgr::Free(0,plVar7);
  }
  else {
    (*pcVar4)();
  }
  return (longlong *)0x0;
}



// FUNCTION 145398970 FUN_145398970 body=337 status=ok
// SIG undefined FUN_145398970(void)

undefined8 FUN_145398970(longlong param_1,undefined8 *param_2,ushort param_3)

{
  char cVar1;
  uint uVar2;
  undefined2 local_res10 [4];
  ushort local_res18 [4];
  undefined4 local_res20 [2];
  undefined1 local_28 [16];
  
  local_res20[0] = 0;
  uVar2 = param_3 + 7 >> 3;
  local_res18[0] = param_3;
  cVar1 = (**(code **)*param_2)(param_2,local_res18,2,local_res10);
  if ((((cVar1 != '\0') &&
       (cVar1 = (**(code **)*param_2)(param_2,param_1 + 8,4,local_res10), cVar1 != '\0')) &&
      (cVar1 = (**(code **)*param_2)(param_2,param_1 + 0xc,4,local_res10), cVar1 != '\0')) &&
     ((cVar1 = (**(code **)*param_2)(param_2,param_1 + 0x10,2,local_res10), cVar1 != '\0' &&
      (cVar1 = (**(code **)*param_2)(param_2,param_1 + 0x12,2,local_res10), cVar1 != '\0')))) {
    local_res10[0] = *(undefined2 *)(param_1 + 0x20);
    cVar1 = (**(code **)*param_2)(param_2,local_res10,2,local_28);
    if ((cVar1 != '\0') &&
       ((cVar1 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x28),uVar2,local_res20),
        cVar1 != '\0' &&
        (cVar1 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x30),uVar2,local_res20),
        cVar1 != '\0')))) {
      if ((*(int *)(param_1 + 0x20) != 0) &&
         (cVar1 = (**(code **)*param_2)
                            (param_2,*(undefined8 *)(param_1 + 0x18),*(int *)(param_1 + 0x20) * 2,
                             local_res20), cVar1 == '\0')) {
        return 2;
      }
      return 1;
    }
  }
  return 2;
}



// FUNCTION 145398ad0 FUN_145398ad0 body=506 status=ok
// SIG undefined FUN_145398ad0(void)

undefined8 FUN_145398ad0(longlong param_1,undefined8 *param_2,ushort param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ushort local_res10 [4];
  ushort local_res18 [4];
  undefined2 local_res20 [4];
  undefined2 local_48 [2];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  
  uVar3 = 0;
  local_res18[0] = 0;
  uVar5 = param_3 + 7 >> 3;
  cVar1 = (**(code **)*param_2)(param_2,local_res18,2,local_38);
  if (cVar1 == '\0') {
    return 2;
  }
  if (local_res18[0] != param_3) {
    return 2;
  }
  local_40 = 0;
  local_3c = 0;
  local_res20[0] = 0;
  local_48[0] = 0;
  local_res10[0] = 0;
  local_44 = 0;
  cVar1 = (**(code **)*param_2)(param_2,&local_40,4,local_38);
  if (cVar1 == '\0') {
    return 2;
  }
  cVar1 = (**(code **)*param_2)(param_2,&local_3c,4,local_38);
  if (cVar1 == '\0') {
    return 2;
  }
  cVar1 = (**(code **)*param_2)(param_2,local_res20,2,local_38);
  if (cVar1 == '\0') {
    return 2;
  }
  cVar1 = (**(code **)*param_2)(param_2,local_48,2,local_38);
  if (cVar1 == '\0') {
    return 2;
  }
  cVar1 = (**(code **)*param_2)(param_2,local_res10,2,local_38);
  if (cVar1 == '\0') {
    return 2;
  }
  cVar1 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x28),uVar5,&local_44);
  if (cVar1 == '\0') {
    return 2;
  }
  cVar1 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x30),uVar5,&local_44);
  if (cVar1 == '\0') {
    return 2;
  }
  uVar5 = (uint)local_res10[0];
  *(undefined4 *)(param_1 + 8) = local_40;
  *(undefined4 *)(param_1 + 0xc) = local_3c;
  *(undefined2 *)(param_1 + 0x10) = local_res20[0];
  *(undefined2 *)(param_1 + 0x12) = local_48[0];
  if (local_res10[0] == 0) {
    return 1;
  }
  uVar2 = (uint)local_res10[0];
  if ((*(uint *)(param_1 + 0x20) <= uVar2) && (*(uint *)(param_1 + 0x24) < uVar2)) {
    cVar1 = FUN_145398df0(param_1 + 0x18,(uint)local_res10[0] - *(uint *)(param_1 + 0x24));
    if (cVar1 == '\0') goto LAB_145398c65;
    uVar5 = (uint)local_res10[0];
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  cVar1 = (**(code **)*param_2)(param_2,*(undefined8 *)(param_1 + 0x18),uVar5 * 2,&local_44);
  if (cVar1 != '\0') {
    return 1;
  }
LAB_145398c65:
  *(undefined4 *)(param_1 + 0xc) = local_40;
  *(ushort *)(param_1 + 0x10) = local_res18[0];
  uVar4 = uVar3;
  if ((local_res18[0] + 7 & 0xfffffff8) != 0) {
    do {
      uVar5 = (int)uVar4 + 1;
      *(undefined1 *)(uVar3 + *(longlong *)(param_1 + 0x30)) = 0;
      uVar3 = uVar3 + 1;
      uVar4 = (ulonglong)uVar5;
    } while ((int)uVar5 < (int)(local_res18[0] + 7 >> 3));
  }
  return 2;
}



// FUNCTION 145398cd0 FUN_145398cd0 body=28 status=ok
// SIG undefined FUN_145398cd0(void)

void FUN_145398cd0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = (param_2 & 0xffff) >> 3;
  *(byte *)(*(longlong *)(param_1 + 0x28) + uVar1) =
       *(byte *)(*(longlong *)(param_1 + 0x28) + uVar1) | (byte)(1 << ((uint)param_2 & 7));
  return;
}



// FUNCTION 145398cf0 FUN_145398cf0 body=27 status=ok
// SIG undefined FUN_145398cf0(void)

undefined8 FUN_145398cf0(longlong param_1,ulonglong param_2)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x28) >> 8),
                  ((uint)(int)*(char *)(((param_2 & 0xffff) >> 3) + *(longlong *)(param_1 + 0x28))
                   >> ((uint)param_2 & 7) & 1) != 0);
}



// FUNCTION 145398d10 FUN_145398d10 body=56 status=ok
// SIG undefined FUN_145398d10(void)

void FUN_145398d10(longlong param_1,longlong param_2)

{
  memset(*(void **)(param_1 + 0x28),0,(param_2 + 7U >> 3 & 0xffffffff) * 2);
  *(short *)(param_1 + 0x10) = (short)param_2;
  return;
}



// FUNCTION 145398d50 FUN_145398d50 body=28 status=ok
// SIG undefined FUN_145398d50(void)

void FUN_145398d50(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = (param_2 & 0xffff) >> 3;
  *(byte *)(*(longlong *)(param_1 + 0x30) + uVar1) =
       *(byte *)(*(longlong *)(param_1 + 0x30) + uVar1) | (byte)(1 << ((uint)param_2 & 7));
  return;
}



// FUNCTION 145398d70 FUN_145398d70 body=28 status=ok
// SIG undefined FUN_145398d70(void)

void FUN_145398d70(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = (param_2 & 0xffff) >> 3;
  *(byte *)(*(longlong *)(param_1 + 0x30) + uVar1) =
       *(byte *)(*(longlong *)(param_1 + 0x30) + uVar1) & ~(byte)(1 << ((uint)param_2 & 7));
  return;
}



// FUNCTION 145398d90 FUN_145398d90 body=27 status=ok
// SIG undefined FUN_145398d90(void)

undefined8 FUN_145398d90(longlong param_1,ulonglong param_2)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x30) >> 8),
                  ((uint)(int)*(char *)(((param_2 & 0xffff) >> 3) + *(longlong *)(param_1 + 0x30))
                   >> ((uint)param_2 & 7) & 1) != 0);
}



// FUNCTION 145398dc0 FUN_145398dc0 body=43 status=ok
// SIG undefined FUN_145398dc0(void)

ulonglong FUN_145398dc0(longlong param_1)

{
  DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
  return (DAT_14c791078 >> 0x21) % (ulonglong)*(uint *)(param_1 + 0xc);
}



// FUNCTION 145398df0 FUN_145398df0 body=170 status=ok
// SIG undefined FUN_145398df0(void)

undefined8 FUN_145398df0(longlong *param_1,int param_2)

{
  uint uVar1;
  __uint64 _Var2;
  void *pvVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar1 = *(uint *)(param_1 + 1);
  _Var2 = (ulonglong)uVar5 * 2;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar3 = AK::MemoryMgr::Malloc(0,_Var2);
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar3)) {
      uVar4 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined2 *)((longlong)pvVar3 + uVar4 * 2) = *(undefined2 *)(*param_1 + uVar4 * 2);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar3 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var2);
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar3;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 145398ea0 FUN_145398ea0 body=122 status=ok
// SIG undefined FUN_145398ea0(void)

undefined8 * FUN_145398ea0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_149d45628;
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(0,(void *)param_1[5]);
  }
  if ((void *)param_1[3] != (void *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[3]);
    param_1[3] = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  *param_1 = &PTR_FUN_149d455f8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 145398f20 FUN_145398f20 body=24 status=ok
// SIG undefined FUN_145398f20(void)

undefined8 * FUN_145398f20(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_149d45658;
  *(undefined2 *)((longlong)param_1 + 10) = 0xffff;
  return param_1;
}



// FUNCTION 145398f50 FUN_145398f50 body=36 status=ok
// SIG undefined FUN_145398f50(void)

void FUN_145398f50(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(0,param_1);
  }
  return;
}



// FUNCTION 145398f80 FUN_145398f80 body=73 status=ok
// SIG undefined FUN_145398f80(void)

void FUN_145398f80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(0,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined2 *)((longlong)puVar1 + 10) = 0xffff;
    *puVar1 = &PTR_FUN_149d45658;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_1 + 8);
    *(undefined2 *)((longlong)puVar1 + 10) = *(undefined2 *)(param_1 + 10);
    return;
  }
  return;
}



// FUNCTION 145398fd0 FUN_145398fd0 body=92 status=ok
// SIG undefined FUN_145398fd0(void)

undefined8 FUN_145398fd0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  
  cVar1 = (**(code **)*param_2)(param_2,param_1 + 8,1,local_res8);
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)*param_2)(param_2,param_1 + 10,2,local_res8), cVar1 != '\0')) {
    return 1;
  }
  return 2;
}



// FUNCTION 145399030 FUN_145399030 body=92 status=ok
// SIG undefined FUN_145399030(void)

undefined8 FUN_145399030(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  
  cVar1 = (**(code **)*param_2)(param_2,param_1 + 8,1,local_res8);
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)*param_2)(param_2,param_1 + 10,2,local_res8), cVar1 != '\0')) {
    return 1;
  }
  return 2;
}



// FUNCTION 145399090 FUN_145399090 body=43 status=ok
// SIG undefined FUN_145399090(void)

undefined8 * FUN_145399090(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d455f8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1453990c0 FUN_1453990c0 body=43 status=ok
// SIG undefined FUN_1453990c0(void)

undefined8 * FUN_1453990c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d45688;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1453990f0 FUN_1453990f0 body=24 status=ok
// SIG undefined FUN_1453990f0(void)

undefined8 * FUN_1453990f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d456e0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 145399120 FUN_145399120 body=86 status=ok
// SIG undefined FUN_145399120(void)

void FUN_145399120(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    *(undefined4 *)(param_1 + 2) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[1]);
    param_1[1] = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(2,param_1);
    return;
  }
  return;
}



// FUNCTION 1453991a0 FUN_1453991a0 body=113 status=ok
// SIG undefined FUN_1453991a0(void)

undefined8 FUN_1453991a0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 < *(uint *)(param_1 + 0x14)) ||
     ((cVar3 = FUN_145399360((longlong *)(param_1 + 8)), cVar3 != '\0' &&
      (uVar2 < *(uint *)(param_1 + 0x14))))) {
    uVar2 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = uVar2 + 1;
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar2 * 8);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = param_3;
      *puVar1 = param_2;
      return 1;
    }
  }
  return 2;
}



// FUNCTION 145399220 FUN_145399220 body=142 status=ok
// SIG undefined FUN_145399220(void)

void FUN_145399220(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int *piVar2;
  int *_Dst;
  
  piVar2 = *(int **)(param_1 + 8);
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x10);
  _Dst = piVar2;
  if (piVar2 != piVar2 + uVar1 * 2) {
    do {
      if (*_Dst == param_2) {
        if (_Dst < piVar2 + (ulonglong)((int)uVar1 - 1) * 2) {
          memmove(_Dst,_Dst + 2,
                  (ulonglong)
                  ((int)(piVar2 + (ulonglong)((int)uVar1 - 1) * 2) - (int)_Dst & 0xfffffff8));
          piVar2 = *(int **)(param_1 + 8);
        }
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        uVar1 = (ulonglong)*(uint *)(param_1 + 0x10);
      }
      else {
        _Dst = _Dst + 2;
      }
    } while (_Dst != piVar2 + uVar1 * 2);
  }
  return;
}



// FUNCTION 145399360 FUN_145399360 body=186 status=ok
// SIG undefined FUN_145399360(void)

undefined8 FUN_145399360(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 1);
  iVar3 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar3 = 1;
  }
  _Var6 = (ulonglong)(iVar3 + uVar1) << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        uVar5 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar5 * 8) = *(undefined8 *)(*param_1 + uVar5 * 8);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1453993fd;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_1453993fd:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145399420 FUN_145399420 body=43 status=ok
// SIG undefined FUN_145399420(void)

undefined8 * FUN_145399420(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d45688;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 145399450 FUN_145399450 body=24 status=ok
// SIG undefined FUN_145399450(void)

undefined8 * FUN_145399450(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d45748;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 145399480 FUN_145399480 body=86 status=ok
// SIG undefined FUN_145399480(void)

void FUN_145399480(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    *(undefined4 *)(param_1 + 2) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[1]);
    param_1[1] = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(2,param_1);
    return;
  }
  return;
}



// FUNCTION 145399500 FUN_145399500 body=97 status=ok
// SIG undefined FUN_145399500(void)

int FUN_145399500(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x14) <= uVar1) {
    cVar2 = FUN_145075970((longlong *)(param_1 + 8));
    if ((cVar2 == '\0') || (*(uint *)(param_1 + 0x14) <= uVar1)) {
      puVar3 = (undefined4 *)0x0;
      goto LAB_145399549;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1 + 1;
  puVar3 = (undefined4 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 4);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = param_2;
  }
LAB_145399549:
  return 2 - (uint)(puVar3 != (undefined4 *)0x0);
}



// FUNCTION 145399570 FUN_145399570 body=91 status=ok
// SIG undefined FUN_145399570(void)

void FUN_145399570(longlong param_1,int param_2)

{
  int *piVar1;
  int *_Dst;
  
  piVar1 = *(int **)(param_1 + 8);
  _Dst = piVar1;
  if (piVar1 != piVar1 + *(uint *)(param_1 + 0x10)) {
    while (*_Dst != param_2) {
      _Dst = _Dst + 1;
      if (_Dst == piVar1 + *(uint *)(param_1 + 0x10)) {
        return;
      }
    }
    if (_Dst < piVar1 + (*(uint *)(param_1 + 0x10) - 1)) {
      memmove(_Dst,_Dst + 1,
              (ulonglong)((int)(piVar1 + (*(uint *)(param_1 + 0x10) - 1)) - (int)_Dst & 0xfffffffc))
      ;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  }
  return;
}



// FUNCTION 145399670 FUN_145399670 body=43 status=ok
// SIG undefined FUN_145399670(void)

undefined8 * FUN_145399670(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d45688;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1453996a0 FUN_1453996a0 body=69 status=ok
// SIG undefined FUN_1453996a0(void)

int FUN_1453996a0(double param_1)

{
  double dVar1;
  
  dVar1 = (double)DAT_14c72f42c * param_1 * 0.001;
  if (0.0 < dVar1) {
    return (int)(dVar1 + 0.5);
  }
  return (int)(dVar1 + -0.5);
}



// FUNCTION 1453996f0 FUN_1453996f0 body=413 status=ok
// SIG undefined FUN_1453996f0(void)

undefined8 *
FUN_1453996f0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  FUN_1450e9aa0(param_1,param_2,param_3,param_4,param_5,0);
  *param_1 = &PTR_FUN_149d457a8;
  param_1[2] = &PTR_FUN_149d45820;
  param_1[3] = &PTR_LAB_149d45828;
  param_1[0x10] = &PTR_LAB_149d458b8;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x88) + 0x18);
  param_1[0x72] = lVar1;
  if (lVar1 != 0) {
    FUN_14538ec90();
  }
  *(uint *)(param_1 + 0x7d) = *(uint *)(param_1 + 0x7d) & 0xfffffff0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = 0;
  *(byte *)((longlong)param_1 + 0x3ec) =
       (*(byte *)(param_2 + 0x310) >> 1 & 1 ^ *(byte *)((longlong)param_1 + 0x3ec) & 0xfe) & 0xf9;
  LOCK();
  *(int *)(param_1[0x53] + 0x14) = *(int *)(param_1[0x53] + 0x14) + 1;
  UNLOCK();
  *(undefined4 *)((longlong)param_1 + 0x334) = *(undefined4 *)(*(longlong *)(param_2 + 0x88) + 0x20)
  ;
  if (param_1[0x51] == 0) {
    param_1[0x51] = **(undefined8 **)(param_2 + 0x88);
    **(undefined8 **)(param_2 + 0x88) = 0;
  }
  if (param_1[0x52] == 0) {
    param_1[0x52] = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 8);
    *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0x73) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  param_1[0x73] = *(undefined8 *)(param_2 + 0x38);
  param_1[0x74] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  param_1[0x75] = *(undefined8 *)(param_2 + 0x48);
  param_1[0x76] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  param_1[0x77] = *(undefined8 *)(param_2 + 0x58);
  param_1[0x78] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  param_1[0x79] = *(undefined8 *)(param_2 + 0x68);
  param_1[0x7a] = uVar2;
  *(undefined4 *)(param_1 + 0x7b) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x3dc) = *(undefined4 *)(param_2 + 0x7c);
  uVar3 = *(uint *)(param_1 + 0x73);
  while( true ) {
    if (uVar3 == 0) {
      return param_1;
    }
    while (uVar3 = uVar3 - 1, 0x1f < uVar3) {
      *(uint *)(param_1 + 0x73) = uVar3;
    }
    if ((*(uint *)((longlong)param_1 + 0x3dc) >> ((ulonglong)uVar3 & 0x3f) & 1) != 0) break;
    *(uint *)(param_1 + 0x73) = uVar3;
  }
  return param_1;
}



// FUNCTION 145399890 FUN_145399890 body=124 status=ok
// SIG undefined FUN_145399890(void)

void FUN_145399890(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149d457a8;
  param_1[2] = &PTR_FUN_149d45820;
  param_1[3] = &PTR_LAB_149d45828;
  param_1[0x10] = &PTR_LAB_149d458b8;
  plVar3 = (longlong *)param_1[0x53];
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0x14);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (**(code **)(*plVar3 + 0x18))();
  }
  if (param_1[0x72] != 0) {
    FUN_14538eca0();
    param_1[0x72] = 0;
  }
  FUN_1450e9f00(param_1);
  return;
}



// FUNCTION 145399910 FUN_145399910 body=260 status=ok
// SIG undefined FUN_145399910(void)

ulonglong FUN_145399910(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar3 = FUN_1450e9fd0();
  uVar4 = uVar3 & 0xffffffff;
  if ((int)uVar3 == 1) {
    if (*(longlong *)(param_1 + 0x270) != 0) {
      plVar1 = (longlong *)(param_1 + -0x18);
      lVar5 = param_1 + -8;
      if (plVar1 == (longlong *)0x0) {
        lVar5 = 0;
      }
      iVar2 = FUN_1450b0b30(DAT_14c791068,*(longlong *)(param_1 + 0x270),lVar5);
      if (iVar2 == 1) {
        (**(code **)(*plVar1 + 0x60))(plVar1,0xe,0xffffffff);
      }
      else {
        *(undefined8 *)(param_1 + 0x270) = 0;
        *(byte *)(param_1 + 0x2fa) = *(byte *)(param_1 + 0x2fa) & 0xfa | 2;
      }
    }
    if (*(longlong *)(param_1 + 0x278) != 0) {
      plVar1 = (longlong *)(param_1 + -0x18);
      lVar5 = param_1 + -8;
      if (plVar1 == (longlong *)0x0) {
        lVar5 = 0;
      }
      iVar2 = FUN_1450b0b30(DAT_14c791068,*(longlong *)(param_1 + 0x278),lVar5);
      if (iVar2 == 1) {
        (**(code **)(*plVar1 + 0x60))(plVar1,0xe,0xffffffff);
      }
      else {
        *(undefined8 *)(param_1 + 0x278) = 0;
      }
    }
    uVar3 = uVar4;
    if ((((*(byte *)(param_1 + 0x2fa) & 7) == 0) && (*(int *)(param_1 + 0x31c) != 0)) &&
       (*(longlong *)(param_1 + 0x278) == 0)) {
      *(byte *)(param_1 + 0x2fa) = *(byte *)(param_1 + 0x2fa) & 0xf9 | 1;
    }
  }
  return uVar3;
}



// FUNCTION 145399a20 FUN_145399a20 body=1111 status=ok
// SIG undefined FUN_145399a20(void)

void FUN_145399a20(longlong param_1,char param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uStackX_c;
  
  FUN_1450ecb30(param_1 + -0x18);
  (**(code **)(*(longlong *)(param_1 + -0x18) + 0x70))(param_1 + -0x18);
  if ((*(int *)(param_1 + 0x3cc) == 0) && (DAT_14c790fd8 != 0)) {
    FUN_145083890();
  }
  piVar1 = DAT_14c791060;
  uVar2 = *(uint *)(param_1 + 0x3cc);
  lVar10 = 0;
  if (((uVar2 == 0) || ((*(byte *)(param_1 + 0x2fc) & 4) != 0)) ||
     (((*(byte *)(param_1 + 0x2fc) & 0x20) != 0 &&
      (((*(int *)(param_1 + 0x3d0) << 0x1c) >> 0x1c) - 1U < 2)))) goto LAB_145399e24;
  do {
    while (iVar4 = *piVar1, iVar4 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
      if (*piVar1 < 0) goto LAB_145399acf;
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
    }
    LOCK();
    iVar8 = *piVar1;
    if (iVar4 == iVar8) {
      *piVar1 = iVar4 + 1;
    }
    UNLOCK();
  } while (iVar4 != iVar8);
LAB_145399acf:
  lVar9 = lVar10;
  if (piVar1[0x12] != 0) {
    for (lVar11 = *(longlong *)
                   (*(longlong *)(piVar1 + 0x10) +
                   ((ulonglong)uVar2 % (ulonglong)(uint)piVar1[0x12]) * 8);
        (lVar9 = lVar10, lVar11 != 0 && (lVar9 = lVar11, *(uint *)(lVar11 + 0x10) != uVar2));
        lVar11 = *(longlong *)(lVar11 + 8)) {
    }
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar4 = *piVar1;
  while (-1 < iVar4) {
    LOCK();
    iVar8 = *piVar1;
    if (iVar4 == iVar8) {
      *piVar1 = iVar4 + -1;
    }
    UNLOCK();
    if (iVar4 == iVar8) {
      if ((iVar4 + -1 == 0) && (0 < piVar1[0xc])) {
        SetEvent(*(HANDLE *)(piVar1 + 0xe));
      }
      goto LAB_145399b4e;
    }
    iVar4 = *piVar1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_145399b4e:
  lVar11 = lVar9 + -0x10;
  if (lVar9 == 0) {
    lVar11 = lVar10;
  }
  if (lVar11 == 0) goto LAB_145399e24;
  plVar5 = (longlong *)FUN_145371c90(0x503,param_1 + 0x378);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 0x1d) = *(undefined4 *)(param_1 + 0x31c);
    FUN_145372610(plVar5,param_1 + 0x380);
    (**(code **)(*plVar5 + 0x20))
              (plVar5,CONCAT44(uStackX_c,*(undefined4 *)(lVar11 + 0x20)) & 0xffffff00ffffffff);
    FUN_145372660(plVar5,*(undefined8 *)(param_1 + 0x280));
    FUN_145369fe0(plVar5,*(byte *)(param_1 + 0x208) >> 6 & 1);
    uVar3 = FUN_14536f650(*(undefined8 *)(param_1 + 0x1d0));
    FUN_145372980(plVar5,uVar3,*(undefined8 *)(param_1 + 0x350),param_1 + 0x340);
    FUN_145372a50(plVar5,param_1 + 0x78);
    if (((byte)*(undefined4 *)(param_1 + 0x3d0) & 0xf) == 4) {
      FUN_145372720(plVar5,*(undefined4 *)(param_1 + 0x310));
    }
    pvVar6 = AK::MemoryMgr::Malloc(0,0x48);
    if ((pvVar6 != (void *)0x0) &&
       (plVar7 = (longlong *)FUN_1450807a0(pvVar6,*(undefined8 *)(param_1 + 8)),
       plVar7 != (longlong *)0x0)) {
      iVar4 = FUN_145372380(plVar5,*(undefined8 *)(param_1 + 0x270),plVar7);
      if ((iVar4 == 1) &&
         (iVar4 = FUN_1453723f0(plVar5,*(undefined8 *)(param_1 + 0x278),plVar7), iVar4 == 1)) {
        FUN_145372460(plVar5,param_1 + 0x150);
        if (((*(byte *)(param_1 + 0x2fc) & 8) == 0) && (param_2 == '\0')) {
          if (((byte)*(undefined4 *)(param_1 + 0x3d0) & 0xf) == 3) {
            lVar10 = *plVar5;
            uVar3 = FUN_1453996a0((double)*(float *)(param_1 + 0x3c8));
            iVar4 = (**(code **)(lVar10 + 0x28))(plVar5,0xf,uVar3,0,0);
            goto LAB_145399d6c;
          }
        }
        else {
          FUN_1453726d0(plVar5,*(byte *)(param_1 + 0x3d4) & 1);
          iVar4 = FUN_1453996a0((double)*(float *)(param_1 + 0x3c8));
          iVar8 = (DAT_14c791094 + 10) * (uint)DAT_14c72f434;
          if ((((byte)*(undefined4 *)(param_1 + 0x3d0) & 0xf) != 3) || (iVar4 < iVar8)) {
            iVar4 = iVar8;
          }
          iVar4 = (**(code **)(*plVar5 + 0x28))(plVar5,0xf,iVar4,0,0);
LAB_145399d6c:
          if (iVar4 != 1) goto LAB_145399dc9;
        }
        plVar7[1] = (longlong)plVar5;
        FUN_1453923d0((longlong)plVar7 + 0x1c,param_1 + 0x254);
        FUN_145083930(DAT_14c790fd8,plVar7,0,0);
        if (((*(float *)(param_1 + 0x3c8) != 0.0) && (*(int *)(param_1 + 0x31c) != 0)) &&
           (*(longlong *)(param_1 + 0x278) == 0)) {
          FUN_145082e50(DAT_14c790fd8,plVar7);
        }
      }
      else {
LAB_145399dc9:
        (**(code **)(*plVar7 + 8))(plVar7,0);
        AK::MemoryMgr::Free(0,plVar7);
      }
    }
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0x14);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if ((*(byte *)(param_1 + 0x2fc) & 1) != 0) {
    *(byte *)(param_1 + 0x2fc) = *(byte *)(param_1 + 0x2fc) | 2;
  }
  LOCK();
  piVar1 = (int *)(lVar11 + 0x24);
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar4 == 1) {
    (**(code **)(*(longlong *)(lVar11 + 0x10) + 0x18))();
  }
LAB_145399e24:
  lVar10 = *(longlong *)(param_1 + 0x378);
  *(undefined8 *)(param_1 + 0x378) = 0;
  if (lVar10 != 0) {
    FUN_14538eca0();
  }
  if ((*(byte *)(param_1 + 0x2fc) & 3) == 3) {
    *(byte *)(param_1 + 0x2fc) = *(byte *)(param_1 + 0x2fc) & 0xfe;
  }
  FUN_1450ea0f0(param_1,param_2);
  return;
}



// FUNCTION 145399e80 FUN_145399e80 body=63 status=ok
// SIG undefined FUN_145399e80(void)

void FUN_145399e80(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  char cVar1;
  
  cVar1 = FUN_14539a9b0();
  if (cVar1 != '\0') {
    FUN_1450ead90(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 145399ec0 FUN_145399ec0 body=65 status=ok
// SIG undefined FUN_145399ec0(void)

void FUN_145399ec0(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  char cVar1;
  
  cVar1 = FUN_14539a9b0();
  if (cVar1 != '\0') {
    FUN_1450eadf0(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 145399f10 FUN_145399f10 body=688 status=ok
// SIG undefined FUN_145399f10(void)

void FUN_145399f10(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined2 local_res8 [4];
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_30;
  
  if (((*(byte *)(param_1 + 0x3ec) & 4) == 0) &&
     (plVar3 = *(longlong **)(param_1 + 0x390), plVar3 != (longlong *)0x0)) {
    iVar2 = (int)plVar3[1];
    while (iVar2 != 0) {
      uVar5 = (ulonglong)*(uint *)(plVar3 + 1);
      lVar4 = *plVar3;
      lVar6 = *(longlong *)(lVar4 + -0x10 + uVar5 * 0x28);
      if (lVar6 == 0) {
        lVar6 = FUN_1450c38a0(*(undefined8 *)(lVar4 + -0x28 + uVar5 * 0x28),
                              *(undefined8 *)(param_1 + 0x20),local_res8,local_res18,
                              lVar4 + (uVar5 * 5 + -4) * 8,lVar4 + (uVar5 * 5 + -3) * 8);
        if (lVar6 != 0) {
          *(undefined2 *)(param_1 + 0x39c + (ulonglong)(*(int *)(param_1 + 0x398) - 1) * 2) =
               local_res8[0];
          *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(lVar6 + 0x20);
          uVar7 = FUN_1450c2a70(*(undefined8 *)(lVar4 + -0x28 + uVar5 * 0x28));
          *(uint *)(param_1 + 1000) = (uVar7 ^ *(uint *)(param_1 + 1000)) & 0xfffffff0 ^ uVar7;
          if (((int)(uVar7 << 0x1c) >> 0x1c) - 1U < 3) {
            local_58 = *(undefined8 *)(param_1 + 0x20);
            local_50 = *(undefined4 *)(param_1 + 0x280);
            local_48 = 0;
            local_40 = 0xff;
            local_38 = 0xff;
            local_30 = 0;
            uVar8 = FUN_1450c2a80(*(undefined8 *)(lVar4 + -0x28 + uVar5 * 0x28),&local_58);
          }
          else {
            uVar8 = 0;
          }
          *(undefined4 *)(param_1 + 0x3e0) = uVar8;
          *(byte *)(param_1 + 0x3ec) = *(byte *)(param_1 + 0x3ec) | 4;
          LOCK();
          piVar1 = (int *)(lVar6 + 0x24);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 != 1) {
            return;
          }
          (**(code **)(*(longlong *)(lVar6 + 0x10) + 0x18))();
          return;
        }
        uVar7 = *(int *)(param_1 + 0x398) - 1;
        *(uint *)(param_1 + 0x398) = uVar7;
        while (uVar7 != 0) {
          while( true ) {
            uVar7 = uVar7 - 1;
            if (uVar7 < 0x20) break;
            *(uint *)(param_1 + 0x398) = uVar7;
          }
          if ((*(uint *)(param_1 + 0x3dc) >> ((ulonglong)uVar7 & 0x3f) & 1) != 0) break;
          *(uint *)(param_1 + 0x398) = uVar7;
        }
        plVar3 = *(longlong **)(param_1 + 0x390);
        FUN_14538eb00(*plVar3 + ((ulonglong)*(uint *)(plVar3 + 1) * 5 + -5) * 8);
        *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
      }
      else {
        if (param_2 != '\0') {
          return;
        }
        local_res20 = 0;
        FUN_14553fee0(lVar6,*(undefined8 *)(lVar4 + -8 + uVar5 * 0x28),&local_res20);
        plVar3 = *(longlong **)(param_1 + 0x390);
        FUN_14538eb00(*plVar3 + ((ulonglong)*(uint *)(plVar3 + 1) * 5 + -5) * 8);
        lVar4 = local_res20;
        *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
        if (local_res20 == 0) {
          lVar4 = *(longlong *)(param_1 + 0x390);
          *(undefined8 *)(param_1 + 0x390) = 0;
          if (lVar4 == 0) {
            return;
          }
          FUN_14538eca0();
          if (local_res20 == 0) {
            return;
          }
          FUN_14538eca0();
          return;
        }
        FUN_14538ec90(local_res20);
        lVar6 = *(longlong *)(param_1 + 0x390);
        *(longlong *)(param_1 + 0x390) = lVar4;
        if (lVar6 != 0) {
          FUN_14538eca0();
        }
        if (local_res20 != 0) {
          FUN_14538eca0();
        }
      }
      plVar3 = *(longlong **)(param_1 + 0x390);
      iVar2 = (int)plVar3[1];
    }
    *(undefined8 *)(param_1 + 0x390) = 0;
    if (plVar3 != (longlong *)0x0) {
      FUN_14538eca0();
    }
  }
  *(byte *)(param_1 + 0x3ec) = *(byte *)(param_1 + 0x3ec) | 4;
  return;
}



// FUNCTION 14539a1c0 FUN_14539a1c0 body=653 status=ok
// SIG undefined FUN_14539a1c0(void)

void FUN_14539a1c0(longlong *param_1,float param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  void *pvVar7;
  longlong *plVar8;
  float fVar9;
  undefined4 uStackX_c;
  
  if (((((*(byte *)((longlong)param_1 + 0x314) & 0x10) == 0) &&
       ((*(byte *)((longlong)param_1 + 0x314) & 0x20) == 0)) &&
      ((**(code **)(*param_1 + 0x70))(param_1,1), (((int)param_1[0x7d] << 0x1c) >> 0x1c) - 1U < 2))
     && ((50.0 <= param_2 && (*(int *)((longlong)param_1 + 0x3e4) != 0)))) {
    plVar6 = (longlong *)FUN_145371c90(0x503,param_1 + 0x72);
    if (plVar6 != (longlong *)0x0) {
      pvVar7 = AK::MemoryMgr::Malloc(0,0x48);
      if ((pvVar7 != (void *)0x0) &&
         (plVar8 = (longlong *)FUN_1450807a0(pvVar7,param_1[4]), plVar8 != (longlong *)0x0)) {
        *(undefined4 *)(plVar6 + 0x1d) = *(undefined4 *)((longlong)param_1 + 0x334);
        FUN_145372610(plVar6,param_1 + 0x73);
        (**(code **)(*plVar6 + 0x20))
                  (plVar6,CONCAT44(uStackX_c,*(undefined4 *)((longlong)param_1 + 0x3e4)) &
                          0xffffff00ffffffff);
        FUN_145372660(plVar6,param_1[0x53]);
        FUN_145369fe0(plVar6,*(byte *)(param_1 + 0x44) >> 6 & 1);
        uVar3 = FUN_14536f650(param_1[0x3d]);
        FUN_145372980(plVar6,uVar3,param_1[0x6d],param_1 + 0x6b);
        FUN_145372a50(plVar6,param_1 + 0x12);
        FUN_1453723f0(plVar6,param_1[0x52],plVar8);
        FUN_145372460(plVar6,param_1 + 0x2d);
        fVar9 = param_2 * 0.5;
        if (*(float *)(param_1 + 0x7c) <= param_2 * 0.5) {
          fVar9 = *(float *)(param_1 + 0x7c);
        }
        iVar4 = FUN_1453996a0((double)(param_2 - fVar9));
        FUN_1453726e0(plVar6,param_1,(int)fVar9);
        iVar5 = (**(code **)(*plVar6 + 0x28))(plVar6,0xf,iVar4,0,0);
        if (iVar5 == 1) {
          plVar8[1] = (longlong)plVar6;
          FUN_1453923d0((longlong)plVar8 + 0x1c,(longlong)param_1 + 0x26c);
          FUN_145083930(DAT_14c790fd8,plVar8,0,0);
          if (((int)(uint)DAT_14c72f434 <= iVar4) && (*(int *)((longlong)param_1 + 0x334) != 0)) {
            FUN_145082e50(DAT_14c790fd8,plVar8);
          }
        }
        else {
          (**(code **)(*plVar8 + 8))(plVar8,0);
          AK::MemoryMgr::Free(0,plVar8);
        }
      }
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0x14);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      *(byte *)((longlong)param_1 + 0x314) = *(byte *)((longlong)param_1 + 0x314) | 2;
    }
    lVar2 = param_1[0x72];
    param_1[0x72] = 0;
    if (lVar2 != 0) {
      FUN_14538eca0();
    }
    *(undefined4 *)((longlong)param_1 + 0x3e4) = 0;
  }
  return;
}



// FUNCTION 14539a450 FUN_14539a450 body=92 status=ok
// SIG undefined FUN_14539a450(void)

void FUN_14539a450(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  *(byte *)(param_1 + 0x3ec) = *(byte *)(param_1 + 0x3ec) | 4;
  *(undefined4 *)(param_1 + 0x3e4) = 0;
  lVar1 = *(longlong *)(param_1 + 0x390);
  *(undefined8 *)(param_1 + 0x390) = 0;
  if (lVar1 != 0) {
    FUN_14538eca0();
  }
  FUN_1450ea910(param_1,param_2,param_3);
  return;
}



// FUNCTION 14539a4b0 FUN_14539a4b0 body=691 status=ok
// SIG undefined FUN_14539a4b0(void)

void FUN_14539a4b0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_res8;
  
  piVar1 = DAT_14c791060;
  lVar9 = 0;
  uVar7 = *(uint *)(param_1 + 0x3e4);
  if (uVar7 != 0) {
    do {
      while (iVar3 = *piVar1, iVar3 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
        if (*piVar1 < 0) goto LAB_14539a4ff;
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
      }
      LOCK();
      iVar2 = *piVar1;
      if (iVar3 == iVar2) {
        *piVar1 = iVar3 + 1;
      }
      UNLOCK();
    } while (iVar3 != iVar2);
LAB_14539a4ff:
    lVar8 = lVar9;
    if (piVar1[0x12] != 0) {
      for (lVar4 = *(longlong *)
                    (*(longlong *)(piVar1 + 0x10) +
                    ((ulonglong)uVar7 % (ulonglong)(uint)piVar1[0x12]) * 8);
          (lVar8 = lVar9, lVar4 != 0 && (lVar8 = lVar4, *(uint *)(lVar4 + 0x10) != uVar7));
          lVar4 = *(longlong *)(lVar4 + 8)) {
      }
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar3 = *piVar1;
    while (-1 < iVar3) {
      LOCK();
      iVar2 = *piVar1;
      if (iVar3 == iVar2) {
        *piVar1 = iVar3 + -1;
      }
      UNLOCK();
      if (iVar3 == iVar2) {
        if ((iVar3 + -1 == 0) && (0 < piVar1[0xc])) {
          SetEvent(*(HANDLE *)(piVar1 + 0xe));
        }
        goto LAB_14539a559;
      }
      iVar3 = *piVar1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_14539a559:
    if (lVar8 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar8 + -0x10;
    }
  }
  if (((*(byte *)(param_1 + 0x3ec) & 4) == 0) || (*(int *)(param_1 + 0x3e4) == 0)) {
LAB_14539a5d3:
    *(byte *)(param_1 + 0x3ec) = *(byte *)(param_1 + 0x3ec) & 0xfb;
    plVar5 = *(longlong **)(param_1 + 0x390);
    *(undefined4 *)(param_1 + 0x3e4) = 0;
    if (plVar5 != (longlong *)0x0) {
      iVar3 = (int)plVar5[1];
      while (iVar3 != 0) {
        lVar8 = *plVar5 + (ulonglong)*(uint *)(plVar5 + 1) * 0x28;
        lVar4 = *(longlong *)(*plVar5 + -0x10 + (ulonglong)*(uint *)(plVar5 + 1) * 0x28);
        if (lVar4 == 0) {
          cVar6 = FUN_14536ef40(*(undefined8 *)(lVar8 + -0x28),param_2,0);
          if (cVar6 == '\0') break;
          uVar7 = *(int *)(param_1 + 0x398) - 1;
          *(uint *)(param_1 + 0x398) = uVar7;
          while (uVar7 != 0) {
            while( true ) {
              uVar7 = uVar7 - 1;
              if (uVar7 < 0x20) break;
              *(uint *)(param_1 + 0x398) = uVar7;
            }
            if ((*(uint *)(param_1 + 0x3dc) >> ((ulonglong)uVar7 & 0x3f) & 1) != 0) break;
            *(uint *)(param_1 + 0x398) = uVar7;
          }
          plVar5 = *(longlong **)(param_1 + 0x390);
          FUN_14538eb00(*plVar5 + ((ulonglong)*(uint *)(plVar5 + 1) * 5 + -5) * 8);
          *(int *)(plVar5 + 1) = (int)plVar5[1] + -1;
        }
        else {
          local_res8 = 0;
          FUN_14553fee0(lVar4,*(undefined8 *)(lVar8 + -8),&local_res8);
          plVar5 = *(longlong **)(param_1 + 0x390);
          FUN_14538eb00(*plVar5 + ((ulonglong)*(uint *)(plVar5 + 1) * 5 + -5) * 8);
          lVar8 = local_res8;
          *(int *)(plVar5 + 1) = (int)plVar5[1] + -1;
          if (local_res8 != 0) {
            FUN_14538ec90(local_res8);
            lVar4 = *(longlong *)(param_1 + 0x390);
            *(longlong *)(param_1 + 0x390) = lVar8;
            if (lVar4 != 0) {
              FUN_14538eca0();
            }
            if (local_res8 != 0) {
              FUN_14538eca0();
            }
          }
        }
        plVar5 = *(longlong **)(param_1 + 0x390);
        iVar3 = (int)plVar5[1];
      }
      lVar8 = *(longlong *)(param_1 + 0x390);
      if ((*(int *)(lVar8 + 8) == 0) && (*(undefined8 *)(param_1 + 0x390) = 0, lVar8 != 0)) {
        FUN_14538eca0();
      }
    }
    if (lVar9 == 0) goto LAB_14539a745;
  }
  else {
    if (lVar9 == 0) goto LAB_14539a745;
    cVar6 = FUN_14536ef40(lVar9,param_2,0);
    if (cVar6 != '\0') goto LAB_14539a5d3;
  }
  LOCK();
  piVar1 = (int *)(lVar9 + 0x24);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    (**(code **)(*(longlong *)(lVar9 + 0x10) + 0x18))();
  }
LAB_14539a745:
  FUN_1450ead40(param_1,param_2);
  return;
}



// FUNCTION 14539a790 FUN_14539a790 body=532 status=ok
// SIG undefined FUN_14539a790(void)

void FUN_14539a790(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong *plVar7;
  undefined4 uStackX_c;
  
  if ((((*(byte *)((longlong)param_1 + 0x314) & 0x10) == 0) &&
      ((**(code **)(*param_1 + 0x70))(param_1,1), ((byte)(int)param_1[0x7d] & 0xf) == 4)) &&
     (*(int *)((longlong)param_1 + 0x3e4) != 0)) {
    plVar5 = (longlong *)FUN_145371c90(0x503,param_1 + 0x72);
    if (plVar5 != (longlong *)0x0) {
      pvVar6 = AK::MemoryMgr::Malloc(0,0x48);
      if ((pvVar6 != (void *)0x0) &&
         (plVar7 = (longlong *)FUN_1450807a0(pvVar6,param_1[4]), plVar7 != (longlong *)0x0)) {
        *(undefined4 *)(plVar5 + 0x1d) = *(undefined4 *)((longlong)param_1 + 0x334);
        FUN_145372610(plVar5,param_1 + 0x73);
        (**(code **)(*plVar5 + 0x20))
                  (plVar5,CONCAT44(uStackX_c,*(undefined4 *)((longlong)param_1 + 0x3e4)) &
                          0xffffff00ffffffff);
        FUN_145372660(plVar5,param_1[0x53]);
        FUN_145369fe0(plVar5,*(byte *)(param_1 + 0x44) >> 6 & 1);
        uVar3 = FUN_14536f650(param_1[0x3d]);
        FUN_145372980(plVar5,uVar3,param_1[0x6d],param_1 + 0x6b);
        FUN_145372a50(plVar5,param_1 + 0x12);
        iVar4 = FUN_145372380(plVar5,param_1[0x51],plVar7);
        if ((iVar4 == 1) && (iVar4 = FUN_1453723f0(plVar5,param_1[0x52],plVar7), iVar4 == 1)) {
          FUN_145372460(plVar5,param_1 + 0x2d);
          if ((*(byte *)((longlong)param_1 + 0x314) & 0x40) != 0) {
            FUN_145372730(plVar5);
          }
          FUN_145372720(plVar5,(int)param_1[0x65]);
          plVar7[1] = (longlong)plVar5;
          FUN_1453923d0((longlong)plVar7 + 0x1c,(longlong)param_1 + 0x26c);
          FUN_145083930(DAT_14c790fd8,plVar7,0,0);
        }
        else {
          (**(code **)(*plVar7 + 8))(plVar7,0);
          AK::MemoryMgr::Free(0,plVar7);
        }
      }
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0x14);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      *(byte *)((longlong)param_1 + 0x314) = *(byte *)((longlong)param_1 + 0x314) | 2;
    }
    lVar2 = param_1[0x72];
    param_1[0x72] = 0;
    if (lVar2 != 0) {
      FUN_14538eca0();
    }
    *(undefined4 *)((longlong)param_1 + 0x3e4) = 0;
  }
  return;
}



// FUNCTION 14539a9b0 FUN_14539a9b0 body=168 status=ok
// SIG undefined FUN_14539a9b0(void)

undefined8 FUN_14539a9b0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  
  bVar1 = false;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x1e8) + 0x78);
  if (plVar3 != (longlong *)0x0) {
    do {
      iVar2 = (**(code **)(*plVar3 + 0x70))(plVar3);
      if (iVar2 == 2) {
        iVar2 = FUN_1450c2a70(plVar3);
        if (iVar2 == 1) {
          return 0;
        }
        iVar2 = FUN_1450c2a70(plVar3);
        if (iVar2 == 2) {
          return 0;
        }
        iVar2 = FUN_1450c2a70(plVar3);
        if (iVar2 == 5) {
          return 0;
        }
        iVar2 = FUN_1450c2a70(plVar3);
        if (iVar2 == 4) {
          bVar1 = true;
        }
      }
      plVar3 = (longlong *)plVar3[0xf];
    } while (plVar3 != (longlong *)0x0);
    if ((bVar1) && ((*(byte *)(param_1 + 0x3ec) & 1) == 0)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14539aa60 FUN_14539aa60 body=158 status=ok
// SIG undefined FUN_14539aa60(void)

undefined8 * FUN_14539aa60(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149d457a8;
  param_1[2] = &PTR_FUN_149d45820;
  param_1[3] = &PTR_LAB_149d45828;
  param_1[0x10] = &PTR_LAB_149d458b8;
  plVar3 = (longlong *)param_1[0x53];
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0x14);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (**(code **)(*plVar3 + 0x18))();
  }
  if (param_1[0x72] != 0) {
    FUN_14538eca0();
    param_1[0x72] = 0;
  }
  FUN_1450e9f00(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x3f0);
  }
  return param_1;
}



// FUNCTION 14539ab20 FUN_14539ab20 body=171 status=ok
// SIG undefined FUN_14539ab20(void)

void FUN_14539ab20(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  
  puVar3 = (undefined8 *)param_1[2];
  *param_1 = &PTR_FUN_149d458e8;
  if (puVar3 != (undefined8 *)0x0) {
    if ((*(uint *)(puVar3 + 0xc) < 2) && (*(char *)((longlong)puVar3 + 100) != '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    uVar6 = *(uint *)(puVar3 + 0xc) - 1;
    *(uint *)(puVar3 + 0xc) = uVar6;
    if ((uVar6 == 0) || (((bVar5 && (uVar6 < 2)) && (*(char *)((longlong)puVar3 + 100) != '\0')))) {
      FUN_1453550a0(puVar3);
    }
    if (*(int *)(puVar3 + 0xc) == 0) {
      (**(code **)*puVar3)(puVar3,0);
      AK::MemoryMgr::Free(4,puVar3);
    }
  }
  lVar4 = param_1[8];
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)(lVar4 + 0x10) + 0x18))();
    }
  }
  if (param_1[3] != 0) {
    FUN_144d4a460();
  }
  return;
}



// FUNCTION 14539abd0 FUN_14539abd0 body=22 status=ok
// SIG undefined FUN_14539abd0(void)

int FUN_14539abd0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  return 2 - (uint)(cVar1 != '\0');
}



// FUNCTION 14539ac00 FUN_14539ac00 body=9 status=ok
// SIG undefined FUN_14539ac00(void)

void FUN_14539ac00(longlong param_1)

{
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  return;
}



// FUNCTION 14539ac10 FUN_14539ac10 body=53 status=ok
// SIG undefined FUN_14539ac10(void)

undefined4 FUN_14539ac10(undefined8 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((longlong)param_1 + 0x4c);
  *piVar1 = *piVar1 + -1;
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x4c);
  if (*piVar1 == 0) {
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(0,param_1);
  }
  return uVar2;
}



// FUNCTION 14539ac70 FUN_14539ac70 body=167 status=ok
// SIG undefined FUN_14539ac70(void)

undefined8 *
FUN_14539ac70(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 param_5)

{
  uint uVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_149d458e8;
  param_1[2] = param_2;
  param_1[1] = 0;
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_4 + 0x14);
  param_1[4] = param_4[1];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_4 + 2);
  piVar2 = (int *)*param_4;
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  param_1[3] = piVar2;
  uVar3 = *param_3;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  lVar4 = param_1[2];
  param_1[6] = uVar3;
  *(undefined4 *)(param_1 + 7) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x60);
    if ((uVar1 < 2) && (*(char *)(lVar4 + 100) != '\0')) {
      *(uint *)(lVar4 + 0x60) = uVar1 + 1;
      if ((1 < uVar1 + 1) || (*(char *)(lVar4 + 100) == '\0')) {
        FUN_145355090();
        return param_1;
      }
    }
    else {
      *(uint *)(lVar4 + 0x60) = uVar1 + 1;
    }
  }
  return param_1;
}



// FUNCTION 14539ad20 FUN_14539ad20 body=49 status=ok
// SIG undefined FUN_14539ad20(void)

void FUN_14539ad20(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x30))();
  if ((param_1[8] != 0) && (lVar1 != 0)) {
    FUN_14539b0f0(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 14539ad60 FUN_14539ad60 body=275 status=ok
// SIG undefined FUN_14539ad60(void)

void FUN_14539ad60(longlong param_1,undefined8 *param_2,byte *param_3,undefined4 param_4,
                  uint param_5,uint param_6,byte param_7)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = *param_3;
  if (((((char)bVar1 < '\0') && ((bVar1 & 0xf0) != 0xf0)) || (bVar1 == 0xfe)) &&
     (*(char *)(param_1 + 0x50) == '\0')) {
    plVar2 = AK::MemoryMgr::Malloc(0,0x28);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = param_1;
      plVar2[1] = *(longlong *)param_3;
      *(undefined4 *)(plVar2 + 2) = *(undefined4 *)(param_3 + 8);
      *(undefined4 *)((longlong)plVar2 + 0x14) = param_4;
      plVar2[4] = 0;
      *(uint *)(plVar2 + 3) = (param_6 & 1 | (uint)param_7 * 2) << 0x1e | param_5 & 0x3fffffff;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      lVar4 = param_2[1];
      lVar5 = 0;
      if (lVar4 != 0) {
        do {
          lVar3 = lVar4;
          lVar4 = lVar3;
          if ((*(uint *)((longlong)plVar2 + 0x14) < *(uint *)(lVar3 + 0x14)) ||
             ((*(uint *)(lVar3 + 0x14) == *(uint *)((longlong)plVar2 + 0x14) &&
              ((((*(uint *)(lVar3 + 0x18) >> 0x1e & 1) != 0 &&
                ((*(uint *)(plVar2 + 3) & 0x40000000) == 0)) ||
               ((-1 < (int)*(uint *)(lVar3 + 0x18) && ((int)plVar2[3] < 0)))))))) break;
          lVar4 = *(longlong *)(lVar3 + 0x20);
          lVar5 = lVar3;
        } while (lVar4 != 0);
      }
      plVar2[4] = lVar4;
      if (lVar5 == 0) {
        param_2[1] = plVar2;
      }
      else {
        *(longlong **)(lVar5 + 0x20) = plVar2;
      }
      if (lVar4 == 0) {
        *param_2 = plVar2;
      }
    }
  }
  return;
}



// FUNCTION 14539ae80 FUN_14539ae80 body=205 status=ok
// SIG undefined FUN_14539ae80(void)

undefined8 * FUN_14539ae80(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  
  puVar3 = (undefined8 *)param_1[2];
  *param_1 = &PTR_FUN_149d458e8;
  if (puVar3 != (undefined8 *)0x0) {
    if ((*(uint *)(puVar3 + 0xc) < 2) && (*(char *)((longlong)puVar3 + 100) != '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    uVar6 = *(uint *)(puVar3 + 0xc) - 1;
    *(uint *)(puVar3 + 0xc) = uVar6;
    if ((uVar6 == 0) || (((bVar5 && (uVar6 < 2)) && (*(char *)((longlong)puVar3 + 100) != '\0')))) {
      FUN_1453550a0(puVar3);
    }
    if (*(int *)(puVar3 + 0xc) == 0) {
      (**(code **)*puVar3)(puVar3,0);
      AK::MemoryMgr::Free(4,puVar3);
    }
  }
  lVar4 = param_1[8];
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)(lVar4 + 0x10) + 0x18))();
    }
  }
  if (param_1[3] != 0) {
    FUN_144d4a460();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14539af50 FUN_14539af50 body=36 status=ok
// SIG undefined FUN_14539af50(void)

undefined8 * FUN_14539af50(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149d45920;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 14539af80 FUN_14539af80 body=357 status=ok
// SIG undefined FUN_14539af80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14539af80(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  void *pvVar6;
  void *_Dst;
  void *pvVar7;
  
  pvVar7 = (void *)param_1[3];
  *param_1 = &PTR_LAB_149d45920;
  uVar5 = (ulonglong)*(uint *)(param_1 + 4);
  _Dst = pvVar7;
  if (pvVar7 != (void *)(uVar5 * 0x30 + (longlong)pvVar7)) {
    do {
      if (*(longlong *)((longlong)_Dst + 0x20) == 0) {
        pvVar6 = (void *)((ulonglong)((int)uVar5 - 1) * 0x30 + (longlong)pvVar7);
        if (_Dst < pvVar6) {
          memmove(_Dst,(void *)((longlong)_Dst + 0x30),
                  (ulonglong)(uint)((int)(((longlong)pvVar6 - (longlong)_Dst) / 0x30) * 0x30));
          pvVar7 = (void *)param_1[3];
        }
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        uVar5 = (ulonglong)*(uint *)(param_1 + 4);
      }
      else {
        _Dst = (void *)((longlong)_Dst + 0x30);
      }
    } while (_Dst != (void *)(uVar5 * 0x30 + (longlong)pvVar7));
  }
  if (pvVar7 != (void *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    AK::MemoryMgr::Free(0,pvVar7);
    param_1[3] = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  puVar3 = (undefined8 *)param_1[6];
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    lVar2 = puVar3[2];
    uVar4 = *puVar3;
    if (puVar3 == (undefined8 *)param_1[6]) {
      param_1[6] = *puVar3;
      uVar4 = _DAT_00000000;
    }
    _DAT_00000000 = uVar4;
    if (puVar3 == (undefined8 *)param_1[5]) {
      param_1[5] = 0;
    }
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1453a2e20(puVar3);
    FUN_1453a2830(puVar3);
    puVar3 = puVar1;
  }
  param_1[6] = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 14539b0f0 FUN_14539b0f0 body=478 status=ok
// SIG undefined FUN_14539b0f0(void)

void FUN_14539b0f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined2 local_28;
  undefined2 local_24;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  plVar6 = plVar3 + (ulonglong)*(uint *)(param_1 + 0x20) * 6;
  for (; (plVar3 != plVar6 &&
         (((*(longlong *)(param_2 + 0x40) != *plVar3 || (*(longlong *)(param_2 + 0x10) != plVar3[1])
           ) || (*(int *)(param_2 + 0x2c) != (int)plVar3[2])))); plVar3 = plVar3 + 6) {
  }
  plVar7 = (longlong *)0x0;
  plVar5 = plVar3 + 3;
  if (plVar3 == plVar6) {
    plVar5 = plVar7;
  }
  plVar3 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    do {
      local_28 = CONCAT11((char)plVar3,0xb0);
      local_24 = 0x40;
      FUN_14539bc50(param_1,plVar5,param_2,&local_28);
      uVar2 = (int)plVar3 + 1;
      plVar3 = (longlong *)(ulonglong)uVar2;
    } while (uVar2 < 0x10);
    *(undefined2 *)(plVar5 + 2) = 0;
    plVar6 = (longlong *)plVar5[1];
    plVar3 = plVar7;
    while (plVar4 = plVar6, plVar4 != (longlong *)0x0) {
      if (((plVar4[3] == param_2) &&
          (*(undefined4 *)((longlong)plVar4 + 0x34) = 0, (char)plVar4[5] == -0x70)) &&
         ((*(char *)((longlong)plVar4 + 0x2d) != '\0' && ((*(byte *)(plVar4 + 7) & 4) == 0)))) {
        if ((*(byte *)(plVar4 + 7) & 2) == 0) {
          plVar6 = (longlong *)*plVar4;
          if (plVar4 == (longlong *)plVar5[1]) {
            plVar5[1] = (longlong)plVar6;
          }
          else {
            *plVar3 = (longlong)plVar6;
          }
          if (plVar4 == (longlong *)*plVar5) {
            *plVar5 = (longlong)plVar3;
          }
          FUN_1453a2830(plVar4);
          plVar4 = plVar6;
        }
        else {
          FUN_1453a2d20(plVar4);
        }
      }
      plVar3 = plVar4;
      plVar6 = (longlong *)*plVar4;
    }
    local_24 = 1;
    local_28 = 0xfff0;
    FUN_14539b780(param_1,param_2,&local_28,0,0,0);
    FUN_14539ba60(param_1,0);
    plVar3 = *(longlong **)(param_1 + 0x30);
    while (plVar6 = plVar7, plVar7 = plVar3, plVar7 != (longlong *)0x0) {
      lVar1 = plVar7[2];
      plVar3 = (longlong *)*plVar7;
      if (plVar7[3] == param_2) {
        if (plVar7 == *(longlong **)(param_1 + 0x30)) {
          *(longlong *)(param_1 + 0x30) = *plVar7;
        }
        else {
          *plVar6 = *plVar7;
        }
        if (plVar7 == *(longlong **)(param_1 + 0x28)) {
          *(longlong **)(param_1 + 0x28) = plVar6;
        }
        *(undefined8 *)(lVar1 + 0x18) = 0;
        FUN_1453a2e20(plVar7);
        FUN_1453a2830(plVar7);
        plVar7 = plVar6;
      }
    }
  }
  return;
}



// FUNCTION 14539b2d0 FUN_14539b2d0 body=190 status=ok
// SIG undefined FUN_14539b2d0(void)

void FUN_14539b2d0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  plVar4 = plVar2 + (ulonglong)*(uint *)(param_1 + 0x20) * 6;
  for (; (plVar2 != plVar4 &&
         (((*(longlong *)(param_2 + 0x40) != *plVar2 || (*(longlong *)(param_2 + 0x10) != plVar2[1])
           ) || (*(int *)(param_2 + 0x2c) != (int)plVar2[2])))); plVar2 = plVar2 + 6) {
  }
  plVar3 = plVar2 + 3;
  if (plVar2 == plVar4) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    for (puVar1 = (undefined8 *)plVar3[1]; puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      if (puVar1[3] == param_2) {
        FUN_1453a2e80(puVar1,0);
      }
    }
  }
  for (puVar1 = *(undefined8 **)(param_1 + 0x30); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if (puVar1[3] == param_2) {
      FUN_1453a2e80(puVar1,0);
    }
  }
  return;
}



// FUNCTION 14539b390 FUN_14539b390 body=190 status=ok
// SIG undefined FUN_14539b390(void)

void FUN_14539b390(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  plVar4 = plVar2 + (ulonglong)*(uint *)(param_1 + 0x20) * 6;
  for (; (plVar2 != plVar4 &&
         (((*(longlong *)(param_2 + 0x40) != *plVar2 || (*(longlong *)(param_2 + 0x10) != plVar2[1])
           ) || (*(int *)(param_2 + 0x2c) != (int)plVar2[2])))); plVar2 = plVar2 + 6) {
  }
  plVar3 = plVar2 + 3;
  if (plVar2 == plVar4) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    for (puVar1 = (undefined8 *)plVar3[1]; puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      if (puVar1[3] == param_2) {
        FUN_1453a2f00(puVar1,0);
      }
    }
  }
  for (puVar1 = *(undefined8 **)(param_1 + 0x30); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if (puVar1[3] == param_2) {
      FUN_1453a2f00(puVar1,0);
    }
  }
  return;
}



// FUNCTION 14539b450 FUN_14539b450 body=27 status=ok
// SIG undefined FUN_14539b450(void)

void FUN_14539b450(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(longlong *)(param_1 + 0x10) = param_2;
    *(undefined8 *)(param_2 + 8) = 0;
    return;
  }
  *(longlong *)(param_2 + 8) = *(longlong *)(param_1 + 0x10);
  *(longlong *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 14539b470 FUN_14539b470 body=55 status=ok
// SIG undefined FUN_14539b470(void)

void FUN_14539b470(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = lVar1;
  lVar4 = 0;
  if (lVar1 != 0) {
    while (lVar3 = lVar2, lVar3 != param_2) {
      lVar2 = *(longlong *)(lVar3 + 8);
      lVar4 = lVar3;
      if (*(longlong *)(lVar3 + 8) == 0) {
        return;
      }
    }
    if (lVar3 == lVar1) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar3 + 8);
      return;
    }
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
  }
  return;
}



// FUNCTION 14539b500 FUN_14539b500 body=16 status=ok
// SIG undefined FUN_14539b500(void)

void FUN_14539b500(undefined8 param_1,undefined8 param_2)

{
  FUN_14539be20(param_1,param_2,DAT_14c72f434,0xff);
  return;
}



// FUNCTION 14539b510 FUN_14539b510 body=255 status=ok
// SIG undefined FUN_14539b510(void)

undefined8 FUN_14539b510(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  __uint64 _Var9;
  ulonglong uVar10;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  iVar4 = (uVar2 >> 1) + uVar2;
  if (uVar2 == 0) {
    iVar4 = 1;
  }
  _Var9 = (ulonglong)(iVar4 + uVar2) * 0x30;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar7 = AK::MemoryMgr::Malloc(0,_Var9);
    if (pvVar7 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar7)) {
        if (uVar10 != 0) {
          lVar5 = -(longlong)pvVar7;
          puVar8 = (undefined8 *)((longlong)pvVar7 + 0x28);
          do {
            if (puVar8 + -5 != (undefined8 *)0x0) {
              puVar8[-2] = 0;
              puVar8[-1] = 0;
              *(undefined2 *)puVar8 = 0;
            }
            lVar3 = *param_1;
            puVar1 = (undefined8 *)((longlong)puVar8 + lVar3 + lVar5 + -0x28);
            uVar6 = puVar1[1];
            puVar8[-5] = *puVar1;
            puVar8[-4] = uVar6;
            puVar1 = (undefined8 *)((longlong)puVar8 + lVar3 + lVar5 + -0x18);
            uVar6 = puVar1[1];
            puVar8[-3] = *puVar1;
            puVar8[-2] = uVar6;
            puVar1 = (undefined8 *)((longlong)puVar8 + lVar3 + lVar5 + -8);
            uVar6 = puVar1[1];
            puVar8[-1] = *puVar1;
            *puVar8 = uVar6;
            uVar10 = uVar10 - 1;
            puVar8 = puVar8 + 6;
          } while (uVar10 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_14539b5f2;
    }
  }
  else {
    pvVar7 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var9);
    if (pvVar7 != (void *)0x0) {
LAB_14539b5f2:
      *param_1 = (longlong)pvVar7;
      *(uint *)((longlong)param_1 + 0xc) = iVar4 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14539b610 FUN_14539b610 body=161 status=ok
// SIG undefined FUN_14539b610(void)

void FUN_14539b610(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *_Dst;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  for (_Dst = plVar1;
      (_Dst != plVar1 + (ulonglong)*(uint *)(param_1 + 0x20) * 6 &&
      (((*(longlong *)(param_2 + 0x40) != *_Dst || (*(longlong *)(param_2 + 0x10) != _Dst[1])) ||
       (*(int *)(param_2 + 0x2c) != (int)_Dst[2])))); _Dst = _Dst + 6) {
  }
  if ((_Dst != plVar1 + (ulonglong)*(uint *)(param_1 + 0x20) * 6) && (_Dst[4] == 0)) {
    if (_Dst < plVar1 + (ulonglong)(*(uint *)(param_1 + 0x20) - 1) * 6) {
      memmove(_Dst,_Dst + 6,
              (ulonglong)
              (uint)((int)(((longlong)(plVar1 + (ulonglong)(*(uint *)(param_1 + 0x20) - 1) * 6) -
                           (longlong)_Dst) / 0x30) * 0x30));
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  }
  return;
}



// FUNCTION 14539b6c0 FUN_14539b6c0 body=190 status=ok
// SIG undefined FUN_14539b6c0(void)

void FUN_14539b6c0(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    do {
      lVar1 = puVar2[4];
      if (puVar2[4] == 0) {
        *param_2 = 0;
        lVar1 = 0;
      }
      param_2[1] = lVar1;
      puVar2[4] = 0;
      if (((int)*(uint *)(puVar2 + 3) < 0) && ((*(uint *)(puVar2 + 3) >> 0x1e & 1) == 0)) {
        (**(code **)(*param_1 + 8))(param_1,param_2,puVar2);
      }
      FUN_14539b780(param_1,*puVar2,puVar2 + 1,*(undefined4 *)((longlong)puVar2 + 0x14),0,1);
      FUN_14539ac10();
      AK::MemoryMgr::Free(0,puVar2);
      puVar2 = (undefined8 *)param_2[1];
    } while (puVar2 != (undefined8 *)0x0);
  }
  FUN_14539ba60(param_1,param_3);
  return;
}



// FUNCTION 14539b780 FUN_14539b780 body=729 status=ok
// SIG undefined FUN_14539b780(void)

void FUN_14539b780(longlong param_1,longlong param_2,char *param_3,undefined4 param_4,char param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined4 uStack_54;
  uint6 uStack_3e;
  
  if (*(int *)(param_2 + 0x2c) != 0) {
    FUN_1450b36d0(DAT_14c790fc0);
  }
  plVar10 = *(longlong **)(param_1 + 0x18);
  uVar13 = (ulonglong)*(uint *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_2 + 0x40);
  lVar3 = *(longlong *)(param_2 + 0x10);
  iVar6 = *(int *)(param_2 + 0x2c);
  plVar11 = plVar10 + uVar13 * 6;
  for (plVar9 = plVar10;
      (plVar9 != plVar11 &&
      (((lVar2 != *plVar9 || (lVar3 != plVar9[1])) || (iVar6 != (int)plVar9[2]))));
      plVar9 = plVar9 + 6) {
  }
  plVar14 = (longlong *)0x0;
  plVar12 = plVar9 + 3;
  if (plVar9 == plVar11) {
    plVar12 = plVar14;
  }
  if (plVar12 == (longlong *)0x0) {
    for (; (plVar10 != plVar11 &&
           (((lVar2 != *plVar10 || (lVar3 != plVar10[1])) || (iVar6 != (int)plVar10[2]))));
        plVar10 = plVar10 + 6) {
    }
    plVar12 = plVar10 + 3;
    if (plVar10 == plVar11) {
      plVar12 = plVar14;
    }
    if (plVar12 == (longlong *)0x0) {
      if ((*(uint *)(param_1 + 0x24) <= uVar13) &&
         (cVar5 = FUN_14539b510(param_1 + 0x18), cVar5 == '\0')) {
        return;
      }
      if (*(uint *)(param_1 + 0x24) <= uVar13) {
        return;
      }
      uVar1 = *(uint *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x20) = uVar1 + 1;
      plVar10 = (longlong *)((ulonglong)uVar1 * 0x30 + *(longlong *)(param_1 + 0x18));
      plVar12 = plVar14;
      if (plVar10 != (longlong *)0x0) {
        plVar10[3] = 0;
        plVar10[4] = 0;
        *(undefined2 *)(plVar10 + 5) = 0;
        plVar12 = plVar10 + 3;
        *plVar10 = lVar2;
        plVar10[1] = lVar3;
        *plVar12 = 0;
        plVar10[4] = 0;
        plVar10[5] = (ulonglong)uStack_3e << 0x10;
        plVar10[2] = CONCAT44(uStack_54,iVar6);
      }
      if (plVar12 == (longlong *)0x0) {
        return;
      }
    }
    else {
      *plVar12 = 0;
      plVar12[1] = 0;
      plVar12[2] = (ulonglong)uStack_3e << 0x10;
    }
  }
  plVar10 = *(longlong **)(param_2 + 0x40);
  iVar6 = (**(code **)(*plVar10 + 0x70))();
  if ((((iVar6 != 0) && (iVar6 = (**(code **)(*plVar10 + 0x70))(), iVar6 != 10)) ||
      (*param_3 == -0x50)) &&
     ((pvVar7 = AK::MemoryMgr::Malloc(0,0x40), pvVar7 != (void *)0x0 &&
      (puVar8 = (undefined8 *)FUN_1453a25e0(pvVar7,param_2,plVar10), puVar8 != (undefined8 *)0x0))))
  {
    cVar5 = FUN_1453a2630(puVar8,param_3,param_4);
    if (cVar5 != '\0') {
      if ((*param_3 != -0x80) && ((*param_3 != -0x70 || (param_3[5] != '\0')))) {
LAB_14539b9d9:
        cVar5 = *param_3;
        if ((((cVar5 != -0x70) || (param_3[5] == '\0')) &&
            (((cVar5 != -0x80 && ((cVar5 != -0x70 || (param_3[5] != '\0')))) &&
             (*(char *)(puVar8 + 5) == -0x50)))) &&
           ((*(char *)((longlong)puVar8 + 0x2c) == '{' ||
            (*(char *)((longlong)puVar8 + 0x2c) == 'x')))) {
          FUN_14539be20(param_1,puVar8[3],param_4,*(undefined1 *)((longlong)puVar8 + 0x29));
        }
        plVar10 = (longlong *)plVar12[1];
        if (plVar10 != (longlong *)0x0) {
          do {
            plVar9 = plVar10;
            plVar10 = plVar9;
            if (*(int *)((longlong)puVar8 + 0x34) < *(int *)((longlong)plVar9 + 0x34)) break;
            plVar10 = (longlong *)*plVar9;
            plVar14 = plVar9;
          } while (plVar10 != (longlong *)0x0);
        }
        *puVar8 = plVar10;
        if (plVar14 == (longlong *)0x0) {
          plVar12[1] = (longlong)puVar8;
        }
        else {
          *plVar14 = (longlong)puVar8;
        }
        if (plVar10 != (longlong *)0x0) {
          return;
        }
        *plVar12 = (longlong)puVar8;
        return;
      }
      for (puVar4 = (undefined8 *)plVar12[1]; puVar4 != (undefined8 *)0x0;
          puVar4 = (undefined8 *)*puVar4) {
        if (((param_5 == '\0') || (puVar4[3] == puVar8[3])) &&
           (cVar5 = FUN_1453a2d50(puVar8,puVar4), cVar5 != '\0')) goto LAB_14539b9d9;
      }
    }
    FUN_1453a2830(puVar8);
  }
  return;
}



// FUNCTION 14539ba60 FUN_14539ba60 body=488 status=ok
// SIG undefined FUN_14539ba60(void)

void FUN_14539ba60(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  bool bVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (lVar5 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + lVar5) {
    puVar7 = (undefined8 *)(lVar5 + 0x18);
    do {
      puVar1 = (undefined8 *)puVar7[1];
      puVar3 = (undefined8 *)0x0;
      while (puVar2 = puVar1, puVar2 != (undefined8 *)0x0) {
        if (((*(ushort *)(puVar7 + 2) >> (*(byte *)((longlong)puVar2 + 0x29) & 0x1f) & 1) == 0) ||
           ((*(char *)(puVar2 + 5) != -0x80 &&
            ((*(char *)(puVar2 + 5) != -0x70 || (*(char *)((longlong)puVar2 + 0x2d) != '\0')))))) {
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
        cVar4 = FUN_1453a28c0(puVar2,param_2,uVar6,puVar7);
        if (cVar4 == '\0') {
          puVar1 = (undefined8 *)*puVar2;
          puVar3 = puVar2;
        }
        else {
          cVar4 = *(char *)(puVar2 + 5);
          if (cVar4 == -0x70) {
            bVar8 = *(char *)((longlong)puVar2 + 0x2d) == '\0';
            if (*(char *)((longlong)puVar2 + 0x2d) == '\0') {
LAB_14539bb21:
              if (!bVar8) {
                FUN_14539bc50(param_1,puVar7,puVar2[3],puVar2 + 5);
              }
            }
          }
          else if (cVar4 != -0x80) {
            if (cVar4 == -0x70) {
              bVar8 = *(char *)((longlong)puVar2 + 0x2d) == '\0';
            }
            else {
              bVar8 = cVar4 == -2;
            }
            goto LAB_14539bb21;
          }
          puVar1 = (undefined8 *)*puVar2;
          if (puVar2 == (undefined8 *)puVar7[1]) {
            puVar7[1] = puVar1;
          }
          else {
            *puVar3 = puVar1;
          }
          if (puVar2 == (undefined8 *)*puVar7) {
            *puVar7 = puVar3;
          }
          if ((*(char *)(puVar2 + 5) == -0x80) ||
             ((*(char *)(puVar2 + 5) == -0x70 && (*(char *)((longlong)puVar2 + 0x2d) == '\0')))) {
            *(longlong *)(puVar2[2] + 0x18) = param_1;
            *puVar2 = 0;
            if (*(longlong *)(param_1 + 0x30) == 0) {
              *(undefined8 **)(param_1 + 0x30) = puVar2;
              *(undefined8 **)(param_1 + 0x28) = puVar2;
            }
            else {
              **(undefined8 **)(param_1 + 0x28) = puVar2;
              *(undefined8 **)(param_1 + 0x28) = puVar2;
            }
          }
          else {
            FUN_1453a2830(puVar2);
          }
        }
      }
      lVar5 = lVar5 + 0x30;
      puVar7 = puVar7 + 6;
    } while (lVar5 != (ulonglong)*(uint *)(param_1 + 0x20) * 0x30 + *(longlong *)(param_1 + 0x18));
  }
  puVar7 = *(undefined8 **)(param_1 + 0x30);
  puVar1 = (undefined8 *)0x0;
  while (puVar3 = puVar7, puVar3 != (undefined8 *)0x0) {
    lVar5 = puVar3[2];
    if ((*(int *)(lVar5 + 0x6c) == 0) && (*(int *)(lVar5 + 0x94) == 0)) {
      puVar7 = (undefined8 *)*puVar3;
      if (puVar3 == *(undefined8 **)(param_1 + 0x30)) {
        *(undefined8 *)(param_1 + 0x30) = *puVar3;
      }
      else {
        *puVar1 = *puVar3;
      }
      if (puVar3 == *(undefined8 **)(param_1 + 0x28)) {
        *(undefined8 **)(param_1 + 0x28) = puVar1;
      }
      *(undefined8 *)(lVar5 + 0x18) = 0;
      FUN_1453a2e20(puVar3);
      FUN_1453a2830(puVar3);
    }
    else {
      puVar7 = (undefined8 *)*puVar3;
      puVar1 = puVar3;
    }
  }
  return;
}



// FUNCTION 14539bc50 FUN_14539bc50 body=464 status=ok
// SIG undefined FUN_14539bc50(void)

void FUN_14539bc50(undefined8 param_1,longlong param_2,longlong param_3,char *param_4)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uStackX_1c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  char local_20;
  char local_18;
  undefined8 local_10;
  
  local_38 = 0;
  if (*(char *)(param_3 + 0x48) == '\0') {
    local_38 = *(undefined8 *)(param_3 + 0x10);
  }
  cVar1 = *param_4;
  local_20 = param_4[1];
  if (((cVar1 + 0x80U & 0xcf) == 0) && (cVar1 != -0x50)) {
    local_18 = param_4[4];
  }
  else {
    local_18 = -1;
  }
  local_28 = *(undefined4 *)(param_3 + 0x38);
  local_10 = 0;
  local_30 = 0;
  if (cVar1 == -0x50) {
    bVar2 = param_4[4];
    if (bVar2 == 0x79) {
      *(undefined2 *)(param_2 + 0x10) = 0;
      uVar4 = 1;
      do {
        uStackX_1c = CONCAT31(uStackX_1c._1_3_,1);
        FUN_14507f940(g_pGameSyncMgr,CONCAT44(uStackX_1c,uVar4),&local_38,0,1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x86);
    }
    else if ((bVar2 != 0x7b) && (bVar2 != 0x78)) {
      uStackX_1c = CONCAT31(uStackX_1c._1_3_,1);
      FUN_14507f370(g_pGameSyncMgr,CONCAT44(uStackX_1c,bVar2 + 1),&local_38,local_18,0,1,0);
      if (param_4[4] == '@') {
        uVar3 = *(ushort *)(param_2 + 0x10) & ~(ushort)(1 << ((byte)param_4[1] & 0x1f));
        *(ushort *)(param_2 + 0x10) = uVar3;
        *(ushort *)(param_2 + 0x10) =
             (ushort)(0x3f < (byte)param_4[5]) << (param_4[1] & 0x1fU) | uVar3;
      }
    }
  }
  else if (cVar1 == -0x20) {
    uStackX_1c = CONCAT31(uStackX_1c._1_3_,1);
    FUN_14507f370(g_pGameSyncMgr,CONCAT44(uStackX_1c,0x83),&local_38,
                  (float)((uint)(byte)param_4[5] << 7 | (uint)(byte)param_4[4]) * 0.0078125,0,1,0);
  }
  return;
}



// FUNCTION 14539be20 FUN_14539be20 body=261 status=ok
// SIG undefined FUN_14539be20(void)

void FUN_14539be20(longlong param_1,longlong param_2,int param_3,char param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_18;
  undefined7 uStack_17;
  undefined4 local_10;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  plVar4 = plVar2 + (ulonglong)*(uint *)(param_1 + 0x20) * 6;
  for (; (plVar2 != plVar4 &&
         (((*(longlong *)(param_2 + 0x40) != *plVar2 || (*(longlong *)(param_2 + 0x10) != plVar2[1])
           ) || (*(int *)(param_2 + 0x2c) != (int)plVar2[2])))); plVar2 = plVar2 + 6) {
  }
  plVar3 = plVar2 + 3;
  if (plVar2 == plVar4) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    for (puVar1 = (undefined8 *)plVar3[1]; puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      if (((puVar1[3] == param_2) &&
          ((*(char *)((longlong)puVar1 + 0x29) == param_4 || (param_4 == -1)))) &&
         ((*(char *)(puVar1 + 5) == -0x70 &&
          (((*(char *)((longlong)puVar1 + 0x2d) != '\0' && ((*(byte *)(puVar1 + 7) & 4) == 0)) &&
           (*(int *)((longlong)puVar1 + 0x34) <= param_3)))))) {
        local_10 = *(undefined4 *)(puVar1 + 6);
        _local_18 = CONCAT71((int7)((ulonglong)puVar1[5] >> 8),0x80);
        FUN_14539b780(param_1,param_2,&local_18,*(int *)((longlong)puVar1 + 0x34),1,0);
      }
    }
  }
  return;
}



// FUNCTION 14539bf30 FUN_14539bf30 body=65 status=ok
// SIG undefined FUN_14539bf30(void)

ulonglong FUN_14539bf30(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_14539abd0();
  if ((int)uVar1 == 1) {
    FUN_1450b2830(DAT_14c790fc0,*(undefined4 *)(param_1 + 0x2c));
    FUN_14539b450(*(undefined8 *)(param_1 + 0x58),param_1);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 14539bf80 FUN_14539bf80 body=51 status=ok
// SIG undefined FUN_14539bf80(void)

void FUN_14539bf80(longlong param_1)

{
  if ((*(uint *)(param_1 + 0x70) & 2) == 0) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 2;
    FUN_1450b28b0(DAT_14c790fc0,*(undefined4 *)(param_1 + 0x2c));
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 14539bfc0 FUN_14539bfc0 body=143 status=ok
// SIG undefined FUN_14539bfc0(void)

void FUN_14539bfc0(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (((*(byte *)(param_1 + 0x70) & 2) == 0) &&
     (puVar4 = AK::MemoryMgr::Malloc(0,0x18), puVar4 != (undefined8 *)0x0)) {
    *puVar4 = *param_2;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_2 + 1);
    puVar4[2] = 0;
    *(uint *)((longlong)puVar4 + 0xc) = param_3;
    lVar3 = *(longlong *)(param_1 + 0x68);
    lVar2 = 0;
    while ((lVar1 = lVar3, lVar1 != 0 && (*(uint *)(lVar1 + 0xc) <= param_3))) {
      lVar2 = lVar1;
      lVar3 = *(longlong *)(lVar1 + 0x10);
    }
    puVar4[2] = lVar1;
    if (lVar2 == 0) {
      *(undefined8 **)(param_1 + 0x68) = puVar4;
    }
    else {
      *(undefined8 **)(lVar2 + 0x10) = puVar4;
    }
    if (lVar1 == 0) {
      *(undefined8 **)(param_1 + 0x60) = puVar4;
    }
  }
  return;
}



// FUNCTION 14539c050 FUN_14539c050 body=248 status=ok
// SIG undefined FUN_14539c050(void)

void FUN_14539c050(longlong param_1,undefined8 param_2,uint param_3)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  if ((*(byte *)(param_1 + 0x70) & 4) != 0) {
    return;
  }
  FUN_14539ac00();
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x70) & 2) == 0)) {
    pvVar1 = *(void **)(param_1 + 0x68);
    pvVar3 = (void *)0x0;
    while (pvVar2 = pvVar1, pvVar2 != (void *)0x0) {
      if (*(uint *)((longlong)pvVar2 + 0xc) < param_3) {
        pvVar1 = *(void **)((longlong)pvVar2 + 0x10);
        if (pvVar2 == *(void **)(param_1 + 0x68)) {
          *(void **)(param_1 + 0x68) = pvVar1;
        }
        else {
          *(void **)((longlong)pvVar3 + 0x10) = pvVar1;
        }
        if (pvVar2 == *(void **)(param_1 + 0x60)) {
          *(void **)(param_1 + 0x60) = pvVar3;
        }
        FUN_14539ad60(param_1,param_2,pvVar2,*(int *)((longlong)pvVar2 + 0xc),0,0,0);
        AK::MemoryMgr::Free(0,pvVar2);
      }
      else {
        *(int *)((longlong)pvVar2 + 0xc) = *(uint *)((longlong)pvVar2 + 0xc) - param_3;
        pvVar1 = *(void **)((longlong)pvVar2 + 0x10);
        pvVar3 = pvVar2;
      }
    }
  }
  FUN_14539ac10(param_1);
  return;
}



// FUNCTION 14539c150 FUN_14539c150 body=25 status=ok
// SIG undefined FUN_14539c150(void)

undefined1 FUN_14539c150(longlong param_1)

{
  if ((((*(byte *)(param_1 + 0x70) & 1) == 0) && (*(int *)(param_1 + 0x4c) == 1)) &&
     (*(longlong *)(param_1 + 0x68) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 14539c180 FUN_14539c180 body=103 status=ok
// SIG undefined FUN_14539c180(void)

undefined8 *
FUN_14539c180(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,byte param_7)

{
  FUN_14539ac70(param_1,param_3,param_4,param_5,param_6);
  *param_1 = &PTR_FUN_149d45930;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 0xe) = (*(uint *)(param_1 + 0xe) & 0xfffffffe | (uint)param_7) & 0xfffffff9;
  return param_1;
}


