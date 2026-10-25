// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144b87560 FUN_144b87560 body=168 status=ok
// SIG undefined FUN_144b87560(void)

void FUN_144b87560(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,int param_6,int param_7,int param_8,byte *param_9)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x58);
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



// FUNCTION 144b87610 FUN_144b87610 body=732 status=ok
// SIG undefined FUN_144b87610(void)

void FUN_144b87610(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4,uint param_5
                  ,int param_6,int param_7,int param_8,byte *param_9)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0x1e);
  if (param_6 != 0) {
    do {
      uVar4 = param_5;
      if (7 < param_5) {
        uVar5 = (ulonglong)(param_5 >> 3);
        do {
          pbVar1 = param_9 + uVar3;
          *param_2 = ((param_9[2] | 0xffffff00) << 8 | (uint)param_9[1]) << 8 | (uint)*param_9;
          pbVar2 = pbVar1 + uVar3;
          param_2[1] = ((pbVar1[2] | 0xffffff00) << 8 | (uint)pbVar1[1]) << 8 | (uint)*pbVar1;
          pbVar1 = pbVar2 + uVar3;
          param_2[2] = ((pbVar2[2] | 0xffffff00) << 8 | (uint)pbVar2[1]) << 8 | (uint)*pbVar2;
          pbVar2 = pbVar1 + uVar3;
          param_2[3] = ((pbVar1[2] | 0xffffff00) << 8 | (uint)pbVar1[1]) << 8 | (uint)*pbVar1;
          pbVar1 = pbVar2 + uVar3;
          param_2[4] = ((pbVar2[2] | 0xffffff00) << 8 | (uint)pbVar2[1]) << 8 | (uint)*pbVar2;
          pbVar2 = pbVar1 + uVar3;
          param_2[5] = ((pbVar1[2] | 0xffffff00) << 8 | (uint)pbVar1[1]) << 8 | (uint)*pbVar1;
          param_9 = pbVar2 + uVar3;
          param_2[6] = ((pbVar2[2] | 0xffffff00) << 8 | (uint)pbVar2[1]) << 8 | (uint)*pbVar2;
          param_2[7] = ((param_9[2] | 0xffffff00) << 8 | (uint)param_9[1]) << 8 | (uint)*param_9;
          param_2 = param_2 + 8;
          param_9 = param_9 + uVar3;
          uVar4 = uVar4 - 8;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (uVar4 != 0) {
        switch(uVar4) {
        case 7:
          *param_2 = ((param_9[2] | 0xffffff00) << 8 | (uint)param_9[1]) << 8 | (uint)*param_9;
          param_2 = param_2 + 1;
          param_9 = param_9 + uVar3;
        case 6:
          *param_2 = ((param_9[2] | 0xffffff00) << 8 | (uint)param_9[1]) << 8 | (uint)*param_9;
          param_2 = param_2 + 1;
          param_9 = param_9 + uVar3;
        case 5:
          *param_2 = ((param_9[2] | 0xffffff00) << 8 | (uint)param_9[1]) << 8 | (uint)*param_9;
          param_2 = param_2 + 1;
          param_9 = param_9 + uVar3;
        case 4:
          *param_2 = ((param_9[2] | 0xffffff00) << 8 | (uint)param_9[1]) << 8 | (uint)*param_9;
          param_2 = param_2 + 1;
          param_9 = param_9 + uVar3;
        case 3:
          *param_2 = ((param_9[2] | 0xffffff00) << 8 | (uint)param_9[1]) << 8 | (uint)*param_9;
          param_2 = param_2 + 1;
          param_9 = param_9 + uVar3;
        case 2:
          *param_2 = ((param_9[2] | 0xffffff00) << 8 | (uint)param_9[1]) << 8 | (uint)*param_9;
          param_2 = param_2 + 1;
          param_9 = param_9 + uVar3;
        case 1:
          *param_2 = ((param_9[2] | 0xffffff00) << 8 | (uint)param_9[1]) << 8 | (uint)*param_9;
          param_2 = param_2 + 1;
          param_9 = param_9 + uVar3;
        }
      }
      param_2 = param_2 + param_8;
      param_9 = param_9 + (int)(param_7 * uVar3);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b87910 FUN_144b87910 body=764 status=ok
// SIG undefined FUN_144b87910(void)

void FUN_144b87910(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,int param_6,int param_7,int param_8,undefined4 *param_9)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = *(ushort *)(param_1 + 0x1e);
  if (param_6 != 0) {
    uVar6 = (ulonglong)(uint)uVar1;
    do {
      uVar4 = param_5;
      if (7 < param_5) {
        uVar5 = (ulonglong)(param_5 >> 3);
        do {
          *param_2 = *param_9;
          puVar2 = (undefined4 *)((longlong)((longlong)param_9 + uVar6) + uVar6);
          param_2[1] = *(undefined4 *)((longlong)param_9 + uVar6);
          puVar3 = (undefined4 *)((longlong)puVar2 + uVar6);
          param_2[2] = *puVar2;
          puVar2 = (undefined4 *)((longlong)puVar3 + uVar6);
          param_2[3] = *puVar3;
          puVar3 = (undefined4 *)((longlong)puVar2 + uVar6);
          param_2[4] = *puVar2;
          puVar2 = (undefined4 *)((longlong)puVar3 + uVar6);
          param_2[5] = *puVar3;
          puVar3 = (undefined4 *)((longlong)puVar2 + uVar6);
          param_2[6] = *puVar2;
          uVar4 = uVar4 - 8;
          param_9 = (undefined4 *)((longlong)puVar3 + uVar6);
          param_2[7] = *puVar3;
          param_2 = param_2 + 8;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (uVar4 != 0) {
        switch(uVar4) {
        case 7:
          *param_2 = *param_9;
          param_2 = param_2 + 1;
          param_9 = (undefined4 *)((longlong)param_9 + uVar6);
        case 6:
          *param_2 = *param_9;
          param_2 = param_2 + 1;
          param_9 = (undefined4 *)((longlong)param_9 + uVar6);
        case 5:
          *param_2 = *param_9;
          param_2 = param_2 + 1;
          param_9 = (undefined4 *)((longlong)param_9 + uVar6);
        case 4:
          *param_2 = *param_9;
          param_2 = param_2 + 1;
          param_9 = (undefined4 *)((longlong)param_9 + uVar6);
        case 3:
          *param_2 = *param_9;
          param_2 = param_2 + 1;
          param_9 = (undefined4 *)((longlong)param_9 + uVar6);
        case 2:
          *param_2 = *param_9;
          param_2 = param_2 + 1;
          param_9 = (undefined4 *)((longlong)param_9 + uVar6);
        case 1:
          *param_2 = *param_9;
          param_2 = param_2 + 1;
          param_9 = (undefined4 *)((longlong)param_9 + uVar6);
        }
      }
      param_2 = param_2 + param_8;
      param_9 = (undefined4 *)((longlong)param_9 + (longlong)(int)(param_7 * (uint)uVar1));
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b87c30 FUN_144b87c30 body=209 status=ok
// SIG undefined FUN_144b87c30(void)

void FUN_144b87c30(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,int param_6,int param_7,int param_8,byte *param_9)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  longlong lVar7;
  
  uVar5 = *(ushort *)(param_1 + 0x1e);
  if (param_6 != 0) {
    iVar6 = param_5;
    do {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        pbVar1 = param_9 + 3;
        pbVar2 = param_9 + 2;
        lVar7 = (ulonglong)*pbVar1 * 0x100 + *(longlong *)(param_1 + 0x78);
        pbVar3 = param_9 + 1;
        bVar4 = *param_9;
        param_9 = param_9 + uVar5;
        *param_2 = CONCAT31(CONCAT21(CONCAT11(*pbVar1,*(undefined1 *)((ulonglong)*pbVar2 + lVar7)),
                                     *(undefined1 *)((ulonglong)*pbVar3 + lVar7)),
                            *(undefined1 *)((ulonglong)bVar4 + lVar7));
        param_2 = param_2 + 1;
      }
      param_2 = param_2 + param_8;
      param_9 = param_9 + (int)(param_7 * (uint)uVar5);
      param_6 = param_6 + -1;
      iVar6 = param_5;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b87d10 FUN_144b87d10 body=201 status=ok
// SIG undefined FUN_144b87d10(void)

void FUN_144b87d10(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  int param_6,int param_7,int param_8,ushort *param_9)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar3 = *(ushort *)(param_1 + 0x1e);
  if (param_6 != 0) {
    iVar6 = param_5;
    do {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        lVar5 = *(longlong *)(param_1 + 0x80);
        puVar1 = param_9 + 2;
        puVar2 = param_9 + 1;
        uVar4 = *param_9;
        param_9 = param_9 + uVar3;
        *param_2 = ((*(byte *)((ulonglong)*puVar1 + lVar5) | 0xffffff00) << 8 |
                   (uint)*(byte *)((ulonglong)*puVar2 + lVar5)) << 8 |
                   (uint)*(byte *)((ulonglong)uVar4 + lVar5);
        param_2 = param_2 + 1;
      }
      param_2 = param_2 + param_8;
      param_9 = param_9 + (int)(param_7 * (uint)uVar3);
      param_6 = param_6 + -1;
      iVar6 = param_5;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b87de0 FUN_144b87de0 body=210 status=ok
// SIG undefined FUN_144b87de0(void)

void FUN_144b87de0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,int param_6,int param_7,int param_8,ushort *param_9)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort uVar5;
  longlong lVar6;
  int iVar7;
  
  uVar4 = *(ushort *)(param_1 + 0x1e);
  if (param_6 != 0) {
    iVar7 = param_5;
    do {
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        lVar6 = *(longlong *)(param_1 + 0x80);
        puVar1 = param_9 + 3;
        puVar2 = param_9 + 2;
        puVar3 = param_9 + 1;
        uVar5 = *param_9;
        param_9 = param_9 + uVar4;
        *param_2 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)*puVar1 + lVar6),
                                              *(undefined1 *)((ulonglong)*puVar2 + lVar6)),
                                     *(undefined1 *)((ulonglong)*puVar3 + lVar6)),
                            *(undefined1 *)((ulonglong)uVar5 + lVar6));
        param_2 = param_2 + 1;
      }
      param_2 = param_2 + param_8;
      param_9 = param_9 + (int)(param_7 * (uint)uVar4);
      param_6 = param_6 + -1;
      iVar7 = param_5;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b87ec0 FUN_144b87ec0 body=268 status=ok
// SIG undefined FUN_144b87ec0(void)

void FUN_144b87ec0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,int param_6,int param_7,int param_8,ushort *param_9)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  uVar4 = *(ushort *)(param_1 + 0x1e);
  if (param_6 != 0) {
    do {
      if (param_5 != 0) {
        iVar7 = param_5;
        do {
          lVar6 = *(longlong *)(param_1 + 0x80);
          puVar1 = param_9 + 3;
          puVar2 = param_9 + 2;
          lVar8 = (ulonglong)*(byte *)((ulonglong)*puVar1 + lVar6) * 0x100 +
                  *(longlong *)(param_1 + 0x78);
          puVar3 = param_9 + 1;
          uVar5 = *param_9;
          param_9 = param_9 + (int)(uint)uVar4;
          *param_2 = CONCAT31(CONCAT21(CONCAT11(*(byte *)((ulonglong)*puVar1 + lVar6),
                                                *(undefined1 *)
                                                 ((ulonglong)*(byte *)((ulonglong)*puVar2 + lVar6) +
                                                 lVar8)),
                                       *(undefined1 *)
                                        ((ulonglong)*(byte *)((ulonglong)*puVar3 + lVar6) + lVar8)),
                              *(undefined1 *)
                               ((ulonglong)*(byte *)((ulonglong)uVar5 + lVar6) + lVar8));
          param_2 = param_2 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      param_2 = param_2 + param_8;
      param_9 = param_9 + (int)(param_7 * (uint)uVar4);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b87fd0 FUN_144b87fd0 body=2747 status=ok
// SIG undefined FUN_144b87fd0(void)

void FUN_144b87fd0(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4,uint param_5
                  ,int param_6,int param_7,int param_8,byte *param_9)

{
  byte *pbVar1;
  byte *pbVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = (uint)*(ushort *)(param_1 + 0x1e);
  if (param_6 != 0) {
    do {
      uVar5 = param_5;
      if (7 < param_5) {
        uVar6 = (ulonglong)(param_5 >> 3);
        do {
          uVar3 = 0xff - param_9[3];
          pbVar1 = param_9 + uVar4;
          *param_2 = (((int)((0xff - (uint)param_9[2]) * (uint)uVar3) / 0xff & 0xffffU | 0xffffff00)
                      << 8 | (int)((0xff - (uint)param_9[1]) * (uint)uVar3) / 0xff & 0xffffU) << 8 |
                     (int)((0xff - (uint)*param_9) * (uint)uVar3) / 0xff & 0xffffU;
          uVar3 = 0xff - pbVar1[3];
          pbVar2 = pbVar1 + uVar4;
          param_2[1] = (((int)((0xff - (uint)pbVar1[2]) * (uint)uVar3) / 0xff & 0xffffU | 0xffffff00
                        ) << 8 | (int)((0xff - (uint)pbVar1[1]) * (uint)uVar3) / 0xff & 0xffffU) <<
                       8 | (int)((0xff - (uint)*pbVar1) * (uint)uVar3) / 0xff & 0xffffU;
          uVar3 = 0xff - pbVar2[3];
          pbVar1 = pbVar2 + uVar4;
          param_2[2] = (((int)((0xff - (uint)pbVar2[2]) * (uint)uVar3) / 0xff & 0xffffU | 0xffffff00
                        ) << 8 | (int)((0xff - (uint)pbVar2[1]) * (uint)uVar3) / 0xff & 0xffffU) <<
                       8 | (int)((0xff - (uint)*pbVar2) * (uint)uVar3) / 0xff & 0xffffU;
          uVar3 = 0xff - pbVar1[3];
          pbVar2 = pbVar1 + uVar4;
          param_2[3] = (((int)((0xff - (uint)pbVar1[2]) * (uint)uVar3) / 0xff & 0xffffU | 0xffffff00
                        ) << 8 | (int)((0xff - (uint)pbVar1[1]) * (uint)uVar3) / 0xff & 0xffffU) <<
                       8 | (int)((0xff - (uint)*pbVar1) * (uint)uVar3) / 0xff & 0xffffU;
          uVar3 = 0xff - pbVar2[3];
          pbVar1 = pbVar2 + uVar4;
          param_2[4] = (((int)((0xff - (uint)pbVar2[2]) * (uint)uVar3) / 0xff & 0xffffU | 0xffffff00
                        ) << 8 | (int)((0xff - (uint)pbVar2[1]) * (uint)uVar3) / 0xff & 0xffffU) <<
                       8 | (int)((0xff - (uint)*pbVar2) * (uint)uVar3) / 0xff & 0xffffU;
          uVar3 = 0xff - pbVar1[3];
          pbVar2 = pbVar1 + uVar4;
          param_2[5] = (((int)((0xff - (uint)pbVar1[2]) * (uint)uVar3) / 0xff & 0xffffU | 0xffffff00
                        ) << 8 | (int)((0xff - (uint)pbVar1[1]) * (uint)uVar3) / 0xff & 0xffffU) <<
                       8 | (int)((0xff - (uint)*pbVar1) * (uint)uVar3) / 0xff & 0xffffU;
          uVar3 = 0xff - pbVar2[3];
          pbVar1 = pbVar2 + uVar4;
          param_2[6] = (((int)((0xff - (uint)pbVar2[2]) * (uint)uVar3) / 0xff & 0xffffU | 0xffffff00
                        ) << 8 | (int)((0xff - (uint)pbVar2[1]) * (uint)uVar3) / 0xff & 0xffffU) <<
                       8 | (int)((0xff - (uint)*pbVar2) * (uint)uVar3) / 0xff & 0xffffU;
          uVar5 = uVar5 - 8;
          uVar3 = 0xff - pbVar1[3];
          param_9 = pbVar1 + uVar4;
          param_2[7] = (((int)((0xff - (uint)pbVar1[2]) * (uint)uVar3) / 0xff & 0xffffU | 0xffffff00
                        ) << 8 | (int)((0xff - (uint)pbVar1[1]) * (uint)uVar3) / 0xff & 0xffffU) <<
                       8 | (int)((0xff - (uint)*pbVar1) * (uint)uVar3) / 0xff & 0xffffU;
          param_2 = param_2 + 8;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (uVar5 != 0) {
        switch(uVar5) {
        case 7:
          uVar3 = 0xff - param_9[3];
          *param_2 = (((int)((0xff - (uint)param_9[2]) * (uint)uVar3) / 0xff & 0xffffU | 0xffffff00)
                      << 8 | (int)((0xff - (uint)param_9[1]) * (uint)uVar3) / 0xff & 0xffffU) << 8 |
                     (int)((0xff - (uint)*param_9) * (uint)uVar3) / 0xff & 0xffffU;
          param_2 = param_2 + 1;
          param_9 = param_9 + uVar4;
        case 6:
          uVar3 = 0xff - param_9[3];
          *param_2 = (((int)((0xff - (uint)param_9[2]) * (uint)uVar3) / 0xff & 0xffffU | 0xffffff00)
                      << 8 | (int)((0xff - (uint)param_9[1]) * (uint)uVar3) / 0xff & 0xffffU) << 8 |
                     (int)((0xff - (uint)*param_9) * (uint)uVar3) / 0xff & 0xffffU;
          param_2 = param_2 + 1;
          param_9 = param_9 + uVar4;
        case 5:
          uVar3 = 0xff - param_9[3];
          *param_2 = (((int)((0xff - (uint)param_9[2]) * (uint)uVar3) / 0xff & 0xffffU | 0xffffff00)
                      << 8 | (int)((0xff - (uint)param_9[1]) * (uint)uVar3) / 0xff & 0xffffU) << 8 |
                     (int)((0xff - (uint)*param_9) * (uint)uVar3) / 0xff & 0xffffU;
          param_2 = param_2 + 1;
          param_9 = param_9 + uVar4;
        case 4:
          uVar3 = 0xff - param_9[3];
          *param_2 = (((int)((0xff - (uint)param_9[2]) * (uint)uVar3) / 0xff & 0xffffU | 0xffffff00)
                      << 8 | (int)((0xff - (uint)param_9[1]) * (uint)uVar3) / 0xff & 0xffffU) << 8 |
                     (int)((0xff - (uint)*param_9) * (uint)uVar3) / 0xff & 0xffffU;
          param_2 = param_2 + 1;
          param_9 = param_9 + uVar4;
        case 3:
          uVar3 = 0xff - param_9[3];
          *param_2 = (((int)((0xff - (uint)param_9[2]) * (uint)uVar3) / 0xff & 0xffffU | 0xffffff00)
                      << 8 | (int)((0xff - (uint)param_9[1]) * (uint)uVar3) / 0xff & 0xffffU) << 8 |
                     (int)((0xff - (uint)*param_9) * (uint)uVar3) / 0xff & 0xffffU;
          param_2 = param_2 + 1;
          param_9 = param_9 + uVar4;
        case 2:
          uVar3 = 0xff - param_9[3];
          *param_2 = (((int)((0xff - (uint)param_9[2]) * (uint)uVar3) / 0xff & 0xffffU | 0xffffff00)
                      << 8 | (int)((0xff - (uint)param_9[1]) * (uint)uVar3) / 0xff & 0xffffU) << 8 |
                     (int)((0xff - (uint)*param_9) * (uint)uVar3) / 0xff & 0xffffU;
          param_2 = param_2 + 1;
          param_9 = param_9 + uVar4;
        case 1:
          uVar3 = 0xff - param_9[3];
          *param_2 = (((int)((0xff - (uint)param_9[2]) * (uint)uVar3) / 0xff & 0xffffU | 0xffffff00)
                      << 8 | (int)((0xff - (uint)param_9[1]) * (uint)uVar3) / 0xff & 0xffffU) << 8 |
                     (int)((0xff - (uint)*param_9) * (uint)uVar3) / 0xff & 0xffffU;
          param_2 = param_2 + 1;
          param_9 = param_9 + uVar4;
        }
      }
      param_2 = param_2 + param_8;
      param_9 = param_9 + (int)(param_7 * uVar4);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b88ab0 FUN_144b88ab0 body=354 status=ok
// SIG undefined FUN_144b88ab0(void)

void FUN_144b88ab0(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  int param_6,int param_7,int param_8,byte *param_9)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  longlong lVar5;
  int iVar6;
  ushort uVar7;
  
  uVar4 = *(ushort *)(param_1 + 0x1e);
  lVar5 = *(longlong *)(param_1 + 0x50);
  if (param_6 != 0) {
    iVar6 = param_5;
    do {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        uVar7 = 0xff - param_9[3];
        pbVar1 = param_9 + 2;
        pbVar2 = param_9 + 1;
        bVar3 = *param_9;
        param_9 = param_9 + uVar4;
        *param_2 = ((*(byte *)((ulonglong)
                               ((int)((0xff - (uint)*pbVar1) * (uint)uVar7) / 0xff & 0xffff) + lVar5
                              ) | 0xffffff00) << 8 |
                   (uint)*(byte *)((ulonglong)
                                   ((int)((0xff - (uint)*pbVar2) * (uint)uVar7) / 0xff & 0xffff) +
                                  lVar5)) << 8 |
                   (uint)*(byte *)((ulonglong)
                                   ((int)((0xff - (uint)bVar3) * (uint)uVar7) / 0xff & 0xffff) +
                                  lVar5);
        param_2 = param_2 + 1;
      }
      param_9 = param_9 + (int)(param_7 * (uint)uVar4);
      param_2 = param_2 + param_8;
      param_6 = param_6 + -1;
      iVar6 = param_5;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b88c20 FUN_144b88c20 body=797 status=ok
// SIG undefined FUN_144b88c20(void)

void FUN_144b88c20(undefined8 param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,int param_6,int param_7,int param_8,byte *param_9,byte *param_10,
                  byte *param_11)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  
  if (param_6 != 0) {
    lVar7 = (longlong)param_7;
    do {
      uVar8 = param_5;
      if (7 < param_5) {
        uVar6 = (ulonglong)(param_5 >> 3);
        do {
          uVar8 = uVar8 - 8;
          *param_2 = ((*param_11 | 0xffffff00) << 8 | (uint)*param_10) << 8 | (uint)*param_9;
          param_2[1] = ((param_11[1] | 0xffffff00) << 8 | (uint)param_10[1]) << 8 | (uint)param_9[1]
          ;
          param_2[2] = ((param_11[2] | 0xffffff00) << 8 | (uint)param_10[2]) << 8 | (uint)param_9[2]
          ;
          param_2[3] = ((param_11[3] | 0xffffff00) << 8 | (uint)param_10[3]) << 8 | (uint)param_9[3]
          ;
          param_2[4] = ((param_11[4] | 0xffffff00) << 8 | (uint)param_10[4]) << 8 | (uint)param_9[4]
          ;
          param_2[5] = ((param_11[5] | 0xffffff00) << 8 | (uint)param_10[5]) << 8 | (uint)param_9[5]
          ;
          param_2[6] = ((param_11[6] | 0xffffff00) << 8 | (uint)param_10[6]) << 8 | (uint)param_9[6]
          ;
          pbVar1 = param_10 + 7;
          param_10 = param_10 + 8;
          pbVar2 = param_11 + 7;
          param_11 = param_11 + 8;
          pbVar3 = param_9 + 7;
          param_9 = param_9 + 8;
          param_2[7] = ((*pbVar2 | 0xffffff00) << 8 | (uint)*pbVar1) << 8 | (uint)*pbVar3;
          param_2 = param_2 + 8;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (uVar8 != 0) {
        switch(uVar8) {
        case 7:
          bVar4 = *param_10;
          param_10 = param_10 + 1;
          bVar5 = *param_11;
          param_11 = param_11 + 1;
          *param_2 = ((bVar5 | 0xffffff00) << 8 | (uint)bVar4) << 8 | (uint)*param_9;
          param_2 = param_2 + 1;
          param_9 = param_9 + 1;
        case 6:
          bVar4 = *param_10;
          param_10 = param_10 + 1;
          bVar5 = *param_11;
          param_11 = param_11 + 1;
          *param_2 = ((bVar5 | 0xffffff00) << 8 | (uint)bVar4) << 8 | (uint)*param_9;
          param_2 = param_2 + 1;
          param_9 = param_9 + 1;
        case 5:
          bVar4 = *param_10;
          param_10 = param_10 + 1;
          bVar5 = *param_11;
          param_11 = param_11 + 1;
          *param_2 = ((bVar5 | 0xffffff00) << 8 | (uint)bVar4) << 8 | (uint)*param_9;
          param_2 = param_2 + 1;
          param_9 = param_9 + 1;
        case 4:
          bVar4 = *param_10;
          param_10 = param_10 + 1;
          bVar5 = *param_11;
          param_11 = param_11 + 1;
          *param_2 = ((bVar5 | 0xffffff00) << 8 | (uint)bVar4) << 8 | (uint)*param_9;
          param_2 = param_2 + 1;
          param_9 = param_9 + 1;
        case 3:
          bVar4 = *param_10;
          param_10 = param_10 + 1;
          bVar5 = *param_11;
          param_11 = param_11 + 1;
          *param_2 = ((bVar5 | 0xffffff00) << 8 | (uint)bVar4) << 8 | (uint)*param_9;
          param_2 = param_2 + 1;
          param_9 = param_9 + 1;
        case 2:
          bVar4 = *param_10;
          param_10 = param_10 + 1;
          bVar5 = *param_11;
          param_11 = param_11 + 1;
          *param_2 = ((bVar5 | 0xffffff00) << 8 | (uint)bVar4) << 8 | (uint)*param_9;
          param_2 = param_2 + 1;
          param_9 = param_9 + 1;
        case 1:
          bVar4 = *param_10;
          param_10 = param_10 + 1;
          bVar5 = *param_11;
          param_11 = param_11 + 1;
          *param_2 = ((bVar5 | 0xffffff00) << 8 | (uint)bVar4) << 8 | (uint)*param_9;
          param_2 = param_2 + 1;
          param_9 = param_9 + 1;
        }
      }
      param_9 = param_9 + lVar7;
      param_10 = param_10 + lVar7;
      param_11 = param_11 + lVar7;
      param_2 = param_2 + param_8;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b88f60 FUN_144b88f60 body=882 status=ok
// SIG undefined FUN_144b88f60(void)

void FUN_144b88f60(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,int param_6,int param_7,int param_8,undefined1 *param_9,
                  undefined1 *param_10,undefined1 *param_11,undefined1 *param_12)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  
  if (param_6 != 0) {
    lVar8 = (longlong)param_7;
    do {
      uVar10 = param_5;
      if (7 < param_5) {
        uVar9 = (ulonglong)(param_5 >> 3);
        do {
          *param_2 = CONCAT31(CONCAT21(CONCAT11(*param_12,*param_11),*param_10),*param_9);
          param_2[1] = CONCAT31(CONCAT21(CONCAT11(param_12[1],param_11[1]),param_10[1]),param_9[1]);
          param_2[2] = CONCAT31(CONCAT21(CONCAT11(param_12[2],param_11[2]),param_10[2]),param_9[2]);
          param_2[3] = CONCAT31(CONCAT21(CONCAT11(param_12[3],param_11[3]),param_10[3]),param_9[3]);
          param_2[4] = CONCAT31(CONCAT21(CONCAT11(param_12[4],param_11[4]),param_10[4]),param_9[4]);
          param_2[5] = CONCAT31(CONCAT21(CONCAT11(param_12[5],param_11[5]),param_10[5]),param_9[5]);
          param_2[6] = CONCAT31(CONCAT21(CONCAT11(param_12[6],param_11[6]),param_10[6]),param_9[6]);
          puVar1 = param_12 + 7;
          puVar2 = param_11 + 7;
          puVar3 = param_10 + 7;
          param_12 = param_12 + 8;
          param_11 = param_11 + 8;
          param_10 = param_10 + 8;
          puVar4 = param_9 + 7;
          uVar10 = uVar10 - 8;
          param_9 = param_9 + 8;
          param_2[7] = CONCAT31(CONCAT21(CONCAT11(*puVar1,*puVar2),*puVar3),*puVar4);
          param_2 = param_2 + 8;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (uVar10 != 0) {
        switch(uVar10) {
        case 7:
          uVar5 = *param_11;
          param_11 = param_11 + 1;
          uVar6 = *param_12;
          param_12 = param_12 + 1;
          uVar7 = *param_10;
          param_10 = param_10 + 1;
          *param_2 = CONCAT31(CONCAT21(CONCAT11(uVar6,uVar5),uVar7),*param_9);
          param_2 = param_2 + 1;
          param_9 = param_9 + 1;
        case 6:
          uVar5 = *param_11;
          param_11 = param_11 + 1;
          uVar6 = *param_12;
          param_12 = param_12 + 1;
          uVar7 = *param_10;
          param_10 = param_10 + 1;
          *param_2 = CONCAT31(CONCAT21(CONCAT11(uVar6,uVar5),uVar7),*param_9);
          param_2 = param_2 + 1;
          param_9 = param_9 + 1;
        case 5:
          uVar5 = *param_11;
          param_11 = param_11 + 1;
          uVar6 = *param_12;
          param_12 = param_12 + 1;
          uVar7 = *param_10;
          param_10 = param_10 + 1;
          *param_2 = CONCAT31(CONCAT21(CONCAT11(uVar6,uVar5),uVar7),*param_9);
          param_2 = param_2 + 1;
          param_9 = param_9 + 1;
        case 4:
          uVar5 = *param_11;
          param_11 = param_11 + 1;
          uVar6 = *param_12;
          param_12 = param_12 + 1;
          uVar7 = *param_10;
          param_10 = param_10 + 1;
          *param_2 = CONCAT31(CONCAT21(CONCAT11(uVar6,uVar5),uVar7),*param_9);
          param_2 = param_2 + 1;
          param_9 = param_9 + 1;
        case 3:
          uVar5 = *param_11;
          param_11 = param_11 + 1;
          uVar6 = *param_12;
          param_12 = param_12 + 1;
          uVar7 = *param_10;
          param_10 = param_10 + 1;
          *param_2 = CONCAT31(CONCAT21(CONCAT11(uVar6,uVar5),uVar7),*param_9);
          param_2 = param_2 + 1;
          param_9 = param_9 + 1;
        case 2:
          uVar5 = *param_11;
          param_11 = param_11 + 1;
          uVar6 = *param_12;
          param_12 = param_12 + 1;
          uVar7 = *param_10;
          param_10 = param_10 + 1;
          *param_2 = CONCAT31(CONCAT21(CONCAT11(uVar6,uVar5),uVar7),*param_9);
          param_2 = param_2 + 1;
          param_9 = param_9 + 1;
        case 1:
          uVar5 = *param_11;
          param_11 = param_11 + 1;
          uVar6 = *param_12;
          param_12 = param_12 + 1;
          uVar7 = *param_10;
          param_10 = param_10 + 1;
          *param_2 = CONCAT31(CONCAT21(CONCAT11(uVar6,uVar5),uVar7),*param_9);
          param_2 = param_2 + 1;
          param_9 = param_9 + 1;
        }
      }
      param_9 = param_9 + lVar8;
      param_10 = param_10 + lVar8;
      param_11 = param_11 + lVar8;
      param_12 = param_12 + lVar8;
      param_2 = param_2 + param_8;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b892f0 FUN_144b892f0 body=339 status=ok
// SIG undefined FUN_144b892f0(void)

void FUN_144b892f0(undefined8 param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,int param_6,int param_7,int param_8,byte *param_9,byte *param_10,
                  byte *param_11,byte *param_12)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_6 != 0) {
    lVar6 = (longlong)param_7;
    iVar4 = param_5;
    do {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        iVar5 = 0xff - (uint)*param_12;
        bVar1 = *param_9;
        param_12 = param_12 + 1;
        param_9 = param_9 + 1;
        bVar2 = *param_10;
        param_10 = param_10 + 1;
        bVar3 = *param_11;
        param_11 = param_11 + 1;
        *param_2 = ((((0xff - (uint)bVar3) * iVar5) / 0xff | 0xffffff00) << 8 |
                   ((0xff - (uint)bVar2) * iVar5) / 0xff) << 8 |
                   ((0xff - (uint)bVar1) * iVar5) / 0xff;
        param_2 = param_2 + 1;
      }
      param_9 = param_9 + lVar6;
      param_10 = param_10 + lVar6;
      param_11 = param_11 + lVar6;
      param_12 = param_12 + lVar6;
      param_2 = param_2 + param_8;
      param_6 = param_6 + -1;
      iVar4 = param_5;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b89450 FUN_144b89450 body=264 status=ok
// SIG undefined FUN_144b89450(void)

void FUN_144b89450(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,int param_6,int param_7,int param_8,byte *param_9,byte *param_10,
                  byte *param_11,byte *param_12)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_6 != 0) {
    iVar5 = param_5;
    do {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        bVar1 = *param_12;
        param_12 = param_12 + 1;
        bVar2 = *param_9;
        param_9 = param_9 + 1;
        lVar6 = (ulonglong)bVar1 * 0x100 + *(longlong *)(param_1 + 0x78);
        bVar3 = *param_10;
        param_10 = param_10 + 1;
        bVar4 = *param_11;
        param_11 = param_11 + 1;
        *param_2 = CONCAT31(CONCAT21(CONCAT11(bVar1,*(undefined1 *)((ulonglong)bVar4 + lVar6)),
                                     *(undefined1 *)((ulonglong)bVar3 + lVar6)),
                            *(undefined1 *)((ulonglong)bVar2 + lVar6));
        param_2 = param_2 + 1;
      }
      lVar6 = (longlong)param_7;
      param_9 = param_9 + lVar6;
      param_10 = param_10 + lVar6;
      param_11 = param_11 + lVar6;
      param_12 = param_12 + lVar6;
      param_2 = param_2 + param_8;
      param_6 = param_6 + -1;
      iVar5 = param_5;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b89560 FUN_144b89560 body=216 status=ok
// SIG undefined FUN_144b89560(void)

void FUN_144b89560(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4,uint param_5
                  ,int param_6,int param_7,int param_8,ushort *param_9,ushort *param_10,
                  ushort *param_11)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_6 != 0) {
    lVar5 = (longlong)param_7;
    do {
      uVar6 = (ulonglong)param_5;
      if (param_5 != 0) {
        do {
          lVar4 = *(longlong *)(param_1 + 0x80);
          uVar1 = *param_11;
          param_11 = param_11 + 1;
          uVar2 = *param_10;
          param_10 = param_10 + 1;
          uVar3 = *param_9;
          param_9 = param_9 + 1;
          *param_2 = ((*(byte *)((ulonglong)uVar1 + lVar4) | 0xffffff00) << 8 |
                     (uint)*(byte *)((ulonglong)uVar2 + lVar4)) << 8 |
                     (uint)*(byte *)((ulonglong)uVar3 + lVar4);
          param_2 = param_2 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      param_9 = param_9 + lVar5;
      param_10 = param_10 + lVar5;
      param_11 = param_11 + lVar5;
      param_2 = param_2 + param_8;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b89640 FUN_144b89640 body=250 status=ok
// SIG undefined FUN_144b89640(void)

void FUN_144b89640(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,int param_6,int param_7,int param_8,ushort *param_9,ushort *param_10,
                  ushort *param_11,ushort *param_12)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_6 != 0) {
    lVar7 = (longlong)param_7;
    do {
      uVar6 = (ulonglong)param_5;
      if (param_5 != 0) {
        do {
          lVar5 = *(longlong *)(param_1 + 0x80);
          uVar1 = *param_12;
          param_12 = param_12 + 1;
          uVar2 = *param_11;
          param_11 = param_11 + 1;
          uVar3 = *param_10;
          param_10 = param_10 + 1;
          uVar4 = *param_9;
          param_9 = param_9 + 1;
          *param_2 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)uVar1 + lVar5),
                                                *(undefined1 *)((ulonglong)uVar2 + lVar5)),
                                       *(undefined1 *)((ulonglong)uVar3 + lVar5)),
                              *(undefined1 *)((ulonglong)uVar4 + lVar5));
          param_2 = param_2 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      param_9 = param_9 + lVar7;
      param_10 = param_10 + lVar7;
      param_11 = param_11 + lVar7;
      param_12 = param_12 + lVar7;
      param_2 = param_2 + param_8;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b89740 FUN_144b89740 body=304 status=ok
// SIG undefined FUN_144b89740(void)

void FUN_144b89740(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,int param_6,int param_7,int param_8,ushort *param_9,ushort *param_10,
                  ushort *param_11,ushort *param_12)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_6 != 0) {
    lVar7 = (longlong)param_7;
    iVar6 = param_5;
    do {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        lVar5 = *(longlong *)(param_1 + 0x80);
        uVar1 = *param_12;
        param_12 = param_12 + 1;
        uVar2 = *param_9;
        param_9 = param_9 + 1;
        lVar8 = (ulonglong)*(byte *)((ulonglong)uVar1 + lVar5) * 0x100 +
                *(longlong *)(param_1 + 0x78);
        uVar3 = *param_10;
        param_10 = param_10 + 1;
        uVar4 = *param_11;
        param_11 = param_11 + 1;
        *param_2 = CONCAT31(CONCAT21(CONCAT11(*(byte *)((ulonglong)uVar1 + lVar5),
                                              *(undefined1 *)
                                               ((ulonglong)*(byte *)((ulonglong)uVar4 + lVar5) +
                                               lVar8)),
                                     *(undefined1 *)
                                      ((ulonglong)*(byte *)((ulonglong)uVar3 + lVar5) + lVar8)),
                            *(undefined1 *)((ulonglong)*(byte *)((ulonglong)uVar2 + lVar5) + lVar8))
        ;
        param_2 = param_2 + 1;
      }
      param_9 = param_9 + lVar7;
      param_10 = param_10 + lVar7;
      param_11 = param_11 + lVar7;
      param_12 = param_12 + lVar7;
      param_2 = param_2 + param_8;
      param_6 = param_6 + -1;
      iVar6 = param_5;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b89870 FUN_144b89870 body=333 status=ok
// SIG undefined FUN_144b89870(void)

void FUN_144b89870(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  int param_6,int param_7,int param_8,undefined1 *param_9)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  iVar1 = param_7 * 3;
  if (param_6 != 0) {
    lVar5 = (longlong)param_8;
    puVar3 = param_9;
    iVar2 = param_5;
    iVar4 = param_6;
    do {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        FUN_144e97ec0(*(undefined8 *)(param_1 + 0x70),*puVar3,(int)(char)puVar3[1],
                      (int)(char)puVar3[2],&local_38,&param_6,&param_7);
        FUN_144e97fe0(*(undefined8 *)(param_1 + 0x70),local_38,param_6,param_7,&local_2c,&local_30,
                      &local_34);
        *param_2 = ((local_34 | 0xffffff00) << 8 | local_30) << 8 | local_2c;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 3;
      }
      param_2 = param_2 + lVar5;
      puVar3 = puVar3 + iVar1;
      iVar4 = iVar4 + -1;
      iVar2 = param_5;
    } while (iVar4 != 0);
  }
  return;
}



// FUNCTION 144b899c0 FUN_144b899c0 body=3029 status=ok
// SIG undefined FUN_144b899c0(void)

void FUN_144b899c0(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4,uint param_5
                  ,uint param_6,int param_7,uint param_8,undefined1 *param_9)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint local_res10 [2];
  undefined1 *local_f8;
  uint *local_f0;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  longlong local_30;
  
  lVar1 = (longlong)(int)param_8 + (ulonglong)param_5;
  puVar10 = param_2 + lVar1;
  puVar11 = puVar10 + lVar1;
  iVar9 = param_5 * 3 + param_8 * 4;
  puVar8 = puVar11 + lVar1;
  iVar4 = ((int)(param_7 + (param_7 >> 0x1f & 3U)) >> 2) * 10;
  local_f0 = puVar8;
  puVar7 = param_9;
  if (((param_5 | param_6) & 3) == 0) {
    if (3 < param_6) {
      local_30 = (longlong)iVar9 << 2;
      local_f0 = (uint *)(ulonglong)(param_6 >> 2);
      param_6 = param_5 >> 2;
      local_f8 = param_9;
      do {
        do {
          uVar2 = local_f8[0x10];
          uVar3 = local_f8[0x11];
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),*local_f8,uVar2,uVar3,&local_60,local_res10,
                        &param_8);
          *param_2 = ((param_8 | 0xffffff00) << 8 | local_res10[0]) << 8 | local_60;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),local_f8[1],uVar2,uVar3,&local_e4,&local_e8,
                        &local_38);
          param_2[1] = ((local_38 | 0xffffff00) << 8 | local_e8) << 8 | local_e4;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),local_f8[2],uVar2,uVar3,&local_d8,&local_dc,
                        &local_e0);
          param_2[2] = ((local_e0 | 0xffffff00) << 8 | local_dc) << 8 | local_d8;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),local_f8[3],uVar2,uVar3,&local_cc,&local_d0,
                        &local_d4);
          param_2[3] = ((local_d4 | 0xffffff00) << 8 | local_d0) << 8 | local_cc;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),local_f8[4],uVar2,uVar3,&local_c0,&local_c4,
                        &local_c8);
          *puVar10 = ((local_c8 | 0xffffff00) << 8 | local_c4) << 8 | local_c0;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),local_f8[5],uVar2,uVar3,&local_b4,&local_b8,
                        &local_bc);
          puVar10[1] = ((local_bc | 0xffffff00) << 8 | local_b8) << 8 | local_b4;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),local_f8[6],uVar2,uVar3,&local_a8,&local_ac,
                        &local_b0);
          puVar10[2] = ((local_b0 | 0xffffff00) << 8 | local_ac) << 8 | local_a8;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),local_f8[7],uVar2,uVar3,&local_9c,&local_a0,
                        &local_a4);
          puVar10[3] = ((local_a4 | 0xffffff00) << 8 | local_a0) << 8 | local_9c;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),local_f8[8],uVar2,uVar3,&local_90,&local_94,
                        &local_98);
          *puVar11 = ((local_98 | 0xffffff00) << 8 | local_94) << 8 | local_90;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),local_f8[9],uVar2,uVar3,&local_84,&local_88,
                        &local_8c);
          puVar11[1] = ((local_8c | 0xffffff00) << 8 | local_88) << 8 | local_84;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),local_f8[10],uVar2,uVar3,&local_78,&local_7c
                        ,&local_80);
          puVar11[2] = ((local_80 | 0xffffff00) << 8 | local_7c) << 8 | local_78;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),local_f8[0xb],uVar2,uVar3,&local_6c,
                        &local_70,&local_74);
          puVar11[3] = ((local_74 | 0xffffff00) << 8 | local_70) << 8 | local_6c;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),local_f8[0xc],uVar2,uVar3,&local_48,
                        &local_64,&local_68);
          *puVar8 = ((local_68 | 0xffffff00) << 8 | local_64) << 8 | local_48;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),local_f8[0xd],uVar2,uVar3,&local_54,
                        &local_58,&local_5c);
          puVar8[1] = ((local_5c | 0xffffff00) << 8 | local_58) << 8 | local_54;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),local_f8[0xe],uVar2,uVar3,&local_34,
                        &local_4c,&local_50);
          puVar8[2] = ((local_50 | 0xffffff00) << 8 | local_4c) << 8 | local_34;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),local_f8[0xf],uVar2,uVar3,&local_3c,
                        &local_40,&local_44);
          param_2 = param_2 + 4;
          local_f8 = local_f8 + 0x12;
          puVar10 = puVar10 + 4;
          puVar11 = puVar11 + 4;
          puVar8[3] = ((local_44 | 0xffffff00) << 8 | local_40) << 8 | local_3c;
          puVar8 = puVar8 + 4;
          param_6 = param_6 - 1;
        } while (param_6 != 0);
        param_2 = (uint *)((longlong)param_2 + local_30);
        local_f8 = local_f8 + iVar4;
        puVar10 = (uint *)((longlong)puVar10 + local_30);
        puVar11 = (uint *)((longlong)puVar11 + local_30);
        puVar8 = (uint *)((longlong)puVar8 + local_30);
        local_f0 = (uint *)((longlong)local_f0 - 1);
        param_6 = param_5 >> 2;
      } while (local_f0 != (uint *)0x0);
    }
  }
  else {
    for (; param_6 != 0; param_6 = param_6 - 4) {
      param_8 = param_5;
      if (param_5 != 0) {
        do {
          puVar6 = puVar7;
          uVar2 = puVar6[0x10];
          uVar3 = puVar6[0x11];
          if (param_8 != 1) {
            if (param_8 != 2) {
              if (param_8 != 3) {
                if (param_6 != 1) {
                  if (param_6 != 2) {
                    if (param_6 != 3) {
                      FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar6[0xf],uVar2,uVar3,
                                    &local_40,&local_3c,local_res10);
                      local_f0[3] = ((local_res10[0] | 0xffffff00) << 8 | local_3c) << 8 | local_40;
                    }
                    FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar6[0xb],uVar2,uVar3,&local_4c,
                                  &local_34,&local_44);
                    puVar11[3] = ((local_44 | 0xffffff00) << 8 | local_34) << 8 | local_4c;
                  }
                  FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar6[7],uVar2,uVar3,&local_58,
                                &local_54,&local_50);
                  puVar10[3] = ((local_50 | 0xffffff00) << 8 | local_54) << 8 | local_58;
                }
                FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar6[3],uVar2,uVar3,&local_64,
                              &local_48,&local_5c);
                param_2[3] = ((local_5c | 0xffffff00) << 8 | local_48) << 8 | local_64;
              }
              if (param_6 != 1) {
                if (param_6 != 2) {
                  if (param_6 != 3) {
                    FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar6[0xe],uVar2,uVar3,&local_70,
                                  &local_6c,&local_68);
                    local_f0[2] = ((local_68 | 0xffffff00) << 8 | local_6c) << 8 | local_70;
                  }
                  FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar6[10],uVar2,uVar3,&local_7c,
                                &local_78,&local_74);
                  puVar11[2] = ((local_74 | 0xffffff00) << 8 | local_78) << 8 | local_7c;
                }
                FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar6[6],uVar2,uVar3,&local_88,
                              &local_84,&local_80);
                puVar10[2] = ((local_80 | 0xffffff00) << 8 | local_84) << 8 | local_88;
              }
              FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar6[2],uVar2,uVar3,&local_94,
                            &local_90,&local_8c);
              param_2[2] = ((local_8c | 0xffffff00) << 8 | local_90) << 8 | local_94;
            }
            if (param_6 != 1) {
              if (param_6 != 2) {
                if (param_6 != 3) {
                  FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar6[0xd],uVar2,uVar3,&local_a0,
                                &local_9c,&local_98);
                  local_f0[1] = ((local_98 | 0xffffff00) << 8 | local_9c) << 8 | local_a0;
                }
                FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar6[9],uVar2,uVar3,&local_ac,
                              &local_a8,&local_a4);
                puVar11[1] = ((local_a4 | 0xffffff00) << 8 | local_a8) << 8 | local_ac;
              }
              FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar6[5],uVar2,uVar3,&local_b8,
                            &local_b4,&local_b0);
              puVar10[1] = ((local_b0 | 0xffffff00) << 8 | local_b4) << 8 | local_b8;
            }
            FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar6[1],uVar2,uVar3,&local_c4,&local_c0,
                          &local_bc);
            param_2[1] = ((local_bc | 0xffffff00) << 8 | local_c0) << 8 | local_c4;
          }
          if (param_6 != 1) {
            if (param_6 != 2) {
              if (param_6 != 3) {
                FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar6[0xc],uVar2,uVar3,&local_d0,
                              &local_cc,&local_c8);
                *local_f0 = ((local_c8 | 0xffffff00) << 8 | local_cc) << 8 | local_d0;
              }
              FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar6[8],uVar2,uVar3,&local_dc,
                            &local_d8,&local_d4);
              *puVar11 = ((local_d4 | 0xffffff00) << 8 | local_d8) << 8 | local_dc;
            }
            FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar6[4],uVar2,uVar3,&local_e8,&local_e4,
                          &local_e0);
            *puVar10 = ((local_e0 | 0xffffff00) << 8 | local_e4) << 8 | local_e8;
          }
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),*puVar6,uVar2,uVar3,&local_30,&local_60,
                        &local_38);
          *param_2 = ((local_38 | 0xffffff00) << 8 | local_60) << 8 | (uint)local_30;
          uVar5 = (ulonglong)param_8;
          if (param_8 < 4) {
            param_2 = param_2 + uVar5;
            local_f0 = local_f0 + uVar5;
            puVar11 = puVar11 + uVar5;
            puVar10 = puVar10 + uVar5;
            break;
          }
          param_8 = param_8 - 4;
          local_f0 = local_f0 + 4;
          param_2 = param_2 + 4;
          puVar11 = puVar11 + 4;
          puVar10 = puVar10 + 4;
          puVar7 = puVar6 + 0x12;
        } while (param_8 != 0);
        puVar7 = puVar6 + 0x12;
      }
      if (param_6 < 5) {
        return;
      }
      param_2 = param_2 + iVar9;
      puVar10 = puVar10 + iVar9;
      puVar11 = puVar11 + iVar9;
      local_f0 = local_f0 + iVar9;
      puVar7 = puVar7 + iVar4;
    }
  }
  return;
}



// FUNCTION 144b8a5a0 FUN_144b8a5a0 body=1576 status=ok
// SIG undefined FUN_144b8a5a0(void)

void FUN_144b8a5a0(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4,uint param_5
                  ,uint param_6,int param_7,uint param_8,undefined1 *param_9)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint local_res10 [2];
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  ulonglong local_40;
  longlong local_38 [2];
  
  puVar8 = param_2 + (longlong)(int)param_8 + (ulonglong)param_5;
  iVar6 = param_5 + param_8 * 2;
  local_40 = CONCAT44(local_40._4_4_,iVar6);
  iVar3 = ((int)(param_7 + (param_7 >> 0x1f & 3U)) >> 2) * 10;
  puVar5 = param_9;
  if (((param_5 & 3) == 0) && ((param_6 & 1) == 0)) {
    if (1 < param_6) {
      local_38[0] = (longlong)iVar6 << 2;
      local_40 = (ulonglong)(param_6 >> 1);
      uVar7 = param_5 >> 2;
      do {
        do {
          uVar1 = puVar5[8];
          uVar2 = puVar5[9];
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),*puVar5,uVar1,uVar2,&local_98,local_res10,
                        &param_8);
          *param_2 = ((param_8 | 0xffffff00) << 8 | local_res10[0]) << 8 | local_98;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar5[1],uVar1,uVar2,&local_8c,&local_90,
                        &local_94);
          param_2[1] = ((local_94 | 0xffffff00) << 8 | local_90) << 8 | local_8c;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar5[2],uVar1,uVar2,&local_80,&local_84,
                        &local_88);
          param_2[2] = ((local_88 | 0xffffff00) << 8 | local_84) << 8 | local_80;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar5[3],uVar1,uVar2,&local_74,&local_78,
                        &local_7c);
          param_2[3] = ((local_7c | 0xffffff00) << 8 | local_78) << 8 | local_74;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar5[4],uVar1,uVar2,&local_68,&local_6c,
                        &local_70);
          *puVar8 = ((local_70 | 0xffffff00) << 8 | local_6c) << 8 | local_68;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar5[5],uVar1,uVar2,&local_5c,&local_60,
                        &local_64);
          puVar8[1] = ((local_64 | 0xffffff00) << 8 | local_60) << 8 | local_5c;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar5[6],uVar1,uVar2,&local_50,&local_54,
                        &local_58);
          puVar8[2] = ((local_58 | 0xffffff00) << 8 | local_54) << 8 | local_50;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar5[7],uVar1,uVar2,&local_44,&local_48,
                        &local_4c);
          param_2 = param_2 + 4;
          puVar5 = puVar5 + 10;
          puVar8[3] = ((local_4c | 0xffffff00) << 8 | local_48) << 8 | local_44;
          puVar8 = puVar8 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        param_2 = (uint *)((longlong)param_2 + local_38[0]);
        puVar5 = puVar5 + iVar3;
        puVar8 = (uint *)((longlong)puVar8 + local_38[0]);
        local_40 = local_40 - 1;
        uVar7 = param_5 >> 2;
      } while (local_40 != 0);
    }
  }
  else {
    for (; param_6 != 0; param_6 = param_6 - 2) {
      param_8 = param_5;
      if (param_5 != 0) {
        do {
          puVar4 = puVar5;
          uVar1 = puVar4[8];
          uVar2 = puVar4[9];
          if (param_8 != 1) {
            if (param_8 != 2) {
              if (param_8 != 3) {
                if (param_6 != 1) {
                  FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar4[7],uVar1,uVar2,&local_48,
                                &local_44,local_res10);
                  puVar8[3] = ((local_res10[0] | 0xffffff00) << 8 | local_44) << 8 | local_48;
                }
                FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar4[3],uVar1,uVar2,&local_54,
                              &local_50,&local_4c);
                param_2[3] = ((local_4c | 0xffffff00) << 8 | local_50) << 8 | local_54;
              }
              if (param_6 != 1) {
                FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar4[6],uVar1,uVar2,&local_60,
                              &local_5c,&local_58);
                puVar8[2] = ((local_58 | 0xffffff00) << 8 | local_5c) << 8 | local_60;
              }
              FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar4[2],uVar1,uVar2,&local_6c,
                            &local_68,&local_64);
              param_2[2] = ((local_64 | 0xffffff00) << 8 | local_68) << 8 | local_6c;
            }
            if (param_6 != 1) {
              FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar4[5],uVar1,uVar2,&local_78,
                            &local_74,&local_70);
              puVar8[1] = ((local_70 | 0xffffff00) << 8 | local_74) << 8 | local_78;
            }
            FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar4[1],uVar1,uVar2,&local_84,&local_80,
                          &local_7c);
            param_2[1] = ((local_7c | 0xffffff00) << 8 | local_80) << 8 | local_84;
          }
          if (param_6 != 1) {
            FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar4[4],uVar1,uVar2,&local_90,&local_8c,
                          &local_88);
            *puVar8 = ((local_88 | 0xffffff00) << 8 | local_8c) << 8 | local_90;
          }
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),*puVar4,uVar1,uVar2,local_38,&local_98,
                        &local_94);
          *param_2 = ((local_94 | 0xffffff00) << 8 | local_98) << 8 | (uint)local_38[0];
          if (param_8 < 4) {
            param_2 = param_2 + param_8;
            puVar8 = puVar8 + param_8;
            break;
          }
          param_8 = param_8 - 4;
          param_2 = param_2 + 4;
          puVar8 = puVar8 + 4;
          puVar5 = puVar4 + 10;
        } while (param_8 != 0);
        puVar5 = puVar4 + 10;
        iVar6 = (int)local_40;
      }
      if (param_6 < 3) {
        return;
      }
      param_2 = param_2 + iVar6;
      puVar8 = puVar8 + iVar6;
      puVar5 = puVar5 + iVar3;
    }
  }
  return;
}



// FUNCTION 144b8abd0 FUN_144b8abd0 body=749 status=ok
// SIG undefined FUN_144b8abd0(void)

void FUN_144b8abd0(longlong param_1,uint *param_2,uint param_3,undefined8 param_4,uint param_5,
                  int param_6,uint param_7,uint param_8,undefined1 *param_9)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint local_res10 [2];
  uint local_res18 [4];
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  longlong local_50;
  longlong local_48;
  
  uVar7 = param_5 & 3;
  local_58 = param_5 >> 2;
  lVar4 = (longlong)(int)param_8 << 2;
  lVar5 = (longlong)(((int)(param_7 + ((int)param_7 >> 0x1f & 3U)) >> 2) * 6);
  puVar6 = param_9;
  local_res18[0] = param_3;
  uVar3 = local_58;
  local_50 = lVar4;
  local_48 = lVar5;
  do {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar1 = puVar6[4];
      uVar2 = puVar6[5];
      FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),*puVar6,uVar1,uVar2,&param_8,&param_7,
                    local_res18);
      *param_2 = ((local_res18[0] | 0xffffff00) << 8 | param_7) << 8 | param_8;
      FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar6[1],uVar1,uVar2,&local_98,local_res10,
                    &param_9);
      param_2[1] = (((uint)param_9 | 0xffffff00) << 8 | local_res10[0]) << 8 | local_98;
      FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar6[2],uVar1,uVar2,&local_8c,&local_90,
                    &local_94);
      param_2[2] = ((local_94 | 0xffffff00) << 8 | local_90) << 8 | local_8c;
      FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar6[3],uVar1,uVar2,&local_80,&local_84,
                    &local_88);
      param_2[3] = ((local_88 | 0xffffff00) << 8 | local_84) << 8 | local_80;
      param_2 = param_2 + 4;
      lVar4 = local_50;
      lVar5 = local_48;
      puVar6 = puVar6 + 6;
    }
    if (uVar7 != 0) {
      uVar1 = puVar6[4];
      uVar2 = puVar6[5];
      if (uVar7 == 1) {
LAB_144b8ae35:
        FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),*puVar6,uVar1,uVar2,&local_5c,&local_60,
                      &local_64);
        *param_2 = ((local_64 | 0xffffff00) << 8 | local_60) << 8 | local_5c;
      }
      else {
        if (uVar7 == 2) {
LAB_144b8adef:
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar6[1],uVar1,uVar2,&local_68,&local_6c,
                        &local_70);
          param_2[1] = ((local_70 | 0xffffff00) << 8 | local_6c) << 8 | local_68;
          goto LAB_144b8ae35;
        }
        if (uVar7 == 3) {
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar6[2],uVar1,uVar2,&local_74,&local_78,
                        &local_7c);
          param_2[2] = ((local_7c | 0xffffff00) << 8 | local_78) << 8 | local_74;
          goto LAB_144b8adef;
        }
      }
      puVar6 = puVar6 + 6;
      param_2 = param_2 + (param_5 & 3);
      lVar4 = local_50;
      lVar5 = local_48;
    }
    param_2 = (uint *)((longlong)param_2 + lVar4);
    puVar6 = puVar6 + lVar5;
    param_6 = param_6 + -1;
    uVar3 = local_58;
    if (param_6 == 0) {
      return;
    }
  } while( true );
}



// FUNCTION 144b8aec0 FUN_144b8aec0 body=999 status=ok
// SIG undefined FUN_144b8aec0(void)

void FUN_144b8aec0(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4,uint param_5
                  ,uint param_6,uint param_7,uint param_8,undefined1 *param_9)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint local_res10 [2];
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  longlong local_40;
  longlong local_30;
  
  uVar6 = (ulonglong)param_5;
  puVar7 = param_2 + (longlong)(int)param_8 + uVar6;
  puVar4 = param_9;
  if (1 < param_6) {
    local_30 = (longlong)(((int)param_7 / 2) * 6);
    lVar3 = (longlong)(int)(param_5 + param_8 * 2) << 2;
    local_48 = (ulonglong)(param_6 >> 1);
    local_40 = lVar3;
    do {
      param_8 = (uint)uVar6;
      if (1 < param_8) {
        uVar6 = uVar6 >> 1;
        do {
          uVar1 = puVar4[4];
          uVar2 = puVar4[5];
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),*puVar4,uVar1,uVar2,&local_84,local_res10,
                        &param_7);
          *param_2 = ((param_7 | 0xffffff00) << 8 | local_res10[0]) << 8 | local_84;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar4[1],uVar1,uVar2,&local_78,&local_7c,
                        &local_80);
          param_2[1] = ((local_80 | 0xffffff00) << 8 | local_7c) << 8 | local_78;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar4[2],uVar1,uVar2,&local_6c,&local_70,
                        &local_74);
          *puVar7 = ((local_74 | 0xffffff00) << 8 | local_70) << 8 | local_6c;
          FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar4[3],uVar1,uVar2,&local_60,&local_64,
                        &local_68);
          param_2 = param_2 + 2;
          puVar4 = puVar4 + 6;
          puVar7[1] = ((local_68 | 0xffffff00) << 8 | local_64) << 8 | local_60;
          puVar7 = puVar7 + 2;
          param_8 = param_8 - 2;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        uVar6 = (ulonglong)param_5;
        lVar3 = local_40;
      }
      if (param_8 == 1) {
        uVar1 = puVar4[4];
        uVar2 = puVar4[5];
        FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),*puVar4,uVar1,uVar2,&local_54,&local_58,
                      &local_5c);
        *param_2 = ((local_5c | 0xffffff00) << 8 | local_58) << 8 | local_54;
        FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar4[2],uVar1,uVar2,&local_88,&local_4c,
                      &local_50);
        param_2 = param_2 + 1;
        *puVar7 = ((local_50 | 0xffffff00) << 8 | local_4c) << 8 | local_88;
        puVar7 = puVar7 + 1;
        puVar4 = puVar4 + 6;
        lVar3 = local_40;
      }
      param_2 = (uint *)((longlong)param_2 + lVar3);
      puVar4 = puVar4 + local_30;
      param_6 = param_6 - 2;
      puVar7 = (uint *)((longlong)puVar7 + lVar3);
      local_48 = local_48 - 1;
    } while (local_48 != 0);
  }
  uVar5 = (uint)uVar6;
  if (param_6 == 1) {
    if (1 < uVar5) {
      uVar8 = uVar6 >> 1;
      do {
        uVar1 = puVar4[4];
        uVar2 = puVar4[5];
        FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),*puVar4,uVar1,uVar2,&param_8,&param_5,&param_6
                     );
        *param_2 = ((param_6 | 0xffffff00) << 8 | param_5) << 8 | param_8;
        FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar4[1],uVar1,uVar2,&local_88,local_res10,
                      &param_7);
        puVar4 = puVar4 + 6;
        uVar5 = (int)uVar6 - 2;
        uVar6 = (ulonglong)uVar5;
        param_2[1] = ((param_7 | 0xffffff00) << 8 | local_res10[0]) << 8 | local_88;
        param_2 = param_2 + 2;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (uVar5 == 1) {
      FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),*puVar4,puVar4[4],puVar4[5],&param_8,&param_5,
                    &param_6);
      *param_2 = ((param_6 | 0xffffff00) << 8 | param_5) << 8 | param_8;
    }
  }
  return;
}



// FUNCTION 144b8b2b0 FUN_144b8b2b0 body=490 status=ok
// SIG undefined FUN_144b8b2b0(void)

void FUN_144b8b2b0(longlong param_1,uint *param_2,uint param_3,undefined8 param_4,uint param_5,
                  uint param_6,uint param_7,uint param_8,undefined1 *param_9)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint local_res10 [2];
  uint local_res18 [4];
  uint local_58;
  uint local_54;
  uint local_50;
  longlong local_48;
  longlong local_40;
  
  uVar8 = param_5 & 1;
  local_50 = param_5 >> 1;
  lVar6 = (longlong)(int)param_8 << 2;
  lVar5 = (longlong)((int)param_7 / 2 << 2);
  puVar4 = param_9;
  local_res18[0] = param_3;
  uVar3 = local_50;
  local_48 = lVar6;
  local_40 = lVar5;
  uVar7 = param_6;
  do {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar1 = puVar4[2];
      uVar2 = puVar4[3];
      FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),*puVar4,uVar1,uVar2,&param_5,&param_7,
                    local_res18);
      *param_2 = ((local_res18[0] | 0xffffff00) << 8 | param_7) << 8 | param_5;
      FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar4[1],uVar1,uVar2,&param_9,&param_6,&param_8
                   );
      param_2[1] = ((param_8 | 0xffffff00) << 8 | param_6) << 8 | (uint)param_9;
      param_2 = param_2 + 2;
      puVar4 = puVar4 + 4;
      lVar5 = local_40;
      lVar6 = local_48;
    }
    if (uVar8 != 0) {
      FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),*puVar4,puVar4[2],puVar4[3],&local_54,&local_58,
                    local_res10);
      *param_2 = ((local_res10[0] | 0xffffff00) << 8 | local_58) << 8 | local_54;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 4;
    }
    param_2 = (uint *)((longlong)param_2 + lVar6);
    puVar4 = puVar4 + lVar5;
    uVar7 = uVar7 - 1;
    uVar3 = local_50;
  } while (uVar7 != 0);
  return;
}



// FUNCTION 144b8b4a0 FUN_144b8b4a0 body=569 status=ok
// SIG undefined FUN_144b8b4a0(void)

void FUN_144b8b4a0(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4,uint param_5
                  ,uint param_6,uint param_7,uint param_8,undefined1 *param_9)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar7;
  uint local_res10 [2];
  uint local_58;
  uint local_54;
  ulonglong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_5;
  puVar7 = param_2 + (longlong)(int)param_8 + uVar6;
  puVar3 = param_9;
  uVar4 = param_6;
  if (1 < param_6) {
    local_48 = (longlong)(int)(param_5 + param_8 * 2) << 2;
    local_40 = (longlong)(int)(param_7 * 4);
    local_50 = (ulonglong)(param_6 >> 1);
    do {
      do {
        uVar1 = puVar3[2];
        uVar2 = puVar3[3];
        FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),*puVar3,uVar1,uVar2,&param_6,&param_7,&param_8
                     );
        *param_2 = ((param_8 | 0xffffff00) << 8 | param_7) << 8 | param_6;
        FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar3[1],uVar1,uVar2,&local_54,&local_58,
                      local_res10);
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 4;
        *puVar7 = ((local_res10[0] | 0xffffff00) << 8 | local_58) << 8 | local_54;
        puVar7 = puVar7 + 1;
        uVar5 = (int)uVar6 - 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 != 0);
      param_2 = (uint *)((longlong)param_2 + local_48);
      uVar4 = uVar4 - 2;
      puVar7 = (uint *)((longlong)puVar7 + local_48);
      puVar3 = puVar3 + local_40;
      local_50 = local_50 - 1;
      uVar6 = (ulonglong)param_5;
    } while (local_50 != 0);
    local_50 = 0;
  }
  if (uVar4 == 1) {
    puVar3 = puVar3 + 2;
    do {
      FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),puVar3[-2],*puVar3,puVar3[1],&param_7,&param_8,
                    &param_5);
      puVar3 = puVar3 + 4;
      *param_2 = ((param_5 | 0xffffff00) << 8 | param_8) << 8 | param_7;
      uVar4 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar4;
      param_2 = param_2 + 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 144b8b6e0 FUN_144b8b6e0 body=250 status=ok
// SIG undefined FUN_144b8b6e0(void)

void FUN_144b8b6e0(longlong param_1,uint *param_2,uint param_3,undefined8 param_4,int param_5,
                  int param_6,uint param_7,uint param_8,undefined1 *param_9)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  uint local_res18 [2];
  
  lVar4 = (longlong)(int)param_8;
  iVar1 = param_7 * 3;
  puVar2 = param_9;
  iVar3 = param_5;
  local_res18[0] = param_3;
  do {
    do {
      FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),*puVar2,puVar2[1],puVar2[2],&param_8,&param_7,
                    local_res18);
      puVar2 = puVar2 + 3;
      *param_2 = ((local_res18[0] | 0xffffff00) << 8 | param_7) << 8 | param_8;
      param_2 = param_2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    param_2 = param_2 + lVar4;
    puVar2 = puVar2 + iVar1;
    param_6 = param_6 + -1;
    iVar3 = param_5;
  } while (param_6 != 0);
  return;
}



// FUNCTION 144b8b7e0 FUN_144b8b7e0 body=297 status=ok
// SIG undefined FUN_144b8b7e0(void)

void FUN_144b8b7e0(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  uint param_6,int param_7,int param_8,undefined1 *param_9,undefined1 *param_10,
                  undefined1 *param_11)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint local_38;
  uint local_34;
  longlong local_30;
  
  if (param_6 != 0) {
    lVar6 = (longlong)param_7;
    local_30 = (longlong)param_8 << 2;
    puVar1 = param_9;
    puVar2 = param_10;
    puVar3 = param_11;
    iVar5 = param_5;
    uVar4 = param_6;
    do {
      do {
        FUN_144e984d0(*(undefined8 *)(param_1 + 0x68),*puVar1,*puVar2,*puVar3,&local_34,&local_38,
                      &param_6);
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
        *param_2 = ((param_6 | 0xffffff00) << 8 | local_38) << 8 | local_34;
        param_2 = param_2 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      param_2 = (uint *)((longlong)param_2 + local_30);
      puVar1 = puVar1 + lVar6;
      puVar2 = puVar2 + lVar6;
      puVar3 = puVar3 + lVar6;
      uVar4 = uVar4 - 1;
      iVar5 = param_5;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 144b8b910 FUN_144b8b910 body=329 status=ok
// SIG undefined FUN_144b8b910(void)

bool FUN_144b8b910(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  float *local_res8;
  float *local_res10 [3];
  
  if (param_1[0xd] == 0) {
    lVar2 = FUN_144e92f50(0x1830);
    param_1[0xd] = lVar2;
    if (lVar2 == 0) {
      pcVar3 = "No space for YCbCr->RGB conversion state";
      goto LAB_144b8ba3b;
    }
  }
  FUN_144b7a120(*param_1,0x211,&local_res8);
  FUN_144b7a120(*param_1,0x214,local_res10);
  if (((NAN(*local_res8)) || (local_res8[1] == 0.0)) || (NAN(local_res8[2]))) {
    pcVar3 = "Invalid values for YCbCrCoefficients tag";
  }
  else {
    if ((((-2.1474835e+09 < *local_res10[0]) && (*local_res10[0] < 2.1474836e+09)) &&
        ((-2.1474835e+09 < local_res10[0][1] &&
         ((local_res10[0][1] < 2.1474836e+09 && (-2.1474835e+09 < local_res10[0][2])))))) &&
       ((local_res10[0][2] < 2.1474836e+09 &&
        (((((-2.1474835e+09 < local_res10[0][3] && (local_res10[0][3] < 2.1474836e+09)) &&
           (-2.1474835e+09 < local_res10[0][4])) &&
          ((local_res10[0][4] < 2.1474836e+09 && (-2.1474835e+09 < local_res10[0][5])))) &&
         (local_res10[0][5] < 2.1474836e+09)))))) {
      iVar1 = FUN_144e98170(param_1[0xd]);
      return -1 < iVar1;
    }
    pcVar3 = "Invalid values for ReferenceBlackWhite tag";
  }
LAB_144b8ba3b:
  FUN_144e92fd0(*(undefined8 *)(*param_1 + 0x438),"initYCbCrConversion",pcVar3);
  return false;
}



// FUNCTION 144b8ba60 FUN_144b8ba60 body=740 status=ok
// SIG undefined FUN_144b8ba60(void)

undefined8 FUN_144b8ba60(longlong *param_1)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint uVar8;
  longlong lVar11;
  byte *pbVar12;
  longlong lVar13;
  uint uVar9;
  uint uVar10;
  
  uVar2 = *(ushort *)((longlong)param_1 + 0x1c);
  pbVar3 = (byte *)param_1[10];
  iVar4 = (int)(8 / (ulonglong)uVar2);
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  lVar5 = FUN_144e92f50((longlong)(iVar4 << 8) * 4 + 0x800,8 % (ulonglong)uVar2);
  param_1[0xb] = lVar5;
  if (lVar5 == 0) {
    uVar6 = FUN_144b775d0(*param_1);
    FUN_144e92fd0(*(undefined8 *)(*param_1 + 0x438),uVar6,"No space for B&W mapping table");
    uVar6 = 0;
  }
  else {
    puVar7 = (uint *)(lVar5 + 0x800);
    lVar11 = 0;
    lVar13 = 0x100;
    lVar5 = lVar11;
    pbVar12 = pbVar3;
    do {
      *(uint **)(lVar5 + param_1[0xb]) = puVar7;
      uVar8 = (uint)lVar11;
      uVar9 = (uint)(lVar11 >> 4);
      uVar10 = (uint)(lVar11 >> 2);
      if (uVar2 == 1) {
        bVar1 = pbVar3[lVar11 >> 7];
        *puVar7 = ((bVar1 | 0xffffff00) << 8 | (uint)bVar1) << 8 | (uint)bVar1;
        bVar1 = pbVar3[(uint)(lVar11 >> 6) & 1];
        puVar7[1] = ((bVar1 | 0xffffff00) << 8 | (uint)bVar1) << 8 | (uint)bVar1;
        bVar1 = pbVar3[(uint)(lVar11 >> 5) & 1];
        puVar7[2] = ((bVar1 | 0xffffff00) << 8 | (uint)bVar1) << 8 | (uint)bVar1;
        bVar1 = pbVar3[uVar9 & 1];
        puVar7[3] = ((bVar1 | 0xffffff00) << 8 | (uint)bVar1) << 8 | (uint)bVar1;
        bVar1 = pbVar3[(uint)(lVar11 >> 3) & 1];
        puVar7[4] = ((bVar1 | 0xffffff00) << 8 | (uint)bVar1) << 8 | (uint)bVar1;
        bVar1 = pbVar3[uVar10 & 1];
        puVar7[5] = ((bVar1 | 0xffffff00) << 8 | (uint)bVar1) << 8 | (uint)bVar1;
        bVar1 = pbVar3[(uint)(lVar11 >> 1) & 1];
        puVar7[6] = ((bVar1 | 0xffffff00) << 8 | (uint)bVar1) << 8 | (uint)bVar1;
        bVar1 = pbVar3[uVar8 & 1];
        puVar7[7] = ((bVar1 | 0xffffff00) << 8 | (uint)bVar1) << 8 | (uint)bVar1;
        puVar7 = puVar7 + 8;
      }
      else if (uVar2 == 2) {
        bVar1 = pbVar3[lVar11 >> 6];
        *puVar7 = ((bVar1 | 0xffffff00) << 8 | (uint)bVar1) << 8 | (uint)bVar1;
        bVar1 = pbVar3[uVar9 & 3];
        puVar7[1] = ((bVar1 | 0xffffff00) << 8 | (uint)bVar1) << 8 | (uint)bVar1;
        bVar1 = pbVar3[uVar10 & 3];
        puVar7[2] = ((bVar1 | 0xffffff00) << 8 | (uint)bVar1) << 8 | (uint)bVar1;
        bVar1 = pbVar3[uVar8 & 3];
        puVar7[3] = ((bVar1 | 0xffffff00) << 8 | (uint)bVar1) << 8 | (uint)bVar1;
        puVar7 = puVar7 + 4;
      }
      else if (uVar2 == 4) {
        bVar1 = pbVar3[lVar11 >> 4];
        *puVar7 = ((bVar1 | 0xffffff00) << 8 | (uint)bVar1) << 8 | (uint)bVar1;
        bVar1 = pbVar3[uVar8 & 0xf];
        puVar7[1] = ((bVar1 | 0xffffff00) << 8 | (uint)bVar1) << 8 | (uint)bVar1;
        puVar7 = puVar7 + 2;
      }
      else if ((uVar2 == 8) || (uVar2 == 0x10)) {
        bVar1 = *pbVar12;
        *puVar7 = ((bVar1 | 0xffffff00) << 8 | (uint)bVar1) << 8 | (uint)bVar1;
        puVar7 = puVar7 + 1;
      }
      lVar11 = lVar11 + 1;
      lVar5 = lVar5 + 8;
      pbVar12 = pbVar12 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 144b8bd50 FUN_144b8bd50 body=1107 status=ok
// SIG undefined FUN_144b8bd50(void)

undefined8 FUN_144b8bd50(longlong *param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar1 = *(ushort *)((longlong)param_1 + 0x1c);
  lVar2 = param_1[5];
  lVar3 = param_1[6];
  lVar4 = param_1[7];
  lVar6 = FUN_144e92f50((longlong)((int)(8 / (ulonglong)uVar1) << 8) * 4 + 0x800,
                        8 % (ulonglong)uVar1);
  param_1[0xc] = lVar6;
  if (lVar6 == 0) {
    uVar7 = FUN_144b775d0(*param_1);
    FUN_144e92fd0(*(undefined8 *)(*param_1 + 0x438),uVar7,"No space for Palette mapping table");
    uVar7 = 0;
  }
  else {
    puVar8 = (uint *)(lVar6 + 0x800);
    uVar10 = 0;
    lVar6 = 0;
    do {
      *(uint **)(lVar6 + param_1[0xc]) = puVar8;
      if (uVar1 == 1) {
        lVar5 = (ulonglong)((uVar10 & 0xff) >> 7) * 2;
        *puVar8 = ((*(ushort *)(lVar5 + lVar4) | 0xffffff00) << 8 |
                  (uint)(byte)*(undefined2 *)(lVar5 + lVar3)) << 8 |
                  (uint)(byte)*(undefined2 *)(lVar5 + lVar2);
        lVar5 = (ulonglong)((int)uVar10 >> 6 & 1) * 2;
        puVar8[1] = ((*(ushort *)(lVar5 + lVar4) | 0xffffff00) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar5 + lVar3)) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar5 + lVar2);
        lVar5 = (ulonglong)((int)uVar10 >> 5 & 1) * 2;
        puVar8[2] = ((*(ushort *)(lVar5 + lVar4) | 0xffffff00) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar5 + lVar3)) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar5 + lVar2);
        lVar5 = (ulonglong)((int)uVar10 >> 4 & 1) * 2;
        puVar8[3] = ((*(ushort *)(lVar5 + lVar4) | 0xffffff00) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar5 + lVar3)) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar5 + lVar2);
        lVar5 = (ulonglong)((int)uVar10 >> 3 & 1) * 2;
        puVar8[4] = ((*(ushort *)(lVar5 + lVar4) | 0xffffff00) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar5 + lVar3)) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar5 + lVar2);
        lVar5 = (ulonglong)((int)uVar10 >> 2 & 1) * 2;
        uVar9 = (ulonglong)(uVar10 & 1);
        puVar8[5] = ((*(ushort *)(lVar5 + lVar4) | 0xffffff00) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar5 + lVar3)) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar5 + lVar2);
        lVar5 = (ulonglong)((int)uVar10 >> 1 & 1) * 2;
        puVar8[6] = ((*(ushort *)(lVar5 + lVar4) | 0xffffff00) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar5 + lVar3)) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar5 + lVar2);
        puVar8[7] = ((*(ushort *)(lVar4 + uVar9 * 2) | 0xffffff00) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar3 + uVar9 * 2)) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar2 + uVar9 * 2);
        puVar8 = puVar8 + 8;
      }
      else if (uVar1 == 2) {
        uVar9 = (ulonglong)(uVar10 & 3);
        lVar5 = (ulonglong)((uVar10 & 0xff) >> 6) * 2;
        *puVar8 = ((*(ushort *)(lVar5 + lVar4) | 0xffffff00) << 8 |
                  (uint)(byte)*(undefined2 *)(lVar5 + lVar3)) << 8 |
                  (uint)(byte)*(undefined2 *)(lVar5 + lVar2);
        lVar5 = (ulonglong)((int)uVar10 >> 4 & 3) * 2;
        puVar8[1] = ((*(ushort *)(lVar5 + lVar4) | 0xffffff00) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar5 + lVar3)) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar5 + lVar2);
        lVar5 = (ulonglong)((int)uVar10 >> 2 & 3) * 2;
        puVar8[2] = ((*(ushort *)(lVar5 + lVar4) | 0xffffff00) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar5 + lVar3)) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar5 + lVar2);
        puVar8[3] = ((*(ushort *)(lVar4 + uVar9 * 2) | 0xffffff00) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar3 + uVar9 * 2)) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar2 + uVar9 * 2);
        puVar8 = puVar8 + 4;
      }
      else if (uVar1 == 4) {
        uVar9 = (ulonglong)(uVar10 & 0xf);
        lVar5 = (ulonglong)((uVar10 & 0xff) >> 4) * 2;
        *puVar8 = ((*(ushort *)(lVar5 + lVar4) | 0xffffff00) << 8 |
                  (uint)(byte)*(undefined2 *)(lVar5 + lVar3)) << 8 |
                  (uint)(byte)*(undefined2 *)(lVar5 + lVar2);
        puVar8[1] = ((*(ushort *)(lVar4 + uVar9 * 2) | 0xffffff00) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar3 + uVar9 * 2)) << 8 |
                    (uint)(byte)*(undefined2 *)(lVar2 + uVar9 * 2);
        puVar8 = puVar8 + 2;
      }
      else if (uVar1 == 8) {
        lVar5 = (ulonglong)(uVar10 & 0xff) * 2;
        *puVar8 = ((*(ushort *)(lVar5 + lVar4) | 0xffffff00) << 8 |
                  (uint)(byte)*(undefined2 *)(lVar5 + lVar3)) << 8 |
                  (uint)(byte)*(undefined2 *)(lVar5 + lVar2);
        puVar8 = puVar8 + 1;
      }
      uVar10 = uVar10 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar10 < 0x100);
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 144b8c1b0 FUN_144b8c1b0 body=553 status=ok
// SIG undefined FUN_144b8c1b0(void)

undefined8 FUN_144b8c1b0(longlong *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  ushort *puVar7;
  longlong lVar8;
  ushort *puVar9;
  ushort *puVar10;
  longlong lVar11;
  
  switch(*(undefined2 *)((longlong)param_1 + 0x24)) {
  case 2:
  case 5:
  case 6:
    if (*(short *)((longlong)param_1 + 0x1c) == 8) {
      return 1;
    }
  case 0:
  case 1:
    iVar3 = (1 << ((byte)*(short *)((longlong)param_1 + 0x1c) & 0x1f)) + -1;
    if (*(short *)((longlong)param_1 + 0x1c) == 0x10) {
      iVar3 = 0xff;
    }
    lVar8 = (longlong)(iVar3 + 1);
    lVar4 = FUN_144e92f50(lVar8);
    param_1[10] = lVar4;
    if (lVar4 == 0) {
      uVar5 = FUN_144b775d0(*param_1);
      FUN_144e92fd0(*(undefined8 *)(*param_1 + 0x438),uVar5,
                    "No space for photometric conversion table");
      return 0;
    }
    if (*(short *)((longlong)param_1 + 0x24) == 0) {
      if (-1 < iVar3) {
        lVar4 = 0;
        iVar6 = iVar3 * 0xff;
        do {
          *(char *)(lVar4 + param_1[10]) = (char)(iVar6 / iVar3);
          lVar4 = lVar4 + 1;
          iVar6 = iVar6 + -0xff;
        } while (lVar4 <= iVar3);
      }
    }
    else if (-1 < iVar3) {
      lVar4 = 0;
      iVar6 = 0;
      do {
        *(char *)(lVar4 + param_1[10]) = (char)(iVar6 / iVar3);
        lVar8 = lVar8 + -1;
        lVar4 = lVar4 + 1;
        iVar6 = iVar6 + 0xff;
      } while (lVar8 != 0);
    }
    if (0x10 < *(ushort *)((longlong)param_1 + 0x1c)) {
      return 1;
    }
    if (1 < *(ushort *)((longlong)param_1 + 0x24)) {
      return 1;
    }
    iVar3 = FUN_144b8ba60(param_1);
    if (iVar3 != 0) {
      free((void *)param_1[10]);
      param_1[10] = 0;
      return 1;
    }
    return 0;
  case 3:
    puVar2 = (ushort *)param_1[6];
    iVar3 = 1 << (*(byte *)((longlong)param_1 + 0x1c) & 0x1f);
    puVar7 = (ushort *)param_1[5];
    puVar9 = puVar2;
    puVar10 = (ushort *)param_1[7];
    iVar6 = iVar3;
    break;
  default:
    return 1;
  }
  do {
    if (iVar6 < 1) {
      uVar5 = FUN_144b775d0(*param_1);
      FUN_144e94570(*(undefined8 *)(*param_1 + 0x438),uVar5,"Assuming 8-bit colormap");
      goto LAB_144b8c36f;
    }
    uVar1 = *puVar7;
    puVar7 = puVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (((uVar1 < 0x100) && (uVar1 = *puVar9, puVar9 = puVar9 + 1, uVar1 < 0x100)) &&
          (uVar1 = *puVar10, puVar10 = puVar10 + 1, uVar1 < 0x100));
  iVar3 = iVar3 + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    lVar8 = param_1[5] - (longlong)puVar2;
    puVar7 = puVar2 + lVar4;
    lVar11 = param_1[7] - (longlong)puVar2;
    do {
      lVar4 = lVar4 + -1;
      *(ushort *)(lVar8 + (longlong)puVar7) = (ushort)*(byte *)(lVar8 + 1 + (longlong)puVar7);
      *puVar7 = (ushort)*(byte *)((longlong)puVar7 + 1);
      *(ushort *)(lVar11 + (longlong)puVar7) = (ushort)*(byte *)(lVar11 + 1 + (longlong)puVar7);
      puVar7 = puVar7 + -1;
    } while (-1 < lVar4);
  }
LAB_144b8c36f:
  if (8 < *(ushort *)((longlong)param_1 + 0x1c)) {
    return 1;
  }
  iVar3 = FUN_144b8bd50(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  return 1;
}



// FUNCTION 144b8c400 FUN_144b8c400 body=262 status=ok
// SIG undefined FUN_144b8c400(void)

void FUN_144b8c400(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = 4;
  if (param_3 < 0x400001) {
    uVar4 = 9;
  }
  puVar1 = (undefined8 *)FUN_144b52940(8,uVar4);
  local_98 = *puVar1;
  uStack_90 = puVar1[1];
  local_88 = puVar1[2];
  local_78 = puVar1[4];
  local_68 = puVar1[6];
  uStack_60 = puVar1[7];
  local_58 = *(undefined4 *)(puVar1 + 8);
  uStack_54 = *(undefined4 *)((longlong)puVar1 + 0x44);
  uStack_50 = *(undefined4 *)(puVar1 + 9);
  uStack_4c = *(undefined4 *)((longlong)puVar1 + 0x4c);
  local_48 = puVar1[10];
  _uStack_80 = CONCAT44((int)((ulonglong)puVar1[3] >> 0x20),0x10);
  uStack_70 = puVar1[5] & 0xffffffff00000000;
  uVar2 = FUN_144b52c40(DAT_14c6d9874,param_3);
  uVar2 = (*(code *)PTR_malloc_14c6d9888)(uVar2);
  local_a0 = 0;
  local_a8 = 0;
  local_c0 = &local_98;
  local_b0 = 0;
  local_b8 = 0;
  local_c8 = uVar4;
  uVar3 = FUN_144b50c80(DAT_14c6d9874,param_2,param_3,uVar2);
  param_1[1] = uVar3;
  *param_1 = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_e8);
}



// FUNCTION 144b8c520 FUN_144b8c520 body=70 status=ok
// SIG undefined FUN_144b8c520(void)

void FUN_144b8c520(void)

{
  FUN_144b513e0();
  return;
}



// FUNCTION 144b8c570 FUN_144b8c570 body=138 status=ok
// SIG undefined FUN_144b8c570(void)

size_t FUN_144b8c570(longlong *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (*(code *)PTR_realloc_14c6d9898)(*param_1,param_1[2] + param_3);
  if (lVar2 == 0) {
    (*(code *)PTR_free_14c6d9890)(*param_1);
    param_1[2] = 0;
    return 0;
  }
  lVar1 = *param_1;
  *param_1 = lVar2;
  param_1[1] = (param_1[1] - lVar1) + lVar2;
  memcpy((void *)(lVar2 + param_1[2]),param_2,param_3);
  param_1[2] = param_1[2] + param_3;
  return param_3;
}



// FUNCTION 144b8c600 FUN_144b8c600 body=112 status=ok
// SIG undefined FUN_144b8c600(void)

size_t FUN_144b8c600(longlong *param_1,void *param_2,size_t param_3)

{
  size_t _Size;
  size_t sVar1;
  
  sVar1 = param_1[2] - (param_1[1] - *param_1);
  _Size = param_3;
  if ((longlong)sVar1 < (longlong)param_3) {
    _Size = sVar1;
  }
  memcpy(param_2,(void *)param_1[1],_Size);
  memset((void *)(_Size + (longlong)param_2),0,param_3 - _Size);
  param_1[1] = param_1[1] + _Size;
  return _Size;
}



// FUNCTION 144b8c690 malloc body=5 status=ok
// SIG void * malloc(size_t _Size)

void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = malloc(_Size);
  return pvVar1;
}



// FUNCTION 144b8c6a0 free body=5 status=ok
// SIG void free(void * _Memory)

void __cdecl free(void *_Memory)

{
  free(_Memory);
  return;
}



// FUNCTION 144b8c6b0 realloc body=5 status=ok
// SIG void * realloc(void * _Memory, size_t _NewSize)

void * __cdecl realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  
  pvVar1 = realloc(_Memory,_NewSize);
  return pvVar1;
}



// FUNCTION 144b8c6c0 FUN_144b8c6c0 body=24 status=ok
// SIG undefined FUN_144b8c6c0(void)

void FUN_144b8c6c0(undefined8 *param_1)

{
  PTR_malloc_14c6d9888 = (undefined *)*param_1;
  PTR_free_14c6d9890 = (undefined *)param_1[1];
  PTR_realloc_14c6d9898 = (undefined *)param_1[2];
  return;
}



// FUNCTION 144b8c6e0 FUN_144b8c6e0 body=459 status=ok
// SIG undefined FUN_144b8c6e0(void)

void FUN_144b8c6e0(undefined8 *param_1,longlong param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_c78 [32];
  undefined4 local_c58;
  undefined1 local_c48 [2304];
  undefined1 local_348 [16];
  undefined8 local_338;
  undefined4 local_318;
  undefined4 local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  undefined1 local_268 [520];
  longlong local_60 [9];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c78;
  *(undefined4 *)param_1 = 0;
  memset((undefined4 *)((longlong)param_1 + 4),0,0x8f4);
  local_280 = param_2 + param_3;
  local_338 = 0;
  local_318 = 0;
  local_290 = 0;
  local_288 = param_2;
  local_278 = param_2;
  local_270 = local_280;
  iVar5 = FUN_144b95a70(local_348,local_268);
  if (iVar5 == 0) {
    *(undefined4 *)param_1 = 1;
  }
  else {
    puVar6 = (undefined8 *)(*(code *)PTR_malloc_14c6d9888)();
    if (puVar6 == (undefined8 *)0x0) {
      *(undefined4 *)param_1 = 6;
    }
    else {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      local_c58 = param_4;
      puVar6 = (undefined8 *)FUN_144b95f90(local_c48,&PTR_FUN_149975fa0,puVar6,local_268);
      lVar8 = 0x11;
      do {
        puVar9 = param_1;
        puVar7 = puVar6;
        uVar4 = puVar7[1];
        *puVar9 = *puVar7;
        puVar9[1] = uVar4;
        uVar4 = puVar7[3];
        puVar9[2] = puVar7[2];
        puVar9[3] = uVar4;
        uVar4 = puVar7[5];
        puVar9[4] = puVar7[4];
        puVar9[5] = uVar4;
        uVar4 = puVar7[7];
        puVar9[6] = puVar7[6];
        puVar9[7] = uVar4;
        uVar4 = puVar7[9];
        puVar9[8] = puVar7[8];
        puVar9[9] = uVar4;
        uVar4 = puVar7[0xb];
        puVar9[10] = puVar7[10];
        puVar9[0xb] = uVar4;
        uVar4 = puVar7[0xd];
        puVar9[0xc] = puVar7[0xc];
        puVar9[0xd] = uVar4;
        uVar4 = puVar7[0xf];
        puVar9[0xe] = puVar7[0xe];
        puVar9[0xf] = uVar4;
        lVar8 = lVar8 + -1;
        puVar6 = puVar7 + 0x10;
        param_1 = puVar9 + 0x10;
      } while (lVar8 != 0);
      uVar4 = puVar7[0x11];
      plVar10 = local_60;
      lVar8 = 4;
      puVar9[0x10] = puVar7[0x10];
      puVar9[0x11] = uVar4;
      uVar4 = puVar7[0x13];
      puVar9[0x12] = puVar7[0x12];
      puVar9[0x13] = uVar4;
      uVar4 = puVar7[0x15];
      puVar9[0x14] = puVar7[0x14];
      puVar9[0x15] = uVar4;
      uVar4 = puVar7[0x17];
      puVar9[0x16] = puVar7[0x16];
      puVar9[0x17] = uVar4;
      uVar4 = puVar7[0x19];
      puVar9[0x18] = puVar7[0x18];
      puVar9[0x19] = uVar4;
      uVar4 = puVar7[0x1b];
      puVar9[0x1a] = puVar7[0x1a];
      puVar9[0x1b] = uVar4;
      uVar1 = *(undefined4 *)((longlong)puVar7 + 0xe4);
      uVar2 = *(undefined4 *)(puVar7 + 0x1d);
      uVar3 = *(undefined4 *)((longlong)puVar7 + 0xec);
      *(undefined4 *)(puVar9 + 0x1c) = *(undefined4 *)(puVar7 + 0x1c);
      *(undefined4 *)((longlong)puVar9 + 0xe4) = uVar1;
      *(undefined4 *)(puVar9 + 0x1d) = uVar2;
      *(undefined4 *)((longlong)puVar9 + 0xec) = uVar3;
      puVar9[0x1e] = puVar7[0x1e];
      do {
        if (*plVar10 != 0) {
          (*(code *)PTR_free_14c6d9890)();
        }
        plVar10 = plVar10 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_c78);
}



// FUNCTION 144b8c8d0 FUN_144b8c8d0 body=286 status=ok
// SIG undefined FUN_144b8c8d0(void)

int FUN_144b8c8d0(int *param_1,int param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  void *_Dst;
  int *piVar5;
  undefined1 *puVar6;
  longlong lVar7;
  int iVar8;
  undefined1 local_18 [16];
  
  iVar8 = *param_1;
  if (((iVar8 == 0) && (-1 < param_2)) && (param_2 < param_1[1])) {
    iVar8 = 0;
    lVar7 = (longlong)param_2;
    lVar2 = *(longlong *)(param_1 + lVar7 * 0x1a + 0xb2);
    puVar1 = (undefined1 *)(lVar2 + param_1[lVar7 * 0x1a + 0xb7]);
    if (0 < param_1[lVar7 * 0x1a + 0xb7]) {
      puVar4 = puVar1;
      puVar6 = *(undefined1 **)(param_1 + lVar7 * 0x1a + 0xb0);
      do {
        puVar4[lVar2 - (longlong)puVar1] = *puVar6;
        iVar8 = iVar8 + 1;
        *puVar4 = puVar6[1];
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 2;
      } while (iVar8 < param_1[lVar7 * 0x1a + 0xb7]);
    }
    if ((*(byte *)(param_1 + 6) & 1) != 0) {
      _Dst = (void *)(*(code *)PTR_malloc_14c6d9888)((longlong)(param_1[lVar7 * 0x1a + 0xb7] * 2));
      iVar8 = param_1[lVar7 * 0x1a + 0xb7];
      *(void **)(param_1 + lVar7 * 0x1a + 0xb4) = _Dst;
      param_1[(lVar7 + 7) * 0x1a] = iVar8 * 2;
      memcpy(_Dst,*(void **)(param_1 + lVar7 * 0x1a + 0xb2),(longlong)(iVar8 * 2));
      return 0;
    }
    piVar5 = (int *)(*(code *)PTR_FUN_14c6d9878)
                              (local_18,*(undefined8 *)(param_1 + lVar7 * 0x1a + 0xb2),
                               (longlong)(param_1[lVar7 * 0x1a + 0xb7] * 2));
    iVar8 = piVar5[1];
    iVar3 = piVar5[2];
    param_1[lVar7 * 0x1a + 0xb4] = *piVar5;
    param_1[lVar7 * 0x1a + 0xb5] = iVar8;
    iVar8 = 0;
    param_1[(lVar7 + 7) * 0x1a] = iVar3;
  }
  return iVar8;
}



// FUNCTION 144b8c9f0 FUN_144b8c9f0 body=76 status=ok
// SIG undefined FUN_144b8c9f0(void)

undefined4 FUN_144b8c9f0(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  FUN_144b96480();
  *param_2 = **(undefined8 **)(param_1 + 4);
  *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 4) + 0x10);
  (*(code *)PTR_free_14c6d9890)(*(undefined8 *)(param_1 + 4));
  return *param_1;
}



// FUNCTION 144b8ca40 FUN_144b8ca40 body=287 status=ok
// SIG undefined FUN_144b8ca40(void)

undefined8 *
FUN_144b8ca40(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 local_b08 [2816];
  
  *(undefined4 *)param_1 = 0;
  memset((undefined4 *)((longlong)param_1 + 4),0,0xafc);
  puVar2 = (undefined8 *)(*(code *)PTR_malloc_14c6d9888)(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined4 *)param_1 = 6;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2 = (undefined8 *)
             FUN_144b8cb60(local_b08,&PTR_FUN_149975fa0,puVar2,param_2,param_3,param_4,param_5,
                           param_6,param_7);
    lVar4 = 0x16;
    puVar3 = param_1;
    do {
      uVar1 = puVar2[1];
      *puVar3 = *puVar2;
      puVar3[1] = uVar1;
      uVar1 = puVar2[3];
      puVar3[2] = puVar2[2];
      puVar3[3] = uVar1;
      uVar1 = puVar2[5];
      puVar3[4] = puVar2[4];
      puVar3[5] = uVar1;
      uVar1 = puVar2[7];
      puVar3[6] = puVar2[6];
      puVar3[7] = uVar1;
      uVar1 = puVar2[9];
      puVar3[8] = puVar2[8];
      puVar3[9] = uVar1;
      uVar1 = puVar2[0xb];
      puVar3[10] = puVar2[10];
      puVar3[0xb] = uVar1;
      uVar1 = puVar2[0xd];
      puVar3[0xc] = puVar2[0xc];
      puVar3[0xd] = uVar1;
      uVar1 = puVar2[0xf];
      puVar3[0xe] = puVar2[0xe];
      puVar3[0xf] = uVar1;
      lVar4 = lVar4 + -1;
      puVar2 = puVar2 + 0x10;
      puVar3 = puVar3 + 0x10;
    } while (lVar4 != 0);
  }
  return param_1;
}



// FUNCTION 144b8cb60 FUN_144b8cb60 body=1542 status=ok
// SIG undefined FUN_144b8cb60(void)

void FUN_144b8cb60(int *param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                  int param_6,undefined8 param_7,int param_8,int param_9)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float *pfVar12;
  undefined2 *puVar13;
  int *piVar14;
  undefined2 uVar15;
  float *pfVar16;
  int *piVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined2 auStack_8f0 [64];
  undefined2 auStack_870 [16];
  undefined *puStack_850;
  undefined1 auStack_848 [32];
  undefined1 local_828 [1712];
  ushort local_178 [64];
  ushort local_f8 [64];
  ulonglong local_78;
  
  local_78 = DAT_14c707940 ^ (ulonglong)auStack_848;
  lVar20 = 0;
  *param_1 = 0;
  puStack_850 = (undefined *)0x144b8cbca;
  memset(param_1 + 1,0,0xafc);
  lVar22 = (longlong)param_6;
  *(undefined8 *)(param_1 + 10) = param_7;
  param_1[0xc] = param_9;
  *(undefined8 *)(param_1 + 2) = param_2;
  iVar9 = 0x5a;
  if (param_8 != 0) {
    iVar9 = param_8;
  }
  *(undefined8 *)(param_1 + 4) = param_3;
  param_1[6] = param_4;
  param_1[7] = param_5;
  param_1[8] = param_6;
  lVar19 = lVar20;
  lVar21 = lVar20;
  if (iVar9 < 1) {
    iVar9 = 5000;
  }
  else {
    if (100 < iVar9) {
      iVar9 = 100;
    }
    if (iVar9 < 0x32) {
      iVar9 = (int)(5000 / (longlong)iVar9);
    }
    else {
      iVar9 = (100 - iVar9) * 2;
    }
  }
  do {
    iVar6 = (*(int *)((longlong)&DAT_149975d80 + lVar19) * iVar9 + 0x32) / 100;
    if (iVar6 < 1) {
      uVar15 = 1;
    }
    else {
      uVar15 = (undefined2)iVar6;
      if (0xffff < iVar6) {
        uVar15 = 0xffff;
      }
    }
    iVar6 = *(int *)((longlong)&DAT_149975e80 + lVar19);
    *(undefined2 *)((longlong)local_178 + lVar21) = uVar15;
    iVar6 = (iVar6 * iVar9 + 0x32) / 100;
    if (iVar6 < 1) {
      uVar15 = 1;
    }
    else {
      uVar15 = (undefined2)iVar6;
      if (0xffff < iVar6) {
        uVar15 = 0xffff;
      }
    }
    *(undefined2 *)((longlong)local_f8 + lVar21) = uVar15;
    lVar19 = lVar19 + 4;
    lVar21 = lVar21 + 2;
  } while (lVar19 < 0x100);
  pfVar16 = (float *)&DAT_149975f80;
  pfVar12 = (float *)(param_1 + 0x280);
  do {
    fVar1 = *pfVar16;
    uVar2 = *(ushort *)((longlong)local_f8 + lVar20);
    uVar3 = *(ushort *)((longlong)local_178 + lVar20 + 2);
    pfVar12[-0x40] = 1.0 / ((float)*(ushort *)((longlong)local_178 + lVar20) * fVar1 * 2.828427);
    uVar4 = *(ushort *)((longlong)local_f8 + lVar20 + 2);
    *pfVar12 = 1.0 / ((float)uVar2 * fVar1 * 2.828427);
    uVar2 = *(ushort *)((longlong)local_178 + lVar20 + 4);
    pfVar12[-0x3f] = 1.0 / ((float)uVar3 * fVar1 * 3.9231412);
    uVar3 = *(ushort *)((longlong)local_f8 + lVar20 + 4);
    pfVar12[1] = 1.0 / ((float)uVar4 * fVar1 * 3.9231412);
    uVar4 = *(ushort *)((longlong)local_178 + lVar20 + 6);
    pfVar12[-0x3e] = 1.0 / ((float)uVar2 * fVar1 * 3.6955183);
    uVar2 = *(ushort *)((longlong)local_f8 + lVar20 + 6);
    pfVar12[2] = 1.0 / ((float)uVar3 * fVar1 * 3.6955183);
    uVar3 = *(ushort *)((longlong)local_178 + lVar20 + 8);
    pfVar12[-0x3d] = 1.0 / ((float)uVar4 * fVar1 * 3.3258781);
    uVar4 = *(ushort *)((longlong)local_f8 + lVar20 + 8);
    pfVar12[3] = 1.0 / ((float)uVar2 * fVar1 * 3.3258781);
    pfVar12[-0x3c] = 1.0 / ((float)uVar3 * fVar1 * 2.828427);
    pfVar12[4] = 1.0 / ((float)uVar4 * fVar1 * 2.828427);
    pfVar16 = pfVar16 + 1;
    uVar2 = *(ushort *)((longlong)local_f8 + lVar20 + 10);
    uVar3 = *(ushort *)((longlong)local_178 + lVar20 + 0xc);
    pfVar12[-0x3b] =
         1.0 / ((float)*(ushort *)((longlong)local_178 + lVar20 + 10) * fVar1 * 2.222281);
    uVar4 = *(ushort *)((longlong)local_f8 + lVar20 + 0xc);
    pfVar12[5] = 1.0 / ((float)uVar2 * fVar1 * 2.222281);
    uVar2 = *(ushort *)((longlong)local_178 + lVar20 + 0xe);
    pfVar12[-0x3a] = 1.0 / ((float)uVar3 * fVar1 * 1.5307337);
    uVar3 = *(ushort *)((longlong)local_f8 + lVar20 + 0xe);
    pfVar12[6] = 1.0 / ((float)uVar4 * fVar1 * 1.5307337);
    pfVar12[-0x39] = 1.0 / ((float)uVar2 * fVar1 * 0.7803613);
    pfVar12[7] = 1.0 / ((float)uVar3 * fVar1 * 0.7803613);
    pfVar12 = pfVar12 + 8;
    lVar20 = lVar20 + 0x10;
  } while ((longlong)pfVar16 < 0x149975fa0);
  *(undefined2 *)(param_1 + 0x23e) = 1;
  piVar17 = param_1 + 0x1de;
  lVar20 = 0x40;
  do {
    uVar15 = *(undefined2 *)(((longlong)auStack_8f0 - (longlong)param_1) + (longlong)piVar17);
    uVar5 = *(undefined2 *)(((longlong)auStack_870 - (longlong)param_1) + (longlong)piVar17);
    *(undefined2 *)(piVar17 + -0x20) = uVar15;
    *(undefined2 *)piVar17 = uVar5;
    *(undefined2 *)(piVar17 + 0x20) = uVar5;
    *(undefined2 *)(piVar17 + 0x40) = uVar15;
    piVar17 = (int *)((longlong)piVar17 + 2);
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  *(undefined4 *)((longlong)param_1 + 0x8fa) = 0x3020100;
  if (0 < param_6) {
    puVar13 = (undefined2 *)((longlong)param_1 + 0x6ea);
    do {
      puVar13[-1] = (short)((int)((param_4 + 7 >> 0x1f & 7U) + param_4 + 7) >> 3);
      *puVar13 = (short)((int)(param_5 + 7 + (param_5 + 7 >> 0x1f & 7U)) >> 3);
      puVar13 = puVar13 + 2;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  lVar20 = 0x10;
  iVar9 = (int)(param_1[7] + 0xff + (param_1[7] + 0xff >> 0x1f & 0xffU)) >> 8;
  if (0x10 < iVar9) {
    iVar9 = 0x10;
  }
  param_1[0xd] = iVar9;
  puStack_850 = (undefined *)0x144b8d093;
  puVar10 = (undefined8 *)FUN_144b95d50(local_828,iVar9,param_1 + 0x1ba);
  lVar22 = 0xd;
  piVar17 = param_1 + 0xe;
  do {
    piVar14 = piVar17;
    puVar11 = puVar10;
    uVar8 = puVar11[1];
    *(undefined8 *)piVar14 = *puVar11;
    *(undefined8 *)(piVar14 + 2) = uVar8;
    uVar8 = puVar11[3];
    *(undefined8 *)(piVar14 + 4) = puVar11[2];
    *(undefined8 *)(piVar14 + 6) = uVar8;
    uVar8 = puVar11[5];
    *(undefined8 *)(piVar14 + 8) = puVar11[4];
    *(undefined8 *)(piVar14 + 10) = uVar8;
    uVar8 = puVar11[7];
    *(undefined8 *)(piVar14 + 0xc) = puVar11[6];
    *(undefined8 *)(piVar14 + 0xe) = uVar8;
    uVar8 = puVar11[9];
    *(undefined8 *)(piVar14 + 0x10) = puVar11[8];
    *(undefined8 *)(piVar14 + 0x12) = uVar8;
    uVar8 = puVar11[0xb];
    *(undefined8 *)(piVar14 + 0x14) = puVar11[10];
    *(undefined8 *)(piVar14 + 0x16) = uVar8;
    uVar8 = puVar11[0xd];
    *(undefined8 *)(piVar14 + 0x18) = puVar11[0xc];
    *(undefined8 *)(piVar14 + 0x1a) = uVar8;
    uVar8 = puVar11[0xf];
    *(undefined8 *)(piVar14 + 0x1c) = puVar11[0xe];
    *(undefined8 *)(piVar14 + 0x1e) = uVar8;
    lVar22 = lVar22 + -1;
    puVar10 = puVar11 + 0x10;
    piVar17 = piVar14 + 0x20;
  } while (lVar22 != 0);
  uVar8 = puVar11[0x11];
  *(undefined8 *)(piVar14 + 0x20) = puVar11[0x10];
  *(undefined8 *)(piVar14 + 0x22) = uVar8;
  uVar8 = puVar11[0x13];
  *(undefined8 *)(piVar14 + 0x24) = puVar11[0x12];
  *(undefined8 *)(piVar14 + 0x26) = uVar8;
  iVar9 = *(int *)((longlong)puVar11 + 0xa4);
  iVar6 = *(int *)(puVar11 + 0x15);
  iVar7 = *(int *)((longlong)puVar11 + 0xac);
  piVar14[0x28] = *(int *)(puVar11 + 0x14);
  piVar14[0x29] = iVar9;
  piVar14[0x2a] = iVar6;
  piVar14[0x2b] = iVar7;
  iVar9 = param_1[0xe];
  if (iVar9 == 0) {
    param_1[1] = param_1[0xd];
  }
  else {
    *param_1 = iVar9;
    plVar18 = (longlong *)(param_1 + 0x2e);
    do {
      if (plVar18[-1] != 0) {
        puStack_850 = (undefined *)0x144b8d124;
        (*(code *)PTR_free_14c6d9890)();
      }
      if (*plVar18 != 0) {
        puStack_850 = (undefined *)0x144b8d132;
        (*(code *)PTR_free_14c6d9890)();
      }
      if (plVar18[1] != 0) {
        puStack_850 = (undefined *)0x144b8d141;
        (*(code *)PTR_free_14c6d9890)();
      }
      plVar18 = plVar18 + 0xd;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
                    /* WARNING: Subroutine does not return */
  puStack_850 = &UNK_144b8d166;
  FUN_144d8e3a0(local_78 ^ (ulonglong)auStack_848);
}



// FUNCTION 144b8d1b0 FUN_144b8d1b0 body=2866 status=ok
// SIG undefined FUN_144b8d1b0(void)

void FUN_144b8d1b0(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  void *_Dst;
  int *piVar6;
  int iVar7;
  short *psVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_9d8 [32];
  int local_9b8;
  undefined4 local_9b4;
  int local_9b0;
  int local_9ac;
  int local_9a8;
  int local_9a4;
  int local_9a0;
  int local_99c;
  int local_998;
  int local_994;
  int local_990;
  int local_98c;
  int local_988;
  int local_984;
  int local_980;
  int local_97c;
  int local_978;
  int local_974;
  int local_970;
  ulonglong local_968;
  int *local_960;
  int *local_958;
  longlong local_950;
  longlong local_948;
  longlong local_940;
  longlong local_938;
  longlong local_930;
  longlong local_928;
  longlong local_920;
  int *local_918;
  longlong local_910;
  longlong local_908;
  longlong local_900 [3];
  float local_8e8 [64];
  float local_7e8 [64];
  float local_6e8 [64];
  float local_5e8 [64];
  short local_4e8 [128];
  short local_3e8 [128];
  short local_2e8 [128];
  short local_1e8 [128];
  ulonglong local_e8;
  
  local_e8 = DAT_14c707940 ^ (ulonglong)auStack_9d8;
  local_918 = param_1;
  if (*param_1 == 0) {
    lVar4 = *(longlong *)(param_1 + 10);
    iVar2 = param_1[6];
    iVar13 = param_1[8];
    iVar3 = param_1[7];
    lVar17 = (longlong)iVar3;
    local_900[0] = (longlong)param_2;
    local_908 = local_900[0] * 0x68;
    local_994 = 0;
    lVar18 = *(longlong *)(param_1 + local_900[0] * 0x1a + 0x2c);
    iVar14 = param_1[local_900[0] * 0x1a + 0x26] * param_1[local_900[0] * 0x1a + 0x22];
    lVar15 = lVar18 + (longlong)(iVar14 * 0x40) * 2;
    local_948 = lVar18 + (longlong)(iVar14 * 0x80) * 2;
    local_940 = lVar18 + (longlong)(iVar14 * 0xc0) * 2;
    local_9a0 = param_1[local_900[0] * 0x1a + 0x1a] * 8;
    iVar5 = param_1[local_900[0] * 0x1a + 0x1e] << 3;
    local_990 = iVar5;
    local_970 = iVar14;
    local_950 = lVar15;
    local_910 = lVar18;
    if (local_9a0 < iVar5) {
      local_99c = local_9a0 + 8;
      local_998 = local_9a0 * iVar2;
      local_9b4 = 0x80;
      do {
        local_9b0 = 0;
        if (0 < iVar2) {
          local_958 = param_1 + 0x240;
          local_960 = param_1 + 0x280;
          local_9a4 = 2 - iVar2;
          local_928 = lVar18 - lVar15;
          lVar16 = local_940 - lVar15;
          local_920 = local_948 - lVar15;
          lVar19 = (longlong)iVar14 * 2;
          local_9ac = local_9a4 * iVar13;
          local_9a8 = iVar2 + -2;
          local_938 = lVar19;
          local_930 = lVar16;
          do {
            iVar14 = local_9b0;
            lVar15 = 0;
            if (local_9a0 < local_99c) {
              lVar18 = (longlong)local_9a0;
              local_968 = (ulonglong)(uint)(local_99c - local_9a0);
              local_9b8 = local_998;
              do {
                local_974 = local_9a4 + local_9b0 + iVar2 + 6;
                if (local_9b0 < local_974) {
                  iVar5 = local_9a8 - iVar2;
                  local_984 = (iVar5 + 3 + local_9b0) * iVar13;
                  local_978 = (iVar5 + 1 + local_9b0) * iVar13;
                  local_97c = (iVar5 + 4 + local_9b0) * iVar13;
                  iVar7 = (local_9b8 - (local_9a4 + local_9b0)) + local_9b0;
                  local_98c = (iVar7 + 1) * iVar13;
                  local_988 = (iVar7 + 2) * iVar13;
                  local_980 = (iVar7 + 3) * iVar13;
                  iVar5 = local_9ac;
                  iVar12 = local_9b0;
                  do {
                    iVar10 = iVar5 + iVar7 * iVar13;
                    if (lVar17 <= lVar18) {
                      iVar10 = ((iVar3 + -1) * iVar2 + iVar12) * iVar13;
                    }
                    if (iVar2 <= iVar12) {
                      iVar10 = iVar10 - (local_978 + iVar5);
                    }
                    fVar21 = (float)*(byte *)(iVar10 + lVar4);
                    fVar22 = (float)*(byte *)((iVar10 + 1) + lVar4);
                    fVar23 = (float)*(byte *)((iVar10 + 2) + lVar4);
                    if (iVar13 == 4) {
                      fVar20 = (float)*(byte *)((iVar10 + 3) + lVar4);
                    }
                    else {
                      fVar20 = 255.0;
                    }
                    iVar10 = local_98c + iVar5;
                    local_5e8[lVar15] = fVar20 - 128.0;
                    local_8e8[lVar15] = (fVar21 * 0.299 + fVar22 * 0.587 + fVar23 * 0.114) - 128.0;
                    local_6e8[lVar15] = (fVar21 * 0.5 - fVar22 * 0.41869) - fVar23 * 0.08131;
                    local_7e8[lVar15] = fVar23 * 0.5 - (fVar21 * 0.16874 + fVar22 * 0.33126);
                    if (lVar17 <= lVar18) {
                      iVar10 = ((iVar3 + -1) * iVar2 + 1 + iVar12) * iVar13;
                    }
                    if (iVar2 <= iVar12 + 1) {
                      iVar10 = iVar10 - iVar5;
                    }
                    fVar21 = (float)*(byte *)(iVar10 + lVar4);
                    fVar22 = (float)*(byte *)((iVar10 + 1) + lVar4);
                    fVar23 = (float)*(byte *)((iVar10 + 2) + lVar4);
                    if (iVar13 == 4) {
                      fVar20 = (float)*(byte *)((iVar10 + 3) + lVar4);
                    }
                    else {
                      fVar20 = 255.0;
                    }
                    iVar10 = local_988 + iVar5;
                    local_5e8[lVar15 + 1] = fVar20 - 128.0;
                    local_8e8[lVar15 + 1] =
                         (fVar21 * 0.299 + fVar22 * 0.587 + fVar23 * 0.114) - 128.0;
                    local_6e8[lVar15 + 1] = (fVar21 * 0.5 - fVar22 * 0.41869) - fVar23 * 0.08131;
                    local_7e8[lVar15 + 1] = fVar23 * 0.5 - (fVar21 * 0.16874 + fVar22 * 0.33126);
                    if (lVar17 <= lVar18) {
                      iVar10 = ((iVar3 + -1) * iVar2 + 2 + iVar12) * iVar13;
                    }
                    if (iVar2 <= iVar12 + 2) {
                      iVar10 = iVar10 - (local_984 + iVar5);
                    }
                    fVar21 = (float)*(byte *)(iVar10 + lVar4);
                    fVar22 = (float)*(byte *)((iVar10 + 1) + lVar4);
                    fVar23 = (float)*(byte *)((iVar10 + 2) + lVar4);
                    if (iVar13 == 4) {
                      fVar20 = (float)*(byte *)((iVar10 + 3) + lVar4);
                    }
                    else {
                      fVar20 = 255.0;
                    }
                    iVar10 = local_980 + iVar5;
                    local_5e8[lVar15 + 2] = fVar20 - 128.0;
                    local_8e8[lVar15 + 2] =
                         (fVar21 * 0.299 + fVar22 * 0.587 + fVar23 * 0.114) - 128.0;
                    local_6e8[lVar15 + 2] = (fVar21 * 0.5 - fVar22 * 0.41869) - fVar23 * 0.08131;
                    local_7e8[lVar15 + 2] = fVar23 * 0.5 - (fVar21 * 0.16874 + fVar22 * 0.33126);
                    if (lVar17 <= lVar18) {
                      iVar10 = ((iVar3 + -1) * iVar2 + 3 + iVar12) * iVar13;
                    }
                    if (iVar2 <= iVar12 + 3) {
                      iVar10 = iVar10 - (local_97c + iVar5);
                    }
                    fVar21 = (float)*(byte *)(iVar10 + lVar4);
                    fVar22 = (float)*(byte *)((iVar10 + 1) + lVar4);
                    fVar23 = (float)*(byte *)((iVar10 + 2) + lVar4);
                    if (iVar13 == 4) {
                      fVar20 = (float)*(byte *)((iVar10 + 3) + lVar4);
                    }
                    else {
                      fVar20 = 255.0;
                    }
                    iVar5 = iVar5 + iVar13 * 4;
                    iVar12 = iVar12 + 4;
                    local_5e8[lVar15 + 3] = fVar20 - 128.0;
                    local_8e8[lVar15 + 3] =
                         (fVar21 * 0.299 + fVar22 * 0.587 + fVar23 * 0.114) - 128.0;
                    local_6e8[lVar15 + 3] = (fVar21 * 0.5 - fVar22 * 0.41869) - fVar23 * 0.08131;
                    local_7e8[lVar15 + 3] = fVar23 * 0.5 - (fVar21 * 0.16874 + fVar22 * 0.33126);
                    lVar15 = lVar15 + 4;
                  } while (iVar12 < local_9a4 + local_9b0 + iVar2 + 3);
                  if (iVar12 < local_974) {
                    iVar7 = (local_9b8 + iVar12) * iVar13;
                    iVar5 = ((iVar12 - iVar2) + 1) * iVar13;
                    do {
                      iVar10 = iVar7;
                      if (lVar17 <= lVar18) {
                        iVar10 = ((iVar3 + -1) * iVar2 + iVar12) * iVar13;
                      }
                      if (iVar2 <= iVar12) {
                        iVar10 = iVar10 - iVar5;
                      }
                      fVar21 = (float)*(byte *)(iVar10 + lVar4);
                      fVar22 = (float)*(byte *)((iVar10 + 1) + lVar4);
                      fVar23 = (float)*(byte *)((iVar10 + 2) + lVar4);
                      if (iVar13 == 4) {
                        fVar20 = (float)*(byte *)((iVar10 + 3) + lVar4);
                      }
                      else {
                        fVar20 = 255.0;
                      }
                      iVar12 = iVar12 + 1;
                      iVar7 = iVar7 + iVar13;
                      iVar5 = iVar5 + iVar13;
                      local_5e8[lVar15] = fVar20 - 128.0;
                      local_8e8[lVar15] = (fVar21 * 0.299 + fVar22 * 0.587 + fVar23 * 0.114) - 128.0
                      ;
                      local_6e8[lVar15] = (fVar21 * 0.5 - fVar22 * 0.41869) - fVar23 * 0.08131;
                      local_7e8[lVar15] = fVar23 * 0.5 - (fVar21 * 0.16874 + fVar22 * 0.33126);
                      lVar15 = lVar15 + 1;
                    } while (iVar12 < local_974);
                  }
                }
                local_9b8 = local_9b8 + iVar2;
                lVar18 = lVar18 + 1;
                local_968 = local_968 - 1;
              } while (local_968 != 0);
              local_968 = 0;
              lVar16 = local_930;
              lVar19 = local_938;
            }
            FUN_144b971d0(local_8e8,8,local_958,local_4e8);
            FUN_144b971d0(local_7e8,8,local_960,local_3e8);
            FUN_144b971d0(local_6e8,8,local_960,local_2e8);
            FUN_144b971d0(local_5e8,8,local_958,local_1e8);
            lVar15 = 0;
            lVar18 = 0x40;
            psVar8 = (short *)(local_950 + (longlong)local_994 * 2);
            do {
              *(short *)(local_928 + (longlong)psVar8) =
                   *(short *)((longlong)local_4e8 + lVar15) + (short)local_9b4;
              *psVar8 = *(short *)((longlong)local_3e8 + lVar15) + (short)local_9b4;
              *(short *)(local_920 + (longlong)psVar8) =
                   *(short *)((longlong)local_2e8 + lVar15) + (short)local_9b4;
              if (iVar13 == 4) {
                *(short *)(lVar16 + (longlong)psVar8) =
                     *(short *)((longlong)local_1e8 + lVar15) + (short)local_9b4;
              }
              psVar8 = (short *)((longlong)psVar8 + lVar19);
              lVar15 = lVar15 + 4;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            local_9a8 = local_9a8 + -8;
            local_9ac = local_9ac + iVar13 * 8;
            local_994 = local_994 + 1;
            local_9b0 = iVar14 + 8;
            lVar15 = local_950;
            lVar18 = local_910;
            param_1 = local_918;
            iVar14 = local_970;
            iVar5 = local_990;
          } while (local_9b0 < iVar2);
        }
        local_9a0 = local_9a0 + 8;
        local_998 = local_998 + iVar2 * 8;
        local_99c = local_99c + 8;
      } while (local_9a0 < iVar5);
    }
    lVar4 = local_900[0];
    iVar13 = 0;
    iVar2 = *(int *)(local_908 + 0xcc + (longlong)param_1);
    lVar15 = *(longlong *)(local_908 + 0xb8 + (longlong)param_1);
    puVar1 = (undefined1 *)(lVar15 + iVar2);
    if (0 < iVar2) {
      puVar9 = puVar1;
      puVar11 = *(undefined1 **)(local_908 + 0xb0 + (longlong)param_1);
      do {
        puVar9[lVar15 - (longlong)puVar1] = *puVar11;
        iVar13 = iVar13 + 1;
        *puVar9 = puVar11[1];
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 2;
      } while (iVar13 < *(int *)(local_908 + 0xcc + (longlong)param_1));
    }
    if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
      piVar6 = (int *)(*(code *)PTR_FUN_14c6d9878)
                                (local_900,*(undefined8 *)(param_1 + local_900[0] * 0x1a + 0x2e),
                                 (longlong)(param_1[local_900[0] * 0x1a + 0x33] * 2));
      iVar2 = piVar6[1];
      iVar13 = piVar6[2];
      param_1[lVar4 * 0x1a + 0x30] = *piVar6;
      (param_1 + lVar4 * 0x1a + 0x30)[1] = iVar2;
      param_1[lVar4 * 0x1a + 0x32] = iVar13;
    }
    else {
      _Dst = (void *)(*(code *)PTR_malloc_14c6d9888)
                               ((longlong)(param_1[local_900[0] * 0x1a + 0x33] * 2));
      param_1[lVar4 * 0x1a + 0x32] = param_1[lVar4 * 0x1a + 0x33] * 2;
      *(void **)(param_1 + lVar4 * 0x1a + 0x30) = _Dst;
      memcpy(_Dst,*(void **)(param_1 + lVar4 * 0x1a + 0x2e),
             (longlong)(param_1[lVar4 * 0x1a + 0x33] * 2));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_e8 ^ (ulonglong)auStack_9d8);
}



// FUNCTION 144b8dcf0 FUN_144b8dcf0 body=527 status=ok
// SIG undefined FUN_144b8dcf0(void)

void FUN_144b8dcf0(int *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined1 local_1c;
  undefined1 auStack_1b [2];
  undefined1 uStack_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 != 0) goto LAB_144b8def2;
  (*(code *)**(undefined8 **)(param_1 + 2))(*(undefined8 *)(param_1 + 4),&DAT_1499774a8,6);
  local_28 = 4;
  iVar4 = 0;
  lVar3 = 0x10;
  local_24 = *(undefined8 *)(param_1 + 6);
  uVar1 = 0xd;
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    uVar1 = 0;
  }
  _local_1c = CONCAT31((uint3)*(byte *)(param_1 + 8),8);
  _local_1c = CONCAT13((char)param_1[0xd],CONCAT12(uVar1,_local_1c));
  local_38 = 0x10;
  local_34 = 0x52444849;
  lVar2 = (*(code *)**(undefined8 **)(param_1 + 2))(*(undefined8 *)(param_1 + 4),&local_38,8);
  if ((lVar2 == 8) &&
     (lVar2 = (*(code *)**(undefined8 **)(param_1 + 2))(*(undefined8 *)(param_1 + 4),&local_28,0x10)
     , lVar2 == 0x10)) {
    local_30 = 0x216;
    local_2c = 0x5244484c;
    lVar2 = (*(code *)**(undefined8 **)(param_1 + 2))(*(undefined8 *)(param_1 + 4),&local_30,8);
    if ((lVar2 != 8) ||
       (lVar2 = (*(code *)**(undefined8 **)(param_1 + 2))
                          (*(undefined8 *)(param_1 + 4),param_1 + 0x1ba,0x216), lVar2 != 0x216))
    goto LAB_144b8de9e;
    if (0 < param_1[0xd]) {
      piVar5 = param_1 + 0x32;
      do {
        lVar2 = (*(code *)**(undefined8 **)(param_1 + 2))
                          (*(undefined8 *)(param_1 + 4),param_1 + (longlong)iVar4 * 0x1a + 0x32,4);
        if (((lVar2 != 4) ||
            (lVar2 = (*(code *)**(undefined8 **)(param_1 + 2))
                               (*(undefined8 *)(param_1 + 4),&DAT_1499774b0,4), lVar2 != 4)) ||
           (lVar2 = (*(code *)**(undefined8 **)(param_1 + 2))
                              (*(undefined8 *)(param_1 + 4),*(undefined8 *)(piVar5 + -2),
                               (longlong)*piVar5), lVar2 != *piVar5)) goto LAB_144b8de9e;
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 0x1a;
      } while (iVar4 < param_1[0xd]);
    }
  }
  else {
LAB_144b8de9e:
    *param_1 = 5;
  }
  plVar6 = (longlong *)(param_1 + 0x2e);
  do {
    if (plVar6[-1] != 0) {
      (*(code *)PTR_free_14c6d9890)();
    }
    if (*plVar6 != 0) {
      (*(code *)PTR_free_14c6d9890)();
    }
    if (plVar6[1] != 0) {
      (*(code *)PTR_free_14c6d9890)();
    }
    plVar6 = plVar6 + 0xd;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
LAB_144b8def2:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 144b8df10 FUN_144b8df10 body=73 status=ok
// SIG undefined FUN_144b8df10(void)

undefined4 FUN_144b8df10(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  
  FUN_144b8dcf0();
  puVar1 = *(undefined8 **)(param_1 + 4);
  *param_2 = *puVar1;
  *param_3 = *(undefined4 *)(puVar1 + 2);
  (*(code *)PTR_free_14c6d9890)(*(undefined8 *)(param_1 + 4));
  return *param_1;
}



// FUNCTION 144b8df60 FUN_144b8df60 body=246 status=ok
// SIG undefined FUN_144b8df60(void)

undefined8 * FUN_144b8df60(undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_948;
  undefined8 local_940;
  longlong local_938;
  undefined1 local_930 [2344];
  
  *(undefined4 *)param_1 = 0;
  memset((undefined4 *)((longlong)param_1 + 4),0,0x924);
  local_948 = param_2;
  local_940 = param_2;
  local_938 = (longlong)param_3;
  puVar3 = (undefined8 *)FUN_144b8e060(local_930,&PTR_FUN_149975fa0,&local_948,param_4);
  lVar5 = 0x12;
  puVar2 = param_1;
  do {
    puVar6 = puVar2;
    puVar4 = puVar3;
    uVar1 = puVar4[1];
    *puVar6 = *puVar4;
    puVar6[1] = uVar1;
    uVar1 = puVar4[3];
    puVar6[2] = puVar4[2];
    puVar6[3] = uVar1;
    uVar1 = puVar4[5];
    puVar6[4] = puVar4[4];
    puVar6[5] = uVar1;
    uVar1 = puVar4[7];
    puVar6[6] = puVar4[6];
    puVar6[7] = uVar1;
    uVar1 = puVar4[9];
    puVar6[8] = puVar4[8];
    puVar6[9] = uVar1;
    uVar1 = puVar4[0xb];
    puVar6[10] = puVar4[10];
    puVar6[0xb] = uVar1;
    uVar1 = puVar4[0xd];
    puVar6[0xc] = puVar4[0xc];
    puVar6[0xd] = uVar1;
    uVar1 = puVar4[0xf];
    puVar6[0xe] = puVar4[0xe];
    puVar6[0xf] = uVar1;
    lVar5 = lVar5 + -1;
    puVar3 = puVar4 + 0x10;
    puVar2 = puVar6 + 0x10;
  } while (lVar5 != 0);
  uVar1 = puVar4[0x11];
  puVar6[0x10] = puVar4[0x10];
  puVar6[0x11] = uVar1;
  uVar1 = puVar4[0x13];
  puVar6[0x12] = puVar4[0x12];
  puVar6[0x13] = uVar1;
  puVar6[0x14] = puVar4[0x14];
  return param_1;
}



// FUNCTION 144b8e060 FUN_144b8e060 body=1250 status=ok
// SIG undefined FUN_144b8e060(void)

void FUN_144b8e060(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  short *psVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ushort *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  uint uVar19;
  uint *puVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong *plVar24;
  undefined1 auStack_738 [32];
  uint local_718;
  int iStack_714;
  longlong local_710;
  undefined8 local_708;
  undefined1 local_700 [1712];
  int local_50;
  short local_4c;
  ulonglong local_48;
  ulonglong uVar23;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_738;
  uVar21 = 0;
  *param_1 = 0;
  local_710 = param_2;
  local_708 = param_3;
  memset(param_1 + 1,0,0x924);
  param_1[2] = param_4;
  lVar12 = (**(code **)(param_2 + 8))(param_3,&local_50,6);
  if ((((((lVar12 == 6) && (local_50 == 0x504a4f4f)) && (local_4c == 0x4745)) &&
       ((lVar12 = (**(code **)(param_2 + 8))(param_3,&local_718,8), lVar12 == 8 &&
        (iStack_714 == 0x52444849)))) &&
      (lVar12 = (**(code **)(param_2 + 8))(param_3,param_1 + 3,0x10), lVar12 == 0x10)) &&
     (((param_1[3] == 4 && (iVar3 = param_1[4], iVar3 != 0)) &&
      ((iVar3 < 0x1000001 && ((iVar4 = param_1[5], iVar4 != 0 && (iVar4 < 0x1000001)))))))) {
    bVar1 = *(byte *)((longlong)param_1 + 0x19);
    uVar23 = (ulonglong)bVar1;
    if (((bVar1 - 1 & 0xfffffffc) == 0) &&
       (((((bVar1 != 2 && (*(char *)(param_1 + 6) == '\b')) &&
          (iVar10 = FUN_144b90940(iVar3,iVar4,bVar1,0), iVar10 != 0)) &&
         (((byte)(*(char *)((longlong)param_1 + 0x1b) - 1U) < 0x10 &&
          ((uint)bVar1 * iVar4 * iVar3 != 0)))) &&
        (((lVar12 = (**(code **)(param_2 + 8))(param_3,&local_718,8), lVar12 == 8 &&
          ((iStack_714 == 0x5244484c &&
           (lVar12 = (**(code **)(param_2 + 8))(param_3,param_1 + 7,0x216), lVar12 == 0x216)))) &&
         ((byte)(*(char *)(param_1 + 0x8b) + 1U) < 4)))))) {
      uVar22 = 1;
      uVar19 = 1;
      if (bVar1 != 0) {
        uVar18 = (ulonglong)(uint)bVar1;
        puVar16 = (ushort *)((longlong)param_1 + 0x1e);
        do {
          if (uVar22 < puVar16[-1]) {
            uVar22 = (uint)puVar16[-1];
          }
          if (uVar19 < *puVar16) {
            uVar19 = (uint)*puVar16;
          }
          uVar18 = uVar18 - 1;
          puVar16 = puVar16 + 2;
        } while (uVar18 != 0);
      }
      if (bVar1 != 0) {
        puVar16 = (ushort *)(param_1 + 7);
        uVar18 = uVar21;
        do {
          uVar2 = *puVar16;
          if (((((int)(iVar3 + 7 + (iVar3 + 7 >> 0x1f & 7U)) >> 3) * 8 + 8 < (int)((uint)uVar2 * 8))
              || ((int)((uint)uVar2 * 8) <
                  (int)((longlong)
                        ((longlong)(int)(iVar3 + (iVar3 >> 0x1f & 7U)) & 0xfffffffffffffff8U) /
                       (longlong)(int)((ulonglong)uVar22 / (ulonglong)(longlong)(int)(uint)uVar2))))
             || ((uint)puVar16[1] * (uint)uVar2 == 0)) goto LAB_144b8e520;
          uVar18 = uVar18 + 1;
          puVar16 = puVar16 + 2;
          param_2 = local_710;
        } while ((longlong)uVar18 < (longlong)uVar23);
      }
      if (uVar23 < 4) {
        psVar13 = (short *)((longlong)param_1 + uVar23 * 4 + 0x1e);
        uVar18 = uVar23;
        do {
          if ((psVar13[-1] != 0) || (*psVar13 != 0)) goto LAB_144b8e520;
          uVar18 = uVar18 + 1;
          psVar13 = psVar13 + 2;
        } while ((longlong)uVar18 < 4);
      }
      if (bVar1 != 0) {
        puVar16 = (ushort *)((longlong)param_1 + 0x1e);
        uVar18 = uVar21;
        do {
          if ((1 < (int)((ulonglong)uVar22 / (ulonglong)(longlong)(int)(uint)puVar16[-1]) - 1U) ||
             (1 < (int)((ulonglong)uVar19 / (ulonglong)(longlong)(int)(uint)*puVar16) - 1U)) {
            uVar11 = 9;
            goto LAB_144b8e525;
          }
          if (((int)((ulonglong)uVar22 % (ulonglong)(longlong)(int)(uint)puVar16[-1]) != 0) ||
             ((int)((ulonglong)uVar19 % (ulonglong)(longlong)(int)(uint)*puVar16) != 0))
          goto LAB_144b8e520;
          uVar18 = uVar18 + 1;
          puVar16 = puVar16 + 2;
        } while ((longlong)uVar18 < (longlong)uVar23);
      }
      puVar14 = (undefined8 *)
                FUN_144b95d50(local_700,*(undefined1 *)((longlong)param_1 + 0x1b),param_1 + 7);
      uVar8 = local_708;
      lVar12 = 0xd;
      puVar9 = (undefined8 *)(param_1 + 0x8e);
      do {
        puVar17 = puVar9;
        puVar15 = puVar14;
        uVar7 = puVar15[1];
        *puVar17 = *puVar15;
        puVar17[1] = uVar7;
        uVar7 = puVar15[3];
        puVar17[2] = puVar15[2];
        puVar17[3] = uVar7;
        uVar7 = puVar15[5];
        puVar17[4] = puVar15[4];
        puVar17[5] = uVar7;
        uVar7 = puVar15[7];
        puVar17[6] = puVar15[6];
        puVar17[7] = uVar7;
        uVar7 = puVar15[9];
        puVar17[8] = puVar15[8];
        puVar17[9] = uVar7;
        uVar7 = puVar15[0xb];
        puVar17[10] = puVar15[10];
        puVar17[0xb] = uVar7;
        uVar7 = puVar15[0xd];
        puVar17[0xc] = puVar15[0xc];
        puVar17[0xd] = uVar7;
        uVar7 = puVar15[0xf];
        puVar17[0xe] = puVar15[0xe];
        puVar17[0xf] = uVar7;
        lVar12 = lVar12 + -1;
        puVar14 = puVar15 + 0x10;
        puVar9 = puVar17 + 0x10;
      } while (lVar12 != 0);
      uVar7 = puVar15[0x11];
      puVar17[0x10] = puVar15[0x10];
      puVar17[0x11] = uVar7;
      uVar7 = puVar15[0x13];
      puVar17[0x12] = puVar15[0x12];
      puVar17[0x13] = uVar7;
      uVar11 = *(undefined4 *)((longlong)puVar15 + 0xa4);
      uVar5 = *(undefined4 *)(puVar15 + 0x15);
      uVar6 = *(undefined4 *)((longlong)puVar15 + 0xac);
      *(undefined4 *)(puVar17 + 0x14) = *(undefined4 *)(puVar15 + 0x14);
      *(undefined4 *)((longlong)puVar17 + 0xa4) = uVar11;
      *(undefined4 *)(puVar17 + 0x15) = uVar5;
      *(undefined4 *)((longlong)puVar17 + 0xac) = uVar6;
      if (*(char *)((longlong)param_1 + 0x1b) != '\0') {
        puVar20 = param_1 + 0xb2;
        uVar23 = uVar21;
        do {
          lVar12 = (**(code **)(param_2 + 8))(uVar8,&local_718,8);
          if ((lVar12 != 8) || (iStack_714 != 0x544c5053)) goto LAB_144b8e520;
          lVar12 = (*(code *)PTR_malloc_14c6d9888)(local_718);
          *(longlong *)(puVar20 + -2) = lVar12;
          *puVar20 = local_718;
          if ((local_718 != puVar20[1] * 2) && (*(char *)((longlong)param_1 + 0x1a) == '\0'))
          goto LAB_144b8e520;
          if (lVar12 == 0) goto LAB_144b8e519;
          uVar18 = (**(code **)(param_2 + 8))(uVar8,lVar12,local_718);
          if (uVar18 != local_718) goto LAB_144b8e520;
          uVar22 = (int)uVar23 + 1;
          uVar23 = (ulonglong)uVar22;
          puVar20 = puVar20 + 0x1a;
        } while ((int)uVar22 < (int)(uint)*(byte *)((longlong)param_1 + 0x1b));
      }
      plVar24 = (longlong *)(param_1 + 0x242);
      puVar16 = (ushort *)((longlong)param_1 + 0x1e);
      do {
        *(uint *)(puVar16 + 0x465) = (uint)puVar16[-1] * 8;
        *(uint *)(puVar16 + 0x46d) = (uint)*puVar16 * 8;
        lVar12 = (*(code *)PTR_malloc_14c6d9888)
                           ((longlong)(int)((uint)*puVar16 * (uint)puVar16[-1] * 0x40));
        *plVar24 = lVar12;
        if (lVar12 == 0) goto LAB_144b8e519;
        uVar21 = uVar21 + 1;
        plVar24 = plVar24 + 1;
        puVar16 = puVar16 + 2;
      } while ((longlong)uVar21 < 4);
      param_1[1] = (uint)*(byte *)((longlong)param_1 + 0x1b);
      goto LAB_144b8e52f;
    }
  }
LAB_144b8e520:
  uVar11 = 4;
LAB_144b8e525:
  *param_1 = uVar11;
  FUN_144b96ba0(param_1);
LAB_144b8e52f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_738);
LAB_144b8e519:
  uVar11 = 6;
  goto LAB_144b8e525;
}



// FUNCTION 144b8e560 FUN_144b8e560 body=1124 status=ok
// SIG undefined FUN_144b8e560(void)

/* WARNING: Removing unreachable block (ram,0x000144b8e5a5) */

void FUN_144b8e560(int *param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  short *psVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  short *psVar15;
  undefined1 auStack_358 [32];
  int local_338;
  int local_334;
  int local_330;
  longlong *local_328;
  int local_320;
  uint local_31c;
  longlong local_318;
  short *local_310;
  short *local_308;
  short *local_300;
  ulonglong local_2f8;
  uint *local_2f0;
  longlong local_2e8;
  int *local_2d8;
  code *local_2d0;
  short local_2c8 [64];
  short local_248 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_358;
  local_2d8 = param_1;
  if (*param_1 == 0) {
    plVar3 = (longlong *)cpuid_Version_info(1);
    local_2e8 = *plVar3;
    local_2d0 = FUN_144b92060;
    if ((*(uint *)(plVar3 + 1) >> 0x1a & 1) != 0) {
      local_2d0 = FUN_144b924e0;
    }
    if (*(char *)((longlong)param_1 + 0x1a) == '\0') {
      memcpy(*(void **)(param_1 + (longlong)param_2 * 0x1a + 0xae),
             *(void **)(param_1 + (longlong)param_2 * 0x1a + 0xb0),
             (longlong)(param_1[(longlong)param_2 * 0x1a + 0xb3] * 2));
    }
    else if ((param_1[(longlong)param_2 * 0x1a + 0xb2] != 0) &&
            (iVar8 = (*(code *)PTR_FUN_14c6d9880)
                               (*(undefined8 *)(param_1 + (longlong)param_2 * 0x1a + 0xb0),
                                (longlong)param_1[(longlong)param_2 * 0x1a + 0xb2],
                                *(undefined8 *)(param_1 + (longlong)param_2 * 0x1a + 0xae),
                                (longlong)(param_1[(longlong)param_2 * 0x1a + 0xb3] * 2)),
            iVar8 == 0)) {
      *param_1 = 4;
      goto LAB_144b8e9b4;
    }
    FUN_144b959b0(*(longlong *)(param_1 + (longlong)param_2 * 0x1a + 0xae),
                  *(longlong *)(param_1 + (longlong)param_2 * 0x1a + 0xae) +
                  (longlong)param_1[(longlong)param_2 * 0x1a + 0xb3],
                  *(undefined8 *)(param_1 + (longlong)param_2 * 0x1a + 0xac));
    lVar14 = 0x16;
    if ((*(byte *)(param_1 + 2) & 2) != 0) {
      psVar5 = local_248;
      lVar12 = 0x16;
      do {
        piVar10 = &DAT_149975c70;
        lVar11 = 0x40;
        do {
          iVar8 = *piVar10;
          piVar10 = piVar10 + 1;
          *psVar5 = (short)((int)((uint)*(ushort *)((longlong)param_1 + (lVar12 + iVar8) * 2) *
                                  (int)*(short *)(&DAT_149975af0 + (longlong)iVar8 * 2) + 0x800) >>
                           0xc);
          psVar5 = psVar5 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        lVar12 = lVar12 + 0x40;
      } while (lVar12 < 0x116);
    }
    local_310 = *(short **)(param_1 + (longlong)param_2 * 0x1a + 0xac);
    psVar5 = local_248;
    local_328 = (longlong *)(param_1 + 0x242);
    local_2f0 = (uint *)(param_1 + (longlong)param_2 * 0x1a + 0xa6);
    do {
      local_31c = local_2f0[-4];
      uVar6 = (ulonglong)(int)local_31c;
      uVar2 = *local_2f0;
      iVar8 = uVar2 * local_31c;
      local_338 = local_31c * 8;
      local_320 = iVar8;
      if (0 < (int)uVar2) {
        iVar13 = 0;
        iVar7 = local_31c << 6;
        local_330 = local_2f0[-0xc] * local_338 * 8;
        lVar12 = uVar6 * 2;
        local_2f8 = (ulonglong)uVar2;
        local_300 = local_310;
        local_334 = iVar7;
        local_308 = psVar5;
        local_2e8 = lVar12;
        do {
          iVar9 = 0;
          if (0 < (int)uVar6) {
            local_318 = (longlong)local_330;
            lVar11 = 0;
            psVar15 = local_300;
            do {
              if ((*(byte *)(param_1 + 2) & 2) == 0) {
                piVar10 = &DAT_149975c70;
                lVar12 = 0x40;
                psVar5 = psVar15;
                do {
                  iVar7 = *piVar10;
                  piVar10 = piVar10 + 1;
                  sVar1 = *psVar5;
                  psVar5 = psVar5 + iVar8;
                  local_2c8[iVar7] =
                       *(short *)((longlong)param_1 + (iVar7 + lVar14) * 2) * (sVar1 + -0x80);
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
                (*local_2d0)(local_318 + lVar11 + *local_328,local_338,local_2c8);
                iVar8 = local_320;
              }
              else {
                iVar7 = 0;
                lVar12 = 0x40;
                piVar10 = &DAT_149975c70;
                do {
                  iVar4 = iVar13 + iVar7;
                  iVar7 = iVar7 + iVar8;
                  local_2c8[*piVar10] = (local_310[iVar4 + iVar9] + -0x80) * *psVar5;
                  lVar12 = lVar12 + -1;
                  piVar10 = piVar10 + 1;
                  psVar5 = psVar5 + 1;
                } while (lVar12 != 0);
                FUN_144b96c30(local_318 + lVar11 + *local_328,local_338,local_2c8);
                param_1 = local_2d8;
              }
              uVar6 = (ulonglong)local_31c;
              iVar9 = iVar9 + 1;
              psVar15 = psVar15 + 1;
              lVar11 = lVar11 + 8;
              lVar12 = local_2e8;
              psVar5 = local_308;
              iVar7 = local_334;
            } while (iVar9 < (int)local_31c);
          }
          local_300 = (short *)((longlong)local_300 + lVar12);
          local_330 = local_330 + iVar7;
          iVar13 = iVar13 + (int)uVar6;
          local_2f8 = local_2f8 - 1;
        } while (local_2f8 != 0);
        local_2f8 = 0;
      }
      local_328 = local_328 + 1;
      local_2f0 = local_2f0 + 1;
      psVar5 = psVar5 + 0x40;
      lVar14 = lVar14 + 0x40;
      local_310 = local_310 + (iVar8 << 6);
      local_308 = psVar5;
    } while (lVar14 < 0x116);
  }
LAB_144b8e9b4:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_358);
}



// FUNCTION 144b8e9d0 FUN_144b8e9d0 body=1886 status=ok
// SIG undefined FUN_144b8e9d0(void)

/* WARNING: Removing unreachable block (ram,0x000144b8eaeb) */

void FUN_144b8e9d0(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  longlong lVar9;
  int iVar10;
  code *pcVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  ushort *puVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  ulonglong uVar21;
  int *piVar22;
  int *piVar23;
  longlong *plVar24;
  ulonglong uVar25;
  longlong lVar26;
  short *psVar27;
  int iVar28;
  ulonglong uVar29;
  longlong lVar30;
  ushort *puVar31;
  undefined1 auStack_1f8 [32];
  int local_1d8;
  undefined4 local_1d0;
  uint local_1c8;
  int local_1c0;
  code *local_1b8;
  code *local_1b0;
  int *local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  int *local_178;
  int *local_170;
  undefined4 *local_168;
  longlong local_160;
  undefined1 *local_158;
  longlong local_150;
  byte *local_148;
  longlong local_140 [5];
  undefined1 local_118 [28];
  int local_fc [2];
  int local_f4 [39];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  uVar29 = 0;
  local_140[1] = 0;
  local_140[2] = 0;
  iVar28 = param_1[4];
  local_140[3] = 0;
  iVar13 = param_1[5];
  bVar2 = *(byte *)(param_1 + 6);
  iVar10 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  local_140[0] = 0;
  local_1a8 = param_1;
  local_178 = param_2;
  local_170 = param_3;
  local_168 = param_4;
  if (*param_1 == 0) {
    lVar26 = (ulonglong)bVar2 * (longlong)iVar13 * (longlong)iVar28 * 4 + 7;
    local_1a0 = (longlong)iVar28;
    local_190 = (*(code *)PTR_malloc_14c6d9888)
                          ((longlong)((ulonglong)((uint)(lVar26 >> 0x3f) & 7) + lVar26) >> 3);
    if (local_190 == 0) {
      FUN_144b96ba0(param_1);
      plVar24 = local_140;
      lVar26 = 4;
      do {
        if (*plVar24 != 0) {
          (*(code *)PTR_free_14c6d9890)();
        }
        plVar24 = plVar24 + 1;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
    else {
      local_1b0 = FUN_144b95230;
      uVar14 = 1;
      local_198 = 1;
      puVar7 = (undefined8 *)cpuid_Version_info(1);
      local_188 = *puVar7;
      local_1b8 = FUN_144b95570;
      if ((*(uint *)(puVar7 + 1) >> 0x1a & 1) != 0) {
        local_1b8 = FUN_144b95680;
        local_1b0 = FUN_144b95310;
      }
      puVar31 = (ushort *)((longlong)param_1 + 0x1e);
      uVar25 = 1;
      lVar26 = 4;
      puVar15 = puVar31;
      do {
        if (uVar14 < puVar15[-1]) {
          uVar14 = (uint)puVar15[-1];
        }
        if ((uint)uVar25 < (uint)*puVar15) {
          uVar25 = (ulonglong)*puVar15;
        }
        lVar26 = lVar26 + -1;
        puVar15 = puVar15 + 2;
      } while (lVar26 != 0);
      bVar2 = *(byte *)((longlong)param_1 + 0x19);
      uVar16 = uVar29;
      uVar21 = uVar29;
      if ((ulonglong)bVar2 != 0) {
        do {
          if ((bVar2 == 3) &&
             (*(char *)(uVar16 + 0x22e + (longlong)param_1) == (&DAT_14a94a810)[uVar16])) {
            uVar21 = (ulonglong)((int)uVar21 + 1);
          }
          iVar10 = (int)uVar21;
          uVar16 = uVar16 + 1;
        } while ((longlong)uVar16 < (longlong)(ulonglong)bVar2);
      }
      if ((bVar2 != 3) ||
         ((iVar10 != 3 &&
          (((char)param_1[0x8b] != '\0' || (*(char *)((longlong)param_1 + 0x22d) != '\0')))))) {
        local_198 = 0;
      }
      local_160 = 0;
      local_158 = (undefined1 *)0x0;
      local_150 = 0;
      local_148 = (byte *)0x0;
      memset(local_118,0,0xc0);
      pcVar8 = local_1b0;
      local_1c0 = 0;
      local_1c8 = 0;
      local_188 = (longlong)param_1 + (0x908 - (longlong)local_140);
      piVar22 = local_fc;
      do {
        if ((puVar31[-1] != 0) && (*puVar31 != 0)) {
          lVar26 = (*(code *)PTR_malloc_14c6d9888)(param_1[4] + 3);
          uVar5 = puVar31[-1];
          local_140[uVar29] = lVar26;
          piVar22[3] = 0;
          uVar6 = *puVar31;
          iVar13 = (int)((ulonglong)uVar14 / (ulonglong)(longlong)(int)(uint)uVar5);
          piVar22[-1] = iVar13;
          iVar10 = (int)(uVar25 / (ulonglong)(longlong)(int)(uint)uVar6);
          *piVar22 = iVar10;
          iVar28 = param_1[4];
          piVar22[2] = iVar10 >> 1;
          piVar22[1] = (int)((ulonglong)(uint)(iVar28 + -1 + iVar13) /
                            ((ulonglong)uVar14 / (ulonglong)(longlong)(int)(uint)uVar5));
          uVar12 = *(undefined8 *)((longlong)local_140 + local_188 + uVar29 * 8);
          *(undefined8 *)(piVar22 + -3) = uVar12;
          if (local_1c0 <= iVar10) {
            local_1c0 = iVar10;
          }
          *(undefined8 *)(piVar22 + -5) = uVar12;
          if ((int)local_1c8 <= iVar13) {
            local_1c8 = iVar13;
          }
          if (iVar13 == 1) {
            if (iVar10 == 1) {
              pcVar11 = FUN_144b95080;
            }
            else {
              if (iVar10 != 2) goto LAB_144b8ecad;
              pcVar11 = FUN_144b95090;
            }
          }
          else {
LAB_144b8ecad:
            if (iVar13 == 2) {
              if (iVar10 == 1) {
                pcVar11 = FUN_144b95130;
                goto LAB_144b8ecd5;
              }
              if (iVar10 == 2) {
                *(code **)(piVar22 + -7) = pcVar8;
                goto LAB_144b8ecd9;
              }
            }
            pcVar11 = (code *)&LAB_144b95530;
          }
LAB_144b8ecd5:
          *(code **)(piVar22 + -7) = pcVar11;
        }
LAB_144b8ecd9:
        uVar29 = uVar29 + 1;
        piVar22 = piVar22 + 0xc;
        puVar31 = puVar31 + 2;
      } while ((longlong)uVar29 < 4);
      local_1c8 = 0;
      piVar22 = param_1;
      if (param_1[5] != 0) {
        do {
          param_1 = local_1a8;
          piVar23 = local_f4;
          psVar27 = (short *)((longlong)piVar22 + 0x1e);
          lVar30 = (ulonglong)(local_1c8 * piVar22[4] * 4) + local_190;
          lVar26 = 0;
          do {
            if ((psVar27[-1] != 0) && (*psVar27 != 0)) {
              uVar14 = piVar23[-2];
              iVar28 = *piVar23;
              if (iVar28 < (int)uVar14 >> 1) {
                uVar12 = *(undefined8 *)(piVar23 + -5);
                uVar18 = *(undefined8 *)(piVar23 + -7);
              }
              else {
                uVar12 = *(undefined8 *)(piVar23 + -7);
                uVar18 = *(undefined8 *)(piVar23 + -5);
              }
              local_1d8 = piVar23[-3];
              uVar12 = (**(code **)(piVar23 + -9))
                                 (*(undefined8 *)((longlong)local_140 + lVar26),uVar18,uVar12,
                                  piVar23[-1]);
              *(undefined8 *)((longlong)&local_160 + lVar26) = uVar12;
              iVar28 = iVar28 + 1;
              *piVar23 = iVar28;
              if ((int)uVar14 <= iVar28) {
                iVar28 = param_1[5];
                iVar13 = piVar23[1] + 1;
                *piVar23 = 0;
                *(longlong *)(piVar23 + -7) = *(longlong *)(piVar23 + -5);
                piVar23[1] = iVar13;
                if ((iVar13 < (int)((iVar28 + -1 + uVar14) / uVar14)) &&
                   (iVar13 < *(int *)(psVar27 + 0x46d))) {
                  *(longlong *)(piVar23 + -5) =
                       (longlong)*(int *)(psVar27 + 0x465) + *(longlong *)(piVar23 + -5);
                }
              }
            }
            lVar9 = local_1a0;
            psVar27 = psVar27 + 2;
            piVar23 = piVar23 + 0xc;
            lVar26 = lVar26 + 8;
          } while (lVar26 < 0x20);
          iVar28 = (int)local_1a0;
          if (*(char *)((longlong)param_1 + 0x19) == '\x03') {
            if (local_198 == 0) {
              local_1d0 = 4;
              local_1d8 = iVar28;
              (*local_1b8)(lVar30,local_160,local_158,local_150);
            }
            else if (0 < local_1a0) {
              puVar17 = (undefined1 *)(lVar30 + 2);
              puVar19 = local_158;
              lVar26 = local_1a0;
              do {
                puVar17[-2] = puVar19[local_160 - (longlong)local_158];
                puVar17[-1] = *puVar19;
                *puVar17 = (puVar19 + 1)[(local_150 - (longlong)local_158) + -1];
                puVar17[1] = 0xff;
                lVar26 = lVar26 + -1;
                puVar17 = puVar17 + 4;
                puVar19 = puVar19 + 1;
              } while (lVar26 != 0);
            }
          }
          else if (*(char *)((longlong)param_1 + 0x19) == '\x04') {
            if ((char)param_1[0x8b] == '\0') {
              if (0 < local_1a0) {
                pbVar20 = local_148;
                puVar17 = (undefined1 *)(lVar30 + 2);
                lVar26 = local_1a0;
                do {
                  bVar2 = *pbVar20;
                  pbVar1 = pbVar20 + (local_160 - (longlong)local_148);
                  pbVar20 = pbVar20 + 1;
                  uVar14 = (uint)*pbVar1 * (uint)bVar2 + 0x80;
                  puVar17[-2] = (char)((uVar14 >> 8) + uVar14 >> 8);
                  uVar14 = (uint)pbVar20[(longlong)(local_158 + (-1 - (longlong)local_148))] *
                           (uint)bVar2 + 0x80;
                  puVar17[-1] = (char)((uVar14 >> 8) + uVar14 >> 8);
                  bVar3 = pbVar20[(local_150 - (longlong)local_148) + -1];
                  puVar17[1] = 0xff;
                  uVar14 = (uint)bVar3 * (uint)bVar2 + 0x80;
                  *puVar17 = (char)((uVar14 >> 8) + uVar14 >> 8);
                  lVar26 = lVar26 + -1;
                  puVar17 = puVar17 + 4;
                } while (lVar26 != 0);
              }
            }
            else {
              local_1d0 = 4;
              if ((char)param_1[0x8b] == '\x02') {
                local_1d8 = iVar28;
                (*local_1b8)();
                lVar26 = 0;
                if (0 < lVar9) {
                  pbVar20 = (byte *)(lVar30 + 2);
                  do {
                    bVar2 = local_148[lVar26];
                    lVar26 = lVar26 + 1;
                    pbVar20[1] = 0xff;
                    uVar14 = (uint)(byte)~pbVar20[-2] * (uint)bVar2 + 0x80;
                    pbVar20[-2] = (byte)((uVar14 >> 8) + uVar14 >> 8);
                    uVar14 = (uint)(byte)~pbVar20[-1] * (uint)bVar2 + 0x80;
                    pbVar20[-1] = (byte)((uVar14 >> 8) + uVar14 >> 8);
                    uVar14 = (uint)(byte)~*pbVar20 * (uint)bVar2 + 0x80;
                    *pbVar20 = (byte)((uVar14 >> 8) + uVar14 >> 8);
                    pbVar20 = pbVar20 + 4;
                  } while (lVar26 < lVar9);
                }
              }
              else {
                local_1d8 = iVar28;
                (*local_1b8)();
                lVar26 = 0;
                if (0 < lVar9) {
                  pbVar20 = (byte *)(lVar30 + 3);
                  do {
                    pbVar1 = local_148 + lVar26;
                    lVar26 = lVar26 + 1;
                    *pbVar20 = *pbVar1;
                    pbVar20 = pbVar20 + 4;
                  } while (lVar26 < lVar9);
                }
              }
            }
          }
          else {
            lVar26 = 0;
            if (0 < local_1a0) {
              puVar17 = (undefined1 *)(lVar30 + 1);
              do {
                uVar4 = *(undefined1 *)(lVar26 + local_160);
                lVar26 = lVar26 + 1;
                puVar17[1] = uVar4;
                *puVar17 = uVar4;
                puVar17[-1] = uVar4;
                puVar17[2] = 0xff;
                puVar17 = puVar17 + 4;
              } while (lVar26 < local_1a0);
            }
          }
          local_1c8 = local_1c8 + 1;
          piVar22 = param_1;
        } while (local_1c8 < (uint)param_1[5]);
      }
      plVar24 = (longlong *)(param_1 + 0x242);
      lVar26 = 4;
      do {
        if (*plVar24 != 0) {
          (*(code *)PTR_free_14c6d9890)();
        }
        plVar24 = plVar24 + 1;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      plVar24 = (longlong *)(param_1 + 0xae);
      lVar26 = 0x10;
      do {
        if (plVar24[-1] != 0) {
          (*(code *)PTR_free_14c6d9890)();
        }
        if (*plVar24 != 0) {
          (*(code *)PTR_free_14c6d9890)();
        }
        if (plVar24[1] != 0) {
          (*(code *)PTR_free_14c6d9890)();
        }
        plVar24 = plVar24 + 0xd;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      plVar24 = local_140;
      lVar26 = 4;
      do {
        if (*plVar24 != 0) {
          (*(code *)PTR_free_14c6d9890)();
        }
        plVar24 = plVar24 + 1;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      *local_178 = param_1[4];
      *local_170 = param_1[5];
      *local_168 = 4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_1f8);
}



// FUNCTION 144b8f140 FUN_144b8f140 body=5860 status=ok
// SIG undefined FUN_144b8f140(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b8f140(ulonglong param_1,ulonglong param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  void *_Src;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  longlong lVar23;
  longlong lVar24;
  char cVar25;
  int *piVar26;
  longlong *plVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  int iVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  undefined8 uVar41;
  int iVar42;
  undefined1 auStack_1128 [32];
  int *local_1108;
  undefined4 local_1100;
  undefined *local_10f8;
  undefined *local_10f0;
  char local_10e8 [8];
  uint local_10e0;
  int local_10dc;
  uint local_10d8;
  uint local_10d4;
  undefined4 local_10d0;
  undefined4 local_10cc;
  undefined4 local_10c8;
  uint *local_10c0;
  uint *local_10b8;
  ulonglong local_10b0;
  ulonglong local_10a8;
  ulonglong local_10a0;
  undefined8 local_1098;
  int local_1090;
  undefined8 *local_1088;
  uint local_1080;
  int iStack_107c;
  ulonglong local_1078;
  longlong local_1070;
  ulonglong local_1068;
  int local_1060;
  undefined8 local_105c;
  undefined4 local_1054;
  ushort local_1048 [8];
  char acStack_1038 [128];
  char acStack_fb8 [384];
  char local_e38;
  undefined8 local_e28 [10];
  uint local_dd8 [4];
  uint local_dc8 [8];
  longlong local_da8 [2];
  int aiStack_d94 [391];
  int local_778 [64];
  undefined1 local_678 [256];
  undefined1 local_578 [256];
  int local_478 [64];
  undefined1 local_378 [256];
  undefined1 local_278 [512];
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined2 local_6f;
  char local_6d;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  short local_5c;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_1128;
  local_10a8 = param_2;
  local_1098 = param_4;
  local_1088 = param_3;
  local_1078 = param_1;
  lVar14 = (**(code **)(param_1 + 8))(param_2,&local_60,6);
  if (((lVar14 != 6) || (local_60 != 0x504a4f4f)) || (local_5c != 0x4745)) goto LAB_144b8f308;
  uVar30 = 0;
  uVar31 = 0;
  local_1060 = 0;
  local_105c = 0;
  local_1054 = 0;
  memset(local_1048,0,0x216);
  memset(local_e28,0,0x6b0);
  local_10d0 = 0;
  local_1090 = 0;
  local_10dc = 0;
  local_10cc = 0;
  local_10c8 = 0;
  local_10e0 = 0;
  lVar14 = (**(code **)(param_1 + 8))(param_2,&local_1080,8);
  if (((lVar14 == 8) && (iStack_107c == 0x52444849)) &&
     ((lVar14 = (**(code **)(param_1 + 8))(param_2,&local_1060,0x10), lVar14 == 0x10 &&
      (local_1060 == 4)))) {
    iVar42 = (int)local_105c;
    local_10c0 = (uint *)CONCAT44(local_10c0._4_4_,(int)local_105c);
    if (((int)local_105c != 0) && ((int)local_105c < 0x1000001)) {
      local_1070 = CONCAT44(local_1070._4_4_,local_105c._4_4_);
      if ((local_105c._4_4_ != 0) && (local_105c._4_4_ < 0x1000001)) {
        uVar28 = (ulonglong)local_1054._1_1_;
        if ((local_1054._1_1_ == 3) && ((char)local_1054 == '\b')) {
          local_10b0 = CONCAT44(local_10b0._4_4_,(uint)local_1054._3_1_);
          if (local_1054._3_1_ - 1 < 0x10) {
            iVar35 = 0;
            iVar13 = FUN_144b90940(local_105c & 0xffffffff,local_105c._4_4_,3,0);
            if ((((iVar13 != 0) && ((int)local_1070 * iVar42 * 3 != 0)) &&
                (lVar14 = (**(code **)(param_1 + 8))(param_2,&local_1080,iVar35 + 8), lVar14 == 8))
               && ((iStack_107c == 0x5244484c &&
                   (lVar14 = (**(code **)(param_1 + 8))(param_2,local_1048,0x216),
                   uVar17 = local_10b0, lVar14 == 0x216)))) {
              local_10b8 = (uint *)((ulonglong)local_10b8 & 0xffffffff00000000);
              local_10d4 = 0;
              local_10d8 = 0;
              if ((byte)(local_e38 + 1U) < 4) {
                uVar36 = 1;
                uVar21 = 1;
                uVar18 = uVar30;
                do {
                  if ((uint)uVar36 < (uint)local_1048[uVar18 * 2]) {
                    uVar36 = (ulonglong)local_1048[uVar18 * 2];
                  }
                  if (uVar21 < local_1048[uVar18 * 2 + 1]) {
                    uVar21 = (uint)local_1048[uVar18 * 2 + 1];
                  }
                  uVar18 = uVar18 + 1;
                } while ((longlong)uVar18 < 3);
                iVar42 = iVar42 + 7;
                uVar18 = uVar30;
                do {
                  uVar2 = local_1048[uVar18 * 2];
                  local_1068 = uVar28;
                  if (((int)(iVar42 + (iVar42 >> 0x1f & 7U)) >> 3) * 8 + 8 < (int)((uint)uVar2 * 8))
                  goto LAB_144b8f2a9;
                  if (((int)((uint)uVar2 * 8) <
                       (int)((longlong)
                             ((longlong)(int)((int)local_10c0 + ((int)local_10c0 >> 0x1f & 7U)) &
                             0xfffffffffffffff8U) /
                            (longlong)(int)(uVar36 / (ulonglong)(longlong)(int)(uint)uVar2))) ||
                     ((uint)local_1048[uVar18 * 2 + 1] * (uint)uVar2 == 0)) goto LAB_144b8f2a9;
                  uVar18 = uVar18 + 1;
                } while ((longlong)uVar18 < 3);
                iVar42 = (uint)local_10b0;
                lVar14 = 3;
                do {
                  if ((local_1048[lVar14 * 2] != 0) || (local_1048[lVar14 * 2 + 1] != 0))
                  goto LAB_144b8f2a9;
                  lVar14 = lVar14 + 1;
                  uVar28 = uVar30;
                } while (lVar14 < 4);
                do {
                  if (((((int)(uVar36 % (ulonglong)(longlong)(int)(uint)local_1048[uVar28 * 2]) != 0
                        ) || ((int)((ulonglong)uVar21 %
                                   (ulonglong)(longlong)(int)(uint)local_1048[uVar28 * 2 + 1]) != 0)
                       ) || (iVar13 = (int)(uVar36 / (ulonglong)
                                                     (longlong)(int)(uint)local_1048[uVar28 * 2]),
                            1 < iVar13 - 1U)) ||
                     (iVar35 = (int)((ulonglong)uVar21 /
                                    (ulonglong)(longlong)(int)(uint)local_1048[uVar28 * 2 + 1]),
                     1 < iVar35 - 1U)) goto LAB_144b8f2a9;
                  if (iVar13 == 2) {
                    if (iVar35 == 1) {
                      local_10b8 = (uint *)CONCAT44(local_10b8._4_4_,1);
                    }
                    else {
                      if (iVar35 != 2) goto LAB_144b8f2a9;
                      local_10d4 = 1;
                    }
                  }
                  else if ((iVar13 == 1) && (iVar35 == 2)) {
                    local_10d8 = 1;
                  }
                  else if (iVar13 != iVar35) goto LAB_144b8f2a9;
                  uVar28 = uVar28 + 1;
                } while ((longlong)uVar28 < 3);
                puVar15 = (undefined8 *)FUN_144b95d50(local_778,(uint)local_10b0,local_1048);
                lVar14 = 0xd;
                puVar12 = local_e28;
                do {
                  puVar19 = puVar12;
                  puVar16 = puVar15;
                  uVar41 = puVar16[1];
                  uVar9 = puVar16[2];
                  uVar10 = puVar16[3];
                  *puVar19 = *puVar16;
                  puVar19[1] = uVar41;
                  uVar41 = puVar16[4];
                  uVar11 = puVar16[5];
                  puVar19[2] = uVar9;
                  puVar19[3] = uVar10;
                  uVar9 = puVar16[6];
                  uVar10 = puVar16[7];
                  puVar19[4] = uVar41;
                  puVar19[5] = uVar11;
                  uVar41 = puVar16[8];
                  uVar11 = puVar16[9];
                  puVar19[6] = uVar9;
                  puVar19[7] = uVar10;
                  uVar9 = puVar16[10];
                  uVar10 = puVar16[0xb];
                  puVar19[8] = uVar41;
                  puVar19[9] = uVar11;
                  uVar41 = puVar16[0xc];
                  uVar11 = puVar16[0xd];
                  puVar19[10] = uVar9;
                  puVar19[0xb] = uVar10;
                  uVar9 = puVar16[0xe];
                  uVar10 = puVar16[0xf];
                  puVar19[0xc] = uVar41;
                  puVar19[0xd] = uVar11;
                  puVar19[0xe] = uVar9;
                  puVar19[0xf] = uVar10;
                  lVar14 = lVar14 + -1;
                  puVar15 = puVar16 + 0x10;
                  puVar12 = puVar19 + 0x10;
                } while (lVar14 != 0);
                local_10b0 = 0;
                uVar41 = puVar16[0x11];
                uVar9 = puVar16[0x12];
                uVar10 = puVar16[0x13];
                puVar19[0x10] = puVar16[0x10];
                puVar19[0x11] = uVar41;
                uVar5 = *(undefined4 *)(puVar16 + 0x14);
                uVar6 = *(undefined4 *)((longlong)puVar16 + 0xa4);
                uVar7 = *(undefined4 *)(puVar16 + 0x15);
                uVar8 = *(undefined4 *)((longlong)puVar16 + 0xac);
                local_10a0 = uVar17 & 0xffffffff;
                puVar19[0x12] = uVar9;
                puVar19[0x13] = uVar10;
                *(undefined4 *)(puVar19 + 0x14) = uVar5;
                *(undefined4 *)((longlong)puVar19 + 0xa4) = uVar6;
                *(undefined4 *)(puVar19 + 0x15) = uVar7;
                *(undefined4 *)((longlong)puVar19 + 0xac) = uVar8;
                if (iVar42 != 0) {
                  piVar26 = aiStack_d94;
                  do {
                    lVar14 = (**(code **)(param_1 + 8))(param_2,&local_1080,8);
                    if ((lVar14 != 8) || (iStack_107c != 0x544c5053)) goto LAB_144b8f2a9;
                    _Src = (void *)(*(code *)PTR_malloc_14c6d9888)(local_1080);
                    *(void **)(piVar26 + -3) = _Src;
                    if (_Src == (void *)0x0) goto LAB_144b8f2a9;
                    iVar42 = *piVar26;
                    if ((piVar26[-1] != iVar42 * 2) && (local_1054._2_1_ == '\0'))
                    goto LAB_144b8f2a9;
                    uVar17 = (ulonglong)local_1080;
                    uVar28 = (**(code **)(local_1078 + 8))(local_10a8,_Src,local_1080);
                    if (uVar28 != uVar17) goto LAB_144b8f2a9;
                    if (local_1054._2_1_ == '\0') {
                      memcpy(*(void **)(piVar26 + -5),_Src,uVar17);
                    }
                    else if ((local_1080 != 0) &&
                            (iVar13 = (*(code *)PTR_FUN_14c6d9880)
                                                (_Src,uVar17,*(undefined8 *)(piVar26 + -5),
                                                 (longlong)(iVar42 * 2)), iVar13 == 0))
                    goto LAB_144b8f2a9;
                    FUN_144b959b0(*(longlong *)(piVar26 + -5),
                                  *(longlong *)(piVar26 + -5) + (longlong)iVar42,
                                  *(undefined8 *)(piVar26 + -7),iVar42);
                    piVar26 = piVar26 + 0x1a;
                    local_10b0 = local_10b0 + 1;
                    param_1 = local_1078;
                    param_2 = local_10a8;
                  } while ((longlong)local_10b0 < (longlong)local_10a0);
                }
                puVar15 = local_1088;
                uVar41 = local_1098;
                (*(code *)*local_1088)(local_1098,&DAT_1499771a0,0x19);
                piVar26 = &DAT_149975b70;
                do {
                  local_10e8[0] = acStack_1038[(longlong)*piVar26 * 2 + 1];
                  (*(code *)*puVar15)(uVar41,local_10e8,1);
                  local_10e8[0] = acStack_1038[(longlong)*piVar26 * 2];
                  (*(code *)*puVar15)(uVar41,local_10e8,1);
                  piVar26 = piVar26 + 1;
                } while ((longlong)piVar26 < 0x149975c70);
                local_10e8[0] = '\x11';
                (*(code *)*puVar15)(uVar41,local_10e8,1);
                piVar26 = &DAT_149975b70;
                do {
                  local_10e8[0] = acStack_fb8[(longlong)*piVar26 * 2 + 1];
                  (*(code *)*puVar15)(uVar41,local_10e8,1);
                  local_10e8[0] = acStack_fb8[(longlong)*piVar26 * 2];
                  (*(code *)*puVar15)(uVar41,local_10e8,1);
                  uVar32 = local_10d4;
                  uVar21 = local_10d8;
                  piVar26 = piVar26 + 1;
                } while ((longlong)piVar26 < 0x149975c70);
                iVar42 = (uint)local_10b8;
                local_73 = (undefined1)((ulonglong)local_1070 >> 8);
                local_72 = (undefined1)local_1070;
                local_78 = 0x1100c0ff;
                local_74 = 8;
                local_6f = 0x103;
                local_6c = 0x1110200;
                local_68 = 0xff011103;
                local_64 = 0xa201c4;
                local_71 = (undefined1)((ulonglong)local_10c0 >> 8);
                local_70 = SUB81(local_10c0,0);
                if ((uint)local_10b8 == 0) {
                  if (local_10d4 == 0) {
                    local_6d = (local_10d8 != 0) + '\x11';
                  }
                  else {
                    local_6d = '\"';
                  }
                }
                else {
                  local_6d = '!';
                }
                lVar14 = (*(code *)*puVar15)(uVar41,&local_78,0x18);
                if (((lVar14 == 0x18) &&
                    (lVar14 = (*(code *)*puVar15)(uVar41,&DAT_149975fc1,0x10), lVar14 == 0x10)) &&
                   (lVar14 = (*(code *)*puVar15)(uVar41,&DAT_149975fd8,0xc), lVar14 == 0xc)) {
                  local_10e8[0] = '\x10';
                  (*(code *)*puVar15)(uVar41,local_10e8,1);
                  lVar14 = (*(code *)*puVar15)(uVar41,&DAT_149975fe9,0x10);
                  if ((lVar14 == 0x10) &&
                     (lVar14 = (*(code *)*puVar15)(uVar41,&DAT_149976000,0xa2), lVar14 == 0xa2)) {
                    local_10e8[0] = '\x01';
                    (*(code *)*puVar15)(uVar41,local_10e8,1);
                    lVar14 = (*(code *)*puVar15)(uVar41,&DAT_1499760a9,0x10);
                    if ((lVar14 == 0x10) &&
                       (lVar14 = (*(code *)*puVar15)(uVar41,&DAT_1499760c0,0xc), lVar14 == 0xc)) {
                      local_10e8[0] = '\x11';
                      (*(code *)*puVar15)(uVar41,local_10e8,1);
                      lVar14 = (*(code *)*puVar15)(uVar41,&DAT_1499760d1,0x10);
                      if (((lVar14 == 0x10) &&
                          (lVar14 = (*(code *)*puVar15)(uVar41,&DAT_1499760f0,0xa2), lVar14 == 0xa2)
                          ) && (lVar14 = (*(code *)*puVar15)(uVar41,&DAT_149977208,0xe),
                               lVar14 == 0xe)) {
                        iVar13 = local_1090;
                        if (uVar32 == 0) {
                          if (iVar42 == 0) {
                            if (uVar21 == 0) {
                              if (local_10a0 != 0) {
                                puVar20 = local_dc8;
                                do {
                                  uVar31 = *puVar20;
                                  uVar21 = puVar20[-4];
                                  uVar28 = (ulonglong)(int)uVar21;
                                  local_10b0 = CONCAT44(local_10b0._4_4_,uVar21);
                                  if (0 < (int)uVar31) {
                                    local_10a8 = 0;
                                    puVar22 = (uint *)(uVar28 * 2);
                                    local_1078 = (ulonglong)uVar31;
                                    local_10c0 = puVar22;
                                    local_10b8 = puVar20;
                                    do {
                                      puVar15 = local_1088;
                                      if (0 < (int)uVar28) {
                                        lVar14 = *(longlong *)(puVar20 + 6) + local_10a8;
                                        uVar28 = uVar28 & 0xffffffff;
                                        uVar17 = local_1068;
                                        do {
                                          if (uVar17 != 0) {
                                            uVar18 = uVar30;
                                            uVar36 = uVar17;
                                            uVar37 = uVar30;
                                            lVar33 = lVar14;
                                            do {
                                              do {
                                                uVar17 = uVar18 + 4;
                                                local_778[(longlong)
                                                          *(int *)((longlong)&DAT_149975c70 + uVar18
                                                                  ) + uVar37] =
                                                     *(short *)(lVar33 + (longlong)
                                                                         (int)(*(int *)((longlong)
                                                                                        &
                                                  DAT_149975b70 + uVar18) * uVar31 * uVar21) * 2) +
                                                  -0x80;
                                                uVar18 = uVar17;
                                              } while ((longlong)uVar17 < 0x100);
                                              lVar33 = lVar33 + (longlong)
                                                                (int)(uVar31 * uVar21 * 0x40) * 2;
                                              uVar37 = uVar37 + 0x40;
                                              uVar36 = uVar36 - 1;
                                              uVar18 = uVar30;
                                              uVar17 = local_1068;
                                            } while (uVar36 != 0);
                                          }
                                          local_10f0 = &DAT_1499769a0;
                                          local_10f8 = &DAT_1499761a0;
                                          local_1100 = local_10d0;
                                          local_1108 = local_778;
                                          local_10d0 = FUN_144b96700(puVar15,local_1098,&local_10e0,
                                                                     &local_10dc);
                                          local_10f0 = &DAT_149976da0;
                                          local_10f8 = &DAT_1499765a0;
                                          local_1100 = local_10cc;
                                          local_1108 = (int *)local_678;
                                          local_10cc = FUN_144b96700(puVar15,local_1098,&local_10e0,
                                                                     &local_10dc);
                                          local_10f0 = &DAT_149976da0;
                                          local_10f8 = &DAT_1499765a0;
                                          local_1100 = local_10c8;
                                          local_1108 = (int *)local_578;
                                          local_10c8 = FUN_144b96700(puVar15,local_1098,&local_10e0,
                                                                     &local_10dc);
                                          lVar14 = lVar14 + 2;
                                          uVar28 = uVar28 - 1;
                                        } while (uVar28 != 0);
                                        uVar28 = local_10b0 & 0xffffffff;
                                        puVar20 = local_10b8;
                                        puVar22 = local_10c0;
                                      }
                                      local_10a8 = local_10a8 + (longlong)puVar22;
                                      local_1078 = local_1078 - 1;
                                    } while (local_1078 != 0);
                                  }
                                  puVar20 = puVar20 + 0x1a;
                                  local_10a0 = local_10a0 - 1;
                                } while (local_10a0 != 0);
                                local_10a0 = 0;
                                puVar15 = local_1088;
                                uVar41 = local_1098;
                                iVar13 = local_10dc;
                                uVar31 = local_10e0;
                                local_10b8 = puVar20;
                              }
                            }
                            else {
LAB_144b8ffd2:
                              if (local_10a0 != 0) {
                                puVar20 = local_dd8;
                                do {
                                  uVar31 = puVar20[4];
                                  local_10d8 = 0;
                                  local_10b0 = CONCAT44(local_10b0._4_4_,uVar31);
                                  if (0 < (int)uVar31) {
                                    uVar21 = *puVar20;
                                    local_10b8 = (uint *)CONCAT44(local_10b8._4_4_,uVar21);
                                    local_10c0 = puVar20;
                                    do {
                                      lVar14 = 0;
                                      if (0 < (int)uVar21) {
                                        local_1078 = *(ulonglong *)(puVar20 + 10);
                                        local_10a8 = (ulonglong)uVar21;
                                        local_1070 = 1;
                                        uVar32 = uVar21;
                                        do {
                                          uVar41 = local_1098;
                                          lVar33 = 0;
                                          if ((int)local_10d8 < (int)(local_10d8 + 2)) {
                                            uVar30 = (ulonglong)((local_10d8 + 2) - local_10d8);
                                            lVar40 = local_1078 +
                                                     ((int)(uVar32 * local_10d8) + lVar14) * 2;
                                            lVar29 = lVar33;
                                            do {
                                              if (lVar14 < local_1070) {
                                                lVar39 = local_1070 - lVar14;
                                                lVar34 = lVar29 << 6;
                                                lVar29 = lVar29 + lVar39;
                                                lVar24 = lVar33;
                                                lVar38 = lVar40;
                                                do {
                                                  do {
                                                    lVar23 = lVar24 + 4;
                                                    local_778[*(int *)((longlong)&DAT_149975c70 +
                                                                      lVar24) + lVar34] =
                                                         *(short *)(lVar38 + (longlong)
                                                                             (int)(*(int *)((
                                                  longlong)&DAT_149975b70 + lVar24) *
                                                  uVar31 * uVar21) * 2) + -0x80;
                                                  lVar24 = lVar23;
                                                  } while (lVar23 < 0x100);
                                                  lVar38 = lVar38 + 2;
                                                  lVar34 = lVar34 + 0x40;
                                                  lVar39 = lVar39 + -1;
                                                  lVar24 = lVar33;
                                                } while (lVar39 != 0);
                                              }
                                              lVar40 = lVar40 + (longlong)(int)uVar32 * 2;
                                              uVar30 = uVar30 - 1;
                                              puVar20 = local_10c0;
                                              puVar15 = local_1088;
                                            } while (uVar30 != 0);
                                          }
                                          lVar33 = local_1078 +
                                                   (longlong)(int)(uVar31 * uVar21 * 0x40) * 2;
                                          if (1 < local_1068) {
                                            puVar20 = puVar20 + 5;
                                            lVar40 = local_1068 - 1;
                                            lVar29 = 0x40;
                                            do {
                                              lVar24 = 0;
                                              uVar32 = *puVar20;
                                              uVar3 = puVar20[-4];
                                              uVar4 = puVar20[-4];
                                              do {
                                                piVar26 = (int *)((longlong)&DAT_149975b70 + lVar24)
                                                ;
                                                piVar1 = (int *)((longlong)&DAT_149975c70 + lVar24);
                                                lVar24 = lVar24 + 4;
                                                local_478[*piVar1 + lVar29] =
                                                     *(short *)(lVar33 + ((int)(((int)local_10d8 / 2
                                                                                ) * uVar3) + lVar14)
                                                                         * 2 +
                                                               (longlong)
                                                               (int)(*piVar26 * uVar32 * uVar4) * 2)
                                                     + -0x80;
                                              } while (lVar24 < 0x100);
                                              puVar20 = puVar20 + 1;
                                              lVar29 = lVar29 + 0x40;
                                              lVar33 = lVar33 + (longlong)
                                                                (int)(uVar32 * uVar4 * 0x40) * 2;
                                              lVar40 = lVar40 + -1;
                                              puVar15 = local_1088;
                                            } while (lVar40 != 0);
                                          }
                                          local_10f0 = &DAT_1499769a0;
                                          local_10f8 = &DAT_1499761a0;
                                          local_1100 = local_10d0;
                                          local_1108 = local_778;
                                          local_1100 = FUN_144b96700(puVar15,local_1098,&local_10e0,
                                                                     &local_10dc);
                                          local_10f0 = &DAT_1499769a0;
                                          local_10f8 = &DAT_1499761a0;
                                          local_1108 = (int *)local_678;
                                          local_10d0 = FUN_144b96700(puVar15,uVar41,&local_10e0,
                                                                     &local_10dc);
                                          local_10f0 = &DAT_149976da0;
                                          local_10f8 = &DAT_1499765a0;
                                          local_1100 = local_10cc;
                                          local_1108 = (int *)local_378;
                                          local_10cc = FUN_144b96700(puVar15,uVar41,&local_10e0,
                                                                     &local_10dc);
                                          local_10f0 = &DAT_149976da0;
                                          local_10f8 = &DAT_1499765a0;
                                          local_1100 = local_10c8;
                                          local_1108 = (int *)local_278;
                                          local_10c8 = FUN_144b96700(puVar15,uVar41,&local_10e0,
                                                                     &local_10dc);
                                          lVar14 = lVar14 + 1;
                                          local_1070 = local_1070 + 1;
                                          local_10a8 = local_10a8 - 1;
                                          puVar20 = local_10c0;
                                          uVar32 = (uint)local_10b8;
                                        } while (local_10a8 != 0);
                                        local_10a8 = 0;
                                        uVar31 = (uint)local_10b0;
                                        uVar21 = (uint)local_10b8;
                                      }
                                      local_10d8 = local_10d8 + 2;
                                    } while ((int)local_10d8 < (int)uVar31);
                                  }
                                  puVar20 = puVar20 + 0x1a;
                                  local_10a0 = local_10a0 - 1;
                                } while (local_10a0 != 0);
                                local_10a0 = 0;
                                uVar41 = local_1098;
                                iVar13 = local_10dc;
                                uVar31 = local_10e0;
                                local_10c0 = puVar20;
                              }
                            }
                          }
                          else {
LAB_144b8fc40:
                            if (local_10a0 != 0) {
                              puVar20 = local_dd8;
                              do {
                                uVar31 = puVar20[4];
                                local_10d8 = 0;
                                if (0 < (int)uVar31) {
                                  uVar21 = *puVar20;
                                  uVar28 = uVar30;
                                  local_10c0 = puVar20;
                                  do {
                                    local_10d4 = 0;
                                    uVar32 = (uint)uVar28;
                                    if (0 < (int)uVar21) {
                                      local_10a8 = *(ulonglong *)(puVar20 + 10);
                                      iVar42 = uVar31 * uVar21;
                                      local_10b8 = (uint *)0x2;
                                      local_10b0 = CONCAT44(local_10b0._4_4_,iVar42);
                                      uVar17 = uVar30;
                                      uVar18 = uVar30;
                                      do {
                                        uVar41 = local_1098;
                                        iVar13 = (int)uVar28;
                                        uVar31 = (uint)uVar17;
                                        if (iVar13 < iVar13 + 1) {
                                          uVar17 = (ulonglong)(uint)((iVar13 + 1) - iVar13);
                                          lVar14 = local_10a8 +
                                                   ((longlong)(int)(uVar21 * iVar13) + uVar18) * 2;
                                          uVar28 = uVar30;
                                          do {
                                            if ((longlong)uVar18 < (longlong)local_10b8) {
                                              lVar29 = (longlong)local_10b8 - uVar18;
                                              lVar40 = uVar28 << 6;
                                              uVar28 = uVar28 + lVar29;
                                              uVar36 = uVar30;
                                              lVar33 = lVar14;
                                              do {
                                                do {
                                                  uVar37 = uVar36 + 4;
                                                  local_778[*(int *)((longlong)&DAT_149975c70 +
                                                                    uVar36) + lVar40] =
                                                       *(short *)(lVar33 + (longlong)
                                                                           (*(int *)((longlong)
                                                                                     &DAT_149975b70
                                                                                    + uVar36) *
                                                                           iVar42) * 2) + -0x80;
                                                  uVar36 = uVar37;
                                                } while ((longlong)uVar37 < 0x100);
                                                lVar33 = lVar33 + 2;
                                                lVar40 = lVar40 + 0x40;
                                                lVar29 = lVar29 + -1;
                                                uVar36 = uVar30;
                                              } while (lVar29 != 0);
                                            }
                                            lVar14 = lVar14 + (longlong)(int)uVar21 * 2;
                                            uVar17 = uVar17 - 1;
                                            puVar20 = local_10c0;
                                            puVar15 = local_1088;
                                            uVar31 = local_10d4;
                                          } while (uVar17 != 0);
                                        }
                                        lVar14 = local_10a8 + (longlong)(iVar42 << 6) * 2;
                                        if (1 < local_1068) {
                                          lVar33 = local_1068 - 1;
                                          lVar40 = 0x40;
                                          puVar20 = puVar20 + 5;
                                          do {
                                            uVar21 = puVar20[-4];
                                            iVar42 = uVar21 * *puVar20;
                                            uVar28 = uVar30;
                                            do {
                                              piVar26 = (int *)((longlong)&DAT_149975b70 + uVar28);
                                              piVar1 = (int *)((longlong)&DAT_149975c70 + uVar28);
                                              uVar28 = uVar28 + 4;
                                              local_478[*piVar1 + lVar40] =
                                                   *(short *)(lVar14 + ((longlong)
                                                                        (int)(uVar21 * local_10d8) +
                                                                       (longlong)((int)uVar31 / 2))
                                                                       * 2 +
                                                             (longlong)(*piVar26 * iVar42) * 2) +
                                                   -0x80;
                                            } while ((longlong)uVar28 < 0x100);
                                            puVar20 = puVar20 + 1;
                                            lVar40 = lVar40 + 0x40;
                                            lVar14 = lVar14 + (longlong)(iVar42 * 0x40) * 2;
                                            lVar33 = lVar33 + -1;
                                          } while (lVar33 != 0);
                                          puVar15 = local_1088;
                                          iVar42 = (uint)local_10b0;
                                        }
                                        local_10f0 = &DAT_1499769a0;
                                        local_10f8 = &DAT_1499761a0;
                                        local_1100 = local_10d0;
                                        local_1108 = local_778;
                                        local_1100 = FUN_144b96700(puVar15,local_1098,&local_10e0,
                                                                   &local_10dc);
                                        local_10f0 = &DAT_1499769a0;
                                        local_10f8 = &DAT_1499761a0;
                                        local_1108 = (int *)local_678;
                                        local_10d0 = FUN_144b96700(puVar15,uVar41,&local_10e0,
                                                                   &local_10dc);
                                        local_10f0 = &DAT_149976da0;
                                        local_10f8 = &DAT_1499765a0;
                                        local_1100 = local_10cc;
                                        local_1108 = (int *)local_378;
                                        local_10cc = FUN_144b96700(puVar15,uVar41,&local_10e0,
                                                                   &local_10dc);
                                        local_10f0 = &DAT_149976da0;
                                        local_10f8 = &DAT_1499765a0;
                                        local_1100 = local_10c8;
                                        local_1108 = (int *)local_278;
                                        local_10c8 = FUN_144b96700(puVar15,uVar41,&local_10e0,
                                                                   &local_10dc);
                                        uVar18 = uVar18 + 2;
                                        local_10d4 = local_10d4 + 2;
                                        uVar17 = (ulonglong)local_10d4;
                                        local_10b8 = (uint *)((longlong)local_10b8 + 2);
                                        uVar28 = (ulonglong)local_10d8;
                                        uVar21 = *local_10c0;
                                        puVar20 = local_10c0;
                                      } while ((int)local_10d4 < (int)uVar21);
                                      uVar31 = local_10c0[4];
                                      uVar32 = local_10d8;
                                    }
                                    local_10d8 = uVar32 + 1;
                                    uVar28 = (ulonglong)local_10d8;
                                  } while ((int)local_10d8 < (int)uVar31);
                                }
                                puVar20 = puVar20 + 0x1a;
                                local_10a0 = local_10a0 - 1;
                              } while (local_10a0 != 0);
                              local_10a0 = 0;
                              uVar41 = local_1098;
                              iVar13 = local_10dc;
                              uVar31 = local_10e0;
                              local_10c0 = puVar20;
                            }
                          }
                        }
                        else {
                          if (iVar42 != 0) goto LAB_144b8fc40;
                          if (uVar21 != 0) goto LAB_144b8ffd2;
                          if (local_10a0 != 0) {
                            puVar20 = local_dd8;
                            do {
                              uVar31 = puVar20[4];
                              local_10d8 = 0;
                              if (0 < (int)uVar31) {
                                uVar21 = *puVar20;
                                local_10c0 = puVar20;
                                do {
                                  local_10b8 = (uint *)0x0;
                                  local_10d4 = 0;
                                  if (0 < (int)uVar21) {
                                    local_10a8 = *(ulonglong *)(puVar20 + 10);
                                    iVar42 = uVar31 * uVar21;
                                    local_10b0 = 2;
                                    do {
                                      uVar41 = local_1098;
                                      puVar22 = local_10b8;
                                      lVar14 = 0;
                                      if ((int)local_10d8 < (int)(local_10d8 + 2)) {
                                        uVar30 = (ulonglong)((local_10d8 + 2) - local_10d8);
                                        lVar33 = local_10a8 +
                                                 ((longlong)(int)(uVar21 * local_10d8) +
                                                 (longlong)local_10b8) * 2;
                                        lVar40 = lVar14;
                                        do {
                                          if ((longlong)local_10b8 < (longlong)local_10b0) {
                                            lVar34 = local_10b0 - (longlong)local_10b8;
                                            lVar38 = lVar40 << 6;
                                            lVar40 = lVar40 + lVar34;
                                            lVar29 = lVar14;
                                            lVar24 = lVar33;
                                            do {
                                              do {
                                                lVar39 = lVar29 + 4;
                                                local_778[*(int *)((longlong)&DAT_149975c70 + lVar29
                                                                  ) + lVar38] =
                                                     *(short *)(lVar24 + (longlong)
                                                                         (*(int *)((longlong)
                                                                                   &DAT_149975b70 +
                                                                                  lVar29) * iVar42)
                                                                         * 2) + -0x80;
                                                lVar29 = lVar39;
                                              } while (lVar39 < 0x100);
                                              lVar24 = lVar24 + 2;
                                              lVar38 = lVar38 + 0x40;
                                              lVar34 = lVar34 + -1;
                                              lVar29 = lVar14;
                                            } while (lVar34 != 0);
                                          }
                                          lVar33 = lVar33 + (longlong)(int)uVar21 * 2;
                                          uVar30 = uVar30 - 1;
                                          puVar20 = local_10c0;
                                          puVar15 = local_1088;
                                        } while (uVar30 != 0);
                                      }
                                      lVar14 = local_10a8 + (longlong)(iVar42 * 0x40) * 2;
                                      if (1 < local_1068) {
                                        lVar33 = local_1068 - 1;
                                        lVar40 = 0x40;
                                        puVar20 = puVar20 + 5;
                                        do {
                                          lVar29 = 0;
                                          uVar31 = puVar20[-4];
                                          uVar21 = puVar20[-4];
                                          uVar32 = *puVar20;
                                          do {
                                            piVar26 = (int *)((longlong)&DAT_149975b70 + lVar29);
                                            piVar1 = (int *)((longlong)&DAT_149975c70 + lVar29);
                                            lVar29 = lVar29 + 4;
                                            local_478[*piVar1 + lVar40] =
                                                 *(short *)(lVar14 + ((longlong)
                                                                      (int)(((int)local_10d8 / 2) *
                                                                           uVar21) +
                                                                     (longlong)((int)local_10d4 / 2)
                                                                     ) * 2 +
                                                           (longlong)
                                                           (int)(*piVar26 * uVar31 * uVar32) * 2) +
                                                 -0x80;
                                          } while (lVar29 < 0x100);
                                          puVar20 = puVar20 + 1;
                                          lVar40 = lVar40 + 0x40;
                                          lVar14 = lVar14 + (longlong)(int)(uVar31 * uVar32 * 0x40)
                                                            * 2;
                                          lVar33 = lVar33 + -1;
                                          puVar15 = local_1088;
                                        } while (lVar33 != 0);
                                      }
                                      local_10f0 = &DAT_1499769a0;
                                      local_10f8 = &DAT_1499761a0;
                                      local_1100 = local_10d0;
                                      local_1108 = local_778;
                                      local_1100 = FUN_144b96700(puVar15,local_1098,&local_10e0,
                                                                 &local_10dc);
                                      local_10f0 = &DAT_1499769a0;
                                      local_10f8 = &DAT_1499761a0;
                                      local_1108 = (int *)local_678;
                                      local_1100 = FUN_144b96700(puVar15,uVar41,&local_10e0,
                                                                 &local_10dc);
                                      local_10f0 = &DAT_1499769a0;
                                      local_10f8 = &DAT_1499761a0;
                                      local_1108 = (int *)local_578;
                                      local_1100 = FUN_144b96700(puVar15,uVar41,&local_10e0,
                                                                 &local_10dc);
                                      local_10f0 = &DAT_1499769a0;
                                      local_10f8 = &DAT_1499761a0;
                                      local_1108 = local_478;
                                      local_10d0 = FUN_144b96700(puVar15,uVar41,&local_10e0,
                                                                 &local_10dc);
                                      local_10f0 = &DAT_149976da0;
                                      local_10f8 = &DAT_1499765a0;
                                      local_1100 = local_10cc;
                                      local_1108 = (int *)local_378;
                                      local_10cc = FUN_144b96700(puVar15,uVar41,&local_10e0,
                                                                 &local_10dc);
                                      local_10f0 = &DAT_149976da0;
                                      local_10f8 = &DAT_1499765a0;
                                      local_1100 = local_10c8;
                                      local_1108 = (int *)local_278;
                                      local_10c8 = FUN_144b96700(puVar15,uVar41,&local_10e0,
                                                                 &local_10dc);
                                      local_10d4 = local_10d4 + 2;
                                      local_10b0 = local_10b0 + 2;
                                      local_10b8 = (uint *)((longlong)puVar22 + 2);
                                      uVar21 = *local_10c0;
                                      puVar20 = local_10c0;
                                    } while ((int)local_10d4 < (int)uVar21);
                                    uVar31 = local_10c0[4];
                                  }
                                  local_10d8 = local_10d8 + 2;
                                } while ((int)local_10d8 < (int)uVar31);
                              }
                              puVar20 = puVar20 + 0x1a;
                              local_10a0 = local_10a0 - 1;
                            } while (local_10a0 != 0);
                            local_10a0 = 0;
                            uVar41 = local_1098;
                            iVar13 = local_10dc;
                            uVar31 = local_10e0;
                            local_10c0 = puVar20;
                          }
                        }
                        lVar14 = 0x10;
                        uVar21 = iVar13 + 7;
                        uVar31 = uVar31 | 0x7f << (0x18U - (char)uVar21 & 0x1f);
                        if (7 < (int)uVar21) {
                          uVar30 = (ulonglong)(uVar21 >> 3);
                          do {
                            cVar25 = (char)(uVar31 >> 0x10);
                            local_10e8[0] = cVar25;
                            (*(code *)*puVar15)(uVar41,local_10e8,1);
                            if (cVar25 == -1) {
                              local_10e8[0] = '\0';
                              (*(code *)*puVar15)(uVar41,local_10e8,1);
                            }
                            uVar31 = uVar31 << 8;
                            uVar30 = uVar30 - 1;
                          } while (uVar30 != 0);
                        }
                        local_10e8[0] = -1;
                        (*(code *)*puVar15)(uVar41,local_10e8,1);
                        local_10e8[0] = -0x27;
                        (*(code *)*puVar15)(uVar41,local_10e8,1);
                        plVar27 = local_da8;
                        do {
                          if (plVar27[-1] != 0) {
                            (*(code *)PTR_free_14c6d9890)();
                          }
                          if (*plVar27 != 0) {
                            (*(code *)PTR_free_14c6d9890)();
                          }
                          if (plVar27[1] != 0) {
                            (*(code *)PTR_free_14c6d9890)();
                          }
                          plVar27 = plVar27 + 0xd;
                          lVar14 = lVar14 + -1;
                        } while (lVar14 != 0);
                        goto LAB_144b8f308;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_144b8f2a9:
  lVar14 = 0x10;
  plVar27 = local_da8;
  do {
    if (plVar27[-1] != 0) {
      (*(code *)PTR_free_14c6d9890)();
    }
    if (*plVar27 != 0) {
      (*(code *)PTR_free_14c6d9890)();
    }
    if (plVar27[1] != 0) {
      (*(code *)PTR_free_14c6d9890)();
    }
    plVar27 = plVar27 + 0xd;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
LAB_144b8f308:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_1128);
}



// FUNCTION 144b90840 FUN_144b90840 body=114 status=ok
// SIG undefined FUN_144b90840(void)

void FUN_144b90840(undefined8 param_1,int param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined4 param_5)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_10 = (longlong)param_2;
  local_38 = 0;
  local_20 = param_1;
  local_18 = param_1;
  FUN_144b8f140(&PTR_FUN_149975fa0,&local_20,&PTR_FUN_149975fa0,&local_38,param_5);
  *param_3 = local_38;
  *param_4 = (undefined4)local_28;
  return;
}



// FUNCTION 144b908c0 FUN_144b908c0 body=115 status=ok
// SIG undefined FUN_144b908c0(void)

void FUN_144b908c0(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)(param_1 + 0x38);
  iVar2 = (**(code **)(param_1 + 0x10))
                    (*(undefined8 *)(param_1 + 0x28),puVar1,*(undefined4 *)(param_1 + 0x34));
  *(int *)(param_1 + 0xb8) =
       *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
  *(undefined1 **)(param_1 + 0xc0) = puVar1;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(longlong *)(param_1 + 200) = param_1 + 0x39;
    *puVar1 = 0;
    return;
  }
  *(longlong *)(param_1 + 200) = param_1 + 0x38 + (longlong)iVar2;
  return;
}



// FUNCTION 144b90940 FUN_144b90940 body=121 status=ok
// SIG undefined FUN_144b90940(void)

undefined8 FUN_144b90940(int param_1,int param_2,int param_3,int param_4)

{
  if ((((((-1 < param_1) && (-1 < param_2)) &&
        ((param_2 == 0 || (param_1 <= (int)(0x7fffffff / (longlong)param_2))))) &&
       ((param_1 = param_1 * param_2, -1 < param_1 && (-1 < param_3)))) &&
      ((param_3 == 0 || (param_1 <= (int)(0x7fffffff / (longlong)param_3))))) &&
     ((-1 < param_4 && (param_1 * param_3 <= 0x7fffffff - param_4)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 144b909c0 FUN_144b909c0 body=69 status=ok
// SIG undefined FUN_144b909c0(void)

bool FUN_144b909c0(uint param_1,uint param_2)

{
  if ((int)(~param_1 ^ ~param_2) < 0) {
    return true;
  }
  if (((int)param_1 < 0) && ((int)param_2 < 0)) {
    return (int)(-0x80000000 - param_2) <= (int)param_1;
  }
  return (int)param_1 <= (int)(0x7fffffff - param_2);
}



// FUNCTION 144b90a10 FUN_144b90a10 body=108 status=ok
// SIG undefined FUN_144b90a10(void)

bool FUN_144b90a10(ushort param_1,ushort param_2)

{
  if ((ushort)(param_2 + 1) < 2) {
    return true;
  }
  if (((param_1 ^ param_2) & 0x8000) == 0) {
    return (int)(short)param_1 <= (int)(0x7fff / (longlong)(int)(short)param_2);
  }
  if ((short)param_2 < 0) {
    return (int)(short)param_1 <= (int)(-0x8000 / (longlong)(int)(short)param_2);
  }
  return -0x8000 / (int)(short)param_2 <= (int)(short)param_1;
}



// FUNCTION 144b90a80 FUN_144b90a80 body=83 status=ok
// SIG undefined FUN_144b90a80(void)

void FUN_144b90a80(longlong param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (param_2 < 0) {
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 200);
      return;
    }
    if ((*(longlong *)(param_1 + 0x10) != 0) &&
       (iVar1 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc0), iVar1 < param_2)) {
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x000144b90ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x28),param_2 - iVar1);
      return;
    }
    *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + (longlong)param_2;
  }
  return;
}



// FUNCTION 144b90ae0 FUN_144b90ae0 body=172 status=ok
// SIG undefined FUN_144b90ae0(void)

int FUN_144b90ae0(longlong param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  
  pbVar2 = *(byte **)(param_1 + 0xc0);
  if (pbVar2 < *(byte **)(param_1 + 200)) {
    bVar3 = *pbVar2;
    *(byte **)(param_1 + 0xc0) = pbVar2 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    bVar3 = 0;
  }
  else {
    FUN_144b908c0();
    bVar3 = **(byte **)(param_1 + 0xc0);
    *(byte **)(param_1 + 0xc0) = *(byte **)(param_1 + 0xc0) + 1;
  }
  pbVar2 = *(byte **)(param_1 + 0xc0);
  if (*(byte **)(param_1 + 200) <= pbVar2) {
    if (*(int *)(param_1 + 0x30) == 0) {
      return (uint)bVar3 * 0x100;
    }
    FUN_144b908c0(param_1);
    pbVar2 = *(byte **)(param_1 + 0xc0);
  }
  bVar1 = *pbVar2;
  *(byte **)(param_1 + 0xc0) = pbVar2 + 1;
  return (uint)bVar1 + (uint)bVar3 * 0x100;
}



// FUNCTION 144b90b90 FUN_144b90b90 body=500 status=ok
// SIG undefined FUN_144b90b90(void)

undefined8 FUN_144b90b90(void *param_1,longlong param_2)

{
  ulonglong uVar1;
  byte bVar2;
  undefined2 *puVar3;
  longlong lVar4;
  ushort *puVar5;
  ulonglong uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined1 *puVar11;
  uint uVar12;
  ulonglong uVar14;
  byte *pbVar15;
  int *piVar16;
  int iVar17;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar13;
  
  uVar6 = 0;
  uVar1 = uVar6;
  uVar10 = uVar6;
  uVar14 = uVar6;
  do {
    iVar17 = (int)uVar14;
    if (0 < *(int *)(param_2 + (longlong)iVar17 * 4)) {
      uVar13 = uVar6;
      do {
        *(char *)((longlong)param_1 + uVar1 + 0x500) = (char)uVar14 + '\x01';
        uVar10 = (ulonglong)((int)uVar10 + 1);
        uVar1 = uVar1 + 1;
        if (0x100 < (longlong)uVar1) {
          *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xd8) = "bad size list";
          return 0;
        }
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
      } while ((int)uVar12 < *(int *)(param_2 + (longlong)iVar17 * 4));
    }
    uVar14 = (ulonglong)(iVar17 + 1U);
  } while ((int)(iVar17 + 1U) < 0x10);
  piVar16 = (int *)((longlong)param_1 + 0x608);
  uVar12 = 1;
  pbVar7 = (byte *)((longlong)param_1 + 0x500);
  *(undefined1 *)((longlong)(int)uVar10 + 0x500 + (longlong)param_1) = 0;
  iVar17 = 0xf;
  uVar1 = uVar6;
  uVar10 = uVar6;
  uVar14 = uVar6;
  pbVar15 = pbVar7;
  do {
    uVar8 = (uint)uVar10;
    piVar16[0x12] = (int)uVar1 - uVar8;
    if (*pbVar15 == uVar12) {
      puVar3 = (undefined2 *)((longlong)param_1 + uVar14 * 2 + 0x200);
      do {
        *puVar3 = (short)uVar10;
        puVar3 = puVar3 + 1;
        uVar14 = uVar14 + 1;
        uVar1 = (ulonglong)((int)uVar1 + 1);
        pbVar15 = pbVar7 + uVar14;
        uVar9 = (uint)uVar10;
        uVar8 = uVar9 + 1;
        uVar10 = (ulonglong)uVar8;
      } while (pbVar7[uVar14] == uVar12);
      if ((uint)(1 << ((byte)uVar12 & 0x1f)) <= uVar9) {
        *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xd8) = "bad code lengths";
        return 0;
      }
    }
    uVar10 = (ulonglong)(uVar8 * 2);
    *piVar16 = uVar8 << ((byte)iVar17 & 0x1f);
    uVar12 = uVar12 + 1;
    piVar16 = piVar16 + 1;
    iVar17 = iVar17 + -1;
    if (iVar17 < 0) {
      *(undefined4 *)((longlong)param_1 + (longlong)(int)uVar12 * 4 + 0x604) = 0xffffffff;
      memset(param_1,0xff,0x200);
      if (0 < (int)uVar1) {
        puVar5 = (ushort *)((longlong)param_1 + 0x200);
        do {
          if (*pbVar7 < 10) {
            bVar2 = 9 - *pbVar7;
            iVar17 = 1 << (bVar2 & 0x1f);
            if (0 < iVar17) {
              puVar11 = (undefined1 *)
                        ((longlong)(int)((uint)*puVar5 << (bVar2 & 0x1f)) + (longlong)param_1);
              for (lVar4 = (longlong)iVar17; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar11 = (char)uVar6;
                puVar11 = puVar11 + 1;
              }
            }
          }
          uVar12 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar12;
          puVar5 = puVar5 + 1;
          pbVar7 = pbVar7 + 1;
        } while ((int)uVar12 < (int)uVar1);
      }
      return 1;
    }
  } while( true );
}



// FUNCTION 144b90d90 FUN_144b90d90 body=221 status=ok
// SIG undefined FUN_144b90d90(void)

void FUN_144b90d90(short *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  sbyte sVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  byte *pbVar7;
  
  iVar6 = 0;
  pbVar7 = param_2;
  do {
    bVar1 = *pbVar7;
    *param_1 = 0;
    if (bVar1 != 0xff) {
      bVar2 = param_2[(ulonglong)bVar1 + 0x400];
      bVar1 = param_2[(ulonglong)bVar1 + 0x500];
      uVar5 = bVar2 & 0xf;
      if (((bVar2 & 0xf) != 0) && ((ushort)(bVar1 + uVar5) < 10)) {
        sVar3 = (sbyte)uVar5;
        iVar4 = (int)(iVar6 << (bVar1 & 0x1f) & 0x1ffU) >> (9U - sVar3 & 0x1f);
        if (iVar4 < 1 << (sVar3 - 1U & 0x1f)) {
          iVar4 = iVar4 + (1 - (1 << sVar3));
        }
        if (iVar4 + 0x80U < 0x100) {
          *param_1 = ((short)iVar4 * 0x10 + (ushort)(bVar2 >> 4)) * 0x10 + uVar5 + (ushort)bVar1;
        }
      }
    }
    iVar6 = iVar6 + 1;
    pbVar7 = pbVar7 + 1;
    param_1 = param_1 + 1;
  } while (iVar6 < 0x200);
  return;
}



// FUNCTION 144b90e70 FUN_144b90e70 body=473 status=ok
// SIG undefined FUN_144b90e70(void)

void FUN_144b90e70(longlong *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  
  do {
    if (*(int *)((longlong)param_1 + 0x482c) == 0) {
      lVar2 = *param_1;
      pbVar3 = *(byte **)(lVar2 + 0xc0);
      if (pbVar3 < *(byte **)(lVar2 + 200)) {
        bVar6 = *pbVar3;
        *(byte **)(lVar2 + 0xc0) = pbVar3 + 1;
      }
      else if (*(int *)(lVar2 + 0x30) == 0) {
        bVar6 = 0;
      }
      else {
        FUN_144b908c0(lVar2);
        bVar6 = **(byte **)(lVar2 + 0xc0);
        *(byte **)(lVar2 + 0xc0) = *(byte **)(lVar2 + 0xc0) + 1;
      }
      uVar8 = (uint)bVar6;
      if (uVar8 == 0xff) {
        lVar2 = *param_1;
        pcVar4 = *(char **)(lVar2 + 0xc0);
        if (pcVar4 < *(char **)(lVar2 + 200)) {
          cVar7 = *pcVar4;
          *(char **)(lVar2 + 0xc0) = pcVar4 + 1;
        }
        else if (*(int *)(lVar2 + 0x30) == 0) {
          cVar7 = '\0';
        }
        else {
          FUN_144b908c0(lVar2);
          cVar7 = **(char **)(lVar2 + 0xc0);
          *(char **)(lVar2 + 0xc0) = *(char **)(lVar2 + 0xc0) + 1;
        }
        while (cVar7 == -1) {
          lVar2 = *param_1;
          pcVar4 = *(char **)(lVar2 + 0xc0);
          if (pcVar4 < *(char **)(lVar2 + 200)) {
            cVar7 = *pcVar4;
            *(char **)(lVar2 + 0xc0) = pcVar4 + 1;
          }
          else if (*(int *)(lVar2 + 0x30) == 0) {
            cVar7 = '\0';
          }
          else {
            puVar1 = (undefined1 *)(lVar2 + 0x38);
            iVar5 = (**(code **)(lVar2 + 0x10))
                              (*(undefined8 *)(lVar2 + 0x28),puVar1,*(undefined4 *)(lVar2 + 0x34));
            *(int *)(lVar2 + 0xb8) =
                 *(int *)(lVar2 + 0xb8) + (*(int *)(lVar2 + 0xc0) - *(int *)(lVar2 + 0xd0));
            *(undefined1 **)(lVar2 + 0xc0) = puVar1;
            if (iVar5 == 0) {
              *(undefined4 *)(lVar2 + 0x30) = 0;
              *(longlong *)(lVar2 + 200) = lVar2 + 0x39;
              *puVar1 = 0;
            }
            else {
              *(longlong *)(lVar2 + 200) = lVar2 + 0x38 + (longlong)iVar5;
            }
            cVar7 = **(char **)(lVar2 + 0xc0);
            *(char **)(lVar2 + 0xc0) = *(char **)(lVar2 + 0xc0) + 1;
          }
        }
        if (cVar7 != '\0') {
          *(char *)(param_1 + 0x905) = cVar7;
          *(undefined4 *)((longlong)param_1 + 0x482c) = 1;
          return;
        }
      }
    }
    else {
      uVar8 = 0;
    }
    *(uint *)(param_1 + 0x904) =
         *(uint *)(param_1 + 0x904) |
         uVar8 << (0x18U - (char)*(int *)((longlong)param_1 + 0x4824) & 0x1f);
    iVar5 = *(int *)((longlong)param_1 + 0x4824) + 8;
    *(int *)((longlong)param_1 + 0x4824) = iVar5;
    if (0x18 < iVar5) {
      return;
    }
  } while( true );
}



// FUNCTION 144b91050 FUN_144b91050 body=1381 status=ok
// SIG undefined FUN_144b91050(void)

undefined8
FUN_144b91050(longlong param_1,short *param_2,longlong param_3,longlong param_4,longlong param_5,
             int param_6,short *param_7)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  short sVar13;
  uint uVar14;
  
  if (*(int *)(param_1 + 0x4824) < 0x10) {
    FUN_144b90e70();
  }
  if (*(int *)(param_1 + 0x4824) < 0x10) {
    FUN_144b90e70(param_1);
  }
  uVar10 = *(uint *)(param_1 + 0x4820);
  bVar1 = *(byte *)((ulonglong)(uVar10 >> 0x17) + param_3);
  if (bVar1 < 0xff) {
    bVar2 = *(byte *)((ulonglong)bVar1 + 0x500 + param_3);
    if (*(int *)(param_1 + 0x4824) < (int)(uint)bVar2) goto LAB_144b91108;
    *(uint *)(param_1 + 0x4820) = uVar10 << (bVar2 & 0x1f);
    *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - (uint)bVar2;
    bVar1 = *(byte *)((ulonglong)bVar1 + 0x400 + param_3);
  }
  else {
    puVar7 = (uint *)(param_3 + 0x62c);
    iVar6 = 10;
    if (*puVar7 <= uVar10 >> 0x10) {
      do {
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (*puVar7 <= uVar10 >> 0x10);
      if (iVar6 == 0x11) {
        *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) + -0x10;
        goto LAB_144b91108;
      }
    }
    if (*(int *)(param_1 + 0x4824) < iVar6) goto LAB_144b91108;
    uVar14 = (uVar10 >> (0x20 - (byte)iVar6 & 0x1f) &
             *(uint *)(&DAT_1499771c0 + (longlong)iVar6 * 4)) +
             *(int *)(param_3 + 0x64c + (longlong)iVar6 * 4);
    if (0xff < uVar14) goto LAB_144b91108;
    *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - iVar6;
    *(uint *)(param_1 + 0x4820) = uVar10 << ((byte)iVar6 & 0x1f);
    bVar1 = *(byte *)((longlong)(int)uVar14 + 0x400 + param_3);
  }
  uVar10 = (uint)bVar1;
  if (0xf < uVar10) {
LAB_144b91108:
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd8
              ) = "bad huffman code";
    return 0;
  }
  memset(param_2,0,0x80);
  if (bVar1 != 0) {
    if (*(int *)(param_1 + 0x4824) < (int)uVar10) {
      FUN_144b90e70(param_1);
    }
    if ((int)uVar10 <= *(int *)(param_1 + 0x4824)) {
      uVar14 = *(uint *)(param_1 + 0x4820);
      uVar12 = uVar14 << (bVar1 & 0x1f) | uVar14 >> 0x20 - (bVar1 & 0x1f);
      *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - uVar10;
      uVar3 = *(uint *)(&DAT_1499771c0 + (longlong)(int)uVar10 * 4);
      *(uint *)(param_1 + 0x4820) = ~uVar3 & uVar12;
      uVar10 = (*(uint *)(&DAT_149977220 + (longlong)(int)uVar10 * 4) &
               0xffffffffU - ((int)uVar14 >> 0x1f)) + (uVar3 & uVar12);
      goto LAB_144b91221;
    }
  }
  uVar10 = 0;
LAB_144b91221:
  uVar14 = *(uint *)((longlong)param_6 * 0x60 + 0x46b8 + param_1);
  if (-1 < (int)(~uVar14 ^ ~uVar10)) {
    if (((int)uVar14 < 0) && ((int)uVar10 < 0)) {
      bVar5 = (int)(-0x80000000 - uVar10) <= (int)uVar14;
    }
    else {
      bVar5 = (int)uVar14 <= (int)(0x7fffffff - uVar10);
    }
    if (!bVar5) {
      *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xd8) = "bad delta";
      return 0;
    }
  }
  uVar14 = uVar14 + uVar10;
  sVar13 = (short)uVar14;
  *(uint *)((longlong)param_6 * 0x60 + 0x46b8 + param_1) = uVar14;
  sVar8 = *param_7;
  iVar6 = FUN_144b90a10(uVar14 & 0xffff,sVar8);
  if (iVar6 == 0) {
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd8
              ) = "can\'t merge dc and ac";
    return 0;
  }
  iVar6 = 1;
  *param_2 = sVar8 * sVar13;
  do {
    if (*(int *)(param_1 + 0x4824) < 0x10) {
      FUN_144b90e70(param_1);
    }
    sVar8 = *(short *)(param_5 + (ulonglong)(*(uint *)(param_1 + 0x4820) >> 0x17) * 2);
    uVar10 = (uint)sVar8;
    if (uVar10 == 0) {
      if (*(int *)(param_1 + 0x4824) < 0x10) {
        FUN_144b90e70(param_1);
      }
      uVar10 = *(uint *)(param_1 + 0x4820);
      bVar1 = *(byte *)((ulonglong)(uVar10 >> 0x17) + param_4);
      if (bVar1 < 0xff) {
        bVar2 = *(byte *)((ulonglong)bVar1 + 0x500 + param_4);
        if (*(int *)(param_1 + 0x4824) < (int)(uint)bVar2) goto LAB_144b9158e;
        *(uint *)(param_1 + 0x4820) = uVar10 << (bVar2 & 0x1f);
        *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - (uint)bVar2;
        bVar1 = *(byte *)((ulonglong)bVar1 + 0x400 + param_4);
      }
      else {
        puVar7 = (uint *)(param_4 + 0x62c);
        iVar9 = 10;
        lVar11 = 10;
        if (*puVar7 <= uVar10 >> 0x10) {
          do {
            iVar9 = iVar9 + 1;
            puVar7 = puVar7 + 1;
            lVar11 = lVar11 + 1;
          } while (*puVar7 <= uVar10 >> 0x10);
          if (iVar9 == 0x11) {
            *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) + -0x10;
            goto LAB_144b9158e;
          }
        }
        if (*(int *)(param_1 + 0x4824) < iVar9) {
LAB_144b9158e:
          *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xd8) = "bad huffman code";
          return 0;
        }
        uVar14 = (uVar10 >> (0x20 - (byte)iVar9 & 0x1f) & *(uint *)(&DAT_1499771c0 + lVar11 * 4)) +
                 *(int *)(param_4 + 0x64c + lVar11 * 4);
        if (0xff < uVar14) goto LAB_144b9158e;
        *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - iVar9;
        *(uint *)(param_1 + 0x4820) = uVar10 << ((byte)iVar9 & 0x1f);
        bVar1 = *(byte *)((longlong)(int)uVar14 + 0x400 + param_4);
      }
      uVar10 = (uint)bVar1;
      uVar14 = uVar10 & 0xf;
      if ((bVar1 & 0xf) != 0) {
        iVar9 = *(int *)(param_1 + 0x4824);
        iVar6 = iVar6 + ((int)uVar10 >> 4);
        bVar1 = (&DAT_149977260)[iVar6];
        if (iVar9 < (int)uVar14) {
          FUN_144b90e70();
          iVar9 = *(int *)(param_1 + 0x4824);
          if (iVar9 < (int)uVar14) {
            sVar8 = 0;
            goto LAB_144b91551;
          }
        }
        uVar10 = *(uint *)(param_1 + 0x4820);
        uVar12 = uVar10 << (sbyte)uVar14 | uVar10 >> 0x20 - (sbyte)uVar14;
        uVar3 = *(uint *)(&DAT_1499771c0 + (ulonglong)uVar14 * 4);
        uVar4 = *(undefined4 *)(&DAT_149977220 + (ulonglong)uVar14 * 4);
        *(uint *)(param_1 + 0x4824) = iVar9 - uVar14;
        *(uint *)(param_1 + 0x4820) = ~uVar3 & uVar12;
        sVar8 = ((ushort)uVar4 & 0xffffU - (short)((int)uVar10 >> 0x1f)) +
                ((ushort)uVar3 & (ushort)uVar12);
        goto LAB_144b91551;
      }
      if (uVar10 != 0xf0) {
        return 1;
      }
      iVar6 = iVar6 + 0x10;
    }
    else {
      uVar14 = uVar10 & 0xf;
      iVar6 = iVar6 + ((int)uVar10 >> 4 & 0xfU);
      if (*(int *)(param_1 + 0x4824) < (int)uVar14) goto LAB_144b9158e;
      *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - uVar14;
      *(uint *)(param_1 + 0x4820) = *(uint *)(param_1 + 0x4820) << (sbyte)uVar14;
      bVar1 = (&DAT_149977260)[iVar6];
      sVar8 = (short)(char)((ushort)sVar8 >> 8);
LAB_144b91551:
      iVar6 = iVar6 + 1;
      param_2[bVar1] = param_7[bVar1] * sVar8;
    }
    if (0x3f < iVar6) {
      return 1;
    }
  } while( true );
}



// FUNCTION 144b915c0 FUN_144b915c0 body=785 status=ok
// SIG undefined FUN_144b915c0(void)

undefined8 FUN_144b915c0(longlong param_1,short *param_2,longlong param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)(param_1 + 0x4838) != 0) {
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd8
              ) = "can\'t merge dc and ac";
    return 0;
  }
  if (*(int *)(param_1 + 0x4824) < 0x10) {
    FUN_144b90e70();
  }
  if (*(int *)(param_1 + 0x483c) == 0) {
    memset(param_2,0,0x80);
    if (*(int *)(param_1 + 0x4824) < 0x10) {
      FUN_144b90e70(param_1);
    }
    uVar13 = *(uint *)(param_1 + 0x4820);
    bVar1 = *(byte *)((ulonglong)(uVar13 >> 0x17) + param_3);
    if (bVar1 < 0xff) {
      bVar2 = *(byte *)((ulonglong)bVar1 + 0x500 + param_3);
      if ((int)(uint)bVar2 <= *(int *)(param_1 + 0x4824)) {
        *(uint *)(param_1 + 0x4820) = uVar13 << (bVar2 & 0x1f);
        *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - (uint)bVar2;
        bVar1 = *(byte *)((ulonglong)bVar1 + 0x400 + param_3);
LAB_144b9175a:
        uVar13 = (uint)bVar1;
        if (uVar13 < 0x10) {
          if (bVar1 == 0) {
LAB_144b917d7:
            iVar10 = 0;
          }
          else {
            if (*(int *)(param_1 + 0x4824) < (int)uVar13) {
              FUN_144b90e70(param_1);
            }
            if (*(int *)(param_1 + 0x4824) < (int)uVar13) goto LAB_144b917d7;
            uVar9 = *(uint *)(param_1 + 0x4820);
            *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - uVar13;
            uVar7 = uVar9 << (bVar1 & 0x1f) | uVar9 >> 0x20 - (bVar1 & 0x1f);
            uVar3 = *(uint *)(&DAT_1499771c0 + (longlong)(int)uVar13 * 4);
            uVar13 = *(uint *)(&DAT_149977220 + (longlong)(int)uVar13 * 4);
            *(uint *)(param_1 + 0x4820) = ~uVar3 & uVar7;
            iVar10 = (uVar13 & 0xffffffffU - ((int)uVar9 >> 0x1f)) + (uVar3 & uVar7);
          }
          iVar12 = *(int *)((longlong)param_4 * 0x60 + 0x46b8 + param_1);
          iVar4 = FUN_144b909c0(iVar12,iVar10);
          if (iVar4 == 0) {
            *(char **)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd8) =
                 "bad delta";
            return 0;
          }
          uVar13 = iVar12 + iVar10;
          sVar11 = (short)uVar13;
          *(uint *)((longlong)param_4 * 0x60 + 0x46b8 + param_1) = uVar13;
          sVar8 = 1 << ((byte)*(undefined4 *)(param_1 + 0x4840) & 0x1f);
          iVar10 = FUN_144b90a10(uVar13 & 0xffff,sVar8);
          if (iVar10 != 0) {
            *param_2 = sVar8 * sVar11;
            goto LAB_144b918ba;
          }
        }
      }
    }
    else {
      puVar5 = (uint *)(param_3 + 0x62c);
      iVar10 = 10;
      if (*puVar5 <= uVar13 >> 0x10) {
        do {
          iVar10 = iVar10 + 1;
          puVar5 = puVar5 + 1;
        } while (*puVar5 <= uVar13 >> 0x10);
        if (iVar10 == 0x11) {
          *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) + -0x10;
          goto LAB_144b916d8;
        }
      }
      if (iVar10 <= *(int *)(param_1 + 0x4824)) {
        uVar9 = (uVar13 >> (0x20 - (byte)iVar10 & 0x1f) &
                *(uint *)(&DAT_1499771c0 + (longlong)iVar10 * 4)) +
                *(int *)(param_3 + 0x64c + (longlong)iVar10 * 4);
        if (uVar9 < 0x100) {
          *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - iVar10;
          *(uint *)(param_1 + 0x4820) = uVar13 << ((byte)iVar10 & 0x1f);
          bVar1 = *(byte *)((longlong)(int)uVar9 + 0x400 + param_3);
          goto LAB_144b9175a;
        }
      }
    }
LAB_144b916d8:
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd8
              ) = "can\'t merge dc and ac";
    uVar6 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x4824) < 1) {
      FUN_144b90e70(param_1);
    }
    if (0 < *(int *)(param_1 + 0x4824)) {
      uVar13 = *(uint *)(param_1 + 0x4820);
      *(uint *)(param_1 + 0x4820) = uVar13 * 2;
      *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) + -1;
      if ((uVar13 & 0x80000000) != 0) {
        *param_2 = *param_2 + (1 << ((byte)*(undefined4 *)(param_1 + 0x4840) & 0x1f));
      }
    }
LAB_144b918ba:
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 144b918e0 FUN_144b918e0 body=1905 status=ok
// SIG undefined FUN_144b918e0(void)

undefined8 FUN_144b918e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  ushort uVar6;
  uint *puVar7;
  byte bVar8;
  sbyte sVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ushort uVar14;
  int iVar15;
  ulonglong uVar16;
  short sVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  byte *pbVar21;
  
  iVar15 = *(int *)(param_1 + 0x4834);
  uVar16 = (ulonglong)iVar15;
  if (iVar15 == 0) {
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd8
              ) = "can\'t merge dc and ac";
    return 0;
  }
  if (*(int *)(param_1 + 0x483c) == 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x4840);
    if (*(int *)(param_1 + 0x4844) == 0) {
      do {
        if (*(int *)(param_1 + 0x4824) < 0x10) {
          FUN_144b90e70(param_1);
        }
        sVar17 = *(short *)(param_4 + (ulonglong)(*(uint *)(param_1 + 0x4820) >> 0x17) * 2);
        uVar11 = (uint)sVar17;
        iVar15 = (int)uVar16;
        bVar8 = (byte)uVar5;
        if (uVar11 == 0) {
          if (*(int *)(param_1 + 0x4824) < 0x10) {
            FUN_144b90e70(param_1);
          }
          uVar11 = *(uint *)(param_1 + 0x4820);
          bVar2 = *(byte *)((ulonglong)(uVar11 >> 0x17) + param_3);
          if (bVar2 < 0xff) {
            bVar3 = *(byte *)((ulonglong)bVar2 + 0x500 + param_3);
            if (*(int *)(param_1 + 0x4824) < (int)(uint)bVar3) goto LAB_144b9200d;
            *(uint *)(param_1 + 0x4820) = uVar11 << (bVar3 & 0x1f);
            *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - (uint)bVar3;
            bVar2 = *(byte *)((ulonglong)bVar2 + 0x400 + param_3);
          }
          else {
            puVar7 = (uint *)(param_3 + 0x62c);
            iVar12 = 10;
            lVar18 = 10;
            if (*puVar7 <= uVar11 >> 0x10) {
              do {
                iVar12 = iVar12 + 1;
                puVar7 = puVar7 + 1;
                lVar18 = lVar18 + 1;
              } while (*puVar7 <= uVar11 >> 0x10);
              if (iVar12 == 0x11) {
LAB_144b92006:
                *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) + -0x10;
LAB_144b9200d:
                *(char **)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd8
                          ) = "bad huffman code";
                return 0;
              }
            }
            if (*(int *)(param_1 + 0x4824) < iVar12) goto LAB_144b9200d;
            uVar10 = (uVar11 >> (0x20 - (byte)iVar12 & 0x1f) &
                     *(uint *)(&DAT_1499771c0 + lVar18 * 4)) +
                     *(int *)(param_3 + 0x64c + lVar18 * 4);
            if (0xff < uVar10) goto LAB_144b9200d;
            *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - iVar12;
            *(uint *)(param_1 + 0x4820) = uVar11 << ((byte)iVar12 & 0x1f);
            bVar2 = *(byte *)((longlong)(int)uVar10 + 0x400 + param_3);
          }
          uVar10 = (int)(uint)bVar2 >> 4;
          uVar11 = bVar2 & 0xf;
          if ((bVar2 & 0xf) == 0) {
            if (uVar10 < 0xf) {
              sVar9 = (sbyte)uVar10;
              *(int *)(param_1 + 0x4844) = 1 << sVar9;
              if (uVar10 != 0) {
                if (*(int *)(param_1 + 0x4824) < (int)uVar10) {
                  FUN_144b90e70();
                }
                if (*(int *)(param_1 + 0x4824) < (int)uVar10) {
                  *(undefined4 *)(param_1 + 0x4844) = *(undefined4 *)(param_1 + 0x4844);
                  *(int *)(param_1 + 0x4844) = *(int *)(param_1 + 0x4844) + -1;
                  return 1;
                }
                uVar13 = *(uint *)(param_1 + 0x4820) << sVar9 |
                         *(uint *)(param_1 + 0x4820) >> 0x20 - sVar9;
                *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - uVar10;
                uVar11 = *(uint *)(&DAT_1499771c0 + (longlong)(int)uVar10 * 4);
                *(int *)(param_1 + 0x4844) = *(int *)(param_1 + 0x4844) + (uVar11 & uVar13);
                *(uint *)(param_1 + 0x4820) = ~uVar11 & uVar13;
              }
              *(int *)(param_1 + 0x4844) = *(int *)(param_1 + 0x4844) + -1;
              return 1;
            }
            uVar16 = (ulonglong)(iVar15 + 0x10);
          }
          else {
            iVar12 = *(int *)(param_1 + 0x4824);
            uVar16 = (ulonglong)(iVar15 + uVar10 + 1);
            bVar2 = (&DAT_149977260)[(int)(iVar15 + uVar10)];
            if (iVar12 < (int)uVar11) {
              FUN_144b90e70(param_1);
              iVar12 = *(int *)(param_1 + 0x4824);
              if ((int)uVar11 <= iVar12) goto LAB_144b91b5f;
              sVar17 = 0;
            }
            else {
LAB_144b91b5f:
              uVar10 = *(uint *)(param_1 + 0x4820);
              uVar19 = uVar10 << (sbyte)uVar11 | uVar10 >> 0x20 - (sbyte)uVar11;
              uVar13 = *(uint *)(&DAT_1499771c0 + (ulonglong)uVar11 * 4);
              *(uint *)(param_1 + 0x4824) = iVar12 - uVar11;
              *(uint *)(param_1 + 0x4820) = ~uVar13 & uVar19;
              sVar17 = ((ushort)*(undefined4 *)(&DAT_149977220 + (ulonglong)uVar11 * 4) &
                       0xffffU - (short)((int)uVar10 >> 0x1f)) + ((ushort)uVar13 & (ushort)uVar19);
            }
            *(short *)(param_2 + (ulonglong)bVar2 * 2) = (1 << (bVar8 & 0x1f)) * sVar17;
          }
        }
        else {
          uVar10 = uVar11 & 0xf;
          iVar15 = iVar15 + ((int)uVar11 >> 4 & 0xfU);
          if (*(int *)(param_1 + 0x4824) < (int)uVar10) goto LAB_144b9200d;
          *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - uVar10;
          *(uint *)(param_1 + 0x4820) = *(uint *)(param_1 + 0x4820) << (sbyte)uVar10;
          uVar16 = (ulonglong)(iVar15 + 1);
          *(short *)(param_2 + (ulonglong)(byte)(&DAT_149977260)[iVar15] * 2) =
               (short)(char)((ushort)sVar17 >> 8) * (1 << (bVar8 & 0x1f));
        }
        if (*(int *)(param_1 + 0x4838) < (int)uVar16) {
          return 1;
        }
      } while( true );
    }
    *(int *)(param_1 + 0x4844) = *(int *)(param_1 + 0x4844) + -1;
  }
  else {
    uVar14 = 1 << ((byte)*(undefined4 *)(param_1 + 0x4840) & 0x1f);
    uVar20 = uVar16;
    if (*(int *)(param_1 + 0x4844) == 0) {
      do {
        if (*(int *)(param_1 + 0x4824) < 0x10) {
          FUN_144b90e70(param_1);
        }
        uVar11 = *(uint *)(param_1 + 0x4820);
        bVar8 = *(byte *)((ulonglong)(uVar11 >> 0x17) + param_3);
        if (bVar8 < 0xff) {
          bVar2 = *(byte *)((ulonglong)bVar8 + 0x500 + param_3);
          if (*(int *)(param_1 + 0x4824) < (int)(uint)bVar2) goto LAB_144b9200d;
          *(uint *)(param_1 + 0x4820) = uVar11 << (bVar2 & 0x1f);
          *(uint *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - (uint)bVar2;
          bVar8 = *(byte *)((ulonglong)bVar8 + 0x400 + param_3);
        }
        else {
          puVar7 = (uint *)(param_3 + 0x62c);
          iVar15 = 10;
          lVar18 = 10;
          if (*puVar7 <= uVar11 >> 0x10) {
            do {
              iVar15 = iVar15 + 1;
              puVar7 = puVar7 + 1;
              lVar18 = lVar18 + 1;
            } while (*puVar7 <= uVar11 >> 0x10);
            if (iVar15 == 0x11) goto LAB_144b92006;
          }
          if (*(int *)(param_1 + 0x4824) < iVar15) goto LAB_144b9200d;
          uVar10 = (uVar11 >> (0x20 - (byte)iVar15 & 0x1f) & *(uint *)(&DAT_1499771c0 + lVar18 * 4))
                   + *(int *)(param_3 + 0x64c + lVar18 * 4);
          if (0xff < uVar10) goto LAB_144b9200d;
          *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) - iVar15;
          *(uint *)(param_1 + 0x4820) = uVar11 << ((byte)iVar15 & 0x1f);
          bVar8 = *(byte *)((longlong)(int)uVar10 + 0x400 + param_3);
        }
        uVar11 = (int)(uint)bVar8 >> 4;
        uVar10 = bVar8 & 0xf;
        if ((bVar8 & 0xf) == 0) {
          if (uVar11 < 0xf) {
            sVar9 = (sbyte)uVar11;
            *(int *)(param_1 + 0x4844) = (1 << sVar9) + -1;
            if (uVar11 != 0) {
              iVar15 = *(int *)(param_1 + 0x4824);
              if (iVar15 < (int)uVar11) {
                FUN_144b90e70(param_1);
                iVar15 = *(int *)(param_1 + 0x4824);
                if (iVar15 < (int)uVar11) {
                  uVar11 = uVar10 + 0x40;
                  *(undefined4 *)(param_1 + 0x4844) = *(undefined4 *)(param_1 + 0x4844);
                  goto LAB_144b91f39;
                }
              }
              uVar13 = *(uint *)(param_1 + 0x4820) << sVar9 |
                       *(uint *)(param_1 + 0x4820) >> 0x20 - sVar9;
              *(uint *)(param_1 + 0x4824) = iVar15 - uVar11;
              uVar11 = *(uint *)(&DAT_1499771c0 + (longlong)(int)uVar11 * 4);
              *(int *)(param_1 + 0x4844) = *(int *)(param_1 + 0x4844) + (uVar13 & uVar11);
              *(uint *)(param_1 + 0x4820) = ~uVar11 & uVar13;
            }
            uVar11 = 0x40;
          }
        }
        else {
          if (uVar10 != 1) goto LAB_144b9200d;
          iVar15 = *(int *)(param_1 + 0x4824);
          if (iVar15 < 1) {
            FUN_144b90e70(param_1);
            iVar15 = *(int *)(param_1 + 0x4824);
            if (0 < iVar15) goto LAB_144b91f0c;
          }
          else {
LAB_144b91f0c:
            uVar10 = *(uint *)(param_1 + 0x4820);
            *(uint *)(param_1 + 0x4820) = uVar10 * 2;
            *(int *)(param_1 + 0x4824) = iVar15 + -1;
            if ((uVar10 & 0x80000000) != 0) {
              uVar10 = (uint)(short)uVar14;
              goto LAB_144b91f39;
            }
          }
          uVar10 = -(int)(short)uVar14;
        }
LAB_144b91f39:
        if (*(int *)(param_1 + 0x4838) < (int)uVar16) {
          return 1;
        }
        do {
          pbVar21 = &DAT_149977260 + uVar20;
          uVar13 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar13;
          uVar20 = uVar20 + 1;
          puVar1 = (ushort *)(param_2 + (ulonglong)*pbVar21 * 2);
          if (*(short *)(param_2 + (ulonglong)*pbVar21 * 2) == 0) {
            if (uVar11 == 0) {
              *puVar1 = (ushort)uVar10;
              break;
            }
            uVar11 = uVar11 - 1;
          }
          else {
            iVar15 = *(int *)(param_1 + 0x4824);
            if (iVar15 < 1) {
              FUN_144b90e70(param_1);
              iVar15 = *(int *)(param_1 + 0x4824);
              if (iVar15 < 1) goto LAB_144b91fd3;
            }
            uVar19 = *(uint *)(param_1 + 0x4820);
            *(uint *)(param_1 + 0x4820) = uVar19 * 2;
            *(int *)(param_1 + 0x4824) = iVar15 + -1;
            if (((uVar19 & 0x80000000) != 0) && (uVar4 = *puVar1, (uVar14 & uVar4) == 0)) {
              if ((short)uVar4 < 1) {
                *puVar1 = uVar4 - uVar14;
              }
              else {
                *puVar1 = uVar4 + uVar14;
              }
            }
          }
LAB_144b91fd3:
        } while ((int)uVar13 <= *(int *)(param_1 + 0x4838));
        if (*(int *)(param_1 + 0x4838) < (int)uVar13) {
          return 1;
        }
      } while( true );
    }
    *(int *)(param_1 + 0x4844) = *(int *)(param_1 + 0x4844) + -1;
    if (iVar15 <= *(int *)(param_1 + 0x4838)) {
      pbVar21 = &DAT_149977260 + uVar16;
      do {
        puVar1 = (ushort *)(param_2 + (ulonglong)*pbVar21 * 2);
        if (*(short *)(param_2 + (ulonglong)*pbVar21 * 2) != 0) {
          if (*(int *)(param_1 + 0x4824) < 1) {
            FUN_144b90e70(param_1);
          }
          if (0 < *(int *)(param_1 + 0x4824)) {
            uVar11 = *(uint *)(param_1 + 0x4820);
            *(uint *)(param_1 + 0x4820) = uVar11 * 2;
            *(int *)(param_1 + 0x4824) = *(int *)(param_1 + 0x4824) + -1;
            if (((uVar11 & 0x80000000) != 0) && (uVar4 = *puVar1, (uVar14 & uVar4) == 0)) {
              uVar6 = uVar14;
              if ((short)uVar4 < 1) {
                uVar6 = -uVar14;
              }
              *puVar1 = uVar4 + uVar6;
            }
          }
        }
        uVar11 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar11;
        pbVar21 = pbVar21 + 1;
      } while ((int)uVar11 <= *(int *)(param_1 + 0x4838));
      return 1;
    }
  }
  return 1;
}



// FUNCTION 144b92060 FUN_144b92060 body=1117 status=ok
// SIG undefined FUN_144b92060(void)

void FUN_144b92060(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  short *psVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  int *local_178;
  int *local_170;
  int local_168;
  longlong local_160;
  longlong local_158;
  int local_130 [2];
  int local_128 [16];
  int local_e8 [40];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_178;
  local_170 = local_128;
  psVar14 = (short *)(param_3 + 0x60);
  local_160 = 8;
  local_178 = (int *)0x8;
  do {
    if ((((psVar14[-0x28] == 0) && (psVar14[-0x20] == 0)) && (psVar14[-0x18] == 0)) &&
       (((psVar14[-0x10] == 0 && (psVar14[-8] == 0)) && ((*psVar14 == 0 && (psVar14[8] == 0)))))) {
      iVar1 = (int)psVar14[-0x30] << 2;
      local_170[0x30] = iVar1;
      local_170[0x28] = iVar1;
      local_170[0x20] = iVar1;
      local_170[0x18] = iVar1;
      local_170[8] = iVar1;
      *local_170 = iVar1;
      local_170[-8] = iVar1;
    }
    else {
      iVar11 = (int)psVar14[-0x18];
      iVar2 = (int)psVar14[8];
      iVar5 = (int)psVar14[-8];
      iVar1 = ((int)*psVar14 + (int)psVar14[-0x20]) * 0x1151;
      iVar3 = (int)psVar14[-0x28];
      iVar10 = iVar1 + *psVar14 * -0x3b21;
      iVar1 = psVar14[-0x20] * 0x187e + iVar1;
      iVar7 = ((int)psVar14[-0x30] - (int)psVar14[-0x10]) * 0x2000;
      iVar6 = ((int)psVar14[-0x10] + (int)psVar14[-0x30]) * 0x2000;
      iVar13 = iVar7 + iVar10 + 0x400;
      iVar12 = iVar1 + iVar6 + 0x400;
      iVar9 = (iVar7 - iVar10) + 0x400;
      iVar10 = (iVar6 - iVar1) + 0x400;
      iVar16 = (iVar5 + iVar3 + iVar2 + iVar11) * 0x25a1;
      iVar1 = (iVar2 + iVar3) * -0x1ccd;
      iVar7 = (iVar5 + iVar11) * -0x5203;
      iVar6 = iVar16 + (iVar2 + iVar11) * -0x3ec5;
      iVar16 = iVar16 + (iVar5 + iVar3) * -0xc7c;
      iVar3 = iVar3 * 0x300b + iVar16 + iVar1;
      iVar11 = iVar11 * 0x6254 + iVar6 + iVar7;
      iVar7 = iVar5 * 0x41b3 + iVar16 + iVar7;
      iVar6 = iVar2 * 0x98e + iVar1 + iVar6;
      local_170[-8] = iVar12 + iVar3 >> 0xb;
      *local_170 = iVar13 + iVar11 >> 0xb;
      local_170[8] = iVar9 + iVar7 >> 0xb;
      iVar1 = iVar6 + iVar10 >> 0xb;
      local_170[0x18] = iVar10 - iVar6 >> 0xb;
      local_170[0x30] = iVar12 - iVar3 >> 0xb;
      local_170[0x28] = iVar13 - iVar11 >> 0xb;
      local_170[0x20] = iVar9 - iVar7 >> 0xb;
    }
    local_170[0x10] = iVar1;
    psVar14 = psVar14 + 1;
    local_170 = local_170 + 1;
    local_178 = (int *)((longlong)local_178 + -1);
  } while (local_178 != (int *)0x0);
  local_178 = local_130;
  puVar15 = (undefined1 *)(param_1 + 1);
  do {
    iVar1 = local_178[1];
    iVar6 = local_178[-1];
    iVar3 = local_178[-3];
    iVar5 = (*local_178 + local_178[-4]) * 0x1151;
    iVar11 = local_178[-4] * 0x187e + iVar5;
    iVar5 = iVar5 + *local_178 * -0x3b21;
    iVar16 = (local_178[-2] + local_178[-6]) * 0x2000;
    iVar2 = (local_178[-6] - local_178[-2]) * 0x2000;
    iVar10 = local_178[-5];
    iVar7 = iVar16 + iVar11 + 0x2020000;
    iVar13 = iVar2 + iVar5 + 0x2020000;
    iVar2 = (iVar2 - iVar5) + 0x2020000;
    iVar17 = (iVar16 - iVar11) + 0x2020000;
    iVar11 = (iVar6 + iVar10 + iVar1 + iVar3) * 0x25a1;
    iVar16 = (iVar1 + iVar10) * -0x1ccd;
    iVar12 = (iVar6 + iVar3) * -0x5203;
    iVar5 = iVar11 + (iVar1 + iVar3) * -0x3ec5;
    iVar11 = iVar11 + (iVar6 + iVar10) * -0xc7c;
    iVar9 = iVar3 * 0x6254 + iVar5 + iVar12;
    iVar3 = iVar10 * 0x300b + iVar11 + iVar16;
    iVar12 = iVar6 * 0x41b3 + iVar11 + iVar12;
    local_170 = (int *)CONCAT44(local_170._4_4_,iVar3);
    uVar4 = iVar3 + iVar7 >> 0x12;
    iVar5 = iVar1 * 0x98e + iVar16 + iVar5;
    if (0xff < uVar4) {
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xff < (int)uVar4) {
        uVar4 = 0xff;
      }
    }
    uVar8 = iVar7 - iVar3 >> 0x12;
    puVar15[-1] = (char)uVar4;
    if (0xff < uVar8) {
      if ((int)uVar8 < 0) {
        uVar8 = 0;
      }
      else if (0xff < (int)uVar8) {
        uVar8 = 0xff;
      }
    }
    puVar15[6] = (char)uVar8;
    uVar4 = iVar13 + iVar9 >> 0x12;
    if (0xff < uVar4) {
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xff < (int)uVar4) {
        uVar4 = 0xff;
      }
    }
    *puVar15 = (char)uVar4;
    uVar4 = iVar13 - iVar9 >> 0x12;
    if (0xff < uVar4) {
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xff < (int)uVar4) {
        uVar4 = 0xff;
      }
    }
    puVar15[5] = (char)uVar4;
    uVar4 = iVar2 + iVar12 >> 0x12;
    if (0xff < uVar4) {
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xff < (int)uVar4) {
        uVar4 = 0xff;
      }
    }
    puVar15[1] = (char)uVar4;
    uVar4 = iVar2 - iVar12 >> 0x12;
    if (0xff < uVar4) {
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xff < (int)uVar4) {
        uVar4 = 0xff;
      }
    }
    puVar15[4] = (char)uVar4;
    uVar4 = iVar17 + iVar5 >> 0x12;
    if (0xff < uVar4) {
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xff < (int)uVar4) {
        uVar4 = 0xff;
      }
    }
    puVar15[2] = (char)uVar4;
    uVar4 = iVar17 - iVar5 >> 0x12;
    if (0xff < uVar4) {
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      else if (0xff < (int)uVar4) {
        uVar4 = 0xff;
      }
    }
    local_178 = local_178 + 8;
    puVar15[3] = (char)uVar4;
    puVar15 = puVar15 + param_2;
    local_160 = local_160 + -1;
  } while (local_160 != 0);
  local_168 = param_2;
  local_158 = param_1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)&local_178);
}



// FUNCTION 144b924e0 FUN_144b924e0 body=2094 status=ok
// SIG undefined FUN_144b924e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b924e0(char *param_1,int param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  longlong lVar62;
  uint6 uVar63;
  uint6 uVar64;
  int iVar65;
  int iVar72;
  int iVar73;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar93;
  undefined1 auVar77 [12];
  int iVar90;
  undefined1 auVar78 [16];
  int iVar91;
  int iVar94;
  int iVar96;
  undefined1 auVar81 [16];
  int iVar92;
  int iVar95;
  int iVar97;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar98 [12];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar103 [16];
  int iVar104;
  int iVar110;
  int iVar111;
  undefined1 auVar105 [16];
  int iVar112;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  short sVar113;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined2 uVar119;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  int iVar120;
  int iVar131;
  int iVar132;
  undefined1 auVar121 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  int iVar133;
  int iVar134;
  int iVar135;
  undefined1 auVar130 [16];
  int iVar136;
  int iVar140;
  int iVar141;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  int iVar142;
  int iVar143;
  int iVar149;
  short sVar150;
  int iVar152;
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  int iVar153;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  short sVar151;
  undefined1 auVar148 [16];
  int iVar154;
  int iVar157;
  int iVar158;
  undefined1 auVar155 [16];
  int iVar159;
  undefined1 auVar156 [16];
  int iVar160;
  int iVar166;
  int iVar167;
  undefined1 auVar161 [16];
  undefined1 auVar165 [16];
  int iVar168;
  int iVar169;
  int iVar173;
  int iVar174;
  undefined1 auVar170 [16];
  int iVar175;
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  int iVar176;
  int iVar180;
  int iVar181;
  undefined1 auVar177 [16];
  int iVar184;
  undefined1 auVar178 [16];
  int iVar182;
  int iVar183;
  int iVar185;
  int iVar186;
  undefined1 auVar179 [16];
  int iVar187;
  int iVar193;
  int iVar194;
  undefined1 auVar188 [16];
  int iVar195;
  undefined1 auVar189 [16];
  int iVar196;
  undefined1 auVar197 [12];
  int iVar203;
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  int iVar204;
  int iVar205;
  undefined1 auVar202 [16];
  int iVar206;
  int iVar212;
  undefined1 auVar207 [12];
  int iVar213;
  int iVar214;
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int local_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar86 [16];
  undefined1 auVar102 [16];
  undefined1 auVar122 [16];
  undefined1 auVar127 [16];
  undefined1 auVar123 [16];
  undefined1 auVar128 [16];
  undefined1 auVar124 [16];
  undefined1 auVar129 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar201 [16];
  undefined1 auVar208 [16];
  
  auVar105 = *(undefined1 (*) [16])(param_3 + 0x28);
  auVar67 = *(undefined1 (*) [16])(param_3 + 0x10);
  auVar124._0_12_ = auVar67._0_12_;
  auVar124._12_2_ = auVar67._6_2_;
  auVar124._14_2_ = param_3[0x33];
  auVar123._12_4_ = auVar124._12_4_;
  auVar123._0_10_ = auVar67._0_10_;
  auVar123._10_2_ = param_3[0x32];
  auVar122._10_6_ = auVar123._10_6_;
  auVar122._0_8_ = auVar67._0_8_;
  auVar122._8_2_ = auVar67._4_2_;
  auVar121._8_8_ = auVar122._8_8_;
  auVar121._6_2_ = param_3[0x31];
  auVar121._4_2_ = auVar67._2_2_;
  auVar121._0_2_ = auVar67._0_2_;
  auVar121._2_2_ = param_3[0x30];
  auVar137._2_2_ = param_3[0x34];
  auVar137._0_2_ = auVar67._8_2_;
  auVar137._4_2_ = auVar67._10_2_;
  auVar137._6_2_ = param_3[0x35];
  auVar137._8_2_ = auVar67._12_2_;
  auVar137._10_2_ = param_3[0x36];
  auVar137._12_2_ = auVar67._14_2_;
  auVar137._14_2_ = param_3[0x37];
  auVar67 = *(undefined1 (*) [16])(param_3 + 0x38);
  auVar66 = pmaddwd(auVar137,_DAT_149977640);
  auVar138 = pmaddwd(auVar137,_DAT_149977550);
  sVar150 = auVar67._6_2_ + param_3[0xb];
  auVar125 = pmaddwd(auVar121,_DAT_149977550);
  auVar198 = pmaddwd(auVar121,_DAT_149977640);
  auVar164._0_12_ = auVar67._0_12_;
  auVar164._12_2_ = auVar67._6_2_;
  auVar164._14_2_ = param_3[0x1b];
  auVar163._12_4_ = auVar164._12_4_;
  auVar163._0_10_ = auVar67._0_10_;
  auVar163._10_2_ = param_3[0x1a];
  auVar162._10_6_ = auVar163._10_6_;
  auVar162._0_8_ = auVar67._0_8_;
  auVar162._8_2_ = auVar67._4_2_;
  auVar161._8_8_ = auVar162._8_8_;
  auVar161._6_2_ = param_3[0x19];
  auVar161._4_2_ = auVar67._2_2_;
  auVar161._2_2_ = param_3[0x18];
  auVar161._0_2_ = auVar67._0_2_;
  auVar170._2_2_ = param_3[0x1c];
  auVar170._0_2_ = auVar67._8_2_;
  auVar170._4_2_ = auVar67._10_2_;
  auVar170._6_2_ = param_3[0x1d];
  auVar170._8_2_ = auVar67._12_2_;
  auVar170._10_2_ = param_3[0x1e];
  auVar170._12_2_ = auVar67._14_2_;
  auVar170._14_2_ = param_3[0x1f];
  auVar188 = pmaddwd(auVar161,_DAT_149977610);
  auVar177 = pmaddwd(auVar170,_DAT_149977610);
  auVar165 = pmaddwd(auVar161,_DAT_149977560);
  auVar98 = ZEXT812(0);
  auVar79._12_2_ = 0;
  auVar79._0_12_ = auVar98;
  auVar79._14_2_ = param_3[0x23] + param_3[3];
  auVar78._12_4_ = auVar79._12_4_;
  auVar78._0_10_ = auVar98._0_10_;
  auVar78._10_2_ = param_3[0x22] + param_3[2];
  lVar62 = (ulonglong)auVar78._10_6_ << 0x10;
  auVar81._2_8_ = lVar62;
  auVar81._0_2_ = param_3[0x21] + param_3[1];
  auVar81._10_6_ = 0;
  iVar74 = (int)((uint)(ushort)(param_3[0x20] + *param_3) << 0x10) >> 3;
  iVar90 = SUB164(auVar81 << 0x30,4) >> 3;
  iVar93 = (int)lVar62 >> 3;
  uVar63 = CONCAT24(param_3[0x25] + param_3[5],(uint)(ushort)(param_3[0x24] + param_3[4]));
  auVar77._0_10_ = (unkuint10)uVar63 << 0x10;
  auVar77._10_2_ = param_3[0x26] + param_3[6];
  auVar80._12_2_ = 0;
  auVar80._0_12_ = auVar77;
  auVar80._14_2_ = param_3[0x27] + param_3[7];
  auVar145._12_2_ = 0;
  auVar145._0_12_ = auVar98;
  auVar145._14_2_ = param_3[3] - param_3[0x23];
  auVar107._12_4_ = auVar145._12_4_;
  auVar107._10_2_ = param_3[2] - param_3[0x22];
  auVar107._0_10_ = auVar78._0_10_;
  lVar62 = (ulonglong)auVar107._10_6_ << 0x10;
  auVar99._2_8_ = lVar62;
  auVar99._0_2_ = param_3[1] - param_3[0x21];
  auVar99._10_6_ = 0;
  iVar65 = (int)((uint)(ushort)(*param_3 - param_3[0x20]) << 0x10) >> 3;
  iVar72 = SUB164(auVar99 << 0x30,4) >> 3;
  iVar73 = (int)lVar62 >> 3;
  iVar75 = (int)auVar77._0_10_ >> 3;
  iVar91 = (int)((int6)uVar63 >> 0x13);
  iVar94 = auVar77._8_4_ >> 3;
  iVar96 = auVar80._12_4_ >> 3;
  uVar63 = CONCAT24(param_3[5] - param_3[0x25],(uint)(ushort)(param_3[4] - param_3[0x24]));
  auVar207._0_10_ = (unkuint10)uVar63 << 0x10;
  auVar207._10_2_ = param_3[6] - param_3[0x26];
  auVar208._12_2_ = 0;
  auVar208._0_12_ = auVar207;
  auVar208._14_2_ = param_3[7] - param_3[0x27];
  auVar155._8_8_ =
       (undefined8)
       (CONCAT64(CONCAT42(CONCAT22(auVar105._6_2_ + param_3[0x1b],sVar150),
                          auVar105._4_2_ + param_3[0x1a]),
                 CONCAT22(auVar67._4_2_ + param_3[10],sVar150)) >> 0x10);
  auVar155._6_2_ = auVar105._2_2_ + param_3[0x19];
  auVar155._4_2_ = auVar67._2_2_ + param_3[9];
  auVar155._2_2_ = auVar105._0_2_ + param_3[0x18];
  auVar155._0_2_ = auVar67._0_2_ + param_3[8];
  auVar144._2_2_ = auVar105._8_2_ + param_3[0x1c];
  auVar144._0_2_ = auVar67._8_2_ + param_3[0xc];
  auVar144._4_2_ = auVar67._10_2_ + param_3[0xd];
  auVar144._6_2_ = auVar105._10_2_ + param_3[0x1d];
  auVar144._8_2_ = auVar67._12_2_ + param_3[0xe];
  auVar144._10_2_ = auVar105._12_2_ + param_3[0x1e];
  auVar144._12_2_ = auVar67._14_2_ + param_3[0xf];
  auVar144._14_2_ = auVar105._14_2_ + param_3[0x1f];
  auVar99 = pmaddwd(auVar144,_DAT_149977580);
  auVar67 = pmaddwd(auVar155,_DAT_149977630);
  auVar81 = pmaddwd(auVar155,_DAT_149977580);
  auVar145 = pmaddwd(auVar144,_DAT_149977630);
  auVar129._0_12_ = auVar105._0_12_;
  auVar129._12_2_ = auVar105._6_2_;
  auVar129._14_2_ = param_3[0xb];
  auVar128._12_4_ = auVar129._12_4_;
  auVar128._0_10_ = auVar105._0_10_;
  auVar128._10_2_ = param_3[10];
  auVar127._10_6_ = auVar128._10_6_;
  auVar127._0_8_ = auVar105._0_8_;
  auVar127._8_2_ = auVar105._4_2_;
  auVar126._8_8_ = auVar127._8_8_;
  auVar126._6_2_ = param_3[9];
  auVar126._4_2_ = auVar105._2_2_;
  auVar126._2_2_ = param_3[8];
  auVar126._0_2_ = auVar105._0_2_;
  auVar139._2_2_ = param_3[0xc];
  auVar139._0_2_ = auVar105._8_2_;
  auVar139._4_2_ = auVar105._10_2_;
  auVar139._6_2_ = param_3[0xd];
  auVar139._8_2_ = auVar105._12_2_;
  auVar139._10_2_ = param_3[0xe];
  auVar139._12_2_ = auVar105._14_2_;
  auVar139._14_2_ = param_3[0xf];
  auVar155 = pmaddwd(auVar126,_DAT_149977650);
  auVar105 = pmaddwd(auVar139,_DAT_149977650);
  iVar187 = auVar188._0_4_ + auVar81._0_4_;
  iVar193 = auVar188._4_4_ + auVar81._4_4_;
  iVar194 = auVar188._8_4_ + auVar81._8_4_;
  iVar195 = auVar188._12_4_ + auVar81._12_4_;
  iVar176 = auVar177._0_4_ + auVar99._0_4_;
  iVar180 = auVar177._4_4_ + auVar99._4_4_;
  iVar181 = auVar177._8_4_ + auVar99._8_4_;
  iVar184 = auVar177._12_4_ + auVar99._12_4_;
  iVar206 = (int)auVar207._0_10_ >> 3;
  iVar212 = (int)((int6)uVar63 >> 0x13);
  iVar213 = auVar207._8_4_ >> 3;
  iVar214 = auVar208._12_4_ >> 3;
  iVar160 = auVar165._0_4_ + auVar67._0_4_;
  iVar166 = auVar165._4_4_ + auVar67._4_4_;
  iVar167 = auVar165._8_4_ + auVar67._8_4_;
  iVar168 = auVar165._12_4_ + auVar67._12_4_;
  iVar154 = auVar155._0_4_ + auVar67._0_4_;
  iVar157 = auVar155._4_4_ + auVar67._4_4_;
  iVar158 = auVar155._8_4_ + auVar67._8_4_;
  iVar159 = auVar155._12_4_ + auVar67._12_4_;
  iVar104 = auVar105._0_4_ + auVar145._0_4_;
  iVar110 = auVar105._4_4_ + auVar145._4_4_;
  iVar111 = auVar105._8_4_ + auVar145._8_4_;
  iVar112 = auVar105._12_4_ + auVar145._12_4_;
  auVar105 = pmaddwd(auVar126,_DAT_149977570);
  auVar67 = pmaddwd(auVar139,_DAT_149977570);
  auVar155 = pmaddwd(auVar170,_DAT_149977560);
  iVar120 = auVar105._0_4_ + auVar81._0_4_;
  iVar131 = auVar105._4_4_ + auVar81._4_4_;
  iVar132 = auVar105._8_4_ + auVar81._8_4_;
  iVar134 = auVar105._12_4_ + auVar81._12_4_;
  local_e8 = auVar138._0_4_;
  iStack_e4 = auVar138._4_4_;
  iStack_e0 = auVar138._8_4_;
  iStack_dc = auVar138._12_4_;
  iVar76 = iVar75 + local_e8 + 0x400;
  iVar92 = iVar91 + iStack_e4 + 0x400;
  iVar95 = iVar94 + iStack_e0 + 0x400;
  iVar97 = iVar96 + iStack_dc + 0x400;
  iVar136 = auVar67._0_4_ + auVar99._0_4_;
  iVar140 = auVar67._4_4_ + auVar99._4_4_;
  iVar141 = auVar67._8_4_ + auVar99._8_4_;
  iVar142 = auVar67._12_4_ + auVar99._12_4_;
  iVar169 = auVar155._0_4_ + auVar145._0_4_;
  iVar173 = auVar155._4_4_ + auVar145._4_4_;
  iVar174 = auVar155._8_4_ + auVar145._8_4_;
  iVar175 = auVar155._12_4_ + auVar145._12_4_;
  local_108 = auVar125._0_4_;
  iStack_104 = auVar125._4_4_;
  iStack_100 = auVar125._8_4_;
  iStack_fc = auVar125._12_4_;
  auVar82._0_4_ = iVar76 - iVar136 >> 0xb;
  auVar82._4_4_ = iVar92 - iVar140 >> 0xb;
  auVar82._8_4_ = iVar95 - iVar141 >> 0xb;
  auVar82._12_4_ = iVar97 - iVar142 >> 0xb;
  iVar143 = iVar74 + local_108 + 0x400;
  iVar149 = iVar90 + iStack_104 + 0x400;
  iVar152 = iVar93 + iStack_100 + 0x400;
  iVar153 = (auVar78._12_4_ >> 3) + iStack_fc + 0x400;
  auVar138._0_4_ = iVar76 + iVar136 >> 0xb;
  auVar138._4_4_ = iVar92 + iVar140 >> 0xb;
  auVar138._8_4_ = iVar95 + iVar141 >> 0xb;
  auVar138._12_4_ = iVar97 + iVar142 >> 0xb;
  auVar100._0_4_ = iVar143 + iVar120 >> 0xb;
  auVar100._4_4_ = iVar149 + iVar131 >> 0xb;
  auVar100._8_4_ = iVar152 + iVar132 >> 0xb;
  auVar100._12_4_ = iVar153 + iVar134 >> 0xb;
  local_b8 = auVar198._0_4_;
  iStack_b4 = auVar198._4_4_;
  iStack_b0 = auVar198._8_4_;
  iStack_ac = auVar198._12_4_;
  auVar105 = packssdw(auVar100,auVar138);
  iVar95 = iVar65 + local_b8 + 0x400;
  iVar97 = iVar72 + iStack_b4 + 0x400;
  iVar136 = iVar73 + iStack_b0 + 0x400;
  iVar140 = (auVar107._12_4_ >> 3) + iStack_ac + 0x400;
  iVar141 = (iVar65 - local_b8) + 0x400;
  iVar142 = (iVar72 - iStack_b4) + 0x400;
  iVar133 = (iVar73 - iStack_b0) + 0x400;
  iVar135 = ((auVar107._12_4_ >> 3) - iStack_ac) + 0x400;
  iVar76 = (iVar74 - local_108) + 0x400;
  iVar90 = (iVar90 - iStack_104) + 0x400;
  iVar92 = (iVar93 - iStack_100) + 0x400;
  iVar93 = ((auVar78._12_4_ >> 3) - iStack_fc) + 0x400;
  auVar146._0_4_ = iVar143 - iVar120 >> 0xb;
  auVar146._4_4_ = iVar149 - iVar131 >> 0xb;
  auVar146._8_4_ = iVar152 - iVar132 >> 0xb;
  auVar146._12_4_ = iVar153 - iVar134 >> 0xb;
  auVar147 = packssdw(auVar146,auVar82);
  local_c8 = auVar66._0_4_;
  iStack_c4 = auVar66._4_4_;
  iStack_c0 = auVar66._8_4_;
  iStack_bc = auVar66._12_4_;
  iVar65 = iVar206 + local_c8 + 0x400;
  iVar72 = iVar212 + iStack_c4 + 0x400;
  iVar73 = iVar213 + iStack_c0 + 0x400;
  iVar74 = iVar214 + iStack_bc + 0x400;
  auVar199._0_4_ = iVar95 + iVar160 >> 0xb;
  auVar199._4_4_ = iVar97 + iVar166 >> 0xb;
  auVar199._8_4_ = iVar136 + iVar167 >> 0xb;
  auVar199._12_4_ = iVar140 + iVar168 >> 0xb;
  auVar117._0_4_ = iVar95 - iVar160 >> 0xb;
  auVar117._4_4_ = iVar97 - iVar166 >> 0xb;
  auVar117._8_4_ = iVar136 - iVar167 >> 0xb;
  auVar117._12_4_ = iVar140 - iVar168 >> 0xb;
  auVar165._0_4_ = iVar65 + iVar169 >> 0xb;
  auVar165._4_4_ = iVar72 + iVar173 >> 0xb;
  auVar165._8_4_ = iVar73 + iVar174 >> 0xb;
  auVar165._12_4_ = iVar74 + iVar175 >> 0xb;
  iVar95 = (iVar206 - local_c8) + 0x400;
  iVar97 = (iVar212 - iStack_c4) + 0x400;
  iVar136 = (iVar213 - iStack_c0) + 0x400;
  iVar140 = (iVar214 - iStack_bc) + 0x400;
  auVar200 = packssdw(auVar199,auVar165);
  auVar83._0_4_ = iVar65 - iVar169 >> 0xb;
  auVar83._4_4_ = iVar72 - iVar173 >> 0xb;
  auVar83._8_4_ = iVar73 - iVar174 >> 0xb;
  auVar83._12_4_ = iVar74 - iVar175 >> 0xb;
  auVar155 = packssdw(auVar117,auVar83);
  iVar65 = (iVar75 - local_e8) + 0x400;
  iVar72 = (iVar91 - iStack_e4) + 0x400;
  iVar73 = (iVar94 - iStack_e0) + 0x400;
  iVar74 = (iVar96 - iStack_dc) + 0x400;
  auVar177._0_4_ = iVar95 + iVar104 >> 0xb;
  auVar177._4_4_ = iVar97 + iVar110 >> 0xb;
  auVar177._8_4_ = iVar136 + iVar111 >> 0xb;
  auVar177._12_4_ = iVar140 + iVar112 >> 0xb;
  auVar114._0_4_ = iVar141 + iVar154 >> 0xb;
  auVar114._4_4_ = iVar142 + iVar157 >> 0xb;
  auVar114._8_4_ = iVar133 + iVar158 >> 0xb;
  auVar114._12_4_ = iVar135 + iVar159 >> 0xb;
  auVar145 = packssdw(auVar114,auVar177);
  auVar106._0_4_ = iVar76 + iVar187 >> 0xb;
  auVar106._4_4_ = iVar90 + iVar193 >> 0xb;
  auVar106._8_4_ = iVar92 + iVar194 >> 0xb;
  auVar106._12_4_ = iVar93 + iVar195 >> 0xb;
  auVar130._0_4_ = iVar141 - iVar154 >> 0xb;
  auVar130._4_4_ = iVar142 - iVar157 >> 0xb;
  auVar130._8_4_ = iVar133 - iVar158 >> 0xb;
  auVar130._12_4_ = iVar135 - iVar159 >> 0xb;
  auVar188._0_4_ = iVar65 + iVar176 >> 0xb;
  auVar188._4_4_ = iVar72 + iVar180 >> 0xb;
  auVar188._8_4_ = iVar73 + iVar181 >> 0xb;
  auVar188._12_4_ = iVar74 + iVar184 >> 0xb;
  auVar107 = packssdw(auVar106,auVar188);
  local_128._0_2_ = auVar105._0_2_;
  local_128._2_2_ = auVar105._2_2_;
  uStack_124._0_2_ = auVar105._4_2_;
  uStack_124._2_2_ = auVar105._6_2_;
  uStack_120._0_2_ = auVar105._8_2_;
  uStack_120._2_2_ = auVar105._10_2_;
  uStack_11c._0_2_ = auVar105._12_2_;
  uStack_11c._2_2_ = auVar105._14_2_;
  auVar209._0_4_ = iVar95 - iVar104 >> 0xb;
  auVar209._4_4_ = iVar97 - iVar110 >> 0xb;
  auVar209._8_4_ = iVar136 - iVar111 >> 0xb;
  auVar209._12_4_ = iVar140 - iVar112 >> 0xb;
  auVar101._0_4_ = iVar76 - iVar187 >> 0xb;
  auVar101._4_4_ = iVar90 - iVar193 >> 0xb;
  auVar101._8_4_ = iVar92 - iVar194 >> 0xb;
  auVar101._12_4_ = iVar93 - iVar195 >> 0xb;
  auVar84._0_4_ = iVar65 - iVar176 >> 0xb;
  auVar84._4_4_ = iVar72 - iVar180 >> 0xb;
  auVar84._8_4_ = iVar73 - iVar181 >> 0xb;
  auVar84._12_4_ = iVar74 - iVar184 >> 0xb;
  auVar138 = packssdw(auVar130,auVar209);
  auVar81 = packssdw(auVar101,auVar84);
  uVar119 = auVar155._4_2_;
  sVar150 = auVar107._10_2_;
  sVar113 = auVar107._14_2_;
  auVar125._2_8_ =
       (longlong)
       (CONCAT64(CONCAT42(CONCAT22(auVar147._4_2_,uVar119),auVar138._4_2_),
                 CONCAT22(auVar81._4_2_,uVar119)) >> 0x10);
  auVar125._0_2_ = auVar107._4_2_;
  auVar125._10_6_ = 0;
  auVar66._12_4_ = 0;
  auVar66._0_12_ = SUB1612(auVar125 << 0x30,4);
  auVar66 = auVar66 << 0x20;
  auVar192._0_12_ = auVar66._0_12_;
  auVar192._12_2_ = auVar107._4_2_;
  auVar192._14_2_ = auVar107._12_2_;
  auVar191._12_4_ = auVar192._12_4_;
  auVar191._0_10_ = auVar66._0_10_;
  auVar191._10_2_ = auVar145._12_2_;
  auVar190._10_6_ = auVar191._10_6_;
  auVar190._0_8_ = auVar66._0_8_;
  auVar190._8_2_ = auVar145._4_2_;
  auVar189._8_8_ = auVar190._8_8_;
  auVar189._6_2_ = auVar200._12_2_;
  auVar189._4_2_ = auVar200._4_2_;
  auVar189._2_2_ = (undefined2)uStack_11c;
  auVar189._0_2_ = (undefined2)uStack_124;
  auVar210._2_2_ = auVar81._12_2_;
  auVar210._0_2_ = auVar81._4_2_;
  auVar210._4_2_ = auVar138._4_2_;
  auVar210._6_2_ = auVar138._12_2_;
  auVar210._8_2_ = uVar119;
  auVar210._10_2_ = auVar155._12_2_;
  auVar210._12_2_ = auVar147._4_2_;
  auVar210._14_2_ = auVar147._12_2_;
  auVar165 = pmaddwd(auVar189,_DAT_149977640);
  auVar188 = pmaddwd(auVar189,_DAT_149977550);
  auVar77 = ZEXT812(0);
  auVar86._12_2_ = 0;
  auVar86._0_12_ = auVar77;
  auVar86._14_2_ = auVar107._8_2_ + auVar107._0_2_;
  auVar85._12_4_ = auVar86._12_4_;
  auVar85._0_10_ = auVar77._0_10_;
  auVar85._10_2_ = auVar145._8_2_ + auVar145._0_2_;
  lVar62 = (ulonglong)auVar85._10_6_ << 0x10;
  auVar105._2_8_ = lVar62;
  auVar105._0_2_ = auVar200._8_2_ + auVar200._0_2_;
  auVar105._10_6_ = 0;
  uVar63 = CONCAT24(auVar138._8_2_ + auVar138._0_2_,(uint)(ushort)(auVar81._8_2_ + auVar81._0_2_));
  auVar197._0_10_ = (unkuint10)uVar63 << 0x10;
  auVar197._10_2_ = auVar155._8_2_ + auVar155._0_2_;
  auVar201._12_2_ = 0;
  auVar201._0_12_ = auVar197;
  auVar201._14_2_ = auVar147._8_2_ + auVar147._0_2_;
  iVar91 = (int)((uint)(ushort)((short)uStack_120 + (short)local_128) << 0x10) >> 3;
  iVar92 = SUB164(auVar105 << 0x30,4) >> 3;
  iVar93 = (int)lVar62 >> 3;
  auVar211._12_2_ = 0;
  auVar211._0_12_ = auVar77;
  auVar211._14_2_ = auVar107._0_2_ - auVar107._8_2_;
  auVar198._12_4_ = auVar211._12_4_;
  auVar198._10_2_ = auVar145._0_2_ - auVar145._8_2_;
  auVar198._0_10_ = auVar85._0_10_;
  lVar62 = (ulonglong)auVar198._10_6_ << 0x10;
  auVar67._2_8_ = lVar62;
  auVar67._0_2_ = auVar200._0_2_ - auVar200._8_2_;
  auVar67._10_6_ = 0;
  uVar64 = CONCAT24(auVar138._0_2_ - auVar138._8_2_,(uint)(ushort)(auVar81._0_2_ - auVar81._8_2_));
  auVar98._0_10_ = (unkuint10)uVar64 << 0x10;
  auVar98._10_2_ = auVar155._0_2_ - auVar155._8_2_;
  auVar102._12_2_ = 0;
  auVar102._0_12_ = auVar98;
  auVar102._14_2_ = auVar147._0_2_ - auVar147._8_2_;
  iVar65 = (int)((uint)(ushort)((short)local_128 - (short)uStack_120) << 0x10) >> 3;
  iVar73 = SUB164(auVar67 << 0x30,4) >> 3;
  iVar75 = (int)lVar62 >> 3;
  iVar94 = (int)auVar98._0_10_ >> 3;
  iVar96 = (int)((int6)uVar64 >> 0x13);
  iVar104 = auVar98._8_4_ >> 3;
  iVar111 = auVar102._12_4_ >> 3;
  sVar151 = sVar113 + auVar107._2_2_;
  auVar177 = pmaddwd(auVar210,_DAT_149977640);
  auVar211 = pmaddwd(auVar210,_DAT_149977550);
  auVar68._8_8_ =
       (undefined8)
       (CONCAT64(CONCAT42(CONCAT22(sVar150 + auVar107._6_2_,sVar151),
                          auVar145._10_2_ + auVar145._6_2_),
                 CONCAT22(auVar145._14_2_ + auVar145._2_2_,sVar151)) >> 0x10);
  auVar68._6_2_ = auVar200._10_2_ + auVar200._6_2_;
  auVar68._4_2_ = auVar200._14_2_ + auVar200._2_2_;
  auVar68._2_2_ = uStack_120._2_2_ + uStack_124._2_2_;
  auVar68._0_2_ = uStack_11c._2_2_ + local_128._2_2_;
  auVar148._2_2_ = auVar81._10_2_ + auVar81._6_2_;
  auVar148._0_2_ = auVar81._14_2_ + auVar81._2_2_;
  auVar148._4_2_ = auVar138._14_2_ + auVar138._2_2_;
  auVar148._6_2_ = auVar138._10_2_ + auVar138._6_2_;
  auVar148._8_2_ = auVar155._14_2_ + auVar155._2_2_;
  auVar148._10_2_ = auVar155._10_2_ + auVar155._6_2_;
  auVar148._12_2_ = auVar147._14_2_ + auVar147._2_2_;
  auVar148._14_2_ = auVar147._10_2_ + auVar147._6_2_;
  auVar67 = pmaddwd(auVar68,_DAT_149977580);
  auVar99 = pmaddwd(auVar148,_DAT_149977580);
  iVar196 = (int)auVar197._0_10_ >> 3;
  iVar203 = (int)((int6)uVar63 >> 0x13);
  iVar204 = auVar197._8_4_ >> 3;
  iVar205 = auVar201._12_4_ >> 3;
  auVar108._8_8_ =
       (undefined8)
       (CONCAT64(CONCAT42(CONCAT22(auVar107._6_2_,sVar113),auVar145._6_2_),
                 CONCAT22(auVar145._14_2_,sVar113)) >> 0x10);
  auVar108._6_2_ = auVar200._6_2_;
  auVar108._4_2_ = auVar200._14_2_;
  auVar108._2_2_ = uStack_124._2_2_;
  auVar108._0_2_ = uStack_11c._2_2_;
  auVar115._2_2_ = auVar81._6_2_;
  auVar115._0_2_ = auVar81._14_2_;
  auVar115._4_2_ = auVar138._14_2_;
  auVar115._6_2_ = auVar138._6_2_;
  auVar115._8_2_ = auVar155._14_2_;
  auVar115._10_2_ = auVar155._6_2_;
  auVar115._12_2_ = auVar147._14_2_;
  auVar115._14_2_ = auVar147._6_2_;
  auVar171._8_8_ =
       (undefined8)
       (CONCAT64(CONCAT42(CONCAT22(auVar107._2_2_,sVar150),auVar145._2_2_),
                 CONCAT22(auVar145._10_2_,sVar150)) >> 0x10);
  auVar171._6_2_ = auVar200._2_2_;
  auVar171._4_2_ = auVar200._10_2_;
  auVar171._2_2_ = local_128._2_2_;
  auVar171._0_2_ = uStack_120._2_2_;
  auVar178._2_2_ = auVar81._2_2_;
  auVar178._0_2_ = auVar81._10_2_;
  auVar178._4_2_ = auVar138._10_2_;
  auVar178._6_2_ = auVar138._2_2_;
  auVar178._8_2_ = auVar155._10_2_;
  auVar178._10_2_ = auVar155._2_2_;
  auVar178._12_2_ = auVar147._10_2_;
  auVar178._14_2_ = auVar147._2_2_;
  auVar105 = pmaddwd(auVar68,_DAT_149977630);
  auVar155 = pmaddwd(auVar148,_DAT_149977630);
  auVar138 = pmaddwd(auVar178,_DAT_149977570);
  auVar81 = pmaddwd(auVar108,_DAT_149977560);
  auVar66 = pmaddwd(auVar115,_DAT_149977560);
  auVar125 = pmaddwd(auVar115,_DAT_149977610);
  auVar107 = pmaddwd(auVar108,_DAT_149977610);
  auVar145 = pmaddwd(auVar178,_DAT_149977650);
  iVar206 = auVar138._0_4_ + auVar99._0_4_;
  iVar213 = auVar138._4_4_ + auVar99._4_4_;
  iVar182 = auVar138._8_4_ + auVar99._8_4_;
  iVar185 = auVar138._12_4_ + auVar99._12_4_;
  iVar136 = auVar81._0_4_ + auVar105._0_4_;
  iVar140 = auVar81._4_4_ + auVar105._4_4_;
  iVar120 = auVar81._8_4_ + auVar105._8_4_;
  iVar141 = auVar81._12_4_ + auVar105._12_4_;
  local_128 = auVar155._0_4_;
  uStack_124 = auVar155._4_4_;
  uStack_120 = auVar155._8_4_;
  uStack_11c = auVar155._12_4_;
  iVar131 = auVar66._0_4_ + local_128;
  iVar142 = auVar66._4_4_ + uStack_124;
  iVar132 = auVar66._8_4_ + uStack_120;
  iVar134 = auVar66._12_4_ + uStack_11c;
  auVar66 = pmaddwd(auVar171,_DAT_149977570);
  iVar143 = auVar125._0_4_ + auVar99._0_4_;
  iVar149 = auVar125._4_4_ + auVar99._4_4_;
  iVar152 = auVar125._8_4_ + auVar99._8_4_;
  iVar153 = auVar125._12_4_ + auVar99._12_4_;
  iVar154 = auVar107._0_4_ + auVar67._0_4_;
  iVar157 = auVar107._4_4_ + auVar67._4_4_;
  iVar158 = auVar107._8_4_ + auVar67._8_4_;
  iVar159 = auVar107._12_4_ + auVar67._12_4_;
  auVar81 = pmaddwd(auVar171,_DAT_149977650);
  local_128 = auVar145._0_4_ + local_128;
  uStack_124 = auVar145._4_4_ + uStack_124;
  uStack_120 = auVar145._8_4_ + uStack_120;
  uStack_11c = auVar145._12_4_ + uStack_11c;
  iVar176 = auVar66._0_4_ + auVar67._0_4_;
  iVar181 = auVar66._4_4_ + auVar67._4_4_;
  iVar187 = auVar66._8_4_ + auVar67._8_4_;
  iVar194 = auVar66._12_4_ + auVar67._12_4_;
  iVar160 = auVar81._0_4_ + auVar105._0_4_;
  iVar166 = auVar81._4_4_ + auVar105._4_4_;
  iVar167 = auVar81._8_4_ + auVar105._8_4_;
  iVar168 = auVar81._12_4_ + auVar105._12_4_;
  iVar95 = (iVar65 - auVar165._0_4_) + 0x2020000;
  iVar97 = (iVar73 - auVar165._4_4_) + 0x2020000;
  iVar110 = (iVar75 - auVar165._8_4_) + 0x2020000;
  iVar112 = ((auVar198._12_4_ >> 3) - auVar165._12_4_) + 0x2020000;
  iVar72 = (iVar91 - auVar188._0_4_) + 0x2020000;
  iVar74 = (iVar92 - auVar188._4_4_) + 0x2020000;
  iVar76 = (iVar93 - auVar188._8_4_) + 0x2020000;
  iVar90 = ((auVar85._12_4_ >> 3) - auVar188._12_4_) + 0x2020000;
  iVar212 = iVar65 + auVar165._0_4_ + 0x2020000;
  iVar214 = iVar73 + auVar165._4_4_ + 0x2020000;
  iVar183 = iVar75 + auVar165._8_4_ + 0x2020000;
  iVar186 = (auVar198._12_4_ >> 3) + auVar165._12_4_ + 0x2020000;
  iVar169 = (iVar94 - auVar177._0_4_) + 0x2020000;
  iVar173 = (iVar96 - auVar177._4_4_) + 0x2020000;
  iVar174 = (iVar104 - auVar177._8_4_) + 0x2020000;
  iVar175 = (iVar111 - auVar177._12_4_) + 0x2020000;
  iVar180 = iVar91 + auVar188._0_4_ + 0x2020000;
  iVar184 = iVar92 + auVar188._4_4_ + 0x2020000;
  iVar193 = iVar93 + auVar188._8_4_ + 0x2020000;
  iVar195 = (auVar85._12_4_ >> 3) + auVar188._12_4_ + 0x2020000;
  auVar103._0_4_ = iVar95 + iVar160 >> 0x12;
  auVar103._4_4_ = iVar97 + iVar166 >> 0x12;
  auVar103._8_4_ = iVar110 + iVar167 >> 0x12;
  auVar103._12_4_ = iVar112 + iVar168 >> 0x12;
  iVar92 = iVar196 + auVar211._0_4_ + 0x2020000;
  iVar93 = iVar203 + auVar211._4_4_ + 0x2020000;
  iVar133 = iVar204 + auVar211._8_4_ + 0x2020000;
  iVar135 = iVar205 + auVar211._12_4_ + 0x2020000;
  auVar156._0_4_ = iVar180 + iVar176 >> 0x12;
  auVar156._4_4_ = iVar184 + iVar181 >> 0x12;
  auVar156._8_4_ = iVar193 + iVar187 >> 0x12;
  auVar156._12_4_ = iVar195 + iVar194 >> 0x12;
  auVar147._0_4_ = iVar92 + iVar206 >> 0x12;
  auVar147._4_4_ = iVar93 + iVar213 >> 0x12;
  auVar147._8_4_ = iVar133 + iVar182 >> 0x12;
  auVar147._12_4_ = iVar135 + iVar185 >> 0x12;
  iVar65 = iVar94 + auVar177._0_4_ + 0x2020000;
  iVar73 = iVar96 + auVar177._4_4_ + 0x2020000;
  iVar75 = iVar104 + auVar177._8_4_ + 0x2020000;
  iVar91 = iVar111 + auVar177._12_4_ + 0x2020000;
  auVar125 = packssdw(auVar156,auVar147);
  iVar94 = (iVar196 - auVar211._0_4_) + 0x2020000;
  iVar96 = (iVar203 - auVar211._4_4_) + 0x2020000;
  iVar104 = (iVar204 - auVar211._8_4_) + 0x2020000;
  iVar111 = (iVar205 - auVar211._12_4_) + 0x2020000;
  auVar200._0_4_ = iVar65 + iVar131 >> 0x12;
  auVar200._4_4_ = iVar73 + iVar142 >> 0x12;
  auVar200._8_4_ = iVar75 + iVar132 >> 0x12;
  auVar200._12_4_ = iVar91 + iVar134 >> 0x12;
  auVar87._0_4_ = iVar212 + iVar136 >> 0x12;
  auVar87._4_4_ = iVar214 + iVar140 >> 0x12;
  auVar87._8_4_ = iVar183 + iVar120 >> 0x12;
  auVar87._12_4_ = iVar186 + iVar141 >> 0x12;
  auVar67 = packssdw(auVar87,auVar200);
  sVar150 = auVar125._0_2_;
  sVar2 = auVar125._2_2_;
  sVar6 = auVar125._4_2_;
  sVar10 = auVar125._6_2_;
  sVar14 = auVar125._8_2_;
  sVar18 = auVar125._10_2_;
  sVar22 = auVar125._12_2_;
  sVar26 = auVar125._14_2_;
  sVar30 = auVar67._0_2_;
  sVar34 = auVar67._2_2_;
  sVar38 = auVar67._4_2_;
  sVar42 = auVar67._6_2_;
  sVar46 = auVar67._8_2_;
  sVar50 = auVar67._10_2_;
  sVar54 = auVar67._12_2_;
  sVar58 = auVar67._14_2_;
  auVar69._0_4_ = iVar169 + local_128 >> 0x12;
  auVar69._4_4_ = iVar173 + uStack_124 >> 0x12;
  auVar69._8_4_ = iVar174 + uStack_120 >> 0x12;
  auVar69._12_4_ = iVar175 + uStack_11c >> 0x12;
  auVar66 = packssdw(auVar103,auVar69);
  auVar88._0_4_ = iVar72 + iVar154 >> 0x12;
  auVar88._4_4_ = iVar74 + iVar157 >> 0x12;
  auVar88._8_4_ = iVar76 + iVar158 >> 0x12;
  auVar88._12_4_ = iVar90 + iVar159 >> 0x12;
  auVar70._0_4_ = iVar94 + iVar143 >> 0x12;
  auVar70._4_4_ = iVar96 + iVar149 >> 0x12;
  auVar70._8_4_ = iVar104 + iVar152 >> 0x12;
  auVar70._12_4_ = iVar111 + iVar153 >> 0x12;
  auVar81 = packssdw(auVar88,auVar70);
  sVar113 = auVar66._0_2_;
  sVar3 = auVar66._2_2_;
  sVar7 = auVar66._4_2_;
  sVar11 = auVar66._6_2_;
  sVar15 = auVar66._8_2_;
  sVar19 = auVar66._10_2_;
  sVar23 = auVar66._12_2_;
  sVar27 = auVar66._14_2_;
  sVar31 = auVar81._0_2_;
  sVar35 = auVar81._2_2_;
  sVar39 = auVar81._4_2_;
  sVar43 = auVar81._6_2_;
  sVar47 = auVar81._8_2_;
  sVar51 = auVar81._10_2_;
  sVar55 = auVar81._12_2_;
  sVar59 = auVar81._14_2_;
  auVar71._0_4_ = iVar95 - iVar160 >> 0x12;
  auVar71._4_4_ = iVar97 - iVar166 >> 0x12;
  auVar71._8_4_ = iVar110 - iVar167 >> 0x12;
  auVar71._12_4_ = iVar112 - iVar168 >> 0x12;
  auVar116._0_4_ = iVar92 - iVar206 >> 0x12;
  auVar116._4_4_ = iVar93 - iVar213 >> 0x12;
  auVar116._8_4_ = iVar133 - iVar182 >> 0x12;
  auVar116._12_4_ = iVar135 - iVar185 >> 0x12;
  auVar89._0_4_ = iVar72 - iVar154 >> 0x12;
  auVar89._4_4_ = iVar74 - iVar157 >> 0x12;
  auVar89._8_4_ = iVar76 - iVar158 >> 0x12;
  auVar89._12_4_ = iVar90 - iVar159 >> 0x12;
  auVar109._0_4_ = iVar65 - iVar131 >> 0x12;
  auVar109._4_4_ = iVar73 - iVar142 >> 0x12;
  auVar109._8_4_ = iVar75 - iVar132 >> 0x12;
  auVar109._12_4_ = iVar91 - iVar134 >> 0x12;
  auVar179._0_4_ = iVar212 - iVar136 >> 0x12;
  auVar179._4_4_ = iVar214 - iVar140 >> 0x12;
  auVar179._8_4_ = iVar183 - iVar120 >> 0x12;
  auVar179._12_4_ = iVar186 - iVar141 >> 0x12;
  auVar145 = packssdw(auVar179,auVar109);
  auVar202._0_4_ = iVar94 - iVar143 >> 0x12;
  auVar202._4_4_ = iVar96 - iVar149 >> 0x12;
  auVar202._8_4_ = iVar104 - iVar152 >> 0x12;
  auVar202._12_4_ = iVar111 - iVar153 >> 0x12;
  auVar99 = packssdw(auVar89,auVar202);
  auVar172._0_4_ = iVar180 - iVar176 >> 0x12;
  auVar172._4_4_ = iVar184 - iVar181 >> 0x12;
  auVar172._8_4_ = iVar193 - iVar187 >> 0x12;
  auVar172._12_4_ = iVar195 - iVar194 >> 0x12;
  auVar107 = packssdw(auVar172,auVar116);
  sVar151 = auVar145._0_2_;
  sVar4 = auVar145._2_2_;
  sVar8 = auVar145._4_2_;
  sVar12 = auVar145._6_2_;
  sVar16 = auVar145._8_2_;
  sVar20 = auVar145._10_2_;
  sVar24 = auVar145._12_2_;
  sVar28 = auVar145._14_2_;
  sVar32 = auVar107._0_2_;
  sVar36 = auVar107._2_2_;
  sVar40 = auVar107._4_2_;
  sVar44 = auVar107._6_2_;
  sVar48 = auVar107._8_2_;
  sVar52 = auVar107._10_2_;
  sVar56 = auVar107._12_2_;
  sVar60 = auVar107._14_2_;
  auVar118._0_4_ = iVar169 - local_128 >> 0x12;
  auVar118._4_4_ = iVar173 - uStack_124 >> 0x12;
  auVar118._8_4_ = iVar174 - uStack_120 >> 0x12;
  auVar118._12_4_ = iVar175 - uStack_11c >> 0x12;
  auVar105 = packssdw(auVar71,auVar118);
  sVar1 = auVar99._0_2_;
  sVar5 = auVar99._2_2_;
  sVar9 = auVar99._4_2_;
  sVar13 = auVar99._6_2_;
  sVar17 = auVar99._8_2_;
  sVar21 = auVar99._10_2_;
  sVar25 = auVar99._12_2_;
  sVar29 = auVar99._14_2_;
  sVar33 = auVar105._0_2_;
  sVar37 = auVar105._2_2_;
  sVar41 = auVar105._4_2_;
  sVar45 = auVar105._6_2_;
  sVar49 = auVar105._8_2_;
  sVar53 = auVar105._10_2_;
  sVar57 = auVar105._12_2_;
  sVar61 = auVar105._14_2_;
  *param_1 = (0 < sVar150) * (sVar150 < 0x100) * auVar125[0] - (0xff < sVar150);
  param_1[1] = (0 < sVar30) * (sVar30 < 0x100) * auVar67[0] - (0xff < sVar30);
  param_1[2] = (0 < sVar113) * (sVar113 < 0x100) * auVar66[0] - (0xff < sVar113);
  param_1[3] = (0 < sVar31) * (sVar31 < 0x100) * auVar81[0] - (0xff < sVar31);
  param_1[4] = (0 < sVar1) * (sVar1 < 0x100) * auVar99[0] - (0xff < sVar1);
  param_1[5] = (0 < sVar33) * (sVar33 < 0x100) * auVar105[0] - (0xff < sVar33);
  param_1[6] = (0 < sVar151) * (sVar151 < 0x100) * auVar145[0] - (0xff < sVar151);
  param_1[7] = (0 < sVar32) * (sVar32 < 0x100) * auVar107[0] - (0xff < sVar32);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar2) * (sVar2 < 0x100) * auVar125[2] - (0xff < sVar2);
  param_1[1] = (0 < sVar34) * (sVar34 < 0x100) * auVar67[2] - (0xff < sVar34);
  param_1[2] = (0 < sVar3) * (sVar3 < 0x100) * auVar66[2] - (0xff < sVar3);
  param_1[3] = (0 < sVar35) * (sVar35 < 0x100) * auVar81[2] - (0xff < sVar35);
  param_1[4] = (0 < sVar5) * (sVar5 < 0x100) * auVar99[2] - (0xff < sVar5);
  param_1[5] = (0 < sVar37) * (sVar37 < 0x100) * auVar105[2] - (0xff < sVar37);
  param_1[6] = (0 < sVar4) * (sVar4 < 0x100) * auVar145[2] - (0xff < sVar4);
  param_1[7] = (0 < sVar36) * (sVar36 < 0x100) * auVar107[2] - (0xff < sVar36);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar6) * (sVar6 < 0x100) * auVar125[4] - (0xff < sVar6);
  param_1[1] = (0 < sVar38) * (sVar38 < 0x100) * auVar67[4] - (0xff < sVar38);
  param_1[2] = (0 < sVar7) * (sVar7 < 0x100) * auVar66[4] - (0xff < sVar7);
  param_1[3] = (0 < sVar39) * (sVar39 < 0x100) * auVar81[4] - (0xff < sVar39);
  param_1[4] = (0 < sVar9) * (sVar9 < 0x100) * auVar99[4] - (0xff < sVar9);
  param_1[5] = (0 < sVar41) * (sVar41 < 0x100) * auVar105[4] - (0xff < sVar41);
  param_1[6] = (0 < sVar8) * (sVar8 < 0x100) * auVar145[4] - (0xff < sVar8);
  param_1[7] = (0 < sVar40) * (sVar40 < 0x100) * auVar107[4] - (0xff < sVar40);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar10) * (sVar10 < 0x100) * auVar125[6] - (0xff < sVar10);
  param_1[1] = (0 < sVar42) * (sVar42 < 0x100) * auVar67[6] - (0xff < sVar42);
  param_1[2] = (0 < sVar11) * (sVar11 < 0x100) * auVar66[6] - (0xff < sVar11);
  param_1[3] = (0 < sVar43) * (sVar43 < 0x100) * auVar81[6] - (0xff < sVar43);
  param_1[4] = (0 < sVar13) * (sVar13 < 0x100) * auVar99[6] - (0xff < sVar13);
  param_1[5] = (0 < sVar45) * (sVar45 < 0x100) * auVar105[6] - (0xff < sVar45);
  param_1[6] = (0 < sVar12) * (sVar12 < 0x100) * auVar145[6] - (0xff < sVar12);
  param_1[7] = (0 < sVar44) * (sVar44 < 0x100) * auVar107[6] - (0xff < sVar44);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar14) * (sVar14 < 0x100) * auVar125[8] - (0xff < sVar14);
  param_1[1] = (0 < sVar46) * (sVar46 < 0x100) * auVar67[8] - (0xff < sVar46);
  param_1[2] = (0 < sVar15) * (sVar15 < 0x100) * auVar66[8] - (0xff < sVar15);
  param_1[3] = (0 < sVar47) * (sVar47 < 0x100) * auVar81[8] - (0xff < sVar47);
  param_1[4] = (0 < sVar17) * (sVar17 < 0x100) * auVar99[8] - (0xff < sVar17);
  param_1[5] = (0 < sVar49) * (sVar49 < 0x100) * auVar105[8] - (0xff < sVar49);
  param_1[6] = (0 < sVar16) * (sVar16 < 0x100) * auVar145[8] - (0xff < sVar16);
  param_1[7] = (0 < sVar48) * (sVar48 < 0x100) * auVar107[8] - (0xff < sVar48);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar18) * (sVar18 < 0x100) * auVar125[10] - (0xff < sVar18);
  param_1[1] = (0 < sVar50) * (sVar50 < 0x100) * auVar67[10] - (0xff < sVar50);
  param_1[2] = (0 < sVar19) * (sVar19 < 0x100) * auVar66[10] - (0xff < sVar19);
  param_1[3] = (0 < sVar51) * (sVar51 < 0x100) * auVar81[10] - (0xff < sVar51);
  param_1[4] = (0 < sVar21) * (sVar21 < 0x100) * auVar99[10] - (0xff < sVar21);
  param_1[5] = (0 < sVar53) * (sVar53 < 0x100) * auVar105[10] - (0xff < sVar53);
  param_1[6] = (0 < sVar20) * (sVar20 < 0x100) * auVar145[10] - (0xff < sVar20);
  param_1[7] = (0 < sVar52) * (sVar52 < 0x100) * auVar107[10] - (0xff < sVar52);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar22) * (sVar22 < 0x100) * auVar125[0xc] - (0xff < sVar22);
  param_1[1] = (0 < sVar54) * (sVar54 < 0x100) * auVar67[0xc] - (0xff < sVar54);
  param_1[2] = (0 < sVar23) * (sVar23 < 0x100) * auVar66[0xc] - (0xff < sVar23);
  param_1[3] = (0 < sVar55) * (sVar55 < 0x100) * auVar81[0xc] - (0xff < sVar55);
  param_1[4] = (0 < sVar25) * (sVar25 < 0x100) * auVar99[0xc] - (0xff < sVar25);
  param_1[5] = (0 < sVar57) * (sVar57 < 0x100) * auVar105[0xc] - (0xff < sVar57);
  param_1[6] = (0 < sVar24) * (sVar24 < 0x100) * auVar145[0xc] - (0xff < sVar24);
  param_1[7] = (0 < sVar56) * (sVar56 < 0x100) * auVar107[0xc] - (0xff < sVar56);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar26) * (sVar26 < 0x100) * auVar125[0xe] - (0xff < sVar26);
  param_1[1] = (0 < sVar58) * (sVar58 < 0x100) * auVar67[0xe] - (0xff < sVar58);
  param_1[2] = (0 < sVar27) * (sVar27 < 0x100) * auVar66[0xe] - (0xff < sVar27);
  param_1[3] = (0 < sVar59) * (sVar59 < 0x100) * auVar81[0xe] - (0xff < sVar59);
  param_1[4] = (0 < sVar29) * (sVar29 < 0x100) * auVar99[0xe] - (0xff < sVar29);
  param_1[5] = (0 < sVar61) * (sVar61 < 0x100) * auVar105[0xe] - (0xff < sVar61);
  param_1[6] = (0 < sVar28) * (sVar28 < 0x100) * auVar145[0xe] - (0xff < sVar28);
  param_1[7] = (0 < sVar60) * (sVar60 < 0x100) * auVar107[0xe] - (0xff < sVar60);
  return;
}



// FUNCTION 144b92d10 FUN_144b92d10 body=197 status=ok
// SIG undefined FUN_144b92d10(void)

ulonglong FUN_144b92d10(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  byte *pbVar5;
  
  bVar1 = *(byte *)(param_1 + 0x905);
  if (bVar1 != 0xff) {
    *(undefined1 *)(param_1 + 0x905) = 0xff;
    return (ulonglong)bVar1;
  }
  lVar3 = *param_1;
  pcVar4 = *(char **)(lVar3 + 0xc0);
  if (*(char **)(lVar3 + 200) <= pcVar4) {
    if (*(int *)(lVar3 + 0x30) == 0) goto LAB_144b92dc8;
    FUN_144b908c0(lVar3);
    pcVar4 = *(char **)(lVar3 + 0xc0);
  }
  cVar2 = *pcVar4;
  pcVar4 = pcVar4 + 1;
  *(char **)(lVar3 + 0xc0) = pcVar4;
  if (cVar2 == -1) {
    do {
      lVar3 = *param_1;
      pbVar5 = *(byte **)(lVar3 + 0xc0);
      if (*(byte **)(lVar3 + 200) <= pbVar5) {
        if (*(int *)(lVar3 + 0x30) == 0) {
          return 0;
        }
        FUN_144b908c0(lVar3);
        pbVar5 = *(byte **)(lVar3 + 0xc0);
      }
      bVar1 = *pbVar5;
      *(byte **)(lVar3 + 0xc0) = pbVar5 + 1;
    } while (bVar1 == 0xff);
    return (ulonglong)bVar1;
  }
LAB_144b92dc8:
  return CONCAT71((int7)((ulonglong)pcVar4 >> 8),0xff);
}



// FUNCTION 144b92de0 FUN_144b92de0 body=2179 status=ok
// SIG undefined FUN_144b92de0(void)

undefined8 FUN_144b92de0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_res10;
  int local_res18;
  
  *(undefined8 *)(param_1 + 0x4820) = 0;
  *(undefined4 *)(param_1 + 0x482c) = 0;
  *(undefined4 *)(param_1 + 0x47d8) = 0;
  *(undefined4 *)(param_1 + 0x4778) = 0;
  *(undefined4 *)(param_1 + 0x4718) = 0;
  *(undefined4 *)(param_1 + 0x46b8) = 0;
  *(undefined1 *)(param_1 + 0x4828) = 0xff;
  iVar10 = 0x7fffffff;
  if (*(int *)(param_1 + 0x4868) != 0) {
    iVar10 = *(int *)(param_1 + 0x4868);
  }
  *(undefined4 *)(param_1 + 0x4844) = 0;
  *(int *)(param_1 + 0x486c) = iVar10;
  if (*(int *)(param_1 + 0x4830) == 0) {
    iVar10 = 0;
    if (*(int *)(param_1 + 0x4854) == 1) {
      iVar7 = *(int *)(param_1 + 0x4858);
      lVar5 = (longlong)iVar7 * 0x60 + param_1;
      iVar9 = *(int *)(lVar5 + 0x46bc) + 7 >> 3;
      iVar2 = *(int *)(lVar5 + 0x46c0) + 7 >> 3;
      if (0 < iVar2) {
        do {
          iVar8 = 0;
          if (0 < iVar9) {
            iVar6 = 0;
            do {
              lVar1 = *(longlong *)(lVar5 + 0x46f0) +
                      (longlong)((*(int *)(lVar5 + 0x46f8) * iVar10 + iVar8) * 0x40) * 2;
              iVar3 = FUN_144b91050(param_1,lVar1,
                                    param_1 + 8 + (longlong)*(int *)(lVar5 + 0x46b0) * 0x690,
                                    param_1 + 0x1a48 + (longlong)*(int *)(lVar5 + 0x46b4) * 0x690,
                                    param_1 + 0x3688 + (longlong)*(int *)(lVar5 + 0x46b4) * 0x400,
                                    iVar7,param_1 + 0x3488 +
                                          (longlong)*(int *)(lVar5 + 0x46ac) * 0x80);
              if (iVar3 == 0) {
                return 0;
              }
              (**(code **)(param_1 + 0x4870))
                        ((longlong)(*(int *)(lVar5 + 0x46c4) * iVar10 * 8) +
                         *(longlong *)(lVar5 + 0x46d0) + (longlong)iVar6,*(int *)(lVar5 + 0x46c4),
                         lVar1);
              *(int *)(param_1 + 0x486c) = *(int *)(param_1 + 0x486c) + -1;
              if (*(int *)(param_1 + 0x486c) < 1) {
                if (*(int *)(param_1 + 0x4824) < 0x18) {
                  FUN_144b90e70(param_1);
                }
                if (7 < (byte)(*(char *)(param_1 + 0x4828) + 0x30U)) {
                  return 1;
                }
                *(undefined8 *)(param_1 + 0x4820) = 0;
                *(undefined4 *)(param_1 + 0x482c) = 0;
                *(undefined4 *)(param_1 + 0x47d8) = 0;
                *(undefined4 *)(param_1 + 0x4778) = 0;
                *(undefined4 *)(param_1 + 0x4718) = 0;
                *(undefined4 *)(param_1 + 0x46b8) = 0;
                *(undefined1 *)(param_1 + 0x4828) = 0xff;
                iVar3 = 0x7fffffff;
                if (*(int *)(param_1 + 0x4868) != 0) {
                  iVar3 = *(int *)(param_1 + 0x4868);
                }
                *(undefined4 *)(param_1 + 0x4844) = 0;
                *(int *)(param_1 + 0x486c) = iVar3;
              }
              iVar8 = iVar8 + 1;
              iVar6 = iVar6 + 8;
            } while (iVar8 < iVar9);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar2);
      }
    }
    else {
      local_res18 = 0;
      if (0 < *(int *)(param_1 + 0x4694)) {
        do {
          local_res10 = 0;
          if (0 < *(int *)(param_1 + 0x4690)) {
            do {
              iVar10 = 0;
              if (0 < *(int *)(param_1 + 0x4854)) {
                piVar4 = (int *)(param_1 + 0x4858);
                do {
                  iVar7 = *piVar4;
                  iVar2 = 0;
                  lVar5 = (longlong)iVar7 * 0x60 + param_1;
                  if (0 < *(int *)(lVar5 + 0x46a8)) {
                    do {
                      iVar9 = *(int *)(lVar5 + 0x46a4);
                      iVar8 = 0;
                      if (0 < iVar9) {
                        do {
                          iVar6 = (iVar9 * local_res10 + iVar8) * 8;
                          iVar3 = (*(int *)(lVar5 + 0x46a8) * local_res18 + iVar2) * 8;
                          lVar1 = *(longlong *)(lVar5 + 0x46f0) +
                                  (longlong)((*(int *)(lVar5 + 0x46f8) * iVar3 + iVar6) * 8) * 2;
                          iVar9 = FUN_144b91050(param_1,lVar1,
                                                param_1 + 8 +
                                                (longlong)*(int *)(lVar5 + 0x46b0) * 0x690,
                                                param_1 + 0x1a48 +
                                                (longlong)*(int *)(lVar5 + 0x46b4) * 0x690,
                                                param_1 + 0x3688 +
                                                (longlong)*(int *)(lVar5 + 0x46b4) * 0x400,iVar7,
                                                param_1 + 0x3488 +
                                                (longlong)*(int *)(lVar5 + 0x46ac) * 0x80);
                          if (iVar9 == 0) {
                            return 0;
                          }
                          (**(code **)(param_1 + 0x4870))
                                    ((longlong)(*(int *)(lVar5 + 0x46c4) * iVar3) +
                                     *(longlong *)(lVar5 + 0x46d0) + (longlong)iVar6,
                                     *(int *)(lVar5 + 0x46c4),lVar1);
                          iVar9 = *(int *)(lVar5 + 0x46a4);
                          iVar8 = iVar8 + 1;
                        } while (iVar8 < iVar9);
                      }
                      iVar2 = iVar2 + 1;
                    } while (iVar2 < *(int *)(lVar5 + 0x46a8));
                  }
                  iVar10 = iVar10 + 1;
                  piVar4 = piVar4 + 1;
                } while (iVar10 < *(int *)(param_1 + 0x4854));
              }
              *(int *)(param_1 + 0x486c) = *(int *)(param_1 + 0x486c) + -1;
              if (*(int *)(param_1 + 0x486c) < 1) {
                if (*(int *)(param_1 + 0x4824) < 0x18) {
                  FUN_144b90e70(param_1);
                }
                if (7 < (byte)(*(char *)(param_1 + 0x4828) + 0x30U)) {
                  return 1;
                }
                *(undefined8 *)(param_1 + 0x4820) = 0;
                *(undefined4 *)(param_1 + 0x482c) = 0;
                *(undefined4 *)(param_1 + 0x47d8) = 0;
                *(undefined4 *)(param_1 + 0x4778) = 0;
                *(undefined4 *)(param_1 + 0x4718) = 0;
                *(undefined4 *)(param_1 + 0x46b8) = 0;
                *(undefined1 *)(param_1 + 0x4828) = 0xff;
                iVar10 = 0x7fffffff;
                if (*(int *)(param_1 + 0x4868) != 0) {
                  iVar10 = *(int *)(param_1 + 0x4868);
                }
                *(undefined4 *)(param_1 + 0x4844) = 0;
                *(int *)(param_1 + 0x486c) = iVar10;
              }
              local_res10 = local_res10 + 1;
            } while (local_res10 < *(int *)(param_1 + 0x4690));
          }
          local_res18 = local_res18 + 1;
        } while (local_res18 < *(int *)(param_1 + 0x4694));
      }
    }
  }
  else if (*(int *)(param_1 + 0x4854) == 1) {
    iVar10 = *(int *)(param_1 + 0x4858);
    iVar7 = 0;
    lVar5 = (longlong)iVar10 * 0x60 + param_1;
    iVar9 = *(int *)(lVar5 + 0x46bc) + 7 >> 3;
    iVar2 = *(int *)(lVar5 + 0x46c0) + 7 >> 3;
    if (0 < iVar2) {
      do {
        iVar8 = 0;
        if (0 < iVar9) {
          do {
            lVar1 = *(longlong *)(lVar5 + 0x46f0) +
                    (longlong)((*(int *)(lVar5 + 0x46f8) * iVar7 + iVar8) * 0x40) * 2;
            if (*(int *)(param_1 + 0x4834) == 0) {
              iVar6 = FUN_144b915c0(param_1,lVar1,
                                    param_1 + 8 + (longlong)*(int *)(lVar5 + 0x46b0) * 0x690,iVar10)
              ;
            }
            else {
              iVar6 = FUN_144b918e0(param_1,lVar1,
                                    param_1 + 0x1a48 + (longlong)*(int *)(lVar5 + 0x46b4) * 0x690,
                                    param_1 + 0x3688 + (longlong)*(int *)(lVar5 + 0x46b4) * 0x400);
            }
            if (iVar6 == 0) {
              return 0;
            }
            *(int *)(param_1 + 0x486c) = *(int *)(param_1 + 0x486c) + -1;
            if (*(int *)(param_1 + 0x486c) < 1) {
              if (*(int *)(param_1 + 0x4824) < 0x18) {
                FUN_144b90e70(param_1);
              }
              if (7 < (byte)(*(char *)(param_1 + 0x4828) + 0x30U)) {
                return 1;
              }
              *(undefined8 *)(param_1 + 0x4820) = 0;
              *(undefined4 *)(param_1 + 0x482c) = 0;
              *(undefined4 *)(param_1 + 0x47d8) = 0;
              *(undefined4 *)(param_1 + 0x4778) = 0;
              *(undefined4 *)(param_1 + 0x4718) = 0;
              *(undefined4 *)(param_1 + 0x46b8) = 0;
              *(undefined1 *)(param_1 + 0x4828) = 0xff;
              iVar6 = 0x7fffffff;
              if (*(int *)(param_1 + 0x4868) != 0) {
                iVar6 = *(int *)(param_1 + 0x4868);
              }
              *(undefined4 *)(param_1 + 0x4844) = 0;
              *(int *)(param_1 + 0x486c) = iVar6;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar9);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar2);
    }
  }
  else {
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x4694)) {
      do {
        iVar7 = 0;
        if (0 < *(int *)(param_1 + 0x4690)) {
          do {
            iVar2 = 0;
            if (0 < *(int *)(param_1 + 0x4854)) {
              piVar4 = (int *)(param_1 + 0x4858);
              do {
                iVar9 = *piVar4;
                iVar8 = 0;
                lVar5 = (longlong)iVar9 * 0x60 + param_1;
                if (0 < *(int *)(lVar5 + 0x46a8)) {
                  do {
                    iVar6 = *(int *)(lVar5 + 0x46a4);
                    iVar3 = 0;
                    if (0 < iVar6) {
                      do {
                        iVar6 = FUN_144b915c0(param_1,*(longlong *)(lVar5 + 0x46f0) +
                                                      (longlong)
                                                      ((iVar6 * iVar7 +
                                                       (*(int *)(lVar5 + 0x46a8) * iVar10 + iVar8) *
                                                       *(int *)(lVar5 + 0x46f8) + iVar3) * 0x40) * 2
                                              ,param_1 + 8 +
                                               (longlong)*(int *)(lVar5 + 0x46b0) * 0x690,iVar9);
                        if (iVar6 == 0) {
                          return 0;
                        }
                        iVar6 = *(int *)(lVar5 + 0x46a4);
                        iVar3 = iVar3 + 1;
                      } while (iVar3 < iVar6);
                    }
                    iVar8 = iVar8 + 1;
                  } while (iVar8 < *(int *)(lVar5 + 0x46a8));
                }
                iVar2 = iVar2 + 1;
                piVar4 = piVar4 + 1;
              } while (iVar2 < *(int *)(param_1 + 0x4854));
            }
            *(int *)(param_1 + 0x486c) = *(int *)(param_1 + 0x486c) + -1;
            if (*(int *)(param_1 + 0x486c) < 1) {
              if (*(int *)(param_1 + 0x4824) < 0x18) {
                FUN_144b90e70(param_1);
              }
              if (7 < (byte)(*(char *)(param_1 + 0x4828) + 0x30U)) {
                return 1;
              }
              *(undefined8 *)(param_1 + 0x4820) = 0;
              *(undefined4 *)(param_1 + 0x482c) = 0;
              *(undefined4 *)(param_1 + 0x47d8) = 0;
              *(undefined4 *)(param_1 + 0x4778) = 0;
              *(undefined4 *)(param_1 + 0x4718) = 0;
              *(undefined4 *)(param_1 + 0x46b8) = 0;
              *(undefined1 *)(param_1 + 0x4828) = 0xff;
              iVar2 = 0x7fffffff;
              if (*(int *)(param_1 + 0x4868) != 0) {
                iVar2 = *(int *)(param_1 + 0x4868);
              }
              *(undefined4 *)(param_1 + 0x4844) = 0;
              *(int *)(param_1 + 0x486c) = iVar2;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(param_1 + 0x4690));
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 0x4694));
    }
  }
  return 1;
}



// FUNCTION 144b93670 FUN_144b93670 body=386 status=ok
// SIG undefined FUN_144b93670(void)

void FUN_144b93670(longlong *param_1)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  short *psVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (((int)param_1[0x906] != 0) && (iVar11 = 0, 0 < *(int *)(*param_1 + 8))) {
    plVar5 = param_1 + 0x8de;
    do {
      iVar6 = 0;
      iVar12 = *(int *)((longlong)plVar5 + -0x34) + 7 >> 3;
      iVar10 = (int)plVar5[-6] + 7 >> 3;
      if (0 < iVar10) {
        do {
          iVar8 = 0;
          if (0 < iVar12) {
            lVar7 = 0;
            do {
              lVar9 = 0x10;
              lVar2 = *plVar5 + (longlong)(((int)plVar5[1] * iVar6 + iVar8) * 0x40) * 2;
              lVar3 = ((longlong)*(int *)((longlong)plVar5 + -0x44) * 0x80 + 0x3488) - lVar2;
              psVar4 = (short *)(lVar2 + 2);
              do {
                psVar1 = psVar4 + 4;
                psVar4[-1] = psVar4[-1] *
                             *(short *)((longlong)param_1 + lVar3 + -2 + (longlong)psVar4);
                *psVar4 = *psVar4 * *(short *)((longlong)param_1 + lVar3 + -8 + (longlong)psVar1);
                psVar4[1] = psVar4[1] *
                            *(short *)((longlong)param_1 + lVar3 + -6 + (longlong)psVar1);
                psVar4[2] = psVar4[2] *
                            *(short *)((longlong)param_1 + lVar3 + -4 + (longlong)psVar1);
                lVar9 = lVar9 + -1;
                psVar4 = psVar1;
              } while (lVar9 != 0);
              (*(code *)param_1[0x90e])
                        (*(int *)((longlong)plVar5 + -0x2c) * iVar6 * 8 + lVar7 + plVar5[-4]);
              iVar8 = iVar8 + 1;
              lVar7 = lVar7 + 8;
            } while (iVar8 < iVar12);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar10);
      }
      iVar11 = iVar11 + 1;
      plVar5 = plVar5 + 0xc;
    } while (iVar11 < *(int *)(*param_1 + 8));
  }
  return;
}



// FUNCTION 144b93800 FUN_144b93800 body=1802 status=ok
// SIG undefined FUN_144b93800(void)

void FUN_144b93800(longlong *param_1,int param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined1 *puVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  byte bVar12;
  byte bVar13;
  undefined1 uVar14;
  ulonglong uVar15;
  char cVar16;
  longlong *plVar17;
  int iVar18;
  uint *puVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined1 auStack_a8 [32];
  int local_88;
  uint local_84;
  uint local_78 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0xc4) {
    local_88 = FUN_144b90ae0();
    local_88 = local_88 + -2;
    while (0 < local_88) {
      lVar21 = *param_1;
      iVar7 = 0;
      pbVar11 = *(byte **)(lVar21 + 0xc0);
      if (pbVar11 < *(byte **)(lVar21 + 200)) {
        bVar12 = *pbVar11;
        *(byte **)(lVar21 + 0xc0) = pbVar11 + 1;
      }
      else if (*(int *)(lVar21 + 0x30) == 0) {
        bVar12 = 0;
      }
      else {
        FUN_144b908c0(lVar21);
        bVar12 = **(byte **)(lVar21 + 0xc0);
        *(byte **)(lVar21 + 0xc0) = *(byte **)(lVar21 + 0xc0) + 1;
      }
      local_84 = (uint)(bVar12 >> 4);
      if ((1 < local_84) || (3 < (bVar12 & 0xf))) {
LAB_144b93ece:
        *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xd8) = "bad DHT header";
        break;
      }
      puVar19 = local_78;
      lVar21 = 0x10;
      do {
        lVar1 = *param_1;
        pbVar11 = *(byte **)(lVar1 + 0xc0);
        if (pbVar11 < *(byte **)(lVar1 + 200)) {
          bVar13 = *pbVar11;
          *(byte **)(lVar1 + 0xc0) = pbVar11 + 1;
        }
        else if (*(int *)(lVar1 + 0x30) == 0) {
          bVar13 = 0;
        }
        else {
          FUN_144b908c0(lVar1);
          bVar13 = **(byte **)(lVar1 + 0xc0);
          *(byte **)(lVar1 + 0xc0) = *(byte **)(lVar1 + 0xc0) + 1;
        }
        *puVar19 = (uint)bVar13;
        iVar7 = iVar7 + (uint)bVar13;
        puVar19 = puVar19 + 1;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      if (0x100 < iVar7) goto LAB_144b93ece;
      iVar18 = local_88 + -0x11;
      uVar15 = (ulonglong)(bVar12 & 0xf);
      local_88 = iVar18;
      if (bVar12 >> 4 == 0) {
        plVar20 = param_1 + uVar15 * 0xd2;
        iVar10 = FUN_144b90b90(plVar20 + 1,local_78);
        if (iVar10 == 0) break;
        plVar17 = plVar20 + 0x81;
      }
      else {
        plVar20 = param_1 + uVar15 * 0xd2;
        iVar10 = FUN_144b90b90(plVar20 + 0x349,local_78);
        if (iVar10 == 0) break;
        plVar17 = plVar20 + 0x3c9;
      }
      lVar21 = 0;
      if (0 < iVar7) {
        do {
          lVar1 = *param_1;
          puVar3 = *(undefined1 **)(lVar1 + 0xc0);
          if (puVar3 < *(undefined1 **)(lVar1 + 200)) {
            uVar14 = *puVar3;
            *(undefined1 **)(lVar1 + 0xc0) = puVar3 + 1;
          }
          else if (*(int *)(lVar1 + 0x30) == 0) {
            uVar14 = 0;
          }
          else {
            FUN_144b908c0(lVar1);
            uVar14 = **(undefined1 **)(lVar1 + 0xc0);
            *(undefined1 **)(lVar1 + 0xc0) = *(undefined1 **)(lVar1 + 0xc0) + 1;
          }
          *(undefined1 *)(lVar21 + (longlong)plVar17) = uVar14;
          lVar21 = lVar21 + 1;
          iVar18 = local_88;
        } while (lVar21 < iVar7);
      }
      if (local_84 != 0) {
        FUN_144b90d90(param_1 + uVar15 * 0x80 + 0x6d1,plVar20 + 0x349);
      }
      local_88 = iVar18 - iVar7;
    }
    goto LAB_144b93efd;
  }
  if (param_2 == 0xdb) {
    iVar7 = FUN_144b90ae0();
    for (iVar7 = iVar7 + -2; 0 < iVar7; iVar7 = iVar7 - iVar18) {
      lVar21 = *param_1;
      pbVar11 = *(byte **)(lVar21 + 0xc0);
      if (pbVar11 < *(byte **)(lVar21 + 200)) {
        uVar15 = (ulonglong)*pbVar11;
        *(byte **)(lVar21 + 0xc0) = pbVar11 + 1;
      }
      else if (*(int *)(lVar21 + 0x30) == 0) {
        uVar15 = 0;
      }
      else {
        FUN_144b908c0(lVar21);
        uVar15 = (ulonglong)**(byte **)(lVar21 + 0xc0);
        *(byte **)(lVar21 + 0xc0) = *(byte **)(lVar21 + 0xc0) + 1;
      }
      uVar9 = (uint)uVar15 & 0xf;
      uVar15 = uVar15 >> 4;
      if (1 < (uint)uVar15) {
        *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xd8) = "bad DQT type";
        break;
      }
      if (3 < uVar9) {
        *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xd8) = "bad DQT table";
        break;
      }
      lVar21 = 0;
      do {
        if (uVar15 == 0) {
          lVar1 = *param_1;
          pbVar11 = *(byte **)(lVar1 + 0xc0);
          if (pbVar11 < *(byte **)(lVar1 + 200)) {
            bVar12 = *pbVar11;
            *(byte **)(lVar1 + 0xc0) = pbVar11 + 1;
          }
          else if (*(int *)(lVar1 + 0x30) == 0) {
            bVar12 = 0;
          }
          else {
            FUN_144b908c0(lVar1);
            bVar12 = **(byte **)(lVar1 + 0xc0);
            *(byte **)(lVar1 + 0xc0) = *(byte **)(lVar1 + 0xc0) + 1;
          }
          uVar6 = (ushort)bVar12;
        }
        else {
          uVar6 = FUN_144b90ae0(*param_1);
        }
        pbVar11 = &DAT_149977260 + lVar21;
        lVar21 = lVar21 + 1;
        *(ushort *)
         ((longlong)param_1 + ((ulonglong)*pbVar11 + (ulonglong)uVar9 * 0x40) * 2 + 0x3488) = uVar6;
      } while (lVar21 < 0x40);
      iVar18 = 0x41;
      if (uVar15 != 0) {
        iVar18 = 0x81;
      }
    }
    goto LAB_144b93efd;
  }
  if (param_2 == 0xdd) {
    iVar7 = FUN_144b90ae0(*param_1);
    if (iVar7 == 4) {
      uVar8 = FUN_144b90ae0(*param_1);
      *(undefined4 *)(param_1 + 0x90d) = uVar8;
    }
    else {
      *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xd8) = "bad DRI len";
    }
    goto LAB_144b93efd;
  }
  if (param_2 == 0xff) {
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd8
              ) = "expected marker";
    goto LAB_144b93efd;
  }
  if ((0xf < param_2 - 0xe0U) && (param_2 != 0xfe)) {
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd8
              ) = "unknown marker";
    goto LAB_144b93efd;
  }
  iVar7 = FUN_144b90ae0(*param_1);
  if (iVar7 < 2) {
    lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (param_2 == 0xfe) {
      *(char **)(lVar21 + 0xd8) = "bad COM len";
    }
    else {
      *(char **)(lVar21 + 0xd8) = "bad APP len";
    }
    goto LAB_144b93efd;
  }
  iVar18 = iVar7 + -2;
  if (param_2 == 0xe0) {
    if (4 < iVar18) {
      lVar21 = 0;
      bVar5 = true;
      do {
        lVar1 = *param_1;
        pcVar2 = *(char **)(lVar1 + 0xc0);
        if (pcVar2 < *(char **)(lVar1 + 200)) {
          cVar16 = *pcVar2;
          *(char **)(lVar1 + 0xc0) = pcVar2 + 1;
        }
        else if (*(int *)(lVar1 + 0x30) == 0) {
          cVar16 = '\0';
        }
        else {
          FUN_144b908c0(lVar1);
          cVar16 = **(char **)(lVar1 + 0xc0);
          *(char **)(lVar1 + 0xc0) = *(char **)(lVar1 + 0xc0) + 1;
        }
        pcVar2 = &DAT_149975d70 + lVar21;
        lVar21 = lVar21 + 1;
        bVar4 = false;
        if (cVar16 == *pcVar2) {
          bVar4 = bVar5;
        }
        bVar5 = bVar4;
      } while (lVar21 < 5);
      iVar18 = iVar7 + -7;
      if (bVar4) {
        *(undefined4 *)(param_1 + 0x909) = 1;
        FUN_144b90a80(*param_1,iVar18);
        goto LAB_144b93efd;
      }
    }
  }
  else if ((param_2 == 0xee) && (0xb < iVar18)) {
    lVar21 = 0;
    bVar5 = true;
    do {
      lVar1 = *param_1;
      pcVar2 = *(char **)(lVar1 + 0xc0);
      if (pcVar2 < *(char **)(lVar1 + 200)) {
        cVar16 = *pcVar2;
        *(char **)(lVar1 + 0xc0) = pcVar2 + 1;
      }
      else if (*(int *)(lVar1 + 0x30) == 0) {
        cVar16 = '\0';
      }
      else {
        FUN_144b908c0(lVar1);
        cVar16 = **(char **)(lVar1 + 0xc0);
        *(char **)(lVar1 + 0xc0) = *(char **)(lVar1 + 0xc0) + 1;
      }
      pcVar2 = &DAT_149975d78 + lVar21;
      lVar21 = lVar21 + 1;
      bVar4 = false;
      if (cVar16 == *pcVar2) {
        bVar4 = bVar5;
      }
      bVar5 = bVar4;
    } while (lVar21 < 6);
    iVar18 = iVar7 + -8;
    if (bVar4) {
      lVar21 = *param_1;
      if (*(ulonglong *)(lVar21 + 0xc0) < *(ulonglong *)(lVar21 + 200)) {
        *(ulonglong *)(lVar21 + 0xc0) = *(ulonglong *)(lVar21 + 0xc0) + 1;
      }
      else if (*(int *)(lVar21 + 0x30) != 0) {
        FUN_144b908c0(lVar21);
        *(longlong *)(lVar21 + 0xc0) = *(longlong *)(lVar21 + 0xc0) + 1;
      }
      FUN_144b90ae0(*param_1);
      FUN_144b90ae0();
      lVar21 = *param_1;
      pbVar11 = *(byte **)(lVar21 + 0xc0);
      if (pbVar11 < *(byte **)(lVar21 + 200)) {
LAB_144b93aab:
        bVar12 = *pbVar11;
        *(byte **)(lVar21 + 0xc0) = pbVar11 + 1;
      }
      else {
        if (*(int *)(lVar21 + 0x30) != 0) {
          FUN_144b908c0(lVar21);
          pbVar11 = *(byte **)(lVar21 + 0xc0);
          goto LAB_144b93aab;
        }
        bVar12 = 0;
      }
      iVar18 = iVar7 + -0xe;
      *(uint *)((longlong)param_1 + 0x484c) = (uint)bVar12;
    }
  }
  FUN_144b90a80(*param_1,iVar18);
LAB_144b93efd:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144b93f30 FUN_144b93f30 body=1024 status=ok
// SIG undefined FUN_144b93f30(void)

undefined8 FUN_144b93f30(longlong *param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  char *pcVar8;
  longlong lVar9;
  longlong *plVar10;
  
  iVar3 = FUN_144b90ae0();
  lVar9 = *param_1;
  pbVar2 = *(byte **)(lVar9 + 0xc0);
  if (pbVar2 < *(byte **)(lVar9 + 200)) {
    bVar5 = *pbVar2;
    *(byte **)(lVar9 + 0xc0) = pbVar2 + 1;
  }
  else if (*(int *)(lVar9 + 0x30) == 0) {
    bVar5 = 0;
  }
  else {
    FUN_144b908c0(lVar9);
    bVar5 = **(byte **)(lVar9 + 0xc0);
    *(byte **)(lVar9 + 0xc0) = *(byte **)(lVar9 + 0xc0) + 1;
  }
  *(uint *)((longlong)param_1 + 0x4854) = (uint)bVar5;
  if ((3 < bVar5 - 1) ||
     ((uint)bVar5 != *(uint *)(*param_1 + 8) && (int)*(uint *)(*param_1 + 8) <= (int)(uint)bVar5)) {
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd8
              ) = "bad SOS component count";
    return 0;
  }
  if (iVar3 != (uint)bVar5 * 2 + 6) {
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd8
              ) = "bad SOS len";
    return 0;
  }
  iVar3 = 0;
  if (bVar5 != 0) {
    plVar10 = param_1 + 0x90b;
    do {
      lVar9 = *param_1;
      pbVar2 = *(byte **)(lVar9 + 0xc0);
      if (pbVar2 < *(byte **)(lVar9 + 200)) {
        bVar5 = *pbVar2;
        *(byte **)(lVar9 + 0xc0) = pbVar2 + 1;
      }
      else if (*(int *)(lVar9 + 0x30) == 0) {
        bVar5 = 0;
      }
      else {
        FUN_144b908c0(lVar9);
        bVar5 = **(byte **)(lVar9 + 0xc0);
        *(byte **)(lVar9 + 0xc0) = *(byte **)(lVar9 + 0xc0) + 1;
      }
      lVar9 = *param_1;
      pbVar2 = *(byte **)(lVar9 + 0xc0);
      if (pbVar2 < *(byte **)(lVar9 + 200)) {
        bVar6 = *pbVar2;
        *(byte **)(lVar9 + 0xc0) = pbVar2 + 1;
      }
      else if (*(int *)(lVar9 + 0x30) == 0) {
        bVar6 = 0;
      }
      else {
        FUN_144b908c0(lVar9);
        bVar6 = **(byte **)(lVar9 + 0xc0);
        *(byte **)(lVar9 + 0xc0) = *(byte **)(lVar9 + 0xc0) + 1;
      }
      iVar7 = 0;
      lVar9 = 0;
      iVar1 = *(int *)(*param_1 + 8);
      if (0 < iVar1) {
        puVar4 = (uint *)(param_1 + 0x8d4);
        do {
          if (*puVar4 == (uint)bVar5) break;
          iVar7 = iVar7 + 1;
          lVar9 = lVar9 + 1;
          puVar4 = puVar4 + 0x18;
        } while (iVar7 < iVar1);
      }
      if (iVar7 == iVar1) {
        return 0;
      }
      bVar5 = bVar6 >> 4;
      *(uint *)(param_1 + lVar9 * 0xc + 0x8d6) = (uint)bVar5;
      if (bVar5 != 3 && 2 < bVar5) {
        lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        pcVar8 = "bad DC huff";
        goto LAB_144b94162;
      }
      *(uint *)(lVar9 * 0x60 + 0x46b4 + (longlong)param_1) = bVar6 & 0xf;
      if (3 < (bVar6 & 0xf)) {
        lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        pcVar8 = "bad AC huff";
        goto LAB_144b94162;
      }
      *(int *)plVar10 = iVar7;
      iVar3 = iVar3 + 1;
      plVar10 = (longlong *)((longlong)plVar10 + 4);
    } while (iVar3 < *(int *)((longlong)param_1 + 0x4854));
  }
  lVar9 = *param_1;
  pbVar2 = *(byte **)(lVar9 + 0xc0);
  if (pbVar2 < *(byte **)(lVar9 + 200)) {
    bVar5 = *pbVar2;
    *(byte **)(lVar9 + 0xc0) = pbVar2 + 1;
  }
  else if (*(int *)(lVar9 + 0x30) == 0) {
    bVar5 = 0;
  }
  else {
    FUN_144b908c0(lVar9);
    bVar5 = **(byte **)(lVar9 + 0xc0);
    *(byte **)(lVar9 + 0xc0) = *(byte **)(lVar9 + 0xc0) + 1;
  }
  lVar9 = *param_1;
  *(uint *)((longlong)param_1 + 0x4834) = (uint)bVar5;
  pbVar2 = *(byte **)(lVar9 + 0xc0);
  if (pbVar2 < *(byte **)(lVar9 + 200)) {
    bVar5 = *pbVar2;
    *(byte **)(lVar9 + 0xc0) = pbVar2 + 1;
  }
  else if (*(int *)(lVar9 + 0x30) == 0) {
    bVar5 = 0;
  }
  else {
    FUN_144b908c0(lVar9);
    bVar5 = **(byte **)(lVar9 + 0xc0);
    *(byte **)(lVar9 + 0xc0) = *(byte **)(lVar9 + 0xc0) + 1;
  }
  lVar9 = *param_1;
  *(uint *)(param_1 + 0x907) = (uint)bVar5;
  pbVar2 = *(byte **)(lVar9 + 0xc0);
  if (pbVar2 < *(byte **)(lVar9 + 200)) {
    bVar5 = *pbVar2;
    *(byte **)(lVar9 + 0xc0) = pbVar2 + 1;
  }
  else if (*(int *)(lVar9 + 0x30) == 0) {
    bVar5 = 0;
  }
  else {
    FUN_144b908c0(lVar9);
    bVar5 = **(byte **)(lVar9 + 0xc0);
    *(byte **)(lVar9 + 0xc0) = *(byte **)(lVar9 + 0xc0) + 1;
  }
  bVar6 = bVar5 >> 4;
  *(uint *)((longlong)param_1 + 0x483c) = (uint)bVar6;
  *(uint *)(param_1 + 0x908) = bVar5 & 0xf;
  if ((int)param_1[0x906] == 0) {
    if (((*(int *)((longlong)param_1 + 0x4834) == 0) && (bVar6 == 0)) && ((bVar5 & 0xf) == 0)) {
      *(undefined4 *)(param_1 + 0x907) = 0x3f;
      return 1;
    }
  }
  else if (((*(int *)((longlong)param_1 + 0x4834) < 0x40) && ((int)param_1[0x907] < 0x40)) &&
          ((*(int *)((longlong)param_1 + 0x4834) <= (int)param_1[0x907] &&
           ((bVar6 < 0xe && ((bVar5 & 0xf) < 0xe)))))) {
    return 1;
  }
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar8 = "bad SOS";
LAB_144b94162:
  *(char **)(lVar9 + 0xd8) = pcVar8;
  return 0;
}



// FUNCTION 144b94330 FUN_144b94330 body=135 status=ok
// SIG undefined FUN_144b94330(void)

undefined4 FUN_144b94330(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (0 < (int)param_2) {
    plVar1 = (longlong *)(param_1 + 0x46d8);
    uVar2 = (ulonglong)param_2;
    do {
      if (*plVar1 != 0) {
        (*(code *)PTR_free_14c6d9890)();
        *plVar1 = 0;
        plVar1[-1] = 0;
      }
      if (plVar1[1] != 0) {
        (*(code *)PTR_free_14c6d9890)();
        plVar1[1] = 0;
        plVar1[3] = 0;
      }
      if (plVar1[2] != 0) {
        (*(code *)PTR_free_14c6d9890)();
        plVar1[2] = 0;
      }
      plVar1 = plVar1 + 0xc;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return param_3;
}



// FUNCTION 144b943c0 FUN_144b943c0 body=1981 status=ok
// SIG undefined FUN_144b943c0(void)

undefined8 FUN_144b943c0(undefined8 *param_1,int param_2)

{
  char cVar1;
  uint *puVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int *piVar14;
  char *pcVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  byte *pbVar23;
  
  puVar2 = (uint *)*param_1;
  uVar18 = 1;
  uVar17 = 1;
  iVar5 = FUN_144b90ae0(puVar2);
  if (10 < iVar5) {
    pcVar15 = *(char **)(puVar2 + 0x30);
    if (*(char **)(puVar2 + 0x32) <= pcVar15) {
      if (puVar2[0xc] == 0) goto LAB_144b94b47;
      FUN_144b908c0(puVar2);
      pcVar15 = *(char **)(puVar2 + 0x30);
    }
    cVar1 = *pcVar15;
    *(char **)(puVar2 + 0x30) = pcVar15 + 1;
    if (cVar1 != '\b') {
LAB_144b94b47:
      *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xd8) = "only 8-bit";
      return 0;
    }
    uVar6 = FUN_144b90ae0(puVar2);
    puVar2[1] = uVar6;
    if (uVar6 == 0) {
      *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xd8) = "no header height";
      return 0;
    }
    uVar6 = FUN_144b90ae0();
    *puVar2 = uVar6;
    if (uVar6 == 0) {
      *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xd8) = "0 width";
      return 0;
    }
    if ((0x1000000 < puVar2[1]) || (0x1000000 < uVar6)) {
      *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xd8) = "too large";
      return 0;
    }
    pbVar23 = *(byte **)(puVar2 + 0x30);
    if (pbVar23 < *(byte **)(puVar2 + 0x32)) {
      bVar10 = *pbVar23;
      *(byte **)(puVar2 + 0x30) = pbVar23 + 1;
    }
    else if (puVar2[0xc] == 0) {
      bVar10 = 0;
    }
    else {
      FUN_144b908c0(puVar2);
      bVar10 = **(byte **)(puVar2 + 0x30);
      *(byte **)(puVar2 + 0x30) = *(byte **)(puVar2 + 0x30) + 1;
    }
    uVar12 = (ulonglong)bVar10;
    if (((bVar10 - 1 & 0xfffffffc) != 0) || (bVar10 == 2)) {
      *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xd8) = "bad component count";
      return 0;
    }
    iVar21 = 0;
    puVar2[2] = (uint)bVar10;
    if (uVar12 != 0) {
      puVar7 = param_1 + 0x8dd;
      do {
        puVar7[-3] = 0;
        *puVar7 = 0;
        puVar7 = puVar7 + 0xc;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    if (iVar5 == puVar2[2] * 3 + 8) {
      *(undefined4 *)(param_1 + 0x90a) = 0;
      if (0 < (int)puVar2[2]) {
        pbVar23 = &DAT_149975fb8;
        puVar13 = (uint *)((longlong)param_1 + 0x46a4);
        do {
          pbVar3 = *(byte **)(puVar2 + 0x30);
          if (pbVar3 < *(byte **)(puVar2 + 0x32)) {
            bVar10 = *pbVar3;
            *(byte **)(puVar2 + 0x30) = pbVar3 + 1;
          }
          else if (puVar2[0xc] == 0) {
            bVar10 = 0;
          }
          else {
            FUN_144b908c0(puVar2);
            bVar10 = **(byte **)(puVar2 + 0x30);
            *(byte **)(puVar2 + 0x30) = *(byte **)(puVar2 + 0x30) + 1;
          }
          puVar13[-1] = (uint)bVar10;
          if ((puVar2[2] == 3) && ((uint)bVar10 == (uint)*pbVar23)) {
            *(int *)(param_1 + 0x90a) = *(int *)(param_1 + 0x90a) + 1;
          }
          pbVar3 = *(byte **)(puVar2 + 0x30);
          if (pbVar3 < *(byte **)(puVar2 + 0x32)) {
            bVar10 = *pbVar3;
            *(byte **)(puVar2 + 0x30) = pbVar3 + 1;
          }
          else if (puVar2[0xc] == 0) {
            bVar10 = 0;
          }
          else {
            FUN_144b908c0(puVar2);
            bVar10 = **(byte **)(puVar2 + 0x30);
            *(byte **)(puVar2 + 0x30) = *(byte **)(puVar2 + 0x30) + 1;
          }
          bVar4 = bVar10 >> 4;
          *puVar13 = (uint)bVar4;
          if ((bVar4 == 0) || (bVar4 != 4 && 3 < bVar4)) goto LAB_144b94a27;
          puVar13[1] = bVar10 & 0xf;
          if (((bVar10 & 0xf) == 0) || (4 < (bVar10 & 0xf))) goto LAB_144b94a03;
          pbVar3 = *(byte **)(puVar2 + 0x30);
          if (pbVar3 < *(byte **)(puVar2 + 0x32)) {
            uVar6 = (uint)*pbVar3;
            *(byte **)(puVar2 + 0x30) = pbVar3 + 1;
          }
          else if (puVar2[0xc] == 0) {
            uVar6 = 0;
          }
          else {
            FUN_144b908c0(puVar2);
            uVar6 = (uint)**(byte **)(puVar2 + 0x30);
            *(byte **)(puVar2 + 0x30) = *(byte **)(puVar2 + 0x30) + 1;
          }
          puVar13[2] = uVar6;
          if (3 < uVar6) {
            lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            pcVar15 = "bad TQ";
            goto LAB_144b94761;
          }
          iVar21 = iVar21 + 1;
          pbVar23 = pbVar23 + 1;
          puVar13 = puVar13 + 0x18;
        } while (iVar21 < (int)puVar2[2]);
      }
      if (param_2 != 0) {
        return 1;
      }
      uVar6 = puVar2[2];
      uVar12 = (ulonglong)uVar6;
      iVar21 = 0;
      iVar5 = FUN_144b90940(*puVar2,puVar2[1],uVar6);
      if (iVar5 != 0) {
        if (0 < (int)uVar6) {
          puVar13 = (uint *)(param_1 + 0x8d5);
          do {
            if ((int)uVar18 < (int)puVar13[-1]) {
              uVar18 = (ulonglong)puVar13[-1];
            }
            if ((int)uVar17 < (int)*puVar13) {
              uVar17 = *puVar13;
            }
            puVar13 = puVar13 + 0x18;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        iVar22 = 0;
        iVar5 = (int)uVar18;
        if (0 < (int)uVar6) {
          piVar14 = (int *)(param_1 + 0x8d5);
          iVar19 = iVar22;
          do {
            if (iVar5 % piVar14[-1] != 0) goto LAB_144b94a27;
            if ((int)uVar17 % *piVar14 != 0) goto LAB_144b94a03;
            iVar19 = iVar19 + 1;
            piVar14 = piVar14 + 0x18;
          } while (iVar19 < (int)uVar6);
        }
        *(int *)(param_1 + 0x8d1) = iVar5;
        uVar11 = iVar5 * 8;
        *(uint *)((longlong)param_1 + 0x468c) = uVar17;
        uVar6 = uVar17 * 8;
        *(uint *)(param_1 + 0x8d3) = uVar11;
        *(uint *)((longlong)param_1 + 0x469c) = uVar6;
        *(uint *)(param_1 + 0x8d2) = ((*puVar2 - 1) + uVar11) / uVar11;
        *(uint *)((longlong)param_1 + 0x4694) = ((puVar2[1] - 1) + uVar6) / uVar6;
        if (iVar21 < (int)puVar2[2]) {
          piVar14 = (int *)((longlong)param_1 + 0x46a4);
          do {
            piVar14[6] = (int)((*puVar2 * *piVar14 + -1 + iVar5) / uVar18);
            piVar14[7] = (puVar2[1] * piVar14[1] + -1 + uVar17) / uVar17;
            iVar21 = *(int *)(param_1 + 0x8d2);
            iVar20 = iVar21 * *piVar14 * 8;
            piVar14[8] = iVar20;
            iVar19 = *(int *)((longlong)param_1 + 0x4694);
            piVar14[0x15] = (int)(iVar20 + (iVar20 >> 0x1f & 7U)) >> 3;
            iVar19 = piVar14[1] * iVar19 * 8;
            piVar14[9] = iVar19;
            piVar14[0x16] = (int)(iVar19 + (iVar19 >> 0x1f & 7U)) >> 3;
            if ((((iVar21 * *piVar14 * 8 < 0) || (iVar19 < 0)) ||
                ((iVar19 != 0 && ((int)(0x7fffffff / (longlong)iVar19) < iVar20)))) ||
               (((iVar20 = iVar20 * iVar19, iVar20 < 0 || (0x3fffffff < iVar20)) ||
                (0x7ffffff0 < iVar20 * 2)))) {
              piVar14[0xf] = 0;
              piVar14[0x10] = 0;
LAB_144b94a8a:
              *(char **)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd8)
                   = "outofmem";
              if ((int)(iVar22 + 1U) < 1) {
                return 0;
              }
              plVar16 = param_1 + 0x8db;
              uVar18 = (ulonglong)(iVar22 + 1U);
              do {
                if (*plVar16 != 0) {
                  (*(code *)PTR_free_14c6d9890)();
                  *plVar16 = 0;
                  plVar16[-1] = 0;
                }
                if (plVar16[1] != 0) {
                  (*(code *)PTR_free_14c6d9890)();
                  plVar16[1] = 0;
                  plVar16[3] = 0;
                }
                if (plVar16[2] != 0) {
                  (*(code *)PTR_free_14c6d9890)();
                  plVar16[2] = 0;
                }
                plVar16 = plVar16 + 0xc;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
              return 0;
            }
            lVar8 = (*(code *)PTR_malloc_14c6d9888)((longlong)(iVar20 * 2 + 0xf));
            *(longlong *)(piVar14 + 0xf) = lVar8;
            if (lVar8 == 0) goto LAB_144b94a8a;
            iVar21 = piVar14[8];
            iVar19 = piVar14[9];
            *(ulonglong *)(piVar14 + 0x13) = lVar8 + 0xfU & 0xfffffffffffffff0;
            piVar14[0x11] = 0;
            piVar14[0x12] = 0;
            if (((iVar21 < 0) || (iVar19 < 0)) ||
               (((iVar19 != 0 && ((int)(0x7fffffff / (longlong)iVar19) < iVar21)) ||
                (0x7ffffff0 < iVar21 * iVar19)))) {
              piVar14[0xd] = 0;
              piVar14[0xe] = 0;
LAB_144b94a4f:
              *(char **)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd8)
                   = "outofmem";
              uVar9 = FUN_144b94330(param_1,iVar22 + 1,0);
              return uVar9;
            }
            lVar8 = (*(code *)PTR_malloc_14c6d9888)((longlong)(iVar21 * iVar19 + 0xf));
            *(longlong *)(piVar14 + 0xd) = lVar8;
            if (lVar8 == 0) goto LAB_144b94a4f;
            iVar22 = iVar22 + 1;
            *(ulonglong *)(piVar14 + 0xb) = lVar8 + 0xfU & 0xfffffffffffffff0;
            piVar14 = piVar14 + 0x18;
          } while (iVar22 < (int)puVar2[2]);
        }
        return 1;
      }
      lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      pcVar15 = "too large";
      goto LAB_144b94761;
    }
  }
  *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd8)
       = "bad SOF len";
  return 0;
LAB_144b94a27:
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar15 = "bad H";
  goto LAB_144b94761;
LAB_144b94a03:
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar15 = "bad V";
LAB_144b94761:
  *(char **)(lVar8 + 0xd8) = pcVar15;
  return 0;
}



// FUNCTION 144b94b80 FUN_144b94b80 body=378 status=ok
// SIG undefined FUN_144b94b80(void)

bool FUN_144b94b80(longlong *param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  
  *(undefined4 *)((longlong)param_1 + 0x484c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x909) = 0;
  *(undefined1 *)(param_1 + 0x905) = 0xff;
  cVar2 = FUN_144b92d10();
  if (cVar2 != -0x28) {
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd8
              ) = "no SOI";
    return false;
  }
  if (param_2 == 1) {
    return true;
  }
  bVar3 = FUN_144b92d10(param_1);
  uVar5 = (uint)bVar3;
  if (bVar3 != 0xc0) {
    do {
      if (uVar5 - 0xc1 < 2) break;
      iVar4 = FUN_144b93800(param_1);
      if (iVar4 == 0) {
        return false;
      }
      bVar3 = FUN_144b92d10(param_1);
      while (bVar3 == 0xff) {
        lVar1 = *param_1;
        if (*(longlong *)(lVar1 + 0x10) == 0) {
LAB_144b94c69:
          if (*(ulonglong *)(lVar1 + 200) <= *(ulonglong *)(lVar1 + 0xc0)) {
LAB_144b94cd3:
            *(char **)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd8) =
                 "no SOF";
            return false;
          }
        }
        else {
          iVar4 = (**(code **)(lVar1 + 0x20))(*(undefined8 *)(lVar1 + 0x28));
          if (iVar4 != 0) {
            if (*(int *)(lVar1 + 0x30) == 0) goto LAB_144b94cd3;
            goto LAB_144b94c69;
          }
        }
        bVar3 = FUN_144b92d10(param_1);
      }
      uVar5 = (uint)bVar3;
    } while (uVar5 != 0xc0);
  }
  *(uint *)(param_1 + 0x906) = (uint)(uVar5 == 0xc2);
  iVar4 = FUN_144b943c0(param_1,param_2);
  return iVar4 != 0;
}



// FUNCTION 144b94d00 FUN_144b94d00 body=475 status=ok
// SIG undefined FUN_144b94d00(void)

char FUN_144b94d00(longlong *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  
LAB_144b94d20:
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0x10) == 0) {
LAB_144b94d3d:
    if (*(ulonglong *)(lVar2 + 200) <= *(ulonglong *)(lVar2 + 0xc0)) {
      return -1;
    }
  }
  else {
    iVar3 = (**(code **)(lVar2 + 0x20))(*(undefined8 *)(lVar2 + 0x28));
    if (iVar3 != 0) {
      if (*(int *)(lVar2 + 0x30) == 0) {
        return -1;
      }
      goto LAB_144b94d3d;
    }
  }
  lVar2 = *param_1;
  pcVar4 = *(char **)(lVar2 + 0xc0);
  if (*(char **)(lVar2 + 200) <= pcVar4) goto code_r0x000144b94d6b;
  goto LAB_144b94dc9;
code_r0x000144b94d6b:
  if (*(int *)(lVar2 + 0x30) != 0) {
    puVar1 = (undefined1 *)(lVar2 + 0x38);
    iVar3 = (**(code **)(lVar2 + 0x10))
                      (*(undefined8 *)(lVar2 + 0x28),puVar1,*(undefined4 *)(lVar2 + 0x34));
    *(int *)(lVar2 + 0xb8) =
         *(int *)(lVar2 + 0xb8) + (*(int *)(lVar2 + 0xc0) - *(int *)(lVar2 + 0xd0));
    *(undefined1 **)(lVar2 + 0xc0) = puVar1;
    if (iVar3 == 0) {
      *(undefined4 *)(lVar2 + 0x30) = 0;
      *(longlong *)(lVar2 + 200) = lVar2 + 0x39;
      *puVar1 = 0;
    }
    else {
      *(longlong *)(lVar2 + 200) = lVar2 + 0x38 + (longlong)iVar3;
    }
    pcVar4 = *(char **)(lVar2 + 0xc0);
LAB_144b94dc9:
    cVar5 = *pcVar4;
    *(char **)(lVar2 + 0xc0) = pcVar4 + 1;
    if (cVar5 == -1) {
      do {
        lVar2 = *param_1;
        if (*(longlong *)(lVar2 + 0x10) == 0) {
LAB_144b94dfd:
          if (*(ulonglong *)(lVar2 + 200) <= *(ulonglong *)(lVar2 + 0xc0)) {
            return -1;
          }
        }
        else {
          iVar3 = (**(code **)(lVar2 + 0x20))();
          if (iVar3 != 0) {
            if (*(int *)(lVar2 + 0x30) == 0) {
              return -1;
            }
            goto LAB_144b94dfd;
          }
        }
        lVar2 = *param_1;
        pcVar4 = *(char **)(lVar2 + 0xc0);
        if (pcVar4 < *(char **)(lVar2 + 200)) {
          cVar5 = *pcVar4;
          *(char **)(lVar2 + 0xc0) = pcVar4 + 1;
        }
        else if (*(int *)(lVar2 + 0x30) == 0) {
          cVar5 = '\0';
        }
        else {
          puVar1 = (undefined1 *)(lVar2 + 0x38);
          iVar3 = (**(code **)(lVar2 + 0x10))
                            (*(undefined8 *)(lVar2 + 0x28),puVar1,*(undefined4 *)(lVar2 + 0x34));
          *(int *)(lVar2 + 0xb8) =
               *(int *)(lVar2 + 0xb8) + (*(int *)(lVar2 + 0xc0) - *(int *)(lVar2 + 0xd0));
          *(undefined1 **)(lVar2 + 0xc0) = puVar1;
          if (iVar3 == 0) {
            *(undefined4 *)(lVar2 + 0x30) = 0;
            *(longlong *)(lVar2 + 200) = lVar2 + 0x39;
            *puVar1 = 0;
          }
          else {
            *(longlong *)(lVar2 + 200) = lVar2 + 0x38 + (longlong)iVar3;
          }
          cVar5 = **(char **)(lVar2 + 0xc0);
          *(char **)(lVar2 + 0xc0) = *(char **)(lVar2 + 0xc0) + 1;
        }
        if (cVar5 == '\0') break;
        if (cVar5 != -1) {
          return cVar5;
        }
      } while( true );
    }
  }
  goto LAB_144b94d20;
}



// FUNCTION 144b94ee0 FUN_144b94ee0 body=410 status=ok
// SIG undefined FUN_144b94ee0(void)

undefined8 FUN_144b94ee0(longlong *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  
  param_1[0x8db] = 0;
  param_1[0x8dc] = 0;
  param_1[0x8e7] = 0;
  param_1[0x8e8] = 0;
  param_1[0x8f3] = 0;
  param_1[0x8f4] = 0;
  param_1[0x8ff] = 0;
  param_1[0x900] = 0;
  *(undefined4 *)(param_1 + 0x90d) = 0;
  uVar5 = FUN_144b94b80(param_1,0);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  bVar1 = FUN_144b92d10(param_1);
  uVar6 = (uint)bVar1;
  if (bVar1 != 0xd9) {
    do {
      if (uVar6 == 0xda) {
        iVar3 = FUN_144b93f30(param_1);
        if ((iVar3 == 0) || (iVar3 = FUN_144b92de0(param_1), iVar3 == 0)) {
          return 0;
        }
        if ((char)param_1[0x905] == -1) {
          uVar2 = FUN_144b94d00(param_1);
          *(undefined1 *)(param_1 + 0x905) = uVar2;
        }
        bVar1 = FUN_144b92d10(param_1);
        uVar6 = (uint)bVar1;
        if (uVar6 - 0xd0 < 8) goto LAB_144b95012;
      }
      else {
        if (uVar6 == 0xdc) {
          iVar3 = FUN_144b90ae0(*param_1);
          iVar4 = FUN_144b90ae0(*param_1);
          if (iVar3 != 4) {
            *(char **)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd8) =
                 "bad DNL len";
            return 0;
          }
          if (iVar4 != *(int *)(*param_1 + 4)) {
            *(char **)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd8) =
                 "bad DNL height";
            return 0;
          }
        }
        else {
          iVar3 = FUN_144b93800(param_1,uVar6);
          if (iVar3 == 0) {
            return 1;
          }
        }
LAB_144b95012:
        bVar1 = FUN_144b92d10(param_1);
        uVar6 = (uint)bVar1;
      }
    } while (uVar6 != 0xd9);
  }
  if ((int)param_1[0x906] != 0) {
    FUN_144b93670(param_1);
  }
  return 1;
}



// FUNCTION 144b95080 FUN_144b95080 body=4 status=ok
// SIG undefined FUN_144b95080(void)

undefined8 FUN_144b95080(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



// FUNCTION 144b95090 FUN_144b95090 body=155 status=ok
// SIG undefined FUN_144b95090(void)

longlong FUN_144b95090(longlong param_1,byte *param_2,byte *param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)param_4;
  if (param_2 < param_3) {
    if (0 < param_4) {
      lVar5 = (longlong)param_2 - (longlong)param_3;
      lVar3 = param_1 - (longlong)param_3;
      do {
        pbVar2 = param_3 + lVar5;
        bVar1 = *param_3;
        param_3 = param_3 + 1;
        param_3[lVar3 + -1] = (byte)(bVar1 + 2 + (uint)*pbVar2 + (uint)*pbVar2 * 2 >> 2);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      return param_1;
    }
  }
  else if (0 < param_4) {
    pbVar2 = param_3;
    do {
      pbVar2[param_1 - (longlong)param_3] =
           (byte)(*pbVar2 + 1 +
                  (uint)pbVar2[(longlong)param_2 - (longlong)param_3] +
                  (uint)pbVar2[(longlong)param_2 - (longlong)param_3] * 2 >> 2);
      lVar4 = lVar4 + -1;
      pbVar2 = pbVar2 + 1;
    } while (lVar4 != 0);
  }
  return param_1;
}



// FUNCTION 144b95130 FUN_144b95130 body=243 status=ok
// SIG undefined FUN_144b95130(void)

byte * FUN_144b95130(byte *param_1,byte *param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  bVar1 = *param_2;
  *param_1 = bVar1;
  if (param_4 != 1) {
    iVar7 = 1;
    lVar6 = (longlong)(param_4 + -1);
    param_1[1] = (byte)(param_2[1] + 2 + (uint)*param_2 + (uint)*param_2 * 2 >> 2);
    if (1 < lVar6) {
      lVar5 = lVar6 + -1;
      iVar7 = (int)lVar5 + 1;
      pbVar4 = param_2;
      pbVar2 = param_1;
      do {
        iVar3 = (uint)pbVar4[1] + (uint)pbVar4[1] * 2;
        pbVar2[2] = (byte)(*pbVar4 + 1 + iVar3 >> 2);
        pbVar2[3] = (byte)(iVar3 + 2 + (uint)pbVar4[2] >> 2);
        lVar5 = lVar5 + -1;
        pbVar4 = pbVar4 + 1;
        pbVar2 = pbVar2 + 2;
      } while (lVar5 != 0);
    }
    param_1[iVar7 * 2] =
         (byte)((uint)param_2[lVar6] + (uint)param_2[lVar6] * 2 + param_2[param_4 + -2] + 1 >> 2);
    param_1[iVar7 * 2 + 1] = param_2[lVar6];
    return param_1;
  }
  param_1[1] = bVar1;
  return param_1;
}



// FUNCTION 144b95230 FUN_144b95230 body=212 status=ok
// SIG undefined FUN_144b95230(void)

undefined1 * FUN_144b95230(undefined1 *param_1,byte *param_2,byte *param_3,int param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong lVar7;
  
  bVar1 = *param_2;
  if (param_4 != 1) {
    iVar3 = (uint)bVar1 + (uint)bVar1 * 2 + (uint)*param_3;
    *param_1 = (char)(iVar3 + 2U >> 2);
    if (1 < (longlong)param_4) {
      lVar7 = (longlong)param_2 - (longlong)param_3;
      lVar5 = (longlong)param_4 + -1;
      iVar4 = iVar3;
      puVar2 = param_1;
      do {
        param_3 = param_3 + 1;
        iVar3 = (uint)param_3[lVar7] + (uint)param_3[lVar7] * 2 + (uint)*param_3;
        puVar2[1] = (char)((uint)(iVar4 * 2 + 7 + iVar3 + iVar4) >> 4);
        puVar2[2] = (char)((uint)(iVar4 + (iVar3 + 4) * 2 + iVar3) >> 4);
        lVar5 = lVar5 + -1;
        iVar4 = iVar3;
        puVar2 = puVar2 + 2;
      } while (lVar5 != 0);
    }
    param_1[param_4 * 2 + -1] = (char)(iVar3 + 1U >> 2);
    return param_1;
  }
  uVar6 = (undefined1)(*param_3 + 2 + (uint)bVar1 + (uint)bVar1 * 2 >> 2);
  param_1[1] = uVar6;
  *param_1 = uVar6;
  return param_1;
}



// FUNCTION 144b95310 FUN_144b95310 body=534 status=ok
// SIG undefined FUN_144b95310(void)

/* WARNING: Removing unreachable block (ram,0x000144b953f4) */

char * FUN_144b95310(char *param_1,byte *param_2,ulonglong *param_3,int param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
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
  unkuint9 Var19;
  undefined1 auVar20 [11];
  undefined1 auVar21 [13];
  undefined1 auVar22 [15];
  unkuint9 Var23;
  undefined1 auVar24 [11];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  uint uVar29;
  int iVar30;
  int iVar31;
  char cVar32;
  longlong lVar33;
  int iVar34;
  byte *pbVar35;
  ulonglong *puVar36;
  char *pcVar37;
  ulonglong uVar38;
  longlong lVar39;
  ulonglong *puVar40;
  ushort uVar41;
  ushort uVar44;
  ushort uVar45;
  ushort uVar46;
  ushort uVar47;
  ushort uVar48;
  ushort uVar49;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  ushort uVar50;
  undefined1 auVar51 [16];
  ushort uVar52;
  ushort uVar53;
  ushort uVar54;
  ushort uVar55;
  ushort uVar56;
  ushort uVar57;
  ushort uVar58;
  ushort uVar59;
  
  iVar34 = 0;
  iVar31 = (uint)*param_2 + (uint)*param_2 * 2;
  if (param_4 == 1) {
    cVar32 = (char)((byte)*param_3 + 2 + iVar31 >> 2);
    param_1[1] = cVar32;
    *param_1 = cVar32;
    return param_1;
  }
  iVar31 = iVar31 + (uint)(byte)*param_3;
  uVar29 = param_4 - 1U & 0xfffffff8;
  if (0 < (int)uVar29) {
    lVar33 = (longlong)param_2 - (longlong)param_3;
    uVar29 = (uVar29 - 1 >> 3) + 1;
    uVar38 = (ulonglong)uVar29;
    iVar34 = uVar29 * 8;
    puVar36 = param_3 + 1;
    puVar40 = param_3;
    pcVar37 = param_1;
    do {
      uVar2 = *(ulonglong *)(lVar33 + (longlong)puVar40);
      uVar3 = *puVar40;
      puVar40 = puVar40 + 1;
      auVar6._8_6_ = 0;
      auVar6._0_8_ = uVar2;
      auVar6[0xe] = (char)(uVar2 >> 0x38);
      auVar8._8_4_ = 0;
      auVar8._0_8_ = uVar2;
      auVar8[0xc] = (char)(uVar2 >> 0x30);
      auVar8._13_2_ = auVar6._13_2_;
      auVar10._8_4_ = 0;
      auVar10._0_8_ = uVar2;
      auVar10._12_3_ = auVar8._12_3_;
      auVar12._8_2_ = 0;
      auVar12._0_8_ = uVar2;
      auVar12[10] = (char)(uVar2 >> 0x28);
      auVar12._11_4_ = auVar10._11_4_;
      auVar14._8_2_ = 0;
      auVar14._0_8_ = uVar2;
      auVar14._10_5_ = auVar12._10_5_;
      auVar16[8] = (char)(uVar2 >> 0x20);
      auVar16._0_8_ = uVar2;
      auVar16._9_6_ = auVar14._9_6_;
      auVar18._7_8_ = 0;
      auVar18._0_7_ = auVar16._8_7_;
      Var19 = CONCAT81(SUB158(auVar18 << 0x40,7),(char)(uVar2 >> 0x18));
      auVar25._9_6_ = 0;
      auVar25._0_9_ = Var19;
      auVar20._1_10_ = SUB1510(auVar25 << 0x30,5);
      auVar20[0] = (char)(uVar2 >> 0x10);
      auVar26._11_4_ = 0;
      auVar26._0_11_ = auVar20;
      auVar21._1_12_ = SUB1512(auVar26 << 0x20,3);
      auVar21[0] = (char)(uVar2 >> 8);
      auVar43._0_2_ = CONCAT11(0,(byte)uVar2);
      auVar43._2_13_ = auVar21;
      auVar43[0xf] = 0;
      auVar5._8_6_ = 0;
      auVar5._0_8_ = uVar3;
      auVar5[0xe] = (char)(uVar3 >> 0x38);
      auVar7._8_4_ = 0;
      auVar7._0_8_ = uVar3;
      auVar7[0xc] = (char)(uVar3 >> 0x30);
      auVar7._13_2_ = auVar5._13_2_;
      auVar9._8_4_ = 0;
      auVar9._0_8_ = uVar3;
      auVar9._12_3_ = auVar7._12_3_;
      auVar11._8_2_ = 0;
      auVar11._0_8_ = uVar3;
      auVar11[10] = (char)(uVar3 >> 0x28);
      auVar11._11_4_ = auVar9._11_4_;
      auVar13._8_2_ = 0;
      auVar13._0_8_ = uVar3;
      auVar13._10_5_ = auVar11._10_5_;
      auVar15[8] = (char)(uVar3 >> 0x20);
      auVar15._0_8_ = uVar3;
      auVar15._9_6_ = auVar13._9_6_;
      auVar22._7_8_ = 0;
      auVar22._0_7_ = auVar15._8_7_;
      Var23 = CONCAT81(SUB158(auVar22 << 0x40,7),(char)(uVar3 >> 0x18));
      auVar27._9_6_ = 0;
      auVar27._0_9_ = Var23;
      auVar24._1_10_ = SUB1510(auVar27 << 0x30,5);
      auVar24[0] = (char)(uVar3 >> 0x10);
      auVar28._11_4_ = 0;
      auVar28._0_11_ = auVar24;
      auVar17[2] = (char)(uVar3 >> 8);
      auVar17._0_2_ = (ushort)uVar3;
      auVar17._3_12_ = SUB1512(auVar28 << 0x20,3);
      auVar42 = psllw(auVar43,2);
      auVar51._0_2_ = (((ushort)uVar3 & 0xff) - auVar43._0_2_) + auVar42._0_2_;
      auVar51._2_2_ = (auVar17._2_2_ - auVar21._0_2_) + auVar42._2_2_;
      auVar51._4_2_ = (auVar24._0_2_ - auVar20._0_2_) + auVar42._4_2_;
      auVar51._6_2_ = ((short)Var23 - (short)Var19) + auVar42._6_2_;
      auVar51._8_2_ = (auVar15._8_2_ - auVar16._8_2_) + auVar42._8_2_;
      auVar51._10_2_ = (auVar11._10_2_ - auVar12._10_2_) + auVar42._10_2_;
      auVar51._12_2_ = (auVar7._12_2_ - auVar8._12_2_) + auVar42._12_2_;
      auVar51._14_2_ = ((auVar5._13_2_ >> 8) - (auVar6._13_2_ >> 8)) + auVar42._14_2_;
      auVar43 = psllw(auVar51,2);
      uVar41 = (ushort)(((short)iVar31 - auVar51._0_2_) + auVar43._0_2_ + 8U) >> 4;
      uVar44 = (ushort)((auVar51._2_2_ - auVar51._0_2_) + auVar43._0_2_ + 7U) >> 4;
      uVar45 = (ushort)((auVar51._0_2_ - auVar51._2_2_) + auVar43._2_2_ + 8U) >> 4;
      uVar46 = (ushort)((auVar51._4_2_ - auVar51._2_2_) + auVar43._2_2_ + 7U) >> 4;
      uVar47 = (ushort)((auVar51._2_2_ - auVar51._4_2_) + auVar43._4_2_ + 8U) >> 4;
      uVar48 = (ushort)((auVar51._6_2_ - auVar51._4_2_) + auVar43._4_2_ + 7U) >> 4;
      uVar49 = (ushort)((auVar51._4_2_ - auVar51._6_2_) + auVar43._6_2_ + 8U) >> 4;
      uVar50 = (ushort)((auVar51._8_2_ - auVar51._6_2_) + auVar43._6_2_ + 7U) >> 4;
      uVar52 = (ushort)((auVar51._6_2_ - auVar51._8_2_) + auVar43._8_2_ + 8U) >> 4;
      uVar53 = (ushort)((auVar51._10_2_ - auVar51._8_2_) + auVar43._8_2_ + 7U) >> 4;
      uVar54 = (ushort)((auVar51._8_2_ - auVar51._10_2_) + auVar43._10_2_ + 8U) >> 4;
      uVar55 = (ushort)((auVar51._12_2_ - auVar51._10_2_) + auVar43._10_2_ + 7U) >> 4;
      uVar56 = (ushort)((auVar51._10_2_ - auVar51._12_2_) + auVar43._12_2_ + 8U) >> 4;
      uVar57 = (ushort)((auVar51._14_2_ - auVar51._12_2_) + auVar43._12_2_ + 7U) >> 4;
      uVar58 = (ushort)((auVar51._12_2_ - auVar51._14_2_) + auVar43._14_2_ + 8U) >> 4;
      uVar59 = (ushort)((((ushort)*(byte *)(lVar33 + (longlong)puVar36) +
                          (ushort)*(byte *)(lVar33 + (longlong)puVar36) * 2 + (ushort)(byte)*puVar36
                         ) - auVar51._14_2_) + auVar43._14_2_ + 7) >> 4;
      *pcVar37 = (uVar41 != 0) * (uVar41 < 0x100) * (char)uVar41 - (0xff < uVar41);
      pcVar37[1] = (uVar44 != 0) * (uVar44 < 0x100) * (char)uVar44 - (0xff < uVar44);
      pcVar37[2] = (uVar45 != 0) * (uVar45 < 0x100) * (char)uVar45 - (0xff < uVar45);
      pcVar37[3] = (uVar46 != 0) * (uVar46 < 0x100) * (char)uVar46 - (0xff < uVar46);
      pcVar37[4] = (uVar47 != 0) * (uVar47 < 0x100) * (char)uVar47 - (0xff < uVar47);
      pcVar37[5] = (uVar48 != 0) * (uVar48 < 0x100) * (char)uVar48 - (0xff < uVar48);
      pcVar37[6] = (uVar49 != 0) * (uVar49 < 0x100) * (char)uVar49 - (0xff < uVar49);
      pcVar37[7] = (uVar50 != 0) * (uVar50 < 0x100) * (char)uVar50 - (0xff < uVar50);
      pcVar37[8] = (uVar52 != 0) * (uVar52 < 0x100) * (char)uVar52 - (0xff < uVar52);
      pcVar37[9] = (uVar53 != 0) * (uVar53 < 0x100) * (char)uVar53 - (0xff < uVar53);
      pcVar37[10] = (uVar54 != 0) * (uVar54 < 0x100) * (char)uVar54 - (0xff < uVar54);
      pcVar37[0xb] = (uVar55 != 0) * (uVar55 < 0x100) * (char)uVar55 - (0xff < uVar55);
      pcVar37[0xc] = (uVar56 != 0) * (uVar56 < 0x100) * (char)uVar56 - (0xff < uVar56);
      pcVar37[0xd] = (uVar57 != 0) * (uVar57 < 0x100) * (char)uVar57 - (0xff < uVar57);
      pcVar37[0xe] = (uVar58 != 0) * (uVar58 < 0x100) * (char)uVar58 - (0xff < uVar58);
      pcVar37[0xf] = (uVar59 != 0) * (uVar59 < 0x100) * (char)uVar59 - (0xff < uVar59);
      bVar4 = *(byte *)(lVar33 + -9 + (longlong)(puVar36 + 1));
      iVar31 = (uint)bVar4 + (uint)bVar4 * 2 + (uint)*(byte *)((longlong)puVar36 + -1);
      uVar38 = uVar38 - 1;
      puVar36 = puVar36 + 1;
      pcVar37 = pcVar37 + 0x10;
    } while (uVar38 != 0);
  }
  iVar30 = (uint)param_2[iVar34] + (uint)param_2[iVar34] * 2 +
           (uint)*(byte *)((longlong)iVar34 + (longlong)param_3);
  param_1[iVar34 * 2] = (char)((uint)(iVar31 + 8 + iVar30 * 3) >> 4);
  lVar33 = (longlong)(iVar34 + 1);
  if (lVar33 < param_4) {
    pbVar35 = (byte *)(lVar33 + (longlong)param_3);
    lVar39 = param_4 - lVar33;
    pcVar37 = param_1 + lVar33 * 2;
    iVar34 = iVar30;
    do {
      bVar4 = *pbVar35;
      pbVar1 = pbVar35 + ((longlong)param_2 - (longlong)param_3);
      pbVar35 = pbVar35 + 1;
      iVar30 = (uint)*pbVar1 + (uint)*pbVar1 * 2 + (uint)bVar4;
      pcVar37[-1] = (char)((uint)(iVar34 * 2 + 7 + iVar30 + iVar34) >> 4);
      *pcVar37 = (char)((uint)(iVar34 + (iVar30 + 4) * 2 + iVar30) >> 4);
      lVar39 = lVar39 + -1;
      pcVar37 = pcVar37 + 2;
      iVar34 = iVar30;
    } while (lVar39 != 0);
  }
  param_1[param_4 * 2 + -1] = (char)(iVar30 + 1U >> 2);
  return param_1;
}



// FUNCTION 144b95570 FUN_144b95570 body=271 status=ok
// SIG undefined FUN_144b95570(void)

void FUN_144b95570(longlong param_1,longlong param_2,longlong param_3,byte *param_4,int param_5,
                  int param_6)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar2 = (longlong)param_5;
  if (0 < lVar2) {
    puVar1 = (undefined1 *)(param_1 + 2);
    param_2 = param_2 - (longlong)param_4;
    param_3 = param_3 - (longlong)param_4;
    uVar8 = 0;
    do {
      iVar3 = (uint)param_4[param_2] * 0x100000 + 0x80000;
      uVar6 = (int)((*param_4 - 0x80) * 0x166e90 + iVar3) >> 0x14;
      uVar4 = (int)((param_4[param_3] - 0x80) * -0x581a0 + (*param_4 - 0x80) * -0xb6d20 + iVar3) >>
              0x14;
      uVar5 = (int)((param_4[param_3] - 0x80) * 0x1c5a20 + iVar3) >> 0x14;
      uVar7 = uVar6;
      if ((0xff < uVar6) && (uVar7 = 0xff, (int)uVar6 < 0)) {
        uVar7 = uVar8;
      }
      uVar6 = uVar4;
      if ((0xff < uVar4) && (uVar6 = 0xff, (int)uVar4 < 0)) {
        uVar6 = uVar8;
      }
      uVar4 = uVar5;
      if ((0xff < uVar5) && (uVar4 = 0xff, (int)uVar5 < 0)) {
        uVar4 = uVar8;
      }
      puVar1[-2] = (char)uVar7;
      param_4 = param_4 + 1;
      puVar1[-1] = (char)uVar6;
      *puVar1 = (char)uVar4;
      puVar1[1] = 0xff;
      puVar1 = puVar1 + param_6;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144b95680 FUN_144b95680 body=675 status=ok
// SIG undefined FUN_144b95680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b95680(undefined1 (*param_1) [16],longlong param_2,longlong param_3,longlong param_4,
                  int param_5,int param_6)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  char cVar18;
  undefined1 auVar19 [14];
  undefined1 auVar20 [12];
  unkbyte10 Var21;
  undefined1 auVar22 [14];
  undefined1 auVar23 [12];
  unkbyte9 Var24;
  undefined1 auVar25 [14];
  undefined1 auVar26 [12];
  undefined1 auVar27 [14];
  undefined1 auVar28 [12];
  undefined6 uVar29;
  undefined4 uVar30;
  undefined2 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar36;
  longlong lVar37;
  byte *pbVar38;
  int iVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  undefined1 *puVar43;
  bool bVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  short sVar58;
  short sVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  short sVar71;
  short sVar72;
  undefined1 auVar59 [16];
  undefined1 auVar65 [16];
  short sVar73;
  undefined1 auVar66 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined2 uVar84;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  ushort uVar94;
  ushort uVar102;
  ushort uVar103;
  ushort uVar104;
  ushort uVar105;
  ushort uVar106;
  ushort uVar107;
  undefined1 auVar95 [16];
  ushort uVar108;
  undefined1 auVar109 [16];
  undefined1 auVar50 [16];
  undefined1 auVar55 [16];
  undefined1 auVar51 [16];
  undefined1 auVar56 [16];
  undefined1 auVar52 [16];
  undefined1 auVar57 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined4 uVar85;
  undefined6 uVar86;
  undefined8 uVar87;
  undefined1 auVar88 [12];
  undefined1 auVar89 [14];
  undefined1 auVar93 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  
  auVar35 = _DAT_149977620;
  auVar34 = _DAT_1499775e0;
  auVar33 = _DAT_1499775c0;
  iVar40 = 0;
  if ((param_6 == 4) && (7 < param_5)) {
    auVar47._0_12_ = DAT_149977600._0_12_;
    auVar47._12_2_ = DAT_149977600._6_2_;
    auVar47._14_2_ = 0x492e;
    auVar65._12_4_ = auVar47._12_4_;
    auVar65._0_10_ = (unkbyte10)DAT_149977600;
    auVar65._10_2_ = 0x492e;
    auVar90._10_6_ = auVar65._10_6_;
    auVar90._0_8_ = (undefined8)DAT_149977600;
    auVar90._8_2_ = DAT_149977600._4_2_;
    auVar82._8_8_ = auVar90._8_8_;
    auVar82._0_8_ = 0x492e000000000000;
    auVar109._6_10_ = auVar82._6_10_;
    auVar109._4_2_ = DAT_149977600._2_2_;
    auVar109._0_2_ = (undefined2)DAT_149977600;
    auVar109._2_2_ = 0x492e;
    iVar39 = iVar40;
    do {
      lVar37 = (longlong)iVar39;
      iVar40 = iVar39 + 8;
      uVar87 = *(undefined8 *)(lVar37 + param_2);
      auVar101._0_14_ = auVar34._0_14_;
      auVar101[0xe] = auVar34[7];
      auVar101[0xf] = (char)((ulonglong)uVar87 >> 0x38);
      auVar100._14_2_ = auVar101._14_2_;
      auVar100._0_13_ = auVar34._0_13_;
      auVar100[0xd] = (char)((ulonglong)uVar87 >> 0x30);
      auVar99._13_3_ = auVar100._13_3_;
      auVar99._0_12_ = auVar34._0_12_;
      auVar99[0xc] = auVar34[6];
      auVar98._12_4_ = auVar99._12_4_;
      auVar98._0_11_ = auVar34._0_11_;
      auVar98[0xb] = (char)((ulonglong)uVar87 >> 0x28);
      auVar97._11_5_ = auVar98._11_5_;
      auVar97._0_10_ = auVar34._0_10_;
      auVar97[10] = auVar34[5];
      auVar96._10_6_ = auVar97._10_6_;
      auVar96._0_9_ = auVar34._0_9_;
      auVar96[9] = (char)((ulonglong)uVar87 >> 0x20);
      auVar95._9_7_ = auVar96._9_7_;
      auVar95._0_8_ = auVar34._0_8_;
      auVar95[8] = auVar34[4];
      Var21 = CONCAT91(CONCAT81(auVar95._8_8_,(char)((ulonglong)uVar87 >> 0x18)),auVar34[3]);
      auVar20._2_10_ = Var21;
      auVar20[1] = (char)((ulonglong)uVar87 >> 0x10);
      auVar20[0] = auVar34[2];
      auVar19._2_12_ = auVar20;
      auVar19[1] = (char)((ulonglong)uVar87 >> 8);
      auVar19[0] = auVar34[1];
      auVar45._8_8_ = 0;
      auVar45._0_8_ = *(ulonglong *)(lVar37 + param_3);
      auVar45 = auVar45 ^ auVar34;
      uVar94 = CONCAT11((char)uVar87,auVar34[0]) >> 4;
      uVar102 = auVar19._0_2_ >> 4;
      uVar103 = auVar20._0_2_ >> 4;
      uVar104 = (ushort)Var21 >> 4;
      uVar105 = auVar95._8_2_ >> 4;
      uVar106 = auVar97._10_2_ >> 4;
      uVar107 = auVar99._12_2_ >> 4;
      uVar108 = auVar100._14_2_ >> 4;
      auVar81._0_14_ = ZEXT814(0);
      auVar81[0xe] = 0;
      auVar81[0xf] = auVar45[7];
      auVar80._14_2_ = auVar81._14_2_;
      auVar80._0_13_ = auVar81._0_13_;
      auVar80[0xd] = auVar45[6];
      auVar79._13_3_ = auVar80._13_3_;
      auVar79._0_12_ = auVar81._0_12_;
      auVar79[0xc] = 0;
      auVar78._12_4_ = auVar79._12_4_;
      auVar78._0_11_ = auVar81._0_11_;
      auVar78[0xb] = auVar45[5];
      auVar77._11_5_ = auVar78._11_5_;
      auVar77._0_10_ = auVar81._0_10_;
      auVar77[10] = 0;
      auVar76._10_6_ = auVar77._10_6_;
      auVar76._0_9_ = auVar81._0_9_;
      auVar76[9] = auVar45[4];
      auVar26._1_10_ = (unkuint10)CONCAT81((ulonglong)auVar76._9_7_ << 8,auVar45[3]) << 8;
      auVar26[0] = auVar45[2];
      auVar26[0xb] = 0;
      auVar25._1_12_ = auVar26 << 8;
      auVar25[0] = auVar45[1];
      auVar25[0xd] = 0;
      auVar92._1_14_ = auVar25 << 8;
      auVar92[0] = auVar45[0];
      auVar92[0xf] = 0;
      auVar46._8_8_ = 0;
      auVar46._0_8_ = *(ulonglong *)(lVar37 + param_4);
      iVar1 = iVar39 + 0xf;
      auVar46 = auVar46 ^ auVar34;
      auVar82 = psraw(auVar92 << 8,4);
      auVar64._0_14_ = ZEXT814(0);
      auVar64[0xe] = 0;
      auVar64[0xf] = auVar46[7];
      auVar63._14_2_ = auVar64._14_2_;
      auVar63._0_13_ = auVar64._0_13_;
      auVar63[0xd] = auVar46[6];
      auVar62._13_3_ = auVar63._13_3_;
      auVar62._0_12_ = auVar64._0_12_;
      auVar62[0xc] = 0;
      auVar61._12_4_ = auVar62._12_4_;
      auVar61._0_11_ = auVar64._0_11_;
      auVar61[0xb] = auVar46[5];
      auVar60._11_5_ = auVar61._11_5_;
      auVar60._0_10_ = auVar64._0_10_;
      auVar60[10] = 0;
      auVar59._10_6_ = auVar60._10_6_;
      auVar59._0_9_ = auVar64._0_9_;
      auVar59[9] = auVar46[4];
      auVar28._1_10_ = (unkuint10)CONCAT81((ulonglong)auVar59._9_7_ << 8,auVar46[3]) << 8;
      auVar28[0] = auVar46[2];
      auVar28[0xb] = 0;
      auVar27._1_12_ = auVar28 << 8;
      auVar27[0] = auVar46[1];
      auVar27[0xd] = 0;
      auVar32._1_14_ = auVar27 << 8;
      auVar32[0] = auVar46[0];
      auVar32[0xf] = 0;
      auVar47 = pmulhw(auVar82,auVar35);
      auVar65 = psraw(auVar32 << 8,4);
      auVar90 = pmulhw(auVar65,auVar33);
      auVar48._0_2_ = auVar47._0_2_ + uVar94 + auVar82._0_2_ * 2;
      auVar48._2_2_ = auVar47._2_2_ + uVar102 + auVar82._2_2_ * 2;
      auVar48._4_2_ = auVar47._4_2_ + uVar103 + auVar82._4_2_ * 2;
      auVar48._6_2_ = auVar47._6_2_ + uVar104 + auVar82._6_2_ * 2;
      auVar48._8_2_ = auVar47._8_2_ + uVar105 + auVar82._8_2_ * 2;
      auVar48._10_2_ = auVar47._10_2_ + uVar106 + auVar82._10_2_ * 2;
      auVar48._12_2_ = auVar47._12_2_ + uVar107 + auVar82._12_2_ * 2;
      auVar48._14_2_ = auVar47._14_2_ + uVar108 + auVar82._14_2_ * 2;
      auVar47 = psraw(auVar48,4);
      sVar58 = auVar65._0_2_;
      auVar91._0_2_ = auVar90._0_2_ + uVar94 + sVar58;
      sVar67 = auVar65._2_2_;
      auVar91._2_2_ = auVar90._2_2_ + uVar102 + sVar67;
      sVar68 = auVar65._4_2_;
      auVar91._4_2_ = auVar90._4_2_ + uVar103 + sVar68;
      sVar69 = auVar65._6_2_;
      auVar91._6_2_ = auVar90._6_2_ + uVar104 + sVar69;
      sVar70 = auVar65._8_2_;
      auVar91._8_2_ = auVar90._8_2_ + uVar105 + sVar70;
      sVar71 = auVar65._10_2_;
      auVar91._10_2_ = auVar90._10_2_ + uVar106 + sVar71;
      sVar72 = auVar65._12_2_;
      auVar91._12_2_ = auVar90._12_2_ + uVar107 + sVar72;
      sVar73 = auVar65._14_2_;
      auVar91._14_2_ = auVar90._14_2_ + uVar108 + sVar73;
      auVar92 = psraw(auVar91,4);
      sVar2 = auVar92._0_2_;
      sVar4 = auVar92._2_2_;
      sVar5 = auVar92._4_2_;
      sVar6 = auVar92._6_2_;
      sVar7 = auVar92._8_2_;
      sVar8 = auVar92._10_2_;
      sVar9 = auVar92._12_2_;
      sVar3 = auVar92._14_2_;
      cVar18 = (0 < sVar3) * (sVar3 < 0x100) * auVar92[0xe] - (0xff < sVar3);
      sVar10 = auVar47._0_2_;
      sVar11 = auVar47._2_2_;
      sVar12 = auVar47._4_2_;
      sVar13 = auVar47._6_2_;
      sVar14 = auVar47._8_2_;
      sVar15 = auVar47._10_2_;
      sVar16 = auVar47._12_2_;
      sVar17 = auVar47._14_2_;
      auVar52._0_12_ = auVar82._0_12_;
      auVar52._12_2_ = auVar82._6_2_;
      auVar52._14_2_ = sVar69;
      auVar51._12_4_ = auVar52._12_4_;
      auVar51._0_10_ = auVar82._0_10_;
      auVar51._10_2_ = sVar68;
      auVar50._10_6_ = auVar51._10_6_;
      auVar50._0_8_ = auVar82._0_8_;
      auVar50._8_2_ = auVar82._4_2_;
      auVar49._8_8_ = auVar50._8_8_;
      auVar49._6_2_ = sVar67;
      auVar49._4_2_ = auVar82._2_2_;
      auVar49._2_2_ = sVar58;
      auVar49._0_2_ = auVar82._0_2_;
      auVar90 = pmaddwd(auVar109,auVar49);
      auVar83._2_2_ = sVar70;
      auVar83._0_2_ = auVar82._8_2_;
      auVar83._4_2_ = auVar82._10_2_;
      auVar83._6_2_ = sVar71;
      auVar83._8_2_ = auVar82._12_2_;
      auVar83._10_2_ = sVar72;
      auVar83._12_2_ = auVar82._14_2_;
      auVar83._14_2_ = sVar73;
      auVar65 = pmaddwd(auVar109,auVar83);
      auVar74._0_4_ = auVar90._0_4_ >> 0x10;
      auVar74._4_4_ = auVar90._4_4_ >> 0x10;
      auVar74._8_4_ = auVar90._8_4_ >> 0x10;
      auVar74._12_4_ = auVar90._12_4_ >> 0x10;
      auVar53._0_4_ = auVar65._0_4_ >> 0x10;
      auVar53._4_4_ = auVar65._4_4_ >> 0x10;
      auVar53._8_4_ = auVar65._8_4_ >> 0x10;
      auVar53._12_4_ = auVar65._12_4_ >> 0x10;
      auVar65 = packssdw(auVar74,auVar53);
      auVar75._0_2_ = (auVar65._0_2_ - sVar58) + uVar94;
      auVar75._2_2_ = (auVar65._2_2_ - sVar67) + uVar102;
      auVar75._4_2_ = (auVar65._4_2_ - sVar68) + uVar103;
      auVar75._6_2_ = (auVar65._6_2_ - sVar69) + uVar104;
      auVar75._8_2_ = (auVar65._8_2_ - sVar70) + uVar105;
      auVar75._10_2_ = (auVar65._10_2_ - sVar71) + uVar106;
      auVar75._12_2_ = (auVar65._12_2_ - sVar72) + uVar107;
      auVar75._14_2_ = (auVar65._14_2_ - sVar73) + uVar108;
      auVar65 = psraw(auVar75,4);
      sVar3 = auVar65._0_2_;
      sVar58 = auVar65._2_2_;
      sVar67 = auVar65._4_2_;
      sVar68 = auVar65._6_2_;
      sVar69 = auVar65._8_2_;
      sVar70 = auVar65._10_2_;
      sVar71 = auVar65._12_2_;
      sVar72 = auVar65._14_2_;
      uVar31 = CONCAT11((0 < sVar72) * (sVar72 < 0x100) * auVar65[0xe] - (0xff < sVar72),cVar18);
      uVar30 = CONCAT31(CONCAT21(uVar31,(0 < sVar71) * (sVar71 < 0x100) * auVar65[0xc] -
                                        (0xff < sVar71)),
                        (0 < sVar9) * (sVar9 < 0x100) * auVar92[0xc] - (0xff < sVar9));
      uVar29 = CONCAT51(CONCAT41(uVar30,(0 < sVar70) * (sVar70 < 0x100) * auVar65[10] -
                                        (0xff < sVar70)),
                        (0 < sVar8) * (sVar8 < 0x100) * auVar92[10] - (0xff < sVar8));
      Var24 = CONCAT72(CONCAT61(uVar29,(0 < sVar69) * (sVar69 < 0x100) * auVar65[8] -
                                       (0xff < sVar69)),
                       CONCAT11((0 < sVar7) * (sVar7 < 0x100) * auVar92[8] - (0xff < sVar7),cVar18))
      ;
      Var21 = CONCAT91(CONCAT81((longlong)((unkuint9)Var24 >> 8),
                                (0 < sVar68) * (sVar68 < 0x100) * auVar65[6] - (0xff < sVar68)),
                       (0 < sVar6) * (sVar6 < 0x100) * auVar92[6] - (0xff < sVar6));
      auVar23._2_10_ = Var21;
      auVar23[1] = (0 < sVar67) * (sVar67 < 0x100) * auVar65[4] - (0xff < sVar67);
      auVar23[0] = (0 < sVar5) * (sVar5 < 0x100) * auVar92[4] - (0xff < sVar5);
      auVar22._2_12_ = auVar23;
      auVar22[1] = (0 < sVar58) * (sVar58 < 0x100) * auVar65[2] - (0xff < sVar58);
      auVar22[0] = (0 < sVar4) * (sVar4 < 0x100) * auVar92[2] - (0xff < sVar4);
      auVar66._0_2_ =
           CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar65[0] - (0xff < sVar3),
                    (0 < sVar2) * (sVar2 < 0x100) * auVar92[0] - (0xff < sVar2));
      auVar66._2_14_ = auVar22;
      uVar84 = CONCAT11(0xff,(0 < sVar10) * (sVar10 < 0x100) * auVar47[0] - (0xff < sVar10));
      uVar85 = CONCAT13(0xff,CONCAT12((0 < sVar11) * (sVar11 < 0x100) * auVar47[2] - (0xff < sVar11)
                                      ,uVar84));
      uVar86 = CONCAT15(0xff,CONCAT14((0 < sVar12) * (sVar12 < 0x100) * auVar47[4] - (0xff < sVar12)
                                      ,uVar85));
      uVar87 = CONCAT17(0xff,CONCAT16((0 < sVar13) * (sVar13 < 0x100) * auVar47[6] - (0xff < sVar13)
                                      ,uVar86));
      auVar88._0_10_ =
           CONCAT19(0xff,CONCAT18((0 < sVar14) * (sVar14 < 0x100) * auVar47[8] - (0xff < sVar14),
                                  uVar87));
      auVar88[10] = (0 < sVar15) * (sVar15 < 0x100) * auVar47[10] - (0xff < sVar15);
      auVar88[0xb] = 0xff;
      auVar89[0xc] = (0 < sVar16) * (sVar16 < 0x100) * auVar47[0xc] - (0xff < sVar16);
      auVar89._0_12_ = auVar88;
      auVar89[0xd] = 0xff;
      auVar93[0xe] = (0 < sVar17) * (sVar17 < 0x100) * auVar47[0xe] - (0xff < sVar17);
      auVar93._0_14_ = auVar89;
      auVar93[0xf] = 0xff;
      auVar57._0_12_ = auVar66._0_12_;
      auVar57._12_2_ = (short)Var21;
      auVar57._14_2_ = (short)((ulonglong)uVar87 >> 0x30);
      auVar56._12_4_ = auVar57._12_4_;
      auVar56._0_10_ = auVar66._0_10_;
      auVar56._10_2_ = (short)((uint6)uVar86 >> 0x20);
      auVar55._10_6_ = auVar56._10_6_;
      auVar55._0_8_ = auVar66._0_8_;
      auVar55._8_2_ = auVar23._0_2_;
      auVar54._8_8_ = auVar55._8_8_;
      auVar54._6_2_ = (short)((uint)uVar85 >> 0x10);
      auVar54._4_2_ = auVar22._0_2_;
      auVar54._2_2_ = uVar84;
      auVar54._0_2_ = auVar66._0_2_;
      *param_1 = auVar54;
      *(short *)param_1[1] = (short)((unkuint9)Var24 >> 8);
      *(short *)(param_1[1] + 2) = (short)((unkuint10)auVar88._0_10_ >> 0x40);
      *(short *)(param_1[1] + 4) = (short)uVar29;
      *(short *)(param_1[1] + 6) = auVar88._10_2_;
      *(short *)(param_1[1] + 8) = (short)uVar30;
      *(short *)(param_1[1] + 10) = auVar89._12_2_;
      *(undefined2 *)(param_1[1] + 0xc) = uVar31;
      *(short *)(param_1[1] + 0xe) = auVar93._14_2_;
      param_1 = param_1 + 2;
      iVar39 = iVar40;
    } while (iVar1 < param_5);
  }
  lVar37 = (longlong)iVar40;
  if (lVar37 < param_5) {
    puVar43 = *param_1 + 2;
    pbVar38 = (byte *)(lVar37 + param_4);
    lVar37 = param_5 - lVar37;
    do {
      iVar40 = (uint)pbVar38[param_2 - param_4] * 0x100000 + 0x80000;
      uVar42 = (int)((*pbVar38 - 0x80) * 0x166e90 + iVar40) >> 0x14;
      uVar36 = (int)((pbVar38[param_3 - param_4] - 0x80) * -0x581a0 + (*pbVar38 - 0x80) * -0xb6d20 +
                    iVar40) >> 0x14;
      uVar41 = (int)((pbVar38[param_3 - param_4] - 0x80) * 0x1c5a20 + iVar40) >> 0x14;
      if ((0xff < uVar42) && (bVar44 = (int)uVar42 < 0, uVar42 = 0xff, bVar44)) {
        uVar42 = 0;
      }
      if ((0xff < uVar36) && (bVar44 = (int)uVar36 < 0, uVar36 = 0xff, bVar44)) {
        uVar36 = 0;
      }
      if ((0xff < uVar41) && (bVar44 = (int)uVar41 < 0, uVar41 = 0xff, bVar44)) {
        uVar41 = 0;
      }
      puVar43[-2] = (char)uVar42;
      pbVar38 = pbVar38 + 1;
      puVar43[-1] = (char)uVar36;
      *puVar43 = (char)uVar41;
      puVar43[1] = 0xff;
      puVar43 = puVar43 + param_6;
      lVar37 = lVar37 + -1;
    } while (lVar37 != 0);
  }
  return;
}



// FUNCTION 144b95930 FUN_144b95930 body=114 status=ok
// SIG undefined FUN_144b95930(void)

/* WARNING: Removing unreachable block (ram,0x000144b9596a) */

code * FUN_144b95930(longlong param_1)

{
  uint *puVar1;
  code *pcVar2;
  
  *(code **)(param_1 + 0x4870) = FUN_144b92060;
  *(code **)(param_1 + 0x4878) = FUN_144b95570;
  *(code **)(param_1 + 0x4880) = FUN_144b95230;
  puVar1 = (uint *)cpuid_Version_info(1);
  pcVar2 = (code *)(ulonglong)*puVar1;
  if ((puVar1[2] >> 0x1a & 1) != 0) {
    *(code **)(param_1 + 0x4870) = FUN_144b924e0;
    *(code **)(param_1 + 0x4878) = FUN_144b95680;
    pcVar2 = FUN_144b95310;
    *(code **)(param_1 + 0x4880) = FUN_144b95310;
  }
  return pcVar2;
}



// FUNCTION 144b959b0 FUN_144b959b0 body=180 status=ok
// SIG undefined FUN_144b959b0(void)

void FUN_144b959b0(longlong param_1,undefined1 *param_2,undefined1 *param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  uint uVar33;
  int iVar34;
  undefined1 *puVar35;
  ulonglong uVar36;
  longlong lVar37;
  undefined2 *puVar38;
  longlong lVar39;
  undefined1 *puVar40;
  
  iVar34 = 0;
  if (0 < param_4 + -0xf) {
    uVar33 = (param_4 - 0x10U >> 4) + 1;
    uVar36 = (ulonglong)uVar33;
    iVar34 = uVar33 * 0x10;
    puVar35 = param_2;
    puVar40 = param_3;
    do {
      puVar1 = puVar35 + (param_1 - (longlong)param_2);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      uVar5 = puVar1[4];
      uVar6 = puVar1[5];
      uVar7 = puVar1[6];
      uVar8 = puVar1[7];
      uVar9 = puVar1[8];
      uVar10 = puVar1[9];
      uVar11 = puVar1[10];
      uVar12 = puVar1[0xb];
      uVar13 = puVar1[0xc];
      uVar14 = puVar1[0xd];
      uVar15 = puVar1[0xe];
      uVar16 = puVar1[0xf];
      uVar17 = *puVar35;
      uVar18 = puVar35[1];
      uVar19 = puVar35[2];
      uVar20 = puVar35[3];
      uVar21 = puVar35[4];
      uVar22 = puVar35[5];
      uVar23 = puVar35[6];
      uVar24 = puVar35[7];
      uVar25 = puVar35[8];
      uVar26 = puVar35[9];
      uVar27 = puVar35[10];
      uVar28 = puVar35[0xb];
      uVar29 = puVar35[0xc];
      uVar30 = puVar35[0xd];
      uVar31 = puVar35[0xe];
      uVar32 = puVar35[0xf];
      puVar35 = puVar35 + 0x10;
      *puVar40 = *puVar1;
      puVar40[1] = uVar17;
      puVar40[2] = uVar2;
      puVar40[3] = uVar18;
      puVar40[4] = uVar3;
      puVar40[5] = uVar19;
      puVar40[6] = uVar4;
      puVar40[7] = uVar20;
      puVar40[8] = uVar5;
      puVar40[9] = uVar21;
      puVar40[10] = uVar6;
      puVar40[0xb] = uVar22;
      puVar40[0xc] = uVar7;
      puVar40[0xd] = uVar23;
      puVar40[0xe] = uVar8;
      puVar40[0xf] = uVar24;
      puVar40[0x10] = uVar9;
      puVar40[0x11] = uVar25;
      puVar40[0x12] = uVar10;
      puVar40[0x13] = uVar26;
      puVar40[0x14] = uVar11;
      puVar40[0x15] = uVar27;
      puVar40[0x16] = uVar12;
      puVar40[0x17] = uVar28;
      puVar40[0x18] = uVar13;
      puVar40[0x19] = uVar29;
      puVar40[0x1a] = uVar14;
      puVar40[0x1b] = uVar30;
      puVar40[0x1c] = uVar15;
      puVar40[0x1d] = uVar31;
      puVar40[0x1e] = uVar16;
      puVar40[0x1f] = uVar32;
      uVar36 = uVar36 - 1;
      puVar40 = puVar40 + 0x20;
    } while (uVar36 != 0);
  }
  lVar37 = (longlong)iVar34;
  if (lVar37 < param_4) {
    puVar35 = (undefined1 *)(lVar37 + param_1);
    lVar39 = param_4 - lVar37;
    puVar38 = (undefined2 *)(param_3 + lVar37 * 2);
    do {
      puVar40 = puVar35 + ((longlong)param_2 - param_1);
      uVar2 = *puVar35;
      puVar35 = puVar35 + 1;
      *puVar38 = CONCAT11(*puVar40,uVar2);
      lVar39 = lVar39 + -1;
      puVar38 = puVar38 + 1;
    } while (lVar39 != 0);
  }
  return;
}



// FUNCTION 144b95a70 FUN_144b95a70 body=722 status=ok
// SIG undefined FUN_144b95a70(void)

undefined8 FUN_144b95a70(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  void *_Dst;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  int *piVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  
  memset(param_2,0,0x250);
  plVar4 = (longlong *)(*(code *)PTR_malloc_14c6d9888)(0x4888);
  *plVar4 = param_1;
  FUN_144b95930(plVar4);
  iVar3 = FUN_144b94ee0(plVar4);
  if (iVar3 == 0) {
    FUN_144b94330(plVar4,*(undefined4 *)(*plVar4 + 8),0);
    return 0;
  }
  uVar10 = 0;
  *param_2 = *(undefined4 *)*plVar4;
  param_2[1] = *(undefined4 *)(*plVar4 + 4);
  if (0 < *(int *)(*plVar4 + 8)) {
    plVar9 = (longlong *)(param_2 + 2);
    piVar12 = param_2 + 0x8e;
    plVar8 = plVar4 + 0x8df;
    puVar13 = (undefined8 *)(param_2 + 0x82);
    uVar15 = uVar10;
    do {
      _Dst = (void *)(*(code *)PTR_malloc_14c6d9888)
                               ((longlong)(*(int *)((longlong)plVar8 + 4) * (int)*plVar8 * 0x40) * 2
                               );
      *puVar13 = _Dst;
      memcpy(_Dst,(void *)plVar8[-1],
             (longlong)(*(int *)((longlong)plVar8 + 4) * (int)*plVar8 * 0x40) * 2);
      piVar12[-4] = (int)*plVar8;
      *piVar12 = *(int *)((longlong)plVar8 + 4);
      lVar5 = (longlong)*(int *)((longlong)plVar8 + -0x4c);
      lVar7 = 0;
      lVar11 = (plVar4 + lVar5 * 0x10 + 0x691)[1];
      *plVar9 = plVar4[lVar5 * 0x10 + 0x691];
      plVar9[1] = lVar11;
      lVar11 = (plVar4 + lVar5 * 0x10 + 0x693)[1];
      plVar9[2] = plVar4[lVar5 * 0x10 + 0x693];
      plVar9[3] = lVar11;
      lVar11 = (plVar4 + lVar5 * 0x10 + 0x695)[1];
      plVar9[4] = plVar4[lVar5 * 0x10 + 0x695];
      plVar9[5] = lVar11;
      lVar11 = (plVar4 + lVar5 * 0x10 + 0x697)[1];
      plVar9[6] = plVar4[lVar5 * 0x10 + 0x697];
      plVar9[7] = lVar11;
      lVar11 = (plVar4 + lVar5 * 0x10 + 0x699)[1];
      plVar9[8] = plVar4[lVar5 * 0x10 + 0x699];
      plVar9[9] = lVar11;
      lVar11 = (plVar4 + lVar5 * 0x10 + 0x69b)[1];
      plVar9[10] = plVar4[lVar5 * 0x10 + 0x69b];
      plVar9[0xb] = lVar11;
      plVar6 = plVar4 + lVar5 * 0x10 + 0x69d;
      uVar1 = *(undefined4 *)((longlong)plVar6 + 4);
      lVar11 = plVar6[1];
      uVar2 = *(undefined4 *)((longlong)plVar6 + 0xc);
      *(int *)(plVar9 + 0xc) = (int)*plVar6;
      *(undefined4 *)((longlong)plVar9 + 100) = uVar1;
      *(int *)(plVar9 + 0xd) = (int)lVar11;
      *(undefined4 *)((longlong)plVar9 + 0x6c) = uVar2;
      lVar11 = (plVar4 + lVar5 * 0x10 + 0x69f)[1];
      plVar9[0xe] = plVar4[lVar5 * 0x10 + 0x69f];
      plVar9[0xf] = lVar11;
      plVar6 = plVar9;
      do {
        if ((short)*plVar6 == 0) {
          lVar11 = (longlong)*(int *)(*plVar4 + 8);
          if (0 < lVar11) {
            plVar9 = plVar4 + 0x8db;
            do {
              if (*plVar9 != 0) {
                (*(code *)PTR_free_14c6d9890)();
                *plVar9 = 0;
                plVar9[-1] = 0;
              }
              if (plVar9[1] != 0) {
                (*(code *)PTR_free_14c6d9890)();
                plVar9[1] = 0;
                plVar9[3] = 0;
              }
              if (plVar9[2] != 0) {
                (*(code *)PTR_free_14c6d9890)();
                plVar9[2] = 0;
              }
              plVar9 = plVar9 + 0xc;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
          (*(code *)PTR_free_14c6d9890)(plVar4);
          return 0;
        }
        lVar7 = lVar7 + 1;
        plVar6 = (longlong *)((longlong)plVar6 + 2);
      } while (lVar7 < 0x40);
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
      *(char *)((longlong)param_2 + uVar10 + 0x24a) = (char)plVar8[-0xb];
      puVar13 = puVar13 + 1;
      uVar10 = uVar10 + 1;
      piVar12 = piVar12 + 1;
      plVar9 = plVar9 + 0x10;
      plVar8 = plVar8 + 0xc;
    } while ((int)uVar14 < *(int *)(*plVar4 + 8));
  }
  *(undefined1 *)(param_2 + 0x92) = *(undefined1 *)((longlong)plVar4 + 0x484c);
  *(char *)((longlong)param_2 + 0x249) = (char)plVar4[0x909];
  lVar11 = (longlong)*(int *)(*plVar4 + 8);
  if (0 < lVar11) {
    plVar9 = plVar4 + 0x8db;
    do {
      if (*plVar9 != 0) {
        (*(code *)PTR_free_14c6d9890)();
        *plVar9 = 0;
        plVar9[-1] = 0;
      }
      if (plVar9[1] != 0) {
        (*(code *)PTR_free_14c6d9890)();
        plVar9[1] = 0;
        plVar9[3] = 0;
      }
      if (plVar9[2] != 0) {
        (*(code *)PTR_free_14c6d9890)();
        plVar9[2] = 0;
      }
      plVar9 = plVar9 + 0xc;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  (*(code *)PTR_free_14c6d9890)(plVar4);
  return 1;
}



// FUNCTION 144b95d50 FUN_144b95d50 body=565 status=ok
// SIG undefined FUN_144b95d50(void)

undefined4 * FUN_144b95d50(undefined4 *param_1,int param_2,ushort *param_3)

{
  longlong lVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  ushort *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  
  *param_1 = 0;
  memset(param_1 + 1,0,0x6ac);
  uVar3 = param_3[3];
  uVar12 = 0x7fffffff;
  if (param_3[1] - 1 < 0x7ffffffe) {
    uVar12 = (uint)param_3[1];
  }
  if ((uVar3 != 0) && (uVar3 < uVar12)) {
    uVar12 = (uint)uVar3;
  }
  uVar3 = param_3[5];
  if ((uVar3 != 0) && (uVar3 < uVar12)) {
    uVar12 = (uint)uVar3;
  }
  uVar3 = param_3[7];
  if ((uVar3 != 0) && (uVar3 < uVar12)) {
    uVar12 = (uint)uVar3;
  }
  param_1[10] = 0;
  iVar9 = 0;
  iVar10 = (int)(param_2 + -1 + uVar12) / param_2;
  iVar4 = (param_3[1] / uVar12) * iVar10;
  param_1[2] = iVar4;
  iVar4 = (uint)*param_3 * iVar4;
  param_1[6] = iVar4;
  param_1[10] = param_1[10] + iVar4;
  iVar4 = (param_3[3] / uVar12) * iVar10;
  param_1[3] = iVar4;
  iVar4 = (uint)param_3[2] * iVar4;
  param_1[7] = iVar4;
  param_1[10] = param_1[10] + iVar4;
  iVar4 = (param_3[5] / uVar12) * iVar10;
  param_1[4] = iVar4;
  iVar4 = (uint)param_3[4] * iVar4;
  param_1[8] = iVar4;
  param_1[10] = param_1[10] + iVar4;
  uVar7 = (ulonglong)param_3[7] % (ulonglong)uVar12;
  iVar10 = (param_3[7] / uVar12) * iVar10;
  param_1[5] = iVar10;
  iVar10 = (uint)param_3[6] * iVar10;
  param_1[9] = iVar10;
  param_1[10] = param_1[10] + iVar10;
  if (0 < param_2) {
    lVar1 = (longlong)param_1 + (6 - (longlong)param_3);
    lVar8 = (longlong)param_1 + (0x2e - (longlong)param_3);
    do {
      uVar5 = (*(code *)PTR_malloc_14c6d9888)((longlong)(int)(param_1[10] << 6) * 2,uVar7);
      *(undefined8 *)((longlong)param_3 + lVar8 + 0x4a) = uVar5;
      uVar5 = (*(code *)PTR_malloc_14c6d9888)((longlong)(int)(param_1[10] << 6) * 2);
      *(undefined8 *)((longlong)param_3 + lVar8 + 0x52) = uVar5;
      if (*(longlong *)((longlong)param_3 + lVar8 + 0x4a) == 0) {
        *param_1 = 6;
      }
      if (*(longlong *)((longlong)param_3 + lVar8 + 0x52) == 0) {
        *param_1 = 6;
      }
      *(undefined4 *)(lVar8 + 0x42 + (longlong)param_3) = 0;
      puVar6 = param_3 + 1;
      lVar11 = 4;
      do {
        iVar10 = *(int *)(lVar1 + (longlong)puVar6) * iVar9;
        *(int *)((longlong)puVar6 + lVar8) = iVar10;
        iVar4 = *(int *)(lVar1 + (longlong)puVar6) + iVar10;
        *(int *)((longlong)puVar6 + lVar8 + 0x10) = iVar4;
        if ((int)(uint)*puVar6 < iVar10) {
          *(uint *)((longlong)puVar6 + lVar8) = (uint)*puVar6;
        }
        if ((int)(uint)*puVar6 < iVar4) {
          *(uint *)((longlong)puVar6 + lVar8 + 0x10) = (uint)*puVar6;
        }
        uVar3 = puVar6[-1];
        uVar7 = (ulonglong)uVar3;
        iVar4 = *(int *)((longlong)puVar6 + lVar8 + 0x10) - *(int *)((longlong)puVar6 + lVar8);
        *(int *)((longlong)puVar6 + lVar8 + 0x30) = iVar4;
        *(uint *)((longlong)puVar6 + lVar8 + 0x20) = (uint)uVar3;
        puVar6 = puVar6 + 2;
        piVar2 = (int *)(lVar8 + 0x42 + (longlong)param_3);
        *piVar2 = *piVar2 + iVar4 * (uint)uVar3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      iVar9 = iVar9 + 1;
      *(int *)(lVar8 + 0x66 + (longlong)param_3) = *(int *)(lVar8 + 0x42 + (longlong)param_3) << 6;
      lVar8 = lVar8 + 0x68;
    } while (iVar9 < param_2);
  }
  return param_1;
}



// FUNCTION 144b95f90 FUN_144b95f90 body=1261 status=ok
// SIG undefined FUN_144b95f90(void)

undefined4 *
FUN_144b95f90(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             int param_5)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  short *psVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  short *psVar17;
  short *psVar18;
  ulonglong uVar19;
  int *piVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  short *local_res18;
  longlong local_res20;
  longlong local_720;
  longlong local_710;
  undefined1 local_6f8 [1720];
  
  *param_1 = 0;
  memset(param_1 + 1,0,0x8f4);
  *(undefined8 *)(param_1 + 2) = param_2;
  plVar1 = (longlong *)(param_4 + 0x82);
  param_1[6] = param_5;
  *(undefined8 *)(param_1 + 4) = param_3;
  param_1[7] = *param_4;
  param_1[8] = param_4[1];
  if (*plVar1 != 0) {
    *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(param_4 + 0x8a);
    *(undefined2 *)((longlong)param_1 + 0x2e) = *(undefined2 *)(param_4 + 0x8e);
    *(undefined1 *)((longlong)param_1 + 0x23e) = *(undefined1 *)((longlong)param_4 + 0x24a);
  }
  if (*(longlong *)(param_4 + 0x84) != 0) {
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_4 + 0x8b);
    *(undefined2 *)((longlong)param_1 + 0x32) = *(undefined2 *)(param_4 + 0x8f);
    *(undefined1 *)((longlong)param_1 + 0x23f) = *(undefined1 *)((longlong)param_4 + 0x24b);
  }
  if (*(longlong *)(param_4 + 0x86) != 0) {
    *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_4 + 0x8c);
    *(undefined2 *)((longlong)param_1 + 0x36) = *(undefined2 *)(param_4 + 0x90);
    *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_4 + 0x93);
  }
  if (*(longlong *)(param_4 + 0x88) != 0) {
    *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_4 + 0x8d);
    *(undefined2 *)((longlong)param_1 + 0x3a) = *(undefined2 *)(param_4 + 0x91);
    *(undefined1 *)((longlong)param_1 + 0x241) = *(undefined1 *)((longlong)param_4 + 0x24d);
  }
  *(undefined1 *)(param_1 + 0x8f) = *(undefined1 *)(param_4 + 0x92);
  lVar14 = 4;
  *(undefined1 *)((longlong)param_1 + 0x23d) = *(undefined1 *)((longlong)param_4 + 0x249);
  puVar9 = (undefined8 *)(param_1 + 0xf);
  puVar11 = (undefined8 *)(param_4 + 2);
  do {
    uVar7 = puVar11[1];
    *puVar9 = *puVar11;
    puVar9[1] = uVar7;
    uVar7 = puVar11[3];
    puVar9[2] = puVar11[2];
    puVar9[3] = uVar7;
    uVar7 = puVar11[5];
    puVar9[4] = puVar11[4];
    puVar9[5] = uVar7;
    uVar7 = puVar11[7];
    puVar9[6] = puVar11[6];
    puVar9[7] = uVar7;
    uVar7 = puVar11[9];
    puVar9[8] = puVar11[8];
    puVar9[9] = uVar7;
    uVar7 = puVar11[0xb];
    puVar9[10] = puVar11[10];
    puVar9[0xb] = uVar7;
    uVar4 = *(undefined4 *)((longlong)puVar11 + 100);
    uVar5 = *(undefined4 *)(puVar11 + 0xd);
    uVar6 = *(undefined4 *)((longlong)puVar11 + 0x6c);
    *(undefined4 *)(puVar9 + 0xc) = *(undefined4 *)(puVar11 + 0xc);
    *(undefined4 *)((longlong)puVar9 + 100) = uVar4;
    *(undefined4 *)(puVar9 + 0xd) = uVar5;
    *(undefined4 *)((longlong)puVar9 + 0x6c) = uVar6;
    uVar4 = *(undefined4 *)((longlong)puVar11 + 0x74);
    uVar5 = *(undefined4 *)(puVar11 + 0xf);
    uVar6 = *(undefined4 *)((longlong)puVar11 + 0x7c);
    *(undefined4 *)(puVar9 + 0xe) = *(undefined4 *)(puVar11 + 0xe);
    *(undefined4 *)((longlong)puVar9 + 0x74) = uVar4;
    *(undefined4 *)(puVar9 + 0xf) = uVar5;
    *(undefined4 *)((longlong)puVar9 + 0x7c) = uVar6;
    lVar14 = lVar14 + -1;
    puVar9 = puVar9 + 0x10;
    puVar11 = puVar11 + 0x10;
  } while (lVar14 != 0);
  param_1[9] = 0;
  if (*plVar1 != 0) {
    param_1[9] = 1;
    *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(param_4 + 0x8a);
    *(undefined2 *)((longlong)param_1 + 0x2e) = *(undefined2 *)(param_4 + 0x8e);
  }
  if (*(longlong *)(param_4 + 0x84) != 0) {
    param_1[9] = param_1[9] + 1;
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_4 + 0x8b);
    *(undefined2 *)((longlong)param_1 + 0x32) = *(undefined2 *)(param_4 + 0x8f);
  }
  if (*(longlong *)(param_4 + 0x86) != 0) {
    param_1[9] = param_1[9] + 1;
    *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_4 + 0x8c);
    *(undefined2 *)((longlong)param_1 + 0x36) = *(undefined2 *)(param_4 + 0x90);
  }
  if (*(longlong *)(param_4 + 0x88) != 0) {
    param_1[9] = param_1[9] + 1;
    *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_4 + 0x8d);
    *(undefined2 *)((longlong)param_1 + 0x3a) = *(undefined2 *)(param_4 + 0x91);
  }
  iVar8 = (int)(param_1[8] + 0xff + (param_1[8] + 0xff >> 0x1f & 0xffU)) >> 8;
  if (0x10 < iVar8) {
    iVar8 = 0x10;
  }
  param_1[10] = iVar8;
  param_1[1] = iVar8;
  puVar9 = (undefined8 *)FUN_144b95d50(local_6f8,iVar8,param_1 + 0xb);
  lVar14 = 0xd;
  puVar11 = (undefined8 *)(param_1 + 0x92);
  do {
    puVar12 = puVar11;
    puVar10 = puVar9;
    uVar7 = puVar10[1];
    *puVar12 = *puVar10;
    puVar12[1] = uVar7;
    uVar7 = puVar10[3];
    puVar12[2] = puVar10[2];
    puVar12[3] = uVar7;
    uVar7 = puVar10[5];
    puVar12[4] = puVar10[4];
    puVar12[5] = uVar7;
    uVar7 = puVar10[7];
    puVar12[6] = puVar10[6];
    puVar12[7] = uVar7;
    uVar7 = puVar10[9];
    puVar12[8] = puVar10[8];
    puVar12[9] = uVar7;
    uVar7 = puVar10[0xb];
    puVar12[10] = puVar10[10];
    puVar12[0xb] = uVar7;
    uVar7 = puVar10[0xd];
    puVar12[0xc] = puVar10[0xc];
    puVar12[0xd] = uVar7;
    uVar7 = puVar10[0xf];
    puVar12[0xe] = puVar10[0xe];
    puVar12[0xf] = uVar7;
    lVar14 = lVar14 + -1;
    puVar9 = puVar10 + 0x10;
    puVar11 = puVar12 + 0x10;
  } while (lVar14 != 0);
  uVar7 = puVar10[0x11];
  param_5 = 0;
  puVar12[0x10] = puVar10[0x10];
  puVar12[0x11] = uVar7;
  uVar7 = puVar10[0x13];
  puVar12[0x12] = puVar10[0x12];
  puVar12[0x13] = uVar7;
  uVar7 = puVar10[0x15];
  puVar12[0x14] = puVar10[0x14];
  puVar12[0x15] = uVar7;
  if (0 < (int)param_1[10]) {
    plVar15 = (longlong *)(param_1 + 0xb0);
    local_710 = 0xaa;
    do {
      psVar18 = (short *)*plVar15;
      local_res20 = 0;
      lVar14 = 0x1e;
      local_720 = 4;
      plVar16 = plVar1;
      local_res18 = psVar18;
      do {
        if (*plVar16 != 0) {
          uVar2 = param_1[local_710 + local_res20 + -4];
          uVar3 = param_1[local_710 + local_res20];
          lVar22 = *plVar16 +
                   (longlong)(int)(param_1[local_710 + local_res20 + -0xc] * uVar2 * 0x40) * 2;
          psVar17 = psVar18;
          if (0 < (int)uVar3) {
            uVar23 = (ulonglong)uVar3;
            uVar19 = (longlong)(int)uVar2;
            do {
              if (0 < (int)uVar19) {
                uVar19 = uVar19 & 0xffffffff;
                psVar17 = psVar18;
                do {
                  piVar20 = &DAT_149975c70;
                  lVar21 = 0x40;
                  psVar13 = psVar17;
                  do {
                    iVar8 = *piVar20;
                    piVar20 = piVar20 + 1;
                    *psVar13 = (short)((int)*(short *)(lVar22 + (longlong)iVar8 * 2) /
                                      (int)(uint)*(ushort *)
                                                  ((longlong)param_1 + (lVar14 + iVar8) * 2)) + 0x80
                    ;
                    psVar13 = psVar13 + (int)(uVar3 * uVar2);
                    lVar21 = lVar21 + -1;
                  } while (lVar21 != 0);
                  lVar22 = lVar22 + 0x80;
                  psVar17 = psVar17 + 1;
                  uVar19 = uVar19 - 1;
                } while (uVar19 != 0);
                uVar19 = (ulonglong)uVar2;
              }
              psVar18 = psVar18 + (int)uVar2;
              uVar23 = uVar23 - 1;
              psVar17 = local_res18;
            } while (uVar23 != 0);
          }
          psVar18 = psVar17 + (int)(uVar3 * uVar2 * 0x40);
          local_res18 = psVar18;
        }
        local_res20 = local_res20 + 1;
        plVar16 = plVar16 + 1;
        lVar14 = lVar14 + 0x40;
        local_720 = local_720 + -1;
      } while (local_720 != 0);
      local_710 = local_710 + 0x1a;
      param_5 = param_5 + 1;
      plVar15 = plVar15 + 0xd;
    } while (param_5 < (int)param_1[10]);
  }
  return param_1;
}



// FUNCTION 144b96480 FUN_144b96480 body=447 status=ok
// SIG undefined FUN_144b96480(void)

void FUN_144b96480(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined1 local_1c;
  undefined1 auStack_1b [2];
  undefined1 uStack_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    (*(code *)**(undefined8 **)(param_1 + 2))(*(undefined8 *)(param_1 + 4),&DAT_1499774a8,6);
    local_28 = 4;
    iVar2 = 0;
    lVar3 = 0x10;
    local_24 = *(undefined8 *)(param_1 + 7);
    uVar1 = 0xd;
    if ((*(byte *)(param_1 + 6) & 1) != 0) {
      uVar1 = 0;
    }
    _local_1c = CONCAT31((uint3)*(byte *)(param_1 + 9),8);
    _local_1c = CONCAT13((char)param_1[10],CONCAT12(uVar1,_local_1c));
    local_38 = 0x10;
    local_34 = 0x52444849;
    (*(code *)**(undefined8 **)(param_1 + 2))(*(undefined8 *)(param_1 + 4),&local_38,8);
    (*(code *)**(undefined8 **)(param_1 + 2))(*(undefined8 *)(param_1 + 4),&local_28,0x10);
    local_30 = 0x10;
    local_2c = 0x5244484c;
    (*(code *)**(undefined8 **)(param_1 + 2))(*(undefined8 *)(param_1 + 4),&local_30,8);
    (*(code *)**(undefined8 **)(param_1 + 2))(*(undefined8 *)(param_1 + 4),param_1 + 0xb,0x216);
    if (0 < param_1[10]) {
      piVar4 = param_1 + 0xb4;
      do {
        (*(code *)**(undefined8 **)(param_1 + 2))
                  (*(undefined8 *)(param_1 + 4),param_1 + ((longlong)iVar2 + 7) * 0x1a,4);
        (*(code *)**(undefined8 **)(param_1 + 2))(*(undefined8 *)(param_1 + 4),&DAT_1499774b0,4);
        (*(code *)**(undefined8 **)(param_1 + 2))
                  (*(undefined8 *)(param_1 + 4),*(undefined8 *)piVar4,(longlong)piVar4[2]);
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 0x1a;
      } while (iVar2 < param_1[10]);
    }
    plVar5 = (longlong *)(param_1 + 0xb2);
    do {
      if (plVar5[-1] != 0) {
        (*(code *)PTR_free_14c6d9890)();
      }
      if (*plVar5 != 0) {
        (*(code *)PTR_free_14c6d9890)();
      }
      if (plVar5[1] != 0) {
        (*(code *)PTR_free_14c6d9890)();
      }
      plVar5 = plVar5 + 0xd;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 144b96650 FUN_144b96650 body=172 status=ok
// SIG undefined FUN_144b96650(void)

void FUN_144b96650(undefined8 *param_1,undefined8 param_2,uint *param_3,int *param_4,ushort *param_5
                  )

{
  char cVar1;
  int iVar2;
  
  *param_4 = *param_4 + (uint)param_5[1];
  *param_3 = *param_3 | (uint)*param_5 << (0x18U - (char)*param_4 & 0x1f);
  iVar2 = *param_4;
  while (7 < iVar2) {
    cVar1 = *(char *)((longlong)param_3 + 2);
    param_5._0_1_ = cVar1;
    (*(code *)*param_1)(param_2,&param_5,1);
    if (cVar1 == -1) {
      param_5._0_1_ = 0;
      (*(code *)*param_1)(param_2,&param_5,1);
    }
    *param_3 = *param_3 << 8;
    *param_4 = *param_4 + -8;
    iVar2 = *param_4;
  }
  return;
}



// FUNCTION 144b96700 FUN_144b96700 body=1169 status=ok
// SIG undefined FUN_144b96700(void)

int FUN_144b96700(undefined8 *param_1,undefined8 param_2,uint *param_3,int *param_4,int *param_5,
                 uint param_6,undefined4 *param_7,ushort *param_8)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  ushort uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int local_40;
  
  uVar2 = *param_8;
  uVar3 = param_8[1];
  uVar4 = param_8[0x1e0];
  uVar5 = param_8[0x1e1];
  uVar13 = *param_5 - param_6;
  puVar7 = param_7;
  if (uVar13 != 0) {
    iVar11 = (uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f);
    if ((int)uVar13 < 0) {
      uVar13 = uVar13 - 1;
    }
    uVar9 = 1;
    while (iVar11 = iVar11 >> 1, iVar11 != 0) {
      uVar9 = uVar9 + 1;
    }
    param_6._2_1_ = (byte)uVar9;
    param_6 = CONCAT22(uVar9,(1 << (param_6._2_1_ & 0x1f)) - 1U & (ushort)uVar13);
    FUN_144b96650(param_1,param_2,param_3,param_4,param_7 + uVar9);
    puVar7 = &param_6;
  }
  FUN_144b96650(param_1,param_2,param_3,param_4,puVar7);
  piVar8 = param_5 + 0x3d;
  iVar11 = 0x3f;
  lVar10 = 0x3f;
  do {
    if (piVar8[2] != 0) break;
    if (piVar8[1] != 0) {
      iVar11 = iVar11 + -1;
      break;
    }
    if (*piVar8 != 0) {
      iVar11 = iVar11 + -2;
      break;
    }
    iVar11 = iVar11 + -3;
    lVar10 = lVar10 + -3;
    piVar8 = piVar8 + -3;
  } while (0 < lVar10);
  if (iVar11 == 0) {
    *param_4 = *param_4 + (uint)uVar3;
    *param_3 = *param_3 | (uint)uVar2 << (0x18U - (char)*param_4 & 0x1f);
    iVar11 = *param_4;
    while (7 < iVar11) {
      cVar1 = *(char *)((longlong)param_3 + 2);
      param_6._1_3_ = (undefined3)(param_6 >> 8);
      param_6 = CONCAT31(param_6._1_3_,cVar1);
      (*(code *)*param_1)(param_2,&param_6,1);
      if (cVar1 == -1) {
        param_6 = param_6 & 0xffffff00;
        (*(code *)*param_1)(param_2,&param_6,1);
      }
      *param_3 = *param_3 << 8;
      *param_4 = *param_4 + -8;
      iVar11 = *param_4;
    }
  }
  else {
    local_40 = 1;
    if (0 < iVar11) {
      lVar10 = 1;
      do {
        iVar6 = param_5[lVar10];
        iVar15 = local_40;
        while ((iVar6 == 0 && (lVar10 <= iVar11))) {
          lVar10 = lVar10 + 1;
          iVar15 = iVar15 + 1;
          iVar6 = param_5[lVar10];
        }
        uVar13 = iVar15 - local_40;
        if (0xf < (int)uVar13) {
          if (0 < (int)uVar13 >> 4) {
            uVar12 = (ulonglong)(uint)((int)uVar13 >> 4);
            do {
              *param_4 = *param_4 + (uint)uVar5;
              *param_3 = *param_3 | (uint)uVar4 << (0x18U - (char)*param_4 & 0x1f);
              iVar6 = *param_4;
              while (7 < iVar6) {
                cVar1 = *(char *)((longlong)param_3 + 2);
                param_6._1_3_ = (undefined3)(param_6 >> 8);
                param_6 = CONCAT31(param_6._1_3_,cVar1);
                (*(code *)*param_1)(param_2,&param_6,1);
                if (cVar1 == -1) {
                  param_6 = param_6 & 0xffffff00;
                  (*(code *)*param_1)(param_2,&param_6,1);
                }
                *param_3 = *param_3 << 8;
                *param_4 = *param_4 + -8;
                iVar6 = *param_4;
              }
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          uVar13 = uVar13 & 0xf;
        }
        uVar14 = param_5[lVar10];
        iVar6 = (uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f);
        if ((int)uVar14 < 0) {
          uVar14 = uVar14 - 1;
        }
        uVar9 = 1;
        while (iVar6 = iVar6 >> 1, iVar6 != 0) {
          uVar9 = uVar9 + 1;
        }
        FUN_144b96650(param_1,param_2,param_3,param_4,
                      param_8 + (longlong)(int)((uint)uVar9 + uVar13 * 0x10) * 2);
        *param_4 = *param_4 + (uint)uVar9;
        *param_3 = *param_3 |
                   (uint)(ushort)((1 << ((byte)uVar9 & 0x1f)) - 1U & (ushort)uVar14) <<
                   (0x18U - (char)*param_4 & 0x1f);
        iVar6 = *param_4;
        while (7 < iVar6) {
          cVar1 = *(char *)((longlong)param_3 + 2);
          param_6._1_3_ = (undefined3)(param_6 >> 8);
          param_6 = CONCAT31(param_6._1_3_,cVar1);
          (*(code *)*param_1)(param_2,&param_6,1);
          if (cVar1 == -1) {
            param_6 = param_6 & 0xffffff00;
            (*(code *)*param_1)(param_2,&param_6,1);
          }
          *param_3 = *param_3 << 8;
          *param_4 = *param_4 + -8;
          iVar6 = *param_4;
        }
        local_40 = iVar15 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 <= iVar11);
    }
    if (iVar11 != 0x3f) {
      *param_4 = *param_4 + (uint)uVar3;
      *param_3 = *param_3 | (uint)uVar2 << (0x18U - (char)*param_4 & 0x1f);
      iVar11 = *param_4;
      while (7 < iVar11) {
        cVar1 = *(char *)((longlong)param_3 + 2);
        param_6._1_3_ = (undefined3)(param_6 >> 8);
        param_6 = CONCAT31(param_6._1_3_,cVar1);
        (*(code *)*param_1)(param_2,&param_6,1);
        if (cVar1 == -1) {
          param_6 = param_6 & 0xffffff00;
          (*(code *)*param_1)(param_2,&param_6,1);
        }
        *param_3 = *param_3 << 8;
        *param_4 = *param_4 + -8;
        iVar11 = *param_4;
      }
    }
  }
  return *param_5;
}



// FUNCTION 144b96ba0 FUN_144b96ba0 body=138 status=ok
// SIG undefined FUN_144b96ba0(void)

void FUN_144b96ba0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + 0x908);
  lVar2 = 4;
  do {
    if (*plVar1 != 0) {
      (*(code *)PTR_free_14c6d9890)();
    }
    plVar1 = plVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  plVar1 = (longlong *)(param_1 + 0x2b8);
  lVar2 = 0x10;
  do {
    if (plVar1[-1] != 0) {
      (*(code *)PTR_free_14c6d9890)();
    }
    if (*plVar1 != 0) {
      (*(code *)PTR_free_14c6d9890)();
    }
    if (plVar1[1] != 0) {
      (*(code *)PTR_free_14c6d9890)();
    }
    plVar1 = plVar1 + 0xd;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 144b96c30 FUN_144b96c30 body=1067 status=ok
// SIG undefined FUN_144b96c30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b96c30(char *param_1,int param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  undefined1 auVar18 [16];
  short sVar26;
  undefined1 auVar19 [16];
  short sVar27;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  undefined1 auVar28 [16];
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  undefined1 auVar36 [16];
  short sVar43;
  undefined1 auVar37 [16];
  short sVar44;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  short sVar58;
  short sVar59;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  short sVar60;
  short sVar61;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  short sVar71;
  short sVar73;
  short sVar74;
  short sVar75;
  short sVar76;
  short sVar77;
  short sVar78;
  short sVar79;
  undefined1 auVar72 [16];
  short sVar80;
  short sVar81;
  short sVar82;
  short sVar83;
  short sVar84;
  short sVar85;
  short sVar86;
  short sVar87;
  short sVar88;
  short sVar90;
  short sVar91;
  short sVar92;
  short sVar93;
  short sVar94;
  short sVar95;
  short sVar96;
  short sVar97;
  short sVar98;
  short sVar99;
  short sVar100;
  short sVar101;
  short sVar102;
  short sVar103;
  undefined1 auVar89 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  
  auVar36._0_2_ = param_3[0x28] - param_3[0x18];
  auVar36._2_2_ = param_3[0x29] - param_3[0x19];
  auVar36._4_2_ = param_3[0x2a] - param_3[0x1a];
  auVar36._6_2_ = param_3[0x2b] - param_3[0x1b];
  auVar36._8_2_ = param_3[0x2c] - param_3[0x1c];
  auVar36._10_2_ = param_3[0x2d] - param_3[0x1d];
  auVar36._12_2_ = param_3[0x2e] - param_3[0x1e];
  auVar36._14_2_ = param_3[0x2f] - param_3[0x1f];
  sVar1 = param_3[0x30] + param_3[0x10];
  sVar2 = param_3[0x31] + param_3[0x11];
  sVar3 = param_3[0x32] + param_3[0x12];
  sVar4 = param_3[0x33] + param_3[0x13];
  sVar5 = param_3[0x34] + param_3[0x14];
  sVar6 = param_3[0x35] + param_3[0x15];
  sVar7 = param_3[0x36] + param_3[0x16];
  sVar8 = param_3[0x37] + param_3[0x17];
  auVar47._0_2_ = param_3[0x10] - param_3[0x30];
  auVar47._2_2_ = param_3[0x11] - param_3[0x31];
  auVar47._4_2_ = param_3[0x12] - param_3[0x32];
  auVar47._6_2_ = param_3[0x13] - param_3[0x33];
  auVar47._8_2_ = param_3[0x14] - param_3[0x34];
  auVar47._10_2_ = param_3[0x15] - param_3[0x35];
  auVar47._12_2_ = param_3[0x16] - param_3[0x36];
  auVar47._14_2_ = param_3[0x17] - param_3[0x37];
  sVar9 = param_3[0x28] + param_3[0x18];
  sVar10 = param_3[0x29] + param_3[0x19];
  sVar11 = param_3[0x2a] + param_3[0x1a];
  sVar12 = param_3[0x2b] + param_3[0x1b];
  sVar13 = param_3[0x2c] + param_3[0x1c];
  sVar14 = param_3[0x2d] + param_3[0x1d];
  sVar15 = param_3[0x2e] + param_3[0x1e];
  sVar16 = param_3[0x2f] + param_3[0x1f];
  auVar18 = psllw(auVar47,2);
  auVar18 = pmulhw(auVar18,_DAT_1499775b0);
  sVar27 = param_3[0x38] + param_3[8];
  sVar29 = param_3[0x39] + param_3[9];
  sVar30 = param_3[0x3a] + param_3[10];
  sVar31 = param_3[0x3b] + param_3[0xb];
  sVar32 = param_3[0x3c] + param_3[0xc];
  sVar33 = param_3[0x3d] + param_3[0xd];
  sVar34 = param_3[0x3e] + param_3[0xe];
  sVar35 = param_3[0x3f] + param_3[0xf];
  auVar55._0_2_ = param_3[8] - param_3[0x38];
  auVar55._2_2_ = param_3[9] - param_3[0x39];
  auVar55._4_2_ = param_3[10] - param_3[0x3a];
  auVar55._6_2_ = param_3[0xb] - param_3[0x3b];
  auVar55._8_2_ = param_3[0xc] - param_3[0x3c];
  auVar55._10_2_ = param_3[0xd] - param_3[0x3d];
  auVar55._12_2_ = param_3[0xe] - param_3[0x3e];
  auVar55._14_2_ = param_3[0xf] - param_3[0x3f];
  sVar17 = auVar18._0_2_ - sVar1;
  sVar20 = auVar18._2_2_ - sVar2;
  sVar21 = auVar18._4_2_ - sVar3;
  sVar22 = auVar18._6_2_ - sVar4;
  sVar23 = auVar18._8_2_ - sVar5;
  sVar24 = auVar18._10_2_ - sVar6;
  sVar25 = auVar18._12_2_ - sVar7;
  sVar26 = auVar18._14_2_ - sVar8;
  sVar87 = param_3[0x20] + *param_3;
  sVar90 = param_3[0x21] + param_3[1];
  sVar92 = param_3[0x22] + param_3[2];
  sVar94 = param_3[0x23] + param_3[3];
  sVar96 = param_3[0x24] + param_3[4];
  sVar98 = param_3[0x25] + param_3[5];
  sVar100 = param_3[0x26] + param_3[6];
  sVar102 = param_3[0x27] + param_3[7];
  auVar106._0_2_ = sVar27 - sVar9;
  auVar106._2_2_ = sVar29 - sVar10;
  auVar106._4_2_ = sVar30 - sVar11;
  auVar106._6_2_ = sVar31 - sVar12;
  auVar106._8_2_ = sVar32 - sVar13;
  auVar106._10_2_ = sVar33 - sVar14;
  auVar106._12_2_ = sVar34 - sVar15;
  auVar106._14_2_ = sVar35 - sVar16;
  sVar71 = *param_3 - param_3[0x20];
  sVar73 = param_3[1] - param_3[0x21];
  sVar74 = param_3[2] - param_3[0x22];
  sVar75 = param_3[3] - param_3[0x23];
  sVar76 = param_3[4] - param_3[0x24];
  sVar77 = param_3[5] - param_3[0x25];
  sVar78 = param_3[6] - param_3[0x26];
  sVar79 = param_3[7] - param_3[0x27];
  sVar61 = sVar1 + sVar87;
  sVar64 = sVar2 + sVar90;
  sVar65 = sVar3 + sVar92;
  sVar66 = sVar4 + sVar94;
  sVar67 = sVar5 + sVar96;
  sVar68 = sVar6 + sVar98;
  sVar69 = sVar7 + sVar100;
  sVar70 = sVar8 + sVar102;
  sVar87 = sVar87 - sVar1;
  sVar90 = sVar90 - sVar2;
  sVar92 = sVar92 - sVar3;
  sVar94 = sVar94 - sVar4;
  sVar96 = sVar96 - sVar5;
  sVar98 = sVar98 - sVar6;
  sVar100 = sVar100 - sVar7;
  sVar102 = sVar102 - sVar8;
  auVar18 = psllw(auVar106,2);
  auVar28 = pmulhw(auVar18,_DAT_1499775b0);
  auVar18._0_2_ = auVar55._0_2_ + auVar36._0_2_;
  auVar18._2_2_ = auVar55._2_2_ + auVar36._2_2_;
  auVar18._4_2_ = auVar55._4_2_ + auVar36._4_2_;
  auVar18._6_2_ = auVar55._6_2_ + auVar36._6_2_;
  auVar18._8_2_ = auVar55._8_2_ + auVar36._8_2_;
  auVar18._10_2_ = auVar55._10_2_ + auVar36._10_2_;
  auVar18._12_2_ = auVar55._12_2_ + auVar36._12_2_;
  auVar18._14_2_ = auVar55._14_2_ + auVar36._14_2_;
  auVar56 = psllw(auVar55,2);
  auVar57 = pmulhw(auVar56,_DAT_149977590);
  sVar27 = sVar27 + sVar9;
  sVar29 = sVar29 + sVar10;
  sVar30 = sVar30 + sVar11;
  sVar31 = sVar31 + sVar12;
  sVar32 = sVar32 + sVar13;
  sVar33 = sVar33 + sVar14;
  sVar34 = sVar34 + sVar15;
  sVar35 = sVar35 + sVar16;
  auVar18 = psllw(auVar18,2);
  sVar44 = sVar17 + sVar71;
  sVar48 = sVar20 + sVar73;
  sVar49 = sVar21 + sVar74;
  sVar50 = sVar22 + sVar75;
  sVar51 = sVar23 + sVar76;
  sVar52 = sVar24 + sVar77;
  sVar53 = sVar25 + sVar78;
  sVar54 = sVar26 + sVar79;
  auVar18 = pmulhw(auVar18,_DAT_1499775d0);
  sVar71 = sVar71 - sVar17;
  sVar73 = sVar73 - sVar20;
  sVar74 = sVar74 - sVar21;
  sVar75 = sVar75 - sVar22;
  sVar76 = sVar76 - sVar23;
  sVar77 = sVar77 - sVar24;
  sVar78 = sVar78 - sVar25;
  sVar79 = sVar79 - sVar26;
  auVar56 = psllw(auVar36,2);
  sVar80 = sVar27 + sVar61;
  sVar81 = sVar29 + sVar64;
  sVar82 = sVar30 + sVar65;
  sVar83 = sVar31 + sVar66;
  sVar84 = sVar32 + sVar67;
  sVar9 = sVar33 + sVar68;
  sVar85 = sVar34 + sVar69;
  sVar86 = sVar35 + sVar70;
  auVar56 = pmulhw(auVar56,_DAT_1499775f0);
  sVar61 = sVar61 - sVar27;
  sVar64 = sVar64 - sVar29;
  sVar65 = sVar65 - sVar30;
  sVar66 = sVar66 - sVar31;
  sVar67 = sVar67 - sVar32;
  sVar68 = sVar68 - sVar33;
  sVar69 = sVar69 - sVar34;
  sVar70 = sVar70 - sVar35;
  sVar27 = ((auVar56._0_2_ - auVar36._0_2_) + auVar18._0_2_) - sVar27;
  sVar29 = ((auVar56._2_2_ - auVar36._2_2_) + auVar18._2_2_) - sVar29;
  sVar30 = ((auVar56._4_2_ - auVar36._4_2_) + auVar18._4_2_) - sVar30;
  sVar31 = ((auVar56._6_2_ - auVar36._6_2_) + auVar18._6_2_) - sVar31;
  sVar32 = ((auVar56._8_2_ - auVar36._8_2_) + auVar18._8_2_) - sVar32;
  sVar33 = ((auVar56._10_2_ - auVar36._10_2_) + auVar18._10_2_) - sVar33;
  sVar34 = ((auVar56._12_2_ - auVar36._12_2_) + auVar18._12_2_) - sVar34;
  sVar35 = ((auVar56._14_2_ - auVar36._14_2_) + auVar18._14_2_) - sVar35;
  sVar12 = auVar28._0_2_ - sVar27;
  sVar14 = auVar28._2_2_ - sVar29;
  sVar15 = auVar28._4_2_ - sVar30;
  sVar16 = auVar28._6_2_ - sVar31;
  sVar17 = auVar28._8_2_ - sVar32;
  sVar23 = auVar28._10_2_ - sVar33;
  sVar24 = auVar28._12_2_ - sVar34;
  sVar25 = auVar28._14_2_ - sVar35;
  sVar10 = (auVar57._0_2_ - auVar18._0_2_) + sVar12;
  sVar13 = (auVar57._2_2_ - auVar18._2_2_) + sVar14;
  sVar20 = (auVar57._4_2_ - auVar18._4_2_) + sVar15;
  sVar21 = (auVar57._6_2_ - auVar18._6_2_) + sVar16;
  sVar22 = (auVar57._8_2_ - auVar18._8_2_) + sVar17;
  sVar58 = (auVar57._10_2_ - auVar18._10_2_) + sVar23;
  sVar59 = (auVar57._12_2_ - auVar18._12_2_) + sVar24;
  sVar60 = (auVar57._14_2_ - auVar18._14_2_) + sVar25;
  sVar26 = sVar27 + sVar44;
  sVar38 = sVar29 + sVar48;
  sVar39 = sVar30 + sVar49;
  sVar40 = sVar31 + sVar50;
  sVar41 = sVar32 + sVar51;
  sVar11 = sVar33 + sVar52;
  sVar42 = sVar34 + sVar53;
  sVar43 = sVar35 + sVar54;
  sVar44 = sVar44 - sVar27;
  sVar48 = sVar48 - sVar29;
  sVar49 = sVar49 - sVar30;
  sVar50 = sVar50 - sVar31;
  sVar51 = sVar51 - sVar32;
  sVar52 = sVar52 - sVar33;
  sVar53 = sVar53 - sVar34;
  sVar54 = sVar54 - sVar35;
  sVar1 = sVar10 + sVar87;
  sVar2 = sVar13 + sVar90;
  sVar3 = sVar20 + sVar92;
  sVar4 = sVar21 + sVar94;
  sVar5 = sVar22 + sVar96;
  sVar6 = sVar58 + sVar98;
  sVar7 = sVar59 + sVar100;
  sVar8 = sVar60 + sVar102;
  sVar87 = sVar87 - sVar10;
  sVar90 = sVar90 - sVar13;
  sVar92 = sVar92 - sVar20;
  sVar94 = sVar94 - sVar21;
  sVar96 = sVar96 - sVar22;
  sVar98 = sVar98 - sVar58;
  sVar100 = sVar100 - sVar59;
  sVar102 = sVar102 - sVar60;
  sVar20 = sVar12 + sVar71;
  sVar29 = sVar14 + sVar73;
  sVar21 = sVar15 + sVar74;
  sVar30 = sVar16 + sVar75;
  sVar10 = sVar17 + sVar76;
  sVar13 = sVar23 + sVar77;
  sVar22 = sVar24 + sVar78;
  sVar31 = sVar25 + sVar79;
  sVar71 = sVar71 - sVar12;
  sVar73 = sVar73 - sVar14;
  sVar74 = sVar74 - sVar15;
  sVar75 = sVar75 - sVar16;
  sVar76 = sVar76 - sVar17;
  sVar77 = sVar77 - sVar23;
  sVar78 = sVar78 - sVar24;
  sVar79 = sVar79 - sVar25;
  sVar88 = sVar84 + sVar80;
  sVar91 = sVar41 + sVar26;
  sVar93 = sVar10 + sVar20;
  sVar95 = sVar96 + sVar87;
  sVar97 = sVar5 + sVar1;
  sVar99 = sVar76 + sVar71;
  sVar101 = sVar51 + sVar44;
  sVar103 = sVar67 + sVar61;
  sVar80 = sVar80 - sVar84;
  sVar26 = sVar26 - sVar41;
  sVar20 = sVar20 - sVar10;
  sVar87 = sVar87 - sVar96;
  sVar1 = sVar1 - sVar5;
  sVar71 = sVar71 - sVar76;
  sVar44 = sVar44 - sVar51;
  sVar61 = sVar61 - sVar67;
  sVar5 = sVar85 + sVar82;
  sVar10 = sVar42 + sVar39;
  sVar12 = sVar22 + sVar21;
  sVar14 = sVar100 + sVar92;
  sVar15 = sVar7 + sVar3;
  sVar16 = sVar78 + sVar74;
  sVar17 = sVar53 + sVar49;
  sVar27 = sVar69 + sVar65;
  auVar63._0_2_ = sVar82 - sVar85;
  auVar63._2_2_ = sVar39 - sVar42;
  auVar63._4_2_ = sVar21 - sVar22;
  auVar63._6_2_ = sVar92 - sVar100;
  auVar63._8_2_ = sVar3 - sVar7;
  auVar63._10_2_ = sVar74 - sVar78;
  auVar63._12_2_ = sVar49 - sVar53;
  auVar63._14_2_ = sVar65 - sVar69;
  auVar18 = psllw(auVar63,2);
  sVar35 = sVar5 + sVar88;
  sVar39 = sVar10 + sVar91;
  sVar41 = sVar12 + sVar93;
  sVar42 = sVar14 + sVar95;
  sVar49 = sVar15 + sVar97;
  sVar51 = sVar16 + sVar99;
  sVar53 = sVar17 + sVar101;
  sVar58 = sVar27 + sVar103;
  auVar18 = pmulhw(auVar18,_DAT_1499775b0);
  sVar88 = sVar88 - sVar5;
  sVar91 = sVar91 - sVar10;
  sVar93 = sVar93 - sVar12;
  sVar95 = sVar95 - sVar14;
  sVar97 = sVar97 - sVar15;
  sVar99 = sVar99 - sVar16;
  sVar101 = sVar101 - sVar17;
  sVar103 = sVar103 - sVar27;
  sVar21 = sVar86 + sVar81;
  sVar22 = sVar43 + sVar38;
  sVar23 = sVar31 + sVar29;
  sVar32 = sVar102 + sVar90;
  sVar24 = sVar8 + sVar2;
  sVar33 = sVar79 + sVar73;
  sVar25 = sVar54 + sVar48;
  sVar34 = sVar70 + sVar64;
  auVar105._0_2_ = sVar81 - sVar86;
  auVar105._2_2_ = sVar38 - sVar43;
  auVar105._4_2_ = sVar29 - sVar31;
  auVar105._6_2_ = sVar90 - sVar102;
  auVar105._8_2_ = sVar2 - sVar8;
  auVar105._10_2_ = sVar73 - sVar79;
  auVar105._12_2_ = sVar48 - sVar54;
  auVar105._14_2_ = sVar64 - sVar70;
  auVar56 = psllw(auVar105,2);
  auVar106 = pmulhw(auVar56,_DAT_149977590);
  sVar5 = auVar18._0_2_ - sVar5;
  sVar10 = auVar18._2_2_ - sVar10;
  sVar12 = auVar18._4_2_ - sVar12;
  sVar14 = auVar18._6_2_ - sVar14;
  sVar15 = auVar18._8_2_ - sVar15;
  sVar16 = auVar18._10_2_ - sVar16;
  sVar17 = auVar18._12_2_ - sVar17;
  sVar27 = auVar18._14_2_ - sVar27;
  auVar45._0_2_ = sVar9 - sVar83;
  auVar45._2_2_ = sVar11 - sVar40;
  auVar45._4_2_ = sVar13 - sVar30;
  auVar45._6_2_ = sVar98 - sVar94;
  auVar45._8_2_ = sVar6 - sVar4;
  auVar45._10_2_ = sVar77 - sVar75;
  auVar45._12_2_ = sVar52 - sVar50;
  auVar45._14_2_ = sVar68 - sVar66;
  sVar29 = sVar5 + sVar80;
  sVar31 = sVar10 + sVar26;
  sVar38 = sVar12 + sVar20;
  sVar43 = sVar14 + sVar87;
  sVar48 = sVar15 + sVar1;
  sVar54 = sVar16 + sVar71;
  sVar59 = sVar17 + sVar44;
  sVar60 = sVar27 + sVar61;
  sVar80 = sVar80 - sVar5;
  sVar26 = sVar26 - sVar10;
  sVar20 = sVar20 - sVar12;
  sVar87 = sVar87 - sVar14;
  sVar1 = sVar1 - sVar15;
  sVar71 = sVar71 - sVar16;
  sVar44 = sVar44 - sVar17;
  sVar61 = sVar61 - sVar27;
  auVar56._0_2_ = auVar105._0_2_ + auVar45._0_2_;
  auVar56._2_2_ = auVar105._2_2_ + auVar45._2_2_;
  auVar56._4_2_ = auVar105._4_2_ + auVar45._4_2_;
  auVar56._6_2_ = auVar105._6_2_ + auVar45._6_2_;
  auVar56._8_2_ = auVar105._8_2_ + auVar45._8_2_;
  auVar56._10_2_ = auVar105._10_2_ + auVar45._10_2_;
  auVar56._12_2_ = auVar105._12_2_ + auVar45._12_2_;
  auVar56._14_2_ = auVar105._14_2_ + auVar45._14_2_;
  sVar9 = sVar9 + sVar83;
  sVar11 = sVar11 + sVar40;
  sVar13 = sVar13 + sVar30;
  sVar98 = sVar98 + sVar94;
  sVar6 = sVar6 + sVar4;
  sVar77 = sVar77 + sVar75;
  sVar52 = sVar52 + sVar50;
  sVar68 = sVar68 + sVar66;
  auVar18 = psllw(auVar56,2);
  auVar18 = pmulhw(auVar18,_DAT_1499775d0);
  sVar2 = sVar21 + sVar9;
  sVar3 = sVar22 + sVar11;
  sVar4 = sVar23 + sVar13;
  sVar5 = sVar32 + sVar98;
  sVar7 = sVar24 + sVar6;
  sVar8 = sVar33 + sVar77;
  sVar10 = sVar25 + sVar52;
  sVar12 = sVar34 + sVar68;
  auVar37._0_2_ = sVar21 - sVar9;
  auVar37._2_2_ = sVar22 - sVar11;
  auVar37._4_2_ = sVar23 - sVar13;
  auVar37._6_2_ = sVar32 - sVar98;
  auVar37._8_2_ = sVar24 - sVar6;
  auVar37._10_2_ = sVar33 - sVar77;
  auVar37._12_2_ = sVar25 - sVar52;
  auVar37._14_2_ = sVar34 - sVar68;
  auVar56 = psllw(auVar45,2);
  auVar56 = pmulhw(auVar56,_DAT_1499775f0);
  auVar28 = psllw(auVar37,2);
  auVar28 = pmulhw(auVar28,_DAT_1499775b0);
  auVar46._0_2_ = sVar2 + sVar35;
  auVar46._2_2_ = sVar3 + sVar39;
  auVar46._4_2_ = sVar4 + sVar41;
  auVar46._6_2_ = sVar5 + sVar42;
  auVar46._8_2_ = sVar7 + sVar49;
  auVar46._10_2_ = sVar8 + sVar51;
  auVar46._12_2_ = sVar10 + sVar53;
  auVar46._14_2_ = sVar12 + sVar58;
  sVar6 = ((auVar56._0_2_ - auVar45._0_2_) + auVar18._0_2_) - sVar2;
  sVar9 = ((auVar56._2_2_ - auVar45._2_2_) + auVar18._2_2_) - sVar3;
  sVar11 = ((auVar56._4_2_ - auVar45._4_2_) + auVar18._4_2_) - sVar4;
  sVar13 = ((auVar56._6_2_ - auVar45._6_2_) + auVar18._6_2_) - sVar5;
  sVar14 = ((auVar56._8_2_ - auVar45._8_2_) + auVar18._8_2_) - sVar7;
  sVar98 = ((auVar56._10_2_ - auVar45._10_2_) + auVar18._10_2_) - sVar8;
  sVar15 = ((auVar56._12_2_ - auVar45._12_2_) + auVar18._12_2_) - sVar10;
  sVar16 = ((auVar56._14_2_ - auVar45._14_2_) + auVar18._14_2_) - sVar12;
  auVar47 = psraw(auVar46,5);
  auVar62._0_2_ = sVar35 - sVar2;
  auVar62._2_2_ = sVar39 - sVar3;
  auVar62._4_2_ = sVar41 - sVar4;
  auVar62._6_2_ = sVar42 - sVar5;
  auVar62._8_2_ = sVar49 - sVar7;
  auVar62._10_2_ = sVar51 - sVar8;
  auVar62._12_2_ = sVar53 - sVar10;
  auVar62._14_2_ = sVar58 - sVar12;
  sVar2 = auVar28._0_2_ - sVar6;
  sVar3 = auVar28._2_2_ - sVar9;
  sVar4 = auVar28._4_2_ - sVar11;
  sVar5 = auVar28._6_2_ - sVar13;
  sVar7 = auVar28._8_2_ - sVar14;
  sVar8 = auVar28._10_2_ - sVar98;
  sVar30 = auVar28._12_2_ - sVar15;
  sVar22 = auVar28._14_2_ - sVar16;
  auVar63 = psraw(auVar62,5);
  auVar57._0_2_ = sVar6 + sVar29;
  auVar57._2_2_ = sVar9 + sVar31;
  auVar57._4_2_ = sVar11 + sVar38;
  auVar57._6_2_ = sVar13 + sVar43;
  auVar57._8_2_ = sVar14 + sVar48;
  auVar57._10_2_ = sVar98 + sVar54;
  auVar57._12_2_ = sVar15 + sVar59;
  auVar57._14_2_ = sVar16 + sVar60;
  auVar19._0_2_ = sVar2 + sVar80;
  auVar19._2_2_ = sVar3 + sVar26;
  auVar19._4_2_ = sVar4 + sVar20;
  auVar19._6_2_ = sVar5 + sVar87;
  auVar19._8_2_ = sVar7 + sVar1;
  auVar19._10_2_ = sVar8 + sVar71;
  auVar19._12_2_ = sVar30 + sVar44;
  auVar19._14_2_ = sVar22 + sVar61;
  auVar56 = psraw(auVar57,5);
  auVar72._0_2_ = sVar29 - sVar6;
  auVar72._2_2_ = sVar31 - sVar9;
  auVar72._4_2_ = sVar38 - sVar11;
  auVar72._6_2_ = sVar43 - sVar13;
  auVar72._8_2_ = sVar48 - sVar14;
  auVar72._10_2_ = sVar54 - sVar98;
  auVar72._12_2_ = sVar59 - sVar15;
  auVar72._14_2_ = sVar60 - sVar16;
  auVar28 = psraw(auVar19,5);
  auVar57 = psraw(auVar72,5);
  sVar16 = auVar28._0_2_ + 0x80;
  sVar77 = auVar28._2_2_ + 0x80;
  sVar17 = auVar28._4_2_ + 0x80;
  sVar52 = auVar28._6_2_ + 0x80;
  sVar27 = auVar28._8_2_ + 0x80;
  sVar68 = auVar28._10_2_ + 0x80;
  sVar29 = auVar28._12_2_ + 0x80;
  sVar21 = auVar28._14_2_ + 0x80;
  sVar6 = (auVar106._0_2_ - auVar18._0_2_) + sVar2;
  sVar65 = (auVar106._2_2_ - auVar18._2_2_) + sVar3;
  sVar66 = (auVar106._4_2_ - auVar18._4_2_) + sVar4;
  sVar67 = (auVar106._6_2_ - auVar18._6_2_) + sVar5;
  sVar69 = (auVar106._8_2_ - auVar18._8_2_) + sVar7;
  sVar70 = (auVar106._10_2_ - auVar18._10_2_) + sVar8;
  sVar73 = (auVar106._12_2_ - auVar18._12_2_) + sVar30;
  sVar74 = (auVar106._14_2_ - auVar18._14_2_) + sVar22;
  sVar31 = auVar47._0_2_ + 0x80;
  sVar23 = auVar47._2_2_ + 0x80;
  sVar32 = auVar47._4_2_ + 0x80;
  sVar24 = auVar47._6_2_ + 0x80;
  sVar33 = auVar47._8_2_ + 0x80;
  sVar25 = auVar47._10_2_ + 0x80;
  sVar34 = auVar47._12_2_ + 0x80;
  sVar35 = auVar47._14_2_ + 0x80;
  sVar38 = auVar63._0_2_ + 0x80;
  sVar39 = auVar63._2_2_ + 0x80;
  sVar40 = auVar63._4_2_ + 0x80;
  sVar41 = auVar63._6_2_ + 0x80;
  sVar42 = auVar63._8_2_ + 0x80;
  sVar43 = auVar63._10_2_ + 0x80;
  sVar48 = auVar63._12_2_ + 0x80;
  sVar49 = auVar63._14_2_ + 0x80;
  sVar9 = auVar56._0_2_ + 0x80;
  sVar10 = auVar56._2_2_ + 0x80;
  sVar11 = auVar56._4_2_ + 0x80;
  sVar12 = auVar56._6_2_ + 0x80;
  sVar13 = auVar56._8_2_ + 0x80;
  sVar14 = auVar56._10_2_ + 0x80;
  sVar98 = auVar56._12_2_ + 0x80;
  sVar15 = auVar56._14_2_ + 0x80;
  sVar50 = auVar57._0_2_ + 0x80;
  sVar51 = auVar57._2_2_ + 0x80;
  sVar53 = auVar57._4_2_ + 0x80;
  sVar54 = auVar57._6_2_ + 0x80;
  sVar58 = auVar57._8_2_ + 0x80;
  sVar59 = auVar57._10_2_ + 0x80;
  sVar60 = auVar57._12_2_ + 0x80;
  sVar64 = auVar57._14_2_ + 0x80;
  auVar104._0_2_ = sVar80 - sVar2;
  auVar104._2_2_ = sVar26 - sVar3;
  auVar104._4_2_ = sVar20 - sVar4;
  auVar104._6_2_ = sVar87 - sVar5;
  auVar104._8_2_ = sVar1 - sVar7;
  auVar104._10_2_ = sVar71 - sVar8;
  auVar104._12_2_ = sVar44 - sVar30;
  auVar104._14_2_ = sVar61 - sVar22;
  auVar28._0_2_ = sVar6 + sVar88;
  auVar28._2_2_ = sVar65 + sVar91;
  auVar28._4_2_ = sVar66 + sVar93;
  auVar28._6_2_ = sVar67 + sVar95;
  auVar28._8_2_ = sVar69 + sVar97;
  auVar28._10_2_ = sVar70 + sVar99;
  auVar28._12_2_ = sVar73 + sVar101;
  auVar28._14_2_ = sVar74 + sVar103;
  auVar18 = psraw(auVar28,5);
  auVar89._0_2_ = sVar88 - sVar6;
  auVar89._2_2_ = sVar91 - sVar65;
  auVar89._4_2_ = sVar93 - sVar66;
  auVar89._6_2_ = sVar95 - sVar67;
  auVar89._8_2_ = sVar97 - sVar69;
  auVar89._10_2_ = sVar99 - sVar70;
  auVar89._12_2_ = sVar101 - sVar73;
  auVar89._14_2_ = sVar103 - sVar74;
  sVar1 = auVar18._0_2_ + 0x80;
  sVar2 = auVar18._2_2_ + 0x80;
  sVar3 = auVar18._4_2_ + 0x80;
  sVar4 = auVar18._6_2_ + 0x80;
  sVar5 = auVar18._8_2_ + 0x80;
  sVar6 = auVar18._10_2_ + 0x80;
  sVar7 = auVar18._12_2_ + 0x80;
  sVar8 = auVar18._14_2_ + 0x80;
  auVar18 = psraw(auVar104,5);
  sVar67 = auVar18._0_2_ + 0x80;
  sVar69 = auVar18._2_2_ + 0x80;
  sVar70 = auVar18._4_2_ + 0x80;
  sVar71 = auVar18._6_2_ + 0x80;
  sVar73 = auVar18._8_2_ + 0x80;
  sVar74 = auVar18._10_2_ + 0x80;
  sVar75 = auVar18._12_2_ + 0x80;
  sVar76 = auVar18._14_2_ + 0x80;
  auVar18 = psraw(auVar89,5);
  sVar20 = auVar18._0_2_ + 0x80;
  sVar30 = auVar18._2_2_ + 0x80;
  sVar22 = auVar18._4_2_ + 0x80;
  sVar26 = auVar18._6_2_ + 0x80;
  sVar44 = auVar18._8_2_ + 0x80;
  sVar61 = auVar18._10_2_ + 0x80;
  sVar65 = auVar18._12_2_ + 0x80;
  sVar66 = auVar18._14_2_ + 0x80;
  *param_1 = (0 < sVar31) * (sVar31 < 0x100) * (char)sVar31 - (0xff < sVar31);
  param_1[1] = (0 < sVar9) * (sVar9 < 0x100) * (char)sVar9 - (0xff < sVar9);
  param_1[2] = (0 < sVar16) * (sVar16 < 0x100) * (char)sVar16 - (0xff < sVar16);
  param_1[3] = (0 < sVar20) * (sVar20 < 0x100) * (char)sVar20 - (0xff < sVar20);
  param_1[4] = (0 < sVar1) * (sVar1 < 0x100) * (char)sVar1 - (0xff < sVar1);
  param_1[5] = (0 < sVar67) * (sVar67 < 0x100) * (char)sVar67 - (0xff < sVar67);
  param_1[6] = (0 < sVar50) * (sVar50 < 0x100) * (char)sVar50 - (0xff < sVar50);
  param_1[7] = (0 < sVar38) * (sVar38 < 0x100) * (char)sVar38 - (0xff < sVar38);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar23) * (sVar23 < 0x100) * (char)sVar23 - (0xff < sVar23);
  param_1[1] = (0 < sVar10) * (sVar10 < 0x100) * (char)sVar10 - (0xff < sVar10);
  param_1[2] = (0 < sVar77) * (sVar77 < 0x100) * (char)sVar77 - (0xff < sVar77);
  param_1[3] = (0 < sVar30) * (sVar30 < 0x100) * (char)sVar30 - (0xff < sVar30);
  param_1[4] = (0 < sVar2) * (sVar2 < 0x100) * (char)sVar2 - (0xff < sVar2);
  param_1[5] = (0 < sVar69) * (sVar69 < 0x100) * (char)sVar69 - (0xff < sVar69);
  param_1[6] = (0 < sVar51) * (sVar51 < 0x100) * (char)sVar51 - (0xff < sVar51);
  param_1[7] = (0 < sVar39) * (sVar39 < 0x100) * (char)sVar39 - (0xff < sVar39);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar32) * (sVar32 < 0x100) * (char)sVar32 - (0xff < sVar32);
  param_1[1] = (0 < sVar11) * (sVar11 < 0x100) * (char)sVar11 - (0xff < sVar11);
  param_1[2] = (0 < sVar17) * (sVar17 < 0x100) * (char)sVar17 - (0xff < sVar17);
  param_1[3] = (0 < sVar22) * (sVar22 < 0x100) * (char)sVar22 - (0xff < sVar22);
  param_1[4] = (0 < sVar3) * (sVar3 < 0x100) * (char)sVar3 - (0xff < sVar3);
  param_1[5] = (0 < sVar70) * (sVar70 < 0x100) * (char)sVar70 - (0xff < sVar70);
  param_1[6] = (0 < sVar53) * (sVar53 < 0x100) * (char)sVar53 - (0xff < sVar53);
  param_1[7] = (0 < sVar40) * (sVar40 < 0x100) * (char)sVar40 - (0xff < sVar40);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar24) * (sVar24 < 0x100) * (char)sVar24 - (0xff < sVar24);
  param_1[1] = (0 < sVar12) * (sVar12 < 0x100) * (char)sVar12 - (0xff < sVar12);
  param_1[2] = (0 < sVar52) * (sVar52 < 0x100) * (char)sVar52 - (0xff < sVar52);
  param_1[3] = (0 < sVar26) * (sVar26 < 0x100) * (char)sVar26 - (0xff < sVar26);
  param_1[4] = (0 < sVar4) * (sVar4 < 0x100) * (char)sVar4 - (0xff < sVar4);
  param_1[5] = (0 < sVar71) * (sVar71 < 0x100) * (char)sVar71 - (0xff < sVar71);
  param_1[6] = (0 < sVar54) * (sVar54 < 0x100) * (char)sVar54 - (0xff < sVar54);
  param_1[7] = (0 < sVar41) * (sVar41 < 0x100) * (char)sVar41 - (0xff < sVar41);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar33) * (sVar33 < 0x100) * (char)sVar33 - (0xff < sVar33);
  param_1[1] = (0 < sVar13) * (sVar13 < 0x100) * (char)sVar13 - (0xff < sVar13);
  param_1[2] = (0 < sVar27) * (sVar27 < 0x100) * (char)sVar27 - (0xff < sVar27);
  param_1[3] = (0 < sVar44) * (sVar44 < 0x100) * (char)sVar44 - (0xff < sVar44);
  param_1[4] = (0 < sVar5) * (sVar5 < 0x100) * (char)sVar5 - (0xff < sVar5);
  param_1[5] = (0 < sVar73) * (sVar73 < 0x100) * (char)sVar73 - (0xff < sVar73);
  param_1[6] = (0 < sVar58) * (sVar58 < 0x100) * (char)sVar58 - (0xff < sVar58);
  param_1[7] = (0 < sVar42) * (sVar42 < 0x100) * (char)sVar42 - (0xff < sVar42);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar25) * (sVar25 < 0x100) * (char)sVar25 - (0xff < sVar25);
  param_1[1] = (0 < sVar14) * (sVar14 < 0x100) * (char)sVar14 - (0xff < sVar14);
  param_1[2] = (0 < sVar68) * (sVar68 < 0x100) * (char)sVar68 - (0xff < sVar68);
  param_1[3] = (0 < sVar61) * (sVar61 < 0x100) * (char)sVar61 - (0xff < sVar61);
  param_1[4] = (0 < sVar6) * (sVar6 < 0x100) * (char)sVar6 - (0xff < sVar6);
  param_1[5] = (0 < sVar74) * (sVar74 < 0x100) * (char)sVar74 - (0xff < sVar74);
  param_1[6] = (0 < sVar59) * (sVar59 < 0x100) * (char)sVar59 - (0xff < sVar59);
  param_1[7] = (0 < sVar43) * (sVar43 < 0x100) * (char)sVar43 - (0xff < sVar43);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar34) * (sVar34 < 0x100) * (char)sVar34 - (0xff < sVar34);
  param_1[1] = (0 < sVar98) * (sVar98 < 0x100) * (char)sVar98 - (0xff < sVar98);
  param_1[2] = (0 < sVar29) * (sVar29 < 0x100) * (char)sVar29 - (0xff < sVar29);
  param_1[3] = (0 < sVar65) * (sVar65 < 0x100) * (char)sVar65 - (0xff < sVar65);
  param_1[4] = (0 < sVar7) * (sVar7 < 0x100) * (char)sVar7 - (0xff < sVar7);
  param_1[5] = (0 < sVar75) * (sVar75 < 0x100) * (char)sVar75 - (0xff < sVar75);
  param_1[6] = (0 < sVar60) * (sVar60 < 0x100) * (char)sVar60 - (0xff < sVar60);
  param_1[7] = (0 < sVar48) * (sVar48 < 0x100) * (char)sVar48 - (0xff < sVar48);
  param_1 = param_1 + param_2;
  *param_1 = (0 < sVar35) * (sVar35 < 0x100) * (char)sVar35 - (0xff < sVar35);
  param_1[1] = (0 < sVar15) * (sVar15 < 0x100) * (char)sVar15 - (0xff < sVar15);
  param_1[2] = (0 < sVar21) * (sVar21 < 0x100) * (char)sVar21 - (0xff < sVar21);
  param_1[3] = (0 < sVar66) * (sVar66 < 0x100) * (char)sVar66 - (0xff < sVar66);
  param_1[4] = (0 < sVar8) * (sVar8 < 0x100) * (char)sVar8 - (0xff < sVar8);
  param_1[5] = (0 < sVar76) * (sVar76 < 0x100) * (char)sVar76 - (0xff < sVar76);
  param_1[6] = (0 < sVar64) * (sVar64 < 0x100) * (char)sVar64 - (0xff < sVar64);
  param_1[7] = (0 < sVar49) * (sVar49 < 0x100) * (char)sVar49 - (0xff < sVar49);
  return;
}



// FUNCTION 144b97060 FUN_144b97060 body=361 status=ok
// SIG undefined FUN_144b97060(void)

void FUN_144b97060(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7,float *param_8)

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
  
  fVar4 = *param_7 + *param_2;
  fVar8 = *param_2 - *param_7;
  fVar9 = *param_1 - *param_8;
  fVar5 = *param_1 + *param_8;
  fVar3 = *param_6 + *param_3;
  fVar7 = *param_3 - *param_6;
  fVar1 = *param_5 + *param_4;
  fVar2 = fVar1 + fVar5;
  fVar5 = fVar5 - fVar1;
  fVar1 = fVar3 + fVar4;
  fVar6 = (*param_4 - *param_5) + fVar7;
  fVar7 = (fVar7 + fVar8) * 0.70710677;
  *param_1 = fVar1 + fVar2;
  *param_5 = fVar2 - fVar1;
  fVar2 = fVar7 + fVar9;
  fVar1 = ((fVar4 - fVar3) + fVar5) * 0.70710677;
  fVar8 = fVar8 + fVar9;
  fVar9 = fVar9 - fVar7;
  *param_3 = fVar1 + fVar5;
  *param_7 = fVar5 - fVar1;
  fVar1 = (fVar6 - fVar8) * 0.38268343;
  fVar3 = fVar6 * 0.5411961 + fVar1;
  fVar1 = fVar8 * 1.306563 + fVar1;
  *param_6 = fVar9 + fVar3;
  *param_4 = fVar9 - fVar3;
  *param_2 = fVar2 + fVar1;
  *param_8 = fVar2 - fVar1;
  return;
}



// FUNCTION 144b971d0 FUN_144b971d0 body=509 status=ok
// SIG undefined FUN_144b971d0(void)

void FUN_144b971d0(float *param_1,int param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  longlong local_68;
  
  iVar3 = 0;
  local_68 = 0;
  if (0 < param_2 * 8) {
    do {
      pfVar2 = param_1 + iVar3;
      FUN_144b97060(pfVar2,pfVar2 + 1,pfVar2 + 2,pfVar2 + 3,pfVar2 + 4,pfVar2 + 5,pfVar2 + 6,
                    pfVar2 + 7);
      iVar3 = iVar3 + param_2;
    } while (iVar3 < param_2 * 8);
  }
  lVar4 = 8;
  lVar5 = (longlong)(param_2 * 6);
  pfVar2 = param_1 + lVar5;
  do {
    FUN_144b97060(pfVar2 + -lVar5,pfVar2 + (param_2 - lVar5),pfVar2 + (param_2 * 2 - lVar5),
                  pfVar2 + (param_2 * 3 - lVar5),pfVar2 + (param_2 * 4 - lVar5),
                  pfVar2 + (param_2 * 5 - lVar5),pfVar2,pfVar2 + (param_2 * 7 - lVar5));
    pfVar2 = pfVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar4 = 8;
  do {
    lVar5 = 8;
    pfVar2 = param_1;
    do {
      fVar6 = *(float *)(param_3 + local_68 * 4) * *pfVar2;
      if (0.0 <= fVar6) {
        fVar6 = floorf(fVar6 + 0.5);
      }
      else {
        fVar6 = ceilf(fVar6 - 0.5);
      }
      piVar1 = &DAT_149975b70 + local_68;
      pfVar2 = pfVar2 + 1;
      local_68 = local_68 + 1;
      *(int *)(param_4 + (longlong)*piVar1 * 4) = (int)fVar6;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    param_1 = param_1 + param_2;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}



// FUNCTION 144b973d0 FUN_144b973d0 body=285 status=ok
// SIG undefined FUN_144b973d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b973d0(ulonglong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (DAT_14c77f018 != 0) {
    if (DAT_14c77f014 == 0) {
      DAT_14c77f014 = 1;
      FUN_144ba24f0(0x14,0x156,0x46,"ssl\\ssl_init.c",0xb2);
    }
    return 0;
  }
  uVar4 = param_1 | 0x4c;
  if ((param_1 & 0x80) != 0) {
    uVar4 = param_1 | 0xc;
  }
  uVar2 = FUN_144bab1c0(uVar4);
  if ((int)uVar2 != 0) {
    iVar1 = FUN_144e986c0(&DAT_14c77f000,FUN_144b97750);
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = DAT_14c77f008;
    }
    if (iVar3 == 0) {
      return 0;
    }
    if ((uVar4 >> 0x14 & 1) != 0) {
      iVar1 = FUN_144e986c0(&DAT_14c77f00c,&LAB_144b977a0);
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = DAT_14c77f010;
      }
      if (iVar3 == 0) {
        return 0;
      }
    }
    if ((uVar4 >> 0x15 & 1) != 0) {
      iVar1 = FUN_144e986c0(&DAT_14c77f00c,FUN_144b97770);
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = DAT_14c77f010;
      }
      if (iVar3 == 0) {
        return 0;
      }
    }
    return 1;
  }
  return uVar2;
}



// FUNCTION 144b974f0 FUN_144b974f0 body=55 status=ok
// SIG undefined FUN_144b974f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b974f0(void)

{
  if ((DAT_14c77f018 == 0) && (DAT_14c77f018 = 1, DAT_14c77f004 != 0)) {
    FUN_144ea4580();
    return;
  }
  return;
}



// FUNCTION 144b97530 FUN_144b97530 body=539 status=ok
// SIG undefined FUN_144b97530(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b97530(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144e999e0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9a590();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9b600();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9a9b0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9b150();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9bcd0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9bce0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa100();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa280();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa3e0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa1e0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa4c0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa1c0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144baa4a0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9cba0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9cbc0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9e350();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e9e3b0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea10f0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1210();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1cd0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea1db0();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea2950();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144ea3070();
  FUN_144baa9e0(uVar1);
  uVar1 = FUN_144e98ef0();
  FUN_144baaa40(uVar1);
  FUN_144e98940("ssl3-md5",0x8001,&DAT_149977660);
  uVar1 = FUN_144e991e0();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_144bab020();
  FUN_144baaa40(uVar1);
  FUN_144e98940("ssl3-sha1",0x8001,&DAT_149977674);
  FUN_144e98940("RSA-SHA1-2",0x8001,"RSA-SHA1");
  uVar1 = FUN_144bab030();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_144bab040();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_144bab050();
  FUN_144baaa40(uVar1);
  uVar1 = FUN_144bab060();
  FUN_144baaa40(uVar1);
  FUN_144ea3200();
  uVar1 = FUN_144ea4120();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  FUN_144bab5c0(FUN_144b974f0);
  DAT_14c77f004 = 1;
  return 1;
}



// FUNCTION 144b97750 FUN_144b97750 body=29 status=ok
// SIG undefined FUN_144b97750(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b97750(void)

{
  DAT_14c77f008 = FUN_144b97530();
  return;
}



// FUNCTION 144b97770 FUN_144b97770 body=33 status=ok
// SIG undefined FUN_144b97770(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b97770(void)

{
  FUN_144ea30a0();
  DAT_14c77f010 = 1;
  return;
}



// FUNCTION 144b977b0 FUN_144b977b0 body=52 status=ok
// SIG undefined FUN_144b977b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b977b0(void)

{
  FUN_144ba24f0(0x14,0xc5,0x42,"ssl\\ssl_lib.c",0xeae);
  return 0;
}



// FUNCTION 144b977f0 FUN_144b977f0 body=52 status=ok
// SIG undefined FUN_144b977f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b977f0(void)

{
  FUN_144ba24f0(0x14,0xc5,0x42,"ssl\\ssl_lib.c",0xeae);
  return 0;
}



// FUNCTION 144b97830 FUN_144b97830 body=52 status=ok
// SIG undefined FUN_144b97830(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b97830(void)

{
  FUN_144ba24f0(0x14,0xc5,0x42,"ssl\\ssl_lib.c",0xeae);
  return 0;
}



// FUNCTION 144b97870 FUN_144b97870 body=52 status=ok
// SIG undefined FUN_144b97870(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b97870(void)

{
  FUN_144ba24f0(0x14,0xc5,0x42,"ssl\\ssl_lib.c",0xeae);
  return 0;
}



// FUNCTION 144b978b0 FUN_144b978b0 body=52 status=ok
// SIG undefined FUN_144b978b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b978b0(void)

{
  FUN_144ba24f0(0x14,0xc5,0x42,"ssl\\ssl_lib.c",0xeae);
  return 0;
}



// FUNCTION 144b978f0 FUN_144b978f0 body=52 status=ok
// SIG undefined FUN_144b978f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b978f0(void)

{
  FUN_144ba24f0(0x14,0xc5,0x42,"ssl\\ssl_lib.c",0xeae);
  return 0;
}



// FUNCTION 144b97930 FUN_144b97930 body=52 status=ok
// SIG undefined FUN_144b97930(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b97930(void)

{
  FUN_144ba24f0(0x14,0xc5,0x42,"ssl\\ssl_lib.c",0xeae);
  return 0;
}



// FUNCTION 144b97970 FUN_144b97970 body=52 status=ok
// SIG undefined FUN_144b97970(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b97970(void)

{
  FUN_144ba24f0(0x14,0xc5,0x42,"ssl\\ssl_lib.c",0xeae);
  return 0;
}



// FUNCTION 144b979b0 FUN_144b979b0 body=7 status=ok
// SIG undefined FUN_144b979b0(void)

undefined4 FUN_144b979b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x5cc);
}



// FUNCTION 144b979c0 FUN_144b979c0 body=17 status=ok
// SIG undefined FUN_144b979c0(void)

uint FUN_144b979c0(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = ~param_2 & *(uint *)(param_1 + 0x120);
  *(uint *)(param_1 + 0x120) = uVar1;
  return uVar1;
}



// FUNCTION 144b979e0 FUN_144b979e0 body=15 status=ok
// SIG undefined FUN_144b979e0(void)

uint FUN_144b979e0(longlong param_1,uint param_2)

{
  param_2 = param_2 | *(uint *)(param_1 + 0x120);
  *(uint *)(param_1 + 0x120) = param_2;
  return param_2;
}



// FUNCTION 144b979f0 FUN_144b979f0 body=8 status=ok
// SIG undefined FUN_144b979f0(void)

void FUN_144b979f0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x148) = param_2;
  return;
}



// FUNCTION 144b97a00 FUN_144b97a00 body=204 status=ok
// SIG undefined FUN_144b97a00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144b97a00(longlong *param_1,undefined1 *param_2,longlong param_3,uint param_4,
             undefined1 *param_5,uint param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  if (param_4 != 0) {
    do {
      uVar6 = 0;
      if (param_6 != 0) {
        bVar1 = *(byte *)(uVar7 + param_3);
        do {
          bVar2 = param_5[uVar6];
          if ((bVar1 == bVar2) &&
             (iVar3 = memcmp((void *)((ulonglong)((int)uVar7 + 1) + param_3),
                             param_5 + ((int)uVar6 + 1),(ulonglong)bVar1), iVar3 == 0)) {
            uVar4 = 1;
            param_5 = (undefined1 *)(uVar7 + param_3);
            goto LAB_144b97a93;
          }
          uVar5 = (int)uVar6 + 1 + (uint)bVar2;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 < param_6);
      }
      uVar5 = (int)uVar7 + 1 + (uint)*(byte *)(uVar7 + param_3);
      uVar7 = (ulonglong)uVar5;
    } while (uVar5 < param_4);
  }
  uVar4 = 2;
LAB_144b97a93:
  *param_1 = (longlong)(param_5 + 1);
  *param_2 = *param_5;
  return uVar4;
}



// FUNCTION 144b97ad0 FUN_144b97ad0 body=322 status=ok
// SIG undefined FUN_144b97ad0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144b97ad0(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar4;
  ulonglong uVar3;
  
  uVar4 = 0x144b97adc;
  if ((param_3 == 0) || (param_2 == 0)) {
    FUN_144ea6530(*(undefined8 *)(param_1 + 0x270),"ssl\\ssl_lib.c",0xb3e);
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined8 *)(param_1 + 0x278) = 0;
    return 0;
  }
  if (1 < param_3) {
    uVar3 = 0;
    uVar2 = 0;
    if (param_3 != 0) {
      do {
        if (*(byte *)(uVar3 + param_2) == 0) {
          return 1;
        }
        uVar2 = (int)uVar3 + 1 + (uint)*(byte *)(uVar3 + param_2);
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < param_3);
    }
    if (uVar2 == param_3) {
      lVar1 = FUN_144ea6d10(param_2,(ulonglong)param_3,"ssl\\ssl_lib.c",0xb47);
      if (lVar1 != 0) {
        FUN_144ea6530(*(undefined8 *)(param_1 + 0x270),"ssl\\ssl_lib.c",0xb4c);
        *(longlong *)(param_1 + 0x270) = lVar1;
        *(ulonglong *)(param_1 + 0x278) = (ulonglong)param_3;
        return 0;
      }
      FUN_144ba24f0(0x14,0x157,0x41,"ssl\\ssl_lib.c",0xb49,uVar4);
      return 1;
    }
  }
  return 1;
}



// FUNCTION 144b97c20 FUN_144b97c20 body=322 status=ok
// SIG undefined FUN_144b97c20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144b97c20(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar4;
  ulonglong uVar3;
  
  uVar4 = 0x144b97c2c;
  if ((param_3 == 0) || (param_2 == 0)) {
    FUN_144ea6530(*(undefined8 *)(param_1 + 0x6e8),"ssl\\ssl_lib.c",0xb5e);
    *(undefined8 *)(param_1 + 0x6e8) = 0;
    *(undefined8 *)(param_1 + 0x6f0) = 0;
    return 0;
  }
  if (1 < param_3) {
    uVar3 = 0;
    uVar2 = 0;
    if (param_3 != 0) {
      do {
        if (*(byte *)(uVar3 + param_2) == 0) {
          return 1;
        }
        uVar2 = (int)uVar3 + 1 + (uint)*(byte *)(uVar3 + param_2);
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < param_3);
    }
    if (uVar2 == param_3) {
      lVar1 = FUN_144ea6d10(param_2,(ulonglong)param_3,"ssl\\ssl_lib.c",0xb67);
      if (lVar1 != 0) {
        FUN_144ea6530(*(undefined8 *)(param_1 + 0x6e8),"ssl\\ssl_lib.c",0xb6c);
        *(longlong *)(param_1 + 0x6e8) = lVar1;
        *(ulonglong *)(param_1 + 0x6f0) = (ulonglong)param_3;
        return 0;
      }
      FUN_144ba24f0(0x14,0x158,0x41,"ssl\\ssl_lib.c",0xb69,uVar4);
      return 1;
    }
  }
  return 1;
}



// FUNCTION 144b97d70 FUN_144b97d70 body=15 status=ok
// SIG undefined FUN_144b97d70(void)

void FUN_144b97d70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x260) = param_2;
  *(undefined8 *)(param_1 + 0x268) = param_3;
  return;
}



// FUNCTION 144b97d80 FUN_144b97d80 body=54 status=ok
// SIG undefined FUN_144b97d80(void)

void FUN_144b97d80(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  *param_2 = 0;
  if ((*(longlong *)(param_1 + 0xa8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3e0), *param_2 = lVar1, lVar1 != 0)) {
    *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 1000);
    return;
  }
  *param_3 = 0;
  return;
}



// FUNCTION 144b97dc0 FUN_144b97dc0 body=8 status=ok
// SIG undefined FUN_144b97dc0(void)

void FUN_144b97dc0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x388) = param_2;
  return;
}



// FUNCTION 144b97dd0 FUN_144b97dd0 body=244 status=ok
// SIG undefined FUN_144b97dd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144b97dd0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x38);
  }
  if (param_2 == 0) {
    if (iVar3 == 0) {
      iVar3 = FUN_144eafbd0();
      if (iVar3 == 0) {
        if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
             (iVar3 = **(int **)(param_1 + 8), iVar3 < 0x304)) || (iVar3 == 0x10000)) &&
           ((*(int *)(param_1 + 200) != 0 &&
            (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x208), lVar2 != 0)))) {
          return lVar2;
        }
      }
      else if (((*(longlong *)(param_1 + 0x638) == 0) &&
               (piVar1 = *(int **)(param_1 + 0x508), piVar1 != (int *)0x0)) && (*piVar1 != 0x304)) {
        return *(longlong *)(piVar1 + 0x82);
      }
    }
    else if ((*(int *)(param_1 + 200) != 0) &&
            ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0 ||
              (iVar3 = **(int **)(param_1 + 8), iVar3 < 0x304)) || (iVar3 == 0x10000)))) {
      return *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x208);
    }
    return *(longlong *)(param_1 + 0x638);
  }
  return 0;
}



// FUNCTION 144b97ed0 FUN_144b97ed0 body=116 status=ok
// SIG undefined FUN_144b97ed0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b97ed0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = FUN_144ea32a0(*param_1,param_1[3],param_1 + 1,param_1 + 2,param_2,param_1[0x27],
                        0x144b97eda);
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (lVar2 != 0) {
    iVar1 = FUN_144b9c480(lVar2);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_144ba24f0(0x14,0x10d,0xb9,"ssl\\ssl_lib.c",CONCAT44(uVar3,0xa1c));
  }
  return 0;
}



// FUNCTION 144b97f50 FUN_144b97f50 body=1040 status=ok
// SIG undefined FUN_144b97f50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144b97f50(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffffe8;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar7 = 0x144b97f65;
  plVar3 = (longlong *)0x0;
  if (param_1 == 0) {
    FUN_144ba24f0(0x14,0xa9,0xc4,"ssl\\ssl_lib.c",0xbdc,0x144b97f65);
    return (longlong *)0x0;
  }
  iVar1 = FUN_144b973d0(0x200000,0);
  if (iVar1 == 0) {
    return (longlong *)0x0;
  }
  iVar1 = FUN_144b9cf00();
  if (iVar1 < 0) {
    uVar5 = CONCAT44(uVar6,0xbe4);
    FUN_144ba24f0(0x14,0xa9,0x10d,"ssl\\ssl_lib.c",uVar5,uVar7);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  else {
    plVar3 = (longlong *)FUN_144ea6670(1000,"ssl\\ssl_lib.c",0xbe7);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = param_1;
      plVar3[0x25] = 0;
      *(undefined4 *)((longlong)plVar3 + 0x124) = 4;
      *(undefined4 *)(plVar3 + 9) = 2;
      plVar3[6] = 0x5000;
      uVar2 = (**(code **)(param_1 + 0xb8))();
      *(undefined4 *)((longlong)plVar3 + 0x4c) = uVar2;
      *(undefined4 *)((longlong)plVar3 + 0x94) = 1;
      lVar4 = FUN_144e985a0();
      plVar3[0x70] = lVar4;
      if (lVar4 == 0) {
        FUN_144ba24f0(0x14,0xa9,0x41,"ssl\\ssl_lib.c",CONCAT44(uVar6,0xbf6));
        FUN_144ea6530(plVar3,"ssl\\ssl_lib.c",0xbf7);
        return (longlong *)0x0;
      }
      plVar3[0x26] = 0x19000;
      *(undefined4 *)(plVar3 + 0x2b) = 0;
      lVar4 = FUN_144b9cf50();
      plVar3[0x27] = lVar4;
      if (lVar4 != 0) {
        lVar4 = FUN_144ea8530(FUN_144b9c500,FUN_144b9c560);
        plVar3[5] = lVar4;
        if (lVar4 != 0) {
          lVar4 = FUN_144bb3fc0();
          plVar3[4] = lVar4;
          if (lVar4 != 0) {
            lVar4 = FUN_144eae290();
            plVar3[0x35] = lVar4;
            if ((lVar4 != 0) &&
               (iVar1 = FUN_144ea3110(plVar3,
                                      "TLS_AES_256_GCM_SHA384:TLS_CHACHA20_POLY1305_SHA256:TLS_AES_128_GCM_SHA256"
                                     ), iVar1 != 0)) {
              uVar6 = 1;
              lVar4 = FUN_144ea32a0(*plVar3,plVar3[3],plVar3 + 1,plVar3 + 2,
                                    "ALL:!COMPLEMENTOFDEFAULT:!eNULL",plVar3[0x27]);
              if ((lVar4 == 0) || (iVar1 = FUN_144babbf0(plVar3[1]), iVar1 < 1)) {
                uVar5 = CONCAT44(uVar6,0xc13);
                uVar7 = 0xa1;
                goto LAB_144b97ff2;
              }
              lVar4 = FUN_144eaaef0();
              plVar3[0x33] = lVar4;
              if (lVar4 != 0) {
                lVar4 = FUN_144baab30("ssl3-md5");
                plVar3[0x1d] = lVar4;
                if (lVar4 == 0) {
                  uVar5 = CONCAT44(uVar6,0xc1c);
                  uVar7 = 0xf2;
                  goto LAB_144b97ff2;
                }
                lVar4 = FUN_144baab30("ssl3-sha1");
                plVar3[0x1e] = lVar4;
                if (lVar4 == 0) {
                  uVar5 = CONCAT44(uVar6,0xc20);
                  uVar7 = 0xf3;
                  goto LAB_144b97ff2;
                }
                lVar4 = FUN_144babca0();
                plVar3[0x22] = lVar4;
                if (lVar4 != 0) {
                  lVar4 = FUN_144babca0();
                  plVar3[0x23] = lVar4;
                  if ((lVar4 != 0) && (iVar1 = FUN_144ea5c20(1,plVar3,plVar3 + 0x1c), iVar1 != 0)) {
                    lVar4 = FUN_144ea6f20(0x40,"ssl\\ssl_lib.c",0xc2d);
                    plVar3[0x43] = lVar4;
                    if (lVar4 != 0) {
                      if ((*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x60) & 8) == 0) {
                        lVar4 = FUN_144ea3200();
                        plVar3[0x20] = lVar4;
                      }
                      plVar3[0x39] = 0x4000;
                      plVar3[0x38] = 0x4000;
                      iVar1 = FUN_144bac850(plVar3 + 0x41,0x10);
                      if (((iVar1 < 1) || (iVar1 = FUN_144bac8c0(plVar3[0x43],0x20), iVar1 < 1)) ||
                         (iVar1 = FUN_144bac8c0(plVar3[0x43] + 0x20,0x20), iVar1 < 1)) {
                        *(uint *)(plVar3 + 0x24) = *(uint *)(plVar3 + 0x24) | 0x4000;
                      }
                      iVar1 = FUN_144bac8c0(plVar3 + 0x54,0x20);
                      if ((0 < iVar1) && (iVar1 = FUN_144eae6f0(plVar3), iVar1 != 0)) {
                        *(uint *)(plVar3 + 0x24) = *(uint *)(plVar3 + 0x24) | 0x120004;
                        *(undefined4 *)(plVar3 + 0x47) = 0xffffffff;
                        *(undefined4 *)(plVar3 + 0x72) = 0;
                        *(undefined4 *)((longlong)plVar3 + 0x394) = 0x4000;
                        plVar3[0x79] = 2;
                        FUN_144ec4de0(plVar3);
                        return plVar3;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar5 = CONCAT44(uVar6,0xc8e);
  uVar7 = 0x41;
LAB_144b97ff2:
  FUN_144ba24f0(0x14,0xa9,uVar7,"ssl\\ssl_lib.c",uVar5);
  FUN_144b98360(plVar3);
  return (longlong *)0x0;
}



// FUNCTION 144b98360 FUN_144b98360 body=482 status=ok
// SIG undefined FUN_144b98360(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b98360(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x94);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      FUN_144eaaf50(*(undefined8 *)(param_1 + 0x198));
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x358),"ssl\\ssl_lib.c",0xae);
      *(undefined8 *)(param_1 + 0x358) = 0;
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x360),"ssl\\ssl_lib.c",0xb1);
      *(undefined8 *)(param_1 + 0x360) = 0;
      *(undefined1 *)(param_1 + 0x368) = 0;
      if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_144eb0b00(param_1,0);
      }
      FUN_144ea6040(1,param_1,param_1 + 0xe0);
      FUN_144ea8620(*(undefined8 *)(param_1 + 0x28));
      FUN_144bb4110(*(undefined8 *)(param_1 + 0x20));
      FUN_144eae320(*(undefined8 *)(param_1 + 0x1a8));
      FUN_144babdb0(*(undefined8 *)(param_1 + 8));
      FUN_144babdb0(*(undefined8 *)(param_1 + 0x10));
      FUN_144babdb0(*(undefined8 *)(param_1 + 0x18));
      FUN_144b9d4e0(*(undefined8 *)(param_1 + 0x138));
      FUN_144babe00(*(undefined8 *)(param_1 + 0x110),FUN_144eabc40);
      FUN_144babe00(*(undefined8 *)(param_1 + 0x118),FUN_144eabc40);
      FUN_144babe00(*(undefined8 *)(param_1 + 0xf8),FUN_144b47250);
      *(undefined8 *)(param_1 + 0x100) = 0;
      FUN_144babdb0(*(undefined8 *)(param_1 + 0x370));
      FUN_144eae820(param_1);
      FUN_144ec6930(*(undefined8 *)(param_1 + 0x1e0));
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x248),"ssl\\ssl_lib.c",0xcd5);
      FUN_144ea6530(*(undefined8 *)(param_1 + 600),"ssl\\ssl_lib.c",0xcd6);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x270),"ssl\\ssl_lib.c",0xcd8);
      FUN_144ea6f40(*(undefined8 *)(param_1 + 0x218),"ssl\\ssl_lib.c",0xcd9);
      FUN_144e98660(*(undefined8 *)(param_1 + 0x380));
      FUN_144ea6530(param_1,"ssl\\ssl_lib.c",0xcdd);
    }
  }
  return;
}



// FUNCTION 144b98550 FUN_144b98550 body=5 status=ok
// SIG undefined FUN_144b98550(void)

undefined8 FUN_144b98550(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 144b98560 FUN_144b98560 body=49 status=ok
// SIG undefined FUN_144b98560(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b98560(longlong param_1,undefined8 param_2)

{
  FUN_144bb4110(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 144b985a0 FUN_144b985a0 body=4 status=ok
// SIG undefined FUN_144b985a0(void)

undefined4 FUN_144b985a0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// FUNCTION 144b985b0 FUN_144b985b0 body=554 status=ok
// SIG undefined FUN_144b985b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b985b0(undefined4 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144b985bc;
  if (*(longlong *)(param_1 + 2) == 0) {
    FUN_144ba24f0(0x14,0xa4,0xbc,"ssl\\ssl_lib.c",0x244,0x144b985bc);
    return 0;
  }
  iVar3 = FUN_144eb11c0();
  if (iVar3 != 0) {
    FUN_144eb0d50(*(undefined8 *)(param_1 + 0x142));
    *(undefined8 *)(param_1 + 0x142) = 0;
  }
  FUN_144eb0d50(*(undefined8 *)(param_1 + 0x144));
  *(undefined8 *)(param_1 + 0x144) = 0;
  FUN_144ea6530(*(undefined8 *)(param_1 + 0x146),"ssl\\ssl_lib.c",0x24e);
  *(undefined8 *)(param_1 + 0x146) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  param_1[0x136] = 0;
  *(undefined8 *)(param_1 + 0x5d2) = 0;
  param_1[0x15c] = 0;
  param_1[0x32] = 0;
  param_1[0x11] = 0;
  if (param_1[0x1e0] == 0) {
    FUN_144eafc60(param_1);
    uVar1 = **(undefined4 **)(param_1 + 2);
    *param_1 = uVar1;
    param_1[0x17b] = uVar1;
    param_1[10] = 1;
    FUN_144ea7070(*(undefined8 *)(param_1 + 0x22));
    *(undefined8 *)(param_1 + 0x22) = 0;
    FUN_144b9b090(param_1);
    FUN_144ba5800(*(undefined8 *)(param_1 + 0x114));
    *(undefined8 *)(param_1 + 0x114) = 0;
    FUN_144ba5800(*(undefined8 *)(param_1 + 0x120));
    *(undefined8 *)(param_1 + 0x120) = 0;
    param_1[0x17a] = 0;
    param_1[0x1e1] = 0xffffffff;
    FUN_144ba5800(*(undefined8 *)(param_1 + 0x1ea));
    *(undefined8 *)(param_1 + 0x1ea) = 0;
    *(undefined8 *)(param_1 + 0x41) = 0xffffffffffffffff;
    FUN_144b47250(*(undefined8 *)(param_1 + 0x3e));
    *(undefined8 *)(param_1 + 0x3e) = 0;
    *(undefined8 *)(param_1 + 0x3c) = 0;
    FUN_144eab390(*(undefined8 *)(param_1 + 0x34),0);
    FUN_144ea6530(*(undefined8 *)(param_1 + 0x5da),"ssl\\ssl_lib.c",0x278);
    lVar2 = *(longlong *)(param_1 + 2);
    *(undefined8 *)(param_1 + 0x5da) = 0;
    *(undefined8 *)(param_1 + 0x5dc) = 0;
    if (lVar2 == **(longlong **)(param_1 + 0x166)) {
      iVar3 = (**(code **)(lVar2 + 0x18))(param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    else {
      (**(code **)(lVar2 + 0x20))();
      lVar2 = **(longlong **)(param_1 + 0x166);
      *(longlong *)(param_1 + 2) = lVar2;
      uVar4 = (**(code **)(lVar2 + 0x10))(param_1);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
    }
    FUN_144eb20e0(param_1 + 0x20c);
    return 1;
  }
  FUN_144ba24f0(0x14,0xa4,0x44,"ssl\\ssl_lib.c",0x259,uVar4);
  return 0;
}



// FUNCTION 144b987e0 FUN_144b987e0 body=27 status=ok
// SIG undefined FUN_144b987e0(void)

longlong FUN_144b987e0(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x508) == 0) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1e0), lVar1 == 0)) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 144b98800 FUN_144b98800 body=69 status=ok
// SIG undefined FUN_144b98800(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144b98800(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 local_res8 [8];
  
  local_res8[0] = 0xffffffff;
  lVar1 = FUN_144b9f470(*(undefined8 *)(param_1 + 0x10),0x100,param_3,param_4,0x144b9880a);
  if (lVar1 != 0) {
    FUN_144b9efc0(lVar1,0x69,0,local_res8);
  }
  return local_res8[0];
}



// FUNCTION 144b98850 FUN_144b98850 body=41 status=ok
// SIG undefined FUN_144b98850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144b98850(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0xa0))();
  uVar2 = 0x7fffffff;
  if (uVar1 < 0x7fffffff) {
    uVar2 = uVar1 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 144b98880 FUN_144b98880 body=153 status=ok
// SIG undefined FUN_144b98880(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b98880(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144b98895;
  uVar1 = FUN_144ea79a0();
  lVar2 = FUN_144b9e650(uVar1);
  if (lVar2 == 0) {
    FUN_144ba24f0(0x14,0xc0,7,"ssl\\ssl_lib.c",0x54f,uVar3);
    return 0;
  }
  FUN_144b9f250(lVar2,0x68,0,param_2);
  FUN_144b98980(param_1,lVar2,lVar2);
  return 1;
}



// FUNCTION 144b98920 FUN_144b98920 body=90 status=ok
// SIG undefined FUN_144b98920(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b98920(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_144b9f2e0(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  FUN_144b9f360(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = param_2;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_144b9f280(*(longlong *)(param_1 + 0x20),param_2);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  return;
}



// FUNCTION 144b98980 FUN_144b98980 body=299 status=ok
// SIG undefined FUN_144b98980(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b98980(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 == *(longlong *)(param_1 + 0x10)) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar1 = *(longlong *)(param_1 + 0x18);
    }
    else {
      lVar1 = FUN_144b9f4a0();
    }
    if (param_3 == lVar1) {
      return;
    }
  }
  if ((param_2 != 0) && (param_2 == param_3)) {
    FUN_144b9e910(param_2);
  }
  if (param_2 == *(longlong *)(param_1 + 0x10)) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      uVar2 = FUN_144b9f2e0(*(undefined8 *)(param_1 + 0x18));
      *(undefined8 *)(param_1 + 0x18) = uVar2;
    }
    FUN_144b9f360(*(undefined8 *)(param_1 + 0x18));
    *(longlong *)(param_1 + 0x18) = param_3;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      uVar2 = FUN_144b9f280(*(longlong *)(param_1 + 0x20),param_3);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      return;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar1 = *(longlong *)(param_1 + 0x18);
    }
    else {
      lVar1 = FUN_144b9f4a0();
    }
    if (param_3 == lVar1) {
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar3 = *(longlong *)(param_1 + 0x18);
      }
      else {
        lVar3 = FUN_144b9f4a0();
      }
      if (lVar1 != lVar3) {
        FUN_144b9f360(*(undefined8 *)(param_1 + 0x10));
        *(longlong *)(param_1 + 0x10) = param_2;
        return;
      }
    }
    FUN_144b9f360(*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = param_2;
    FUN_144b98920(param_1,param_3);
  }
  return;
}



// FUNCTION 144b98ab0 FUN_144b98ab0 body=5 status=ok
// SIG undefined FUN_144b98ab0(void)

undefined8 FUN_144b98ab0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 144b98ac0 FUN_144b98ac0 body=43 status=ok
// SIG undefined FUN_144b98ac0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b98ac0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_144b9f4a0(*(longlong *)(param_1 + 0x20));
    return uVar1;
  }
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 144b98af0 FUN_144b98af0 body=135 status=ok
// SIG undefined FUN_144b98af0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b98af0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = FUN_144ea32a0(**(undefined8 **)(param_1 + 0x598),*(undefined8 *)(param_1 + 0x128),
                        param_1 + 0x118,param_1 + 0x120,param_2,*(undefined8 *)(param_1 + 0x488),
                        0x144b98afa);
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (lVar2 != 0) {
    iVar1 = FUN_144b9c480(lVar2);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_144ba24f0(0x14,0x10f,0xb9,"ssl\\ssl_lib.c",CONCAT44(uVar3,0xa2e));
  }
  return 0;
}



// FUNCTION 144b98b80 FUN_144b98b80 body=19 status=ok
// SIG undefined FUN_144b98b80(void)

void FUN_144b98b80(longlong param_1,undefined4 param_2,longlong param_3)

{
  *(undefined4 *)(param_1 + 0x558) = param_2;
  if (param_3 != 0) {
    *(longlong *)(param_1 + 0x560) = param_3;
  }
  return;
}



// FUNCTION 144b98ba0 FUN_144b98ba0 body=178 status=ok
// SIG undefined FUN_144b98ba0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b98ba0(undefined4 *param_1,void *param_2,uint param_3)

{
  undefined1 auStack_2a8 [32];
  undefined4 local_288 [84];
  ulonglong local_138;
  undefined1 local_130 [280];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144b98bac;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (param_3 < 0x21) {
    local_288[0] = *param_1;
    local_138 = (ulonglong)param_3;
    memcpy(local_130,param_2,local_138);
    FUN_144e98600(*(undefined8 *)(*(longlong *)(param_1 + 0x1da) + 0x380));
    FUN_144ea8820(*(undefined8 *)(*(longlong *)(param_1 + 0x1da) + 0x28),local_288);
    FUN_144e98640(*(undefined8 *)(*(longlong *)(param_1 + 0x1da) + 0x380));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_2a8);
}



// FUNCTION 144b98c60 FUN_144b98c60 body=69 status=ok
// SIG undefined FUN_144b98c60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144b98c60(longlong param_1)

{
  longlong lVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x508) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1b8), lVar1 != 0)) {
    FUN_144bb6050(lVar1);
    return lVar1;
  }
  return 0;
}



// FUNCTION 144b98cb0 FUN_144b98cb0 body=28 status=ok
// SIG undefined FUN_144b98cb0(void)

undefined8 FUN_144b98cb0(longlong param_1)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x508) != 0)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1c0);
  }
  return 0;
}



// FUNCTION 144b98cd0 FUN_144b98cd0 body=7 status=ok
// SIG undefined FUN_144b98cd0(void)

undefined4 FUN_144b98cd0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x158);
}



// FUNCTION 144b98ce0 FUN_144b98ce0 body=14 status=ok
// SIG undefined FUN_144b98ce0(void)

void FUN_144b98ce0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 0x158) = param_2;
  *(undefined8 *)(param_1 + 0x188) = param_3;
  return;
}



// FUNCTION 144b98cf0 FUN_144b98cf0 body=8 status=ok
// SIG undefined FUN_144b98cf0(void)

void FUN_144b98cf0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  return;
}



// FUNCTION 144b98d00 FUN_144b98d00 body=8 status=ok
// SIG undefined FUN_144b98d00(void)

void FUN_144b98d00(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xb0) = param_2;
  return;
}



// FUNCTION 144b98d10 FUN_144b98d10 body=116 status=ok
// SIG undefined FUN_144b98d10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b98d10(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)**(longlong **)(param_1 + 0x138);
    if (lVar1 != 0) {
      if (((longlong *)**(longlong **)(param_1 + 0x138))[1] != 0) {
        uVar2 = FUN_144bb4fc0(lVar1);
        return uVar2;
      }
      uVar3 = 0x64d;
      uVar2 = 0xbe;
      goto LAB_144b98d67;
    }
  }
  uVar3 = 0x649;
  uVar2 = 0xb1;
LAB_144b98d67:
  FUN_144ba24f0(0x14,0xa8,uVar2,"ssl\\ssl_lib.c",uVar3);
  return 0;
}



// FUNCTION 144b98d90 FUN_144b98d90 body=90 status=ok
// SIG undefined FUN_144b98d90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b98d90(longlong param_1,void *param_2,uint param_3)

{
  if (0x20 < param_3) {
    FUN_144ba24f0(0x14,0xdb,0x111,"ssl\\ssl_lib.c",0x373);
    return 0;
  }
  *(ulonglong *)(param_1 + 0x160) = (ulonglong)param_3;
  memcpy((void *)(param_1 + 0x168),param_2,(ulonglong)param_3);
  return 1;
}



// FUNCTION 144b98df0 FUN_144b98df0 body=1425 status=ok
// SIG undefined FUN_144b98df0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144b98df0(longlong *param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  void *_Dst;
  undefined8 uVar7;
  
  uVar7 = 0x144b98dfc;
  if (param_1 == (longlong *)0x0) {
    FUN_144ba24f0(0x14,0xba,0xc3,"ssl\\ssl_lib.c",0x2ab,0x144b98dfc);
    return 0;
  }
  if (*param_1 == 0) {
    FUN_144ba24f0(0x14,0xba,0xe4,"ssl\\ssl_lib.c",0x2af,0x144b98dfc);
    return 0;
  }
  lVar5 = FUN_144ea6670(0x1778,"ssl\\ssl_lib.c",0x2b3);
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x5c8) = 1;
    lVar6 = FUN_144e985a0();
    *(longlong *)(lVar5 + 0x1738) = lVar6;
    if (lVar6 == 0) {
      FUN_144ea6530(lVar5,"ssl\\ssl_lib.c",0x2ba);
      lVar5 = 0;
    }
    else {
      FUN_144eb20b0(lVar5 + 0x830,lVar5);
      *(int *)(lVar5 + 0x5cc) = (int)param_1[0x24];
      *(undefined4 *)(lVar5 + 0x10c) = *(undefined4 *)((longlong)param_1 + 0x36c);
      *(int *)(lVar5 + 0x5d4) = (int)param_1[0x25];
      *(undefined4 *)(lVar5 + 0x5d8) = *(undefined4 *)((longlong)param_1 + 300);
      *(undefined4 *)(lVar5 + 0x5d0) = *(undefined4 *)((longlong)param_1 + 0x124);
      *(longlong *)(lVar5 + 0x5e0) = param_1[0x26];
      *(int *)(lVar5 + 0x1710) = (int)param_1[0x72];
      *(undefined4 *)(lVar5 + 0x1714) = *(undefined4 *)((longlong)param_1 + 0x394);
      *(longlong *)(lVar5 + 0x1740) = param_1[0x79];
      *(int *)(lVar5 + 0x78c) = (int)param_1[0x7c];
      lVar6 = FUN_144bac2a0(param_1[3]);
      *(longlong *)(lVar5 + 0x128) = lVar6;
      if (lVar6 != 0) {
        lVar6 = FUN_144b9d030(param_1[0x27]);
        *(longlong *)(lVar5 + 0x488) = lVar6;
        if (lVar6 != 0) {
          *(int *)(lVar5 + 0x838) = (int)param_1[0x28];
          *(longlong *)(lVar5 + 0xb8) = param_1[0x29];
          *(longlong *)(lVar5 + 0xc0) = param_1[0x2a];
          *(int *)(lVar5 + 0x558) = (int)param_1[0x2b];
          *(longlong *)(lVar5 + 0x828) = param_1[0x6f];
          *(longlong *)(lVar5 + 0x1720) = param_1[0x73];
          *(longlong *)(lVar5 + 0x1728) = param_1[0x74];
          *(longlong *)(lVar5 + 0x1730) = param_1[0x75];
          uVar1 = param_1[0x2c];
          *(ulonglong *)(lVar5 + 0x4e0) = uVar1;
          if (uVar1 < 0x21) {
            uVar2 = *(undefined4 *)((longlong)param_1 + 0x16c);
            lVar6 = param_1[0x2e];
            uVar3 = *(undefined4 *)((longlong)param_1 + 0x174);
            *(int *)(lVar5 + 0x4e8) = (int)param_1[0x2d];
            *(undefined4 *)(lVar5 + 0x4ec) = uVar2;
            *(int *)(lVar5 + 0x4f0) = (int)lVar6;
            *(undefined4 *)(lVar5 + 0x4f4) = uVar3;
            uVar2 = *(undefined4 *)((longlong)param_1 + 0x17c);
            lVar6 = param_1[0x30];
            uVar3 = *(undefined4 *)((longlong)param_1 + 0x184);
            *(int *)(lVar5 + 0x4f8) = (int)param_1[0x2f];
            *(undefined4 *)(lVar5 + 0x4fc) = uVar2;
            *(int *)(lVar5 + 0x500) = (int)lVar6;
            *(undefined4 *)(lVar5 + 0x504) = uVar3;
            *(longlong *)(lVar5 + 0x560) = param_1[0x31];
            *(longlong *)(lVar5 + 0x528) = param_1[0x32];
            lVar6 = FUN_144eaaef0();
            *(longlong *)(lVar5 + 0xd0) = lVar6;
            if (lVar6 != 0) {
              FUN_144eaaff0(lVar6,param_1[0x33]);
              *(int *)(lVar5 + 0x40) = (int)param_1[0x34];
              *(undefined1 *)(lVar5 + 0x72c) = *(undefined1 *)((longlong)param_1 + 0x23c);
              *(longlong *)(lVar5 + 0x5f8) = param_1[0x39];
              *(longlong *)(lVar5 + 0x5f0) = param_1[0x38];
              uVar1 = param_1[0x3a];
              *(ulonglong *)(lVar5 + 0x600) = uVar1;
              if (1 < uVar1) {
                *(undefined4 *)(lVar5 + 0x838) = 1;
              }
              if (param_1[0x3b] != 0) {
                FUN_144eb20a0(lVar5);
              }
              LOCK();
              *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
              UNLOCK();
              *(longlong **)(lVar5 + 0x598) = param_1;
              *(undefined8 *)(lVar5 + 0x628) = 0;
              *(undefined8 *)(lVar5 + 0x630) = 0;
              *(undefined4 *)(lVar5 + 0x678) = 0;
              *(int *)(lVar5 + 0x640) = (int)param_1[0x47];
              *(undefined4 *)(lVar5 + 0x654) = 0;
              *(undefined8 *)(lVar5 + 0x658) = 0;
              *(undefined8 *)(lVar5 + 0x660) = 0;
              *(undefined8 *)(lVar5 + 0x668) = 0;
              *(undefined8 *)(lVar5 + 0x670) = 0;
              LOCK();
              *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
              UNLOCK();
              *(longlong **)(lVar5 + 0x768) = param_1;
              if (param_1[0x49] != 0) {
                lVar6 = FUN_144ea6d10(param_1[0x49],param_1[0x48],"ssl\\ssl_lib.c",0x30d);
                *(longlong *)(lVar5 + 0x688) = lVar6;
                if (lVar6 == 0) {
                  *(undefined8 *)(lVar5 + 0x680) = 0;
                  goto LAB_144b98ec2;
                }
                *(longlong *)(lVar5 + 0x680) = param_1[0x48];
              }
              if (param_1[0x4b] != 0) {
                lVar6 = FUN_144ea6d10(param_1[0x4b],param_1[0x4a] * 2,"ssl\\ssl_lib.c",0x319);
                *(longlong *)(lVar5 + 0x6a8) = lVar6;
                if (lVar6 == 0) {
                  *(undefined8 *)(lVar5 + 0x6a0) = 0;
                  goto LAB_144b98ec2;
                }
                *(longlong *)(lVar5 + 0x6a0) = param_1[0x4a];
              }
              *(undefined8 *)(lVar5 + 0x6f8) = 0;
              if (*(longlong *)(*(longlong *)(lVar5 + 0x598) + 0x270) != 0) {
                _Dst = (void *)FUN_144ea64e0(*(undefined8 *)(*(longlong *)(lVar5 + 0x598) + 0x278),
                                             "ssl\\ssl_lib.c",0x326);
                *(void **)(lVar5 + 0x6e8) = _Dst;
                if (_Dst == (void *)0x0) {
                  *(undefined8 *)(lVar5 + 0x6f0) = 0;
                  goto LAB_144b98ec2;
                }
                memcpy(_Dst,*(void **)(*(longlong *)(lVar5 + 0x598) + 0x270),
                       *(size_t *)(*(longlong *)(lVar5 + 0x598) + 0x278));
                *(undefined8 *)(lVar5 + 0x6f0) =
                     *(undefined8 *)(*(longlong *)(lVar5 + 0x598) + 0x278);
              }
              *(undefined8 *)(lVar5 + 0x5a0) = 0;
              *(undefined4 *)(lVar5 + 0x5a8) = 0;
              *(longlong *)(lVar5 + 0x16e8) = param_1[0x15];
              *(longlong *)(lVar5 + 0x16f0) = param_1[0x16];
              lVar6 = *param_1;
              *(longlong *)(lVar5 + 8) = lVar6;
              *(undefined4 *)(lVar5 + 0x784) = 0xffffffff;
              *(longlong *)(lVar5 + 0x1758) = param_1[0x7a];
              *(longlong *)(lVar5 + 0x1760) = param_1[0x7b];
              iVar4 = (**(code **)(lVar6 + 0x10))(lVar5);
              if (iVar4 != 0) {
                *(uint *)(lVar5 + 0x38) = (uint)(*(code **)(*param_1 + 0x28) != FUN_144b97970);
                iVar4 = FUN_144b985b0(lVar5);
                if ((iVar4 != 0) && (iVar4 = FUN_144ea5c20(0,lVar5,lVar5 + 0x5b0), iVar4 != 0)) {
                  *(longlong *)(lVar5 + 0x578) = param_1[0x58];
                  *(longlong *)(lVar5 + 0x580) = param_1[0x59];
                  *(longlong *)(lVar5 + 0x588) = param_1[0x5a];
                  *(longlong *)(lVar5 + 0x590) = param_1[0x5b];
                  *(undefined8 *)(lVar5 + 0x16f8) = 0;
                  iVar4 = FUN_144b9aba0(lVar5,param_1[0x36],param_1[0x37]);
                  if (iVar4 != 0) {
                    return lVar5;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_144b98ec2:
  FUN_144b993a0(lVar5);
  FUN_144ba24f0(0x14,0xba,0x41,"ssl\\ssl_lib.c",0x359,uVar7);
  return 0;
}



// FUNCTION 144b99390 FUN_144b99390 body=8 status=ok
// SIG undefined FUN_144b99390(void)

undefined8 FUN_144b99390(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



// FUNCTION 144b993a0 FUN_144b993a0 body=930 status=ok
// SIG undefined FUN_144b993a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b993a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x5c8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      FUN_144eaaf50(*(undefined8 *)(param_1 + 0xd0));
      FUN_144b9c200(param_1 + 0xd8);
      FUN_144ea6040(0,param_1,param_1 + 0x5b0);
      if (*(longlong *)(param_1 + 0x20) != 0) {
        uVar3 = FUN_144b9f2e0(*(undefined8 *)(param_1 + 0x18));
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        FUN_144b9e7b0(*(undefined8 *)(param_1 + 0x20));
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      FUN_144b9f360(*(undefined8 *)(param_1 + 0x18));
      FUN_144b9f360(*(undefined8 *)(param_1 + 0x10));
      FUN_144ea7070(*(undefined8 *)(param_1 + 0x88));
      FUN_144babdb0(*(undefined8 *)(param_1 + 0x118));
      FUN_144babdb0(*(undefined8 *)(param_1 + 0x120));
      FUN_144babdb0(*(undefined8 *)(param_1 + 0x128));
      FUN_144babdb0(*(undefined8 *)(param_1 + 0x110));
      if (*(longlong *)(param_1 + 0x508) != 0) {
        FUN_144eb11c0(param_1);
        FUN_144eb0d50(*(undefined8 *)(param_1 + 0x508));
      }
      FUN_144eb0d50(*(undefined8 *)(param_1 + 0x510));
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x518),"ssl\\ssl_lib.c",0x49e);
      FUN_144b9b090(param_1);
      FUN_144ba5800(*(undefined8 *)(param_1 + 0x450));
      *(undefined8 *)(param_1 + 0x450) = 0;
      FUN_144ba5800(*(undefined8 *)(param_1 + 0x480));
      *(undefined8 *)(param_1 + 0x480) = 0;
      FUN_144b9d4e0(*(undefined8 *)(param_1 + 0x488));
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x1768),"ssl\\ssl_lib.c",0x4a3);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x638),"ssl\\ssl_lib.c",0x4a6);
      FUN_144b98360(*(undefined8 *)(param_1 + 0x768));
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x688),"ssl\\ssl_lib.c",0x4a9);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x698),"ssl\\ssl_lib.c",0x4aa);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x6a8),"ssl\\ssl_lib.c",0x4ab);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x6b8),"ssl\\ssl_lib.c",0x4ac);
      FUN_144babe00(*(undefined8 *)(param_1 + 0x660),FUN_144eac4f0);
      FUN_144babe00(*(undefined8 *)(param_1 + 0x658),FUN_144ec6750);
      FUN_144ead2d0(*(undefined8 *)(param_1 + 0x758));
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x648),"ssl\\ssl_lib.c",0x4b4);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x668),"ssl\\ssl_lib.c",0x4b6);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x6e8),"ssl\\ssl_lib.c",0x4b7);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x718),"ssl\\ssl_lib.c",0x4b8);
      if (*(longlong *)(param_1 + 0x738) != 0) {
        FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0x738) + 0x288),"ssl\\ssl_lib.c",0x4ba
                     );
      }
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x738),"ssl\\ssl_lib.c",0x4bb);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x790),"ssl\\ssl_lib.c",0x4bc);
      FUN_144ba5800(*(undefined8 *)(param_1 + 0x7a8));
      FUN_144babe00(*(undefined8 *)(param_1 + 0x5b8),FUN_144eabc40);
      FUN_144babe00(*(undefined8 *)(param_1 + 0x5c0),FUN_144eabc40);
      FUN_144babe00(*(undefined8 *)(param_1 + 0x5a0),FUN_144b47250);
      if (*(longlong *)(param_1 + 8) != 0) {
        (**(code **)(*(longlong *)(param_1 + 8) + 0x20))(param_1);
      }
      FUN_144eb2190(param_1 + 0x830);
      FUN_144b98360(*(undefined8 *)(param_1 + 0x598));
      FUN_144eac6a0(*(undefined8 *)(param_1 + 0x1700));
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x6f8),"ssl\\ssl_lib.c",0x4ce);
      FUN_144babdb0(*(undefined8 *)(param_1 + 0x770));
      FUN_144e98660(*(undefined8 *)(param_1 + 0x1738));
      FUN_144ea6530(param_1,"ssl\\ssl_lib.c",0x4d7);
    }
  }
  return;
}



// FUNCTION 144b99750 FUN_144b99750 body=43 status=ok
// SIG undefined FUN_144b99750(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b99750(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_144b9a790();
  }
  FUN_144b9a370(param_1);
  return;
}



// FUNCTION 144b99780 FUN_144b99780 body=43 status=ok
// SIG undefined FUN_144b99780(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b99780(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_144b9a720();
  }
  FUN_144b9a370(param_1);
  return;
}



// FUNCTION 144b997b0 FUN_144b997b0 body=83 status=ok
// SIG undefined FUN_144b997b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144b997b0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_res20 [2];
  
  if (param_3 < 0) {
    FUN_144ba24f0(0x14,0xdf,0x10f,"ssl\\ssl_lib.c",0x703);
    return -1;
  }
  iVar1 = FUN_144b9ae00(param_1,param_2,(longlong)param_3,local_res20);
  if (0 < iVar1) {
    iVar1 = local_res20[0];
  }
  return iVar1;
}



// FUNCTION 144b99810 FUN_144b99810 body=83 status=ok
// SIG undefined FUN_144b99810(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144b99810(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_res20 [2];
  
  if (param_3 < 0) {
    FUN_144ba24f0(0x14,0xd0,0x10f,"ssl\\ssl_lib.c",0x7c2);
    return -1;
  }
  iVar1 = FUN_144b9af30(param_1,param_2,(longlong)param_3,local_res20);
  if (0 < iVar1) {
    iVar1 = local_res20[0];
  }
  return iVar1;
}



// FUNCTION 144b99870 FUN_144b99870 body=718 status=ok
// SIG undefined FUN_144b99870(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144b99870(longlong param_1,undefined8 param_2,uint param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(int)param_3;
  switch((int)param_2) {
  case 0x10:
    *(longlong **)(param_1 + 0xc0) = param_4;
    return 1;
  default:
                    /* WARNING: Could not recover jumptable at 0x000144b99b31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*(longlong *)(param_1 + 8) + 0x80))(param_1,param_2,param_3);
    return uVar4;
  case 0x21:
    param_3 = *(uint *)(param_1 + 0x5d0) | param_3;
    *(uint *)(param_1 + 0x5d0) = param_3;
    return (ulonglong)param_3;
  case 0x28:
    return (ulonglong)*(uint *)(param_1 + 0x838);
  case 0x29:
    uVar3 = *(uint *)(param_1 + 0x838);
    *(uint *)(param_1 + 0x838) = param_3;
    return (ulonglong)uVar3;
  case 0x32:
    return (ulonglong)*(uint *)(param_1 + 0x5e0);
  case 0x33:
    if (-1 < (int)param_3) {
      uVar3 = *(uint *)(param_1 + 0x5e0);
      *(ulonglong *)(param_1 + 0x5e0) = uVar4;
      return (ulonglong)uVar3;
    }
    break;
  case 0x34:
    if (param_3 - 0x200 < 0x3e01) {
      *(ulonglong *)(param_1 + 0x5f8) = uVar4;
      if (uVar4 < *(ulonglong *)(param_1 + 0x5f0)) {
        *(ulonglong *)(param_1 + 0x5f0) = uVar4;
      }
      return 1;
    }
    break;
  case 0x4c:
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      return (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa8) + 0x3d8);
    }
    break;
  case 0x4e:
    uVar3 = ~param_3 & *(uint *)(param_1 + 0x5d0);
    *(uint *)(param_1 + 0x5d0) = uVar3;
    return (ulonglong)uVar3;
  case 99:
    param_3 = *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) | param_3;
    *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) = param_3;
    return (ulonglong)param_3;
  case 100:
    uVar3 = ~param_3 & *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c);
    *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) = uVar3;
    return (ulonglong)uVar3;
  case 0x6e:
    if (param_4 == (longlong *)0x0) {
      return 2;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2a8);
    if (lVar1 != 0) {
      *param_4 = lVar1;
      return (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa8) + 0x2b0);
    }
    break;
  case 0x7a:
    if (((*(longlong *)(param_1 + 0x508) != 0) && (iVar2 = FUN_144eafbc0(param_1), iVar2 == 0)) &&
       (iVar2 = FUN_144eafd30(param_1), iVar2 == 0)) {
      return (ulonglong)(*(byte *)(*(longlong *)(param_1 + 0x508) + 0x260) & 1);
    }
    return 0xffffffff;
  case 0x7b:
    iVar2 = FUN_144b9c270(param_3,*(undefined4 *)(param_1 + 0x5d8));
    if ((iVar2 != 0) &&
       (iVar2 = FUN_144eb5480(*(undefined4 *)**(undefined8 **)(param_1 + 0x598),uVar4 & 0xffffffff,
                              param_1 + 0x5d4), iVar2 != 0)) {
      return 1;
    }
    break;
  case 0x7c:
    iVar2 = FUN_144b9c270(*(undefined4 *)(param_1 + 0x5d4),param_3);
    if ((iVar2 != 0) &&
       (iVar2 = FUN_144eb5480(*(undefined4 *)**(undefined8 **)(param_1 + 0x598)), iVar2 != 0)) {
      return 1;
    }
    break;
  case 0x7d:
    if ((uVar4 <= *(ulonglong *)(param_1 + 0x5f8)) && (param_3 != 0)) {
      *(ulonglong *)(param_1 + 0x5f0) = uVar4;
      return 1;
    }
    break;
  case 0x7e:
    if (param_3 - 1 < 0x20) {
      *(ulonglong *)(param_1 + 0x600) = uVar4;
      if (1 < (int)param_3) {
        *(undefined4 *)(param_1 + 0x838) = 1;
        return 1;
      }
      return 1;
    }
    break;
  case 0x82:
    return (ulonglong)*(uint *)(param_1 + 0x5d4);
  case 0x83:
    return (ulonglong)*(uint *)(param_1 + 0x5d8);
  }
  return 0;
}



// FUNCTION 144b99c10 FUN_144b99c10 body=770 status=ok
// SIG undefined FUN_144b99c10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144b99c10(longlong *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(int)param_3;
  iVar1 = (int)param_2;
  if (param_1 == (longlong *)0x0) {
    if (iVar1 == 0x5c) {
      uVar3 = FUN_144eba770(0,0,param_4);
      return uVar3;
    }
    if ((iVar1 - 0x62U & 0xfffffffb) == 0) {
      uVar3 = FUN_144ebb340(0,param_4,0);
      return uVar3;
    }
  }
  else {
    switch(iVar1) {
    case 0x10:
      param_1[0x2a] = param_4;
      return 1;
    default:
                    /* WARNING: Could not recover jumptable at 0x000144b99f0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x88))(param_1,param_2,param_3);
      return uVar3;
    case 0x14:
      uVar3 = FUN_144ea89e0(param_1[5]);
      return uVar3;
    case 0x15:
      return (ulonglong)*(uint *)(param_1 + 0xd);
    case 0x16:
      return (ulonglong)*(uint *)(param_1 + 0xe);
    case 0x17:
      return (ulonglong)*(uint *)((longlong)param_1 + 0x6c);
    case 0x18:
      return (ulonglong)*(uint *)((longlong)param_1 + 0x74);
    case 0x19:
      return (ulonglong)*(uint *)((longlong)param_1 + 0x7c);
    case 0x1a:
      return (ulonglong)*(uint *)(param_1 + 0xf);
    case 0x1b:
      return (ulonglong)*(uint *)((longlong)param_1 + 0x8c);
    case 0x1c:
      return (ulonglong)*(uint *)(param_1 + 0x12);
    case 0x1d:
      return (ulonglong)*(uint *)(param_1 + 0x10);
    case 0x1e:
      return (ulonglong)*(uint *)((longlong)param_1 + 0x84);
    case 0x1f:
      return (ulonglong)*(uint *)(param_1 + 0x11);
    case 0x21:
      param_3 = *(uint *)((longlong)param_1 + 0x124) | param_3;
      *(uint *)((longlong)param_1 + 0x124) = param_3;
      return (ulonglong)param_3;
    case 0x28:
      return (ulonglong)*(uint *)(param_1 + 0x28);
    case 0x29:
      uVar2 = *(uint *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = param_3;
      return (ulonglong)uVar2;
    case 0x2a:
      if (-1 < (int)param_3) {
        uVar2 = *(uint *)(param_1 + 6);
        param_1[6] = uVar3;
        return (ulonglong)uVar2;
      }
      break;
    case 0x2b:
      return (ulonglong)*(uint *)(param_1 + 6);
    case 0x2c:
      uVar2 = *(uint *)(param_1 + 9);
      *(uint *)(param_1 + 9) = param_3;
      return (ulonglong)uVar2;
    case 0x2d:
      return (ulonglong)*(uint *)(param_1 + 9);
    case 0x32:
      return (ulonglong)*(uint *)(param_1 + 0x26);
    case 0x33:
      if (-1 < (int)param_3) {
        uVar2 = *(uint *)(param_1 + 0x26);
        param_1[0x26] = uVar3;
        return (ulonglong)uVar2;
      }
      break;
    case 0x34:
      if (param_3 - 0x200 < 0x3e01) {
        param_1[0x39] = uVar3;
        if (uVar3 < (ulonglong)param_1[0x38]) {
          param_1[0x38] = uVar3;
        }
        return 1;
      }
      break;
    case 0x4e:
      uVar2 = ~param_3 & *(uint *)((longlong)param_1 + 0x124);
      *(uint *)((longlong)param_1 + 0x124) = uVar2;
      return (ulonglong)uVar2;
    case 99:
      param_3 = *(uint *)(param_1[0x27] + 0x1c) | param_3;
      *(uint *)(param_1[0x27] + 0x1c) = param_3;
      return (ulonglong)param_3;
    case 100:
      uVar2 = ~param_3 & *(uint *)(param_1[0x27] + 0x1c);
      *(uint *)(param_1[0x27] + 0x1c) = uVar2;
      return (ulonglong)uVar2;
    case 0x7b:
      iVar1 = FUN_144b9c270(param_3,*(undefined4 *)((longlong)param_1 + 300),
                            &IMAGE_DOS_HEADER_140000000,param_4,0x144b99c1a);
      if ((iVar1 != 0) &&
         (iVar1 = FUN_144eb5480(*(undefined4 *)*param_1,uVar3 & 0xffffffff,param_1 + 0x25),
         iVar1 != 0)) {
        return 1;
      }
      break;
    case 0x7c:
      iVar1 = FUN_144b9c270((int)param_1[0x25],param_3,&IMAGE_DOS_HEADER_140000000,param_4,
                            0x144b99c1a);
      if ((iVar1 != 0) && (iVar1 = FUN_144eb5480(*(undefined4 *)*param_1), iVar1 != 0)) {
        return 1;
      }
      break;
    case 0x7d:
      if ((uVar3 <= (ulonglong)param_1[0x39]) && (param_3 != 0)) {
        param_1[0x38] = uVar3;
        return 1;
      }
      break;
    case 0x7e:
      if (param_3 - 1 < 0x20) {
        param_1[0x3a] = uVar3;
        return 1;
      }
      break;
    case 0x82:
      return (ulonglong)*(uint *)(param_1 + 0x25);
    case 0x83:
      return (ulonglong)*(uint *)((longlong)param_1 + 300);
    }
  }
  return 0;
}



// FUNCTION 144b9a010 FUN_144b9a010 body=49 status=ok
// SIG undefined FUN_144b9a010(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9a010(longlong *param_1,int param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0xf) {
                    /* WARNING: Could not recover jumptable at 0x000144b9a029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0xd8))();
    return uVar1;
  }
  param_1[0x29] = param_3;
  return 1;
}



// FUNCTION 144b9a050 FUN_144b9a050 body=459 status=ok
// SIG undefined FUN_144b9a050(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144b9a050(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (0 < param_2) {
    return 0;
  }
  uVar1 = FUN_144ba2690();
  if (uVar1 != 0) {
    uVar4 = 1;
    if ((uVar1 & 0xff000000) == 0x2000000) {
      uVar4 = 5;
    }
    return uVar4;
  }
  if (*(int *)(param_1 + 0x28) == 3) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    iVar2 = FUN_144b9e630(uVar3,1);
    if (iVar2 != 0) {
      return 2;
    }
    iVar2 = FUN_144b9e630(uVar3,2);
    if (iVar2 != 0) {
      return 3;
    }
    iVar2 = FUN_144b9e630(uVar3,4);
    if (iVar2 != 0) goto LAB_144b9a147;
  }
  if (*(int *)(param_1 + 0x28) == 2) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    iVar2 = FUN_144b9e630(uVar3,2);
    if (iVar2 != 0) {
      return 3;
    }
    iVar2 = FUN_144b9e630(uVar3,1);
    if (iVar2 != 0) {
      return 2;
    }
    iVar2 = FUN_144b9e630(uVar3,4);
    if (iVar2 != 0) {
LAB_144b9a147:
      iVar2 = FUN_144b9f4b0(uVar3);
      if (iVar2 != 2) {
        uVar4 = 5;
        if (iVar2 == 3) {
          uVar4 = 8;
        }
        return uVar4;
      }
      return 7;
    }
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == 4) {
    return 4;
  }
  if (iVar2 == 5) {
    return 9;
  }
  if (iVar2 == 6) {
    return 10;
  }
  if (iVar2 != 7) {
    if (((*(byte *)(param_1 + 0x44) & 2) == 0) ||
       (uVar4 = 6, *(int *)(*(longlong *)(param_1 + 0xa8) + 0xf4) != 0)) {
      uVar4 = 5;
    }
    return uVar4;
  }
  return 0xb;
}



// FUNCTION 144b9a220 FUN_144b9a220 body=24 status=ok
// SIG undefined FUN_144b9a220(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9a220(undefined4 *param_1)

{
  FUN_144b9ad70(*param_1);
  return;
}



// FUNCTION 144b9a240 FUN_144b9a240 body=41 status=ok
// SIG undefined FUN_144b9a240(void)

longlong FUN_144b9a240(longlong param_1)

{
  longlong lVar1;
  
  if ((param_1 == 0) ||
     ((lVar1 = *(longlong *)(param_1 + 0x118), lVar1 == 0 &&
      ((*(longlong *)(param_1 + 0x598) == 0 ||
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 8), lVar1 == 0)))))) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 144b9a270 FUN_144b9a270 body=243 status=ok
// SIG undefined FUN_144b9a270(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144b9a270(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar3 = 0;
  if ((param_1 != 0) &&
     (((lVar4 = *(longlong *)(param_1 + 0x118), lVar4 != 0 ||
       ((*(longlong *)(param_1 + 0x598) != 0 &&
        (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 8), lVar4 != 0)))) &&
      (iVar1 = FUN_144ebcf30(), iVar1 != 0)))) {
    iVar1 = FUN_144babbf0(lVar4);
    uVar6 = uVar3;
    if (0 < iVar1) {
      do {
        uVar2 = FUN_144babc00(lVar4,uVar6);
        iVar1 = FUN_144ebd000(param_1,uVar2,0x10001,0);
        if (iVar1 == 0) {
          if ((uVar3 == 0) && (uVar3 = FUN_144babca0(), uVar3 == 0)) {
            return 0;
          }
          iVar1 = FUN_144bac1c0(uVar3,uVar2);
          if (iVar1 == 0) {
            FUN_144babdb0(uVar3);
            return 0;
          }
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        iVar1 = FUN_144babbf0(lVar4);
      } while ((int)uVar5 < iVar1);
    }
    return uVar3;
  }
  return 0;
}



// FUNCTION 144b9a370 FUN_144b9a370 body=221 status=ok
// SIG undefined FUN_144b9a370(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144b9a370(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144b9a380;
  uVar3 = 1;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_144ba24f0(0x14,0xb4,0x90,"ssl\\ssl_lib.c",0xe83);
    return 0xffffffff;
  }
  FUN_144eafd80(param_1,0xffffffff);
  (**(code **)(*(longlong *)(param_1 + 8) + 0x60))(param_1,0);
  iVar1 = FUN_144eafbc0(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_144eafbd0(param_1);
    if (iVar1 == 0) goto LAB_144b9a440;
  }
  if ((*(uint *)(param_1 + 0x5d0) & 0x100) != 0) {
    local_30 = FUN_144eacb70();
    if (local_30 == 0) {
      local_38 = param_1;
      local_28 = local_30;
      local_20 = local_30;
      local_18 = local_30;
      uVar2 = FUN_144b9c310(param_1,&local_38,FUN_144b9c5b0);
      return uVar2;
    }
  }
  uVar3 = (**(code **)(param_1 + 0x30))(param_1);
LAB_144b9a440:
  return (ulonglong)uVar3;
}



// FUNCTION 144b9a450 FUN_144b9a450 body=169 status=ok
// SIG undefined FUN_144b9a450(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9a450(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((((*(byte *)(*(longlong *)(piVar1 + 0x30) + 0x60) & 8) == 0) && (0x303 < *piVar1)) &&
     (*piVar1 != 0x10000)) {
    FUN_144ba24f0(0x14,0x204,0x10a,"ssl\\ssl_lib.c",0x86d);
    return 0;
  }
  if ((*(uint *)(param_1 + 0x5cc) & 0x40000000) != 0) {
    FUN_144ba24f0(0x14,0x204,0x153,"ssl\\ssl_lib.c",0x872);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x780) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 1;
                    /* WARNING: Could not recover jumptable at 0x000144b9a4f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(piVar1 + 0x16))();
  return uVar2;
}



// FUNCTION 144b9a500 FUN_144b9a500 body=169 status=ok
// SIG undefined FUN_144b9a500(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9a500(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((((*(byte *)(*(longlong *)(piVar1 + 0x30) + 0x60) & 8) == 0) && (0x303 < *piVar1)) &&
     (*piVar1 != 0x10000)) {
    FUN_144ba24f0(0x14,0x222,0x10a,"ssl\\ssl_lib.c",0x87f);
    return 0;
  }
  if ((*(uint *)(param_1 + 0x5cc) & 0x40000000) != 0) {
    FUN_144ba24f0(0x14,0x222,0x153,"ssl\\ssl_lib.c",0x884);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x780) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 0;
                    /* WARNING: Could not recover jumptable at 0x000144b9a5a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(piVar1 + 0x16))();
  return uVar2;
}



// FUNCTION 144b9a5b0 FUN_144b9a5b0 body=208 status=ok
// SIG undefined FUN_144b9a5b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9a5b0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144b9a5bc;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar3 = 0x82d;
    uVar2 = 0x114;
  }
  else {
    iVar1 = FUN_144eafbc0();
    if (iVar1 == 0) {
      if ((*(uint *)(param_1 + 0x5d0) & 0x100) != 0) {
        local_30 = FUN_144eacb70();
        if (local_30 == 0) {
          local_20 = 2;
          local_18 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50);
          local_38 = param_1;
          local_28 = local_30;
          uVar2 = FUN_144b9c310(param_1,&local_38,FUN_144b9c420);
          return uVar2;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000144b9a64f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(longlong *)(param_1 + 8) + 0x50))(param_1);
      return uVar2;
    }
    uVar3 = 0x83f;
    uVar2 = 0x197;
  }
  FUN_144ba24f0(0x14,0xe0,uVar2,"ssl\\ssl_lib.c",uVar3);
  return 0xffffffff;
}



// FUNCTION 144b9a680 FUN_144b9a680 body=7 status=ok
// SIG undefined FUN_144b9a680(void)

void FUN_144b9a680(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3e0) = param_2;
  return;
}



// FUNCTION 144b9a690 FUN_144b9a690 body=134 status=ok
// SIG undefined FUN_144b9a690(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144b9a690(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  uVar3 = 1;
  if (piVar1 != param_2) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (*piVar1 == *param_2) {
      *(int **)(param_1 + 8) = param_2;
    }
    else {
      (**(code **)(piVar1 + 8))();
      *(int **)(param_1 + 8) = param_2;
      uVar3 = (**(code **)(param_2 + 4))(param_1);
    }
    if (lVar2 == *(longlong *)(piVar1 + 0xc)) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0xc);
    }
    else if (lVar2 == *(longlong *)(piVar1 + 10)) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 10);
    }
  }
  return uVar3;
}



// FUNCTION 144b9a720 FUN_144b9a720 body=104 status=ok
// SIG undefined FUN_144b9a720(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9a720(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_144eafc60();
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30);
  FUN_144b9b090(param_1);
  FUN_144ba5800(*(undefined8 *)(param_1 + 0x450));
  *(undefined8 *)(param_1 + 0x450) = 0;
  FUN_144ba5800(*(undefined8 *)(param_1 + 0x480));
  *(undefined8 *)(param_1 + 0x480) = 0;
  return;
}



// FUNCTION 144b9a790 FUN_144b9a790 body=109 status=ok
// SIG undefined FUN_144b9a790(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9a790(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_144eafc60();
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28);
  FUN_144b9b090(param_1);
  FUN_144ba5800(*(undefined8 *)(param_1 + 0x450));
  *(undefined8 *)(param_1 + 0x450) = 0;
  FUN_144ba5800(*(undefined8 *)(param_1 + 0x480));
  *(undefined8 *)(param_1 + 0x480) = 0;
  return;
}



// FUNCTION 144b9a800 FUN_144b9a800 body=28 status=ok
// SIG undefined FUN_144b9a800(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9a800(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144b9a815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 8) + 0xb8))();
  return;
}



// FUNCTION 144b9a820 FUN_144b9a820 body=20 status=ok
// SIG undefined FUN_144b9a820(void)

undefined8 FUN_144b9a820(longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0x488) != (undefined8 *)0x0) {
    return *(undefined8 *)**(undefined8 **)(param_1 + 0x488);
  }
  return 0;
}



// FUNCTION 144b9a840 FUN_144b9a840 body=21 status=ok
// SIG undefined FUN_144b9a840(void)

undefined8 FUN_144b9a840(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x488) != (longlong *)0x0) {
    return *(undefined8 *)(**(longlong **)(param_1 + 0x488) + 8);
  }
  return 0;
}



// FUNCTION 144b9a860 FUN_144b9a860 body=20 status=ok
// SIG undefined FUN_144b9a860(void)

undefined8 FUN_144b9a860(longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0x138) != (undefined8 *)0x0) {
    return *(undefined8 *)**(undefined8 **)(param_1 + 0x138);
  }
  return 0;
}



// FUNCTION 144b9a880 FUN_144b9a880 body=4 status=ok
// SIG undefined FUN_144b9a880(void)

undefined4 FUN_144b9a880(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// FUNCTION 144b9a890 FUN_144b9a890 body=3 status=ok
// SIG undefined FUN_144b9a890(void)

undefined4 FUN_144b9a890(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 144b9a8a0 FUN_144b9a8a0 body=7 status=ok
// SIG undefined FUN_144b9a8a0(void)

undefined4 FUN_144b9a8a0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x5ec);
}



// FUNCTION 144b9a8b0 FUN_144b9a8b0 body=26 status=ok
// SIG undefined FUN_144b9a8b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9a8b0(longlong param_1)

{
  FUN_144eaae60(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 144b9a8d0 FUN_144b9a8d0 body=26 status=ok
// SIG undefined FUN_144b9a8d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9a8d0(longlong param_1)

{
  FUN_144eaad90(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 144b9a8f0 FUN_144b9a8f0 body=8 status=ok
// SIG undefined FUN_144b9a8f0(void)

undefined8 FUN_144b9a8f0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x598);
}



// FUNCTION 144b9a900 FUN_144b9a900 body=303 status=ok
// SIG undefined FUN_144b9a900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144b9a900(longlong param_1,longlong param_2)

{
  ulonglong _Size;
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x598) == param_2) {
    return *(longlong *)(param_1 + 0x598);
  }
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 0x768);
  }
  lVar3 = FUN_144b9d030(*(undefined8 *)(param_2 + 0x138));
  if (lVar3 != 0) {
    iVar2 = FUN_144eaf700(lVar3 + 0x1d8,*(longlong *)(param_1 + 0x488) + 0x1d8);
    if (iVar2 == 0) {
      FUN_144b9d4e0(lVar3);
    }
    else {
      FUN_144b9d4e0(*(undefined8 *)(param_1 + 0x488));
      _Size = *(ulonglong *)(param_1 + 0x4e0);
      *(longlong *)(param_1 + 0x488) = lVar3;
      if (_Size < 0x21) {
        lVar3 = *(longlong *)(param_1 + 0x598);
        if (((lVar3 != 0) && (_Size == *(ulonglong *)(lVar3 + 0x160))) &&
           (iVar2 = memcmp((void *)(param_1 + 0x4e8),(void *)(lVar3 + 0x168),_Size), iVar2 == 0)) {
          *(undefined8 *)(param_1 + 0x4e0) = *(undefined8 *)(param_2 + 0x160);
          uVar1 = *(undefined8 *)(param_2 + 0x170);
          *(undefined8 *)(param_1 + 0x4e8) = *(undefined8 *)(param_2 + 0x168);
          *(undefined8 *)(param_1 + 0x4f0) = uVar1;
          uVar1 = *(undefined8 *)(param_2 + 0x180);
          *(undefined8 *)(param_1 + 0x4f8) = *(undefined8 *)(param_2 + 0x178);
          *(undefined8 *)(param_1 + 0x500) = uVar1;
        }
        LOCK();
        *(int *)(param_2 + 0x94) = *(int *)(param_2 + 0x94) + 1;
        UNLOCK();
        FUN_144b98360(*(undefined8 *)(param_1 + 0x598));
        *(longlong *)(param_1 + 0x598) = param_2;
        return param_2;
      }
    }
  }
  return 0;
}



// FUNCTION 144b9aa30 FUN_144b9aa30 body=8 status=ok
// SIG undefined FUN_144b9aa30(void)

void FUN_144b9aa30(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x568) = param_2;
  return;
}



// FUNCTION 144b9aa40 FUN_144b9aa40 body=7 status=ok
// SIG undefined FUN_144b9aa40(void)

undefined4 FUN_144b9aa40(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x5a8);
}



// FUNCTION 144b9aa50 FUN_144b9aa50 body=76 status=ok
// SIG undefined FUN_144b9aa50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9aa50(longlong param_1,void *param_2,size_t param_3)

{
  if (0x100 < param_3) {
    return 0;
  }
  memcpy((void *)(param_1 + 0x50),param_2,param_3);
  *(size_t *)(param_1 + 8) = param_3;
  return 1;
}



// FUNCTION 144b9aaa0 FUN_144b9aaa0 body=29 status=ok
// SIG undefined FUN_144b9aaa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9aaa0(longlong param_1)

{
  FUN_144ea6220(param_1 + 0x5b0);
  return;
}



// FUNCTION 144b9aac0 FUN_144b9aac0 body=29 status=ok
// SIG undefined FUN_144b9aac0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9aac0(longlong param_1)

{
  FUN_144ea6300(param_1 + 0x5b0);
  return;
}



// FUNCTION 144b9aae0 FUN_144b9aae0 body=29 status=ok
// SIG undefined FUN_144b9aae0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9aae0(longlong param_1)

{
  FUN_144ea6220(param_1 + 0xe0);
  return;
}



// FUNCTION 144b9ab00 FUN_144b9ab00 body=29 status=ok
// SIG undefined FUN_144b9ab00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9ab00(longlong param_1)

{
  FUN_144ea6300(param_1 + 0xe0);
  return;
}



// FUNCTION 144b9ab20 FUN_144b9ab20 body=45 status=ok
// SIG undefined FUN_144b9ab20(void)

undefined4 FUN_144b9ab20(longlong param_1,ulonglong param_2)

{
  if (param_2 == 1) {
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    return 1;
  }
  if (param_2 < 0x4001) {
    *(ulonglong *)(param_1 + 0x3a8) = param_2;
    return 1;
  }
  return 0;
}



// FUNCTION 144b9ab50 FUN_144b9ab50 body=45 status=ok
// SIG undefined FUN_144b9ab50(void)

undefined4 FUN_144b9ab50(longlong param_1,ulonglong param_2)

{
  if (param_2 == 1) {
    *(undefined8 *)(param_1 + 0x1730) = 0;
    return 1;
  }
  if (param_2 < 0x4001) {
    *(ulonglong *)(param_1 + 0x1730) = param_2;
    return 1;
  }
  return 0;
}



// FUNCTION 144b9ab80 FUN_144b9ab80 body=13 status=ok
// SIG undefined FUN_144b9ab80(void)

undefined8 FUN_144b9ab80(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1740) = param_2;
  return 1;
}



// FUNCTION 144b9ab90 FUN_144b9ab90 body=13 status=ok
// SIG undefined FUN_144b9ab90(void)

undefined8 FUN_144b9ab90(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x3c8) = param_2;
  return 1;
}



// FUNCTION 144b9aba0 FUN_144b9aba0 body=174 status=ok
// SIG undefined FUN_144b9aba0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9aba0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144b9abb5;
  if (param_2 != 0) {
    iVar1 = FUN_144eaefa0(*(undefined8 *)(param_1 + 0x598),0x12);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x80))(param_1,0x41,1);
      if (iVar1 != 0) goto LAB_144b9ac2b;
    }
    else {
      FUN_144ba24f0(0x14,399,0xce,"ssl\\ssl_lib.c",0x133f,uVar2);
    }
    return 0;
  }
LAB_144b9ac2b:
  *(undefined8 *)(param_1 + 0x750) = param_3;
  *(longlong *)(param_1 + 0x748) = param_2;
  return 1;
}



// FUNCTION 144b9ac50 FUN_144b9ac50 body=13 status=ok
// SIG undefined FUN_144b9ac50(void)

bool FUN_144b9ac50(longlong param_1)

{
  return *(longlong *)(param_1 + 0x1b0) != 0;
}



// FUNCTION 144b9ac60 FUN_144b9ac60 body=91 status=ok
// SIG undefined FUN_144b9ac60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9ac60(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x760) != 0) {
LAB_144b9aca6:
    return *(undefined8 *)(param_1 + 0x758);
  }
  iVar1 = FUN_144b9c6d0();
  if (-1 < iVar1) {
    iVar1 = FUN_144b9c750(param_1);
    if (-1 < iVar1) {
      iVar1 = FUN_144b9c870(param_1);
      if (-1 < iVar1) {
        *(undefined4 *)(param_1 + 0x760) = 1;
        goto LAB_144b9aca6;
      }
    }
  }
  return 0;
}



// FUNCTION 144b9acc0 FUN_144b9acc0 body=14 status=ok
// SIG undefined FUN_144b9acc0(void)

undefined4 FUN_144b9acc0(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x488) + 0x1f0);
}



// FUNCTION 144b9acd0 FUN_144b9acd0 body=14 status=ok
// SIG undefined FUN_144b9acd0(void)

undefined4 FUN_144b9acd0(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x1f0);
}



// FUNCTION 144b9ace0 FUN_144b9ace0 body=139 status=ok
// SIG undefined FUN_144b9ace0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9ace0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_144ea6530(*param_2,
                "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                ,0x1c5);
  *param_2 = 0;
  *param_3 = 0;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = FUN_144ea6d10(*param_1,lVar1,
                          "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                          ,0x1ce);
    *param_2 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    *param_3 = lVar1;
  }
  return 1;
}



// FUNCTION 144b9ad70 FUN_144b9ad70 body=129 status=ok
// SIG undefined FUN_144b9ad70(void)

char * FUN_144b9ad70(int param_1)

{
  if (param_1 < 0x304) {
    if (param_1 == 0x303) {
      return "TLSv1.2";
    }
    if (param_1 == 0x100) {
      return "DTLSv0.9";
    }
    if (param_1 == 0x300) {
      return "SSLv3";
    }
    if (param_1 == 0x301) {
      return "TLSv1";
    }
    if (param_1 == 0x302) {
      return "TLSv1.1";
    }
  }
  else {
    if (param_1 == 0x304) {
      return "TLSv1.3";
    }
    if (param_1 == 0xfefd) {
      return "DTLSv1.2";
    }
    if (param_1 == 0xfeff) {
      return "DTLSv1";
    }
  }
  return "unknown";
}



// FUNCTION 144b9ae00 FUN_144b9ae00 body=298 status=ok
// SIG undefined FUN_144b9ae00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9ae00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144b9ae1a;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_144ba24f0(0x14,0x20b,0x114,"ssl\\ssl_lib.c",0x6d7);
    uVar2 = 0xffffffff;
  }
  else {
    if ((*(byte *)(param_1 + 0x44) & 2) == 0) {
      if ((*(int *)(param_1 + 0x84) != 1) && (*(int *)(param_1 + 0x84) != 8)) {
        FUN_144eafd80(param_1,0);
        if (((*(uint *)(param_1 + 0x5d0) & 0x100) != 0) && (lVar1 = FUN_144eacb70(), lVar1 == 0)) {
          local_20 = 0;
          local_18 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x38);
          local_38 = param_1;
          local_30 = param_2;
          local_28 = param_3;
          uVar2 = FUN_144b9c310(param_1,&local_38,FUN_144b9c420);
          *param_4 = *(undefined8 *)(param_1 + 0x1708);
          return uVar2;
        }
        uVar2 = (**(code **)(*(longlong *)(param_1 + 8) + 0x38))(param_1,param_2,param_3,param_4);
        return uVar2;
      }
      FUN_144ba24f0(0x14,0x20b,0x42,"ssl\\ssl_lib.c",0x6e2);
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 144b9af30 FUN_144b9af30 body=352 status=ok
// SIG undefined FUN_144b9af30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9af30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144b9af4a;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_144ba24f0(0x14,0x20c,0x114,"ssl\\ssl_lib.c",0x797);
    uVar1 = 0xffffffff;
  }
  else if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
    if ((*(uint *)(param_1 + 0x84) < 0xb) &&
       ((0x502U >> (*(uint *)(param_1 + 0x84) & 0x1f) & 1) != 0)) {
      FUN_144ba24f0(0x14,0x20c,0x42,"ssl\\ssl_lib.c",0x7a4);
      uVar1 = 0;
    }
    else {
      FUN_144eafd80(param_1,1);
      if (((*(uint *)(param_1 + 0x5d0) & 0x100) != 0) && (lVar2 = FUN_144eacb70(), lVar2 == 0)) {
        local_20 = 1;
        local_18 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48);
        local_38 = param_1;
        local_30 = param_2;
        local_28 = param_3;
        uVar1 = FUN_144b9c310(param_1,&local_38,FUN_144b9c420);
        *param_4 = *(undefined8 *)(param_1 + 0x1708);
        return uVar1;
      }
      uVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x48))(param_1,param_2,param_3,param_4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 1;
    FUN_144ba24f0(0x14,0x20c,0xcf,"ssl\\ssl_lib.c",0x79d);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 144b9b090 FUN_144b9b090 body=121 status=ok
// SIG undefined FUN_144b9b090(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9b090(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x438) != 0) {
    FUN_144ba5170();
    *(undefined8 *)(param_1 + 0x438) = 0;
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FUN_144ba5170();
    *(undefined8 *)(param_1 + 0x468) = 0;
  }
  FUN_144ea7540(*(undefined8 *)(param_1 + 0x460));
  *(undefined8 *)(param_1 + 0x460) = 0;
  FUN_144ea7540(*(undefined8 *)(param_1 + 0x458));
  *(undefined8 *)(param_1 + 0x458) = 0;
  return;
}



// FUNCTION 144b9b110 FUN_144b9b110 body=41 status=ok
// SIG undefined FUN_144b9b110(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9b110(void)

{
  FUN_144ea97c0();
  return;
}



// FUNCTION 144b9b160 FUN_144b9b160 body=599 status=ok
// SIG undefined FUN_144b9b160(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9b160(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  
  if (param_2[1] == 0) {
    FUN_144eafc90(param_1,0x2f,0x208,0xb7,"ssl\\ssl_lib.c",0x14f7);
    return 0;
  }
  uVar8 = (ulonglong)((param_3 != 0) + 2);
  if ((ulonglong)param_2[1] % uVar8 == 0) {
    FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2a8),"ssl\\ssl_lib.c",0x1501);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2a8) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b0) = 0;
    if (param_3 == 0) {
      iVar2 = FUN_144b9ace0(param_2,*(longlong *)(param_1 + 0xa8) + 0x2a8,
                            *(longlong *)(param_1 + 0xa8) + 0x2b0);
      if (iVar2 == 0) {
        uVar9 = 0x152f;
        uVar7 = 0x44;
        goto LAB_144b9b398;
      }
    }
    else {
      pcVar6 = (char *)*param_2;
      lVar4 = param_2[1];
      puVar3 = (undefined2 *)
               FUN_144ea64e0(((ulonglong)param_2[1] / uVar8) * 2,"ssl\\ssl_lib.c",0x1512);
      *(undefined2 **)(*(longlong *)(param_1 + 0xa8) + 0x2a8) = puVar3;
      if (puVar3 == (undefined2 *)0x0) {
        uVar9 = 0x1516;
        uVar7 = 0x41;
LAB_144b9b398:
        uVar5 = 0x50;
        goto LAB_144b9b39d;
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b0) = 0;
      for (; lVar4 != 0; lVar4 = lVar4 + -3) {
        if (*pcVar6 == '\0') {
          if (lVar4 - 1U < 2) {
LAB_144b9b305:
            FUN_144eafc90(param_1,0x32,0x208,0xf0,"ssl\\ssl_lib.c",0x1523);
            FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2a8),"ssl\\ssl_lib.c",
                          0x1524);
            *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2a8) = 0;
            *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b0) = 0;
            return 0;
          }
          *puVar3 = *(undefined2 *)(pcVar6 + 1);
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2b0);
          *plVar1 = *plVar1 + 2;
        }
        else if (lVar4 - 1U < 2) goto LAB_144b9b305;
        pcVar6 = pcVar6 + 3;
        puVar3 = puVar3 + 1;
      }
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0x32;
    uVar9 = 0x14fd;
    uVar7 = 0x97;
LAB_144b9b39d:
    FUN_144eafc90(param_1,uVar5,0x208,uVar7,"ssl\\ssl_lib.c",uVar9);
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 144b9b3c0 FUN_144b9b3c0 body=854 status=ok
// SIG undefined FUN_144b9b3c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144b9b3c0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,int param_5,
             int param_6)

{
  ulonglong uVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  undefined4 *puVar7;
  ulonglong _Size;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  
  iVar2 = param_5;
  if (param_2[1] == 0) {
    if (param_6 != 0) {
      FUN_144eafc90(param_1,0x2f,0x207,0xb7,"ssl\\ssl_lib.c",0x1551);
      return 0;
    }
    FUN_144ba24f0(0x14,0x207,0xb7,"ssl\\ssl_lib.c",0x1553);
    return 0;
  }
  _Size = (ulonglong)((param_5 != 0) + 2);
  if ((ulonglong)param_2[1] % _Size != 0) {
    if (param_6 != 0) {
      FUN_144eafc90(param_1,0x32,0x207,0x97,"ssl\\ssl_lib.c",0x155a);
      return 0;
    }
    FUN_144ba24f0(0x14,0x207,0x97,"ssl\\ssl_lib.c",0x155d);
    return 0;
  }
  lVar4 = FUN_144babca0();
  lVar5 = FUN_144babca0();
  if ((lVar4 == 0) || (lVar5 == 0)) {
    if (param_6 == 0) {
      uVar9 = 0x1568;
      goto LAB_144b9b6cb;
    }
    uVar10 = 0x1566;
  }
  else {
LAB_144b9b530:
    do {
      do {
        do {
          uVar1 = param_2[1];
          if (uVar1 < _Size) {
            if (uVar1 == 0) {
              if (param_3 == (longlong *)0x0) {
                FUN_144babdb0(lVar4);
              }
              else {
                *param_3 = lVar4;
              }
              if (param_4 != (longlong *)0x0) {
                *param_4 = lVar5;
                return 1;
              }
              FUN_144babdb0(lVar5);
              return 1;
            }
            if (param_6 != 0) {
              FUN_144eafc90(param_1,0x32,0x207,0x10f,"ssl\\ssl_lib.c",0x1586);
              goto LAB_144b9b6e0;
            }
            uVar9 = 0x1588;
            uVar8 = 0x10f;
            goto LAB_144b9b6d1;
          }
          _Src = (void *)*param_2;
          memcpy(&param_5,_Src,_Size);
          *param_2 = (longlong)_Src + _Size;
          param_2[1] = uVar1 - _Size;
        } while ((iVar2 != 0) && ((char)param_5 != '\0'));
        puVar7 = &param_5;
        if (iVar2 != 0) {
          puVar7 = (undefined4 *)((longlong)&param_5 + 1);
        }
        piVar6 = (int *)FUN_144ea40e0(param_1,puVar7,1);
      } while (piVar6 == (int *)0x0);
      if (*piVar6 != 0) {
        iVar3 = FUN_144bac1c0(lVar4,piVar6);
        if (iVar3 == 0) break;
        if (*piVar6 != 0) goto LAB_144b9b530;
      }
      iVar3 = FUN_144bac1c0(lVar5,piVar6);
    } while (iVar3 != 0);
    if (param_6 == 0) {
      uVar9 = 0x157e;
LAB_144b9b6cb:
      uVar8 = 0x41;
LAB_144b9b6d1:
      FUN_144ba24f0(0x14,0x207,uVar8,"ssl\\ssl_lib.c",uVar9);
      goto LAB_144b9b6e0;
    }
    uVar10 = 0x157c;
  }
  FUN_144eafc90(param_1,0x50,0x207,0x41,"ssl\\ssl_lib.c",uVar10);
LAB_144b9b6e0:
  FUN_144babdb0(lVar4);
  FUN_144babdb0(lVar5);
  return 0;
}



// FUNCTION 144b9b720 FUN_144b9b720 body=396 status=ok
// SIG undefined FUN_144b9b720(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9b720(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  if ((*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x150) != 0) &&
     (((*(int *)(param_1 + 0x38) == 0 ||
       (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x178) != 0)) ||
      ((*(byte *)(param_1 + 0x558) & 1) == 0)))) {
    lVar2 = *(longlong *)(param_1 + 0x768);
    uVar1 = *(uint *)(lVar2 + 0x48);
    if (((uVar1 & param_2) != 0) &&
       ((*(int *)(param_1 + 200) == 0 ||
        ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0 &&
          (iVar3 = **(int **)(param_1 + 8), 0x303 < iVar3)) && (iVar3 != 0x10000)))))) {
      if (((uVar1 >> 9 & 1) == 0) &&
         ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0 ||
           (iVar3 = **(int **)(param_1 + 8), iVar3 < 0x304)) ||
          (((iVar3 == 0x10000 || (*(int *)(param_1 + 0x38) == 0)) ||
           ((((*(int *)(param_1 + 0x1710) != 0 && ((*(uint *)(param_1 + 0x5cc) & 0x1000000) == 0))
             || (*(longlong *)(lVar2 + 0x58) != 0)) || ((*(uint *)(param_1 + 0x5cc) & 0x4000) != 0))
           )))))) {
        FUN_144eb0f70(lVar2);
      }
      if (*(longlong *)(*(longlong *)(param_1 + 0x768) + 0x50) != 0) {
        FUN_144eb0d30(*(undefined8 *)(param_1 + 0x508));
        iVar3 = (**(code **)(*(longlong *)(param_1 + 0x768) + 0x50))
                          (param_1,*(undefined8 *)(param_1 + 0x508));
        if (iVar3 == 0) {
          FUN_144eb0d50(*(undefined8 *)(param_1 + 0x508));
        }
      }
    }
    if ((-1 < (char)uVar1) && ((uVar1 & param_2) == param_2)) {
      if ((param_2 & 1) == 0) {
        puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x768) + 0x7c);
      }
      else {
        puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x768) + 0x70);
      }
      if ((char)*puVar4 == -1) {
        uVar5 = _time64((__time64_t *)0x0);
        FUN_144eb0b00(*(undefined8 *)(param_1 + 0x768),uVar5 & 0xffffffff);
      }
    }
  }
  return;
}



// FUNCTION 144b9b8b0 FUN_144b9b8b0 body=52 status=ok
// SIG undefined FUN_144b9b8b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9b8b0(void)

{
  FUN_144ba24f0(0x14,0xf4,0x42,"ssl\\ssl_lib.c",0xeb5);
  return 0;
}



// FUNCTION 144b9b8f0 FUN_144b9b8f0 body=54 status=ok
// SIG undefined FUN_144b9b8f0(void)

undefined8 FUN_144b9b8f0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e0);
  *param_3 = 0;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x18) != 0)) {
    *param_2 = *(longlong *)(lVar1 + 0x18);
    *param_3 = *(undefined8 *)(lVar1 + 0x20);
    return 1;
  }
  return 0;
}



// FUNCTION 144b9b930 FUN_144b9b930 body=561 status=ok
// SIG undefined FUN_144b9b930(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9b930(uint *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  lVar1 = *(longlong *)(param_1 + 0x122);
  lVar2 = *(longlong *)(param_1 + 0x2a);
  if (lVar1 != 0) {
    if (((*(longlong *)(lVar1 + 8) != 0) || (*(longlong *)(lVar1 + 0x10) != 0)) ||
       (iVar9 = 0, *(int *)(lVar1 + 0x18) != 0)) {
      iVar9 = 1;
    }
    uVar8 = *(uint *)(lVar2 + 0x310) & 1;
    if ((*(longlong *)(lVar1 + 0x110) == 0) || (iVar5 = 1, *(longlong *)(lVar1 + 0x118) == 0)) {
      iVar5 = 0;
    }
    uVar6 = iVar5 << 4;
    uVar7 = iVar5 << 7;
    if ((*(longlong *)(lVar1 + 0xe8) != 0) && (*(longlong *)(lVar1 + 0xf0) != 0)) {
      uVar6 = 0x10;
      uVar7 = 0x80;
    }
    if ((*(longlong *)(lVar1 + 0xc0) != 0) && (*(longlong *)(lVar1 + 200) != 0)) {
      uVar6 = 0x10;
      uVar7 = uVar7 | 0x20;
    }
    uVar3 = uVar6 | 1;
    if (uVar8 == 0) {
      uVar3 = uVar6;
    }
    uVar6 = uVar3 | 2;
    if (iVar9 == 0) {
      uVar6 = uVar3;
    }
    if ((uVar8 != 0) ||
       ((((*(longlong *)(lVar1 + 0x48) != 0 && (*(longlong *)(lVar1 + 0x50) != 0)) &&
         ((*(uint *)(lVar2 + 0x314) & 0x100) != 0)) &&
        (((*param_1 & 0xffffff00) == 0x300 && (*param_1 == 0x303)))))) {
      uVar7 = uVar7 | 1;
    }
    uVar8 = uVar7 | 2;
    if ((*(uint *)(lVar2 + 0x318) & 1) == 0) {
      uVar8 = uVar7;
    }
    uVar7 = uVar8 | 4;
    if ((*(uint *)(lVar2 + 0x31c) & 1) != 0) {
      uVar4 = FUN_144ec5690(*(undefined8 *)(lVar1 + 0x98));
      uVar3 = 0;
      if ((*(byte *)(lVar2 + 0x31c) & 2) != 0) {
        uVar3 = uVar4 & 0x80;
      }
      if (uVar3 != 0) {
        uVar7 = uVar8 | 0xc;
      }
    }
    if ((uVar7 & 8) == 0) {
      if (((*(longlong *)(*(longlong *)(param_1 + 0x122) + 0x138) != 0) &&
          (*(longlong *)(*(longlong *)(param_1 + 0x122) + 0x140) != 0)) &&
         (((*(uint *)(lVar2 + 0x32c) & 0x100) != 0 &&
          (((*param_1 & 0xffffff00) == 0x300 && (*param_1 == 0x303)))))) {
        uVar7 = uVar7 | 8;
      }
      if ((((((uVar7 & 8) == 0) && (*(longlong *)(*(longlong *)(param_1 + 0x122) + 0x160) != 0)) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x122) + 0x168) != 0)) &&
          (((*(uint *)(lVar2 + 0x330) & 0x100) != 0 && ((*param_1 & 0xffffff00) == 0x300)))) &&
         (*param_1 == 0x303)) {
        uVar7 = uVar7 | 8;
      }
    }
    uVar8 = uVar6 | 0x4c;
    if ((uVar6 & 1) == 0) {
      uVar8 = uVar6 | 0xc;
    }
    uVar6 = uVar8 | 0x100;
    if ((uVar8 & 2) == 0) {
      uVar6 = uVar8;
    }
    *(uint *)(*(longlong *)(param_1 + 0x2a) + 0x334) = uVar6 | 0x80;
    *(uint *)(*(longlong *)(param_1 + 0x2a) + 0x338) = uVar7 | 0x10;
    return;
  }
  return;
}



// FUNCTION 144b9bb70 FUN_144b9bb70 body=41 status=ok
// SIG undefined FUN_144b9bb70(void)

longlong FUN_144b9bb70(longlong param_1)

{
  longlong lVar1;
  
  if ((param_1 == 0) ||
     ((lVar1 = *(longlong *)(param_1 + 0x120), lVar1 == 0 &&
      ((*(longlong *)(param_1 + 0x598) == 0 ||
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x10), lVar1 == 0)))))) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 144b9bba0 FUN_144b9bba0 body=46 status=ok
// SIG undefined FUN_144b9bba0(void)

int FUN_144b9bba0(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x508) != 0) &&
     (cVar1 = *(char *)(*(longlong *)(param_1 + 0x508) + 0x240), (byte)(cVar1 - 1U) < 4)) {
    return 0x200 << (cVar1 - 1U & 0x1f);
  }
  return *(int *)(param_1 + 0x5f8);
}



// FUNCTION 144b9bbd0 FUN_144b9bbd0 body=74 status=ok
// SIG undefined FUN_144b9bbd0(void)

ulonglong FUN_144b9bbd0(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((((*(longlong *)(param_1 + 0x508) == 0) ||
       (cVar1 = *(char *)(*(longlong *)(param_1 + 0x508) + 0x240), 3 < (byte)(cVar1 - 1U))) ||
      (uVar2 = (ulonglong)(uint)(0x200 << (cVar1 - 1U & 0x1f)),
      *(ulonglong *)(param_1 + 0x5f0) <= uVar2)) &&
     (uVar2 = *(ulonglong *)(param_1 + 0x5f8), *(ulonglong *)(param_1 + 0x5f0) <= uVar2)) {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x5f0);
  }
  return uVar2;
}



// FUNCTION 144b9bc20 FUN_144b9bc20 body=176 status=ok
// SIG undefined FUN_144b9bc20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9bc20(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144b9bc2c;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    return 1;
  }
  uVar2 = FUN_144ea8510();
  lVar3 = FUN_144b9e650(uVar2);
  if (lVar3 != 0) {
    iVar1 = FUN_144b9f250(lVar3,0x75,1);
    if (iVar1 != 0) {
      *(longlong *)(param_1 + 0x20) = lVar3;
      uVar4 = FUN_144b9f280(lVar3,*(undefined8 *)(param_1 + 0x18));
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      return 1;
    }
  }
  FUN_144b9e7b0(lVar3);
  FUN_144ba24f0(0x14,0xb8,7,"ssl\\ssl_lib.c",0xfcc,uVar4);
  return 0;
}



// FUNCTION 144b9bcd0 FUN_144b9bcd0 body=66 status=ok
// SIG undefined FUN_144b9bcd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9bcd0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_144b9f2e0(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    FUN_144b9e7b0(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return 1;
}



// FUNCTION 144b9bd20 FUN_144b9bd20 body=93 status=ok
// SIG undefined FUN_144b9bd20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9bd20(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0xa8) + 0x238) + 0x20) & 8) != 0) {
    cVar1 = FUN_144ec5690();
    if (-1 < cVar1) {
      FUN_144ba24f0(0x14,0x117,0x13e,"ssl\\ssl_lib.c",0xda1);
      return 0;
    }
  }
  return 1;
}



// FUNCTION 144b9bd80 FUN_144b9bd80 body=482 status=ok
// SIG undefined FUN_144b9bd80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144b9bd80(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  uVar6 = 1;
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x508) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1b8);
  }
  if (((((*(longlong *)(param_1 + 0x748) == 0) || (lVar7 == 0)) || (*(int *)(param_1 + 0x5a8) != 0))
      || ((*(longlong *)(param_1 + 0x5a0) == 0 || (iVar1 = FUN_144babbf0(), iVar1 < 2)))) ||
     (((param_1 != -0xd8 &&
       ((iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0xe0)), 0 < iVar1 &&
        (*(char **)(param_1 + 0xf0) != (char *)0x0)))) &&
      ((byte)(**(char **)(param_1 + 0xf0) - 2U) < 2)))) {
    return 1;
  }
  lVar3 = FUN_144ead050();
  if (lVar3 == 0) {
    uVar4 = CONCAT44(uVar6,0x1397);
    uVar5 = 0x50;
    uVar6 = 0x41;
  }
  else {
    uVar4 = FUN_144babc00(*(undefined8 *)(param_1 + 0x5a0),1);
    FUN_144ead120(lVar3,lVar7);
    FUN_144ead170(lVar3,uVar4);
    FUN_144ead1c0(lVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0x1a8));
    uVar4 = FUN_144eb11b0(param_1);
    iVar2 = FUN_144eb0b90(uVar4);
    FUN_144ead1d0(lVar3,(longlong)iVar2 * 1000);
    uVar4 = FUN_144b9ac60(param_1);
    iVar2 = FUN_144ead420(uVar4,lVar3);
    if (iVar2 < 0) {
      uVar4 = CONCAT44(uVar6,0x13b4);
      uVar6 = 0xd0;
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x748))(lVar3,uVar4,*(undefined8 *)(param_1 + 0x750));
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (iVar2 != 0) goto LAB_144b9bf28;
      uVar4 = CONCAT44(uVar6,0x13bd);
      uVar6 = 0xea;
    }
    uVar5 = 0x28;
  }
  FUN_144eafc90(param_1,uVar5,400,uVar6,"ssl\\ssl_lib.c",uVar4);
LAB_144b9bf28:
  FUN_144ead0d0(lVar3);
  if (iVar2 < 1) {
    *(undefined4 *)(param_1 + 0x5a8) = 0x47;
  }
  return iVar2;
}



// FUNCTION 144b9bf70 FUN_144b9bf70 body=118 status=ok
// SIG undefined FUN_144b9bf70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144b9bf70(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  FUN_144ba5800(*param_1);
  *param_1 = 0;
  lVar2 = FUN_144ba5700();
  *param_1 = lVar2;
  if (lVar2 != 0) {
    if (param_2 != 0) {
      iVar1 = FUN_144ba5a20(lVar2,param_2,0);
      if (iVar1 < 1) goto LAB_144b9bfca;
    }
    return *param_1;
  }
LAB_144b9bfca:
  FUN_144ba5800(*param_1);
  *param_1 = 0;
  return 0;
}



// FUNCTION 144b9bff0 FUN_144b9bff0 body=254 status=ok
// SIG undefined FUN_144b9bff0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144b9bff0(longlong param_1,undefined8 param_2,ulonglong param_3,ulonglong *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar7 = 1;
  lVar5 = 0;
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8);
  uVar3 = FUN_144ba3d20(uVar6);
  iVar1 = FUN_144ba3cd0(uVar3);
  if ((iVar1 < 0) || (param_3 < (ulonglong)(longlong)iVar1)) {
    uVar6 = CONCAT44(uVar7,0x11e2);
    lVar4 = lVar5;
  }
  else {
    lVar4 = FUN_144ba5700();
    if (lVar4 == 0) {
      uVar6 = CONCAT44(uVar7,0x11e9);
    }
    else {
      iVar2 = FUN_144ba5840(lVar4,uVar6);
      if (iVar2 != 0) {
        iVar2 = FUN_144ba5ca0(lVar4,param_2,0);
        if (0 < iVar2) {
          *param_4 = (longlong)iVar1;
          lVar5 = 1;
          goto LAB_144b9c0c7;
        }
      }
      uVar6 = CONCAT44(uVar7,0x11f0);
    }
  }
  FUN_144eafc90(param_1,0x50,0x230,0x44,"ssl\\ssl_lib.c",uVar6);
LAB_144b9c0c7:
  FUN_144ba5800(lVar4);
  return lVar5;
}



// FUNCTION 144b9c0f0 FUN_144b9c0f0 body=110 status=ok
// SIG undefined FUN_144b9c0f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144b9c0f0(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  if (param_3 < 8) {
    FUN_144eafc90(param_1,0x50,499,0x44,"ssl\\ssl_lib.c",0x14d3);
    return 0;
  }
  uVar1 = FUN_144b9c8f0(&DAT_14997781c,param_1,param_2,8,param_4,param_5,0x144b9c0fa);
  return uVar1;
}



// FUNCTION 144b9c160 FUN_144b9c160 body=65 status=ok
// SIG undefined FUN_144b9c160(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9c160(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_144b9c8f0(param_2,param_1,*(longlong *)(param_1 + 0xa8) + 0xb8,0x20,param_3,param_4,
                0x144b9c16a);
  return;
}



// FUNCTION 144b9c1b0 FUN_144b9c1b0 body=80 status=ok
// SIG undefined FUN_144b9c1b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9c1b0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_144ea6530(*(undefined8 *)(param_1 + 8),"ssl\\ssl_lib.c",0xba);
    FUN_144ba6e60(*(undefined8 *)(param_1 + 0x18));
    FUN_144ea6530(param_1,"ssl\\ssl_lib.c",0xbc);
  }
  return;
}



// FUNCTION 144b9c200 FUN_144b9c200 body=100 status=ok
// SIG undefined FUN_144b9c200(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9c200(longlong param_1)

{
  FUN_144babe00(*(undefined8 *)(param_1 + 8),FUN_144b9c1b0);
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_144babe00(*(undefined8 *)(param_1 + 0x10),FUN_144b47250);
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_144b47250(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0xffffffffffffffff;
  return;
}



// FUNCTION 144b9c270 FUN_144b9c270 body=146 status=ok
// SIG undefined FUN_144b9c270(void)

undefined8 FUN_144b9c270(uint param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = false;
  bVar2 = false;
  if ((param_1 == 0x100) || ((param_1 & 0xffffff00) == 0xfe00)) {
    bVar1 = true;
  }
  if ((param_2 == 0x100) || ((param_2 & 0xffffff00) == 0xfe00)) {
    bVar2 = true;
  }
  if (bVar1) {
    if (!bVar2) {
      if (param_2 != 0) {
        return 0;
      }
LAB_144b9c2bc:
      if (bVar1) {
        return 1;
      }
      goto LAB_144b9c2c1;
    }
  }
  else if (!bVar2) goto LAB_144b9c2bc;
  if (bVar1) {
    return 1;
  }
  if (param_1 != 0) {
    return 0;
  }
LAB_144b9c2c1:
  if (!bVar2) {
    uVar3 = 0x300;
    if (param_1 != 0) {
      uVar3 = param_1;
    }
    uVar4 = 0x304;
    if (param_2 != 0) {
      uVar4 = param_2;
    }
    if (((uVar3 != 0x300) && ((int)uVar3 < 0x301)) && (0x2ff < (int)uVar4)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 144b9c310 FUN_144b9c310 body=269 status=ok
// SIG undefined FUN_144b9c310(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144b9c310(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0x1700) == 0) {
    lVar2 = FUN_144eac670();
    *(longlong *)(param_1 + 0x1700) = lVar2;
    if (lVar2 == 0) {
      return 0xffffffff;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  iVar1 = FUN_144eac910(param_1 + 0x16f8,*(undefined8 *)(param_1 + 0x1700),local_res8,param_3,
                        param_2,0x28);
  if (iVar1 == 0) {
    uVar4 = 0x6ab;
    uVar3 = 0x195;
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x28) = 6;
      return 0xffffffff;
    }
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x28) = 5;
      return 0xffffffff;
    }
    if (iVar1 == 3) {
      *(undefined8 *)(param_1 + 0x16f8) = 0;
      return local_res8[0];
    }
    uVar4 = 0x6b8;
    uVar3 = 0x44;
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  FUN_144ba24f0(0x14,0x185,uVar3,"ssl\\ssl_lib.c",uVar4);
  return 0xffffffff;
}



// FUNCTION 144b9c420 FUN_144b9c420 body=81 status=ok
// SIG undefined FUN_144b9c420(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9c420(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[3];
  if ((iVar1 != 0) && (iVar1 != 1)) {
    if (iVar1 != 2) {
      return 0xffffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x000144b9c45b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)param_1[4])(lVar2);
    return uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000144b9c46d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)param_1[4])(lVar2,param_1[1],param_1[2],lVar2 + 0x1708);
  return uVar3;
}



// FUNCTION 144b9c480 FUN_144b9c480 body=121 status=ok
// SIG undefined FUN_144b9c480(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144b9c480(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (param_1 != 0) {
    iVar4 = 0;
    iVar1 = FUN_144babbf0();
    if (0 < iVar1) {
      do {
        lVar2 = FUN_144babc00(param_1,iVar4);
        iVar4 = iVar4 + 1;
        iVar1 = iVar3 + 1;
        if (0x303 < *(int *)(lVar2 + 0x2c)) {
          iVar1 = iVar3;
        }
        iVar3 = iVar1;
        iVar1 = FUN_144babbf0(param_1);
      } while (iVar4 < iVar1);
    }
    return iVar3;
  }
  return 0;
}



// FUNCTION 144b9c500 FUN_144b9c500 body=89 status=ok
// SIG undefined FUN_144b9c500(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144b9c500(longlong param_1)

{
  undefined4 *_Src;
  undefined4 local_res8 [8];
  
  _Src = (undefined4 *)(param_1 + 0x158);
  if (*(ulonglong *)(param_1 + 0x150) < 4) {
    local_res8[0] = 0;
    memcpy(local_res8,_Src,*(ulonglong *)(param_1 + 0x150));
    _Src = local_res8;
  }
  return *_Src;
}



// FUNCTION 144b9c560 FUN_144b9c560 body=68 status=ok
// SIG undefined FUN_144b9c560(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144b9c560(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_1 == *param_2) && (*(size_t *)(param_1 + 0x54) == *(size_t *)(param_2 + 0x54))) {
    iVar1 = memcmp(param_1 + 0x56,param_2 + 0x56,*(size_t *)(param_1 + 0x54));
    return iVar1;
  }
  return 1;
}



// FUNCTION 144b9c5b0 FUN_144b9c5b0 body=27 status=ok
// SIG undefined FUN_144b9c5b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9c5b0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144b9c5c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(*param_1);
  return;
}



// FUNCTION 144b9c5f0 FUN_144b9c5f0 body=215 status=ok
// SIG undefined FUN_144b9c5f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144b9c5f0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144b9c610;
  iVar3 = 0;
  if (*param_1 == 0) {
    lVar2 = FUN_144babca0();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      FUN_144ba24f0(0x14,0x159,0x41,"ssl\\ssl_lib.c",0x1293,uVar4);
      return -1;
    }
  }
  lVar2 = FUN_144bac250(param_2);
  while( true ) {
    if (lVar2 == 0) {
      return iVar3;
    }
    iVar1 = FUN_144ead3e0(lVar2,param_3);
    if ((iVar1 != 1) || (iVar1 = FUN_144bac1c0(*param_1,lVar2), iVar1 < 1)) break;
    iVar3 = iVar3 + 1;
    lVar2 = FUN_144bac250(param_2);
  }
  if (lVar2 != 0) {
    FUN_144bac1c0(param_2,lVar2);
  }
  return -1;
}



// FUNCTION 144b9c6d0 FUN_144b9c6d0 body=113 status=ok
// SIG undefined FUN_144b9c6d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144b9c6d0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong local_res8;
  
  local_res8 = *(longlong *)(param_1 + 0x648);
  if (local_res8 != 0) {
    uVar2 = FUN_144ead8e0(0,&local_res8,*(undefined2 *)(param_1 + 0x650));
    uVar1 = FUN_144b9c5f0(param_1 + 0x758,uVar2,1);
    FUN_144ead2d0(uVar2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 144b9c750 FUN_144b9c750 body=273 status=ok
// SIG undefined FUN_144b9c750(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144b9c750(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong local_res8;
  
  uVar7 = 0;
  uVar9 = 0;
  uVar8 = uVar7;
  uVar4 = uVar7;
  uVar6 = uVar7;
  uVar3 = uVar7;
  if ((((*(longlong *)(param_1 + 0x668) != 0) &&
       (uVar4 = 0, uVar6 = uVar9, uVar3 = 0, *(longlong *)(param_1 + 0x670) != 0)) &&
      (local_res8 = *(longlong *)(param_1 + 0x668),
      uVar3 = FUN_144ec67d0(0,&local_res8,*(undefined4 *)(param_1 + 0x670)), uVar3 != 0)) &&
     ((uVar4 = FUN_144ec6270(uVar3), uVar8 = 0, uVar4 != 0 &&
      (iVar1 = FUN_144ec6300(uVar4), uVar8 = uVar7, uVar6 = uVar7, 0 < iVar1)))) {
    do {
      lVar5 = FUN_144ec6330(uVar4,uVar7);
      if (lVar5 != 0) {
        uVar6 = FUN_144ec6660(lVar5,0x3ba,0,0);
        uVar2 = FUN_144b9c5f0(param_1 + 0x758,uVar6);
        uVar8 = (ulonglong)uVar2;
        if ((int)uVar2 < 0) break;
      }
      uVar2 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar2;
      iVar1 = FUN_144ec6300(uVar4);
    } while ((int)uVar2 < iVar1);
  }
  FUN_144ead2d0(uVar6);
  FUN_144ec6720(uVar4);
  FUN_144ec67b0(uVar3);
  return uVar8;
}



// FUNCTION 144b9c870 FUN_144b9c870 body=118 status=ok
// SIG undefined FUN_144b9c870(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144b9c870(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((*(longlong *)(param_1 + 0x508) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1b8), lVar1 != 0)) {
    uVar3 = FUN_144eac5d0(lVar1,0x3b7,0,0);
    uVar2 = FUN_144b9c5f0(param_1 + 0x758,uVar3,2);
    FUN_144ead2d0(uVar3);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144b9c8f0 FUN_144b9c8f0 body=463 status=ok
// SIG undefined FUN_144b9c8f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144b9c8f0(char *param_1,longlong param_2,longlong param_3,ulonglong param_4,longlong param_5,
             ulonglong param_6)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0x598) + 0x388) == 0) {
    return 1;
  }
  uVar2 = 0;
  cVar1 = *param_1;
  uVar9 = 0;
  uVar10 = uVar9;
  pcVar6 = param_1;
  while ((cVar1 != '\0' && (uVar2 = (uint)uVar10, uVar2 < 0x80000000))) {
    pcVar6 = pcVar6 + 1;
    uVar2 = uVar2 + 1;
    cVar1 = *pcVar6;
    uVar10 = (ulonglong)uVar2;
  }
  lVar3 = (param_4 + param_6) * 2 + 3 + (ulonglong)(uVar2 & 0x7fffffff);
  lVar4 = FUN_144ea64e0(lVar3,"ssl\\ssl_lib.c",0x14af);
  if (lVar4 == 0) {
    FUN_144eafc90(param_2,0x50,500,0x41,"ssl\\ssl_lib.c",0x14b1);
    uVar5 = 0;
  }
  else {
    lVar7 = lVar4 - (longlong)param_1;
    do {
      cVar1 = *param_1;
      param_1[lVar7] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    puVar8 = (undefined1 *)(lVar4 + (ulonglong)(uVar2 & 0x7fffffff));
    *puVar8 = 0x20;
    puVar8 = puVar8 + 1;
    uVar10 = uVar9;
    if (param_4 != 0) {
      do {
        FUN_1424c2e40(puVar8,&DAT_14bd420f3,*(undefined1 *)(uVar10 + param_3));
        puVar8 = puVar8 + 2;
        uVar10 = uVar10 + 1;
      } while (uVar10 < param_4);
    }
    *puVar8 = 0x20;
    puVar8 = puVar8 + 1;
    if (param_6 != 0) {
      do {
        FUN_1424c2e40(puVar8,&DAT_14bd420f3,*(undefined1 *)(uVar9 + param_5));
        puVar8 = puVar8 + 2;
        uVar9 = uVar9 + 1;
      } while (uVar9 < param_6);
    }
    *puVar8 = 0;
    (**(code **)(*(longlong *)(param_2 + 0x598) + 0x388))(param_2,lVar4);
    FUN_144ea66f0(lVar4,lVar3,"ssl\\ssl_lib.c",0x14c6);
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 144b9cac0 FUN_144b9cac0 body=28 status=ok
// SIG undefined FUN_144b9cac0(void)

uint FUN_144b9cac0(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = *param_1;
  for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return uVar2 & 0x7fffffff;
}



// FUNCTION 144b9cae0 FUN_144b9cae0 body=335 status=ok
// SIG undefined FUN_144b9cae0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144b9cae0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 local_res18 [2];
  undefined8 uVar7;
  
  uVar7 = 0x144b9caf8;
  local_res18[0] = 0;
  uVar6 = 1;
  uVar2 = FUN_144bac280(param_1,FUN_144b9e4f0);
  uVar3 = FUN_144ec7470();
  lVar4 = FUN_144b9e650(uVar3);
  if (lVar4 == 0) {
    FUN_144ba24f0(0x14,0xd8,0x41,"ssl\\ssl_cert.c",0x2a3,uVar7);
  }
  else {
    iVar1 = FUN_144b9efc0(lVar4,0x6c,3,param_2);
    if (iVar1 != 0) {
      lVar5 = FUN_144bac680(lVar4,local_res18,0,0);
      while (lVar5 != 0) {
        lVar5 = FUN_144bb4f50(local_res18[0]);
        if ((lVar5 == 0) || (lVar5 = FUN_144eabba0(lVar5), lVar5 == 0)) goto LAB_144b9cb51;
        iVar1 = FUN_144bac1a0(param_1,lVar5);
        if (iVar1 < 0) {
          iVar1 = FUN_144bac1c0(param_1,lVar5);
          if (iVar1 == 0) {
            FUN_144eabc40(lVar5);
            goto LAB_144b9cb51;
          }
        }
        else {
          FUN_144eabc40(lVar5);
        }
        lVar5 = FUN_144bac680(lVar4,local_res18,0,0);
      }
      FUN_144ba26f0();
      goto LAB_144b9cb53;
    }
  }
LAB_144b9cb51:
  uVar6 = 0;
LAB_144b9cb53:
  FUN_144b9e7b0(lVar4);
  FUN_144b47250(local_res18[0]);
  FUN_144bac280(param_1,uVar2);
  return uVar6;
}



// FUNCTION 144b9cc30 FUN_144b9cc30 body=428 status=ok
// SIG undefined FUN_144b9cc30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9cc30(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  undefined1 auStack_458 [32];
  char *local_438;
  longlong local_428 [2];
  undefined1 local_418 [1024];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144b9cc45;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_458;
  local_428[0] = 0;
  pcVar4 = (char *)FUN_144ec6b20(local_428);
  do {
    if (pcVar4 == (char *)0x0) {
      piVar6 = _errno();
      if (*piVar6 != 0) {
        DVar3 = GetLastError();
        local_438._0_4_ = 0x2e5;
        FUN_144ba24f0(2,10,DVar3,"ssl\\ssl_cert.c");
        FUN_144ba2bd0(3,"OPENSSL_DIR_read(&ctx, \'",param_2,&DAT_1499778d4);
        local_438 = (char *)CONCAT44(local_438._4_4_,0x2e7);
        FUN_144ba24f0(0x14,0xd7,2,"ssl\\ssl_cert.c");
      }
LAB_144b9cdb8:
      if (local_428[0] != 0) {
        FUN_144ec6e60(local_428);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_458);
    }
    cVar1 = *pcVar4;
    pcVar5 = pcVar4;
    for (uVar7 = 0; (cVar1 != '\0' && (uVar7 < 0x80000000)); uVar7 = uVar7 + 1) {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    iVar2 = FUN_144b9cac0(param_2);
    if (0x400 < iVar2 + 2 + (uVar7 & 0x7fffffff)) {
      local_438 = (char *)CONCAT44(local_438._4_4_,0x2d6);
      FUN_144ba24f0(0x14,0xd7,0x10e,"ssl\\ssl_cert.c");
      goto LAB_144b9cdb8;
    }
    local_438 = pcVar4;
    iVar2 = FUN_144ec7760(local_418,0x400,"%s/%s",param_2);
    if (((iVar2 < 1) || (0x3ff < iVar2)) || (iVar2 = FUN_144b9cae0(param_1,local_418), iVar2 == 0))
    goto LAB_144b9cdb8;
    pcVar4 = (char *)FUN_144ec6b20(local_428,param_2);
  } while( true );
}



// FUNCTION 144b9ce00 FUN_144b9ce00 body=62 status=ok
// SIG undefined FUN_144b9ce00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9ce00(longlong param_1,undefined8 param_2)

{
  FUN_144babe00(*(undefined8 *)(param_1 + 0x5b8),FUN_144eabc40);
  *(undefined8 *)(param_1 + 0x5b8) = param_2;
  return;
}



// FUNCTION 144b9ce40 FUN_144b9ce40 body=62 status=ok
// SIG undefined FUN_144b9ce40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9ce40(longlong param_1,undefined8 param_2)

{
  FUN_144babe00(*(undefined8 *)(param_1 + 0x110),FUN_144eabc40);
  *(undefined8 *)(param_1 + 0x110) = param_2;
  return;
}



// FUNCTION 144b9ce80 FUN_144b9ce80 body=27 status=ok
// SIG undefined FUN_144b9ce80(void)

longlong FUN_144b9ce80(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x5b8);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x110);
  }
  return lVar1;
}



// FUNCTION 144b9cea0 FUN_144b9cea0 body=54 status=ok
// SIG undefined FUN_144b9cea0(void)

longlong FUN_144b9cea0(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x5c0);
    if (lVar1 == 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x118);
    }
    return lVar1;
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    return *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x260);
  }
  return 0;
}



// FUNCTION 144b9cee0 FUN_144b9cee0 body=29 status=ok
// SIG undefined FUN_144b9cee0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9cee0(longlong param_1)

{
  FUN_144b9e3c0(param_1 + 0x118);
  return;
}



// FUNCTION 144b9cf00 FUN_144b9cf00 body=66 status=ok
// SIG undefined FUN_144b9cf00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_144b9cf00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_144e986c0(&DAT_14c77f028,FUN_144b9e370,param_3,param_4,0x144b9cf0a);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_14c77f02c;
  }
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  return DAT_14c6d9920;
}



// FUNCTION 144b9cf50 FUN_144b9cf50 body=223 status=ok
// SIG undefined FUN_144b9cf50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144b9cf50(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144b9cf5c;
  plVar1 = (longlong *)FUN_144ea6670(0x218,"ssl\\ssl_cert.c",0x34);
  if (plVar1 == (longlong *)0x0) {
    FUN_144ba24f0(0x14,0xa2,0x41,"ssl\\ssl_cert.c",0x37,uVar3);
    return (longlong *)0x0;
  }
  *(undefined4 *)(plVar1 + 0x3e) = 1;
  *plVar1 = (longlong)(plVar1 + 4);
  plVar1[0x3d] = (longlong)FUN_144b9e190;
  *(undefined4 *)(plVar1 + 0x41) = 1;
  plVar1[0x3f] = 0;
  lVar2 = FUN_144e985a0();
  plVar1[0x42] = lVar2;
  if (lVar2 == 0) {
    FUN_144ba24f0(0x14,0xa2,0x41,"ssl\\ssl_cert.c",0x42,uVar3);
    FUN_144ea6530(plVar1,"ssl\\ssl_cert.c",0x43);
    return (longlong *)0x0;
  }
  return plVar1;
}



// FUNCTION 144b9d030 FUN_144b9d030 body=1028 status=ok
// SIG undefined FUN_144b9d030(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144b9d030(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  void *pvVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x144b9d040;
  plVar3 = (longlong *)FUN_144ea6670(0x218,"ssl\\ssl_cert.c",0x4c);
  if (plVar3 == (longlong *)0x0) {
    FUN_144ba24f0(0x14,0xdd,0x41,"ssl\\ssl_cert.c",0x50,uVar10);
    return (longlong *)0x0;
  }
  *(undefined4 *)(plVar3 + 0x41) = 1;
  *plVar3 = (longlong)(plVar3 + (((*param_1 - (longlong)param_1) + -0x20) / 0x28) * 5 + 4);
  lVar4 = FUN_144e985a0();
  plVar3[0x42] = lVar4;
  if (lVar4 == 0) {
    FUN_144ba24f0(0x14,0xdd,0x41,"ssl\\ssl_cert.c",0x58,uVar10);
    FUN_144ea6530(plVar3,"ssl\\ssl_cert.c",0x59);
    return (longlong *)0x0;
  }
  if (param_1[1] != 0) {
    plVar3[1] = param_1[1];
    FUN_144ba6e40();
  }
  plVar3[2] = param_1[2];
  lVar4 = 0;
  *(int *)(plVar3 + 3) = (int)param_1[3];
  lVar8 = (longlong)plVar3 - (longlong)param_1;
  plVar1 = param_1;
  do {
    plVar7 = plVar1 + 5;
    if (plVar1[4] != 0) {
      *(longlong *)(lVar8 + -8 + (longlong)plVar7) = plVar1[4];
      FUN_144bb6050();
    }
    if (*plVar7 != 0) {
      *(longlong *)(lVar8 + (longlong)plVar7) = *plVar7;
      FUN_144ba6e40(*plVar7);
    }
    if (plVar1[6] != 0) {
      lVar5 = FUN_144bb5320();
      *(longlong *)(lVar8 + 8 + (longlong)plVar7) = lVar5;
      if (lVar5 != 0) goto LAB_144b9d1a3;
      uVar9 = 0x75;
LAB_144b9d25f:
      FUN_144ba24f0(0x14,0xdd,0x41,"ssl\\ssl_cert.c",uVar9);
      goto LAB_144b9d279;
    }
LAB_144b9d1a3:
    if (plVar1[7] != 0) {
      pvVar6 = (void *)FUN_144ea64e0(plVar1[8],"ssl\\ssl_cert.c",0x7c);
      *(void **)(lVar8 + 0x10 + (longlong)plVar7) = pvVar6;
      if (pvVar6 == (void *)0x0) {
        uVar9 = 0x7e;
        goto LAB_144b9d25f;
      }
      *(longlong *)(lVar8 + 0x18 + (longlong)plVar7) = plVar1[8];
      memcpy(pvVar6,(void *)plVar1[7],plVar1[8]);
    }
    lVar4 = lVar4 + 1;
    plVar1 = plVar7;
  } while (lVar4 < 9);
  if (param_1[0x33] == 0) {
    plVar3[0x33] = 0;
  }
  else {
    pvVar6 = (void *)FUN_144ea64e0(param_1[0x34] * 2,"ssl\\ssl_cert.c",0x8a);
    plVar3[0x33] = (longlong)pvVar6;
    if (pvVar6 == (void *)0x0) goto LAB_144b9d279;
    memcpy(pvVar6,(void *)param_1[0x33],param_1[0x34] * 2);
    plVar3[0x34] = param_1[0x34];
  }
  if (param_1[0x35] == 0) {
    plVar3[0x35] = 0;
  }
  else {
    pvVar6 = (void *)FUN_144ea64e0(param_1[0x36] * 2,"ssl\\ssl_cert.c",0x95);
    plVar3[0x35] = (longlong)pvVar6;
    if (pvVar6 == (void *)0x0) goto LAB_144b9d279;
    memcpy(pvVar6,(void *)param_1[0x35],param_1[0x36] * 2);
    plVar3[0x36] = param_1[0x36];
  }
  if (param_1[0x31] != 0) {
    lVar4 = FUN_144ea6d10(param_1[0x31],param_1[0x32],"ssl\\ssl_cert.c",0x9f);
    plVar3[0x31] = lVar4;
    if (lVar4 == 0) goto LAB_144b9d279;
    plVar3[0x32] = param_1[0x32];
  }
  *(undefined4 *)((longlong)plVar3 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x1c);
  plVar3[0x37] = param_1[0x37];
  plVar3[0x38] = param_1[0x38];
  if (param_1[0x3a] != 0) {
    FUN_144bb4270();
    plVar3[0x3a] = param_1[0x3a];
  }
  if (param_1[0x39] != 0) {
    FUN_144bb4270();
    plVar3[0x39] = param_1[0x39];
  }
  plVar3[0x3d] = param_1[0x3d];
  *(int *)(plVar3 + 0x3e) = (int)param_1[0x3e];
  plVar3[0x3f] = param_1[0x3f];
  iVar2 = FUN_144eaf5a0(plVar3 + 0x3b,param_1 + 0x3b);
  if (iVar2 != 0) {
    if (param_1[0x40] == 0) {
      return plVar3;
    }
    lVar4 = FUN_144ea6dc0(param_1[0x40],"ssl\\ssl_cert.c",0xbc);
    plVar3[0x40] = lVar4;
    if (lVar4 != 0) {
      return plVar3;
    }
  }
LAB_144b9d279:
  FUN_144b9d4e0(plVar3);
  return (longlong *)0x0;
}



// FUNCTION 144b9d440 FUN_144b9d440 body=152 status=ok
// SIG undefined FUN_144b9d440(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9d440(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x30);
    lVar2 = 9;
    do {
      FUN_144b47250(puVar1[-2]);
      puVar1[-2] = 0;
      FUN_144ba6e60(puVar1[-1]);
      puVar1[-1] = 0;
      FUN_144babe00(*puVar1,FUN_144b47250);
      *puVar1 = 0;
      FUN_144ea6530(puVar1[1],"ssl\\ssl_cert.c",0xd8);
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 5;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144b9d4e0 FUN_144b9d4e0 body=238 status=ok
// SIG undefined FUN_144b9d4e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b9d4e0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x208);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      FUN_144ba6e60(*(undefined8 *)(param_1 + 8));
      FUN_144b9d440(param_1);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x198),"ssl\\ssl_cert.c",0xef);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x1a8),"ssl\\ssl_cert.c",0xf0);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x188),"ssl\\ssl_cert.c",0xf1);
      FUN_144bb4110(*(undefined8 *)(param_1 + 0x1d0));
      FUN_144bb4110(*(undefined8 *)(param_1 + 0x1c8));
      FUN_144eaf7a0(param_1 + 0x1d8);
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x200),"ssl\\ssl_cert.c",0xf6);
      FUN_144e98660(*(undefined8 *)(param_1 + 0x210));
      FUN_144ea6530(param_1,"ssl\\ssl_cert.c",0xf9);
    }
  }
  return;
}



// FUNCTION 144b9d5d0 FUN_144b9d5d0 body=249 status=ok
// SIG undefined FUN_144b9d5d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9d5d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144b9d5e3;
  if (param_1 == 0) {
    plVar3 = *(longlong **)(param_2 + 0x138);
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x488);
  }
  lVar1 = *plVar3;
  if (lVar1 != 0) {
    iVar5 = 0;
    iVar2 = FUN_144babbf0(param_3);
    if (0 < iVar2) {
      do {
        uVar4 = FUN_144babc00(param_3,iVar5);
        iVar2 = FUN_144ebbef0(param_1,param_2,uVar4,0,0,uVar6);
        if (iVar2 != 1) {
          FUN_144ba24f0(0x14,0x154,iVar2,"ssl\\ssl_cert.c",0x105);
          return 0;
        }
        iVar5 = iVar5 + 1;
        iVar2 = FUN_144babbf0(param_3);
      } while (iVar5 < iVar2);
    }
    FUN_144babe00(*(undefined8 *)(lVar1 + 0x10),FUN_144b47250);
    *(undefined8 *)(lVar1 + 0x10) = param_3;
    return 1;
  }
  return 0;
}



// FUNCTION 144b9d6d0 FUN_144b9d6d0 body=138 status=ok
// SIG undefined FUN_144b9d6d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9d6d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    uVar2 = FUN_144b9d5d0();
    return uVar2;
  }
  lVar3 = FUN_144bb5320(param_3);
  if (lVar3 != 0) {
    iVar1 = FUN_144b9d5d0(param_1,param_2,lVar3);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_144babe00(lVar3,FUN_144b47250);
  }
  return 0;
}



// FUNCTION 144b9d760 FUN_144b9d760 body=171 status=ok
// SIG undefined FUN_144b9d760(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9d760(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144b9d770;
  if (param_1 == 0) {
    plVar3 = *(longlong **)(param_2 + 0x138);
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x488);
  }
  lVar1 = *plVar3;
  if (lVar1 != 0) {
    iVar2 = FUN_144ebbef0();
    if (iVar2 == 1) {
      if (*(longlong *)(lVar1 + 0x10) == 0) {
        uVar4 = FUN_144babca0();
        *(undefined8 *)(lVar1 + 0x10) = uVar4;
      }
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        iVar2 = FUN_144bac1c0(*(longlong *)(lVar1 + 0x10),param_3);
        if (iVar2 != 0) {
          return 1;
        }
      }
    }
    else {
      FUN_144ba24f0(0x14,0x15a,iVar2,"ssl\\ssl_cert.c",0x125,uVar4);
    }
  }
  return 0;
}



// FUNCTION 144b9d810 FUN_144b9d810 body=52 status=ok
// SIG undefined FUN_144b9d810(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9d810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144b9d760();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  FUN_144bb6050(param_3);
  return 1;
}



// FUNCTION 144b9d850 FUN_144b9d850 body=180 status=ok
// SIG undefined FUN_144b9d850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144b9d850(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  plVar4 = param_1 + 4;
  lVar5 = 0;
  plVar2 = plVar4;
  lVar3 = lVar5;
  while ((*plVar2 != param_2 || (plVar2[1] == 0))) {
    lVar3 = lVar3 + 1;
    plVar2 = plVar2 + 5;
    if (8 < lVar3) {
      while (((plVar4[1] == 0 || (*plVar4 == 0)) ||
             (iVar1 = FUN_144bb53e0(*plVar4,param_2), iVar1 != 0))) {
        lVar5 = lVar5 + 1;
        plVar4 = plVar4 + 5;
        if (8 < lVar5) {
          return 0;
        }
      }
      *param_1 = plVar4;
      return 1;
    }
  }
  *param_1 = plVar2;
  return 1;
}



// FUNCTION 144b9d910 FUN_144b9d910 body=125 status=ok
// SIG undefined FUN_144b9d910(void)

undefined8 FUN_144b9d910(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if (param_2 == 1) {
    iVar3 = 0;
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    iVar3 = (int)(((*param_1 - (longlong)param_1) + -0x20) / 0x28) + 1;
    if (8 < iVar3) {
      return 0;
    }
  }
  lVar2 = (longlong)iVar3;
  if (lVar2 < 9) {
    plVar1 = param_1 + lVar2 * 5 + 4;
    do {
      if ((*plVar1 != 0) && (plVar1[1] != 0)) {
        *param_1 = (longlong)plVar1;
        return 1;
      }
      lVar2 = lVar2 + 1;
      plVar1 = plVar1 + 5;
    } while (lVar2 < 9);
  }
  return 0;
}



// FUNCTION 144b9d990 FUN_144b9d990 body=627 status=ok
// SIG undefined FUN_144b9d990(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144b9d990(longlong param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  undefined8 uVar9;
  
  uVar9 = 0x144b9d9a5;
  uVar4 = 0;
  if (param_2 != 0) {
    iVar2 = FUN_144babbf0(param_2);
    if (iVar2 != 0) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x488) + 0x1d0);
      if (lVar7 == 0) {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x20);
      }
      lVar5 = FUN_144baf720();
      if (lVar5 == 0) {
        FUN_144ba24f0(0x14,0xcf,0x41,"ssl\\ssl_cert.c",0x17d,uVar9);
        uVar4 = 0;
      }
      else {
        uVar6 = FUN_144babc00(param_2,0);
        iVar2 = FUN_144baf7b0(lVar5,lVar7,uVar6,param_2);
        if (iVar2 == 0) {
          FUN_144ba24f0(0x14,0xcf,0xb,"ssl\\ssl_cert.c",0x183,uVar9);
          FUN_144baf770(lVar5);
        }
        else {
          uVar9 = FUN_144bafd10(lVar5);
          uVar3 = FUN_144b9acc0(param_1);
          FUN_144eab250(uVar9,uVar3);
          FUN_144bafcf0(lVar5,*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000);
          uVar3 = FUN_144b9cf00();
          iVar2 = FUN_144bafb10(lVar5,uVar3,param_1);
          if (iVar2 != 0) {
            if (param_1 + 0xd8 != 0) {
              iVar2 = FUN_144babbf0(*(undefined8 *)(param_1 + 0xe0));
              if (0 < iVar2) {
                FUN_144bafd60(lVar5,param_1 + 0xd8);
              }
            }
            pcVar8 = "ssl_server";
            if (*(int *)(param_1 + 0x38) != 0) {
              pcVar8 = "ssl_client";
            }
            FUN_144bafd20(lVar5,pcVar8);
            FUN_144eab1f0(uVar9,*(undefined8 *)(param_1 + 0xd0));
            if (*(longlong *)(param_1 + 0x560) != 0) {
              FUN_144bafb00(lVar5);
            }
            pcVar1 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x98);
            if (pcVar1 == (code *)0x0) {
              uVar4 = FUN_144bb0090(lVar5);
            }
            else {
              uVar4 = (*pcVar1)(lVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0xa0));
            }
            uVar3 = FUN_144bafb50(lVar5);
            *(undefined4 *)(param_1 + 0x5a8) = uVar3;
            FUN_144babe00(*(undefined8 *)(param_1 + 0x5a0),FUN_144b47250);
            *(undefined8 *)(param_1 + 0x5a0) = 0;
            lVar7 = FUN_144bafb90(lVar5);
            if (lVar7 != 0) {
              lVar7 = FUN_144bafba0(lVar5);
              *(longlong *)(param_1 + 0x5a0) = lVar7;
              if (lVar7 == 0) {
                FUN_144ba24f0(0x14,0xcf,0x41,"ssl\\ssl_cert.c",0x1b3);
                uVar4 = 0;
              }
            }
            FUN_144eab390(*(undefined8 *)(param_1 + 0xd0),uVar9);
          }
          FUN_144baf770(lVar5);
        }
      }
      return uVar4;
    }
  }
  return 0;
}


