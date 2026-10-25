// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140e00912 FUN_140e00912 body=36 status=ok
// SIG undefined FUN_140e00912(void)

undefined8 FUN_140e00912(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 140e00936 FUN_140e00936 body=1041 status=ok
// SIG undefined FUN_140e00936(void)

undefined8 FUN_140e00936(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  void *pvVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  longlong lVar34;
  undefined8 *puVar35;
  
  if (param_4 != 0) {
    lVar34 = 0;
    do {
      lVar1 = param_3 + lVar34;
      lVar2 = param_2 + lVar34;
      FUN_140e0115a(lVar2,lVar1);
      puVar5 = (undefined4 *)(param_3 + 0xa8 + lVar34);
      uVar13 = puVar5[1];
      uVar14 = puVar5[2];
      uVar15 = puVar5[3];
      puVar6 = (undefined4 *)(param_2 + 0xa8 + lVar34);
      *puVar6 = *puVar5;
      puVar6[1] = uVar13;
      puVar6[2] = uVar14;
      puVar6[3] = uVar15;
      FUN_140e00d48(lVar2 + 0xb8,lVar1 + 0xb8);
      puVar5 = (undefined4 *)(param_3 + 200 + lVar34);
      uVar13 = puVar5[1];
      uVar14 = puVar5[2];
      uVar15 = puVar5[3];
      puVar6 = (undefined4 *)(param_2 + 200 + lVar34);
      *puVar6 = *puVar5;
      puVar6[1] = uVar13;
      puVar6[2] = uVar14;
      puVar6[3] = uVar15;
      *(undefined1 *)(param_2 + 0xd8 + lVar34) = *(undefined1 *)(param_3 + 0xd8 + lVar34);
      FUN_140e00d48(lVar2 + 0xe0,lVar1 + 0xe0);
      if (param_2 == param_3) {
        puVar35 = (undefined8 *)(param_3 + 0x100 + lVar34);
        uVar9 = *puVar35;
        uVar28 = puVar35[1];
        puVar35 = (undefined8 *)(param_3 + 0x110 + lVar34);
        uVar29 = *puVar35;
        uVar30 = puVar35[1];
        puVar35 = (undefined8 *)(param_3 + 0x120 + lVar34);
        uVar31 = *puVar35;
        uVar32 = puVar35[1];
        puVar35 = (undefined8 *)(param_3 + 0x12a + lVar34);
        uVar33 = puVar35[1];
        puVar7 = (undefined8 *)(param_2 + 0x12a + lVar34);
        *puVar7 = *puVar35;
        puVar7[1] = uVar33;
        puVar35 = (undefined8 *)(param_2 + 0x120 + lVar34);
        *puVar35 = uVar31;
        puVar35[1] = uVar32;
        puVar35 = (undefined8 *)(param_2 + 0x110 + lVar34);
        *puVar35 = uVar29;
        puVar35[1] = uVar30;
        puVar35 = (undefined8 *)(param_2 + 0x100 + lVar34);
        *puVar35 = uVar9;
        puVar35[1] = uVar28;
      }
      else {
        FUN_140d46dbd(*(undefined8 *)(param_2 + 0xf0 + lVar34),
                      *(undefined4 *)(param_2 + 0xf8 + lVar34));
        iVar8 = *(int *)(param_3 + 0xf8 + lVar34);
        uVar9 = *(undefined8 *)(param_3 + 0xf0 + lVar34);
        *(int *)(param_2 + 0xf8 + lVar34) = iVar8;
        if (iVar8 == 0 && *(int *)(param_2 + 0xfc + lVar34) == 0) {
          *(undefined4 *)(param_2 + 0xfc + lVar34) = 0;
        }
        else {
          puVar35 = (undefined8 *)(param_2 + lVar34 + 0xf0);
          FUN_140e00da0(puVar35,iVar8);
          FUN_140e00ef1(*puVar35,uVar9,iVar8);
        }
        puVar5 = (undefined4 *)(param_3 + 0x100 + lVar34);
        uVar13 = *puVar5;
        uVar14 = puVar5[1];
        uVar15 = puVar5[2];
        uVar16 = puVar5[3];
        puVar5 = (undefined4 *)(param_3 + 0x110 + lVar34);
        uVar17 = *puVar5;
        uVar18 = puVar5[1];
        uVar19 = puVar5[2];
        uVar20 = puVar5[3];
        puVar5 = (undefined4 *)(param_3 + 0x120 + lVar34);
        uVar21 = *puVar5;
        uVar22 = puVar5[1];
        uVar23 = puVar5[2];
        uVar24 = puVar5[3];
        puVar5 = (undefined4 *)(param_3 + 0x12a + lVar34);
        uVar25 = puVar5[1];
        uVar26 = puVar5[2];
        uVar27 = puVar5[3];
        puVar6 = (undefined4 *)(param_2 + 0x12a + lVar34);
        *puVar6 = *puVar5;
        puVar6[1] = uVar25;
        puVar6[2] = uVar26;
        puVar6[3] = uVar27;
        puVar5 = (undefined4 *)(param_2 + 0x120 + lVar34);
        *puVar5 = uVar21;
        puVar5[1] = uVar22;
        puVar5[2] = uVar23;
        puVar5[3] = uVar24;
        puVar5 = (undefined4 *)(param_2 + 0x110 + lVar34);
        *puVar5 = uVar17;
        puVar5[1] = uVar18;
        puVar5[2] = uVar19;
        puVar5[3] = uVar20;
        puVar5 = (undefined4 *)(param_2 + 0x100 + lVar34);
        *puVar5 = uVar13;
        puVar5[1] = uVar14;
        puVar5[2] = uVar15;
        puVar5[3] = uVar16;
        iVar8 = *(int *)(param_3 + 0x148 + lVar34);
        pvVar10 = *(void **)(param_3 + 0x140 + lVar34);
        *(int *)(param_2 + 0x148 + lVar34) = iVar8;
        if (iVar8 == 0 && *(int *)(param_2 + 0x14c + lVar34) == 0) {
          *(undefined4 *)(param_2 + 0x14c + lVar34) = 0;
        }
        else {
          puVar35 = (undefined8 *)(param_2 + lVar34 + 0x140);
          FUN_1474d69f2(puVar35,iVar8);
          if (iVar8 != 0) {
            memcpy((void *)*puVar35,pvVar10,(longlong)iVar8 << 3);
          }
        }
        iVar8 = *(int *)(param_3 + 0x158 + lVar34);
        pvVar10 = *(void **)(param_3 + 0x150 + lVar34);
        *(int *)(param_2 + 0x158 + lVar34) = iVar8;
        if (iVar8 == 0 && *(int *)(param_2 + 0x15c + lVar34) == 0) {
          *(undefined4 *)(param_2 + 0x15c + lVar34) = 0;
        }
        else {
          puVar35 = (undefined8 *)(param_2 + lVar34 + 0x150);
          FUN_144756262(puVar35,iVar8);
          if (iVar8 != 0) {
            memcpy((void *)*puVar35,pvVar10,(longlong)iVar8 * 0x60);
          }
        }
      }
      *(undefined1 *)(param_2 + 0x160 + lVar34) = *(undefined1 *)(param_3 + 0x160 + lVar34);
      FUN_140472df2(lVar2 + 0x168,lVar1 + 0x168);
      *(undefined8 *)(param_2 + 0x178 + lVar34) = *(undefined8 *)(param_3 + 0x178 + lVar34);
      uVar9 = *(undefined8 *)(param_3 + 0x180 + lVar34);
      lVar11 = *(longlong *)(param_3 + 0x188 + lVar34);
      if (lVar11 != 0) {
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        UNLOCK();
      }
      plVar12 = *(longlong **)(param_2 + 0x188 + lVar34);
      *(undefined8 *)(param_2 + 0x180 + lVar34) = uVar9;
      *(longlong *)(param_2 + 0x188 + lVar34) = lVar11;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar12 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar4 = (int *)((longlong)plVar12 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      if (lVar2 != lVar1) {
        iVar8 = *(int *)(param_3 + 0x198 + lVar34);
        pvVar10 = *(void **)(param_3 + 400 + lVar34);
        *(int *)(param_2 + 0x198 + lVar34) = iVar8;
        if (iVar8 == 0 && *(int *)(param_2 + 0x19c + lVar34) == 0) {
          *(undefined4 *)(param_2 + 0x19c + lVar34) = 0;
        }
        else {
          puVar35 = (undefined8 *)(param_2 + lVar34 + 400);
          FUN_1447c510a(puVar35,iVar8);
          if (iVar8 != 0) {
            memcpy((void *)*puVar35,pvVar10,(longlong)iVar8 << 2);
          }
        }
        FUN_140d46ec5(*(undefined8 *)(param_2 + 0x1a0 + lVar34),
                      *(undefined4 *)(param_2 + 0x1a8 + lVar34));
        iVar8 = *(int *)(param_3 + 0x1a8 + lVar34);
        uVar9 = *(undefined8 *)(param_3 + 0x1a0 + lVar34);
        *(int *)(param_2 + 0x1a8 + lVar34) = iVar8;
        if (iVar8 == 0 && *(int *)(param_2 + 0x1ac + lVar34) == 0) {
          *(undefined4 *)(param_2 + 0x1ac + lVar34) = 0;
        }
        else {
          puVar35 = (undefined8 *)(param_2 + lVar34 + 0x1a0);
          FUN_1474d6a54(puVar35,iVar8);
          FUN_1474d6ac7(*puVar35,uVar9,iVar8);
        }
      }
      lVar34 = lVar34 + 0x1b0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140e00d48 FUN_140e00d48 body=88 status=ok
// SIG undefined FUN_140e00d48(void)

undefined8 * FUN_140e00d48(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1409c2a84(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 140e00da0 FUN_140e00da0 body=337 status=ok
// SIG undefined FUN_140e00da0(void)

void FUN_140e00da0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 200;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e00e11;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_140e00e11:
    iVar5 = (int)(uVar4 / 200);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,200,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140e00ef1 FUN_140e00ef1 body=383 status=ok
// SIG undefined FUN_140e00ef1(void)

void FUN_140e00ef1(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  
  if (param_3 != 0) {
    puVar10 = (undefined8 *)(param_1 + 0xa0);
    puVar11 = (undefined4 *)(param_2 + 0xb0);
    do {
      puVar10[-0x14] = 0;
      iVar1 = puVar11[-0x2a];
      pvVar2 = *(void **)(puVar11 + -0x2c);
      *(int *)(puVar10 + -0x13) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar10 + -0x94) = 0;
      }
      else {
        FUN_140e01070(puVar10 + -0x14,iVar1,0);
        memcpy((void *)puVar10[-0x14],pvVar2,(longlong)iVar1 * 0x30);
      }
      uVar3 = puVar11[-0x28];
      uVar4 = puVar11[-0x27];
      uVar5 = puVar11[-0x26];
      uVar6 = puVar11[-0x25];
      uVar7 = *(undefined4 *)((longlong)puVar11 + -0x8d);
      uVar8 = *(undefined4 *)((longlong)puVar11 + -0x89);
      uVar9 = *(undefined4 *)((longlong)puVar11 + -0x85);
      *(undefined4 *)((longlong)puVar10 + -0x81) = *(undefined4 *)((longlong)puVar11 + -0x91);
      *(undefined4 *)((longlong)puVar10 + -0x7d) = uVar7;
      *(undefined4 *)((longlong)puVar10 + -0x79) = uVar8;
      *(undefined4 *)((longlong)puVar10 + -0x75) = uVar9;
      *(undefined4 *)(puVar10 + -0x12) = uVar3;
      *(undefined4 *)((longlong)puVar10 + -0x8c) = uVar4;
      *(undefined4 *)(puVar10 + -0x11) = uVar5;
      *(undefined4 *)((longlong)puVar10 + -0x84) = uVar6;
      puVar10[-9] = 0;
      *(undefined4 *)(puVar10 + -8) = 0;
      puVar10[-0xd] = 0;
      puVar10[-0xc] = 0;
      *(undefined8 *)((longlong)puVar10 + -0x3c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar10 + -0x34) = 0;
      puVar10[-5] = 0;
      *(undefined4 *)(puVar10 + -4) = 0;
      puVar10[-3] = 0;
      puVar10[-2] = 0;
      puVar10[-0xe] = &PTR_FUN_14a176fc0;
      *(undefined4 *)(puVar10 + -1) = puVar11[-6];
      *(undefined2 *)((longlong)puVar10 + -4) = *(undefined2 *)(puVar11 + -5);
      puVar10[-0xe] = &DAT_14a176f00;
      *puVar10 = 0;
      iVar1 = puVar11[-2];
      pvVar2 = *(void **)(puVar11 + -4);
      *(int *)(puVar10 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
      }
      else {
        FUN_140501c24(puVar10,iVar1,0);
        memcpy((void *)*puVar10,pvVar2,(longlong)iVar1 * 0x1c);
      }
      *(undefined1 *)(puVar10 + 4) = *(undefined1 *)(puVar11 + 4);
      uVar3 = puVar11[1];
      uVar4 = puVar11[2];
      uVar5 = puVar11[3];
      *(undefined4 *)(puVar10 + 2) = *puVar11;
      *(undefined4 *)((longlong)puVar10 + 0x14) = uVar3;
      *(undefined4 *)(puVar10 + 3) = uVar4;
      *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar5;
      puVar10 = puVar10 + 0x19;
      puVar11 = puVar11 + 0x32;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140e01070 FUN_140e01070 body=233 status=ok
// SIG undefined FUN_140e01070(void)

void FUN_140e01070(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x30;
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
    iVar1 = (int)(uVar3 / 0x30);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x30,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140e0115a FUN_140e0115a body=393 status=ok
// SIG undefined FUN_140e0115a(void)

longlong FUN_140e0115a(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  longlong lVar11;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x35) = *(undefined8 *)(param_2 + 0x35);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 0x20);
  uVar6 = *(undefined4 *)(param_2 + 0x24);
  uVar7 = *(undefined4 *)(param_2 + 0x2c);
  uVar8 = *(undefined4 *)(param_2 + 0x30);
  uVar9 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar7;
  *(undefined4 *)(param_1 + 0x30) = uVar8;
  *(undefined4 *)(param_1 + 0x34) = uVar9;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  lVar11 = *(longlong *)(param_2 + 0x40);
  if (DAT_14c950c29 == '\x01') {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = *(longlong *)(param_2 + 0x40);
    }
  }
  *(longlong *)(param_1 + 0x40) = lVar11;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x54);
  uVar4 = *(undefined4 *)(param_2 + 0x58);
  uVar5 = *(undefined4 *)(param_2 + 0x5c);
  uVar6 = *(undefined4 *)(param_2 + 0x59);
  uVar7 = *(undefined4 *)(param_2 + 0x5d);
  uVar8 = *(undefined4 *)(param_2 + 0x61);
  uVar9 = *(undefined4 *)(param_2 + 0x65);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  *(undefined4 *)(param_1 + 0x59) = uVar6;
  *(undefined4 *)(param_1 + 0x5d) = uVar7;
  *(undefined4 *)(param_1 + 0x61) = uVar8;
  *(undefined4 *)(param_1 + 0x65) = uVar9;
  FUN_140e012e4(param_1 + 0x70,param_2 + 0x70);
  if (param_1 == param_2) {
    return param_1;
  }
  iVar1 = *(int *)(param_2 + 0x88);
  pvVar2 = *(void **)(param_2 + 0x80);
  *(int *)(param_1 + 0x88) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0x8c) == 0) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  else {
    FUN_1447cd5fa((undefined8 *)(param_1 + 0x80),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0x80),pvVar2,(longlong)iVar1);
    }
  }
  if (*(char *)(param_2 + 0x91) == '\x01') {
    *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
    uVar10 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x91) != '\x01') goto LAB_140e01239;
    uVar10 = 0;
  }
  *(undefined1 *)(param_1 + 0x91) = uVar10;
LAB_140e01239:
  iVar1 = *(int *)(param_2 + 0xa0);
  pvVar2 = *(void **)(param_2 + 0x98);
  *(int *)(param_1 + 0xa0) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0xa4) == 0) {
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  else {
    FUN_1447c510a((undefined8 *)(param_1 + 0x98),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0x98),pvVar2,(longlong)iVar1 << 2);
    }
  }
  return param_1;
}



// FUNCTION 140e012e4 FUN_140e012e4 body=88 status=ok
// SIG undefined FUN_140e012e4(void)

undefined8 * FUN_140e012e4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474d60b6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 140e0133c FUN_140e0133c body=40 status=ok
// SIG undefined FUN_140e0133c(void)

undefined8 FUN_140e0133c(undefined8 param_1,int param_2)

{
  FUN_140e01364();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e01364 FUN_140e01364 body=351 status=ok
// SIG undefined FUN_140e01364(void)

void FUN_140e01364(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0727c0;
  param_1[0x72] = &PTR_FUN_14b072e00;
  param_1[0x87] = &PTR_FUN_14b072ea0;
  param_1[0x88] = &PTR_FUN_14b072f40;
  if (param_1[0xc2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xbb] != 0) {
    FUN_1400020a8();
  }
  FUN_14028f4a8(param_1 + 0x9e);
  FUN_1447cd778(param_1[0x9c],*(undefined4 *)(param_1 + 0x9d));
  if (param_1[0x9c] != 0) {
    FUN_1400020a8();
  }
  FUN_140996410(param_1 + 0x91,1);
  param_1[0x8d] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)((longlong)param_1 + 0x484) != 0) {
    FUN_140115c12(param_1 + 0x8f,0);
  }
  param_1[0x8e] = 0;
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x89] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  if (*(int *)((longlong)param_1 + 0x464) != 0) {
    FUN_140115c12(param_1 + 0x8b,0);
  }
  param_1[0x8a] = 0;
  if (param_1[0x8b] != 0) {
    FUN_1400020a8();
  }
  FUN_14034d9a0(param_1);
  return;
}



// FUNCTION 140e014c4 FUN_140e014c4 body=68 status=ok
// SIG undefined FUN_140e014c4(void)

undefined8 * FUN_140e014c4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e416b0;
  if (param_1[7] != 0) {
    FUN_140e0154a(param_1,1);
  }
  FUN_140e01508(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e01508 FUN_140e01508 body=66 status=ok
// SIG undefined FUN_140e01508(void)

void FUN_140e01508(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_149e15cd0;
  if (DAT_14c872bd8 == '\0') {
    FUN_141033dca();
    FUN_1459af332(&DAT_14c842770,param_1);
  }
  FUN_14275d8c2(param_1 + 1);
  return;
}



// FUNCTION 140e0154a FUN_140e0154a body=72 status=ok
// SIG undefined FUN_140e0154a(void)

undefined8 FUN_140e0154a(longlong param_1,char param_2)

{
  BOOL BVar1;
  undefined4 extraout_var;
  
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  }
  if (param_2 != '\0') {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x38),0xffffffff);
  }
  BVar1 = CloseHandle(*(HANDLE *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
}



// FUNCTION 140e01592 FUN_140e01592 body=1558 status=ok
// SIG undefined FUN_140e01592(void)

uint * FUN_140e01592(longlong param_1,uint *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  byte bVar14;
  int iVar15;
  uint *puVar16;
  longlong *plVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  longlong *plVar21;
  uint uVar22;
  undefined4 *puVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  
  puVar8 = (uint *)FUN_140e01ba8(&DAT_14cb7ca90);
  puVar8[0] = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  iVar26 = *(int *)(param_1 + 0x350);
  uVar7 = *param_2;
  if ((longlong)iVar26 == -1) {
    if (((uVar7 != 0) && (param_2[1] != 0)) && (uVar7 != DAT_14c948000)) {
      puVar9 = &DAT_14c948028;
      goto LAB_140e01607;
    }
LAB_140e01a12:
    puVar9 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
    uVar7 = (uint)DAT_14c948618;
  }
  else {
    if (((uVar7 == 0) || (uVar25 = param_2[1], uVar25 == 0)) || (uVar7 == DAT_14c948000))
    goto LAB_140e01a12;
    puVar12 = param_2 + 2;
    if (0 < (int)param_2[9]) {
      puVar12 = *(uint **)(param_2 + 6);
    }
    if (1 < (int)uVar25) {
      puVar12 = *(uint **)(param_2 + 6);
    }
    if (uVar25 == 1 && 0 < iVar26) {
      puVar16 = (uint *)&DAT_14c948618;
      if (*(int *)(param_1 + 0x354) == 1) {
        puVar16 = puVar12;
      }
      uVar7 = *puVar16;
      puVar9 = (ulonglong *)(puVar16 + 1);
    }
    else {
      if ((int)uVar25 <= iVar26) goto LAB_140e01a12;
      puVar9 = (ulonglong *)(puVar12 + (longlong)iVar26 * 3 + 1);
      uVar7 = puVar12[(longlong)iVar26 * 3];
    }
  }
LAB_140e01607:
  plVar17 = (longlong *)(param_1 + 0x300);
  uVar11 = *puVar9;
  if (*(int *)(param_1 + 0x334) == 0) {
    iVar26 = *(int *)(param_1 + 0x308);
    *(int *)(param_1 + 0x308) = iVar26 + 1;
    if (*(int *)(param_1 + 0x30c) == iVar26) {
      FUN_1447711aa(plVar17,iVar26);
    }
    iVar20 = *(int *)(param_1 + 0x328);
    if (iVar20 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar6 = iVar20 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    lVar19 = param_1 + 0x310;
    iVar15 = iVar20 + 1;
    iVar24 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar24 = iVar20;
    }
    if (iVar24 >> 5 == iVar6) {
      *(int *)(param_1 + 0x328) = iVar15;
    }
    else {
      if (*(int *)(param_1 + 0x32c) <= iVar20) {
        if (iVar20 + 0x20U < 0xa0) {
          iVar15 = 0x80;
          iVar6 = iVar20;
        }
        else {
          uVar25 = iVar20 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x32c) + 0x1fU < 0xa0) {
            uVar18 = 4;
            if (4 < uVar25) {
              uVar18 = uVar25;
            }
          }
          else {
            uVar18 = (uVar25 * 3 >> 3) + uVar25 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar18 << 2,0);
          iVar6 = (int)(uVar13 >> 2);
          iVar15 = -0x20;
          if ((int)uVar25 <= iVar6) {
            iVar15 = iVar6 << 5;
          }
          iVar6 = *(int *)(param_1 + 0x328);
        }
        *(int *)(param_1 + 0x32c) = iVar15;
        FUN_1446efbd8(lVar19,iVar6);
        iVar15 = *(int *)(param_1 + 0x328) + 1;
      }
      iVar6 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar6 = iVar15;
      }
      *(int *)(param_1 + 0x328) = iVar15;
      if (iVar15 % 0x20 != 0) {
        lVar10 = *(longlong *)(param_1 + 800);
        if (*(longlong *)(param_1 + 800) == 0) {
          lVar10 = lVar19;
        }
        bVar14 = -(char)(iVar15 % 0x20);
        *(uint *)(lVar10 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(lVar10 + (longlong)(iVar6 >> 5) * 4) << (bVar14 & 0x1f)) >>
             (bVar14 & 0x1f);
      }
    }
    lVar10 = (longlong)iVar26;
    if (*(longlong *)(param_1 + 800) != 0) {
      lVar19 = *(longlong *)(param_1 + 800);
    }
    bVar14 = (byte)iVar20 & 0x1f;
    puVar12 = (uint *)(lVar19 + (longlong)(iVar24 >> 5) * 4);
    *puVar12 = *puVar12 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
  }
  else {
    iVar26 = *(int *)(param_1 + 0x330);
    lVar10 = (longlong)iVar26;
    iVar20 = *(int *)(*(longlong *)(param_1 + 0x300) + 4 + lVar10 * 0x20);
    *(int *)(param_1 + 0x330) = iVar20;
    iVar6 = *(int *)(param_1 + 0x334) + -1;
    *(int *)(param_1 + 0x334) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x300) + (longlong)iVar20 * 0x20) = 0xffffffff;
    }
  }
  iVar20 = 1;
  lVar19 = param_1 + 0x310;
  if (*(longlong *)(param_1 + 800) != 0) {
    lVar19 = *(longlong *)(param_1 + 800);
  }
  iVar6 = iVar26 + 0x1f;
  if (-1 < iVar26) {
    iVar6 = iVar26;
  }
  puVar12 = (uint *)(lVar19 + (longlong)(iVar6 >> 5) * 4);
  *puVar12 = *puVar12 | 1 << ((byte)iVar26 & 0x1f);
  lVar19 = *(longlong *)(param_1 + 0x300);
  lVar10 = lVar10 * 0x20;
  *(uint *)(lVar19 + lVar10) = uVar7;
  *(ulonglong *)(lVar19 + 4 + lVar10) = uVar11;
  *(uint **)(lVar19 + 0x10 + lVar10) = puVar8;
  *(undefined4 *)(lVar19 + 0x18 + lVar10) = 0xffffffff;
  if (uVar11 >> 0x20 != 0) {
    uVar25 = (uint)(uVar11 >> 0x20);
    uVar7 = uVar25 >> 0xd ^ uVar7 - uVar25;
    uVar18 = uVar7 << 8 ^ (-0x61c88647 - uVar7) - uVar25;
    uVar25 = uVar18 >> 0xd ^ (uVar25 - uVar7) - uVar18;
    uVar7 = uVar25 >> 0xc ^ (uVar7 - uVar18) - uVar25;
    uVar22 = uVar7 << 0x10 ^ (uVar18 - uVar25) - uVar7;
    uVar25 = uVar22 >> 5 ^ (uVar25 - uVar7) - uVar22;
    uVar18 = uVar25 >> 3 ^ (uVar7 - uVar22) - uVar25;
    uVar7 = uVar18 << 10 ^ (uVar22 - uVar25) - uVar18;
    uVar7 = uVar7 >> 0xf ^ uVar25 - (uVar18 + uVar7);
  }
  puVar23 = (undefined4 *)(lVar19 + lVar10);
  uVar25 = *(int *)(param_1 + 0x308) - *(int *)(param_1 + 0x334);
  if (uVar25 == 1) {
LAB_140e0176d:
    if (((int)uVar25 < 1) || (iVar20 <= *(int *)(param_1 + 0x348))) {
      uVar7 = *(int *)(param_1 + 0x348) - 1U & uVar7;
      puVar23[7] = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x340);
      if (*(longlong *)(param_1 + 0x340) == 0) {
        lVar10 = param_1 + 0x338;
      }
      puVar23[6] = *(undefined4 *)
                    (lVar10 + ((longlong)*(int *)(param_1 + 0x348) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar10 = *(longlong *)(param_1 + 0x340);
      if (*(longlong *)(param_1 + 0x340) == 0) {
        lVar10 = param_1 + 0x338;
      }
      *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x348) - 1U & (longlong)(int)uVar7) * 4) =
           iVar26;
    }
    else {
      *(int *)(param_1 + 0x348) = iVar20;
      FUN_140e01c5c(plVar17);
    }
  }
  else {
    iVar6 = FUN_140e01bfc(plVar17,uVar7,puVar23);
    if (iVar6 == -1) {
      if (3 < uVar25) {
        uVar11 = (ulonglong)(uVar25 & 0xfffffffe) + 0xf;
        lVar10 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar20 = 1 << ((byte)lVar10 & 0x1f);
      }
      goto LAB_140e0176d;
    }
    lVar10 = *plVar17;
    uVar2 = *puVar23;
    uVar3 = puVar23[1];
    uVar4 = puVar23[2];
    uVar5 = puVar23[3];
    *(undefined8 *)(lVar10 + 0x10 + (longlong)iVar6 * 0x20) = *(undefined8 *)(puVar23 + 4);
    puVar23 = (undefined4 *)(lVar10 + (longlong)iVar6 * 0x20);
    *puVar23 = uVar2;
    puVar23[1] = uVar3;
    puVar23[2] = uVar4;
    puVar23[3] = uVar5;
    FUN_14884dcac(plVar17,iVar26);
  }
  iVar26 = *(int *)(param_1 + 0x350);
  uVar7 = *param_2;
  if ((longlong)iVar26 == -1) {
    if (((uVar7 != 0) && (param_2[1] != 0)) && (uVar7 != DAT_14c948000)) {
      puVar16 = (uint *)&DAT_14c948028;
      goto LAB_140e01812;
    }
  }
  else if (((uVar7 != 0) && (uVar25 = param_2[1], uVar25 != 0)) && (uVar7 != DAT_14c948000)) {
    puVar12 = param_2 + 2;
    if (0 < (int)param_2[9]) {
      puVar12 = *(uint **)(param_2 + 6);
    }
    if (1 < (int)uVar25) {
      puVar12 = *(uint **)(param_2 + 6);
    }
    if (uVar25 == 1 && 0 < iVar26) {
      puVar16 = (uint *)&DAT_14c948618;
      if (*(int *)(param_1 + 0x354) == 1) {
        puVar16 = puVar12;
      }
      uVar7 = *puVar16;
      puVar16 = puVar16 + 1;
      goto LAB_140e01812;
    }
    if (iVar26 < (int)uVar25) {
      puVar16 = puVar12 + (longlong)iVar26 * 3 + 1;
      uVar7 = puVar12[(longlong)iVar26 * 3];
      goto LAB_140e01812;
    }
  }
  puVar16 = (uint *)((longlong)&DAT_14c948618 + 4);
  uVar7 = (uint)DAT_14c948618;
LAB_140e01812:
  uVar1 = *(undefined8 *)puVar16;
  *puVar8 = uVar7;
  *(undefined8 *)(puVar8 + 1) = uVar1;
  if (param_3 != 0) {
    *(uint **)(param_3 + 0x38) = puVar8;
  }
  plVar17 = (longlong *)(param_1 + 0x2f8);
  if (*(longlong *)(param_1 + 0x2f0) == 0) {
    plVar21 = (longlong *)(param_1 + 0x2f0);
  }
  else {
    plVar21 = plVar17;
    plVar17 = (longlong *)(*plVar17 + 0x28);
  }
  *plVar17 = (longlong)puVar8;
  *plVar21 = (longlong)puVar8;
  return puVar8;
}



// FUNCTION 140e01ba8 FUN_140e01ba8 body=84 status=ok
// SIG undefined FUN_140e01ba8(void)

void FUN_140e01ba8(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x1800,0);
    lVar4 = 0x7f;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 6;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x80;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 140e01bfc FUN_140e01bfc body=95 status=ok
// SIG undefined FUN_140e01bfc(void)

int FUN_140e01bfc(longlong *param_1,uint param_2,int *param_3)

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
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140e01c5c FUN_140e01c5c body=722 status=ok
// SIG undefined FUN_140e01c5c(void)

void FUN_140e01c5c(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar11 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar11 = local_68 >> 0x20;
    }
    iVar4 = (int)local_68;
    uVar5 = (uint)local_58;
    iVar6 = local_58._4_4_;
    iVar10 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar13 = *param_1;
        lVar12 = (longlong)iVar6 * 0x20;
        uVar3 = *(uint *)(lVar13 + lVar12);
        uVar14 = *(uint *)(lVar13 + 8 + lVar12);
        if (uVar14 != 0) {
          uVar16 = uVar14 >> 0xd ^ uVar3 - uVar14;
          uVar3 = uVar16 << 8 ^ (-0x61c88647 - uVar14) - uVar16;
          uVar14 = uVar3 >> 0xd ^ (uVar14 - uVar16) - uVar3;
          uVar15 = uVar14 >> 0xc ^ (uVar16 - uVar3) - uVar14;
          uVar3 = uVar15 << 0x10 ^ (uVar3 - uVar14) - uVar15;
          uVar16 = uVar3 >> 5 ^ (uVar14 - uVar15) - uVar3;
          uVar14 = uVar16 >> 3 ^ (uVar15 - uVar3) - uVar16;
          uVar3 = uVar14 << 10 ^ (uVar3 - uVar16) - uVar14;
          uVar3 = uVar3 >> 0xf ^ uVar16 - (uVar14 + uVar3);
        }
        uVar9 = (longlong)(int)uVar3 & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar13 + lVar12 + 0x1c) = iVar8;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar13 + lVar12 + 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        uVar5 = uVar5 & ~(uint)uVar11;
        plVar7 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar7 = local_60;
        }
        iVar8 = (int)local_60[3];
        lVar13 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar13 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar8 + 0x1e;
          if (-1 < iVar8 + -1) {
            iVar6 = iVar8 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar12 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar12 * 4 + lVar13 * 4 + 4);
            if (uVar3 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar2 - lVar13 == lVar12) goto LAB_140e01f07;
          }
          iVar4 = iVar4 + (int)lVar12 + 1;
          uVar5 = 0xffffffff;
        }
        uVar11 = (ulonglong)(-uVar3 & uVar3);
        uVar9 = uVar11 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar8);
    }
  }
LAB_140e01f07:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e01f36 FUN_140e01f36 body=57 status=ok
// SIG undefined FUN_140e01f36(void)

void FUN_140e01f36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7338 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7338 = FUN_140002ddd(FUN_1465cb66a,uVar1,L"OakBodyNodeSettings_AICloakingSwitch");
  }
  return;
}



// FUNCTION 140e01f6f FUN_140e01f6f body=425 status=ok
// SIG undefined FUN_140e01f6f(void)

undefined8
FUN_140e01f6f(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) {
    uVar2 = 0;
  }
  else {
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x38) + 0x1e9) == '\x01') {
      cVar1 = FUN_144a61b4f();
      if ((cVar1 != '\0') ||
         (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002)) {
        local_98 = param_5[2];
        local_f8 = &local_a8;
        local_a8 = *param_5;
        uStack_a0 = param_5[1];
        local_c8 = *param_4;
        uStack_c4 = param_4[1];
        uStack_c0 = param_4[2];
        uStack_bc = param_4[3];
        local_b8 = *(undefined8 *)(param_4 + 4);
        local_d0 = param_10;
        local_d8 = param_9;
        local_e0 = param_8;
        local_e8 = param_7;
        local_f0 = param_6;
        uVar2 = FUN_143446526(param_1,param_2,param_3);
        goto LAB_140e02053;
      }
    }
    local_58 = param_5[2];
    local_f8 = &local_68;
    local_68 = *param_5;
    uStack_60 = param_5[1];
    local_88 = *param_4;
    uStack_84 = param_4[1];
    uStack_80 = param_4[2];
    uStack_7c = param_4[3];
    local_78 = *(undefined8 *)(param_4 + 4);
    local_d0 = param_10;
    local_d8 = param_9;
    local_e0 = param_8;
    local_e8 = param_7;
    local_f0 = param_6;
    uVar2 = FUN_140e02119(param_1,param_2,param_3);
  }
LAB_140e02053:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e02119 FUN_140e02119 body=606 status=ok
// SIG undefined FUN_140e02119(void)

undefined8
FUN_140e02119(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 param_9)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined4 local_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  char local_c9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  longlong local_78;
  undefined8 local_70;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  bVar5 = true;
  local_150 = &local_c9;
  local_c9 = '\x01';
  local_a4 = 0;
  local_a0 = 0x101;
  local_78 = 0;
  local_70 = 0x800000000;
  local_58 = 0;
  local_50 = 0x400000000;
  local_b8 = 0;
  local_ac = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b7 = 1;
  local_b5 = 0;
  local_a8 = 0;
  local_b4 = 0x1000000;
  local_b0 = 1;
  local_d8 = param_5[2];
  local_178 = &local_e8;
  local_e8 = *param_5;
  uStack_e0 = param_5[1];
  local_f8 = *(undefined8 *)(param_4 + 4);
  local_108 = *param_4;
  uStack_104 = param_4[1];
  uStack_100 = param_4[2];
  uStack_fc = param_4[3];
  local_158 = param_9;
  local_160 = param_8;
  local_168 = param_7;
  local_170 = param_6;
  uVar2 = FUN_143446785(param_1,param_2,param_3);
  if (local_c9 == '\x01') {
    uVar2 = 10;
    do {
      local_118 = param_5[2];
      local_128 = *param_5;
      uStack_120 = param_5[1];
      local_148 = *param_4;
      uStack_144 = param_4[1];
      uStack_140 = param_4[2];
      uStack_13c = param_4[3];
      local_138 = *(undefined8 *)(param_4 + 4);
      local_150 = &local_c9;
      local_158 = param_9;
      local_160 = param_8;
      local_168 = &local_c8;
      local_170 = param_6;
      local_178 = &local_128;
      uVar3 = FUN_143446785(param_1,param_2,param_3,&local_148);
      uVar4 = (ulonglong)uVar3;
      bVar5 = 1 < uVar2;
      if (local_c9 != '\x01') break;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar4 = (ulonglong)uVar2;
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 & bVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e02378 thunk_FUN_140e0237d body=5 status=ok
// SIG undefined thunk_FUN_140e0237d(void)

void thunk_FUN_140e0237d(ushort *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_88 [32];
  longlong lStack_68;
  int iStack_60;
  longlong alStack_58 [3];
  ulonglong uStack_40;
  
  uStack_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  alStack_58[0] = 0;
  alStack_58[1] = 0;
  if (0 < param_2) {
    param_2 = param_2 + 1;
    bVar3 = false;
    do {
      uVar1 = *param_1;
      if (uVar1 < 0x80) {
        if (uVar1 - 10 < 4) {
          if (bVar3) {
            FUN_140ded312(alStack_58);
            bVar3 = false;
          }
          FUN_144a7e010(alStack_58);
        }
        else {
          FUN_140002184(alStack_58,uVar1);
        }
      }
      else {
        FUN_140002266(&lStack_68,L"[0x%X]");
        iVar2 = iStack_60 + -1;
        if (iStack_60 == 0) {
          iVar2 = 0;
        }
        FUN_1400020e8(alStack_58,lStack_68,iVar2);
        if (lStack_68 != 0) {
          FUN_1400020a8();
        }
        bVar3 = true;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (1 < param_2);
    if (bVar3) {
      FUN_140ded312(alStack_58);
    }
    if (alStack_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e0237d FUN_140e0237d body=283 status=ok
// SIG undefined FUN_140e0237d(void)

void FUN_140e0237d(ushort *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[0] = 0;
  local_58[1] = 0;
  if (0 < param_2) {
    param_2 = param_2 + 1;
    bVar3 = false;
    do {
      uVar1 = *param_1;
      if (uVar1 < 0x80) {
        if (uVar1 - 10 < 4) {
          if (bVar3) {
            FUN_140ded312(local_58);
            bVar3 = false;
          }
          FUN_144a7e010(local_58);
        }
        else {
          FUN_140002184(local_58,uVar1);
        }
      }
      else {
        FUN_140002266(&local_68,L"[0x%X]");
        iVar2 = local_60 + -1;
        if (local_60 == 0) {
          iVar2 = 0;
        }
        FUN_1400020e8(local_58,local_68,iVar2);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        bVar3 = true;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (1 < param_2);
    if (bVar3) {
      FUN_140ded312(local_58);
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e0249a FUN_140e0249a body=286 status=ok
// SIG undefined FUN_140e0249a(void)

undefined8 FUN_140e0249a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140e025b2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140e025b2;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140e025b2:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140e0255f;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140e0255f;
    }
  }
  uVar6 = 0;
LAB_140e0255f:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e025ba FUN_140e025ba body=565 status=ok
// SIG undefined FUN_140e025ba(void)

void FUN_140e025ba(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) goto LAB_140e02704;
  FUN_1449027d0(param_1,&local_50);
  puVar3 = *(undefined8 **)(local_50 + 0x1a0);
  AcquireSRWLockExclusive((PSRWLOCK)(puVar3 + 0x18));
  *(int *)(puVar3 + 0x17) = *(int *)(puVar3 + 0x17) + 1;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  iVar5 = *(int *)(param_2 + 0x24);
  lVar7 = 0x10;
  puVar6 = puVar3;
  if (iVar5 == 0) {
LAB_140e02638:
    if (puVar6 != (undefined8 *)(param_2 + 8)) {
      FUN_140e027f0(*puVar6,*(undefined4 *)(puVar6 + 1));
      iVar5 = *(int *)(param_2 + 0x10);
      uVar4 = *(undefined8 *)(param_2 + 8);
      *(int *)(puVar6 + 1) = iVar5;
      if (iVar5 == 0 && *(int *)((longlong)puVar6 + 0xc) == 0) {
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      }
      else {
        FUN_140e02904(puVar6,iVar5);
        FUN_140e0282d(*puVar6,uVar4,iVar5);
      }
    }
    *(int *)((longlong)puVar3 + lVar7) = *(int *)((longlong)puVar3 + lVar7) + 1;
  }
  else {
    if (iVar5 == 2) {
      puVar6 = puVar3 + 6;
      lVar7 = 0x40;
      goto LAB_140e02638;
    }
    if (iVar5 == 1) {
      puVar6 = puVar3 + 3;
      lVar7 = 0x28;
      goto LAB_140e02638;
    }
  }
  if (*(char *)(param_2 + 0x18) == *(char *)(puVar3 + 9)) {
    if (*(int *)((longlong)puVar3 + 0x4c) == 0) {
      iVar5 = 1;
      goto LAB_140e027b5;
    }
  }
  else {
    iVar5 = *(int *)((longlong)puVar3 + 0x4c) + 1;
LAB_140e027b5:
    *(char *)(puVar3 + 9) = *(char *)(param_2 + 0x18);
    *(int *)((longlong)puVar3 + 0x4c) = iVar5;
  }
  if (*(char *)(param_2 + 0x19) == *(char *)(puVar3 + 10)) {
    if (*(int *)((longlong)puVar3 + 0x54) == 0) {
      iVar5 = 1;
      goto LAB_140e0277f;
    }
  }
  else {
    iVar5 = *(int *)((longlong)puVar3 + 0x54) + 1;
LAB_140e0277f:
    *(char *)(puVar3 + 10) = *(char *)(param_2 + 0x19);
    *(int *)((longlong)puVar3 + 0x54) = iVar5;
  }
  if (*(char *)(param_2 + 0x1a) == *(char *)(puVar3 + 0xb)) {
    if (*(int *)((longlong)puVar3 + 0x5c) == 0) {
      iVar5 = 1;
      goto LAB_140e0274c;
    }
  }
  else {
    iVar5 = *(int *)((longlong)puVar3 + 0x5c) + 1;
LAB_140e0274c:
    *(char *)(puVar3 + 0xb) = *(char *)(param_2 + 0x1a);
    *(int *)((longlong)puVar3 + 0x5c) = iVar5;
  }
  if (*(char *)(param_2 + 0x1b) == *(char *)(puVar3 + 0xc)) {
    if (*(int *)((longlong)puVar3 + 100) == 0) {
      iVar5 = 1;
      goto LAB_140e027a3;
    }
  }
  else {
    iVar5 = *(int *)((longlong)puVar3 + 100) + 1;
LAB_140e027a3:
    *(char *)(puVar3 + 0xc) = *(char *)(param_2 + 0x1b);
    *(int *)((longlong)puVar3 + 100) = iVar5;
  }
  if (*(longlong *)(param_2 + 0x1c) == puVar3[0xd]) {
    if (*(int *)(puVar3 + 0xe) == 0) {
      iVar5 = 1;
      goto LAB_140e0275b;
    }
  }
  else {
    iVar5 = *(int *)(puVar3 + 0xe) + 1;
LAB_140e0275b:
    puVar3[0xd] = *(longlong *)(param_2 + 0x1c);
    *(int *)(puVar3 + 0xe) = iVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(puVar3 + 0x18));
LAB_140e02704:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e027f0 FUN_140e027f0 body=61 status=ok
// SIG undefined FUN_140e027f0(void)

void FUN_140e027f0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e0282d FUN_140e0282d body=214 status=ok
// SIG undefined FUN_140e0282d(void)

void FUN_140e0282d(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x10);
    puVar4 = (undefined2 *)(param_2 + 0x20);
    do {
      puVar3[-2] = 0;
      iVar1 = *(int *)(puVar4 + -0xc);
      pvVar2 = *(void **)(puVar4 + -0x10);
      *(int *)(puVar3 + -1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + -4) = 0;
      }
      else {
        FUN_1446dd670(puVar3 + -2,iVar1,0);
        memcpy((void *)puVar3[-2],pvVar2,(longlong)iVar1 * 2);
      }
      *puVar3 = 0;
      iVar1 = *(int *)(puVar4 + -4);
      pvVar2 = *(void **)(puVar4 + -8);
      *(int *)(puVar3 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar3,iVar1,0);
        memcpy((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      *(undefined2 *)(puVar3 + 2) = *puVar4;
      puVar3 = puVar3 + 5;
      puVar4 = puVar4 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140e02904 FUN_140e02904 body=331 status=ok
// SIG undefined FUN_140e02904(void)

void FUN_140e02904(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x28;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e02976;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_140e02976:
    iVar5 = (int)(uVar4 / 0x28);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x28,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140e02a5e FUN_140e02a5e body=40 status=ok
// SIG undefined FUN_140e02a5e(void)

undefined8 FUN_140e02a5e(undefined8 param_1,int param_2)

{
  FUN_140e02a86();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e02a86 FUN_140e02a86 body=162 status=ok
// SIG undefined FUN_140e02a86(void)

void FUN_140e02a86(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b490720;
  FUN_140e02b28(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  param_1[0x19] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(int *)((longlong)param_1 + 0xe4) != 0) {
    FUN_140115c12(param_1 + 0x1b,0);
  }
  param_1[0x1a] = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e02b28 FUN_140e02b28 body=75 status=ok
// SIG undefined FUN_140e02b28(void)

void FUN_140e02b28(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e02b74 FUN_140e02b74 body=96 status=ok
// SIG undefined FUN_140e02b74(void)

ulonglong FUN_140e02b74(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140e02bb7:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140e02bb7;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
    }
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 140e02c12 FUN_140e02c12 body=50 status=ok
// SIG undefined FUN_140e02c12(void)

void FUN_140e02c12(longlong param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x2978) == '\x01') {
    FUN_1457b2572(param_1 + 0x2a10);
  }
  FUN_140e02c44(param_1,param_2);
  return;
}



// FUNCTION 140e02c44 FUN_140e02c44 body=254 status=ok
// SIG undefined FUN_140e02c44(void)

void FUN_140e02c44(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  FUN_140d6119a();
  if (*(longlong *)(param_1 + 0x2620) != 0) {
    uVar2 = FUN_1447210f0(param_1);
    lVar3 = FUN_140149a73(uVar2,0);
    if (lVar3 != 0) {
      FUN_140457ffc(lVar3 + 8,param_1);
      *(undefined8 *)(param_1 + 0x2620) = 0;
    }
  }
  FUN_140e02d8e(param_1);
  if ((*(longlong *)(param_1 + 0x2678) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x2678) + 0x10) & 1) != 0)) {
    FUN_1408256d2(param_1 + 0x2678);
  }
  lVar3 = *(longlong *)(param_1 + 0x2688);
  iVar1 = *(int *)(param_1 + 0x2690);
  uVar4 = 0;
  if ((longlong)iVar1 != 0) {
    lVar5 = 0;
    do {
      (**(code **)(**(longlong **)(lVar3 + lVar5) + 0x18))();
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
    uVar4 = *(undefined4 *)(param_1 + 0x2690);
    lVar3 = *(longlong *)(param_1 + 0x2688);
  }
  FUN_140e02d42(lVar3,uVar4);
  *(undefined4 *)(param_1 + 0x2690) = 0;
  if (*(int *)(param_1 + 0x2694) == 0) {
    return;
  }
  FUN_1457b2512(param_1 + 0x2688,0);
  return;
}



// FUNCTION 140e02d42 FUN_140e02d42 body=75 status=ok
// SIG undefined FUN_140e02d42(void)

void FUN_140e02d42(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e02d8e FUN_140e02d8e body=159 status=ok
// SIG undefined FUN_140e02d8e(void)

void FUN_140e02d8e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x2630);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        return;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar4 = *(longlong *)(param_1 + 0x2628);
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
    if (lVar4 != 0) {
      if (param_1 != 0) {
        FUN_140e02e2e(lVar4 + 0x168,*(undefined8 *)(param_1 + 0x2640));
      }
      plVar3 = *(longlong **)(param_1 + 0x2630);
      *(undefined8 *)(param_1 + 0x2628) = 0;
      *(undefined8 *)(param_1 + 0x2630) = 0;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140e02e29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))();
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140e02e2e FUN_140e02e2e body=159 status=ok
// SIG undefined FUN_140e02e2e(void)

undefined8 FUN_140e02e2e(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_140e02ece(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140e02ece FUN_140e02ece body=91 status=ok
// SIG undefined FUN_140e02ece(void)

void FUN_140e02ece(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_140e02f2a(param_1,param_2,1);
  return;
}



// FUNCTION 140e02f2a FUN_140e02f2a body=136 status=ok
// SIG undefined FUN_140e02f2a(void)

void FUN_140e02f2a(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140e02fb2 FUN_140e02fb2 body=142 status=ok
// SIG undefined FUN_140e02fb2(void)

void FUN_140e02fb2(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 1);
  if (iVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    do {
      lVar1 = *plVar2;
      if (lVar1 != 0) {
        lVar4 = 0x3fc0;
        do {
          if (*(longlong *)(lVar1 + -0x10 + lVar4) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar1 + -0x20 + lVar4) != 0) {
            FUN_1400020a8();
          }
          FUN_140e03040(*(undefined8 *)(lVar1 + -0x30 + lVar4),
                        *(undefined4 *)(lVar1 + -0x28 + lVar4));
          if (*(longlong *)(lVar1 + -0x30 + lVar4) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar1 + -0x60 + lVar4) != 0) {
            FUN_1400020a8();
          }
          lVar4 = lVar4 + -0x60;
        } while (lVar4 != 0);
        FUN_1400020a8(lVar1);
      }
      plVar2 = plVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 140e03040 FUN_140e03040 body=115 status=ok
// SIG undefined FUN_140e03040(void)

void FUN_140e03040(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x28);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar3 = (longlong *)plVar4[-2];
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
      plVar4 = plVar4 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e030b4 FUN_140e030b4 body=145 status=ok
// SIG undefined FUN_140e030b4(void)

void FUN_140e030b4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb8);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      plVar4 = *(longlong **)(lVar3 + 8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x2f0))(plVar4,lVar3,1);
      }
      FUN_1400020a8(lVar3);
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (-1 < *(int *)(param_1 + 0xc4)) {
    return;
  }
  FUN_14915594e(param_1 + 0xb8);
  return;
}



// FUNCTION 140e03146 FUN_140e03146 body=113 status=ok
// SIG undefined FUN_140e03146(void)

void FUN_140e03146(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140e031b8 FUN_140e031b8 body=443 status=ok
// SIG undefined FUN_140e031b8(void)

void FUN_140e031b8(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
  }
  plVar4 = local_58;
  iVar5 = (int)local_58[3];
  iVar14 = (int)local_60;
  uVar11 = (uint)local_50;
  iVar7 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ < iVar5) {
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar7 * 0x20) != 0) {
        FUN_1400020a8();
        iVar5 = (int)plVar4[3];
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      lVar12 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar11;
      if (uVar6 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar12 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar12 == lVar9) goto LAB_140e032e0;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_140e032e0:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e03374 FUN_140e03374 body=654 status=ok
// SIG undefined FUN_140e03374(void)

undefined8 *
FUN_140e03374(longlong *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined **ppuVar8;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  ulonglong local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  undefined **local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = 0xb7756362;
  local_74 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_54 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  local_88 = 0;
  uStack_80 = 0;
  cVar5 = FUN_140e03692();
  if (cVar5 != '\0') {
    uVar3 = CONCAT44(uStack_64,uStack_68);
    uVar6 = uVar3 - param_3;
    if (param_4 != 0xffffffffffffffff) {
      uVar6 = param_4;
    }
    if ((param_3 <= uVar3) && (uVar6 <= uVar3 - param_3)) {
      if (local_74._4_1_ == '\x03') {
        ppuVar8 = &PTR_PTR_14c7585b8;
      }
      else if (local_74._4_1_ == '\0') {
        ppuVar8 = &PTR_PTR_14c7585b0;
      }
      else {
        if (local_74._4_1_ != '\x04') goto LAB_140e035e6;
        ppuVar8 = &PTR_PTR_14c7585c0;
      }
      FUN_140e03604(&local_90);
      plVar1 = local_90;
      if (local_90 == (longlong *)0x0) {
        lVar7 = 0;
LAB_140e03543:
        local_a0 = 0;
      }
      else {
        if (((ulonglong)local_90[3] >> 0x3e & 1) == 0) {
          (**(code **)(*local_90 + 8))(local_90);
        }
        plVar4 = local_90;
        lVar7 = plVar1[2];
        if (local_90 == (longlong *)0x0) goto LAB_140e03543;
        if ((local_90[3] & 0x4000000000000000U) == 0) {
          (**(code **)(*local_90 + 8))(local_90);
        }
        local_a0 = plVar4[1];
      }
      local_b8 = (undefined4)local_88;
      uStack_b4 = local_88._4_4_;
      uStack_b0 = (undefined4)uStack_80;
      uStack_ac = uStack_80._4_4_;
      local_c8 = *param_1;
      if (local_c8 == 0) {
        local_c8 = param_1[1];
        local_d0 = &PTR_LAB_149dffe00;
      }
      else {
        local_c0 = param_1[2];
        local_d0 = &PTR_LAB_149dffde0;
      }
      local_e8 = &local_a0;
      local_f8 = &local_b8;
      local_e0 = 0;
      local_f0 = param_3;
      local_98 = lVar7;
      cVar5 = (**(code **)(*ppuVar8 + 8))(ppuVar8,param_1 + 2,&local_d0,&local_78);
      if (cVar5 != '\0') {
        *param_2 = local_90;
        goto LAB_140e034fe;
      }
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_90 + 3;
        lVar7 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (((uint)lVar7 & 0x3fffffff) == 1) {
          (**(code **)(*local_90 + 0x10))(local_90);
          local_90[1] = 0;
          local_90[2] = 0;
          LOCK();
          puVar2 = (ulonglong *)(local_90 + 3);
          uVar3 = *puVar2;
          *puVar2 = *puVar2 - 0x40000000;
          UNLOCK();
          if ((uVar3 & 0xfffffffc0000000) == 0x40000000) {
            (**(code **)*local_90)(local_90,1);
          }
        }
      }
    }
  }
LAB_140e035e6:
  *param_2 = 0;
LAB_140e034fe:
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e03604 FUN_140e03604 body=142 status=ok
// SIG undefined FUN_140e03604(void)

undefined8 * FUN_140e03604(undefined8 *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  uVar4 = FUN_14001cc68(param_2,0);
  puVar3[1] = uVar4;
  puVar3[2] = param_2;
  puVar3[3] = 0;
  *puVar3 = &PTR_FUN_149e25c70;
  LOCK();
  puVar3[3] = puVar3[3] | 0x4000000000000000;
  UNLOCK();
  LOCK();
  puVar3[3] = puVar3[3] | 0x1000000000000000;
  UNLOCK();
  *param_1 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = puVar3 + 3;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 0) {
      LOCK();
      puVar3[3] = puVar3[3] + 0x40000000;
      UNLOCK();
    }
  }
  return param_1;
}



// FUNCTION 140e03692 FUN_140e03692 body=1789 status=ok
// SIG undefined FUN_140e03692(void)

byte FUN_140e03692(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
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
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  byte bVar28;
  undefined **ppuVar29;
  void *_Src;
  uint *puVar30;
  size_t sVar31;
  longlong lVar32;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  code **local_b0;
  ulonglong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  undefined1 local_79;
  code *local_78;
  undefined1 *local_70;
  longlong local_68;
  ulonglong uStack_60;
  uint *local_58;
  longlong lStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar7 = (longlong *)*param_1;
  if (plVar7 == (longlong *)0x0) {
    lVar24 = param_1[1];
    bVar28 = 0;
    if (lVar24 != 0) {
      if (param_1[2] == -1) {
        uVar25 = FUN_1467fdf84(lVar24);
        if (0x3f < uVar25) {
          lStack_50 = 0x40;
          bVar28 = 0;
          local_58 = param_2;
          FUN_1467fe5c0(lVar24,&local_58,0);
          uVar22 = *param_2;
          uVar5 = param_2[1];
          *param_2 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                     uVar22 << 0x18;
          param_2[1] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                       uVar5 << 0x18;
          uVar5 = param_2[3];
          param_2[3] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                       uVar5 << 0x18;
          uVar25 = *(ulonglong *)(param_2 + 4);
          *(ulonglong *)(param_2 + 4) =
               uVar25 >> 0x38 | (uVar25 & 0xff000000000000) >> 0x28 |
               (uVar25 & 0xff0000000000) >> 0x18 | (uVar25 & 0xff00000000) >> 8 |
               (uVar25 & 0xff000000) << 8 | (uVar25 & 0xff0000) << 0x18 | (uVar25 & 0xff00) << 0x28
               | uVar25 << 0x38;
          uVar25 = *(ulonglong *)(param_2 + 6);
          *(ulonglong *)(param_2 + 6) =
               uVar25 >> 0x38 | (uVar25 & 0xff000000000000) >> 0x28 |
               (uVar25 & 0xff0000000000) >> 0x18 | (uVar25 & 0xff00000000) >> 8 |
               (uVar25 & 0xff000000) << 8 | (uVar25 & 0xff0000) << 0x18 | (uVar25 & 0xff00) << 0x28
               | uVar25 << 0x38;
          cVar4 = (char)param_2[2];
          if (cVar4 == '\0') {
            ppuVar29 = &PTR_PTR_14c7585b0;
          }
          else if (cVar4 == '\x04') {
            ppuVar29 = &PTR_PTR_14c7585c0;
          }
          else {
            if (cVar4 != '\x03') goto LAB_140e03a1d;
            ppuVar29 = &PTR_PTR_14c7585b8;
          }
          bVar28 = 0;
          iVar23 = 0;
          if (uVar22 != 0x626375b7) goto LAB_140e03a1d;
          local_a0 = (**(code **)*ppuVar29)(ppuVar29,param_2);
          local_70 = &local_79;
          local_b0 = &local_78;
          local_78 = FUN_14273407a;
          local_b8 = param_1 + 5;
          FUN_1467fe52c(lVar24,&local_68,0);
          local_98 = CONCAT44(local_98._4_4_,param_2[1]);
          uVar25 = 8;
          if (uStack_60 < 8) {
            uVar25 = uStack_60;
          }
          uVar26 = uStack_60 - uVar25;
          if (uVar26 != 0) {
            lVar32 = uVar25 + local_68;
            iVar23 = 0;
            do {
              uVar25 = 0x7fffffff;
              if (uVar26 < 0x7fffffff) {
                uVar25 = uVar26;
              }
              iVar23 = (*(code *)PTR_FUN_14c75b148)(lVar32,uVar25 & 0xffffffff,iVar23);
              lVar32 = lVar32 + uVar25;
              uVar26 = uVar26 - uVar25;
            } while (uVar26 != 0);
          }
          if ((int)local_98 == iVar23) {
            param_1[2] = 0;
            param_1[3] = local_a0;
            if (*(uint *)(param_1 + 4) == param_2[1]) {
              lVar32 = 0;
              do {
                if (*(int *)((longlong)param_2 + lVar32 + 0x20) != 0) goto LAB_140e03d83;
                lVar32 = lVar32 + 4;
              } while (lVar32 != 0x20);
            }
            *(uint *)(param_1 + 4) = param_2[1];
            *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
LAB_140e03d83:
            *param_3 = local_68;
            param_3[1] = uStack_60;
            goto LAB_140e03bfd;
          }
        }
        bVar28 = 0;
      }
      else {
        local_b8 = param_1 + 5;
        FUN_1467fe474(lVar24,&local_58,param_1[2],param_1[3]);
        *param_3 = (longlong)local_58;
        param_3[1] = lStack_50;
        uVar25 = param_3[1];
        if (uVar25 != 0) {
          sVar31 = 0x40;
          if (uVar25 < 0x40) {
            sVar31 = uVar25;
          }
          memcpy(param_2,(void *)*param_3,sVar31);
        }
        uVar22 = *param_2;
        uVar5 = param_2[1];
        *param_2 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                   uVar22 << 0x18;
        param_2[1] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18
        ;
        uVar22 = param_2[3];
        param_2[3] = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                     uVar22 << 0x18;
        uVar25 = *(ulonglong *)(param_2 + 4);
        *(ulonglong *)(param_2 + 4) =
             uVar25 >> 0x38 | (uVar25 & 0xff000000000000) >> 0x28 |
             (uVar25 & 0xff0000000000) >> 0x18 | (uVar25 & 0xff00000000) >> 8 |
             (uVar25 & 0xff000000) << 8 | (uVar25 & 0xff0000) << 0x18 | (uVar25 & 0xff00) << 0x28 |
             uVar25 << 0x38;
        uVar25 = *(ulonglong *)(param_2 + 6);
        *(ulonglong *)(param_2 + 6) =
             uVar25 >> 0x38 | (uVar25 & 0xff000000000000) >> 0x28 |
             (uVar25 & 0xff0000000000) >> 0x18 | (uVar25 & 0xff00000000) >> 8 |
             (uVar25 & 0xff000000) << 8 | (uVar25 & 0xff0000) << 0x18 | (uVar25 & 0xff00) << 0x28 |
             uVar25 << 0x38;
LAB_140e03bfd:
        bVar28 = 1;
      }
    }
LAB_140e03a1d:
    bVar28 = lVar24 != 0 & bVar28;
    goto LAB_140e039c3;
  }
  if (param_1[2] == -1) {
    lVar24 = (**(code **)(*plVar7 + 0x28))(plVar7);
    if (lVar24 != -1) {
      (**(code **)(*plVar7 + 0x170))(plVar7,param_2,0x40);
      uVar22 = *param_2;
      uVar5 = param_2[1];
      *param_2 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18
      ;
      param_2[1] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      uVar5 = param_2[3];
      param_2[3] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      uVar25 = *(ulonglong *)(param_2 + 4);
      *(ulonglong *)(param_2 + 4) =
           uVar25 >> 0x38 | (uVar25 & 0xff000000000000) >> 0x28 | (uVar25 & 0xff0000000000) >> 0x18
           | (uVar25 & 0xff00000000) >> 8 | (uVar25 & 0xff000000) << 8 | (uVar25 & 0xff0000) << 0x18
           | (uVar25 & 0xff00) << 0x28 | uVar25 << 0x38;
      uVar25 = *(ulonglong *)(param_2 + 6);
      *(ulonglong *)(param_2 + 6) =
           uVar25 >> 0x38 | (uVar25 & 0xff000000000000) >> 0x28 | (uVar25 & 0xff0000000000) >> 0x18
           | (uVar25 & 0xff00000000) >> 8 | (uVar25 & 0xff000000) << 8 | (uVar25 & 0xff0000) << 0x18
           | (uVar25 & 0xff00) << 0x28 | uVar25 << 0x38;
      cVar4 = (char)param_2[2];
      if (cVar4 == '\x03') {
        ppuVar29 = &PTR_PTR_14c7585b8;
      }
      else if (cVar4 == '\0') {
        ppuVar29 = &PTR_PTR_14c7585b0;
      }
      else {
        if (cVar4 != '\x04') goto LAB_140e03c84;
        ppuVar29 = &PTR_PTR_14c7585c0;
      }
      local_98 = lVar24;
      local_88 = param_3;
      if (uVar22 == 0x626375b7) {
        uVar25 = (**(code **)*ppuVar29)(ppuVar29,param_2);
        plVar8 = (longlong *)param_1[5];
        if (plVar8 == (longlong *)0x0) {
          uVar26 = 0;
        }
        else {
          if (((ulonglong)plVar8[3] >> 0x3e & 1) == 0) {
            (**(code **)(*plVar8 + 8))(plVar8);
          }
          uVar26 = plVar8[2];
        }
        if (uVar26 < uVar25) {
          uVar26 = uVar25 - 1;
          if (uVar26 == 0) {
            bVar28 = 0;
          }
          else {
            lVar24 = 0x3f;
            if (uVar26 != 0) {
              for (; uVar26 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            bVar28 = (byte)lVar24 ^ 0x3f;
          }
          uVar27 = 1L << (-bVar28 & 0x3f);
          uVar26 = 0x1000;
          if (0x1000 < uVar27) {
            uVar26 = uVar27;
          }
          FUN_140e03604(&local_58,uVar26);
          puVar30 = local_58;
          plVar8 = (longlong *)param_1[5];
          local_58 = (uint *)0x0;
          param_1[5] = (longlong)puVar30;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 3;
            lVar24 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (((uint)lVar24 & 0x3fffffff) == 1) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              plVar8[1] = 0;
              plVar8[2] = 0;
              LOCK();
              puVar2 = (ulonglong *)(plVar8 + 3);
              uVar26 = *puVar2;
              *puVar2 = *puVar2 - 0x40000000;
              UNLOCK();
              if ((uVar26 & 0xfffffffc0000000) == 0x40000000) {
                (**(code **)*plVar8)(plVar8,1);
              }
            }
            puVar30 = local_58;
            if (local_58 != (uint *)0x0) {
              LOCK();
              puVar3 = local_58 + 6;
              lVar24 = *(longlong *)puVar3;
              *(longlong *)puVar3 = *(longlong *)puVar3 + -1;
              UNLOCK();
              if (((uint)lVar24 & 0x3fffffff) == 1) {
                (**(code **)(*(longlong *)local_58 + 0x10))(local_58);
                puVar30[2] = 0;
                puVar30[3] = 0;
                puVar30[4] = 0;
                puVar30[5] = 0;
                LOCK();
                puVar2 = (ulonglong *)(puVar30 + 6);
                uVar26 = *puVar2;
                *puVar2 = *puVar2 - 0x40000000;
                UNLOCK();
                if ((uVar26 & 0xfffffffc0000000) == 0x40000000) {
                  (*(code *)**(undefined8 **)puVar30)(puVar30,1);
                }
              }
            }
          }
        }
        plVar8 = (longlong *)param_1[5];
        uVar22 = 0;
        local_90 = param_1;
        if (plVar8 == (longlong *)0x0) {
          uVar26 = 0;
LAB_140e03b17:
          puVar30 = (uint *)0x0;
        }
        else {
          if (((ulonglong)plVar8[3] >> 0x3e & 1) == 0) {
            (**(code **)(*plVar8 + 8))(plVar8);
          }
          uVar26 = plVar8[2];
          plVar8 = (longlong *)param_1[5];
          if (plVar8 == (longlong *)0x0) goto LAB_140e03b17;
          if ((plVar8[3] & 0x4000000000000000U) == 0) {
            (**(code **)(*plVar8 + 8))(plVar8);
          }
          puVar30 = (uint *)plVar8[1];
        }
        if (uVar25 <= uVar26) {
          uVar26 = uVar25;
        }
        uVar5 = *param_2;
        uVar6 = param_2[1];
        uVar9 = param_2[2];
        uVar10 = param_2[3];
        uVar11 = param_2[4];
        uVar12 = param_2[5];
        uVar13 = param_2[6];
        uVar14 = param_2[7];
        uVar15 = param_2[8];
        uVar16 = param_2[9];
        uVar17 = param_2[10];
        uVar18 = param_2[0xb];
        uVar19 = param_2[0xd];
        uVar20 = param_2[0xe];
        uVar21 = param_2[0xf];
        puVar30[0xc] = param_2[0xc];
        puVar30[0xd] = uVar19;
        puVar30[0xe] = uVar20;
        puVar30[0xf] = uVar21;
        puVar30[8] = uVar15;
        puVar30[9] = uVar16;
        puVar30[10] = uVar17;
        puVar30[0xb] = uVar18;
        puVar30[4] = uVar11;
        puVar30[5] = uVar12;
        puVar30[6] = uVar13;
        puVar30[7] = uVar14;
        *puVar30 = uVar5;
        puVar30[1] = uVar6;
        puVar30[2] = uVar9;
        puVar30[3] = uVar10;
        uVar27 = 0x40;
        if (uVar26 < 0x40) {
          uVar27 = uVar26;
        }
        local_a0 = uVar25;
        (**(code **)(*plVar7 + 0x170))(plVar7,(longlong)puVar30 + uVar27,uVar26 - uVar27);
        uVar5 = *puVar30;
        uVar6 = puVar30[1];
        *puVar30 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        puVar30[1] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18
        ;
        uVar5 = puVar30[3];
        puVar30[3] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18
        ;
        uVar25 = *(ulonglong *)(puVar30 + 4);
        *(ulonglong *)(puVar30 + 4) =
             uVar25 >> 0x38 | (uVar25 & 0xff000000000000) >> 0x28 |
             (uVar25 & 0xff0000000000) >> 0x18 | (uVar25 & 0xff00000000) >> 8 |
             (uVar25 & 0xff000000) << 8 | (uVar25 & 0xff0000) << 0x18 | (uVar25 & 0xff00) << 0x28 |
             uVar25 << 0x38;
        uVar25 = *(ulonglong *)(puVar30 + 6);
        *(ulonglong *)(puVar30 + 6) =
             uVar25 >> 0x38 | (uVar25 & 0xff000000000000) >> 0x28 |
             (uVar25 & 0xff0000000000) >> 0x18 | (uVar25 & 0xff00000000) >> 8 |
             (uVar25 & 0xff000000) << 8 | (uVar25 & 0xff0000) << 0x18 | (uVar25 & 0xff00) << 0x28 |
             uVar25 << 0x38;
        uVar5 = param_2[1];
        uVar25 = 8;
        if (uVar26 < 8) {
          uVar25 = uVar26;
        }
        uVar27 = uVar26 - uVar25;
        if (uVar27 != 0) {
          lVar24 = uVar25 + (longlong)puVar30;
          uVar22 = 0;
          do {
            uVar25 = 0x7fffffff;
            if (uVar27 < 0x7fffffff) {
              uVar25 = uVar27;
            }
            uVar22 = (*(code *)PTR_FUN_14c75b148)(lVar24,uVar25 & 0xffffffff,uVar22);
            lVar24 = lVar24 + uVar25;
            uVar27 = uVar27 - uVar25;
          } while (uVar27 != 0);
        }
        if (uVar5 != uVar22) goto LAB_140e03c84;
        local_90[2] = local_98;
        local_90[3] = local_a0;
        *(uint *)(local_90 + 4) = param_2[1];
        *(undefined4 *)((longlong)local_90 + 0x24) = 0xffffffff;
        *local_88 = (longlong)puVar30;
        local_88[1] = uVar26;
        goto LAB_140e039c1;
      }
    }
LAB_140e03c84:
    bVar28 = 0;
  }
  else {
    plVar7 = (longlong *)param_1[5];
    if (plVar7 == (longlong *)0x0) {
      uVar25 = 0;
LAB_140e03b3e:
      _Src = (void *)0x0;
    }
    else {
      if (((ulonglong)plVar7[3] >> 0x3e & 1) == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
      uVar25 = plVar7[2];
      plVar7 = (longlong *)param_1[5];
      if (plVar7 == (longlong *)0x0) goto LAB_140e03b3e;
      if ((plVar7[3] & 0x4000000000000000U) == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
      _Src = (void *)plVar7[1];
    }
    uVar26 = param_1[3];
    if (uVar25 < (ulonglong)param_1[3]) {
      uVar26 = uVar25;
    }
    *param_3 = (longlong)_Src;
    param_3[1] = uVar26;
    if (uVar26 != 0) {
      sVar31 = 0x40;
      if (uVar26 < 0x40) {
        sVar31 = uVar26;
      }
      memcpy(param_2,_Src,sVar31);
    }
    uVar22 = *param_2;
    uVar5 = param_2[1];
    *param_2 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18;
    param_2[1] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar22 = param_2[3];
    param_2[3] = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18
    ;
    uVar25 = *(ulonglong *)(param_2 + 4);
    *(ulonglong *)(param_2 + 4) =
         uVar25 >> 0x38 | (uVar25 & 0xff000000000000) >> 0x28 | (uVar25 & 0xff0000000000) >> 0x18 |
         (uVar25 & 0xff00000000) >> 8 | (uVar25 & 0xff000000) << 8 | (uVar25 & 0xff0000) << 0x18 |
         (uVar25 & 0xff00) << 0x28 | uVar25 << 0x38;
    uVar25 = *(ulonglong *)(param_2 + 6);
    *(ulonglong *)(param_2 + 6) =
         uVar25 >> 0x38 | (uVar25 & 0xff000000000000) >> 0x28 | (uVar25 & 0xff0000000000) >> 0x18 |
         (uVar25 & 0xff00000000) >> 8 | (uVar25 & 0xff000000) << 8 | (uVar25 & 0xff0000) << 0x18 |
         (uVar25 & 0xff00) << 0x28 | uVar25 << 0x38;
LAB_140e039c1:
    bVar28 = 1;
  }
LAB_140e039c3:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return bVar28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e03d90 FUN_140e03d90 body=12 status=ok
// SIG undefined FUN_140e03d90(void)

longlong FUN_140e03d90(undefined8 param_1,longlong param_2)

{
  return (ulonglong)*(uint *)(param_2 + 0xc) * 4 + 0x40;
}



// FUNCTION 140e03d9c FUN_140e03d9c body=1449 status=ok
// SIG undefined FUN_140e03d9c(void)

undefined8
FUN_140e03d9c(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
             longlong *param_5,ulonglong param_6,longlong *param_7,byte param_8)

{
  ulonglong *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  void *_Dst;
  longlong lVar11;
  longlong *plVar12;
  void *pvVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined1 auStack_128 [32];
  longlong local_108;
  byte local_f1;
  longlong local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong *local_d8;
  ulonglong local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  void *local_a8;
  longlong *local_a0;
  void *local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_c0 = param_3;
  local_b8 = param_1;
  if (*(ulonglong *)(param_4 + 0x10) < param_7[1] + param_6) {
LAB_140e03df3:
    uVar5 = 0;
  }
  else {
    uVar14 = param_6 >> (*(byte *)(param_4 + 0xb) & 0x3f);
    uVar18 = (param_7[1] + param_6) - 1 >> (*(byte *)(param_4 + 0xb) & 0x3f);
    uVar10 = 0x40;
    if ((ulonglong)param_5[1] < 0x40) {
      uVar10 = param_5[1];
    }
    lVar15 = uVar10 + *param_5;
    if (uVar14 << 0x20 == 0) {
      lVar11 = 0;
    }
    else {
      lVar8 = 0;
      lVar11 = 0;
      do {
        uVar17 = *(uint *)(lVar15 + lVar8);
        lVar11 = lVar11 + (ulonglong)
                          (uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                          uVar17 << 0x18);
        lVar8 = lVar8 + 4;
      } while ((longlong)(uVar14 << 0x20) >> 0x1e != lVar8);
    }
    uVar5 = 1;
    local_f0 = param_2;
    if ((uint)uVar14 <= (uint)uVar18) {
      lVar11 = (ulonglong)*(uint *)(param_4 + 0xc) * 4 + 0x40 + lVar11;
      iVar7 = 0;
      local_e8 = lVar15;
      local_d0 = uVar18;
      local_c8 = param_4;
      local_b0 = uVar14;
      do {
        uVar17 = (int)local_b0 + iVar7;
        plVar12 = (longlong *)(1L << (*(byte *)(param_4 + 0xb) & 0x3f));
        plVar16 = (longlong *)((longlong)plVar12 - 1U & param_6);
        lVar8 = (ulonglong)uVar17 << (*(byte *)(param_4 + 0xb) & 0x3f);
        plVar19 = (longlong *)(*(longlong *)(param_4 + 0x10) - lVar8);
        if (plVar12 < plVar19) {
          plVar19 = plVar12;
        }
        uVar10 = lVar8 - param_6;
        if (iVar7 == 0) {
          uVar10 = 0;
        }
        else {
          plVar16 = (longlong *)0x0;
        }
        uVar14 = param_7[1];
        if (uVar14 < uVar10) {
          uVar10 = uVar14;
        }
        _Dst = (void *)(uVar10 + *param_7);
        plVar9 = (longlong *)(uVar14 - uVar10);
        if ((longlong *)((longlong)plVar19 - (longlong)plVar16) <= (longlong *)(uVar14 - uVar10)) {
          plVar9 = (longlong *)((longlong)plVar19 - (longlong)plVar16);
        }
        uVar2 = *(uint *)(lVar15 + (ulonglong)uVar17 * 4);
        plVar6 = (longlong *)
                 (ulonglong)
                 (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
        local_d8 = plVar6;
        if (plVar6 < plVar19) {
          if (uVar17 == *(uint *)(local_f0 + 0x14)) {
            plVar19 = *(longlong **)(local_f0 + 0x20);
            if (plVar19 == (longlong *)0x0) {
              plVar19 = (longlong *)0x0;
              lVar8 = 0;
            }
            else {
              if ((plVar19[3] & 0x4000000000000000U) == 0) {
                (**(code **)(*plVar19 + 8))(plVar19);
                lVar15 = local_e8;
              }
              plVar19 = (longlong *)plVar19[2];
              plVar12 = *(longlong **)(local_f0 + 0x20);
              if (plVar12 == (longlong *)0x0) {
                lVar8 = 0;
              }
              else {
                if ((plVar12[3] & 0x4000000000000000U) == 0) {
                  (**(code **)(*plVar12 + 8))(plVar12);
                  lVar15 = local_e8;
                }
                lVar8 = plVar12[1];
              }
            }
            param_4 = local_c8;
            if (plVar19 < plVar16) {
              plVar16 = plVar19;
            }
            plVar12 = (longlong *)((longlong)plVar19 - (longlong)plVar16);
            if (plVar9 <= (longlong *)((longlong)plVar19 - (longlong)plVar16)) {
              plVar12 = plVar9;
            }
            uVar17 = (uint)local_d0;
            if (plVar12 != (longlong *)0x0) {
              memcpy(_Dst,(void *)(lVar8 + (longlong)plVar16),(size_t)plVar12);
              lVar15 = local_e8;
            }
          }
          else {
            local_f1 = plVar9 != plVar19 | param_8;
            pvVar13 = _Dst;
            if (plVar9 != plVar19 || (param_8 & 1) != 0) {
              plVar6 = *(longlong **)(local_f0 + 0x20);
              if (plVar6 == (longlong *)0x0) {
                plVar6 = (longlong *)0x0;
              }
              else {
                if ((plVar6[3] & 0x4000000000000000U) == 0) {
                  local_e0 = plVar6;
                  (**(code **)(*plVar6 + 8))(plVar6);
                  plVar6 = local_e0;
                }
                plVar6 = (longlong *)plVar6[2];
              }
              if (plVar6 < plVar19) {
                FUN_140e03604(&local_70,plVar12);
                plVar6 = local_70;
                plVar12 = *(longlong **)(local_f0 + 0x20);
                local_70 = (longlong *)0x0;
                *(longlong **)(local_f0 + 0x20) = plVar6;
                if (plVar12 != (longlong *)0x0) {
                  LOCK();
                  plVar6 = plVar12 + 3;
                  lVar15 = *plVar6;
                  *plVar6 = *plVar6 + -1;
                  UNLOCK();
                  if (((uint)lVar15 & 0x3fffffff) == 1) {
                    (**(code **)(*plVar12 + 0x10))(plVar12);
                    plVar12[1] = 0;
                    plVar12[2] = 0;
                    LOCK();
                    puVar1 = (ulonglong *)(plVar12 + 3);
                    uVar10 = *puVar1;
                    *puVar1 = *puVar1 - 0x40000000;
                    UNLOCK();
                    if ((uVar10 & 0xfffffffc0000000) == 0x40000000) {
                      (**(code **)*plVar12)(plVar12,1);
                    }
                  }
                  plVar12 = local_70;
                  if (local_70 != (longlong *)0x0) {
                    LOCK();
                    plVar6 = local_70 + 3;
                    lVar15 = *plVar6;
                    *plVar6 = *plVar6 + -1;
                    UNLOCK();
                    if (((uint)lVar15 & 0x3fffffff) == 1) {
                      (**(code **)(*local_70 + 0x10))(local_70);
                      plVar12[1] = 0;
                      plVar12[2] = 0;
                      LOCK();
                      puVar1 = (ulonglong *)(plVar12 + 3);
                      uVar10 = *puVar1;
                      *puVar1 = *puVar1 - 0x40000000;
                      UNLOCK();
                      if ((uVar10 & 0xfffffffc0000000) == 0x40000000) {
                        (**(code **)*plVar12)(plVar12,1);
                      }
                    }
                  }
                }
              }
              plVar12 = *(longlong **)(local_f0 + 0x20);
              if (plVar12 == (longlong *)0x0) {
                plVar12 = (longlong *)0x0;
LAB_140e04204:
                pvVar13 = (void *)0x0;
              }
              else {
                if ((plVar12[3] & 0x4000000000000000U) == 0) {
                  (**(code **)(*plVar12 + 8))(plVar12);
                }
                plVar12 = (longlong *)plVar12[2];
                plVar6 = *(longlong **)(local_f0 + 0x20);
                if (plVar6 == (longlong *)0x0) goto LAB_140e04204;
                if ((plVar6[3] & 0x4000000000000000U) == 0) {
                  local_e0 = plVar12;
                  (**(code **)(*plVar6 + 8))(plVar6);
                  plVar12 = local_e0;
                }
                pvVar13 = (void *)plVar6[1];
              }
              if (plVar12 < plVar19) {
                plVar19 = plVar12;
              }
              *(uint *)(local_f0 + 0x14) = uVar17;
            }
            plVar6 = local_d8;
            local_108 = local_f0;
            (**(code **)(*local_c0 + 0x10))(local_c0,&local_70,lVar11,local_d8);
            if (CONCAT44(uStack_64,uStack_68) == 0) goto LAB_140e03df3;
            local_88 = (undefined4)local_70;
            uStack_84 = local_70._4_4_;
            uStack_80 = uStack_68;
            uStack_7c = uStack_64;
            local_98 = pvVar13;
            local_90 = plVar19;
            cVar3 = (**(code **)(*local_b8 + 0x18))(local_b8,&local_98,&local_88);
            if (cVar3 == '\0') goto LAB_140e03df3;
            if ((local_f1 & 1) != 0) {
              if (plVar19 < plVar16) {
                plVar16 = plVar19;
              }
              plVar12 = (longlong *)((longlong)plVar19 - (longlong)plVar16);
              if (plVar9 <= (longlong *)((longlong)plVar19 - (longlong)plVar16)) {
                plVar12 = plVar9;
              }
              if (plVar12 != (longlong *)0x0) {
                memcpy(_Dst,(void *)((longlong)pvVar13 + (longlong)plVar16),(size_t)plVar12);
              }
            }
            uVar17 = (uint)local_d0;
            param_4 = local_c8;
            lVar15 = local_e8;
          }
        }
        else {
          local_a8 = _Dst;
          local_a0 = plVar9;
          (**(code **)(*local_c0 + 8))(local_c0,(longlong)plVar16 + lVar11,&local_a8);
          uVar17 = (uint)local_d0;
          param_4 = local_c8;
          lVar15 = local_e8;
          plVar6 = local_d8;
        }
        lVar11 = lVar11 + (longlong)plVar6;
        iVar4 = (int)local_b0 + iVar7;
        iVar7 = iVar7 + 1;
      } while (iVar4 + 1U <= uVar17);
      uVar5 = 1;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e04346 FUN_140e04346 body=640 status=ok
// SIG undefined FUN_140e04346(void)

longlong * FUN_140e04346(longlong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  uint local_58 [6];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = DAT_14cbd0810;
  local_68 = DAT_14cbd0808;
  FUN_1448075d0(local_58);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar6 = &DAT_14c9a1288;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
      plVar5 = plVar6 + 8;
      if ((longlong *)plVar6[9] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar6[9];
      }
      iVar7 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar6[10] - 1U & local_58[0]) * 4);
      if (iVar7 != -1) {
        do {
          lVar4 = *plVar6 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar6 + (longlong)iVar7 * 0x40) == local_58[0]) {
            if ((((lVar4 != 0) && (plVar6 = (longlong *)(lVar4 + 0x28), plVar6 != (longlong *)0x0))
                && ((byte *)*plVar6 != (byte *)0x0)) && ((*(byte *)*plVar6 & 0x40) == 0))
            goto LAB_140e043fc;
            break;
          }
          iVar7 = *(int *)(lVar4 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  plVar6 = &DAT_14c9a1308;
LAB_140e043fc:
  if (*plVar6 == 0) {
    puVar3 = &DAT_14c9a12e0;
  }
  else {
    puVar3 = (undefined4 *)FUN_140625092(*plVar6,&DAT_14c9a12e0);
  }
  if (DAT_14c947fe0 == 0) {
    lVar4 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar4);
    DAT_14c947fe0 = lVar4;
  }
  FUN_140045924(DAT_14c947fe0,&local_68,puVar3,1);
  lVar4 = FUN_14050aea0(&local_68);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((lVar4 == 0) || (lVar4 = FUN_140e045c8(*(undefined8 *)(lVar4 + 0x50)), lVar4 == 0)) {
    local_60 = DAT_14cbd0828;
    local_68 = DAT_14cbd0820;
    FUN_1448075d0(local_58);
    plVar6 = (longlong *)FUN_144a06846(param_2,local_58);
    if (*plVar6 == 0) {
      puVar3 = &DAT_14c9a12e0;
    }
    else {
      puVar3 = (undefined4 *)FUN_140625092(*plVar6,&DAT_14c9a12e0);
    }
    plVar6 = (longlong *)FUN_1412e518a(puVar3);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6,param_1);
      goto LAB_140e0448c;
    }
    plVar5 = (longlong *)FUN_140e82300();
    plVar6 = (longlong *)*plVar5;
    *param_1 = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    uVar2 = (undefined4)plVar5[1];
  }
  else {
    plVar6 = *(longlong **)(lVar4 + 0x28);
    *param_1 = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    uVar2 = *(undefined4 *)(lVar4 + 0x30);
  }
  *(undefined4 *)(param_1 + 1) = uVar2;
LAB_140e0448c:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140e045c8 FUN_140e045c8 body=290 status=ok
// SIG undefined FUN_140e045c8(void)

undefined8 FUN_140e045c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  undefined8 *local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_40 = param_1;
  FUN_1446dcdd4(&local_38);
  if (local_34 == 2) {
    if ((local_38 == 0) || (local_38 == DAT_14c948000)) {
      local_48 = DAT_14c948620;
      local_50 = DAT_14c948618;
      local_58 = DAT_14c948620;
      local_60 = DAT_14c948618;
    }
    else {
      local_50 = *local_20;
      local_48 = *(undefined4 *)(local_20 + 1);
      local_58 = *(undefined4 *)((longlong)local_20 + 0x14);
      local_60 = *(undefined8 *)((longlong)local_20 + 0xc);
    }
    if (DAT_14cb84f20 != 0) {
      local_68 = local_58;
      local_80 = local_50;
      local_78 = local_48;
      local_70 = local_60;
      uVar1 = FUN_140e046ec();
      goto LAB_140e04681;
    }
  }
  uVar1 = 0;
LAB_140e04681:
  if (local_20 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e046ec FUN_140e046ec body=176 status=ok
// SIG undefined FUN_140e046ec(void)

longlong * FUN_140e046ec(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1405e2e10();
  local_30 = *param_3;
  local_28 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_2;
  local_38 = *(undefined4 *)(param_2 + 1);
  plVar2 = (longlong *)FUN_14050b224(param_1,&local_40,&local_30,uVar1);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
    lVar4 = FUN_1405e2e10();
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) {
      plVar5 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        plVar5 = plVar2;
      }
      goto LAB_140e0477a;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_140e0477a:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e047ac FUN_140e047ac body=40 status=ok
// SIG undefined FUN_140e047ac(void)

undefined8 FUN_140e047ac(undefined8 param_1,int param_2)

{
  FUN_140beec42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e047d4 FUN_140e047d4 body=72 status=ok
// SIG undefined FUN_140e047d4(void)

void FUN_140e047d4(longlong param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x5f8) = *(undefined1 *)(param_1 + 0x409);
  *(undefined1 *)(param_1 + 0x5f9) = 1;
  iVar1 = FUN_14487fd02();
  if (iVar1 != 3) {
    FUN_1407bebdc(param_1 + 0x520,param_1 + 0x4a0,param_1);
  }
  FUN_140e0481c(param_1);
  return;
}



// FUNCTION 140e0481c FUN_140e0481c body=80 status=ok
// SIG undefined FUN_140e0481c(void)

void FUN_140e0481c(longlong param_1)

{
  FUN_1405f1eac();
  FUN_140e0486c(param_1 + 0x450,param_1 + 0x490);
  FUN_140e04a4a(param_1);
  FUN_140af93c2(param_1,0);
  if (*(char *)(param_1 + 0x409) != '\x01') {
    return;
  }
  FUN_140af93c2(param_1,2);
  return;
}



// FUNCTION 140e0486c FUN_140e0486c body=79 status=ok
// SIG undefined FUN_140e0486c(void)

undefined8 * FUN_140e0486c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140e0490c(param_1,iVar1);
      FUN_140e048bb(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140e048bb FUN_140e048bb body=80 status=ok
// SIG undefined FUN_140e048bb(void)

void FUN_140e048bb(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 140e0490c FUN_140e0490c body=317 status=ok
// SIG undefined FUN_140e0490c(void)

void FUN_140e0490c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e0497a;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_140e0497a:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140e04a4a FUN_140e04a4a body=3894 status=ok
// SIG undefined FUN_140e04a4a(void)

void FUN_140e04a4a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  bool bVar32;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  ulonglong local_a0;
  longlong local_98;
  uint local_8c;
  uint local_88;
  uint local_84;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((DAT_14c872bd8 != '\0') || (lVar13 = FUN_1447210f0(), uVar6 = DAT_14cb1ae68, lVar13 == 0))
  goto LAB_140e0532b;
  if (DAT_14c9a7d10 == (undefined8 *)0x0) {
    DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *DAT_14c9a7d10 = 0;
    DAT_14c9a7d10[1] = 0;
    DAT_14c9a7d10[2] = 0;
    DAT_14c9a7d10[3] = 0;
  }
  FUN_14005915a(DAT_14c9a7d10,&local_58,uVar6,lVar13);
  plVar14 = plStack_50;
  plVar2 = local_58;
  if ((local_58 == (longlong *)0x0) || (plStack_50 == (longlong *)0x0)) {
    plVar14 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plStack_50 + 0xc) = *(int *)((longlong)plStack_50 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar15 = plStack_50 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  plVar15 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar16 = plStack_50 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (plVar14 == (longlong *)0x0) goto LAB_140e0532b;
  iVar12 = (int)plVar14[1];
  do {
    plVar15 = (longlong *)0x0;
    if (iVar12 == 0) break;
    LOCK();
    iVar26 = (int)plVar14[1];
    bVar32 = iVar12 == iVar26;
    if (bVar32) {
      *(int *)(plVar14 + 1) = iVar12 + 1;
      iVar26 = iVar12;
    }
    iVar12 = iVar26;
    UNLOCK();
    plVar15 = plVar14;
  } while (!bVar32);
  LOCK();
  piVar1 = (int *)((longlong)plVar14 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  if (plVar15 == (longlong *)0x0) goto LAB_140e0532b;
  if (plVar2 != (longlong *)0x0) {
    lVar13 = param_1;
    if (*(char *)(param_1 + 0x408) == '\x01') {
LAB_140e04b4b:
      lVar22 = lVar13;
      lVar13 = lVar22;
      if (*(longlong *)(lVar22 + 0x20) != 0) goto code_r0x000140e04b5a;
      goto LAB_140e04b69;
    }
    goto LAB_140e05319;
  }
  goto LAB_140e05321;
code_r0x000140e04b5a:
  lVar13 = *(longlong *)(lVar22 + 0x20);
  if ((*(uint *)(lVar22 + 8) >> 0x1c & 1) == 0) goto LAB_140e04b4b;
  lVar13 = FUN_142840154(lVar22);
LAB_140e04b69:
  if (lVar13 == 0) {
    lVar13 = *(longlong *)(lVar22 + 0x20);
    goto LAB_140e04b4b;
  }
  uVar23 = *(ulonglong *)(lVar13 + 0x18);
  local_a0 = *(ulonglong *)(param_1 + 0x18);
  plVar14 = plVar2 + 0x1d;
  local_60 = plVar15;
  if (*(int *)((longlong)plVar2 + 0x11c) == 0) {
    iVar12 = (int)plVar2[0x1e];
    *(int *)(plVar2 + 0x1e) = iVar12 + 1;
    if (*(int *)((longlong)plVar2 + 0xf4) == iVar12) {
      FUN_1403951a8(plVar14,iVar12);
    }
    iVar26 = (int)plVar2[0x22];
    if (iVar26 == 0) {
      iVar18 = -1;
    }
    else {
      iVar18 = iVar26 + 0x1e;
      if (-1 < iVar26 + -1) {
        iVar18 = iVar26 + -1;
      }
      iVar18 = iVar18 >> 5;
    }
    plVar15 = plVar2 + 0x1f;
    iVar20 = iVar26 + 1;
    iVar31 = iVar26 + 0x1f;
    if (-1 < iVar26) {
      iVar31 = iVar26;
    }
    if (iVar31 >> 5 == iVar18) {
      *(int *)(plVar2 + 0x22) = iVar20;
    }
    else {
      if (*(int *)((longlong)plVar2 + 0x114) <= iVar26) {
        local_a8 = uVar23;
        if (iVar26 + 0x20U < 0xa0) {
          iVar20 = 0x80;
          iVar18 = iVar26;
        }
        else {
          uVar25 = iVar26 + 0x20U >> 5;
          if (*(int *)((longlong)plVar2 + 0x114) + 0x1fU < 0xa0) {
            uVar19 = 4;
            if (4 < uVar25) {
              uVar19 = uVar25;
            }
          }
          else {
            uVar19 = (uVar25 * 3 >> 3) + uVar25 + 0x10;
          }
          uVar23 = FUN_144a3809e(uVar19 << 2,0);
          iVar18 = (int)(uVar23 >> 2);
          iVar20 = -0x20;
          if ((int)uVar25 <= iVar18) {
            iVar20 = iVar18 << 5;
          }
          iVar18 = (int)plVar2[0x22];
        }
        *(int *)((longlong)plVar2 + 0x114) = iVar20;
        FUN_1446efbd8(plVar15,iVar18);
        iVar20 = (int)plVar2[0x22] + 1;
        uVar23 = local_a8;
      }
      iVar18 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar18 = iVar20;
      }
      *(int *)(plVar2 + 0x22) = iVar20;
      if (iVar20 % 0x20 != 0) {
        plVar16 = (longlong *)plVar2[0x21];
        if ((longlong *)plVar2[0x21] == (longlong *)0x0) {
          plVar16 = plVar15;
        }
        bVar17 = -(char)(iVar20 % 0x20);
        *(uint *)((longlong)plVar16 + (longlong)(iVar18 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar16 + (longlong)(iVar18 >> 5) * 4) << (bVar17 & 0x1f)) >>
             (bVar17 & 0x1f);
      }
    }
    lVar13 = (longlong)iVar12;
    if ((longlong *)plVar2[0x21] != (longlong *)0x0) {
      plVar15 = (longlong *)plVar2[0x21];
    }
    bVar17 = (byte)iVar26 & 0x1f;
    puVar3 = (uint *)((longlong)plVar15 + (longlong)(iVar31 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
  }
  else {
    iVar12 = (int)plVar2[0x23];
    lVar13 = (longlong)iVar12;
    iVar26 = *(int *)(plVar2[0x1d] + 4 + lVar13 * 0x18);
    *(int *)(plVar2 + 0x23) = iVar26;
    iVar18 = *(int *)((longlong)plVar2 + 0x11c) + -1;
    *(int *)((longlong)plVar2 + 0x11c) = iVar18;
    if (iVar18 != 0) {
      *(undefined4 *)(plVar2[0x1d] + (longlong)iVar26 * 0x18) = 0xffffffff;
    }
  }
  plVar15 = plVar2 + 0x1f;
  if ((longlong *)plVar2[0x21] != (longlong *)0x0) {
    plVar15 = (longlong *)plVar2[0x21];
  }
  iVar26 = iVar12 + 0x1f;
  if (-1 < iVar12) {
    iVar26 = iVar12;
  }
  puVar3 = (uint *)((longlong)plVar15 + (longlong)(iVar26 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar12 & 0x1f);
  puVar4 = (ulonglong *)(plVar2[0x1d] + lVar13 * 0x18);
  local_68 = local_a0 >> 0x20;
  uVar25 = (uint)(local_a0 >> 0x10);
  local_88 = (uint)local_a0 & 0xffff;
  local_84 = uVar25 << 0x13 | uVar25 & 0xffff;
  uVar28 = (uint)local_a0 << 0x10 | local_88;
  local_88 = local_88 >> 4;
  uVar19 = (int)(local_a0 >> 0x20) + uVar28 + local_84 + local_88;
  local_70 = uVar23 >> 0x20;
  uVar25 = (uint)(uVar23 >> 0x10);
  uVar24 = (uint)uVar23 & 0xffff;
  local_8c = uVar25 << 0x13 | uVar25 & 0xffff;
  uVar27 = (uint)uVar23 << 0x10 | uVar24;
  uVar24 = uVar24 >> 4;
  local_78 = (ulonglong)uVar24;
  uVar25 = uVar19 >> 0xd ^ ((int)(uVar23 >> 0x20) + uVar24 + local_8c + uVar27) - uVar19;
  uVar24 = uVar25 << 8 ^ (-0x61c88647 - uVar19) - uVar25;
  uVar29 = uVar24 >> 0xd ^ (uVar19 - uVar25) - uVar24;
  uVar30 = uVar29 >> 0xc ^ (uVar25 - uVar24) - uVar29;
  uVar19 = uVar30 << 0x10 ^ (uVar24 - uVar29) - uVar30;
  uVar25 = uVar19 >> 5 ^ (uVar29 - uVar30) - uVar19;
  uVar24 = uVar25 >> 3 ^ (uVar30 - uVar19) - uVar25;
  uVar19 = uVar24 << 10 ^ (uVar19 - uVar25) - uVar24;
  iVar26 = 1;
  *puVar4 = uVar23;
  puVar4[1] = local_a0;
  *(undefined4 *)(puVar4 + 2) = 0xffffffff;
  uVar19 = uVar19 >> 0xf ^ uVar25 - (uVar24 + uVar19);
  uVar25 = (int)plVar2[0x1e] - *(int *)((longlong)plVar2 + 0x11c);
  if ((uVar25 != 0) && (uVar25 != 1)) {
    plVar15 = plVar2 + 0x24;
    if ((longlong *)plVar2[0x25] != (longlong *)0x0) {
      plVar15 = (longlong *)plVar2[0x25];
    }
    iVar18 = *(int *)((longlong)plVar15 + (ulonglong)((int)plVar2[0x26] - 1U & uVar19) * 4);
    if (iVar18 != -1) {
      do {
        puVar5 = (ulonglong *)(*plVar14 + (longlong)iVar18 * 0x18);
        if ((*puVar5 == uVar23) &&
           (*(ulonglong *)(*plVar14 + 8 + (longlong)iVar18 * 0x18) == local_a0)) {
          uVar6 = *(undefined4 *)((longlong)puVar4 + 4);
          uVar21 = puVar4[1];
          uVar7 = *(undefined4 *)((longlong)puVar4 + 0xc);
          *(int *)puVar5 = (int)*puVar4;
          *(undefined4 *)((longlong)puVar5 + 4) = uVar6;
          *(int *)(puVar5 + 1) = (int)uVar21;
          *(undefined4 *)((longlong)puVar5 + 0xc) = uVar7;
          FUN_140af9bc0(plVar14,iVar12);
          goto LAB_140e04e2b;
        }
        iVar18 = (int)puVar5[2];
      } while (iVar18 != -1);
    }
  }
  if (3 < uVar25) {
    uVar21 = (ulonglong)(uVar25 & 0xfffffffe) + 0xf;
    lVar13 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar26 = 1 << ((byte)lVar13 & 0x1f);
  }
  if (((int)uVar25 < 1) || (iVar26 <= (int)plVar2[0x26])) {
    uVar25 = (int)plVar2[0x26] - 1U & uVar19;
    *(uint *)((longlong)puVar4 + 0x14) = uVar25;
    plVar14 = (longlong *)plVar2[0x25];
    if ((longlong *)plVar2[0x25] == (longlong *)0x0) {
      plVar14 = plVar2 + 0x24;
    }
    *(undefined4 *)(puVar4 + 2) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)plVar2[0x26] - 1U & (longlong)(int)uVar25) * 4);
    plVar14 = (longlong *)plVar2[0x25];
    if ((longlong *)plVar2[0x25] == (longlong *)0x0) {
      plVar14 = plVar2 + 0x24;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)plVar2[0x26] - 1U & (longlong)(int)uVar25) * 4) =
         iVar12;
  }
  else {
    *(int *)(plVar2 + 0x26) = iVar26;
    FUN_140e06276(plVar14);
  }
LAB_140e04e2b:
  plVar14 = plVar2 + 0x27;
  if ((int)plVar2[0x28] != *(int *)((longlong)plVar2 + 0x16c)) {
    plVar15 = plVar2 + 0x2e;
    if ((longlong *)plVar2[0x2f] != (longlong *)0x0) {
      plVar15 = (longlong *)plVar2[0x2f];
    }
    iVar12 = *(int *)((longlong)plVar15 + (ulonglong)((int)plVar2[0x30] - 1U & uVar19) * 4);
    if (iVar12 != -1) {
      do {
        puVar4 = (ulonglong *)(*plVar14 + (longlong)iVar12 * 0x28);
        if ((*puVar4 == uVar23) &&
           (*(ulonglong *)(*plVar14 + 8 + (longlong)iVar12 * 0x28) == local_a0)) {
          if (puVar4 != (ulonglong *)0x0) {
            local_58 = (longlong *)puVar4[2];
            plStack_50 = (longlong *)puVar4[3];
            if (plStack_50 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
              UNLOCK();
            }
            if (local_58 == (longlong *)0x0) goto LAB_140e04e9b;
            goto LAB_140e05294;
          }
          break;
        }
        iVar12 = (int)puVar4[4];
      } while (iVar12 != -1);
    }
  }
  plStack_50 = (longlong *)0x0;
LAB_140e04e9b:
  local_58 = (longlong *)0x0;
  local_a8 = uVar23;
  plVar16 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar16[1] = (longlong)&DAT_100000001;
  *plVar16 = (longlong)&PTR_FUN_14ab66ee0;
  plVar15 = plVar16 + 2;
  plVar16[2] = (longlong)plVar2;
  plVar16[3] = 0;
  plVar16[4] = 0;
  *(undefined8 *)((longlong)plVar16 + 0x22) = 0;
  *(undefined8 *)((longlong)plVar16 + 0x2a) = 0;
  *(undefined4 *)((longlong)plVar16 + 0x34) = 0x7f7fffff;
  plVar16[9] = 0;
  plVar16[10] = 0x8000000000;
  plVar16[0xb] = 0;
  plVar16[0xc] = 0;
  *(undefined4 *)(plVar16 + 0xd) = 0xffffffff;
  lVar13 = param_1;
LAB_140e04f0d:
  lVar22 = lVar13;
  lVar13 = lVar22;
  if (*(longlong *)(lVar22 + 0x20) != 0) goto code_r0x000140e04f1c;
  goto LAB_140e04f2c;
code_r0x000140e04f1c:
  lVar13 = *(longlong *)(lVar22 + 0x20);
  if ((*(uint *)(lVar22 + 8) >> 0x1c & 1) == 0) goto LAB_140e04f0d;
  lVar13 = FUN_142840154(lVar22);
LAB_140e04f2c:
  plVar11 = plStack_50;
  if (lVar13 == 0) {
    lVar13 = *(longlong *)(lVar22 + 0x20);
    goto LAB_140e04f0d;
  }
  lVar22 = *(longlong *)(param_1 + 0x18);
  plVar16[3] = *(longlong *)(lVar13 + 0x18);
  plVar16[4] = lVar22;
  local_58 = plVar15;
  if (plVar16 == (longlong *)0x0) {
    if (plStack_50 != (longlong *)0x0) {
      plStack_50 = (longlong *)0x0;
LAB_140e0583d:
      LOCK();
      plVar15 = plVar11 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      if (plVar16 != (longlong *)0x0) goto LAB_140e04f79;
    }
  }
  else {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    if (plVar16 == plStack_50) {
      LOCK();
      plVar15 = plVar16 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    else {
      bVar32 = plStack_50 != (longlong *)0x0;
      plStack_50 = plVar16;
      if (bVar32) goto LAB_140e0583d;
    }
LAB_140e04f79:
    LOCK();
    plVar15 = plVar16 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  local_98 = param_1;
  if (*(int *)((longlong)plVar2 + 0x16c) == 0) {
    iVar12 = (int)plVar2[0x28];
    *(int *)(plVar2 + 0x28) = iVar12 + 1;
    if (*(int *)((longlong)plVar2 + 0x144) == iVar12) {
      FUN_140549c28(plVar14,iVar12);
    }
    iVar26 = (int)plVar2[0x2c];
    if (iVar26 == 0) {
      iVar18 = -1;
    }
    else {
      iVar18 = iVar26 + 0x1e;
      if (-1 < iVar26 + -1) {
        iVar18 = iVar26 + -1;
      }
      iVar18 = iVar18 >> 5;
    }
    plVar15 = plVar2 + 0x29;
    iVar20 = iVar26 + 1;
    iVar31 = iVar26 + 0x1f;
    if (-1 < iVar26) {
      iVar31 = iVar26;
    }
    if (iVar31 >> 5 == iVar18) {
      *(int *)(plVar2 + 0x2c) = iVar20;
    }
    else {
      if (*(int *)((longlong)plVar2 + 0x164) <= iVar26) {
        if (iVar26 + 0x20U < 0xa0) {
          iVar20 = 0x80;
          iVar18 = iVar26;
        }
        else {
          uVar25 = iVar26 + 0x20U >> 5;
          local_80 = (ulonglong)uVar25;
          if (*(int *)((longlong)plVar2 + 0x164) + 0x1fU < 0xa0) {
            uVar19 = 4;
            if (4 < uVar25) {
              uVar19 = uVar25;
            }
          }
          else {
            uVar19 = (uVar25 * 3 >> 3) + uVar25 + 0x10;
          }
          uVar23 = FUN_144a3809e(uVar19 << 2,0);
          iVar18 = (int)(uVar23 >> 2);
          iVar20 = -0x20;
          if ((int)local_80 <= iVar18) {
            iVar20 = iVar18 << 5;
          }
          iVar18 = (int)plVar2[0x2c];
        }
        *(int *)((longlong)plVar2 + 0x164) = iVar20;
        FUN_1446efbd8(plVar15,iVar18);
        iVar20 = (int)plVar2[0x2c] + 1;
      }
      iVar18 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar18 = iVar20;
      }
      *(int *)(plVar2 + 0x2c) = iVar20;
      if (iVar20 % 0x20 != 0) {
        plVar16 = (longlong *)plVar2[0x2b];
        if ((longlong *)plVar2[0x2b] == (longlong *)0x0) {
          plVar16 = plVar15;
        }
        bVar17 = -(char)(iVar20 % 0x20);
        *(uint *)((longlong)plVar16 + (longlong)(iVar18 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar16 + (longlong)(iVar18 >> 5) * 4) << (bVar17 & 0x1f)) >>
             (bVar17 & 0x1f);
      }
    }
    lVar13 = (longlong)iVar12;
    if ((longlong *)plVar2[0x2b] != (longlong *)0x0) {
      plVar15 = (longlong *)plVar2[0x2b];
    }
    bVar17 = (byte)iVar26 & 0x1f;
    puVar3 = (uint *)((longlong)plVar15 + (longlong)(iVar31 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
  }
  else {
    iVar12 = (int)plVar2[0x2d];
    lVar13 = (longlong)iVar12;
    iVar26 = *(int *)(plVar2[0x27] + 4 + lVar13 * 0x28);
    *(int *)(plVar2 + 0x2d) = iVar26;
    iVar18 = *(int *)((longlong)plVar2 + 0x16c) + -1;
    *(int *)((longlong)plVar2 + 0x16c) = iVar18;
    if (iVar18 != 0) {
      *(undefined4 *)(plVar2[0x27] + (longlong)iVar26 * 0x28) = 0xffffffff;
    }
  }
  plVar15 = plVar2 + 0x29;
  if ((longlong *)plVar2[0x2b] != (longlong *)0x0) {
    plVar15 = (longlong *)plVar2[0x2b];
  }
  iVar26 = iVar12 + 0x1f;
  if (-1 < iVar12) {
    iVar26 = iVar12;
  }
  puVar3 = (uint *)((longlong)plVar15 + (longlong)(iVar26 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar12 & 0x1f);
  puVar4 = (ulonglong *)(plVar2[0x27] + lVar13 * 0x28);
  *puVar4 = local_a8;
  puVar4[1] = local_a0;
  puVar4[2] = (ulonglong)local_58;
  puVar4[3] = (ulonglong)plStack_50;
  iVar26 = (int)local_68;
  iVar18 = (int)local_70;
  uVar25 = (uint)local_78;
  uVar23 = local_a8;
  uVar19 = local_84;
  uVar24 = local_88;
  uVar29 = local_8c;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    uVar23 = *puVar4;
    local_a0 = puVar4[1];
    iVar26 = (int)(local_a0 >> 0x20);
    uVar25 = (uint)(local_a0 >> 0x10);
    uVar24 = (uint)local_a0 & 0xffff;
    uVar19 = uVar25 << 0x13 | uVar25 & 0xffff;
    uVar28 = (uint)local_a0 << 0x10 | uVar24;
    uVar24 = uVar24 >> 4;
    iVar18 = (int)(uVar23 >> 0x20);
    uVar27 = (uint)(uVar23 >> 0x10);
    uVar25 = (uint)uVar23 & 0xffff;
    uVar29 = uVar27 << 0x13 | uVar27 & 0xffff;
    uVar27 = (uint)uVar23 << 0x10 | uVar25;
    uVar25 = uVar25 >> 4;
  }
  uVar24 = uVar28 + uVar24 + uVar19 + iVar26;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  uVar25 = uVar24 >> 0xd ^ (uVar27 + uVar25 + uVar29 + iVar18) - uVar24;
  uVar19 = uVar25 << 8 ^ (-0x61c88647 - uVar24) - uVar25;
  uVar24 = uVar19 >> 0xd ^ (uVar24 - uVar25) - uVar19;
  uVar25 = uVar24 >> 0xc ^ (uVar25 - uVar19) - uVar24;
  uVar27 = uVar25 << 0x10 ^ (uVar19 - uVar24) - uVar25;
  uVar19 = uVar27 >> 5 ^ (uVar24 - uVar25) - uVar27;
  uVar24 = uVar19 >> 3 ^ (uVar25 - uVar27) - uVar19;
  uVar25 = uVar24 << 10 ^ (uVar27 - uVar19) - uVar24;
  uVar25 = uVar25 >> 0xf ^ uVar19 - (uVar24 + uVar25);
  uVar19 = (int)plVar2[0x28] - *(int *)((longlong)plVar2 + 0x16c);
  if ((uVar19 != 0) && (uVar19 != 1)) {
    plVar15 = plVar2 + 0x2e;
    if ((longlong *)plVar2[0x2f] != (longlong *)0x0) {
      plVar15 = (longlong *)plVar2[0x2f];
    }
    iVar26 = *(int *)((longlong)plVar15 + (ulonglong)((int)plVar2[0x30] - 1U & uVar25) * 4);
    if (iVar26 != -1) {
      do {
        puVar5 = (ulonglong *)(*plVar14 + (longlong)iVar26 * 0x28);
        if ((*puVar5 == uVar23) &&
           (*(ulonglong *)(*plVar14 + 8 + (longlong)iVar26 * 0x28) == local_a0)) {
          plVar15 = (longlong *)puVar5[3];
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            plVar16 = plVar15 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
          uVar23 = *puVar4;
          uVar6 = *(undefined4 *)((longlong)puVar4 + 4);
          uVar21 = puVar4[1];
          uVar7 = *(undefined4 *)((longlong)puVar4 + 0xc);
          uVar8 = *(undefined4 *)((longlong)puVar4 + 0x14);
          uVar10 = puVar4[3];
          uVar9 = *(undefined4 *)((longlong)puVar4 + 0x1c);
          *(int *)(puVar5 + 2) = (int)puVar4[2];
          *(undefined4 *)((longlong)puVar5 + 0x14) = uVar8;
          *(int *)(puVar5 + 3) = (int)uVar10;
          *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar9;
          *(int *)puVar5 = (int)uVar23;
          *(undefined4 *)((longlong)puVar5 + 4) = uVar6;
          *(int *)(puVar5 + 1) = (int)uVar21;
          *(undefined4 *)((longlong)puVar5 + 0xc) = uVar7;
          FUN_147e2a866(plVar14,iVar12);
          param_1 = local_98;
          goto LAB_140e05294;
        }
        iVar26 = (int)puVar5[4];
      } while (iVar26 != -1);
    }
  }
  if (uVar19 < 4) {
    iVar26 = 1;
  }
  else {
    uVar23 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
    lVar13 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar26 = 1 << ((byte)lVar13 & 0x1f);
  }
  if (((int)uVar19 < 1) || (iVar26 <= (int)plVar2[0x30])) {
    uVar25 = (int)plVar2[0x30] - 1U & uVar25;
    *(uint *)((longlong)puVar4 + 0x24) = uVar25;
    plVar14 = (longlong *)plVar2[0x2f];
    if ((longlong *)plVar2[0x2f] == (longlong *)0x0) {
      plVar14 = plVar2 + 0x2e;
    }
    *(undefined4 *)(puVar4 + 4) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)plVar2[0x30] - 1U & (longlong)(int)uVar25) * 4);
    plVar14 = (longlong *)plVar2[0x2f];
    if ((longlong *)plVar2[0x2f] == (longlong *)0x0) {
      plVar14 = plVar2 + 0x2e;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)plVar2[0x30] - 1U & (longlong)(int)uVar25) * 4) =
         iVar12;
    param_1 = local_98;
  }
  else {
    *(int *)(plVar2 + 0x30) = iVar26;
    FUN_140e05f26(plVar14);
    param_1 = local_98;
  }
LAB_140e05294:
  plVar14 = local_58;
  *(undefined1 *)(local_58 + 4) = 1;
  if (param_1 == 0) {
    local_58[3] = 0;
    if ((int)local_58[10] == 0) goto LAB_140e052e8;
  }
  else {
    uVar25 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar25;
    if ((int)uVar25 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar12 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar26 = DAT_14c964868 + 1;
      bVar32 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar32) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar26);
      }
      LOCK();
      iVar12 = *(int *)(lVar13 + 0x10);
      bVar32 = iVar12 == 0;
      if (bVar32) {
        *(int *)(lVar13 + 0x10) = iVar26;
        iVar12 = 0;
      }
      UNLOCK();
      if (bVar32) {
        iVar12 = iVar26;
      }
    }
    *(int *)((longlong)plVar14 + 0x1c) = iVar12;
    if ((int)plVar14[10] == 0) {
LAB_140e052e8:
      FUN_140e05982(plVar14);
    }
    else {
      uVar25 = *(uint *)(plVar14 + 8);
      if ((int)*(uint *)(param_1 + 0x498) < (int)*(uint *)(plVar14 + 8)) {
        uVar25 = *(uint *)(param_1 + 0x498);
      }
      if (0 < (int)uVar25) {
        uVar23 = 0;
        do {
          plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x490) + uVar23 * 8);
          if (plVar15 != (longlong *)0x0) {
            plVar16 = (longlong *)plVar14[7];
            if ((longlong *)plVar14[7] == (longlong *)0x0) {
              plVar16 = plVar14 + 5;
            }
            uVar21 = uVar23 >> 5 & 0x7ffffff;
            if (((*(uint *)((longlong)plVar16 + uVar21 * 4) >> ((uint)uVar23 & 0x1f) & 1) != 0) &&
               ((char)plVar15[0x109] == '\0')) {
              *(undefined1 *)(plVar15 + 0x109) = 1;
              (**(code **)(*plVar15 + 0xa98))(plVar15,CONCAT71((int7)(uVar21 >> 8),1));
            }
          }
          uVar23 = uVar23 + 1;
        } while (uVar25 != uVar23);
      }
    }
  }
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_58);
  plVar2 = plStack_50;
  plVar15 = local_60;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_50 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar15 = local_60;
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        plVar15 = local_60;
      }
    }
  }
LAB_140e05319:
  *(undefined1 *)(param_1 + 0x460) = 1;
LAB_140e05321:
  LOCK();
  plVar2 = plVar15 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)*plVar15)(plVar15);
    LOCK();
    piVar1 = (int *)((longlong)plVar15 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
LAB_140e0532b:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e05982 FUN_140e05982 body=729 status=ok
// SIG undefined FUN_140e05982(void)

void FUN_140e05982(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  void *_Dst;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  void *pvVar12;
  longlong lVar13;
  uint uVar14;
  undefined4 uVar15;
  
  plVar1 = (longlong *)(param_1 + 0x48);
  iVar6 = *(int *)(param_1 + 0x54);
  FUN_140e05c77(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((iVar6 < 0) && (*(int *)(param_1 + 0x54) != 0)) {
    FUN_147e27e00(plVar1);
  }
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x7f7fffff;
  if (*(int *)(param_1 + 0x58) != -1) {
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    plVar8 = (longlong *)FUN_14479d2ce(param_1 + 0x18);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x638))(plVar8,*(undefined4 *)(param_1 + 0x58));
    }
  }
  if ((((*(int *)(param_1 + 0x1c) != 0) && (uVar14 = *(uint *)(param_1 + 0x18), -1 < (int)uVar14))
      && ((int)uVar14 < DAT_14c9647dc)) &&
     (((plVar8 = (longlong *)
                 ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
       plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(param_1 + 0x1c))) &&
      (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
       (plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0)))))) {
    lVar11 = plVar8[0x93];
    *(int *)(param_1 + 0x40) = (int)lVar11;
    uVar14 = (int)lVar11 + 0x1f;
    if (0x1f < uVar14) {
      pvVar12 = (void *)(param_1 + 0x28);
      uVar10 = uVar14 >> 5;
      if (*(int *)(param_1 + 0x44) + 0x1fU >> 5 < uVar10) {
        FUN_14499171c(pvVar12,0,uVar10,4);
        *(uint *)(param_1 + 0x44) = uVar14 & 0xffffffe0;
      }
      _Dst = *(void **)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x38) == (void *)0x0) {
        _Dst = pvVar12;
      }
      if (uVar14 < 0x120) {
        uVar10 = uVar14 >> 3 & 0x3c;
      }
      else {
        uVar10 = uVar10 << 2;
      }
      memset(_Dst,0,(ulonglong)uVar10);
      iVar6 = *(int *)(param_1 + 0x40);
      iVar5 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar5 = iVar6;
      }
      if (iVar6 % 0x20 != 0) {
        if (*(void **)(param_1 + 0x38) != (void *)0x0) {
          pvVar12 = *(void **)(param_1 + 0x38);
        }
        bVar7 = -(char)(iVar6 % 0x20);
        *(uint *)((longlong)pvVar12 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)pvVar12 + (longlong)(iVar5 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    uVar14 = *(uint *)(plVar8 + 0x89);
    iVar6 = *(int *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = iVar6 + uVar14;
    if ((uint)(*(int *)(param_1 + 0x54) - iVar6) < uVar14) {
      FUN_140e05e26(plVar1,iVar6);
    }
    FUN_140e05ca6((longlong)iVar6 * 0x20 + *plVar1,uVar14);
    if (0 < (int)plVar8[0x89]) {
      lVar11 = 0;
      do {
        lVar3 = plVar8[0x88];
        lVar13 = *plVar1 + lVar11 * 0x20;
        plVar9 = (longlong *)(lVar13 + 8);
        uVar14 = *(uint *)(lVar3 + 8 + lVar11 * 0x28);
        iVar6 = *(int *)(lVar13 + 0x10);
        *(uint *)(lVar13 + 0x10) = iVar6 + uVar14;
        if ((uint)(*(int *)(lVar13 + 0x14) - iVar6) < uVar14) {
          FUN_140e05cc4(plVar9,iVar6);
        }
        plVar2 = (longlong *)(lVar3 + lVar11 * 0x28);
        FUN_140e05c5b((longlong)iVar6 * 8 + *plVar9,uVar14);
        iVar6 = (int)plVar2[1];
        if (0 < iVar6) {
          lVar13 = 0;
          do {
            lVar3 = *(longlong *)(*plVar2 + lVar13 * 8);
            if (lVar3 != 0) {
              lVar4 = *plVar9;
              uVar15 = FUN_14085b07e(lVar3 + 0x28);
              *(undefined4 *)(lVar4 + 4 + lVar13 * 8) = uVar15;
              iVar6 = (int)plVar2[1];
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < iVar6);
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)plVar8[0x89]);
    }
    FUN_140af93c2(plVar8,4);
                    /* WARNING: Could not recover jumptable at 0x000140e05bce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x648))(plVar8);
    return;
  }
  return;
}



// FUNCTION 140e05c5b FUN_140e05c5b body=28 status=ok
// SIG undefined FUN_140e05c5b(void)

void FUN_140e05c5b(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_1 + lVar1 * 8) = 0;
      *(undefined4 *)(param_1 + 4 + lVar1 * 8) = 0;
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 140e05c77 FUN_140e05c77 body=47 status=ok
// SIG undefined FUN_140e05c77(void)

void FUN_140e05c77(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
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



// FUNCTION 140e05ca6 FUN_140e05ca6 body=30 status=ok
// SIG undefined FUN_140e05ca6(void)

void FUN_140e05ca6(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 140e05cc4 FUN_140e05cc4 body=353 status=ok
// SIG undefined FUN_140e05cc4(void)

void FUN_140e05cc4(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e05d49;
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
LAB_140e05d49:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 140e05e26 FUN_140e05e26 body=255 status=ok
// SIG undefined FUN_140e05e26(void)

void FUN_140e05e26(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140e05f26 FUN_140e05f26 body=847 status=ok
// SIG undefined FUN_140e05f26(void)

void FUN_140e05f26(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      uVar4 = 0;
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar8 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar11 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_70 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      local_70 = local_68 & 0xffffffff;
      uVar11 = local_68 >> 0x20;
    }
    uVar8 = (uint)local_58;
    iVar16 = local_58._4_4_;
    iVar7 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar6 = *param_1;
        lVar12 = (longlong)iVar16;
        uVar2 = *(undefined8 *)(lVar6 + lVar12 * 0x28);
        uVar3 = *(undefined8 *)(lVar6 + 8 + lVar12 * 0x28);
        uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar13 = (uint)uVar3 & 0xffff;
        uVar14 = ((uint)uVar3 << 0x10 | uVar13) + (int)((ulonglong)uVar3 >> 0x20) +
                 (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar13 >> 4);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar13 = (uint)uVar2 & 0xffff;
        uVar4 = uVar14 >> 0xd ^
                (((uint)uVar2 << 0x10 | uVar13) + (int)((ulonglong)uVar2 >> 0x20) +
                 (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar13 >> 4)) - uVar14;
        uVar18 = uVar4 << 8 ^ (-0x61c88647 - uVar14) - uVar4;
        uVar13 = uVar18 >> 0xd ^ (uVar14 - uVar4) - uVar18;
        uVar14 = uVar13 >> 0xc ^ (uVar4 - uVar18) - uVar13;
        uVar4 = uVar14 << 0x10 ^ (uVar18 - uVar13) - uVar14;
        uVar18 = uVar4 >> 5 ^ (uVar13 - uVar14) - uVar4;
        uVar13 = uVar18 >> 3 ^ (uVar14 - uVar4) - uVar18;
        uVar4 = uVar13 << 10 ^ (uVar4 - uVar18) - uVar13;
        uVar17 = (longlong)(int)(uVar4 >> 0xf ^ uVar18 - (uVar13 + uVar4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar15 = (int)uVar17;
        *(int *)(lVar6 + 0x24 + lVar12 * 0x28) = iVar15;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x20 + lVar12 * 0x28) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar17) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar15 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar16;
        uVar8 = ~(uint)uVar11 & uVar8;
        plVar5 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar5 = local_60;
        }
        iVar15 = (int)local_60[3];
        iVar16 = (int)local_70;
        lVar6 = (longlong)iVar16;
        uVar4 = *(uint *)((longlong)plVar5 + lVar6 * 4) & uVar8;
        if (uVar4 == 0) {
          iVar9 = iVar15 + 0x1e;
          if (-1 < iVar15 + -1) {
            iVar9 = iVar15 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar10 = iVar9;
          if (iVar9 < iVar16) {
            iVar10 = iVar16;
          }
          if (iVar9 <= iVar16) break;
          lVar12 = 0;
          while( true ) {
            iVar7 = iVar7 + 0x20;
            uVar4 = *(uint *)((longlong)plVar5 + lVar12 * 4 + lVar6 * 4 + 4);
            if (uVar4 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar10 - lVar6 == lVar12) goto LAB_140e06220;
          }
          local_70 = (ulonglong)(iVar16 + (int)lVar12 + 1);
          uVar8 = 0xffffffff;
        }
        uVar11 = (ulonglong)(-uVar4 & uVar4);
        uVar17 = uVar11 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar16 = (iVar7 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
      } while (iVar16 < iVar15);
    }
  }
LAB_140e06220:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e06276 FUN_140e06276 body=818 status=ok
// SIG undefined FUN_140e06276(void)

void FUN_140e06276(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 auStack_98 [44];
  int local_6c;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar11 = *(uint *)(param_1 + 9);
  if (uVar11 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar11,4);
    if (0 < (int)uVar11) {
      uVar6 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar6) * 4) =
             0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar11 != uVar6);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar13 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar13 = local_68 >> 0x20;
    }
    iVar7 = (int)local_68;
    uVar11 = (uint)local_58;
    iVar12 = local_58._4_4_;
    iVar10 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_6c = iVar10;
        lVar9 = *param_1;
        lVar14 = (longlong)iVar12;
        uVar3 = *(undefined8 *)(lVar9 + lVar14 * 0x18);
        uVar4 = *(undefined8 *)(lVar9 + 8 + lVar14 * 0x18);
        uVar6 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar15 = (uint)uVar4 & 0xffff;
        uVar16 = ((uint)uVar4 << 0x10 | uVar15) + (int)((ulonglong)uVar4 >> 0x20) +
                 (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar15 >> 4);
        uVar6 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar15 = (uint)uVar3 & 0xffff;
        uVar6 = uVar16 >> 0xd ^
                (((uint)uVar3 << 0x10 | uVar15) + (int)((ulonglong)uVar3 >> 0x20) +
                 (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar15 >> 4)) - uVar16;
        uVar18 = uVar6 << 8 ^ (-0x61c88647 - uVar16) - uVar6;
        uVar15 = uVar18 >> 0xd ^ (uVar16 - uVar6) - uVar18;
        uVar16 = uVar15 >> 0xc ^ (uVar6 - uVar18) - uVar15;
        uVar6 = uVar16 << 0x10 ^ (uVar18 - uVar15) - uVar16;
        uVar18 = uVar6 >> 5 ^ (uVar15 - uVar16) - uVar6;
        uVar15 = uVar18 >> 3 ^ (uVar16 - uVar6) - uVar18;
        uVar6 = uVar15 << 10 ^ (uVar6 - uVar18) - uVar15;
        uVar17 = (longlong)(int)(uVar6 >> 0xf ^ uVar18 - (uVar15 + uVar6)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar17;
        *(int *)(lVar9 + 0x14 + lVar14 * 0x18) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar9 + 0x10 + lVar14 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar17) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        uVar11 = ~(uint)uVar13 & uVar11;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar2 = (int)local_60[3];
        lVar9 = (longlong)iVar7;
        uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4) & uVar11;
        iVar10 = local_6c;
        if (uVar6 == 0) {
          iVar12 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar12 = iVar2 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar5 = iVar12;
          if (iVar12 < iVar7) {
            iVar5 = iVar7;
          }
          if (iVar12 <= iVar7) break;
          lVar14 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar6 = *(uint *)((longlong)plVar8 + lVar14 * 4 + lVar9 * 4 + 4);
            if (uVar6 != 0) break;
            lVar14 = lVar14 + 1;
            if (iVar5 - lVar9 == lVar14) goto LAB_140e0656b;
          }
          iVar7 = iVar7 + (int)lVar14 + 1;
          uVar11 = 0xffffffff;
        }
        uVar13 = (ulonglong)(-uVar6 & uVar6);
        uVar17 = uVar13 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar12 = (iVar10 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar2);
    }
  }
LAB_140e0656b:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e065aa FUN_140e065aa body=148 status=ok
// SIG undefined FUN_140e065aa(void)

void FUN_140e065aa(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  uVar1 = DAT_14cb8a5dc;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x868) != 0) {
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    local_28 = DAT_14cb8a5dc;
    uStack_24 = 0xffffffff;
    local_48 = CONCAT44(0xffffffff,DAT_14cb8a5dc);
    local_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    FUN_140e06a08(*(longlong *)(param_1 + 0x868),&local_58,param_2,0);
    local_5c = uVar1;
    FUN_140e06640(param_1 + 0x10,&local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e06640 FUN_140e06640 body=796 status=ok
// SIG undefined FUN_140e06640(void)

void FUN_140e06640(longlong param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  uint *local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  uint *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar3 = *(int *)(param_1 + 0xd0);
  if (iVar3 == 0) {
    uVar10 = 1;
    uVar16 = 0;
    iVar5 = 0;
    iVar15 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 200);
    if (*(uint **)(param_1 + 200) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0xb8);
    }
    uVar11 = *puVar6;
    if (uVar11 == 0) {
      iVar5 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar5 = iVar3 + -1;
      }
      uVar16 = 0;
      uVar10 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar10 = uVar16;
      }
      iVar15 = 0;
      do {
        if (uVar10 == uVar16) goto LAB_140e067f9;
        iVar15 = iVar15 + 0x20;
        uVar11 = puVar6[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar16 = 0;
      iVar15 = 0;
    }
    uVar10 = (ulonglong)(-uVar11 & uVar11);
    uVar2 = uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar15 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 != iVar3) {
    uVar11 = 0xffffffff;
    local_a0 = param_3;
    local_80 = (uint *)(param_1 + 0xb8);
    do {
      lVar12 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar5 * 400;
      if (*local_a0 == *(uint *)(lVar12 + 0x28)) {
        FUN_1400a4b32(lVar12 + 8);
        *(int *)(lVar12 + 0x170) = *(int *)(lVar12 + 0x170) + 1;
      }
      else {
        local_68 = *param_2;
        uStack_64 = param_2[1];
        uStack_60 = param_2[2];
        uStack_5c = param_2[3];
        local_54 = 0xffffffff;
        local_a8 = (longlong *)(lVar12 + 0xd0);
        local_58 = *local_a0;
        uVar14 = FUN_1447addd0(&local_68,0x10);
        iVar5 = FUN_140e0695e(local_a8,uVar14 ^ local_58,&local_68);
        if (iVar5 != -1) {
          lVar13 = *local_a8 + (longlong)iVar5 * 0x70;
          if ((lVar13 != 0) && (lVar9 = (longlong)iVar5 * 0x70 + *local_a8 + 0x18, lVar9 != 0)) {
            if (*(longlong *)(lVar13 + 0x58) != 0) {
              lVar9 = *(longlong *)(lVar13 + 0x58);
            }
            if ((longlong)*(int *)(lVar13 + 0x60) != 0) {
              local_98 = (longlong)*(int *)(lVar13 + 0x60) << 4;
              lVar13 = 0;
              local_90 = lVar9;
              do {
                puVar1 = (undefined4 *)(local_90 + lVar13);
                local_78 = *puVar1;
                uStack_74 = puVar1[1];
                uStack_70 = puVar1[2];
                uStack_6c = puVar1[3];
                local_88 = lVar13;
                FUN_1400a4b32(lVar12 + 8,&local_78);
                *(int *)(lVar12 + 0x170) = *(int *)(lVar12 + 0x170) + 1;
                lVar13 = local_88 + 0x10;
              } while (local_98 != lVar13);
            }
            FUN_1457b2da4(local_a8,&local_68);
          }
        }
      }
      uVar11 = uVar11 & ~(uint)uVar10;
      puVar6 = *(uint **)(param_1 + 200);
      if (*(uint **)(param_1 + 200) == (uint *)0x0) {
        puVar6 = local_80;
      }
      iVar4 = *(int *)(param_1 + 0xd0);
      iVar5 = (int)uVar16;
      lVar12 = (longlong)iVar5;
      uVar14 = puVar6[lVar12] & uVar11;
      if (uVar14 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar13 = 0;
          do {
            uVar14 = puVar6[lVar12 + lVar13 + 1];
            if (uVar14 != 0) {
              uVar16 = (ulonglong)(iVar5 + (int)lVar13 + 1);
              uVar11 = 0xffffffff;
              goto LAB_140e067bd;
            }
            iVar15 = iVar15 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar8 - lVar12 != lVar13);
          uVar11 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar16 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar4;
      }
      else {
LAB_140e067bd:
        uVar10 = (ulonglong)(-uVar14 & uVar14);
        uVar2 = uVar10 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar5 = (iVar15 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar5) {
          iVar5 = iVar4;
        }
      }
    } while (iVar5 != iVar3);
  }
LAB_140e067f9:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e0695e FUN_140e0695e body=108 status=ok
// SIG undefined FUN_140e0695e(void)

int FUN_140e0695e(longlong *param_1,uint param_2,undefined8 param_3)

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
        cVar1 = FUN_140e069ca(lVar3 + (longlong)iVar4 * 0x70,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x68 + (longlong)iVar4 * 0x70);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 140e069ca FUN_140e069ca body=62 status=ok
// SIG undefined FUN_140e069ca(void)

undefined4 FUN_140e069ca(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (uVar1 = 0, param_1[3] == param_2[3])) {
    if (param_1[4] == param_2[4]) {
      uVar1 = CONCAT31((int3)((uint)param_1[5] >> 8),param_1[5] == param_2[5]);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



// FUNCTION 140e06a08 FUN_140e06a08 body=616 status=ok
// SIG undefined FUN_140e06a08(void)

void FUN_140e06a08(longlong param_1,undefined4 *param_2,longlong param_3,byte param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 *local_68;
  undefined8 *puStack_60;
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 == 0) goto LAB_140e06b97;
  puStack_60 = &local_98;
  local_98 = (undefined4 *)CONCAT44(local_98._4_4_,*(undefined4 *)(param_1 + 0x30));
  local_68 = param_2;
  FUN_140b87870(param_1 + 0x40,&local_88);
  local_98 = (undefined4 *)0x0;
  uStack_90 = (undefined8 *)0x0;
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  local_78 = *(undefined8 *)(param_2 + 4);
  FUN_1400bbfc4(&local_68,param_3);
  local_98 = local_68;
  uStack_90 = puStack_60;
  cVar4 = (*(code *)PTR_FUN_14c758760)();
  uVar2 = *(uint *)(param_3 + 0xc);
  if (cVar4 == '\0') {
LAB_140e06ab3:
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar5 = *(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar5 = *(uint *)(lVar7 + 0x10);
      bVar10 = uVar5 == 0;
      if (bVar10) {
        *(uint *)(lVar7 + 0x10) = uVar6;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar5 = uVar6;
      }
    }
    uVar9 = (ulonglong)uVar5;
    uVar5 = uVar2;
  }
  else {
    uVar5 = 0;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar9 = 0;
    if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) goto LAB_140e06ab3;
  }
  iVar3 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar3 + 1U) {
    FUN_140b87bd2((longlong *)(param_1 + 0x28),iVar3);
  }
  lVar7 = *(longlong *)(param_1 + 0x28);
  puVar1 = (undefined8 *)(lVar7 + (longlong)iVar3 * 0x48);
  puVar1[2] = local_78;
  *puVar1 = CONCAT44(uStack_84,local_88);
  puVar1[1] = CONCAT44(uStack_7c,uStack_80);
  puVar1[3] = (ulonglong)uVar5 | uVar9 << 0x20;
  *(undefined4 *)(puVar1 + 4) = (undefined4)local_98;
  *(undefined4 *)((longlong)puVar1 + 0x24) = local_98._4_4_;
  *(undefined4 *)(puVar1 + 5) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_90._4_4_;
  puVar1[6] = 0;
  *(int *)(puVar1 + 7) = local_50;
  if (local_50 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
  }
  else {
    puVar8 = (undefined8 *)(lVar7 + (longlong)iVar3 * 0x48 + 0x30);
    FUN_1446dd670(puVar8,local_50,0);
    memcpy((void *)*puVar8,local_58,(longlong)local_50 * 2);
  }
  *(byte *)(puVar1 + 8) = param_4 ^ 1;
  if (local_58 != (void *)0x0) {
    FUN_1400020a8(local_58);
  }
LAB_140e06b97:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e06c78 FUN_140e06c78 body=57 status=ok
// SIG undefined FUN_140e06c78(void)

void FUN_140e06c78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f788 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f788 = FUN_140002ddd(FUN_146541050,uVar1,L"UsabilityCost");
  }
  return;
}



// FUNCTION 140e06cb2 FUN_140e06cb2 body=331 status=ok
// SIG undefined FUN_140e06cb2(void)

void FUN_140e06cb2(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1cc + (longlong)iVar4 * 0x1d0) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e06dfe FUN_140e06dfe body=434 status=ok
// SIG undefined FUN_140e06dfe(void)

undefined8 FUN_140e06dfe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_1400d7050();
  if (lVar3 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      lVar3 = FUN_140e06fb1(lVar3);
      if (lVar3 != 0) {
        FUN_1405f62be(lVar3,&local_28);
        if ((local_28 != (code *)0x0) && (*(int *)(param_1 + 0x14) != 0)) {
          if (local_20 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_20 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_20)(local_20);
              LOCK();
              piVar2 = (int *)((longlong)local_20 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_20 + 0x10))(local_20);
              }
            }
          }
          uVar4 = 1;
          goto LAB_140e06e87;
        }
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_20 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar2 = (int *)((longlong)local_20 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_20 + 0x10))(local_20);
            }
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_140e06e87:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e06fb1 FUN_140e06fb1 body=347 status=ok
// SIG undefined FUN_140e06fb1(void)

undefined8 FUN_140e06fb1(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    if (DAT_14cb61cd0 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1463b31ae;
      local_48 = &LAB_1486dca4f;
      local_50 = &LAB_1464f50a6;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
      plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x958) + 0x10))(param_1 + 0x958);
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1);
        if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e07122 FUN_140e07122 body=478 status=ok
// SIG undefined FUN_140e07122(void)

longlong FUN_140e07122(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x430), lVar3 != 0)) {
    if (DAT_14cae9568 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1417de738;
      local_30 = &LAB_145893408;
      local_38 = &LAB_1458cbbd2;
      local_48 = &LAB_147ba21f1;
      local_50 = &LAB_1463e9233;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar3 = *(longlong *)(param_2 + 0x430);
      if (lVar3 == 0) goto LAB_140e072dd;
    }
    lVar2 = 0;
    if ((DAT_14cae9568 == 0) || (lVar6 = *(longlong *)(lVar3 + 0x10), lVar6 == 0))
    goto LAB_140e072df;
    if ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
       ((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
         == DAT_14cae9568 + 0x30 && ((longlong)*(int *)(param_1 + 0x110) != 0)))) {
      lVar6 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x108) + lVar6);
        if ((*(int *)(lVar2 + 0xa4) == 0) || (uVar1 = *(uint *)(lVar2 + 0xa0), (int)uVar1 < 0)) {
LAB_140e0722f:
          lVar4 = 0;
        }
        else {
          lVar4 = 0;
          if ((int)uVar1 < DAT_14c9647dc) {
            plVar5 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((plVar5 == (longlong *)0x0) || ((int)plVar5[2] != *(int *)(lVar2 + 0xa4))) ||
               ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)) goto LAB_140e0722f;
            lVar4 = *plVar5;
          }
        }
        if (lVar4 == lVar3) break;
        lVar6 = lVar6 + 0x10;
        lVar2 = 0;
      } while ((longlong)*(int *)(param_1 + 0x110) * 0x10 != lVar6);
      goto LAB_140e072df;
    }
  }
LAB_140e072dd:
  lVar2 = 0;
LAB_140e072df:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 140e07302 FUN_140e07302 body=513 status=ok
// SIG undefined FUN_140e07302(void)

void FUN_140e07302(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if ((int)param_1[5] == 0) {
    uVar11 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar11 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar12 = (int)local_68;
  uVar13 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar8 = local_50;
  plVar7 = param_1;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      local_70 = plVar7;
      lVar10 = *local_70;
      lVar9 = (longlong)iVar6 * 0x1d0;
      if (*(longlong *)(lVar10 + 0x1b8 + lVar9) != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(lVar10 + 0x1b0 + lVar9) = 0;
      if (*(longlong *)(lVar10 + 0x1a8 + lVar9) != 0) {
        FUN_1400020a8();
      }
      FUN_140e91296(lVar9 + lVar10 + 0x168);
      FUN_141445ca8(lVar9 + lVar10 + 0x10);
      uVar13 = uVar13 & ~(uint)uVar11;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar10 = (longlong)iVar12;
      uVar5 = *(uint *)((longlong)plVar7 + lVar10 * 4) & uVar13;
      param_1 = local_70;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar12) {
          iVar3 = iVar12;
        }
        if (iVar6 <= iVar12) break;
        lVar9 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar9 * 4 + lVar10 * 4 + 4);
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar10 == lVar9) goto LAB_140e0749b;
        }
        iVar12 = iVar12 + (int)lVar9 + 1;
        uVar13 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar11 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar6 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      plVar7 = local_70;
    } while (iVar6 < iVar2);
  }
LAB_140e0749b:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_145c467ea(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e07504 FUN_140e07504 body=14413 status=ok
// SIG undefined FUN_140e07504(void)

void FUN_140e07504(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  void *pvVar2;
  ushort uVar3;
  double dVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  int *piVar18;
  undefined8 uVar19;
  longlong *plVar20;
  uint *puVar21;
  undefined8 *puVar22;
  byte bVar23;
  int iVar24;
  int iVar25;
  undefined *puVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined8 *puVar30;
  longlong lVar31;
  code *pcVar32;
  longlong lVar33;
  ulonglong uVar34;
  uint uVar35;
  ulonglong uVar36;
  uint uVar37;
  ulonglong uVar38;
  undefined8 *puVar39;
  ulonglong uVar40;
  undefined8 *puVar41;
  bool bVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 auStack_678 [32];
  uint *local_658;
  undefined4 local_650;
  undefined4 local_648;
  undefined8 local_640;
  wchar_t *local_638;
  undefined1 *local_630;
  undefined1 *local_628;
  code **local_620;
  undefined1 *local_618;
  code *local_610;
  ulonglong local_608;
  longlong local_600;
  undefined8 local_5f8;
  ulonglong local_5f0;
  longlong *local_5e8;
  undefined8 local_5e0;
  uint *local_5d8;
  longlong *local_5d0;
  ulonglong local_5c8;
  longlong *local_5c0;
  int local_5b4;
  ulonglong local_5b0;
  longlong *local_5a8;
  longlong *local_5a0;
  longlong local_598;
  longlong local_590;
  longlong local_588;
  longlong local_580;
  longlong local_578;
  longlong local_570;
  longlong *local_568;
  longlong *local_560;
  longlong local_558;
  longlong *local_550;
  code *local_548;
  uint local_540;
  code *local_538;
  uint local_530;
  longlong local_528;
  undefined4 local_520;
  code *local_518;
  uint local_510;
  undefined8 local_508;
  int local_500;
  undefined4 local_4fc;
  code *local_4f8;
  uint local_4f0;
  longlong local_4e8;
  longlong *local_4e0;
  code *local_4d8;
  uint local_4d0;
  code *local_4c8;
  undefined4 local_4c0;
  ulonglong *local_4b8;
  undefined8 uStack_4b0;
  longlong *local_4a0;
  longlong *local_498;
  undefined8 *local_490;
  longlong *local_488;
  undefined8 *local_480;
  int local_478;
  longlong local_470;
  longlong *local_468;
  longlong local_460;
  longlong local_458;
  longlong *local_450;
  longlong local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  code *local_418;
  int local_410;
  undefined4 uStack_40c;
  longlong *local_408;
  int local_400;
  undefined4 uStack_3fc;
  undefined1 local_3f4 [4];
  undefined1 local_3f0 [40];
  code *local_3c8;
  ulonglong uStack_3c0;
  ulonglong local_3b8;
  ulonglong local_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 local_39c;
  undefined4 local_394;
  byte local_390;
  longlong local_388;
  undefined4 local_380;
  longlong local_2e8;
  ulonglong uStack_2e0;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  longlong local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  longlong local_2a8;
  undefined4 local_2a0;
  code *local_298;
  longlong *plStack_290;
  code *pcStack_288;
  ulonglong local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  longlong lStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined1 local_1cc;
  undefined2 local_1cb;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8 [40];
  undefined1 local_190;
  longlong *local_188;
  undefined4 local_180;
  longlong *local_178;
  undefined4 local_170;
  uint local_168;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148;
  longlong local_140;
  undefined8 uStack_138;
  uint local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  uint *local_120;
  int local_118;
  undefined8 uStack_114;
  undefined4 uStack_10c;
  undefined4 local_108;
  longlong local_100;
  undefined4 local_f8;
  void *local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_678;
  plVar20 = param_1 + 6;
  lVar13 = FUN_1400d7050(plVar20);
  if (lVar13 == 0) goto LAB_140e0ab8a;
  if (DAT_14cbadd90 == 0) {
    local_620 = &local_298;
    local_298 = FUN_141030f22;
    local_610 = FUN_14081d0ea;
    local_618 = &LAB_1459f2e4c;
    local_628 = &LAB_148c39de3;
    local_630 = &LAB_1457a9eb2;
    local_638 = L"Game";
    local_640 = 0;
    local_648 = 0x10000004;
    local_650 = 0x10;
    local_658 = (uint *)CONCAT44(local_658._4_4_,0x3de0);
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90);
  }
  if (((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
     (lVar17 = *(longlong *)(lVar13 + 0x430), lVar17 == 0)) goto LAB_140e0ab8a;
  if (DAT_14cae9568 == 0) {
    local_620 = &local_298;
    local_298 = FUN_1417de738;
    local_610 = (code *)&LAB_145893408;
    local_618 = &LAB_1458cbbd2;
    local_628 = &LAB_147ba21f1;
    local_630 = &LAB_1463e9233;
    local_638 = L"Engine";
    local_640 = 0;
    local_648 = 0x1000000c;
    local_650 = 8;
    local_658 = (uint *)CONCAT44(local_658._4_4_,0x2b8);
    FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568);
    lVar17 = *(longlong *)(lVar13 + 0x430);
    if (lVar17 == 0) goto LAB_140e0ab8a;
  }
  if (((DAT_14cae9568 == 0) || (lVar29 = *(longlong *)(lVar17 + 0x10), lVar29 == 0)) ||
     ((*(int *)(lVar29 + 0x38) < *(int *)(DAT_14cae9568 + 0x38) ||
      ((*(longlong *)(*(longlong *)(lVar29 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
        != DAT_14cae9568 + 0x30 ||
       (plVar14 = (longlong *)FUN_140e06fb1(lVar13), plVar14 == (longlong *)0x0))))))
  goto LAB_140e0ab8a;
  FUN_1405f62be(plVar14,&local_4a0);
  if ((local_4a0 != (longlong *)0x0) &&
     ((plVar15 = (longlong *)(**(code **)(*(longlong *)(lVar13 + 0x958) + 0x10))(lVar13 + 0x958),
      plVar15 != (longlong *)0x0 && (uVar16 = (**(code **)(*plVar15 + 0x2b8))(plVar15), uVar16 != 0)
      ))) {
    local_4b8 = (ulonglong *)0x0;
    uStack_4b0 = 0;
    lVar29 = *(longlong *)(uVar16 + 200);
    local_600 = lVar13;
    local_5a0 = plVar14;
    local_558 = lVar17;
    local_550 = plVar20;
    if (lVar29 == 0) {
      if ((int)DAT_14c948618 != 0) {
        local_3c8 = (code *)CONCAT44(DAT_14c948618._4_4_,(int)DAT_14c948618);
        iVar8 = DAT_14c948620;
LAB_140e076b4:
        uStack_3c0 = CONCAT44(uStack_3c0._4_4_,iVar8);
        uStack_4b0 = 1;
        local_608 = uVar16;
        FUN_1446dd912(&local_4b8,0);
        *(int *)(local_4b8 + 1) = (int)uStack_3c0;
        *local_4b8 = (ulonglong)local_3c8;
        local_4c8 = local_3c8;
        local_4c0 = (int)uStack_3c0;
        FUN_1448075d0(&local_298);
        lVar17 = FUN_14060eaf6(&local_298);
        if (local_280 != 0) {
          FUN_1400020a8();
        }
        uVar16 = local_608;
        if ((lVar17 != 0) && (iVar8 = *(int *)(lVar17 + 0x4d0), (longlong)iVar8 != 0)) {
          lVar17 = *(longlong *)(lVar17 + 0x4c8);
          lVar29 = 0;
          do {
            uVar16 = uStack_4b0;
            lVar31 = *(longlong *)(lVar17 + lVar29);
            if (lVar31 != 0) {
              piVar18 = *(int **)(lVar31 + 8);
              if (piVar18 == (int *)0x0) {
                piVar18 = &DAT_14c9485f0;
              }
              if (((*piVar18 == 0) || (iVar11 = piVar18[1], iVar11 == 0)) ||
                 (*piVar18 == DAT_14c948000)) {
LAB_140e0782f:
                local_298 = (code *)CONCAT44(DAT_14c948618._4_4_,(int)DAT_14c948618);
                iVar11 = DAT_14c948620;
              }
              else {
                if ((iVar11 < 2) && (piVar18[9] < 1)) {
                  piVar18 = piVar18 + 2;
                }
                else {
                  piVar18 = *(int **)(piVar18 + 6);
                }
                if (iVar11 < 1) goto LAB_140e0782f;
                local_298 = *(code **)piVar18;
                iVar11 = piVar18[2];
              }
              plStack_290 = (longlong *)CONCAT44(plStack_290._4_4_,iVar11);
              lVar31 = (longlong)(int)uStack_4b0;
              uVar7 = (int)uStack_4b0 + 1;
              uStack_4b0 = CONCAT44(uStack_4b0._4_4_,uVar7);
              if (uStack_4b0._4_4_ < uVar7) {
                FUN_1446dd912(&local_4b8,uVar16 & 0xffffffff);
                lVar13 = local_600;
              }
              *(undefined4 *)((longlong)local_4b8 + lVar31 * 0xc + 8) = plStack_290._0_4_;
              *(code **)((longlong)local_4b8 + lVar31 * 0xc) = local_298;
            }
            lVar29 = lVar29 + 8;
            uVar16 = local_608;
          } while ((longlong)iVar8 * 8 != lVar29);
        }
      }
    }
    else if (*(int *)(lVar29 + 8) != 0) {
      iVar8 = *(int *)(lVar29 + 0x10);
      local_3c8 = *(code **)(lVar29 + 8);
      goto LAB_140e076b4;
    }
    local_608 = FUN_14133cf88(uVar16);
    if (local_608 == 0) {
      if ((int)param_1[0x12] == 0) {
LAB_140e078a8:
        local_608 = 0;
      }
      else {
        local_608 = 0;
        if ((*(int *)((longlong)param_1 + 0x94) != 0) && ((int)param_1[0x12] != DAT_14c948000)) {
          if (DAT_14cbcdc38 == 0) goto LAB_140e078a8;
          local_608 = FUN_144837462(DAT_14cbcdc38,param_1 + 0x12);
        }
      }
    }
    local_b8 = 0;
    local_b0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_ac = 0xffffffff00000080;
    local_a4 = 0;
    local_98 = 0;
    local_90 = 0;
    lVar17 = param_2[1];
    if ((longlong)(int)lVar17 != 0) {
      lVar29 = *param_2;
      lVar31 = 0;
      local_5e8 = param_3;
      local_560 = param_1;
      do {
        uStack_3c0 = CONCAT44(uStack_3c0._4_4_,*(undefined4 *)(lVar29 + 8 + lVar31));
        local_3c8 = *(code **)(lVar29 + lVar31);
        (**(code **)(*local_4a0 + 0x78))(local_4a0,&local_298,&local_3c8);
        if ((local_298 != (code *)0x0) && (*(int *)(*(longlong *)(local_298 + 8) + 0x108) != 0)) {
          local_2e8 = *(longlong *)(*(longlong *)(local_298 + 8) + 0x100);
          cVar5 = FUN_1412303d0(&local_2e8,lVar13);
          if (cVar5 != '\0') {
            local_2e8 = *(longlong *)(*(longlong *)(local_298 + 8) + 0x108);
            uStack_2e0 = CONCAT44(uStack_2e0._4_4_,
                                  *(undefined4 *)(*(longlong *)(local_298 + 8) + 0x110));
            FUN_1409612f0(&local_d8,&local_438,&local_2e8);
          }
        }
        plVar20 = plStack_290;
        if (plStack_290 != (longlong *)0x0) {
          LOCK();
          plVar14 = plStack_290 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plStack_290)(plStack_290);
            LOCK();
            piVar18 = (int *)((longlong)plVar20 + 0xc);
            *piVar18 = *piVar18 + -1;
            UNLOCK();
            if (*piVar18 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
            }
          }
        }
        lVar31 = lVar31 + 0xc;
      } while ((longlong)(int)lVar17 * 0xc != lVar31);
      if ((longlong)(int)param_2[1] != 0) {
        puVar30 = (undefined8 *)*param_2;
        puVar39 = (undefined8 *)((longlong)(int)param_2[1] * 0xc + (longlong)puVar30);
        local_570 = local_608 + 0x48;
        local_5c0 = local_5e8 + 2;
        local_568 = local_5e8 + 7;
        plVar20 = local_5e8;
        do {
          local_4d0 = *(uint *)(puVar30 + 1);
          local_4d8 = (code *)*puVar30;
          if ((longlong)(int)uStack_4b0 < 1) {
LAB_140e07aec:
            pcVar32 = local_4d8;
            if (local_4d0 != 0) {
              uVar7 = local_4d0 >> 0xd ^ (int)local_4d8 - local_4d0;
              uVar27 = uVar7 << 8 ^ (-0x61c88647 - local_4d0) - uVar7;
              uVar35 = uVar27 >> 0xd ^ (local_4d0 - uVar7) - uVar27;
              uVar7 = uVar35 >> 0xc ^ (uVar7 - uVar27) - uVar35;
              uVar27 = uVar7 << 0x10 ^ (uVar27 - uVar35) - uVar7;
              uVar37 = uVar27 >> 5 ^ (uVar35 - uVar7) - uVar27;
              uVar35 = uVar37 >> 3 ^ (uVar7 - uVar27) - uVar37;
              uVar7 = uVar35 << 10 ^ (uVar27 - uVar37) - uVar35;
              pcVar32 = (code *)(ulonglong)(uVar7 >> 0xf ^ uVar37 - (uVar35 + uVar7));
            }
            iVar8 = FUN_1407a7398(&local_d8,pcVar32,&local_4d8);
            if (iVar8 == -1) {
              (**(code **)(*local_4a0 + 0x78))(local_4a0,&local_4e8,&local_4d8);
              if ((local_4e8 != 0) && (lVar17 = FUN_1405f6336(), lVar17 != 0)) {
                plVar14 = (longlong *)FUN_1405f6336(local_4e8);
                uVar19 = FUN_140fa5e64();
                cVar5 = FUN_1448093f4(plVar14,uVar19);
                if ((plVar14 != (longlong *)0x0) && (cVar5 != '\0')) {
                  local_298 = *(code **)(*(longlong *)(local_4e8 + 8) + 0x100);
                  cVar5 = FUN_1412303d0(&local_298,lVar13);
                  if (cVar5 != '\0') {
                    lVar17 = FUN_1406d51c0();
                    local_5a8 = plVar14 + 0x9e;
                    local_298 = (code *)&DAT_14a171d50;
                    plStack_290 = (longlong *)0x0;
                    pcStack_288 = (code *)0x0;
                    local_280 = 0;
                    local_5d0 = plVar14;
                    FUN_1401004a0(&local_298);
                    if ((longlong *)*(longlong *)(lVar17 + 0x180) == plStack_290) {
                      uVar7 = *(uint *)(lVar17 + 400);
                      uVar27 = (uint)local_280;
                      if ((int)uVar7 < (int)(uint)local_280) {
                        uVar27 = uVar7;
                      }
                      if (0 < (int)uVar27) {
                        uVar16 = 0;
                        do {
                          if ((*(ulonglong *)(pcStack_288 + uVar16 * 8) &
                              ~*(ulonglong *)(*(longlong *)(lVar17 + 0x188) + uVar16 * 8)) != 0)
                          goto LAB_140e07cfc;
                          uVar16 = uVar16 + 1;
                        } while (uVar27 != uVar16);
                      }
                      bVar42 = true;
                      if ((int)uVar7 < (int)(uint)local_280) {
                        lVar17 = 0;
                        do {
                          bVar42 = *(longlong *)
                                    (pcStack_288 + lVar17 * 8 + (longlong)(int)uVar7 * 8) == 0;
                          if (!bVar42) break;
                          iVar8 = (int)lVar17;
                          lVar17 = lVar17 + 1;
                        } while (~uVar7 + (uint)local_280 != iVar8);
                      }
                    }
                    else {
LAB_140e07cfc:
                      bVar42 = false;
                    }
                    local_298 = (code *)&DAT_14a171d50;
                    uVar16 = local_280 >> 0x20;
                    local_280 = local_280 & 0xffffffff00000000;
                    if ((int)uVar16 != 0) {
                      FUN_140115c12(&pcStack_288,0);
                    }
                    plStack_290 = (longlong *)0x0;
                    if (pcStack_288 != (code *)0x0) {
                      FUN_1400020a8();
                    }
                    if ((bVar42) && (cVar5 = (**(code **)(*local_5d0 + 0x50))(), cVar5 == '\0')) {
                      local_248 = 0;
                      uStack_240 = 0;
                      local_258 = 0;
                      uStack_250 = 0;
                      local_268 = 0;
                      uStack_260 = 0;
                      local_278 = 0;
                      uStack_270 = 0;
                      pcStack_288 = (code *)0x0;
                      local_280 = 0;
                      local_298 = (code *)0x0;
                      plStack_290 = (longlong *)0x0;
                      FUN_140056680(local_238,&DAT_149dfb77a);
                      local_1cc = 0;
                      local_228 = 0;
                      uStack_220 = 0;
                      local_218 = 0;
                      uStack_210 = 0;
                      local_208 = 0;
                      uStack_200 = 0;
                      local_1f8 = 0;
                      lStack_1f0 = 0;
                      local_1e8 = 0;
                      uStack_1e0 = 0;
                      local_1d8 = 0;
                      local_1cb = 1;
                      local_1c8 = 0;
                      local_1c0 = 0;
                      FUN_1447a97f4(local_1b8,&DAT_14c9485f0);
                      local_190 = 1;
                      if ((*(int *)(*(longlong *)
                                     ((longlong)ThreadLocalStoragePointer +
                                     (ulonglong)_tls_index * 8) + 0x110) < DAT_14c844850) &&
                         (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
                        DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
                        DAT_14c844840[1] = 0;
                        *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
                        DAT_14c844840[2] = -1;
                        DAT_14c844840[3] = 0;
                        DAT_14c844840[4] = 0;
                        DAT_14c844840[5] = 0;
                        if (DAT_14c844840 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
                          UNLOCK();
                        }
                        DAT_14c844848 = 0;
                        atexit(FUN_142760bef);
                        _Init_thread_footer(&DAT_14c844850);
                        plVar20 = local_5e8;
                        lVar13 = local_600;
                      }
                      uVar16 = local_608;
                      local_188 = DAT_14c844840;
                      if (DAT_14c844840 != (longlong *)0x0) {
                        if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
                          LOCK();
                          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
                          UNLOCK();
                        }
                        else {
                          (**(code **)(*DAT_14c844840 + 8))();
                        }
                      }
                      local_180 = 0;
                      if ((*(int *)(*(longlong *)
                                     ((longlong)ThreadLocalStoragePointer +
                                     (ulonglong)_tls_index * 8) + 0x110) < DAT_14c844850) &&
                         (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
                        DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
                        DAT_14c844840[1] = 0;
                        *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
                        DAT_14c844840[2] = -1;
                        DAT_14c844840[3] = 0;
                        DAT_14c844840[4] = 0;
                        DAT_14c844840[5] = 0;
                        if (DAT_14c844840 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
                          UNLOCK();
                        }
                        DAT_14c844848 = 0;
                        atexit(FUN_142760bef);
                        _Init_thread_footer(&DAT_14c844850);
                        uVar16 = local_608;
                        plVar20 = local_5e8;
                        lVar13 = local_600;
                      }
                      local_178 = DAT_14c844840;
                      if (DAT_14c844840 != (longlong *)0x0) {
                        if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
                          LOCK();
                          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
                          UNLOCK();
                        }
                        else {
                          (**(code **)(*DAT_14c844840 + 8))();
                        }
                      }
                      local_170 = 0;
                      local_168 = local_168 & 0xffffff00;
                      iStack_164 = -1;
                      uStack_160 = uStack_160 & 0xffff0000;
                      uStack_14c = 0;
                      local_148 = 1;
                      local_120 = (uint *)0x0;
                      local_118 = 0;
                      local_140 = 0;
                      uStack_138 = 0;
                      uStack_114 = 0xffffffff00000080;
                      uStack_10c = 0;
                      local_100 = 0;
                      local_f8 = 0;
                      local_f0 = (void *)0x0;
                      uStack_e8 = 0;
                      uStack_150 = uStack_150 & 0xffffff00;
                      uStack_154 = local_4d0;
                      uStack_15c = SUB84(local_4d8,0);
                      uStack_158 = (undefined4)((ulonglong)local_4d8 >> 0x20);
                      local_3c8 = *(code **)(*(longlong *)(local_4e8 + 8) + 0x10);
                      uStack_3c0 = CONCAT44(uStack_3c0._4_4_,
                                            *(undefined4 *)(*(longlong *)(local_4e8 + 8) + 0x18));
                      FUN_144274134(lVar13,&local_3c8);
                      uVar6 = (**(code **)(*local_5a0 + 8))(local_5a0,&local_4d8);
                      local_168 = CONCAT31(local_168._1_3_,uVar6);
                      uVar6 = FUN_1407a73f8(local_5a8,&DAT_14cbcddd8);
                      uStack_160 = CONCAT31(uStack_160._1_3_,uVar6);
                      local_4f8 = local_4d8;
                      local_4f0 = local_4d0;
                      local_2c8 = 0;
                      uStack_2c0 = 0;
                      local_2e8 = 0;
                      uStack_2e0 = 0;
                      uStack_2bc = 0x80;
                      uStack_2b8 = 0xffffffff;
                      uStack_2b4 = 0;
                      local_2a8 = 0;
                      local_2a0 = 0;
                      lVar17 = FUN_1400d7050(local_550);
                      if (lVar17 != 0) {
                        if (DAT_14cbadd90 == 0) {
                          local_3c8 = FUN_141030f22;
                          local_610 = FUN_14081d0ea;
                          local_618 = &LAB_1459f2e4c;
                          local_620 = &local_3c8;
                          local_628 = &LAB_148c39de3;
                          local_630 = &LAB_1457a9eb2;
                          local_638 = L"Game";
                          local_640 = 0;
                          local_648 = 0x10000004;
                          local_650 = 0x10;
                          local_658 = (uint *)CONCAT44(local_658._4_4_,0x3de0);
                          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController");
                        }
                        if (((*(int *)(DAT_14cbadd90 + 0x38) <=
                              *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
                              (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)
                            ) && (lVar29 = FUN_140e06fb1(lVar17), lVar29 != 0)) {
                          FUN_1405f62be(lVar29,&local_408);
                          if (local_408 != (longlong *)0x0) {
                            (**(code **)(*local_408 + 0x78))();
                            if (((local_418 != (code *)0x0) &&
                                (local_5f0 = FUN_1405f6336(), local_5f0 != 0)) &&
                               (local_5b0 = *(ulonglong *)(lVar17 + 0x2500), local_5b0 != 0)) {
                              plVar20 = (longlong *)
                                        (**(code **)(*(longlong *)(lVar17 + 0x958) + 0x10))();
                              if ((plVar20 == (longlong *)0x0) ||
                                 (lVar13 = (**(code **)(*plVar20 + 0x2b0))(), lVar13 == 0)) {
                                plVar20 = (longlong *)0x0;
                              }
                              else {
                                plVar20 = *(longlong **)(lVar13 + 0x140);
                              }
                              local_3a8 = 0;
                              local_3a0 = 0;
                              local_3c8 = (code *)0x0;
                              uStack_3c0 = 0;
                              local_39c = 0xffffffff00000080;
                              local_394 = 0;
                              local_388 = 0;
                              local_380 = 0;
                              if (plVar20 != (longlong *)0x0) {
                                (**(code **)(*plVar20 + 0x68))(plVar20,&local_3c8);
                                uVar7 = (uint)local_4f8;
                                if (local_4f0 != 0) {
                                  uVar7 = local_4f0 >> 0xd ^ (uint)local_4f8 - local_4f0;
                                  uVar27 = uVar7 << 8 ^ (-0x61c88647 - local_4f0) - uVar7;
                                  uVar35 = uVar27 >> 0xd ^ (local_4f0 - uVar7) - uVar27;
                                  uVar7 = uVar35 >> 0xc ^ (uVar7 - uVar27) - uVar35;
                                  uVar27 = uVar7 << 0x10 ^ (uVar27 - uVar35) - uVar7;
                                  uVar37 = uVar27 >> 5 ^ (uVar35 - uVar7) - uVar27;
                                  uVar35 = uVar37 >> 3 ^ (uVar7 - uVar27) - uVar37;
                                  uVar7 = uVar35 << 10 ^ (uVar27 - uVar37) - uVar35;
                                  uVar7 = uVar7 >> 0xf ^ uVar37 - (uVar35 + uVar7);
                                }
                                iVar8 = FUN_140982fd4(&local_3c8,uVar7);
                                pcVar32 = (code *)0x0;
                                if (iVar8 != -1) {
                                  pcVar32 = local_3c8 + (longlong)iVar8 * 0x28;
                                }
                                if ((pcVar32 != (code *)0x0) &&
                                   (plVar20 = *(longlong **)(pcVar32 + 0x18),
                                   plVar20 != (longlong *)0x0)) {
                                  iVar8 = (int)plVar20[1];
                                  do {
                                    if (iVar8 == 0) goto LAB_140e0839e;
                                    LOCK();
                                    iVar11 = (int)plVar20[1];
                                    bVar42 = iVar8 == iVar11;
                                    if (bVar42) {
                                      *(int *)(plVar20 + 1) = iVar8 + 1;
                                      iVar11 = iVar8;
                                    }
                                    iVar8 = iVar11;
                                    UNLOCK();
                                  } while (!bVar42);
                                  local_5f8 = *(ulonglong *)(pcVar32 + 0x10);
                                  if (local_5f8 != 0) {
                                    local_5d8 = (uint *)(local_5f8 + 0x20);
                                    uVar7 = *(uint *)(local_5f8 + 0x38);
                                    local_5c8 = (ulonglong)uVar7;
                                    if (uVar7 == 0) {
                                      uVar28 = 1;
                                      uVar34 = 0;
                                      local_5e0 = (uint *)((ulonglong)local_5e0._4_4_ << 0x20);
                                      uVar16 = 0;
                                    }
                                    else {
                                      puVar21 = *(uint **)(local_5f8 + 0x30);
                                      if (*(uint **)(local_5f8 + 0x30) == (uint *)0x0) {
                                        puVar21 = local_5d8;
                                      }
                                      uVar27 = *puVar21;
                                      if (uVar27 == 0) {
                                        iVar8 = uVar7 + 0x1e;
                                        if (-1 < (int)(uVar7 - 1)) {
                                          iVar8 = uVar7 - 1;
                                        }
                                        uVar34 = 0;
                                        uVar16 = (ulonglong)(uint)(iVar8 >> 5);
                                        if (iVar8 >> 5 < 1) {
                                          uVar16 = 0;
                                        }
                                        local_5e0 = (uint *)((ulonglong)local_5e0 &
                                                            0xffffffff00000000);
                                        do {
                                          if (uVar16 == uVar34) goto LAB_140e08381;
                                          local_5e0 = (uint *)CONCAT44(local_5e0._4_4_,
                                                                       (uint)local_5e0 + 0x20);
                                          uVar27 = puVar21[uVar34 + 1];
                                          uVar34 = uVar34 + 1;
                                        } while (uVar27 == 0);
                                      }
                                      else {
                                        uVar34 = 0;
                                        local_5e0 = (uint *)((ulonglong)local_5e0._4_4_ << 0x20);
                                      }
                                      uVar28 = (ulonglong)(-uVar27 & uVar27);
                                      uVar16 = uVar28 * 2 + 1;
                                      lVar13 = 0x3f;
                                      if (uVar16 != 0) {
                                        for (; uVar16 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                                        }
                                      }
                                      uVar27 = ((uint)local_5e0 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
                                      uVar16 = (ulonglong)uVar27;
                                      if ((int)uVar7 <= (int)uVar27) {
                                        uVar16 = local_5c8;
                                      }
                                    }
                                    if ((uint)uVar16 != uVar7) {
                                      uVar7 = 0xffffffff;
                                      do {
                                        lVar13 = *(longlong *)
                                                  (*(longlong *)(local_5f8 + 0x10) + 0x10 +
                                                  (longlong)(int)uVar16 * 0x28);
                                        if (*(int *)(lVar13 + 0xa8) != 0) {
                                          plVar14 = *(longlong **)(lVar13 + 0xa0);
                                          plVar15 = (longlong *)plVar14[1];
                                          if (plVar15 != (longlong *)0x0) {
                                            iVar8 = (int)plVar15[1];
                                            do {
                                              if (iVar8 == 0) goto LAB_140e0a316;
                                              LOCK();
                                              iVar11 = (int)plVar15[1];
                                              bVar42 = iVar8 == iVar11;
                                              if (bVar42) {
                                                *(int *)(plVar15 + 1) = iVar8 + 1;
                                                iVar11 = iVar8;
                                              }
                                              iVar8 = iVar11;
                                              UNLOCK();
                                            } while (!bVar42);
                                            lVar13 = *plVar14;
                                            if (lVar13 != 0) {
                                              if ((((((*(int *)(lVar13 + 0x44) == 0) ||
                                                     (uVar27 = *(uint *)(lVar13 + 0x40),
                                                     (int)uVar27 < 0)) ||
                                                    (DAT_14c9647dc <= (int)uVar27)) ||
                                                   ((plVar14 = (longlong *)
                                                               ((ulonglong)
                                                                ((uVar27 & 0xffff) * 0x18) +
                                                               *(longlong *)
                                                                (DAT_14c9647c8 +
                                                                (ulonglong)(uVar27 >> 0x10) * 8)),
                                                    plVar14 == (longlong *)0x0 ||
                                                    ((int)plVar14[2] != *(int *)(lVar13 + 0x44)))))
                                                  || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0))
                                                 || (plVar14 = (longlong *)*plVar14,
                                                    plVar14 == (longlong *)0x0)) {
                                                if ((((*(int *)(lVar13 + 0x3c) == 0) ||
                                                     (uVar27 = *(uint *)(lVar13 + 0x38),
                                                     (int)uVar27 < 0)) ||
                                                    ((DAT_14c9647dc <= (int)uVar27 ||
                                                     (((plVar14 = (longlong *)
                                                                  ((ulonglong)
                                                                   ((uVar27 & 0xffff) * 0x18) +
                                                                  *(longlong *)
                                                                   (DAT_14c9647c8 +
                                                                   (ulonglong)(uVar27 >> 0x10) * 8))
                                                       , plVar14 == (longlong *)0x0 ||
                                                       ((int)plVar14[2] != *(int *)(lVar13 + 0x3c)))
                                                      || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0
                                                         )))))) || (*plVar14 == 0)) {
                                                  local_428 = *(undefined8 *)(lVar13 + 0x60);
                                                  uVar9 = *(undefined4 *)(lVar13 + 0x50);
                                                  uVar10 = *(undefined4 *)(lVar13 + 0x54);
                                                  uVar43 = *(undefined4 *)(lVar13 + 0x58);
                                                  uVar44 = *(undefined4 *)(lVar13 + 0x5c);
                                                }
                                                else {
                                                  lVar13 = *(longlong *)(*plVar14 + 0x1c8);
                                                  if (lVar13 != 0) {
                                                    local_438 = *(uint **)(lVar13 + 0x260);
                                                    uStack_430 = *(undefined8 ***)(lVar13 + 0x268);
                                                    goto LAB_140e0a274;
                                                  }
                                                  local_428 = DAT_14c8464f0;
                                                  uVar9 = (undefined4)DAT_14c8464e0;
                                                  uVar10 = DAT_14c8464e0._4_4_;
                                                  uVar43 = (undefined4)DAT_14c8464e8;
                                                  uVar44 = DAT_14c8464e8._4_4_;
                                                }
                                                local_438 = (uint *)CONCAT44(uVar10,uVar9);
                                                uStack_430 = (undefined8 **)CONCAT44(uVar44,uVar43);
                                              }
                                              else {
                                                (**(code **)(*plVar14 + 0x4b0))
                                                          (plVar14,&local_438,
                                                           *(undefined8 *)(lVar13 + 0x48));
                                              }
LAB_140e0a274:
                                              puVar22 = (undefined8 *)
                                                        (*(longlong *)(local_5b0 + 0x1c8) + 0x240);
                                              if (*(longlong *)(local_5b0 + 0x1c8) == 0) {
                                                puVar22 = &DAT_14c846480;
                                              }
                                              dVar4 = SQRT(((double)uStack_430 - (double)puVar22[5])
                                                           * ((double)uStack_430 -
                                                             (double)puVar22[5]) +
                                                           ((double)local_438 - (double)puVar22[4])
                                                           * ((double)local_438 - (double)puVar22[4]
                                                             )) / 100.0;
                                              iVar8 = (int)((ulonglong)
                                                            (longlong)ROUND(dVar4 + dVar4 + 0.5) >>
                                                           1);
                                              if (iVar8 < iStack_164 || iStack_164 == -1) {
                                                iStack_164 = iVar8;
                                              }
                                            }
                                            LOCK();
                                            plVar14 = plVar15 + 1;
                                            *(int *)plVar14 = (int)*plVar14 + -1;
                                            UNLOCK();
                                            if ((int)*plVar14 == 0) {
                                              (**(code **)*plVar15)(plVar15);
                                              LOCK();
                                              piVar18 = (int *)((longlong)plVar15 + 0xc);
                                              *piVar18 = *piVar18 + -1;
                                              UNLOCK();
                                              if (*piVar18 == 0) {
                                                (**(code **)(*plVar15 + 0x10))(plVar15);
                                              }
                                            }
                                          }
                                        }
LAB_140e0a316:
                                        uVar7 = uVar7 & ~(uint)uVar28;
                                        puVar21 = *(uint **)(local_5f8 + 0x30);
                                        if (*(uint **)(local_5f8 + 0x30) == (uint *)0x0) {
                                          puVar21 = local_5d8;
                                        }
                                        uVar27 = *(uint *)(local_5f8 + 0x38);
                                        iVar8 = (int)uVar34;
                                        lVar13 = (longlong)iVar8;
                                        uVar35 = puVar21[lVar13] & uVar7;
                                        if (uVar35 == 0) {
                                          iVar11 = uVar27 + 0x1e;
                                          if (-1 < (int)(uVar27 - 1)) {
                                            iVar11 = uVar27 - 1;
                                          }
                                          iVar11 = iVar11 >> 5;
                                          local_5e0 = (uint *)CONCAT44(local_5e0._4_4_,
                                                                       (uint)local_5e0 + 0x20);
                                          iVar24 = iVar11;
                                          if (iVar11 < iVar8) {
                                            iVar24 = iVar8;
                                          }
                                          if (iVar8 < iVar11) {
                                            lVar17 = 0;
                                            do {
                                              uVar35 = (puVar21 + lVar13 + 1)[lVar17];
                                              if (uVar35 != 0) {
                                                uVar34 = (ulonglong)(iVar8 + (int)lVar17 + 1);
                                                uVar7 = 0xffffffff;
                                                goto LAB_140e0a3a9;
                                              }
                                              local_5e0 = (uint *)CONCAT44(local_5e0._4_4_,
                                                                           (uint)local_5e0 + 0x20);
                                              lVar17 = lVar17 + 1;
                                            } while (iVar24 - lVar13 != lVar17);
                                            uVar7 = 0xffffffff;
                                            iVar8 = iVar24;
                                          }
                                          uVar34 = (ulonglong)(iVar8 + 1);
                                          uVar35 = uVar27;
                                        }
                                        else {
LAB_140e0a3a9:
                                          uVar28 = (ulonglong)(-uVar35 & uVar35);
                                          uVar16 = uVar28 * 2 + 1;
                                          lVar13 = 0x3f;
                                          if (uVar16 != 0) {
                                            for (; uVar16 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                                            }
                                          }
                                          uVar35 = ((uint)local_5e0 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
                                          if ((int)uVar27 <= (int)uVar35) {
                                            uVar35 = uVar27;
                                          }
                                        }
                                        uVar16 = (ulonglong)uVar35;
                                      } while (uVar35 != (uint)local_5c8);
                                    }
                                  }
LAB_140e08381:
                                  LOCK();
                                  plVar14 = plVar20 + 1;
                                  *(int *)plVar14 = (int)*plVar14 + -1;
                                  UNLOCK();
                                  if ((int)*plVar14 == 0) {
                                    (**(code **)*plVar20)(plVar20);
                                    LOCK();
                                    piVar18 = (int *)((longlong)plVar20 + 0xc);
                                    *piVar18 = *piVar18 + -1;
                                    UNLOCK();
                                    if (*piVar18 == 0) {
                                      (**(code **)(*plVar20 + 0x10))(plVar20);
                                    }
                                  }
                                }
                              }
LAB_140e0839e:
                              local_5b4 = FUN_140f430f8(local_418);
                              local_5e0 = (uint *)(local_5f0 + 0x3b8);
                              local_448 = 0;
                              uStack_440 = 0;
                              uVar7 = *(uint *)(local_5f0 + 0x3d0);
                              uVar16 = (ulonglong)uVar7;
                              local_5f8 = uVar16;
                              if (uVar7 == 0) {
                                uVar36 = 1;
                                uVar40 = 0;
                                uVar28 = 0;
                                uVar34 = 0;
                              }
                              else {
                                puVar21 = *(uint **)(local_5f0 + 0x3c8);
                                if (*(uint **)(local_5f0 + 0x3c8) == (uint *)0x0) {
                                  puVar21 = local_5e0;
                                }
                                uVar27 = *puVar21;
                                if (uVar27 == 0) {
                                  iVar8 = uVar7 + 0x1e;
                                  if (-1 < (int)(uVar7 - 1)) {
                                    iVar8 = uVar7 - 1;
                                  }
                                  uVar40 = 0;
                                  uVar34 = (ulonglong)(uint)(iVar8 >> 5);
                                  if (iVar8 >> 5 < 1) {
                                    uVar34 = uVar40;
                                  }
                                  uVar28 = 0;
                                  do {
                                    if (uVar34 == uVar40) goto LAB_140e08e08;
                                    uVar28 = (ulonglong)((int)uVar28 + 0x20);
                                    uVar27 = puVar21[uVar40 + 1];
                                    uVar40 = uVar40 + 1;
                                  } while (uVar27 == 0);
                                }
                                else {
                                  uVar40 = 0;
                                  uVar28 = 0;
                                }
                                uVar36 = (ulonglong)(-uVar27 & uVar27);
                                uVar34 = uVar36 * 2 + 1;
                                lVar13 = 0x3f;
                                if (uVar34 != 0) {
                                  for (; uVar34 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                                  }
                                }
                                uVar27 = ((int)uVar28 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
                                uVar34 = (ulonglong)uVar27;
                                if ((int)uVar7 <= (int)uVar27) {
                                  uVar34 = uVar16;
                                }
                              }
                              if ((uint)uVar34 != uVar7) {
                                uVar7 = 0xffffffff;
                                uVar38 = local_5f0;
                                do {
                                  plVar20 = local_408;
                                  lVar13 = *(longlong *)(uVar38 + 0x3a8);
                                  lVar29 = (longlong)(int)uVar34 * 0x20;
                                  lVar17 = *(longlong *)(lVar13 + 0x10 + lVar29);
                                  if ((lVar17 != 0) && (*(char *)(lVar17 + 0x3ab) == '\0')) {
                                    local_5c8 = CONCAT44(local_5c8._4_4_,uVar7);
                                    local_5b0 = CONCAT44(local_5b0._4_4_,(int)uVar28);
                                    local_438 = *(uint **)(*(longlong *)(local_418 + 8) + 0x10);
                                    uStack_430 = (undefined8 **)
                                                 CONCAT44(uStack_430._4_4_,
                                                          *(undefined4 *)
                                                           (*(longlong *)(local_418 + 8) + 0x18));
                                    if ((*(longlong *)(uVar38 + 0x4d8) == 0 &
                                        *(byte *)(uVar38 + 0x750)) == 1) {
                                      local_468 = (longlong *)
                                                  CONCAT44(local_468._4_4_,DAT_14cb88800);
                                      local_470 = DAT_14cb887f8;
                                    }
                                    else {
                                      local_458 = *(longlong *)(uVar38 + 0x4d8);
                                      FUN_1401533ba(&local_470,&local_458,1);
                                    }
                                    local_658 = (uint *)(lVar13 + lVar29);
                                    local_5d8 = local_658;
                                    (**(code **)(*plVar20 + 0x80))
                                              (plVar20,&local_458,&local_470,&local_438);
                                    if (((local_458 != 0) &&
                                        (*(int *)(*(longlong *)(local_5d8 + 4) + 0x3c) <= local_5b4)
                                        ) && (local_5b4 <=
                                              *(int *)(*(longlong *)(local_5d8 + 4) + 0x40))) {
                                      lVar13 = *(longlong *)(*(longlong *)(local_458 + 8) + 0x20);
                                      if (lVar13 == 0) {
                                        local_460 = 0;
                                      }
                                      else {
                                        FUN_1403a0728(lVar13 + 0x38,&local_460);
                                      }
                                      lVar13 = DAT_14cb88970;
                                      if ((((local_460 == DAT_14cb88970 ||
                                            (local_460 == DAT_14cb88960 ||
                                            local_460 == DAT_14cb88968)) ||
                                            local_460 == DAT_14cb88958) ||
                                          (lVar13 = DAT_14cb88950,
                                          (local_460 == DAT_14cb88950 ||
                                          (local_460 == DAT_14cb88948 || local_460 == DAT_14cb88940)
                                          ) || local_460 == DAT_14cb88938)) ||
                                         (lVar13 = DAT_14cb889a8,
                                         (local_460 == DAT_14cb889a8 ||
                                         (local_460 == DAT_14cb889a0 || local_460 == DAT_14cb88998))
                                         || local_460 == DAT_14cb88990)) {
                                        local_460 = lVar13;
                                      }
                                      lVar13 = FUN_14001cc68(0x148,0x10);
                                      FUN_1418f7224(lVar13,local_5d8);
                                      local_470 = lVar13;
                                      local_468 = (longlong *)FUN_14001cc68(0x18,0x10);
                                      local_468[1] = (longlong)&DAT_100000001;
                                      *local_468 = (longlong)&PTR_FUN_14b9b0a60;
                                      local_468[2] = lVar13;
                                      lVar29 = DAT_14cb88948;
                                      lVar17 = DAT_14cb88940;
                                      lVar13 = DAT_14cb88938;
                                      uVar19 = DAT_14cb88930;
                                      local_578 = DAT_14cb88950;
                                      local_580 = DAT_14cb88958;
                                      local_588 = DAT_14cb88960;
                                      local_590 = DAT_14cb88968;
                                      local_598 = DAT_14cb88970;
                                      local_480 = (undefined8 *)0x0;
                                      local_478 = 9;
                                      FUN_1401b309e(&local_480,9);
                                      *local_480 = uVar19;
                                      local_480[1] = lVar13;
                                      local_480[2] = lVar17;
                                      local_480[3] = lVar29;
                                      local_480[4] = local_578;
                                      local_480[5] = local_580;
                                      local_480[6] = local_588;
                                      local_480[7] = local_590;
                                      local_480[8] = local_598;
                                      if ((longlong)local_478 != 0) {
                                        lVar13 = 0;
                                        do {
                                          if (*(longlong *)((longlong)local_480 + lVar13) ==
                                              local_460) {
                                            *(undefined8 *)(local_470 + 0x6c) =
                                                 *(undefined8 *)
                                                  (*(longlong *)(local_5d8 + 4) + 0x3c);
                                            *(undefined1 *)(local_470 + 0x58) =
                                                 *(undefined1 *)
                                                  (*(longlong *)(local_5d8 + 4) + 0x3aa);
                                            *(char *)(local_470 + 0x68) =
                                                 (char)(int)*(float *)(*(longlong *)(local_5d8 + 4)
                                                                      + 0x38c);
                                            uVar3 = *(ushort *)
                                                     (*(longlong *)(local_5d8 + 4) + 0x3a8);
                                            lVar13 = *(longlong *)(DAT_14cb86da8 + 0x370);
                                            uVar19 = (**(code **)(*local_560 + 0x180))();
                                            FUN_143deff24((ulonglong)((uint)uVar3 * 0x18) + lVar13,
                                                          &local_438,&local_4f8,uVar19);
                                            puVar21 = local_438;
                                            if (*(code **)(*(longlong *)local_438 + 0x50) !=
                                                FUN_144828418) {
                                              puVar21 = (uint *)(**(code **)(*(longlong *)local_438
                                                                            + 0x50))();
                                            }
                                            FUN_1447a1fc0(puVar21);
                                            pcVar32 = *(code **)(*(longlong *)local_438 + 0x28);
                                            if (pcVar32 == FUN_14482841c) {
                                              puVar21 = local_438 + 6;
                                              if (*(longlong *)(local_438 + 10) != 0) {
                                                puVar21 = (uint *)(*(longlong *)(local_438 + 10) + 8
                                                                  );
                                              }
                                            }
                                            else if (pcVar32 == (code *)&LAB_14010c34c) {
                                              puVar21 = local_438 + 4;
                                            }
                                            else {
                                              puVar21 = (uint *)(*pcVar32)(local_438);
                                            }
                                            puVar1 = (uint *)(local_470 + 0x78);
                                            if (puVar1 != puVar21) {
                                              uVar7 = puVar21[2];
                                              pvVar2 = *(void **)puVar21;
                                              *(uint *)(local_470 + 0x80) = uVar7;
                                              if (uVar7 == 0 && *(int *)(local_470 + 0x84) == 0) {
                                                *(undefined4 *)(local_470 + 0x84) = 0;
                                              }
                                              else {
                                                FUN_1446dd670(puVar1,uVar7);
                                                if (uVar7 != 0) {
                                                  memcpy(*(void **)puVar1,pvVar2,
                                                         (longlong)(int)uVar7 * 2);
                                                }
                                              }
                                            }
                                            if (local_438 != (uint *)0x0) {
                                              (**(code **)(*(longlong *)local_438 + 0x10))();
                                            }
                                            local_438 = (uint *)&DAT_14cb88978;
                                            uStack_430 = (undefined8 **)&local_460;
                                            FUN_140e73b08(local_470 + 8,&local_490,&local_438,0);
                                            uVar19 = *(undefined8 *)
                                                      (*(longlong *)(local_5d8 + 4) + 0x3b0);
                                            *(undefined4 *)(local_470 + 0x90) =
                                                 *(undefined4 *)
                                                  (*(longlong *)(local_5d8 + 4) + 0x3b8);
                                            *(undefined8 *)(local_470 + 0x88) = uVar19;
                                            if ((int)uVar19 != 0) {
                                              FUN_140bdf372(&local_448,local_470 + 0x88);
                                            }
                                            if ((*(longlong *)(*(longlong *)(local_5d8 + 4) + 0x338)
                                                 != 0) &&
                                               (*(char *)(*(longlong *)
                                                           (*(longlong *)(local_5d8 + 4) + 0x338) +
                                                         0x68) == '\x01')) {
                                              puVar22 = (undefined8 *)FUN_14001cc68(0xa0);
                                              uVar9 = FUN_145ad3200(local_458);
                                              uVar10 = FUN_140f43134(local_458);
                                              puVar22[5] = 0;
                                              *(undefined4 *)(puVar22 + 6) = 0;
                                              puVar22[1] = 0;
                                              puVar22[2] = 0;
                                              *(undefined8 *)((longlong)puVar22 + 0x34) =
                                                   0xffffffff00000080;
                                              *(undefined4 *)((longlong)puVar22 + 0x3c) = 0;
                                              puVar22[9] = 0;
                                              *(undefined4 *)(puVar22 + 10) = 0;
                                              *puVar22 = &PTR_FUN_14b9b0a38;
                                              puVar22[0xb] = &PTR_FUN_14b9b0a48;
                                              puVar22[0xc] = DAT_14cb889e0;
                                              *(undefined4 *)(puVar22 + 0xd) = DAT_14cb889e8;
                                              puVar22[0xe] = 0;
                                              puVar22[0xf] = 0;
                                              *(undefined4 *)(puVar22 + 0x10) = 0;
                                              puVar22[0x11] = 0;
                                              puVar22[0x12] = 0;
                                              FUN_1446ddda2(puVar22 + 0xe,&DAT_149e3cc88,0);
                                              *puVar22 = &PTR_FUN_14b9b0a18;
                                              puVar22[0xb] = &PTR_FUN_14b9b0a28;
                                              *(undefined4 *)(puVar22 + 0x13) = uVar10;
                                              *(undefined4 *)((longlong)puVar22 + 0x9c) = uVar9;
                                              plVar20 = (longlong *)FUN_14001cc68(0x18,0x10);
                                              plVar20[1] = (longlong)&DAT_100000001;
                                              *plVar20 = (longlong)&PTR_FUN_14b9b0a80;
                                              plVar20[2] = (longlong)puVar22;
                                              if (plVar20 != (longlong *)0x0) {
                                                LOCK();
                                                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                                                UNLOCK();
                                              }
                                              local_438 = (uint *)&DAT_14cb889e0;
                                              uStack_430 = &local_490;
                                              local_490 = puVar22;
                                              local_488 = plVar20;
                                              FUN_146115d0e(local_470 + 0xa8,local_3f4,&local_438,0)
                                              ;
                                              plVar14 = local_488;
                                              if (local_488 != (longlong *)0x0) {
                                                LOCK();
                                                plVar15 = local_488 + 1;
                                                *(int *)plVar15 = (int)*plVar15 + -1;
                                                UNLOCK();
                                                if ((int)*plVar15 == 0) {
                                                  (**(code **)*local_488)(local_488);
                                                  LOCK();
                                                  piVar18 = (int *)((longlong)plVar14 + 0xc);
                                                  *piVar18 = *piVar18 + -1;
                                                  UNLOCK();
                                                  if (*piVar18 == 0) {
                                                    (**(code **)(*plVar14 + 0x10))(plVar14);
                                                  }
                                                }
                                              }
                                              if (plVar20 != (longlong *)0x0) {
                                                LOCK();
                                                plVar14 = plVar20 + 1;
                                                *(int *)plVar14 = (int)*plVar14 + -1;
                                                UNLOCK();
                                                if ((int)*plVar14 == 0) {
                                                  (**(code **)*plVar20)(plVar20);
                                                  LOCK();
                                                  piVar18 = (int *)((longlong)plVar20 + 0xc);
                                                  *piVar18 = *piVar18 + -1;
                                                  UNLOCK();
                                                  if (*piVar18 == 0) {
                                                    (**(code **)(*plVar20 + 0x10))(plVar20);
                                                  }
                                                }
                                              }
                                            }
                                            local_438 = local_5d8;
                                            uStack_430 = (undefined8 **)&local_470;
                                            FUN_140f51d2a(&local_2e8,&local_490,&local_438,0);
                                            break;
                                          }
                                          lVar13 = lVar13 + 8;
                                        } while ((longlong)local_478 * 8 != lVar13);
                                      }
                                      if (local_480 != (undefined8 *)0x0) {
                                        FUN_1400020a8();
                                      }
                                      plVar20 = local_468;
                                      if (local_468 != (longlong *)0x0) {
                                        LOCK();
                                        plVar14 = local_468 + 1;
                                        *(int *)plVar14 = (int)*plVar14 + -1;
                                        UNLOCK();
                                        if ((int)*plVar14 == 0) {
                                          (**(code **)*local_468)(local_468);
                                          LOCK();
                                          piVar18 = (int *)((longlong)plVar20 + 0xc);
                                          *piVar18 = *piVar18 + -1;
                                          UNLOCK();
                                          if (*piVar18 == 0) {
                                            (**(code **)(*plVar20 + 0x10))(plVar20);
                                          }
                                        }
                                      }
                                    }
                                    plVar20 = local_450;
                                    if (local_450 != (longlong *)0x0) {
                                      LOCK();
                                      plVar14 = local_450 + 1;
                                      *(int *)plVar14 = (int)*plVar14 + -1;
                                      UNLOCK();
                                      if ((int)*plVar14 == 0) {
                                        (**(code **)*local_450)(local_450);
                                        LOCK();
                                        piVar18 = (int *)((longlong)plVar20 + 0xc);
                                        *piVar18 = *piVar18 + -1;
                                        UNLOCK();
                                        if (*piVar18 == 0) {
                                          (**(code **)(*plVar20 + 0x10))(plVar20);
                                        }
                                      }
                                    }
                                    uVar16 = (ulonglong)*(uint *)(local_5f0 + 0x3d0);
                                    uVar28 = local_5b0 & 0xffffffff;
                                    uVar38 = local_5f0;
                                    uVar7 = (uint)local_5c8;
                                  }
                                  lVar13 = local_448;
                                  uVar7 = uVar7 & ~(uint)uVar36;
                                  puVar21 = *(uint **)(uVar38 + 0x3c8);
                                  if (*(uint **)(uVar38 + 0x3c8) == (uint *)0x0) {
                                    puVar21 = local_5e0;
                                  }
                                  iVar8 = (int)uVar40;
                                  lVar17 = (longlong)iVar8;
                                  uVar27 = puVar21[lVar17] & uVar7;
                                  iVar11 = (int)uVar16;
                                  if (uVar27 == 0) {
                                    iVar24 = iVar11 + 0x1e;
                                    if (-1 < iVar11 + -1) {
                                      iVar24 = iVar11 + -1;
                                    }
                                    iVar24 = iVar24 >> 5;
                                    uVar28 = (ulonglong)((int)uVar28 + 0x20);
                                    iVar25 = iVar24;
                                    if (iVar24 < iVar8) {
                                      iVar25 = iVar8;
                                    }
                                    uVar38 = local_5f0;
                                    if (iVar8 < iVar24) {
                                      lVar29 = 0;
                                      do {
                                        uVar27 = puVar21[lVar17 + lVar29 + 1];
                                        if (uVar27 != 0) {
                                          uVar40 = (ulonglong)(iVar8 + (int)lVar29 + 1);
                                          uVar7 = 0xffffffff;
                                          goto LAB_140e08b84;
                                        }
                                        uVar28 = (ulonglong)((int)uVar28 + 0x20);
                                        lVar29 = lVar29 + 1;
                                      } while (iVar25 - lVar17 != lVar29);
                                      uVar7 = 0xffffffff;
                                      iVar8 = iVar25;
                                    }
                                    uVar40 = (ulonglong)(iVar8 + 1);
                                    uVar34 = uVar16;
                                  }
                                  else {
LAB_140e08b84:
                                    uVar36 = (ulonglong)(-uVar27 & uVar27);
                                    uVar34 = uVar36 * 2 + 1;
                                    lVar17 = 0x3f;
                                    if (uVar34 != 0) {
                                      for (; uVar34 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                                      }
                                    }
                                    uVar27 = ((int)uVar28 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                                    uVar34 = (ulonglong)uVar27;
                                    if (iVar11 <= (int)uVar27) {
                                      uVar34 = uVar16;
                                    }
                                  }
                                } while ((int)uVar34 != (int)local_5f8);
                                lVar17 = (longlong)(int)uStack_440;
                                if (lVar17 != 0) {
                                  lVar29 = 0;
                                  do {
                                    uStack_430 = (undefined8 **)
                                                 CONCAT44(uStack_430._4_4_,
                                                          *(undefined4 *)(lVar13 + 8 + lVar29));
                                    local_438 = *(uint **)(lVar13 + lVar29);
                                    FUN_148e50c7a(&local_2e8,&local_438);
                                    lVar29 = lVar29 + 0xc;
                                  } while (lVar17 * 0xc != lVar29);
                                }
                                if (local_448 != 0) {
                                  FUN_1400020a8(local_448);
                                }
                              }
LAB_140e08e08:
                              local_380 = 0;
                              if (local_388 != 0) {
                                FUN_1400020a8();
                              }
                              FUN_14060e8b4(&local_3c8);
                            }
                            plVar20 = (longlong *)CONCAT44(uStack_40c,local_410);
                            if (plVar20 != (longlong *)0x0) {
                              LOCK();
                              plVar14 = plVar20 + 1;
                              *(int *)plVar14 = (int)*plVar14 + -1;
                              UNLOCK();
                              if ((int)*plVar14 == 0) {
                                (**(code **)*plVar20)(plVar20);
                                LOCK();
                                piVar18 = (int *)((longlong)plVar20 + 0xc);
                                *piVar18 = *piVar18 + -1;
                                UNLOCK();
                                if (*piVar18 == 0) {
                                  (**(code **)(*plVar20 + 0x10))(plVar20);
                                }
                              }
                            }
                          }
                          plVar14 = (longlong *)CONCAT44(uStack_3fc,local_400);
                          uVar16 = local_608;
                          plVar20 = local_5e8;
                          lVar13 = local_600;
                          if (plVar14 != (longlong *)0x0) {
                            LOCK();
                            plVar15 = plVar14 + 1;
                            *(int *)plVar15 = (int)*plVar15 + -1;
                            UNLOCK();
                            if ((int)*plVar15 == 0) {
                              (**(code **)*plVar14)(plVar14);
                              LOCK();
                              piVar18 = (int *)((longlong)plVar14 + 0xc);
                              *piVar18 = *piVar18 + -1;
                              UNLOCK();
                              uVar16 = local_608;
                              plVar20 = local_5e8;
                              lVar13 = local_600;
                              if (*piVar18 == 0) {
                                (**(code **)(*plVar14 + 0x10))(plVar14);
                                uVar16 = local_608;
                                plVar20 = local_5e8;
                                lVar13 = local_600;
                              }
                            }
                          }
                        }
                      }
                      iVar8 = local_118;
                      if (local_118 != 0) {
                        puVar21 = local_120;
                        if (local_120 == (uint *)0x0) {
                          puVar21 = &local_130;
                        }
                        uVar7 = *puVar21;
                        uVar16 = local_608;
                        plVar20 = local_5e8;
                        lVar13 = local_600;
                        if (uVar7 == 0) {
                          iVar11 = local_118 + 0x1e;
                          if (-1 < local_118 + -1) {
                            iVar11 = local_118 + -1;
                          }
                          local_5f0 = 0;
                          uVar34 = (ulonglong)(uint)(iVar11 >> 5);
                          if (iVar11 >> 5 < 1) {
                            uVar34 = 0;
                          }
                          local_5f8 = (ulonglong)local_5f8._4_4_ << 0x20;
                          do {
                            if (uVar34 == local_5f0) goto LAB_140e08ea9;
                            local_5f8 = CONCAT44(local_5f8._4_4_,(int)local_5f8 + 0x20);
                            uVar7 = puVar21[local_5f0 + 1];
                            local_5f0 = local_5f0 + 1;
                          } while (uVar7 == 0);
                        }
                        else {
                          local_5f0 = 0;
                          local_5f8 = (ulonglong)local_5f8._4_4_ << 0x20;
                        }
                        uVar28 = (ulonglong)(-uVar7 & uVar7);
                        uVar34 = uVar28 * 2 + 1;
                        lVar17 = 0x3f;
                        if (uVar34 != 0) {
                          for (; uVar34 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                          }
                        }
                        iVar11 = ((int)local_5f8 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                        if (iVar11 < local_118) {
                          local_5e0 = (uint *)CONCAT44(local_5e0._4_4_,0xffffffff);
                          do {
                            plVar20 = *(longlong **)(local_140 + 0x18 + (longlong)iVar11 * 0x28);
                            if (plVar20 != (longlong *)0x0) {
                              LOCK();
                              plVar14 = plVar20 + 1;
                              *(int *)plVar14 = (int)*plVar14 + -1;
                              UNLOCK();
                              if ((int)*plVar14 == 0) {
                                (**(code **)*plVar20)(plVar20);
                                LOCK();
                                piVar18 = (int *)((longlong)plVar20 + 0xc);
                                *piVar18 = *piVar18 + -1;
                                UNLOCK();
                                if (*piVar18 == 0) {
                                  (**(code **)(*plVar20 + 0x10))(plVar20);
                                }
                              }
                            }
                            uVar7 = (uint)local_5e0 & ~(uint)uVar28;
                            puVar21 = local_120;
                            if (local_120 == (uint *)0x0) {
                              puVar21 = &local_130;
                            }
                            lVar13 = (longlong)(int)local_5f0;
                            local_5e0 = (uint *)CONCAT44(local_5e0._4_4_,uVar7);
                            uVar7 = puVar21[lVar13] & uVar7;
                            iVar11 = local_118;
                            if (uVar7 == 0) {
                              iVar24 = local_118 + 0x1e;
                              if (-1 < local_118 + -1) {
                                iVar24 = local_118 + -1;
                              }
                              iVar24 = iVar24 >> 5;
                              local_5f8 = CONCAT44(local_5f8._4_4_,(int)local_5f8 + 0x20);
                              iVar25 = iVar24;
                              if (iVar24 < (int)local_5f0) {
                                iVar25 = (int)local_5f0;
                              }
                              if ((int)local_5f0 < iVar24) {
                                lVar17 = 0;
                                do {
                                  uVar7 = puVar21[lVar13 + lVar17 + 1];
                                  if (uVar7 != 0) {
                                    local_5f0 = (ulonglong)((int)local_5f0 + (int)lVar17 + 1);
                                    local_5e0 = (uint *)CONCAT44(local_5e0._4_4_,0xffffffff);
                                    goto LAB_140e0a847;
                                  }
                                  local_5f8 = CONCAT44(local_5f8._4_4_,(int)local_5f8 + 0x20);
                                  lVar17 = lVar17 + 1;
                                } while (iVar25 - lVar13 != lVar17);
                                local_5e0 = (uint *)CONCAT44(local_5e0._4_4_,0xffffffff);
                                local_5f0 = (longlong)iVar25 + 1;
                              }
                              else {
                                local_5f0 = lVar13 + 1;
                              }
                            }
                            else {
LAB_140e0a847:
                              uVar28 = (ulonglong)(-uVar7 & uVar7);
                              uVar16 = uVar28 * 2 + 1;
                              lVar13 = 0x3f;
                              if (uVar16 != 0) {
                                for (; uVar16 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                                }
                              }
                              iVar11 = ((int)local_5f8 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
                              if (local_118 <= iVar11) {
                                iVar11 = local_118;
                              }
                            }
                            uVar16 = local_608;
                            plVar20 = local_5e8;
                            lVar13 = local_600;
                          } while (iVar11 != iVar8);
                        }
                      }
LAB_140e08ea9:
                      plVar14 = local_5d0;
                      if (local_140 != 0) {
                        FUN_1400020a8();
                      }
                      local_140 = local_2e8;
                      uStack_138 = uStack_2e0;
                      local_2e8 = 0;
                      uStack_2e0 = 0;
                      if (local_2c8 == 0) {
                        local_130 = (uint)local_2d8;
                        uStack_12c = local_2d8._4_4_;
                        uStack_128 = uStack_2d0;
                        uStack_124 = uStack_2cc;
                      }
                      lVar17 = local_2c8;
                      if (local_120 != (uint *)0x0) {
                        FUN_1400020a8();
                        lVar17 = local_2c8;
                      }
                      uVar9 = uStack_2bc;
                      local_118 = uStack_2c0;
                      local_2c8 = 0;
                      uStack_2c0 = 0;
                      uStack_2bc = 0;
                      uStack_114 = CONCAT44(uStack_2b8,uVar9);
                      uStack_10c = uStack_2b4;
                      uStack_2b8 = 0xffffffff;
                      uStack_2b4 = 0;
                      if (local_2a8 == 0) {
                        local_108 = local_2b0;
                      }
                      lVar29 = local_2a8;
                      local_120 = (uint *)lVar17;
                      if (local_100 != 0) {
                        FUN_1400020a8();
                        lVar29 = local_2a8;
                      }
                      local_2a8 = 0;
                      local_f8 = local_2a0;
                      local_2a0 = 0;
                      local_100 = lVar29;
                      FUN_140e91296(&local_2e8);
                      cVar5 = (**(code **)(*plVar14 + 0x40))(plVar14,lVar13);
                      if (cVar5 == '\0') {
                        uStack_160._0_2_ = (ushort)(byte)uStack_160;
                      }
                      else {
                        lVar17 = FUN_1406d51c0();
                        local_3c8 = (code *)&DAT_14a171d50;
                        uStack_3c0 = 0;
                        local_3b8 = 0;
                        local_3b0 = 0;
                        FUN_1401004a0(&local_3c8);
                        plVar14 = local_5d0;
                        if (*(longlong *)(lVar17 + 0x1a0) == uStack_3c0) {
                          uVar7 = *(uint *)(lVar17 + 0x1b0);
                          uVar27 = (uint)local_3b0;
                          if ((int)uVar7 < (int)(uint)local_3b0) {
                            uVar27 = uVar7;
                          }
                          if (0 < (int)uVar27) {
                            uVar34 = 0;
                            do {
                              if ((*(ulonglong *)(local_3b8 + uVar34 * 8) &
                                  ~*(ulonglong *)(*(longlong *)(lVar17 + 0x1a8) + uVar34 * 8)) != 0)
                              goto LAB_140e09064;
                              uVar34 = uVar34 + 1;
                            } while (uVar27 != uVar34);
                          }
                          if ((int)uVar7 < (int)(uint)local_3b0) {
                            lVar17 = 0;
                            do {
                              uVar16 = local_608;
                              plVar20 = local_5e8;
                              lVar13 = local_600;
                              if (*(longlong *)((longlong)(int)uVar7 * 8 + local_3b8 + lVar17 * 8)
                                  != 0) {
                                uVar6 = 1;
                                break;
                              }
                              lVar17 = lVar17 + 1;
                              uVar6 = 0;
                            } while ((uint)local_3b0 - uVar7 != (int)lVar17);
                          }
                          else {
                            uVar6 = 0;
                          }
                        }
                        else {
LAB_140e09064:
                          uVar6 = 1;
                        }
                        uStack_160._0_2_ = CONCAT11(uVar6,(byte)uStack_160);
                        local_3c8 = (code *)&DAT_14a171d50;
                        uVar34 = local_3b0 >> 0x20;
                        local_3b0 = local_3b0 & 0xffffffff00000000;
                        if ((int)uVar34 != 0) {
                          FUN_140115c12(&local_3b8,0);
                        }
                        uStack_3c0 = 0;
                        if (local_3b8 != 0) {
                          FUN_1400020a8();
                        }
                      }
                      if ((byte)uStack_160 == '\0') {
                        if (local_5a0[0x12] == 0) {
                          bVar23 = 0;
                        }
                        else {
                          uStack_3c0 = CONCAT44(uStack_3c0._4_4_,local_4d0);
                          local_3c8 = local_4d8;
                          bVar23 = FUN_1410de982(local_5a0[0x12],&local_3c8,0);
                        }
                        bVar23 = bVar23 ^ 1;
                      }
                      else {
                        bVar23 = 0;
                      }
                      uStack_150 = CONCAT31(uStack_150._1_3_,bVar23);
                      uStack_14c = *(undefined4 *)((longlong)plVar14 + 0x5c);
                      if (uVar16 != 0) {
                        lVar17 = FUN_140d1d7e4();
                        puVar22 = (undefined8 *)FUN_140d19a6c(lVar17 + 0x90);
                        local_438 = (uint *)0x0;
                        iVar8 = *(int *)(puVar22 + 1);
                        uVar19 = *puVar22;
                        uStack_430 = (undefined8 **)CONCAT44(uStack_430._4_4_,iVar8);
                        if (iVar8 == 0) {
                          uStack_430 = (undefined8 **)0x0;
                          puVar22 = (undefined8 *)0x0;
                        }
                        else {
                          FUN_148c13408(&local_438,iVar8,0);
                          FUN_148c1347b(local_438,uVar19,iVar8);
                          lVar13 = local_600;
                          if ((longlong)(int)uStack_430 == 0) {
                            puVar22 = (undefined8 *)0x0;
                          }
                          else {
                            lVar17 = (longlong)(int)uStack_430 * 0x18;
                            uVar16 = local_608;
                            puVar41 = (undefined8 *)local_438;
                            do {
                              puVar22 = puVar41;
                              uStack_3c0 = 0;
                              local_3b8 = 0;
                              local_3c8 = (code *)*puVar22;
                              uVar19 = FUN_14477b664(puVar22[1]);
                              uStack_3c0 = FUN_14477b664(uVar19);
                              local_3b8 = puVar22[2];
                              if (uStack_3c0 == 0) {
                                uVar19 = FUN_141417e7c();
                                uStack_3c0 = FUN_14477b664(uVar19);
                              }
                              uVar34 = local_3b8;
                              if (local_3b8 == 0) {
                                local_3b8 = 0;
                                if (uStack_3c0 == 0) {
                                  uVar34 = 0;
                                }
                                else {
                                  uVar34 = 0;
                                  if (local_3c8 != (code *)0x0) {
                                    plVar20 = *(longlong **)(uStack_3c0 + 0xb8);
                                    if ((plVar20 == (longlong *)0x0) ||
                                       (cVar5 = (**(code **)(*plVar20 + 0x108))(), cVar5 == '\0')) {
                                      uVar34 = 0;
                                      uVar16 = local_608;
                                      lVar13 = local_600;
                                    }
                                    else {
                                      uVar19 = (**(code **)(*plVar20 + 0x110))(plVar20);
                                      uVar34 = FUN_144aff482(uVar19,&local_3c8);
                                      uVar16 = local_608;
                                      lVar13 = local_600;
                                    }
                                  }
                                }
                              }
                              if (uVar34 == uVar16) break;
                              puVar41 = puVar22 + 3;
                              puVar22 = (undefined8 *)0x0;
                              lVar17 = lVar17 + -0x18;
                            } while (lVar17 != 0);
                          }
                        }
                        puVar26 = &DAT_14cbd6f50;
                        if (puVar22 == (undefined8 *)0x0) {
                          puVar26 = &DAT_14cbd6f38;
                        }
                        FUN_1408226d0(puVar26,&local_3c8,1);
                        uVar16 = uStack_3c0;
                        pcVar32 = local_3c8;
                        uVar7 = (int)uStack_3c0 - 1;
                        if ((int)uStack_3c0 == 0) {
                          uVar7 = 0;
                        }
                        if (0 < (int)uVar7) {
                          uVar34 = 0;
                          do {
                            *(ushort *)(local_3c8 + uVar34 * 2) =
                                 (ushort)(*(ushort *)(local_3c8 + uVar34 * 2) - 0x41 < 0x1a) * 0x20
                                 + *(ushort *)(local_3c8 + uVar34 * 2);
                            uVar34 = uVar34 + 1;
                          } while (uVar7 != uVar34);
                        }
                        local_3c8 = (code *)0x0;
                        uStack_3c0 = 0;
                        if (pcStack_288 == (code *)0x0) {
                          pcStack_288 = pcVar32;
                          local_280 = uVar16;
                        }
                        else {
                          FUN_1400020a8();
                          pcStack_288 = pcVar32;
                          local_280 = uVar16;
                          if (local_3c8 != (code *)0x0) {
                            FUN_1400020a8();
                          }
                        }
                        puVar22 = (undefined8 *)FUN_14435d38a(local_570);
                        uVar16 = local_608;
                        local_408 = (longlong *)0x0;
                        iVar8 = *(int *)(puVar22 + 1);
                        uVar19 = *puVar22;
                        local_400 = iVar8;
                        if (iVar8 == 0) {
                          uStack_3fc = 0;
                        }
                        else {
                          FUN_148cbcd96(&local_408,iVar8,0);
                          FUN_148cbce09(local_408,uVar19,iVar8);
                          if ((longlong)local_400 != 0) {
                            lVar17 = (longlong)local_400 * 0x18;
                            plVar20 = local_408;
                            do {
                              lVar13 = plVar20[1];
                              if (lVar13 == 0) {
                                FUN_14117f018();
                                lVar13 = FUN_14477b664();
                                plVar20[1] = lVar13;
                              }
                              lVar29 = plVar20[2];
                              if (lVar29 == 0) {
                                if (lVar13 == 0) {
                                  lVar29 = 0;
                                }
                                else {
                                  lVar29 = 0;
                                  if (*plVar20 != 0) {
                                    plVar14 = *(longlong **)(lVar13 + 0xb8);
                                    if ((plVar14 == (longlong *)0x0) ||
                                       (cVar5 = (**(code **)(*plVar14 + 0x108))(), cVar5 == '\0')) {
                                      lVar29 = 0;
                                    }
                                    else {
                                      uVar19 = (**(code **)(*plVar14 + 0x110))(plVar14);
                                      lVar29 = FUN_144aff482(uVar19,plVar20);
                                    }
                                    plVar20[2] = lVar29;
                                  }
                                }
                              }
                              uStack_2e0 = 0;
                              local_2e8 = *(longlong *)(lVar29 + 0x50);
                              local_2d8 = 0;
                              uVar19 = FUN_14477b664(*(undefined8 *)(lVar29 + 0x58));
                              uStack_2e0 = FUN_14477b664(uVar19);
                              local_2d8 = *(ulonglong *)(lVar29 + 0x60);
                              if (uStack_2e0 == 0) {
                                uVar19 = FUN_1465f8c9c();
                                uStack_2e0 = FUN_14477b664(uVar19);
                              }
                              if (((local_2d8 == 0) && (local_2d8 = 0, uStack_2e0 != 0)) &&
                                 (local_2e8 != 0)) {
                                plVar14 = *(longlong **)(uStack_2e0 + 0xb8);
                                if ((plVar14 == (longlong *)0x0) ||
                                   (cVar5 = (**(code **)(*plVar14 + 0x108))(plVar14), cVar5 == '\0')
                                   ) {
                                  local_2d8 = 0;
                                }
                                else {
                                  uVar19 = (**(code **)(*plVar14 + 0x110))(plVar14);
                                  local_2d8 = FUN_144aff482(uVar19,&local_2e8);
                                }
                              }
                              uVar16 = local_2d8;
                              local_3c8 = (code *)0x0;
                              uStack_3c0 = 0;
                              local_3b8 = 0;
                              uVar19 = FUN_1465f8c9c();
                              uStack_3c0 = FUN_14477b664(uVar19);
                              lVar13 = FUN_1465f8c9c();
                              uVar19 = FUN_1465f8c9c();
                              FUN_1402d1bfa(&local_418,uVar19,uVar16);
                              if (local_3c8 != local_418) {
                                local_3b8 = 0;
                              }
                              local_3c8 = local_418;
                              lVar29 = FUN_1465f8c9c();
                              if (lVar13 == 0) {
LAB_140e09e54:
                                lVar29 = lVar13;
                              }
                              else if (lVar29 == 0) {
                                lVar29 = 0;
                              }
                              else if ((*(int *)(lVar29 + 0x38) <= *(int *)(lVar13 + 0x38)) &&
                                      (*(longlong *)
                                        (*(longlong *)(lVar13 + 0x30) +
                                        (longlong)*(int *)(lVar29 + 0x38) * 8) == lVar29 + 0x30))
                              goto LAB_140e09e54;
                              if (uStack_3c0 != lVar29) {
                                local_3b8 = 0;
                              }
                              FUN_14477b664(lVar29);
                              uStack_3c0 = FUN_14477b664();
                              if (((uStack_3c0 == 0) || (local_3c8 == (code *)0x0)) &&
                                 (uVar16 = local_3b8, uStack_3c0 == 0)) {
                                FUN_1465f8c9c();
                                uStack_3c0 = FUN_14477b664();
                                uVar16 = local_3b8;
                              }
                              local_3b8 = uVar16;
                              if (((local_3b8 == 0) && (local_3b8 = 0, uStack_3c0 != 0)) &&
                                 (local_3c8 != (code *)0x0)) {
                                plVar14 = *(longlong **)(uStack_3c0 + 0xb8);
                                if ((plVar14 == (longlong *)0x0) ||
                                   (cVar5 = (**(code **)(*plVar14 + 0x108))(), cVar5 == '\0')) {
                                  local_3b8 = 0;
                                }
                                else {
                                  uVar19 = (**(code **)(*plVar14 + 0x110))(plVar14);
                                  local_3b8 = FUN_144aff482(uVar19,&local_3c8);
                                }
                              }
                              uVar34 = uStack_e8;
                              uVar16 = local_3b8;
                              lVar13 = (longlong)(int)uStack_e8;
                              uVar7 = (int)uStack_e8 + 1;
                              uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar7);
                              if (uStack_e8._4_4_ < uVar7) {
                                FUN_148e50b18(&local_f0,uVar34 & 0xffffffff);
                              }
                              *(ulonglong *)((longlong)local_f0 + lVar13 * 8) = uVar16;
                              plVar20 = plVar20 + 3;
                              lVar17 = lVar17 + -0x18;
                              uVar16 = local_608;
                              lVar13 = local_600;
                            } while (lVar17 != 0);
                          }
                        }
                        local_2e8 = 0;
                        uStack_2e0 = 0;
                        local_508 = 0;
                        iVar8 = *(int *)(uVar16 + 0x60);
                        uVar19 = *(undefined8 *)(uVar16 + 0x58);
                        local_500 = iVar8;
                        if (iVar8 == 0) {
                          local_4fc = 0;
                        }
                        else {
                          FUN_1487816c8(&local_508,iVar8,0);
                          FUN_148781737(local_508,uVar19,iVar8);
                        }
                        FUN_14435d498(&local_418,&local_508);
                        if (0 < local_410) {
                          lVar29 = 0;
                          lVar17 = 0;
                          do {
                            piVar18 = *(int **)(uVar16 + 8);
                            if (piVar18 == (int *)0x0) {
                              piVar18 = &DAT_14c9485f0;
                            }
                            if (((*piVar18 == 0) || (iVar8 = piVar18[1], iVar8 == 0)) ||
                               (*piVar18 == DAT_14c948000)) {
LAB_140e093e5:
                              local_448 = CONCAT44(DAT_14c948618._4_4_,(int)DAT_14c948618);
                              iVar8 = DAT_14c948620;
                            }
                            else {
                              if ((iVar8 < 2) && (piVar18[9] < 1)) {
                                plVar20 = (longlong *)(piVar18 + 2);
                              }
                              else {
                                plVar20 = *(longlong **)(piVar18 + 6);
                              }
                              if (iVar8 < 1) goto LAB_140e093e5;
                              local_448 = *plVar20;
                              iVar8 = (int)plVar20[1];
                            }
                            uStack_440 = CONCAT44(uStack_440._4_4_,iVar8);
                            pcVar32 = local_418 + lVar29;
                            uVar19 = FUN_1447210f0(lVar13);
                            uVar19 = FUN_1406f625c(uVar19);
                            FUN_140c5218a(pcVar32,&local_3c8,uVar19);
                            lVar31 = FUN_140c520a2(&local_3c8);
                            if (lVar31 != 0) {
                              FUN_140eeff92(lVar31,&local_2e8,lVar13);
                            }
                            (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[local_390])
                                      (&local_3c8);
                            lVar17 = lVar17 + 1;
                            lVar29 = lVar29 + 0x58;
                          } while (lVar17 < local_410);
                        }
                        FUN_1407dde2a(lStack_1f0,local_1e8 & 0xffffffff);
                        uVar16 = local_1e8 >> 0x20;
                        local_1e8 = local_1e8 & 0xffffffff00000000;
                        if ((int)uVar16 != 0) {
                          FUN_148e3b3c2(&lStack_1f0,0);
                        }
                        if ((longlong)(int)uStack_2e0 != 0) {
                          lVar29 = (longlong)(int)uStack_2e0 * 0xe0;
                          lVar17 = local_2e8;
                          do {
                            if (*(longlong *)(lVar17 + 8) != 0) {
                              FUN_140c5254a(lVar17,&local_3c8);
                              uVar16 = local_1e8;
                              lVar31 = (longlong)(int)local_1e8;
                              uVar7 = (int)local_1e8 + 1;
                              local_1e8 = CONCAT44(local_1e8._4_4_,uVar7);
                              if (local_1e8._4_4_ < uVar7) {
                                FUN_140c71e7a(&lStack_1f0,uVar16 & 0xffffffff);
                              }
                              FUN_140c541bc(lVar31 * 0xd8 + lStack_1f0,&local_3c8);
                              FUN_1407dde54(&local_3c8);
                            }
                            lVar17 = lVar17 + 0xe0;
                            lVar29 = lVar29 + -0xe0;
                          } while (lVar29 != 0);
                        }
                        FUN_140741dda(local_418,local_410);
                        if (local_418 != (code *)0x0) {
                          FUN_1400020a8();
                        }
                        FUN_14087acb9(local_2e8,uStack_2e0 & 0xffffffff);
                        plVar14 = local_5d0;
                        plVar20 = local_5e8;
                        if (local_2e8 != 0) {
                          FUN_1400020a8();
                        }
                        if (local_408 != (longlong *)0x0) {
                          FUN_1400020a8();
                        }
                        if (local_438 != (uint *)0x0) {
                          FUN_1400020a8();
                        }
                      }
                      local_438 = (uint *)0x0;
                      FUN_14410b2c4(plVar14,&local_438);
                      if ((local_438 != (uint *)0x0) &&
                         (lVar17 = FUN_140f7e331(), *(char *)(lVar17 + 0x32) == '\x01')) {
                        local_148 = FUN_1411d9864(lVar13,local_438);
                      }
                      if (*(int *)((longlong)plVar20 + 0x34) == 0) {
                        uVar7 = *(uint *)(plVar20 + 1);
                        plVar15 = (longlong *)(ulonglong)uVar7;
                        *(uint *)(plVar20 + 1) = uVar7 + 1;
                        if (*(uint *)((longlong)plVar20 + 0xc) == uVar7) {
                          FUN_1466457c0(plVar20,uVar7);
                        }
                        iVar8 = (int)plVar20[5];
                        if (iVar8 == 0) {
                          iVar11 = -1;
                        }
                        else {
                          iVar11 = iVar8 + 0x1e;
                          if (-1 < iVar8 + -1) {
                            iVar11 = iVar8 + -1;
                          }
                          iVar11 = iVar11 >> 5;
                        }
                        iVar24 = iVar8 + 1;
                        iVar25 = iVar8 + 0x1f;
                        if (-1 < iVar8) {
                          iVar25 = iVar8;
                        }
                        plVar14 = local_5c0;
                        local_5d0 = plVar15;
                        if (iVar25 >> 5 == iVar11) {
                          *(int *)(plVar20 + 5) = iVar24;
                        }
                        else {
                          if (*(int *)((longlong)plVar20 + 0x2c) <= iVar8) {
                            iVar11 = iVar8;
                            if (iVar8 + 0x20U < 0xa0) {
                              iVar24 = 0x80;
                            }
                            else {
                              uVar7 = iVar8 + 0x20U >> 5;
                              if (*(int *)((longlong)plVar20 + 0x2c) + 0x1fU < 0xa0) {
                                uVar27 = 4;
                                if (4 < uVar7) {
                                  uVar27 = uVar7;
                                }
                              }
                              else {
                                uVar27 = uVar7 + (uVar7 * 3 >> 3) + 0x10;
                              }
                              uVar16 = (ulonglong)(uVar27 * 4);
                              if (DAT_14c872d28 != (longlong *)0x0) {
                                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                                  uVar35 = (uint)(uVar16 + 0xf);
                                  if (uVar27 < 0x1ffd) {
                                    uVar16 = (ulonglong)
                                             (ushort)(&DAT_14c841d90)
                                                     [0x32 - (byte)(&DAT_14c841e00)
                                                                   [uVar16 + 0xf >> 4]];
                                  }
                                  else {
                                    uVar34 = (ulonglong)(uVar35 & 0xfffffff0);
                                    if (uVar34 < 0x7ff1) {
                                      bVar23 = (&DAT_14c841e00)[uVar35 >> 4];
                                      uVar28 = 0x32;
                                      if (0x32 < bVar23) {
                                        uVar28 = (ulonglong)bVar23;
                                      }
                                      uVar36 = 0x32 - (ulonglong)bVar23;
                                      do {
                                        uVar16 = (ulonglong)
                                                 (ushort)(&DAT_14c841d90)[uVar36 & 0xffffffff];
                                        if (((&DAT_14c841d90)[uVar36 & 0xffffffff] & 0xf) == 0)
                                        goto LAB_140e0a101;
                                        lVar13 = uVar28 + 1 + uVar36;
                                        uVar36 = uVar36 - 1;
                                      } while (lVar13 != 0x33);
                                    }
                                    uVar16 = (ulonglong)DAT_14c841df8;
                                    if (DAT_14c841df8 < 0x11) {
                                      uVar16 = 0x10;
                                    }
                                    uVar16 = -uVar16 & (uVar34 + uVar16) - 1;
                                  }
                                }
                                else {
                                  uVar16 = (**(code **)(*DAT_14c872d28 + 0x60))
                                                     (DAT_14c872d28,uVar16,0);
                                  iVar11 = (int)local_5e8[5];
                                }
                              }
LAB_140e0a101:
                              iVar12 = (int)(uVar16 >> 2);
                              iVar24 = iVar12 << 5;
                              if (iVar12 < (int)uVar7) {
                                iVar24 = -0x20;
                              }
                            }
                            plVar14 = local_5c0;
                            plVar20 = local_5e8;
                            *(int *)((longlong)local_5e8 + 0x2c) = iVar24;
                            FUN_1446efbd8(local_5c0,iVar11);
                            iVar24 = (int)plVar20[5] + 1;
                            lVar13 = local_600;
                          }
                          iVar11 = iVar24 + 0x1f;
                          if (-1 < iVar24) {
                            iVar11 = iVar24;
                          }
                          *(int *)(plVar20 + 5) = iVar24;
                          if (iVar24 % 0x20 != 0) {
                            plVar15 = (longlong *)plVar20[4];
                            if ((longlong *)plVar20[4] == (longlong *)0x0) {
                              plVar15 = plVar14;
                            }
                            bVar23 = -(char)(iVar24 % 0x20);
                            *(uint *)((longlong)plVar15 + (longlong)(iVar11 >> 5) * 4) =
                                 (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar11 >> 5) * 4) <<
                                       (bVar23 & 0x1f)) >> (bVar23 & 0x1f);
                          }
                        }
                        lVar17 = (longlong)(int)local_5d0;
                        plVar15 = (longlong *)plVar20[4];
                        if ((longlong *)plVar20[4] == (longlong *)0x0) {
                          plVar15 = plVar14;
                        }
                        bVar23 = (byte)iVar8 & 0x1f;
                        puVar21 = (uint *)((longlong)plVar15 + (longlong)(iVar25 >> 5) * 4);
                        *puVar21 = *puVar21 & (-2 << bVar23 | 0xfffffffeU >> 0x20 - bVar23);
                        plVar15 = plVar20;
                      }
                      else {
                        local_5d0 = (longlong *)(ulonglong)*(uint *)(plVar20 + 6);
                        lVar17 = (longlong)(int)*(uint *)(plVar20 + 6);
                        iVar8 = *(int *)(*plVar20 + 4 + lVar17 * 0x1d0);
                        *(int *)(plVar20 + 6) = iVar8;
                        iVar11 = *(int *)((longlong)plVar20 + 0x34) + -1;
                        *(int *)((longlong)plVar20 + 0x34) = iVar11;
                        plVar14 = local_5c0;
                        plVar15 = local_5e8;
                        lVar13 = local_600;
                        if (iVar11 != 0) {
                          *(undefined4 *)(*plVar20 + (longlong)iVar8 * 0x1d0) = 0xffffffff;
                        }
                      }
                      iVar8 = (int)local_5d0;
                      plVar20 = (longlong *)plVar15[4];
                      if ((longlong *)plVar15[4] == (longlong *)0x0) {
                        plVar20 = plVar14;
                      }
                      iVar11 = iVar8 + 0x1f;
                      if (-1 < iVar8) {
                        iVar11 = iVar8;
                      }
                      puVar21 = (uint *)((longlong)plVar20 + (longlong)(iVar11 >> 5) * 4);
                      *puVar21 = *puVar21 | 1 << ((byte)local_5d0 & 0x1f);
                      lVar31 = *plVar15;
                      lVar17 = lVar17 * 0x1d0;
                      puVar21 = (uint *)(lVar31 + lVar17);
                      puVar22 = (undefined8 *)(lVar31 + lVar17);
                      *(uint *)(puVar22 + 1) = local_4d0;
                      *puVar22 = local_4d8;
                      FUN_1414460ee(puVar22 + 2,&local_298);
                      *(uint *)(puVar22 + 0x28) = local_168;
                      *(int *)((longlong)puVar22 + 0x144) = iStack_164;
                      *(uint *)(puVar22 + 0x29) = uStack_160;
                      *(undefined4 *)((longlong)puVar22 + 0x14c) = uStack_15c;
                      puVar22[0x2a] = CONCAT44(uStack_154,uStack_158);
                      puVar22[0x2b] = CONCAT44(uStack_14c,uStack_150);
                      *(undefined1 *)(puVar22 + 0x2c) = local_148;
                      lVar29 = lVar31 + lVar17;
                      *(undefined8 *)(lVar29 + 0x188) = 0;
                      *(undefined4 *)(lVar29 + 400) = 0;
                      *(undefined8 *)(lVar29 + 0x168) = 0;
                      *(undefined8 *)(lVar29 + 0x170) = 0;
                      *(undefined8 *)(lVar29 + 0x194) = 0xffffffff00000080;
                      *(undefined4 *)(lVar29 + 0x19c) = 0;
                      *(undefined8 *)(lVar29 + 0x1a8) = 0;
                      *(undefined4 *)(lVar29 + 0x1b0) = 0;
                      FUN_141445edc((undefined8 *)(lVar29 + 0x168),&local_140);
                      pvVar2 = local_f0;
                      *(undefined8 *)(lVar29 + 0x1b8) = 0;
                      lVar33 = (longlong)(int)uStack_e8;
                      *(int *)(lVar29 + 0x1c0) = (int)uStack_e8;
                      if (lVar33 == 0) {
                        puVar21[0x71] = 0;
                      }
                      else {
                        puVar22 = (undefined8 *)(lVar31 + lVar17 + 0x1b8);
                        FUN_148e50b9e(puVar22,uStack_e8 & 0xffffffff,0);
                        memcpy((void *)*puVar22,pvVar2,lVar33 << 3);
                      }
                      plVar20 = local_5e8;
                      puVar21[0x72] = 0xffffffff;
                      uVar7 = *puVar21;
                      uVar27 = puVar21[2];
                      if (uVar27 != 0) {
                        uVar7 = uVar27 >> 0xd ^ uVar7 - uVar27;
                        uVar35 = uVar7 << 8 ^ (-0x61c88647 - uVar27) - uVar7;
                        uVar37 = uVar35 >> 0xd ^ (uVar27 - uVar7) - uVar35;
                        uVar7 = uVar37 >> 0xc ^ (uVar7 - uVar35) - uVar37;
                        uVar27 = uVar7 << 0x10 ^ (uVar35 - uVar37) - uVar7;
                        uVar35 = uVar27 >> 5 ^ (uVar37 - uVar7) - uVar27;
                        uVar7 = uVar35 >> 3 ^ (uVar7 - uVar27) - uVar35;
                        uVar27 = uVar7 << 10 ^ (uVar27 - uVar35) - uVar7;
                        uVar7 = uVar27 >> 0xf ^ uVar35 - (uVar7 + uVar27);
                      }
                      iVar8 = 1;
                      if ((int)local_5e8[1] - *(int *)((longlong)local_5e8 + 0x34) == 1) {
                        uVar27 = 1;
LAB_140e097ab:
                        if (((int)uVar27 < 1) || (iVar8 <= (int)plVar20[9])) {
                          uVar7 = (int)plVar20[9] - 1U & uVar7;
                          puVar21[0x73] = uVar7;
                          plVar14 = (longlong *)plVar20[8];
                          if ((longlong *)plVar20[8] == (longlong *)0x0) {
                            plVar14 = local_568;
                          }
                          puVar21[0x72] =
                               *(uint *)((longlong)plVar14 +
                                        ((longlong)(int)plVar20[9] - 1U & (longlong)(int)uVar7) * 4)
                          ;
                          plVar14 = (longlong *)plVar20[8];
                          if ((longlong *)plVar20[8] == (longlong *)0x0) {
                            plVar14 = local_568;
                          }
                          *(int *)((longlong)plVar14 +
                                  ((longlong)(int)plVar20[9] - 1U & (longlong)(int)uVar7) * 4) =
                               (int)local_5d0;
                        }
                        else {
                          *(int *)(plVar20 + 9) = iVar8;
                          FUN_1418f7f1e(plVar20);
                        }
                      }
                      else {
                        iVar11 = FUN_1406e4c2c(local_5e8,uVar7,puVar21);
                        if (iVar11 == -1) {
                          uVar27 = (int)plVar20[1] - *(int *)((longlong)plVar20 + 0x34);
                          if (3 < uVar27) {
                            uVar16 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
                            lVar17 = 0x3f;
                            if (uVar16 != 0) {
                              for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                              }
                            }
                            iVar8 = 1 << ((byte)lVar17 & 0x1f);
                          }
                          goto LAB_140e097ab;
                        }
                        lVar13 = *plVar20;
                        lVar17 = (longlong)iVar11 * 0x1d0;
                        if (*(longlong *)(lVar13 + 0x1b8 + lVar17) != 0) {
                          FUN_1400020a8();
                        }
                        pvVar2 = (void *)(lVar13 + lVar17);
                        *(undefined4 *)((longlong)pvVar2 + 0x1b0) = 0;
                        if (*(longlong *)((longlong)pvVar2 + 0x1a8) != 0) {
                          FUN_1400020a8();
                        }
                        FUN_140e91296((longlong)pvVar2 + 0x168);
                        FUN_141445ca8(lVar13 + lVar17 + 0x10);
                        memmove(pvVar2,puVar21,0x1c8);
                        plVar20 = local_5e8;
                        FUN_148e50c00(local_5e8,local_5d0);
                        lVar13 = local_600;
                      }
                      lVar17 = FUN_140cee904(local_558);
                      if ((lVar17 != 0) && ((byte)uStack_160 == '\0')) {
                        cVar5 = FUN_1405f61f4(local_4e8);
                        plVar14 = &DAT_14cbd6dc0;
                        if (cVar5 == '\x06') {
                          plVar14 = &DAT_14cbd6db4;
                        }
                        local_2e8 = *plVar14;
                        uStack_2e0 = CONCAT44(uStack_2e0._4_4_,(int)plVar14[1]);
                        if ((char)uStack_150 == '\x01') {
                          local_510 = local_4d0;
                          local_518 = local_4d8;
                          FUN_1448075d0(local_3f0,&local_518);
                          local_528 = local_2e8;
                          local_520 = (int)uStack_2e0;
                          FUN_140ceeaa0(lVar17,&local_528,local_3f0);
                        }
                        else {
                          cVar5 = FUN_1405f61f4(local_4e8);
                          if (cVar5 == '\x06') {
                            local_538 = local_4d8;
                            local_530 = local_4d0;
                            FUN_1448075d0(&local_3c8,&local_538);
                            FUN_1410290ea(lVar17,&DAT_14cbd6dc0,&local_3c8,1);
                            if (local_3b0 != 0) {
                              FUN_1400020a8();
                            }
                          }
                          local_548 = local_4d8;
                          local_540 = local_4d0;
                          FUN_1448075d0(&local_3c8,&local_548);
                          FUN_1410290ea(lVar17,&local_2e8,&local_3c8);
                          if (local_3b0 != 0) {
                            FUN_1400020a8();
                          }
                        }
                      }
                      if (local_f0 != (void *)0x0) {
                        FUN_1400020a8();
                      }
                      local_f8 = 0;
                      if (local_100 != 0) {
                        FUN_1400020a8();
                      }
                      FUN_140e91296(&local_140);
                      FUN_141445ca8(&local_298);
                    }
                  }
                }
              }
              plVar14 = local_4e0;
              if (local_4e0 != (longlong *)0x0) {
                LOCK();
                plVar15 = local_4e0 + 1;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)*plVar15 == 0) {
                  (**(code **)*local_4e0)(local_4e0);
                  LOCK();
                  piVar18 = (int *)((longlong)plVar14 + 0xc);
                  *piVar18 = *piVar18 + -1;
                  UNLOCK();
                  if (*piVar18 == 0) {
                    (**(code **)(*plVar14 + 0x10))(plVar14);
                  }
                }
              }
            }
          }
          else {
            lVar17 = 0;
            do {
              if ((*(int *)((longlong)local_4b8 + lVar17) == (int)local_4d8) &&
                 (*(uint *)((longlong)(local_4b8 + 1) + lVar17) == local_4d0)) goto LAB_140e07aec;
              lVar17 = lVar17 + 0xc;
            } while ((longlong)(int)uStack_4b0 * 0xc != lVar17);
          }
          puVar30 = (undefined8 *)((longlong)puVar30 + 0xc);
        } while (puVar30 != puVar39);
      }
    }
    local_90 = 0;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_1401bccca(&local_d8);
    if (local_4b8 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_498 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_498 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
      (**(code **)*local_498)(local_498);
      LOCK();
      piVar18 = (int *)((longlong)local_498 + 0xc);
      *piVar18 = *piVar18 + -1;
      UNLOCK();
      if (*piVar18 == 0) {
        (**(code **)(*local_498 + 0x10))(local_498);
      }
    }
  }
LAB_140e0ab8a:
  if ((local_80 ^ (ulonglong)auStack_678) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e0ad52 FUN_140e0ad52 body=134 status=ok
// SIG undefined FUN_140e0ad52(void)

undefined8 FUN_140e0ad52(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if ((((*(char *)(param_1 + 0x168) == '\x01') && (*(int *)(param_1 + 0x1cc) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x1c8), -1 < (int)uVar1)) &&
     ((((int)uVar1 < DAT_14c9647dc &&
       (plVar2 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar2 != (longlong *)0x0)) &&
      (((int)plVar2[2] == *(int *)(param_1 + 0x1cc) && ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)))
      ))) {
    if ((*(uint *)(plVar2 + 1) & 0x10200000) != 0) {
      return 0;
    }
  }
  else {
    plVar2 = (longlong *)(param_1 + 0x1c0);
  }
  if ((longlong *)*plVar2 == (longlong *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000140e0adc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)*plVar2 + 0x2d0))();
  return uVar3;
}



// FUNCTION 140e0aeb0 FUN_140e0aeb0 body=370 status=ok
// SIG undefined FUN_140e0aeb0(void)

undefined8 * FUN_140e0aeb0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140e0b03e FUN_140e0b03e body=31 status=ok
// SIG undefined FUN_140e0b03e(void)

undefined8 FUN_140e0b03e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e0b05e FUN_140e0b05e body=297 status=ok
// SIG undefined FUN_140e0b05e(void)

undefined8 FUN_140e0b05e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140e0b180;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140e0b180;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_140e0b180:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140e0b12b;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_140e0b12b;
    }
  }
  uVar6 = 0;
LAB_140e0b12b:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e0b188 FUN_140e0b188 body=109 status=ok
// SIG undefined FUN_140e0b188(void)

void FUN_140e0b188(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  if (((param_3 == 0) || (*(char *)(param_3 + 0x60) != '\x01')) ||
     ((*(byte *)(param_3 + 0x40) & 0x10) == 0)) {
    iVar2 = FUN_140e0b1f6(param_1 + 0x48,param_2);
    if (0 < iVar2) {
LAB_140e0b1e6:
      FUN_1457b3914(param_1);
      return;
    }
  }
  else {
    cVar1 = FUN_140e0b410(param_1,param_2,param_3);
    if (cVar1 == '\0') {
      cVar1 = FUN_140e0b296(param_1,param_2,param_3);
      if (cVar1 != '\0') goto LAB_140e0b1e6;
    }
  }
  return;
}



// FUNCTION 140e0b1f6 FUN_140e0b1f6 body=124 status=ok
// SIG undefined FUN_140e0b1f6(void)

undefined8 FUN_140e0b1f6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == lVar2) {
          FUN_140e0b32c();
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140e0b272 FUN_140e0b272 body=36 status=ok
// SIG undefined FUN_140e0b272(void)

void FUN_140e0b272(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_140e0b296();
  if (cVar1 == '\0') {
    return;
  }
  FUN_1457b3914(param_1);
  return;
}



// FUNCTION 140e0b296 FUN_140e0b296 body=149 status=ok
// SIG undefined FUN_140e0b296(void)

ulonglong FUN_140e0b296(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(param_3 + 0x60) == '\0') || ((*(byte *)(param_3 + 0x40) & 0x10) == 0)) {
    uVar2 = 0;
  }
  else {
    local_28 = 0;
    FUN_14485c47a(&local_28,param_3);
    uVar1 = FUN_140fd4f8c(param_1 + 0x48,(int)((ulonglong)*param_2 >> 0x20) * 0x17 + (int)*param_2,
                          param_2,&local_28);
    uVar2 = FUN_1457b3904(uVar1,0);
    uVar2 = uVar2 ^ 1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e0b32c FUN_140e0b32c body=91 status=ok
// SIG undefined FUN_140e0b32c(void)

void FUN_140e0b32c(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_140e0b388(param_1,param_2,1);
  return;
}



// FUNCTION 140e0b388 FUN_140e0b388 body=136 status=ok
// SIG undefined FUN_140e0b388(void)

void FUN_140e0b388(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140e0b410 FUN_140e0b410 body=347 status=ok
// SIG undefined FUN_140e0b410(void)

ulonglong FUN_140e0b410(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 == (longlong *)0x0) {
    uVar7 = 0;
  }
  else {
    FUN_1449027d0(param_1,&local_98);
    lVar4 = *(longlong *)(local_98 + 0x50);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x200));
    *(int *)(lVar4 + 0x1f8) = *(int *)(lVar4 + 0x1f8) + 1;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_90 + 0x10))(local_90);
        }
      }
    }
    lVar5 = *(longlong *)(lVar4 + 0x18);
    *(int *)(lVar4 + 0x28) = *(int *)(lVar4 + 0x28) + 2;
    if ((longlong)*(int *)(lVar4 + 0x20) != 0) {
      lVar8 = 0;
      do {
        if (*(longlong *)(lVar5 + lVar8) == *param_2) {
          *(undefined1 *)(lVar5 + 0x83 + lVar8) = 1;
          (**(code **)(*param_3 + 0x2b0))(param_3,&local_98);
          puVar3 = (undefined4 *)(lVar5 + 0x18 + lVar8);
          *puVar3 = local_78;
          puVar3[1] = uStack_74;
          puVar3[2] = uStack_70;
          puVar3[3] = uStack_6c;
          *(undefined8 *)(lVar5 + 0x28 + lVar8) = local_68;
          if ((char)param_3[0xc] == '\x01') {
            bVar6 = *(byte *)((longlong)param_3 + 0x44) >> 2 & 1;
          }
          else {
            bVar6 = 0;
          }
          *(byte *)(lVar5 + 0x81 + lVar8) = bVar6;
          uVar7 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
          goto LAB_140e0b4fb;
        }
        lVar8 = lVar8 + 0xb8;
      } while ((longlong)*(int *)(lVar4 + 0x20) * 0xb8 - lVar8 != 0);
    }
    uVar7 = 0;
LAB_140e0b4fb:
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x200));
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e0b56c FUN_140e0b56c body=14 status=ok
// SIG undefined FUN_140e0b56c(void)

undefined8 FUN_140e0b56c(longlong param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    return *(undefined8 *)(param_1 + 0x50);
  }
  return 0;
}



// FUNCTION 140e0b57a FUN_140e0b57a body=67 status=ok
// SIG undefined FUN_140e0b57a(void)

longlong FUN_140e0b57a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140f9ee6a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xb8 + *param_1;
  FUN_140e0b5bd(lVar2,1);
  return lVar2;
}



// FUNCTION 140e0b5bd FUN_140e0b5bd body=178 status=ok
// SIG undefined FUN_140e0b5bd(void)

void FUN_140e0b5bd(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    uVar1 = DAT_14c8464e8;
    param_1[3] = DAT_14c8464e0;
    param_1[4] = uVar1;
    param_1[5] = DAT_14c8464f0;
    uVar1 = DAT_14c846328;
    param_1[6] = DAT_14c846320;
    param_1[7] = uVar1;
    param_1[8] = 0x3fdcccccc0000000;
    param_1[9] = 0x3fd1eb8520000000;
    param_1[10] = 0x4010000000000000;
    *(undefined4 *)(param_1 + 0xb) = 0;
    *(undefined2 *)((longlong)param_1 + 0x81) = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *(undefined4 *)((longlong)param_1 + 0x83) = 1;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    *(undefined8 *)((longlong)param_1 + 0xa5) = 0;
    *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
    param_1 = param_1 + 0x17;
  }
  return;
}



// FUNCTION 140e0b670 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e0b688 FUN_140e0b688 body=96 status=ok
// SIG undefined FUN_140e0b688(void)

void FUN_140e0b688(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_1410994b4(param_2,param_3,param_1 + 0x20,1);
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,param_3);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 140e0b6fa FUN_140e0b6fa body=96 status=ok
// SIG undefined FUN_140e0b6fa(void)

void FUN_140e0b6fa(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_1410994b4(param_2,param_3,param_1 + 0x20,0);
  iVar1 = *(int *)(param_1 + 0x50);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,param_3);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 140e0b75a FUN_140e0b75a body=49 status=ok
// SIG undefined FUN_140e0b75a(void)

longlong FUN_140e0b75a(void)

{
  if (DAT_14cbf74c0 == 0) {
    FUN_140f50038(&DAT_14cbf74c0,&PTR_s__Script_HairStrandsCore_14ba8ca18);
  }
  return DAT_14cbf74c0;
}



// FUNCTION 140e0b78c FUN_140e0b78c body=462 status=ok
// SIG undefined FUN_140e0b78c(void)

void FUN_140e0b78c(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  longlong *local_58;
  code *local_50;
  longlong **local_48;
  code **local_40;
  code *local_38;
  undefined8 **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140e0bb56();
  if (param_2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*param_2 + 8))(param_2);
    lVar4 = FUN_140e0bae2();
    if (((lVar4 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)) {
      lVar3 = (**(code **)(*param_2 + 8))(param_2);
      lVar4 = FUN_140e0bb1c();
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        local_50 = (code *)&LAB_14417029c;
        goto LAB_140e0b8a4;
      }
    }
    else {
      local_50 = (code *)&LAB_144170232;
LAB_140e0b8a4:
      local_48 = &local_58;
      local_40 = &local_50;
      local_30 = &local_40;
      local_38 = FUN_14417018a;
      local_58 = param_2;
      uVar2 = FUN_140e0b9fc();
      FUN_140e0b95c(param_1 + 0x2f8,uVar2,&local_38);
    }
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      uVar1 = *(uint *)(param_2 + 1);
      local_58 = (longlong *)0x0;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140e0b7b6;
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 != (undefined8 *)0x0) &&
         ((*(int *)(puVar5 + 2) == *(int *)((longlong)param_2 + 0xc) &&
          ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
        local_58 = (longlong *)*puVar5;
        goto LAB_140e0b7b6;
      }
    }
  }
  local_58 = (longlong *)0x0;
LAB_140e0b7b6:
  local_48 = &local_58;
  local_40 = &local_50;
  local_50 = FUN_1441702ae;
  local_30 = &local_40;
  local_38 = FUN_14417018a;
  uVar2 = FUN_140e0b9fc();
  FUN_140e0b95c(param_1 + 0x2f8,uVar2,&local_38);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e0b95c FUN_140e0b95c body=158 status=ok
// SIG undefined FUN_140e0b95c(void)

void FUN_140e0b95c(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        if ((*(int *)(param_2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(param_2 + 0x38) * 8) == param_2 + 0x30)) {
          local_48 = lVar3;
          (*(code *)*param_3)(param_3[1],&local_48);
        }
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e0b9fc FUN_140e0b9fc body=228 status=ok
// SIG undefined FUN_140e0b9fc(void)

longlong FUN_140e0b9fc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5fc38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141843f54;
    local_38 = &LAB_1486b8d95;
    local_40 = &LAB_145827092;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxInventoryAugmentScript",&DAT_14cb5fc38,&DAT_1486b8d94);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5fc38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e0bae2 FUN_140e0bae2 body=57 status=ok
// SIG undefined FUN_140e0bae2(void)

void FUN_140e0bae2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4dd8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4dd8 = FUN_140002ddd(FUN_1465c0b70,uVar1,L"InventoryAugmentCausedDamageEventPayload");
  }
  return;
}



// FUNCTION 140e0bb1c FUN_140e0bb1c body=57 status=ok
// SIG undefined FUN_140e0bb1c(void)

void FUN_140e0bb1c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4df0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4df0 = FUN_140002ddd(FUN_1465c0bd0,uVar1,L"InventoryAugmentReceivedDamageEventPayload")
    ;
  }
  return;
}



// FUNCTION 140e0bb56 FUN_140e0bb56 body=429 status=ok
// SIG undefined FUN_140e0bb56(void)

void FUN_140e0bb56(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = *(char *)(*(longlong *)(param_1 + 8) + 0xd8);
  if (cVar2 == '\0') {
    if (*(int *)(param_1 + 0x294) != 0) {
      puVar3 = (uint *)(param_1 + 0x290);
      uVar1 = *puVar3;
      uVar4 = 0;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140e0bbed;
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar5 != 0) &&
         ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x294) &&
          ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) goto LAB_140e0bbea;
    }
  }
  else if ((cVar2 == '\x01') && (param_2 != 0)) {
    puVar3 = (uint *)(param_2 + 8);
LAB_140e0bbea:
    uVar4 = *(undefined8 *)puVar3;
    goto LAB_140e0bbed;
  }
  uVar4 = 0;
LAB_140e0bbed:
  *(undefined8 *)(param_1 + 0x298) = uVar4;
  if ((param_3 == '\0') && (*(char *)(param_1 + 0x2e0) == '\0')) {
    *(undefined1 *)(param_1 + 0x2e0) = 1;
    local_48 = uVar4;
    FUN_140e0c48e(param_1,*(longlong *)(param_1 + 8) + 0x98,param_1 + 0x28,0);
    if (*(char *)(param_1 + 0x2e4) == '\x01') {
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      FUN_140e0bd1c(param_1);
    }
    if (*(char *)(*(longlong *)(param_1 + 8) + 0x3da) == '\x02') {
      FUN_1457b3e8a(param_1);
    }
  }
  FUN_140e0c004(param_1,param_1 + 0x38);
  if (*(longlong *)(param_1 + 600) != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x298);
    if (cVar2 != '\0') {
      FUN_14479d2ce(param_1 + 0x290);
      FUN_14479d2ce(param_1 + 0x298);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e0bd1c FUN_140e0bd1c body=500 status=ok
// SIG undefined FUN_140e0bd1c(void)

void FUN_140e0bd1c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  undefined8 uVar11;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  undefined4 local_120;
  undefined1 local_118;
  undefined1 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  undefined1 local_b9;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8 [4];
  int local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_68 = 0;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_88 = 0;
  if ((*param_2 != 0) || ((int)param_2[1] != 0)) {
    local_a8[3] = *param_2;
    local_88 = (int)param_2[1];
  }
  cVar10 = FUN_140e0bf12(*(longlong *)(param_1 + 8) + 0x450,local_a8 + 2,&local_68,&local_78);
  if (cVar10 != '\0') {
    local_a8[0] = 0;
    local_a8[1] = 0;
    FUN_1457b3d99(&local_78);
    uVar9 = local_68;
    lVar7 = *(longlong *)(param_1 + 8);
    uVar2 = *(undefined1 *)(lVar7 + 0x4b2);
    uVar3 = *(undefined1 *)(lVar7 + 0x4b1);
    uVar4 = *(undefined1 *)(lVar7 + 0x4b0);
    uVar8 = *(undefined8 *)(lVar7 + 0x4a8);
    uVar5 = *(undefined1 *)(lVar7 + 0x4a6);
    uVar6 = *(undefined1 *)(lVar7 + 0x4a5);
    local_b9 = *(undefined1 *)(lVar7 + 0x4a4);
    uVar1 = *(undefined4 *)(lVar7 + 0x4a0);
    local_b8 = *(undefined4 *)(lVar7 + 0x490);
    uStack_b4 = *(undefined4 *)(lVar7 + 0x494);
    uStack_b0 = *(undefined4 *)(lVar7 + 0x498);
    uStack_ac = *(undefined4 *)(lVar7 + 0x49c);
    uVar11 = FUN_14479d2ce(param_1 + 0x290);
    local_c8 = 1;
    local_d0 = 1;
    local_d8 = 1;
    local_f0 = 1;
    local_118 = local_b9;
    local_128 = &local_b8;
    local_120 = uVar1;
    local_110 = uVar6;
    local_108 = uVar5;
    local_100 = uVar8;
    local_f8 = uVar4;
    local_e8 = uVar3;
    local_e0 = uVar2;
    FUN_141530594(uVar11,uVar9,1,local_a8);
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e0bf12 FUN_140e0bf12 body=242 status=ok
// SIG undefined FUN_140e0bf12(void)

bool FUN_140e0bf12(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x70);
  if (lVar4 == 0) {
    uVar5 = FUN_140e0c454();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x70) = lVar4;
  }
  lVar6 = *(longlong *)(param_1 + 0x78);
  if (lVar6 == 0) {
    if ((*(longlong *)(param_1 + 0x68) != 0) && (lVar4 != 0)) {
      plVar2 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0x78) = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x68));
        *(longlong *)(param_1 + 0x78) = lVar6;
        if (lVar6 != 0) goto LAB_140e0bfe1;
      }
    }
    lVar4 = *param_3;
  }
  else {
LAB_140e0bfe1:
    lVar4 = FUN_1415d7f30(lVar6,param_2,param_4,0);
    *param_3 = lVar4;
  }
  if (lVar4 == 0) {
    lVar4 = FUN_1402d1dc0(param_1);
    *param_3 = lVar4;
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    *param_4 = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(param_4 + 1) = uVar1;
    bVar7 = *param_3 != 0;
  }
  else {
    bVar7 = true;
  }
  return bVar7;
}



// FUNCTION 140e0c004 FUN_140e0c004 body=1102 status=ok
// SIG undefined FUN_140e0c004(void)

void FUN_140e0c004(longlong param_1,char *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((((*(int *)(param_1 + 0x294) == 0) || (uVar2 = *(uint *)(param_1 + 0x290), (int)uVar2 < 0))
       || (DAT_14c9647dc <= (int)uVar2)) ||
      ((lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar7 == 0 ||
       (*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x294))))) ||
     ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)) goto LAB_140e0c27b;
  lVar7 = *(longlong *)(param_2 + 0x18);
  if (lVar7 == 0) {
    uVar5 = FUN_140067708();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(param_2 + 0x18) = lVar7;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    if ((lVar7 != 0) && (*(longlong *)(param_2 + 0x10) != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
        param_2[0x20] = '\0';
        param_2[0x21] = '\0';
        param_2[0x22] = '\0';
        param_2[0x23] = '\0';
        param_2[0x24] = '\0';
        param_2[0x25] = '\0';
        param_2[0x26] = '\0';
        param_2[0x27] = '\0';
      }
      else {
        uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar7 = FUN_144aff482(uVar5,param_2 + 0x10);
        *(longlong *)(param_2 + 0x20) = lVar7;
        if (lVar7 != 0) goto LAB_140e0c09d;
      }
    }
    if ((*param_2 != '\x01') || (*(longlong *)(param_2 + 4) == 0)) goto LAB_140e0c27b;
  }
LAB_140e0c09d:
  if (param_2[0x31] == '\x01') {
    cVar4 = FUN_1404fa388(param_2 + 0x68);
    if (cVar4 == '\0') {
      local_80 = *(undefined8 *)param_2;
      local_78 = *(undefined4 *)(param_2 + 8);
      local_70 = *(undefined8 *)(param_2 + 0x10);
      uVar5 = FUN_14477b664(*(undefined8 *)(param_2 + 0x18));
      local_68 = FUN_14477b664(uVar5);
      local_60 = *(undefined8 *)(param_2 + 0x20);
      local_58 = *(longlong *)(param_2 + 0x28);
      if ((local_58 != 0) && ((DAT_14cb26569 & 1) != 0)) {
        piVar1 = *(int **)(local_58 + 0x50);
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (DAT_14cb259f8 == 0) {
          iVar6 = 5;
        }
        else {
          if ((char)piVar1[1] != '\x01') {
            FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
            goto LAB_140e0c10d;
          }
          iVar6 = 2;
        }
        LOCK();
        piVar1[2] = iVar6;
        UNLOCK();
      }
LAB_140e0c10d:
      if (*(int *)(param_1 + 0x294) == 0) {
LAB_140e0c3c4:
        uVar5 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x290);
        uVar5 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((puVar8 == (undefined8 *)0x0) ||
             ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x294) ||
              ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_140e0c3c4;
          uVar5 = *puVar8;
        }
      }
      local_a8 = 0;
      FUN_140f7fb5b(&local_50,uVar5,&local_80,0);
      if ((longlong *)(param_2 + 0x68) != &local_50) {
        *(longlong *)(param_2 + 0x68) = local_50;
        local_50 = 0;
        plVar3 = *(longlong **)(param_2 + 0x70);
        *(longlong **)(param_2 + 0x70) = local_48;
        local_48 = (longlong *)0x0;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
      }
      *(undefined4 *)(param_2 + 0x78) = local_40;
      *(undefined4 *)(param_2 + 0x7c) = uStack_3c;
      *(undefined4 *)(param_2 + 0x80) = uStack_38;
      *(undefined4 *)(param_2 + 0x84) = uStack_34;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x294) == 0) {
LAB_140e0c370:
      uVar5 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x290);
      uVar5 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar8 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar8 == (undefined8 *)0x0) ||
           ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x294) ||
            ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_140e0c370;
        uVar5 = *puVar8;
      }
    }
    local_a8 = 0;
    FUN_140b32deb(&local_98,uVar5,param_2,0);
    local_98 = 0;
    local_90 = 0xffffffffffffffff;
  }
  if (param_2[0x30] == '\x01') {
    uVar9 = 0;
    uVar5 = 0;
    if (*param_2 != '\0') {
      uVar5 = *(undefined8 *)(param_2 + 4);
    }
    local_30 = *(undefined8 *)(param_2 + 0x10);
    FUN_1400021e4(&local_30,&local_50);
    if (*(int *)(param_1 + 0x294) != 0) {
      uVar2 = *(uint *)(param_1 + 0x290);
      uVar9 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar8 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar8 == (undefined8 *)0x0) ||
           ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x294) ||
            ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) {
          uVar9 = 0;
        }
        else {
          uVar9 = *puVar8;
        }
      }
    }
    lVar7 = FUN_1456e2bea(uVar9);
    if (lVar7 != 0) {
      local_a8 = 0;
      FUN_145aa6c7a(lVar7,&local_50,uVar5,param_2[0x31]);
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140e0c27b:
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e0c454 FUN_140e0c454 body=57 status=ok
// SIG undefined FUN_140e0c454(void)

void FUN_140e0c454(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb574d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb574d0 = FUN_140002ddd(FUN_1464bc75f,uVar1,L"EffectCollectionDef");
  }
  return;
}



// FUNCTION 140e0c48e FUN_140e0c48e body=1058 status=ok
// SIG undefined FUN_140e0c48e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e0c48e(longlong param_1,longlong param_2,longlong param_3,char param_4,ulonglong param_5
                  )

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  float *pfVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined1 auVar15 [16];
  longlong lVar16;
  undefined1 in_XMM2 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined1 *local_100;
  longlong local_f0;
  undefined1 local_e1;
  longlong local_e0;
  int local_d8;
  char local_d0 [16];
  longlong *local_c0;
  undefined4 local_a8 [2];
  char local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined4 local_78 [2];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((param_4 != '\0') && (0 < *(int *)(param_3 + 8))) {
    FUN_14053d8da(param_3,1);
  }
  if (((param_5 >> 0x20 != 0) && (uVar10 = (uint)param_5, -1 < (int)uVar10)) &&
     ((int)uVar10 < DAT_14c9647dc)) {
    uVar12 = (ulonglong)((uint)(param_5 >> 0x10) & 0x7fff);
    lVar5 = (ulonglong)((uVar10 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar12 * 8);
    if (((lVar5 != 0) && (iVar14 = (int)(param_5 >> 0x20), *(int *)(lVar5 + 0x10) == iVar14)) &&
       (((*(uint *)(lVar5 + 8) & 0x10200000) == 0 && (iVar3 = *(int *)(param_2 + 8), iVar3 != 0))))
    {
      local_e0 = 0;
      local_f0 = param_3;
      local_d8 = iVar3;
      FUN_14141afca(&local_e0,iVar3,0);
      FUN_14115008a(local_e0);
      lVar5 = local_f0;
      if ((0.0 < *(float *)(param_1 + 0x2d0)) && ((longlong)local_d8 != 0)) {
        lVar11 = 0;
        do {
          *(undefined4 *)(local_e0 + 0x20 + lVar11) = *(undefined4 *)(param_1 + 0x2d0);
          *(undefined8 *)(local_e0 + 0x28 + lVar11) = 0;
          puVar13 = (undefined8 *)(local_e0 + 0x30 + lVar11);
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar13 = (undefined8 *)(local_e0 + 0x40 + lVar11);
          *puVar13 = 0;
          puVar13[1] = 0;
          if ((*(longlong *)(local_e0 + 0x50 + lVar11) != 0) ||
             (*(int *)(local_e0 + 0x58 + lVar11) != -0xfffff30)) {
            *(undefined8 *)(local_e0 + 0x50 + lVar11) = 0;
            *(undefined4 *)(local_e0 + 0x58 + lVar11) = 0xf00000d0;
            *(undefined8 *)(local_e0 + 0x60 + lVar11) = 0;
          }
          *(undefined4 *)(local_e0 + 0x68 + lVar11) = 0x3f800000;
          lVar11 = lVar11 + 0x70;
        } while ((longlong)local_d8 * 0x70 - lVar11 != 0);
      }
      auVar4 = _DAT_149931e80;
      fVar2 = *(float *)(param_1 + 0x2d4);
      if ((0.0001 < ABS(fVar2 + -1.0)) && ((longlong)local_d8 != 0)) {
        uVar6 = (longlong)local_d8 * 0x70 - 0x70U >> 4;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar6;
        auVar15._8_4_ = SUB164(auVar17 * ZEXT816(0x2492492492492493),8);
        auVar15._0_8_ = uVar6 / 7;
        auVar15._12_4_ = (int)(uVar6 / 0x700000000);
        pfVar7 = (float *)(local_e0 + 0x1b8);
        uVar8 = 0;
        auVar17 = pmovsxbq(in_XMM2,0x302);
        auVar18 = pmovsxbq(in_XMM3,0x100);
        auVar15 = auVar15 | _DAT_149931e80;
        do {
          lVar11 = auVar15._0_8_;
          lVar16 = auVar15._8_8_;
          if ((bool)(~(lVar11 < (longlong)(uVar8 ^ auVar4._0_8_)) & 1)) {
            pfVar7[-0x54] = fVar2;
          }
          auVar19._8_4_ = (int)uVar8;
          auVar19._0_8_ = uVar8;
          auVar19._12_4_ = (int)(uVar8 >> 0x20);
          if ((longlong)((auVar19._8_8_ | auVar18._8_8_) ^ auVar4._8_8_) <= lVar16) {
            pfVar7[-0x38] = fVar2;
          }
          auVar19 = (auVar19 | auVar17) ^ auVar4;
          if (auVar19._0_8_ <= lVar11) {
            pfVar7[-0x1c] = fVar2;
          }
          if (auVar19._8_8_ <= lVar16) {
            *pfVar7 = fVar2;
          }
          uVar8 = uVar8 + 4;
          pfVar7 = pfVar7 + 0x70;
        } while ((uVar6 / 7 + 4 & 0xfffffffffffffffc) != uVar8);
      }
      if (((((int)uVar10 < DAT_14c9647dc) &&
           (puVar13 = (undefined8 *)
                      ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + uVar12 * 8)), puVar13 != (undefined8 *)0x0)) &&
          (*(int *)(puVar13 + 2) == iVar14)) && ((*(uint *)(puVar13 + 1) & 0x10200000) == 0)) {
        uVar9 = *puVar13;
      }
      else {
        uVar9 = 0;
      }
      if (*(int *)(local_f0 + 8) == 0) {
        local_d0[0] = '\0';
        local_a8[0] = 0;
        FUN_1456bb102(local_d0,uVar9);
        local_a0 = '\0';
        local_78[0] = 0;
        local_100 = &local_e1;
        local_108 = 1;
        FUN_140c3fc86(&local_e0,lVar5,uVar9,local_d0);
        FUN_1448173f8(local_78);
        if (local_a0 != '\0') {
          if (local_a0 == '\x01') {
            local_98 = 0;
          }
          else if ((local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_90 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_90 + 0x10))();
            }
          }
          local_a0 = '\0';
        }
        FUN_1448173f8(local_a8);
        if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_c0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_c0 + 0x10))();
          }
        }
      }
      if (local_e0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e0c8b2 FUN_140e0c8b2 body=318 status=ok
// SIG undefined FUN_140e0c8b2(void)

void FUN_140e0c8b2(undefined8 param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_1405b657a();
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0x178) != '\x03')) goto LAB_140e0c9c9;
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar5 = FUN_1406eea5e();
    lVar4 = FUN_14477b664(uVar5);
    param_2[1] = lVar4;
  }
  bVar6 = true;
  if (param_2[2] == 0) {
    if ((lVar4 == 0) || (*param_2 == 0)) goto LAB_140e0c9c9;
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_140e0c9ea:
      lVar4 = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 == '\0') goto LAB_140e0c9ea;
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar4 = FUN_144aff482(uVar5,param_2);
    }
    param_2[2] = lVar4;
    bVar6 = lVar4 != 0;
  }
  if ((0 < param_3) && (bVar6)) {
    FUN_1406eed88(param_1,&local_38,param_2,1);
    if (local_38 != 0) {
      cVar3 = FUN_140d90a14(local_38,param_3);
      if (cVar3 != '\0') {
        FUN_140df6042(param_1);
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
LAB_140e0c9c9:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e0c9f2 FUN_140e0c9f2 body=1736 status=ok
// SIG undefined FUN_140e0c9f2(void)

void FUN_140e0c9f2(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  int *piVar2;
  code *pcVar3;
  DWORD DVar4;
  byte bVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  LPVOID pvVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 ****ppppuVar14;
  longlong lVar15;
  undefined2 *puVar16;
  void *_Dst;
  ulonglong _Size;
  byte bVar17;
  bool bVar18;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  code *local_140;
  undefined1 *local_138;
  code **local_130;
  code *local_128;
  code *local_120;
  uint local_10c;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  void *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  char local_b0;
  undefined8 local_a8;
  code *local_a0 [2];
  longlong *local_90;
  undefined4 local_78 [2];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar13 = *(longlong *)(param_1 + 8);
  if (param_2 == 0 || lVar13 == 0) goto LAB_140e0cf4b;
  if (*(int *)(lVar13 + 0x40) == 0) {
    puVar16 = &DAT_149dfb77a;
  }
  else {
    puVar16 = *(undefined2 **)(lVar13 + 0x38);
  }
  if (DAT_14c927740 == 0) {
    local_130 = local_a0;
    local_a0[0] = FUN_1449e2820;
    local_120 = FUN_14081d0ea;
    local_128 = FUN_14081d0ea;
    local_138 = &LAB_146856450;
    local_140 = FUN_1427b121c;
    local_148 = L"Engine";
    local_150 = 0;
    local_158 = 0x10000021;
    local_160 = CONCAT44(local_160._4_4_,8);
    local_168 = 0x28;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
  }
  local_160 = 0;
  local_168 = 0;
  plVar8 = (longlong *)FUN_141433b6f(DAT_14c927740,0,puVar16,0);
  if (((plVar8 == (longlong *)0x0) ||
      (plVar9 = (longlong *)
                FUN_1400796d0(plVar8,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30),1),
      plVar9 == (longlong *)0x0)) || ((*(byte *)((longlong)plVar9 + 0xb1) & 0x20) == 0))
  goto LAB_140e0cf4b;
  plVar10 = (longlong *)plVar8[0x22];
  if (plVar10 == (longlong *)0x0) {
    (**(code **)(*plVar8 + 1000))(plVar8);
    plVar10 = (longlong *)plVar8[0x22];
    if (plVar10 == (longlong *)0x0) goto LAB_140e0cf4b;
  }
  DVar7 = DAT_14c7585d0;
  local_f8 = plVar10;
  if (DAT_14c7585d0 == 0xffffffff) {
    DVar7 = TlsAlloc();
    DVar6 = 0xffffffff;
    LOCK();
    bVar18 = DAT_14c7585d0 != 0xffffffff;
    DVar4 = DVar7;
    if (bVar18) {
      DVar6 = DAT_14c7585d0;
      DVar4 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar4;
    UNLOCK();
    if (bVar18) {
      TlsFree(DVar7);
      DVar7 = DVar6;
    }
  }
  pvVar11 = TlsGetValue(DVar7);
  if (pvVar11 == (LPVOID)0x0) {
    pvVar11 = (LPVOID)FUN_140036a08(local_a0);
    FUN_140fddf04(pvVar11);
    TlsSetValue(DVar7,pvVar11);
  }
  local_c8 = (undefined8 *)((longlong)pvVar11 + 0x10);
  local_c0 = *(undefined8 *)((longlong)pvVar11 + 0x10);
  local_b8 = *(longlong *)((longlong)pvVar11 + 0x20);
  local_b0 = '\0';
  local_a8 = *(undefined8 *)((longlong)pvVar11 + 0x28);
  *(undefined8 ***)((longlong)pvVar11 + 0x28) = &local_c8;
  *(int *)((longlong)pvVar11 + 0x30) = *(int *)((longlong)pvVar11 + 0x30) + 1;
  _Size = (ulonglong)*(ushort *)((longlong)plVar9 + 0xb6);
  DVar7 = DAT_14c7585d0;
  local_108 = plVar9;
  if (DAT_14c7585d0 == 0xffffffff) {
    DVar7 = TlsAlloc();
    DVar6 = 0xffffffff;
    LOCK();
    bVar18 = DAT_14c7585d0 != 0xffffffff;
    DVar4 = DVar7;
    if (bVar18) {
      DVar6 = DAT_14c7585d0;
      DVar4 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar4;
    UNLOCK();
    if (bVar18) {
      TlsFree(DVar7);
      DVar7 = DVar6;
    }
  }
  pvVar11 = TlsGetValue(DVar7);
  if (pvVar11 == (LPVOID)0x0) {
    pvVar11 = (LPVOID)FUN_140036a08(local_a0);
    FUN_140fddf04(pvVar11);
    TlsSetValue(DVar7,pvVar11);
  }
  puVar1 = (ulonglong *)((longlong)pvVar11 + 0x10);
  _Dst = (void *)(*(longlong *)((longlong)pvVar11 + 0x10) + 0xfU & 0xfffffffffffffff0);
  uVar12 = (longlong)_Dst + _Size;
  if (*(ulonglong *)((longlong)pvVar11 + 0x18) < uVar12) {
    FUN_140023dd8(puVar1);
    _Dst = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    uVar12 = (longlong)_Dst + _Size;
  }
  *puVar1 = uVar12;
  memset(_Dst,0,_Size);
  plVar8 = local_108;
  plVar9 = local_108;
  do {
    plVar10 = (longlong *)plVar9[10];
LAB_140e0cbc1:
    if (plVar10 != (longlong *)0x0) {
      if ((~*(uint *)(plVar10[1] + 0x18) & 0x8001) != 0) goto code_r0x000140e0cbd6;
      lVar13 = plVar10[7];
      if ((char)lVar13 < '\0') {
        bVar17 = 0;
        local_10c = 0;
        local_100 = plVar9;
LAB_140e0cc19:
        if (((uint)lVar13 >> 9 & 1) == 0) {
          (**(code **)(*plVar10 + 0x160))
                    (plVar10,(longlong)*(int *)((longlong)plVar10 + 0x44) + (longlong)_Dst);
        }
        local_d8 = plVar10[4];
        local_f0 = *(longlong *)(param_1 + 8);
        local_e8 = *(longlong **)(param_1 + 0x10);
        lVar13 = local_f0;
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
          UNLOCK();
          lVar13 = *(longlong *)(param_1 + 8);
        }
        lVar15 = param_2;
        local_e0 = plVar10;
        local_d0 = _Dst;
        if (local_d8 == *(longlong *)(lVar13 + 0x48)) {
LAB_140e0cc97:
          FUN_14416903c(&local_f0,lVar15);
        }
        else if (local_d8 == *(longlong *)(lVar13 + 0x50)) {
          lVar15 = param_3;
          if (param_3 != 0) goto LAB_140e0cc97;
          local_10c = (uint)CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
        }
        else if ((int)(uint)bVar17 < *(int *)(lVar13 + 0x60)) {
          lVar13 = *(longlong *)(lVar13 + 0x58);
          local_a0[0] = (code *)((ulonglong)local_a0[0] & 0xffffffffffffff00);
          local_78[0] = 0;
          FUN_1456bb102(local_a0,param_2);
          FUN_1447c3578((ulonglong)bVar17 * 0x38 + lVar13,local_70,local_a0);
          FUN_1448173f8(local_78);
          if (((char)local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
            LOCK();
            piVar2 = (int *)((longlong)local_90 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_90 + 0x10))();
            }
          }
          bVar5 = FUN_1470ee80c(local_70,plVar10,
                                (longlong)*(int *)((longlong)plVar10 + 0x44) + (longlong)_Dst,0);
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
          if (pcVar3 != (code *)0x0) {
            ppppuVar14 = local_70;
            if (0x18 < local_58) {
              ppppuVar14 = (undefined8 ****)local_70[0];
            }
            (*pcVar3)(ppppuVar14);
          }
          if (0x18 < local_58) {
            FUN_1400020a8(local_70[0]);
          }
          local_10c = CONCAT31((int3)(local_10c >> 8),(byte)local_10c | bVar5 ^ 1);
          bVar17 = bVar17 + 1;
        }
        plVar8 = local_e8;
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_e8 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*local_e8)(local_e8);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        plVar10 = plVar10 + 3;
        do {
          for (plVar10 = (longlong *)*plVar10; plVar10 != (longlong *)0x0;
              plVar10 = (longlong *)plVar10[3]) {
            if ((~*(uint *)(plVar10[1] + 0x18) & 0x8001) == 0) {
              lVar13 = plVar10[7];
              if (-1 < (char)lVar13) goto LAB_140e0ce3d;
              goto LAB_140e0cc19;
            }
          }
          local_100 = (longlong *)(**(code **)(*local_100 + 0x2b0))();
          plVar10 = local_100 + 10;
        } while (local_100 != (longlong *)0x0);
LAB_140e0ce3d:
        plVar8 = local_108;
        if ((local_10c & 1) == 0) break;
        goto LAB_140e0ce63;
      }
      break;
    }
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x2b0))();
  } while (plVar9 != (longlong *)0x0);
  (**(code **)(*local_f8 + 0x248))(local_f8,plVar8,_Dst);
LAB_140e0ce63:
  do {
    for (plVar9 = (longlong *)plVar8[10]; plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[3])
    {
      if ((~*(uint *)(plVar9[1] + 0x18) & 0x8001) == 0) goto LAB_140e0ce98;
    }
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x2b0))(plVar8);
  } while (plVar8 != (longlong *)0x0);
  goto LAB_140e0cef4;
code_r0x000140e0cbd6:
  plVar10 = (longlong *)plVar10[3];
  goto LAB_140e0cbc1;
LAB_140e0ce98:
  if ((char)plVar9[7] < '\0') {
    if (((ulonglong)plVar9[7] >> 0x24 & 1) == 0) {
      (**(code **)(*plVar9 + 0x148))
                (plVar9,(longlong)*(int *)((longlong)plVar9 + 0x44) + (longlong)_Dst);
    }
    plVar9 = plVar9 + 3;
    do {
      for (plVar9 = (longlong *)*plVar9; plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[3])
      {
        if ((~*(uint *)(plVar9[1] + 0x18) & 0x8001) == 0) goto LAB_140e0ce98;
      }
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x2b0))(plVar8);
      plVar9 = plVar8 + 10;
    } while (plVar8 != (longlong *)0x0);
  }
LAB_140e0cef4:
  if (local_b0 == '\0') {
    local_b0 = '\x01';
    *(int *)(local_c8 + 4) = *(int *)(local_c8 + 4) + -1;
    if (local_b8 != local_c8[2]) {
      FUN_14004673c();
    }
    *local_c8 = local_c0;
    local_c8[3] = local_a8;
  }
LAB_140e0cf4b:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e0d0ca FUN_140e0d0ca body=40 status=ok
// SIG undefined FUN_140e0d0ca(void)

undefined8 FUN_140e0d0ca(undefined8 param_1,int param_2)

{
  FUN_140e0d0f2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e0d0f2 FUN_140e0d0f2 body=498 status=ok
// SIG undefined FUN_140e0d0f2(void)

void FUN_140e0d0f2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6a0d20;
  if (param_1[0xf0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe2] != 0) {
    FUN_1400020a8();
  }
  FUN_1406c2f92(param_1[0xdd],*(undefined4 *)(param_1 + 0xde));
  if (param_1[0xdd] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  if (param_1[0xdb] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3d70(param_1 + 0xd3);
  if (param_1[0xce] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc1] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xbf) = 0;
  if (param_1[0xbe] != 0) {
    FUN_1400020a8();
  }
  FUN_1406f0462(param_1 + 0xb6);
  if (param_1[0xa9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa2] != 0) {
    FUN_1400020a8();
  }
  FUN_140485912(param_1 + 0x95);
  *param_1 = &PTR_FUN_14b5dfa60;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_14075386c(param_1 + 0x81);
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_1407538a4(param_1);
  return;
}



// FUNCTION 140e0d2e4 FUN_140e0d2e4 body=131 status=ok
// SIG undefined FUN_140e0d2e4(void)

void FUN_140e0d2e4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e0d368(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3b9d00;
  puVar1[0x72] = &PTR_FUN_14a3ba370;
  puVar1[0x11e] = 0;
  *(undefined4 *)(puVar1 + 0x11f) = 0;
  puVar1[0x115] = 0;
  puVar1[0x116] = 0;
  puVar1[0x117] = 0;
  puVar1[0x118] = 0;
  puVar1[0x119] = 0;
  puVar1[0x11a] = 0;
  puVar1[0x11b] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x8fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x904) = 0;
  puVar1[0x122] = 0;
  *(undefined4 *)(puVar1 + 0x123) = 0;
  return;
}



// FUNCTION 140e0d368 FUN_140e0d368 body=1000 status=ok
// SIG undefined FUN_140e0d368(void)

undefined8 * FUN_140e0d368(undefined8 *param_1)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140e0d752();
  *param_1 = &PTR_FUN_14a3c1a50;
  param_1[0x72] = &PTR_FUN_14a3c20c0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b9) = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0x404000003fa00000;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x82) = 0x3f000000;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0x3fa00000;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x514) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x40400000;
  *(undefined1 *)(param_1 + 0xa7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x53c) = 0x3dcccccd;
  param_1[0xa9] = 0;
  *(undefined1 *)((longlong)param_1 + 0x579) = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  *(undefined1 *)((longlong)param_1 + 0x57a) = 1;
  *(undefined8 *)((longlong)param_1 + 0x57c) = 6;
  *(undefined1 *)((longlong)param_1 + 0x584) = 2;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xbc] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x604) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x60c) = 0;
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x63c) = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x644) = 1;
  param_1[0xc9] = 0x7fefffffffffffff;
  *(byte *)((longlong)param_1 + 0x665) = *(byte *)((longlong)param_1 + 0x665) & 0xf8 | 1;
  *(undefined8 *)((longlong)param_1 + 0x66c) = 0x437a000043160000;
  *(undefined4 *)((longlong)param_1 + 0x674) = 0x3e4ccccd;
  *(byte *)((longlong)param_1 + 0x68c) = *(byte *)((longlong)param_1 + 0x68c) & 0xf0;
  *(undefined4 *)(param_1 + 0xd2) = 0x41000000;
  *(undefined4 *)((longlong)param_1 + 0x694) = 0;
  *(undefined4 *)(param_1 + 0xd3) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x69c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  FUN_144805afa(param_1 + 0xd6);
  param_1[0x10f] = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x10a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x854) = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x884) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x88c) = 0;
  param_1[0x113] = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) & 0xf7;
  FUN_1405e4918(param_1,0x41200000);
  FUN_1405bab3a(param_1,0);
  FUN_1405ba932(param_1,0);
  FUN_1403121a6(param_1,0);
  *(byte *)((longlong)param_1 + 0x654) = *(byte *)((longlong)param_1 + 0x654) | 7;
  *(byte *)((longlong)param_1 + 0x656) = *(byte *)((longlong)param_1 + 0x656) | 1;
  *(byte *)(param_1 + 0xcb) = *(byte *)(param_1 + 0xcb) | 1;
  *(byte *)((longlong)param_1 + 0x65c) = *(byte *)((longlong)param_1 + 0x65c) & 0xfe;
  *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) & 0xfe;
  *(byte *)((longlong)param_1 + 0x664) = *(byte *)((longlong)param_1 + 0x664) & 0xf8 | 3;
  *(byte *)(param_1 + 0xcf) = *(byte *)(param_1 + 0xcf) & 0xfe;
  local_68 = 0x4060000000000000;
  local_60 = 0x4060000000000000;
  local_58 = 0x4070000000000000;
  (**(code **)(*(longlong *)param_1[0x39] + 0x478))();
  *(undefined1 *)(param_1[0x39] + 0x1fb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = DAT_14c967818;
  *(undefined4 *)(param_1 + 0xca) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xaa) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x84d) = 0;
  *(byte *)((longlong)param_1 + 0x654) = *(byte *)((longlong)param_1 + 0x654) | 4;
  *(undefined1 *)((longlong)param_1 + 0x655) = 0;
  *(uint *)(param_1 + 0x109) = (*(uint *)(param_1 + 0x109) & 0xfffffffc) + 1;
  FUN_140078ec2(param_1 + 0xd6,DAT_14cad0ef8);
  *(byte *)(param_1 + 0x107) = *(byte *)(param_1 + 0x107) & 0xfe;
  iVar1 = DAT_14caa1e30 + 1;
  *(int *)(param_1 + 199) = DAT_14caa1e30;
  DAT_14caa1e30 = iVar1;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e0d752 FUN_140e0d752 body=360 status=ok
// SIG undefined FUN_140e0d752(void)

undefined8 * FUN_140e0d752(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  uint local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  undefined8 local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a78e670;
  FUN_1446f470e(&local_28,L"RootComponent0",1);
  if (DAT_14cac7648 == 0) {
    local_40 = &local_20;
    local_20 = FUN_144a7958c;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_143242436;
    local_48 = &LAB_14789ef1f;
    local_50 = &LAB_1417b008f;
    local_58 = L"Engine";
    local_60 = 0x8000000000;
    local_68 = 0x10000004;
    local_70 = 0x10;
    local_78 = 0x2b0;
    FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
  }
  local_70 = local_70 & 0xffffff00;
  local_78 = CONCAT31(local_78._1_3_,1);
  lVar1 = FUN_14048696c(param_1,local_28,DAT_14cac7648,DAT_14cac7648);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x39] = lVar1;
  *(undefined1 *)(lVar1 + 0x1fb) = 0;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e0d8bc FUN_140e0d8bc body=35 status=ok
// SIG undefined FUN_140e0d8bc(void)

void FUN_140e0d8bc(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  if (param_3 == '\0') {
    FUN_140e0d8e0();
    return;
  }
  if (*(longlong *)(lVar1 + 0x48) == 0) {
    lVar1 = 0;
  }
  FUN_146ef15a6(lVar1);
  return;
}



// FUNCTION 140e0d8e0 FUN_140e0d8e0 body=311 status=ok
// SIG undefined FUN_140e0d8e0(void)

void FUN_140e0d8e0(longlong param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  double **local_68;
  double local_60;
  double local_58;
  double local_50;
  double *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = *(longlong *)(param_1 + 0x40);
  if (((lVar8 != 0) && (1 < *(byte *)(lVar8 + 0x90))) &&
     ((*(char *)(lVar8 + 0x1ac) == '\x04' || (*(char *)(lVar8 + 0x1ac) == '\x01')))) {
    fVar1 = *(float *)(lVar8 + 0x178);
    dVar4 = *(double *)(lVar8 + 0x148);
    dVar5 = *param_2;
    fVar2 = *(float *)(lVar8 + 0x17c);
    dVar6 = param_2[1];
    fVar3 = *(float *)(lVar8 + 0x180);
    dVar7 = param_2[2];
    FUN_144a05e16(lVar8,4,1,1);
    local_60 = *(double *)(lVar8 + 0x150);
    local_50 = ((double)fVar3 * dVar4 + dVar7) * local_60;
    local_58 = ((double)fVar2 * dVar4 + dVar6) * local_60;
    local_60 = ((double)fVar1 * dVar4 + dVar5) * local_60;
    local_48 = &local_60;
    local_68 = &local_48;
    FUN_140e0da18(lVar8 + 0x160,CONCAT71((int7)((ulonglong)local_68 >> 8),1),lVar8 + 0x94,
                  *(undefined8 *)(lVar8 + 0x10));
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e0da18 FUN_140e0da18 body=275 status=ok
// SIG undefined FUN_140e0da18(void)

void FUN_140e0da18(longlong param_1,char param_2,byte *param_3,longlong param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  double *pdVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  pdVar7 = (double *)*param_5;
  dVar3 = pdVar7[2];
  dVar4 = pdVar7[1];
  *(float *)(param_1 + 0x18) = (float)*pdVar7;
  *(float *)(param_1 + 0x1c) = (float)dVar4;
  *(float *)(param_1 + 0x20) = (float)dVar3;
  if (((param_2 != '\0') && (*param_3 = *param_3 | 4, param_4 != 0)) &&
     (lVar8 = *(longlong *)(param_4 + 8), lVar8 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x128));
      if (*(int *)(param_4 + 0x18) == -1) {
        lVar9 = *(longlong *)(lVar8 + 0x98);
        uVar5 = *(uint *)(param_4 + 0x1c);
        piVar2 = (int *)(lVar9 + 0x160 + (ulonglong)uVar5 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
        lVar9 = lVar9 + (ulonglong)uVar5 * 0x10;
        iVar6 = *(int *)(lVar9 + 0x1a0);
        *(int *)(param_4 + 0x18) = iVar6;
        *(uint *)(lVar9 + 0x1a0) = iVar6 + 1U;
        if (*(uint *)(lVar9 + 0x1a4) < iVar6 + 1U) {
          FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar6);
        }
        lVar9 = *(longlong *)(lVar9 + 0x198);
        lVar10 = (longlong)iVar6 * 0x20;
        *(longlong *)(lVar9 + lVar10) = param_4;
        *(undefined4 *)(lVar9 + 8 + lVar10) = 0;
        puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000140e0da9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x128));
      return;
    }
    FUN_144aa3818(*(longlong *)(lVar8 + 0x98) + 0x160,param_4);
    return;
  }
  return;
}



// FUNCTION 140e0db3a FUN_140e0db3a body=72 status=ok
// SIG undefined FUN_140e0db3a(void)

undefined8 * FUN_140e0db3a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6778d0;
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_14097122c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e0db82 FUN_140e0db82 body=297 status=ok
// SIG undefined FUN_140e0db82(void)

undefined8 FUN_140e0db82(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140e0dca4;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140e0dca4;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_140e0dca4:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140e0dc4f;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_140e0dc4f;
    }
  }
  uVar6 = 0;
LAB_140e0dc4f:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e0dcac FUN_140e0dcac body=1102 status=ok
// SIG undefined FUN_140e0dcac(void)

void FUN_140e0dcac(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  byte bVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  longlong local_68;
  undefined8 uStack_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = 0;
  uStack_60 = 0;
  (**(code **)(*param_1 + 0x2c8))();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x14));
  plVar1 = param_1 + 0xb;
  uVar14 = (longlong)(int)param_1[0xc];
  if (0 < (longlong)(int)param_1[0xc]) {
    do {
      uVar2 = uVar14 - 1;
      plVar4 = *(longlong **)(*plVar1 + -8 + uVar14 * 8);
      if ((longlong)(int)uStack_60 != 0) {
        lVar10 = 0;
        do {
          if (*(longlong **)(local_68 + lVar10) == plVar4) goto LAB_140e0ddb8;
          lVar10 = lVar10 + 8;
        } while ((longlong)(int)uStack_60 * 8 != lVar10);
      }
      if ((param_1[4] != 0) && (DAT_14cae9568 == 0)) {
        local_50 = FUN_1417de738;
        local_70 = &LAB_145893408;
        local_78 = &LAB_1458cbbd2;
        local_80 = &local_50;
        local_88 = &LAB_147ba21f1;
        local_90 = &LAB_1463e9233;
        local_98 = L"Engine";
        local_a0 = 0;
        local_a8 = 0x1000000c;
        local_b0 = 8;
        local_b8 = 0x2b8;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      }
      (**(code **)(*plVar4 + 0x30))(plVar4);
      uVar8 = *(uint *)(param_1 + 0xc);
      if (uVar14 != uVar8) {
        memmove((void *)(param_1[0xb] + uVar2 * 8),(void *)(param_1[0xb] + uVar2 * 8 + 8),
                (longlong)(int)(uVar8 - (int)uVar14) << 3);
        uVar8 = *(uint *)(param_1 + 0xc);
      }
      *(uint *)(param_1 + 0xc) = uVar8 - 1;
      FUN_143fe0e32(plVar1);
LAB_140e0ddb8:
      bVar5 = 1 < (longlong)uVar14;
      uVar14 = uVar2;
    } while (bVar5);
  }
  lVar10 = (longlong)(int)uStack_60;
  if (0 < (longlong)(int)uStack_60) {
    do {
      plVar4 = *(longlong **)(local_68 + -8 + lVar10 * 8);
      if ((longlong)(int)param_1[0xc] != 0) {
        lVar11 = 0;
        do {
          if (*(longlong **)(param_1[0xb] + lVar11) == plVar4) goto LAB_140e0df19;
          lVar11 = lVar11 + 8;
        } while ((longlong)(int)param_1[0xc] * 8 != lVar11);
      }
      if ((param_1[4] != 0) && (DAT_14cae9568 == 0)) {
        local_50 = FUN_1417de738;
        local_70 = &LAB_145893408;
        local_78 = &LAB_1458cbbd2;
        local_80 = &local_50;
        local_88 = &LAB_147ba21f1;
        local_90 = &LAB_1463e9233;
        local_98 = L"Engine";
        local_a0 = 0;
        local_a8 = 0x1000000c;
        local_b0 = 8;
        local_b8 = 0x2b8;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      }
      (**(code **)(*plVar4 + 0x28))(plVar4);
      lVar6 = local_68;
      lVar11 = param_1[0xc];
      uVar8 = (int)lVar11 + 1;
      *(uint *)(param_1 + 0xc) = uVar8;
      if (*(uint *)((longlong)param_1 + 100) < uVar8) {
        FUN_143fdd0ca(plVar1);
      }
      *(undefined8 *)(*plVar1 + (longlong)(int)lVar11 * 8) =
           *(undefined8 *)(lVar6 + (lVar10 + -1) * 8);
LAB_140e0df19:
      bVar5 = 1 < lVar10;
      lVar10 = lVar10 + -1;
    } while (bVar5);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x14));
  iVar3 = *(int *)((longlong)param_1 + 0x54);
  *(int *)((longlong)param_1 + 0x54) = iVar3 + 1;
  lVar10 = (longlong)(int)param_1[9];
  if (lVar10 < 1) {
    *(int *)((longlong)param_1 + 0x54) = iVar3;
  }
  else {
    plVar1 = param_1 + 8;
    uVar14 = lVar10 + 1;
    lVar10 = lVar10 * 0x10 + -8;
    bVar12 = 0;
    do {
      if (((*(int *)(*plVar1 + lVar10) == 0) ||
          (plVar4 = *(longlong **)(*plVar1 + -8 + lVar10), plVar4 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar4 + 0x60))(plVar4,param_2), cVar7 == '\0')) {
        bVar12 = 1;
      }
      uVar14 = uVar14 - 1;
      lVar10 = lVar10 + -0x10;
    } while (1 < uVar14);
    iVar3 = *(int *)((longlong)param_1 + 0x54);
    *(int *)((longlong)param_1 + 0x54) = iVar3 + -1;
    if ((bool)(bVar12 & iVar3 < 2)) {
      iVar3 = (int)param_1[9];
      iVar9 = iVar3;
      if (0 < iVar3) {
        iVar13 = 0;
        do {
          if (((*(int *)(*plVar1 + 8 + (longlong)iVar13 * 0x10) == 0) ||
              (plVar4 = *(longlong **)(*plVar1 + (longlong)iVar13 * 0x10), plVar4 == (longlong *)0x0
              )) || (cVar7 = (**(code **)(*plVar4 + 0x28))(), cVar7 != '\0')) {
            FUN_14005b288(plVar1,iVar13);
            FUN_14005b248(plVar1);
          }
          else {
            iVar13 = iVar13 + 1;
          }
          iVar9 = (int)param_1[9];
        } while (iVar13 < iVar9);
      }
      iVar13 = 2;
      if (2 < iVar9 * 2) {
        iVar13 = iVar9 * 2;
      }
      *(int *)(param_1 + 10) = iVar13;
      if ((iVar13 < iVar3) && (*(int *)((longlong)param_1 + 0x4c) != iVar9)) {
        FUN_14045812c(plVar1);
      }
    }
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e0e104 FUN_140e0e104 body=323 status=ok
// SIG undefined FUN_140e0e104(void)

undefined8 * FUN_140e0e104(undefined8 *param_1)

{
  FUN_14076ffa2();
  *param_1 = &PTR_FUN_14b2bd500;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xf00000d000000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x1ffffffff;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x14] = DAT_14cb8ce08;
  *param_1 = &PTR_FUN_14b2bf350;
  param_1[6] = &PTR_FUN_14b2bf640;
  FUN_1406d2124(param_1 + 0x1b);
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  FUN_1406d2124(param_1 + 0x47);
  *(undefined4 *)(param_1 + 0x71) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x38c) = 0;
  param_1[0x72] = 0;
  *(undefined2 *)(param_1 + 0x76) = 4;
  *(undefined4 *)(param_1 + 0x73) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x77) = 3;
  *(char *)(param_1 + 0x78) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x79] = 0;
  *(undefined2 *)(param_1 + 0x7d) = 4;
  *(undefined4 *)(param_1 + 0x7a) = 1;
  *(undefined1 *)(param_1 + 0x7e) = 2;
  *(byte *)(param_1 + 0x7f) = (byte)~DAT_14c9a8754 >> 4 & 2;
  FUN_14044066a(param_1 + 0x80,10,1);
  *(undefined1 *)((longlong)param_1 + 0x439) = 1;
  return param_1;
}



// FUNCTION 140e0e24e FUN_140e0e24e body=57 status=ok
// SIG undefined FUN_140e0e24e(void)

void FUN_140e0e24e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a480 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a480 = FUN_140002ddd(FUN_1464c9494,uVar1,L"GbxBodyNodeState_DiscoveryLocation");
  }
  return;
}



// FUNCTION 140e0e29e FUN_140e0e29e body=370 status=ok
// SIG undefined FUN_140e0e29e(void)

void FUN_140e0e29e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(byte *)(param_1 + 0x6244) =
       ((*(int *)(param_1 + 0x6700) != 0) * '\x02' | *(byte *)(param_1 + 0x6244) & 0xfc) + 1;
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      lVar1 = *(longlong *)(param_1 + 0x3c0);
      if (lVar1 == 0) goto LAB_140e0e3fe;
    }
    if ((((DAT_14cbadd90 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
        DAT_14cbadd90 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
LAB_140e0e3fe:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e0e422 FUN_140e0e422 body=333 status=ok
// SIG undefined FUN_140e0e422(void)

void FUN_140e0e422(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined *local_48 [3];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 0x10) == 0)) ||
     (lVar2 = *(longlong *)(&DAT_00006850 + *(longlong *)(param_1 + 8)), lVar2 == 0))
  goto LAB_140e0e444;
  cVar3 = FUN_14143fe98();
  pcVar4 = (char *)(**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x3b60) + 0x20))
                             (*(longlong *)(param_1 + 8) + 0x3b60);
  lVar5 = *(longlong *)(param_1 + 0x10);
  if ((byte)(*pcVar4 - 1U) < 2) {
    local_50 = *(longlong *)(lVar5 + 0x120);
    if (local_50 == 0) {
      iVar1 = *(int *)(lVar5 + 0x128);
      goto joined_r0x000140e0e4cc;
    }
  }
  else if (cVar3 == '\0') {
    local_50 = *(longlong *)(lVar5 + 0x108);
    if (local_50 == 0) {
      iVar1 = *(int *)(lVar5 + 0x110);
      goto joined_r0x000140e0e4cc;
    }
  }
  else {
    local_50 = *(longlong *)(lVar5 + 0x138);
    if (local_50 == 0) {
      iVar1 = *(int *)(lVar5 + 0x140);
joined_r0x000140e0e4cc:
      if (iVar1 == 0xc) {
        local_50 = 0;
      }
    }
  }
  FUN_1446dcdd4(local_48);
  lVar5 = FUN_1411604ae(local_48,0);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (lVar5 == 0) {
    if (0 < *(int *)(lVar2 + 0x14b8)) {
      local_48[0] = &DAT_14cbcffec;
      FUN_140b042ce(lVar2 + 0x1430);
    }
    FUN_14483674a(lVar2 + 0x1288);
  }
  else {
    FUN_14084412e(lVar2 + 0x1288,&DAT_14cbcffec,lVar5);
  }
LAB_140e0e444:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e0e570 FUN_140e0e570 body=240 status=ok
// SIG undefined FUN_140e0e570(void)

void FUN_140e0e570(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  lVar5 = *param_2;
  if ((lVar5 != 0) && (lVar1 = param_2[1], lVar1 != 0)) {
    if ((longlong)*(int *)(lVar5 + 0x40) != 0) {
      lVar6 = *(longlong *)(lVar5 + 0x38);
      lVar5 = (longlong)*(int *)(lVar5 + 0x40) * 0x20 + lVar6;
      do {
        if ((longlong)*(int *)(lVar6 + 0x10) != 0) {
          lVar7 = *(longlong *)(lVar6 + 8);
          lVar8 = (longlong)*(int *)(lVar6 + 0x10) * 0x50 + lVar7;
          do {
            iVar3 = *(int *)(lVar7 + 0x10);
            if ((((*(int *)(lVar1 + 0x50) == 0) ||
                 (iVar3 = *(int *)(*(longlong *)(lVar1 + 0x48) + (longlong)iVar3 * 4), iVar3 != -1))
                && (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)iVar3 * 8),
                   lVar2 != 0)) &&
               ((lVar2 = *(longlong *)(lVar2 + 0x2b8), lVar2 != 0 && (0 < *(int *)(lVar2 + 0x8b8))))
               ) {
              lVar4 = 0;
              do {
                if (*(int *)(lVar2 + 0xf30 + (longlong)*(int *)(lVar2 + 0x5d0 + lVar4 * 4) * 4) == 2
                   ) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = *(undefined8 *)(lVar7 + 0x20 + lVar4 * 8);
                }
                *(undefined8 *)(lVar2 + 0x7b0 + lVar4 * 8) = uVar9;
                lVar4 = lVar4 + 1;
              } while (lVar4 < *(int *)(lVar2 + 0x8b8));
            }
            lVar7 = lVar7 + 0x50;
          } while (lVar7 != lVar8);
        }
        lVar6 = lVar6 + 0x20;
      } while (lVar6 != lVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x000140e0e654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2e0))();
    return;
  }
  return;
}



// FUNCTION 140e0e660 FUN_140e0e660 body=221 status=ok
// SIG undefined FUN_140e0e660(void)

void FUN_140e0e660(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar1 = *param_2;
  iVar4 = *(int *)(lVar1 + 0x40);
  if (0 < iVar4) {
    lVar3 = 0;
    do {
      lVar6 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x38) + 0x10 + lVar3 * 0x20);
      if (lVar6 != 0) {
        lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 8 + lVar3 * 0x20);
        lVar6 = lVar6 * 0x50 + lVar5;
        do {
          lVar2 = param_2[1];
          iVar4 = *(int *)(lVar5 + 0x10);
          if ((((*(int *)(lVar2 + 0x50) == 0) ||
               (iVar4 = *(int *)(*(longlong *)(lVar2 + 0x48) + (longlong)iVar4 * 4), iVar4 != -1))
              && (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 8) + (longlong)iVar4 * 8), lVar2 != 0)
              ) && (lVar2 = *(longlong *)(lVar2 + 0x2b8), lVar2 != 0)) {
            lVar7 = 0;
            do {
              *(undefined8 *)(lVar2 + 0x7b0 + lVar7 * 8) = *(undefined8 *)(lVar5 + 0x20 + lVar7 * 8)
              ;
              lVar7 = lVar7 + 1;
            } while (lVar7 != 6);
          }
          lVar5 = lVar5 + 0x50;
        } while (lVar5 != lVar6);
        iVar4 = *(int *)(lVar1 + 0x40);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar4);
  }
  lVar1 = param_2[1];
  if (0 < *(int *)(lVar1 + 0x10)) {
    lVar3 = 0;
    do {
      lVar6 = *(longlong *)(*(longlong *)(lVar1 + 8) + lVar3 * 8);
      *(undefined8 *)(lVar6 + 0x5b8) = *(undefined8 *)(lVar6 + 0x108);
      *(undefined8 *)(lVar6 + 0x5c0) = *(undefined8 *)(lVar6 + 0x110);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(lVar1 + 0x10));
  }
  return;
}



// FUNCTION 140e0e73e FUN_140e0e73e body=40 status=ok
// SIG undefined FUN_140e0e73e(void)

undefined8 FUN_140e0e73e(undefined8 param_1,int param_2)

{
  FUN_140e0e766();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e0e766 FUN_140e0e766 body=1002 status=ok
// SIG undefined FUN_140e0e766(void)

void FUN_140e0e766(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b222840;
  plVar1 = param_1 + 0x47;
  if (*(int *)(param_1 + 0x48) == 0) {
LAB_140e0e78d:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x48) = 0;
      goto LAB_140e0e78d;
    }
  }
  FUN_144760e21(param_1[0x44],*(undefined4 *)(param_1 + 0x45));
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x41],*(undefined4 *)(param_1 + 0x42));
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x3e],*(undefined4 *)(param_1 + 0x3f));
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_140e0ef9a(param_1 + 0x33,0);
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_140e0ee70(param_1[0x31],*(undefined4 *)(param_1 + 0x32));
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_140e0ecc6(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_140e0ec75(param_1[0x2d],*(undefined4 *)(param_1 + 0x2e));
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    FUN_140e0f122(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  param_1[0x1c] = &PTR_FUN_14b222bd0;
  FUN_144760e21(param_1[0x24],*(undefined4 *)(param_1 + 0x25));
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_140e0ec9b(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  param_1[0x1c] = &PTR_LAB_14b224350;
  FUN_144760e21(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_140e0eebd(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_140e0ed0f(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_140e0ed5a(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140e0ef0a(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0xc;
  if (*(int *)(param_1 + 0xd) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140e0e9e9;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140e0e9e9:
  FUN_140e0eb50(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140e0eb50 FUN_140e0eb50 body=41 status=ok
// SIG undefined FUN_140e0eb50(void)

void FUN_140e0eb50(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140e0eb7a(param_1);
    param_1 = param_1 + 0x90;
  }
  return;
}



// FUNCTION 140e0eb7a FUN_140e0eb7a body=144 status=ok
// SIG undefined FUN_140e0eb7a(void)

void FUN_140e0eb7a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140e0ec0a();
  plVar3 = *(longlong **)(param_1 + 0x80);
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
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e0ec0a FUN_140e0ec0a body=75 status=ok
// SIG undefined FUN_140e0ec0a(void)

void FUN_140e0ec0a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x20) != 0)) {
    puVar2 = *(undefined8 **)(lVar1 + 0x18);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72((longlong *)(lVar1 + 0x18),0,0,0x10);
      *(undefined4 *)(lVar1 + 0x20) = 0;
    }
  }
  return;
}



// FUNCTION 140e0ec56 FUN_140e0ec56 body=31 status=ok
// SIG undefined FUN_140e0ec56(void)

undefined8 FUN_140e0ec56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e0ec75 FUN_140e0ec75 body=38 status=ok
// SIG undefined FUN_140e0ec75(void)

void FUN_140e0ec75(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140e0ee0a(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 140e0ec9b FUN_140e0ec9b body=43 status=ok
// SIG undefined FUN_140e0ec9b(void)

void FUN_140e0ec9b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140e0f188(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 140e0ecc6 FUN_140e0ecc6 body=73 status=ok
// SIG undefined FUN_140e0ecc6(void)

void FUN_140e0ecc6(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e0ed0f FUN_140e0ed0f body=75 status=ok
// SIG undefined FUN_140e0ed0f(void)

void FUN_140e0ed0f(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e0ed5a FUN_140e0ed5a body=75 status=ok
// SIG undefined FUN_140e0ed5a(void)

void FUN_140e0ed5a(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x58);
    do {
      FUN_140e0eda5(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -8) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e0eda5 FUN_140e0eda5 body=100 status=ok
// SIG undefined FUN_140e0eda5(void)

void FUN_140e0eda5(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x10);
    do {
      if ((int)plVar2[1] == 0) {
LAB_140e0edbe:
        if (*plVar2 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar1 = (undefined8 *)*plVar2;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,0);
          FUN_1446efa72(plVar2,0,0,0x10);
          *(undefined4 *)(plVar2 + 1) = 0;
          goto LAB_140e0edbe;
        }
      }
      plVar2 = plVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e0ee0a FUN_140e0ee0a body=102 status=ok
// SIG undefined FUN_140e0ee0a(void)

void FUN_140e0ee0a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b222c30;
  if ((param_1[2] != 0) && (param_1[1] != 0)) {
    FUN_140ccfb62();
    param_1[1] = 0;
  }
  plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x000140e0ee56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e0ee70 FUN_140e0ee70 body=77 status=ok
// SIG undefined FUN_140e0ee70(void)

void FUN_140e0ee70(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e0eebd FUN_140e0eebd body=77 status=ok
// SIG undefined FUN_140e0eebd(void)

void FUN_140e0eebd(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e0ef0a FUN_140e0ef0a body=144 status=ok
// SIG undefined FUN_140e0ef0a(void)

void FUN_140e0ef0a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (plVar1[0x12] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[0xd] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[10] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[5] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[3] != 0) {
        FUN_1400020a8();
      }
      FUN_144760e21(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e0ef9a FUN_140e0ef9a body=389 status=ok
// SIG undefined FUN_140e0ef9a(void)

void FUN_140e0ef9a(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_1457b4098(*local_70 + (longlong)iStack_54 * 0x48 + 0x18);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1403af08a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e0f122 FUN_140e0f122 body=102 status=ok
// SIG undefined FUN_140e0f122(void)

void FUN_140e0f122(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b222b90;
  if ((param_1[2] != 0) && (param_1[1] != 0)) {
    FUN_140ccfb62();
    param_1[1] = 0;
  }
  plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x000140e0f16e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e0f188 FUN_140e0f188 body=143 status=ok
// SIG undefined FUN_140e0f188(void)

void FUN_140e0f188(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b224338;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 3;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 7) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 6)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_1 + 6) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 140e0f258 FUN_140e0f258 body=1263 status=ok
// SIG undefined FUN_140e0f258(void)

void FUN_140e0f258(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined6 **ppuVar3;
  undefined1 uVar4;
  undefined1 auVar5 [8];
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined1 local_140;
  float local_138;
  undefined1 local_130;
  undefined1 local_128;
  undefined4 local_120;
  longlong local_118;
  longlong local_110;
  longlong *local_100;
  undefined6 **local_f8;
  float local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [8];
  undefined2 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  longlong local_a0;
  longlong local_98;
  undefined1 local_90;
  undefined6 local_8c;
  undefined2 uStack_86;
  undefined6 uStack_84;
  undefined8 *local_78;
  undefined6 local_70;
  undefined2 uStack_6a;
  undefined6 local_68;
  undefined2 uStack_62;
  undefined8 local_60;
  undefined6 *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar8 = *(longlong *)(param_1 + 0x30);
  fVar12 = 0.0;
  if (*(char *)(lVar8 + 0x9a9) != '\0') {
    fVar12 = *(float *)(lVar8 + 0x9a4);
  }
  if (*(longlong *)(lVar8 + 0x8f8) == 0) goto LAB_140e0f442;
  local_78 = &local_60;
  local_60 = 0;
  local_58 = &local_70;
  local_68 = SUB86(&local_78,0);
  uStack_62 = (undefined2)((ulonglong)&local_78 >> 0x30);
  local_70 = 0x1474d978e;
  uStack_6a = 0;
  local_f8 = &local_58;
  local_100 = (longlong *)&LAB_144b1e5de;
  FUN_14015e554(*(longlong *)(param_2 + 8) + 0x148,DAT_14caccb08);
  uVar6 = local_60;
  lVar9 = *(longlong *)(param_1 + 0x30);
  lVar8 = *(longlong *)(lVar9 + 0x8f8);
  if (lVar8 == 0) {
LAB_140e0f34c:
    plVar10 = *(longlong **)(lVar9 + 0x8f8);
    if (plVar10 != (longlong *)0x0) {
      lVar8 = FUN_1402576f0();
      if (*(int *)(plVar10[2] + 0x38) < *(int *)(lVar8 + 0x38)) {
        lVar9 = *(longlong *)(param_1 + 0x30);
        goto LAB_140e0f579;
      }
      lVar9 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
          lVar8 + 0x30) goto LAB_140e0f579;
LAB_140e0f388:
      lVar8 = lVar9 + 0x994;
      ppuVar3 = (undefined6 **)(lVar9 + 0x984);
      uVar4 = *(undefined1 *)(lVar9 + 0x9a8);
      local_e8 = (undefined1  [8])0x3f800000;
      local_e0 = 0x100;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = (longlong *)0x0;
      local_90 = 0;
      local_8c = 0;
      uStack_86 = 0;
      uStack_84 = 0;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(plVar10);
        lVar9 = *(longlong *)(param_1 + 0x30);
      }
      auVar5 = local_e8;
      local_ec = 0x3f800000;
      local_e8[4] = uVar4;
      local_e8._6_2_ = auVar5._6_2_;
      local_e8[5] = 0;
      local_a0 = lVar9 + 0x988;
      local_68 = 0;
      local_70 = 0;
      uStack_6a = 0;
      local_100 = plVar10;
      local_f8 = ppuVar3;
      local_f0 = fVar12;
      local_98 = lVar8;
      FUN_14486b6e0(uVar6);
      lVar8 = *(longlong *)(param_1 + 0x30);
      if (*(char *)(lVar8 + 0x9a8) != '\0') goto LAB_140e0f442;
      if ((0.0 <= fVar12 * *(float *)(plVar10 + 0x16)) || (0.0 < *(float *)(lVar8 + 0x984))) {
        if ((fVar12 * *(float *)(plVar10 + 0x16) <= 0.0) ||
           (fVar12 = *(float *)(lVar8 + 0x984),
           fVar11 = (float)(**(code **)(*plVar10 + 0x2b0))(plVar10), fVar12 < fVar11))
        goto LAB_140e0f442;
        lVar8 = *(longlong *)(param_1 + 0x30);
      }
LAB_140e0f6fe:
      *(undefined1 *)(lVar8 + 0x9a9) = 0;
      goto LAB_140e0f442;
    }
LAB_140e0f579:
    plVar10 = *(longlong **)(lVar9 + 0x8f8);
    if (plVar10 != (longlong *)0x0) {
      lVar8 = FUN_145ad8144();
      if (*(int *)(plVar10[2] + 0x38) < *(int *)(lVar8 + 0x38)) {
        lVar9 = *(longlong *)(param_1 + 0x30);
      }
      else {
        lVar9 = *(longlong *)(param_1 + 0x30);
        if (*(longlong *)(*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
            == lVar8 + 0x30) goto LAB_140e0f388;
      }
    }
    plVar10 = *(longlong **)(lVar9 + 0x8f8);
    if (plVar10 != (longlong *)0x0) {
      lVar8 = FUN_140d29c90();
      if (*(int *)(plVar10[2] + 0x38) < *(int *)(lVar8 + 0x38)) {
        lVar9 = *(longlong *)(param_1 + 0x30);
      }
      else {
        lVar9 = *(longlong *)(param_1 + 0x30);
        if (*(longlong *)(*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
            == lVar8 + 0x30) goto LAB_140e0f388;
      }
    }
    lVar8 = *(longlong *)(lVar9 + 0x8f8);
    if (lVar8 != 0) {
      lVar9 = FUN_144a718e6();
      if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
           ) == lVar9 + 0x30)) {
        if (0 < *(int *)(lVar8 + 0x170)) {
          FUN_14792cbb0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
        }
        lVar8 = FUN_1457b4210(*(undefined8 *)(param_1 + 0x30));
        if (lVar8 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x984) = *(undefined4 *)(lVar8 + 0x40);
          lVar9 = *(longlong *)(param_1 + 0x30);
          *(undefined4 *)(lVar9 + 0x990) = *(undefined4 *)(lVar8 + 0x4c);
          *(undefined8 *)(lVar9 + 0x988) = *(undefined8 *)(lVar8 + 0x44);
          goto LAB_140e0f442;
        }
        lVar8 = *(longlong *)(param_1 + 0x30);
        if (*(char *)(lVar8 + 0x9a9) != '\x01') goto LAB_140e0f442;
        goto LAB_140e0f6fe;
      }
    }
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x8f8);
    if (lVar8 == 0) goto LAB_140e0f442;
    lVar9 = FUN_1457b412a();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        != lVar9 + 0x30)) goto LAB_140e0f442;
    FUN_1457b4270(&local_100,lVar8,0x3f800000);
    local_a0 = *(longlong *)(param_1 + 0x30);
  }
  else {
    lVar7 = FUN_1405b04b6();
    if (*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) {
      lVar9 = *(longlong *)(param_1 + 0x30);
      goto LAB_140e0f34c;
    }
    lVar9 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30) goto LAB_140e0f34c;
    local_110 = lVar9 + 0x994;
    local_118 = lVar9 + 0x984;
    local_140 = *(undefined1 *)(lVar9 + 0x9a8);
    local_148 = lVar9 + 0x968;
    local_128 = 0;
    local_130 = 0;
    local_120 = 0x3f800000;
    local_138 = fVar12;
    FUN_144a717c8(&local_100,lVar8,lVar9 + 0x940,lVar9 + 0x958);
    local_a0 = *(longlong *)(param_1 + 0x30);
  }
  local_68 = 0;
  uStack_6a = 0;
  local_70 = 0;
  local_a0 = local_a0 + 0x988;
  FUN_14486b6e0(uVar6,&local_100);
  plVar10 = local_c8;
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
LAB_140e0f442:
  if ((local_50 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e0f748 FUN_140e0f748 body=172 status=ok
// SIG undefined FUN_140e0f748(void)

longlong * FUN_140e0f748(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = param_2;
  *(int *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x10) + 8);
  cVar2 = (param_3 == 1) * '\x03';
  if (param_3 == 2) {
    cVar2 = '\x02';
  }
  iVar3 = (**(code **)(*plVar1 + 0x48))(plVar1,cVar2,&DAT_14a348990,param_1 + 2);
  if (iVar3 < 0) {
    local_30 = &local_28;
    local_28 = 0;
    uStack_20 = 0;
    local_38 = 0;
    FUN_145763094(iVar3,
                  "Device->GetDevice()->CreateCommandAllocator(GetD3DCommandListType(QueueType), IID_PPV_ARGS(CommandAllocator.GetInitReference()))"
                  ,".\\Runtime/D3D12RHI/Private/D3D12CommandList.cpp",0xa0);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e0f7f6 FUN_140e0f7f6 body=194 status=ok
// SIG undefined FUN_140e0f7f6(void)

void FUN_140e0f7f6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong lVar6;
  
  plVar4 = (longlong *)
           FUN_140e0f8b8(param_3,*(undefined1 *)(param_1 + 0x10),param_1 + 0x18,param_1 + 0x50,
                         param_1 + 0x70);
  puVar5 = &DAT_14cb7c308;
  if ((((plVar4 != (longlong *)0x0) && (lVar2 = *plVar4, lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x14) != 0)) &&
     ((uVar1 = *(uint *)(lVar2 + 0x10), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
    lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar6 != 0) &&
        ((*(int *)(lVar6 + 0x10) == *(int *)(lVar2 + 0x14) &&
         ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) && (*(longlong *)(lVar2 + 0x18) != 0)) {
      cVar3 = FUN_140114204(lVar2 + 0x20);
      if (cVar3 != '\0') {
        puVar5 = &DAT_14cb7bfe0;
        if (*plVar4 != 0) {
          puVar5 = (undefined1 *)(*plVar4 + 0x58);
        }
      }
    }
  }
  FUN_1403218c0(puVar5,param_1 + 0x5c);
  return;
}



// FUNCTION 140e0f8b8 FUN_140e0f8b8 body=1591 status=ok
// SIG undefined FUN_140e0f8b8(void)

longlong *
FUN_140e0f8b8(undefined8 param_1,char param_2,undefined8 *param_3,undefined8 *param_4,
             longlong *param_5)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_168 [44];
  int local_13c;
  undefined4 uStack_138;
  int local_134;
  undefined8 local_130;
  undefined4 local_128;
  int local_124 [2];
  int local_11c;
  int local_118 [2];
  int local_110;
  int local_10c [2];
  int local_104;
  int local_100 [2];
  int local_f8;
  int local_f4 [2];
  int local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  char local_a8;
  undefined1 uStack_a7;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar5 = (longlong *)FUN_1447262c2();
  if ((plVar5 == (longlong *)0x0) || (lVar6 = (**(code **)(*plVar5 + 0x180))(plVar5), lVar6 == 0)) {
    plVar5 = (longlong *)0x0;
    goto LAB_140e0fb1d;
  }
  bVar1 = *(byte *)(lVar6 + 0x152);
  if ((bVar1 != 1) &&
     ((plVar5 = (longlong *)0x0, 6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0))))
  goto LAB_140e0fb1d;
  local_a8 = '\0';
  uStack_a7 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  if (param_2 == '\0') {
    uStack_a0 = *(undefined4 *)(param_3 + 1);
    uVar8 = *param_3;
    local_a8 = (char)uVar8;
    uStack_a7 = (undefined1)((ulonglong)uVar8 >> 8);
    uStack_a6 = (undefined2)((ulonglong)uVar8 >> 0x10);
    uStack_a4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    FUN_1447715ec(&local_98,param_3 + 2);
  }
  else {
    plVar5 = (longlong *)FUN_1447262c2(param_1);
    if (plVar5 != (longlong *)0x0) {
      uVar8 = FUN_140427846();
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar8);
      if (plVar5 != (longlong *)0x0) {
        uVar8 = FUN_140427846();
        plVar9 = (longlong *)FUN_144718840(plVar5,uVar8);
        if (plVar9 != (longlong *)0x0 && plVar5 != plVar9) {
          (**(code **)(*plVar9 + 0x50))(plVar9,&local_e8);
          FUN_1411b8130(&local_a8,&local_e8);
          if (CONCAT44(uStack_bc,local_c0) != 0) {
            FUN_1400020a8();
          }
          local_130 = *param_4;
          local_128 = *(undefined4 *)(param_4 + 1);
          FUN_144928d62(&local_98,5);
        }
      }
    }
  }
  if (local_a8 == '\x01') {
    FUN_144a659ac(&local_98,&local_e8,1);
    if (((uint)local_e8 == (int)DAT_14cb7bb98) && ((int)local_e0 == DAT_14cb7bba0)) {
      FUN_140fda471(&local_13c,lVar6);
      if (local_13c == 0) {
        local_e8 = CONCAT44(DAT_14cb7bb98._4_4_,(int)DAT_14cb7bb98);
        local_134 = DAT_14cb7bba0;
      }
      else {
        local_e8 = CONCAT44(uStack_138,local_13c);
      }
      local_e0 = CONCAT44(local_e0._4_4_,local_134);
      FUN_144928d62(&local_98,1,&local_e8);
    }
  }
  cVar3 = FUN_140114204(&local_a8);
  if (cVar3 == '\0') {
    plVar5 = (longlong *)0x0;
  }
  else {
    uVar2 = *(uint *)(lVar6 + 0xc);
    local_e8 = (ulonglong)uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar4 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar4 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar4 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar11;
        iVar4 = 0;
      }
      UNLOCK();
      uVar2 = (uint)local_e8;
      if (bVar13) {
        iVar4 = iVar11;
      }
    }
    local_e8._0_4_ = uVar2;
    local_e8 = CONCAT44(iVar4,(uint)local_e8);
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_e0 = CONCAT44(uStack_a4,CONCAT22(uStack_a6,CONCAT11(uStack_a7,local_a8)));
    local_d8 = uStack_a0;
    FUN_1447715ec(&local_d0,&local_98);
    uVar2 = (uint)local_e8;
    uVar10 = local_e8._4_4_;
    if ((char)local_e0 == '\x01') {
      FUN_1447a97f4(&local_70,&local_d0);
      if (0 < local_70._4_4_) {
        iVar4 = 0;
        do {
          FUN_144a7c8fe(&local_70,local_f4,iVar4,1);
          if ((((((local_f4[0] == DAT_14cb7beb0) && (local_ec == DAT_14cb7beb8)) ||
                ((FUN_144a7c8fe(&local_70,local_100,iVar4,1), local_100[0] == DAT_14cb7bec8 &&
                 (local_f8 == DAT_14cb7bed0)))) ||
               ((FUN_144a7c8fe(&local_70,local_10c,iVar4,1), local_10c[0] == DAT_14cb7bee0 &&
                (local_104 == DAT_14cb7bee8)))) ||
              ((FUN_144a7c8fe(&local_70,local_118,iVar4,1), local_118[0] == DAT_14cb7bef8 &&
               (local_110 == DAT_14cb7bf00)))) ||
             ((FUN_144a7c8fe(&local_70,local_124,iVar4,1), local_124[0] == DAT_14cb7bf10 &&
              (local_11c == DAT_14cb7bf18)))) {
            FUN_1402b5374(&local_70,iVar4,0);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_70._4_4_);
      }
      iVar4 = (int)local_70;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      iVar4 = (int)local_d0;
    }
    uVar10 = uVar10 ^ uVar2;
    uVar10 = iVar4 + (uVar10 >> 2) + uVar10 * 0x40 + 0x9e3779b9 ^ uVar10;
    iVar4 = FUN_140e0fef0(param_5,uVar10,&local_e8);
    if (iVar4 == -1) {
LAB_140e0fbbb:
      local_70 = &local_e8;
      FUN_1457b446c(param_5,local_f4,uVar10);
      lVar12 = *param_5;
      lVar7 = (longlong)local_f4[0] * 0x58;
    }
    else {
      lVar12 = *param_5;
      lVar7 = (longlong)iVar4 * 0x58;
      if (lVar12 + lVar7 == 0) goto LAB_140e0fbbb;
    }
    plVar5 = (longlong *)(lVar12 + lVar7 + 0x40);
    lVar12 = *plVar5;
    if ((((((lVar12 == 0) || (*(int *)(lVar12 + 0x14) == 0)) ||
          (uVar2 = *(uint *)(lVar12 + 0x10), (int)uVar2 < 0)) ||
         ((DAT_14c9647dc <= (int)uVar2 ||
          (lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar7 == 0)))) ||
        ((*(int *)(lVar7 + 0x10) != *(int *)(lVar12 + 0x14) ||
         (((*(uint *)(lVar7 + 8) & 0x10200000) != 0 || (*(longlong *)(lVar12 + 0x18) == 0)))))) ||
       (cVar3 = FUN_140114204(lVar12 + 0x20), cVar3 == '\0')) {
      FUN_1457b4326(param_5);
      FUN_1457b42e4(plVar5,&local_a8,lVar6);
    }
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
LAB_140e0fb1d:
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5;
}



// FUNCTION 140e0fef0 FUN_140e0fef0 body=144 status=ok
// SIG undefined FUN_140e0fef0(void)

int FUN_140e0fef0(longlong *param_1,uint param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar4 = *param_1;
      do {
        lVar4 = lVar4 + (longlong)iVar3 * 0x58;
        cVar1 = FUN_140bf1e82(lVar4,param_3);
        if ((cVar1 != '\0') && (cVar1 = FUN_14493b798(lVar4 + 8,param_3 + 8), cVar1 != '\0')) {
          return iVar3;
        }
        lVar4 = *param_1;
        iVar3 = *(int *)(lVar4 + 0x50 + (longlong)iVar3 * 0x58);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 140e0ff80 FUN_140e0ff80 body=545 status=ok
// SIG undefined FUN_140e0ff80(void)

void FUN_140e0ff80(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  int local_c8;
  undefined1 local_c0 [4];
  undefined8 local_bc;
  undefined4 local_b4;
  uint local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong *local_a0;
  int local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined2 local_2f;
  undefined1 local_2d;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  FUN_1447715ec(param_1 + 0x30,param_2 + 2);
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(param_1 + 0x10) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
  }
  *(int *)(param_1 + 0x14) = iVar2;
  local_c0[0] = 0;
  local_bc = 0;
  local_b4 = 0;
  local_b0 = local_b0 & 0xffffff00;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_90 = 0xc69c4000;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_2f = 1;
  local_2d = 0;
  local_2c = 0;
  FUN_14654d12e(&local_d0,param_1);
  local_a0 = local_d0;
  local_98 = local_c8;
  lVar4 = FUN_140149a73(param_3,0);
  if (lVar4 == 0) {
    local_2c = 2;
  }
  else {
    FUN_140983ba6(param_1 + 0x20,lVar4,local_c0);
    if (local_2c == 1) {
      if (local_a0 == (longlong *)0x0 || local_98 == 0) {
        local_d0 = (longlong *)0x0;
      }
      else {
        (**(code **)(*local_a0 + 0x38))(local_a0,&local_d0);
      }
      *(longlong **)(param_1 + 0x18) = local_d0;
      *(ulonglong *)(param_1 + 0x58) = CONCAT44(uStack_ac,local_b0);
      *(ulonglong *)(param_1 + 0x60) = CONCAT44(uStack_a4,uStack_a8);
      *(undefined4 *)(param_1 + 0x68) = local_90;
    }
  }
  FUN_1409838b8(local_c0);
  if ((local_28 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e101a2 FUN_140e101a2 body=51 status=ok
// SIG undefined FUN_140e101a2(void)

void FUN_140e101a2(longlong param_1)

{
  byte bVar1;
  
  bVar1 = FUN_140e101d6();
  *(byte *)(param_1 + 0x5b4) =
       *(byte *)(param_1 + 0x5b4) & 0xdf | (bVar1 | (*(byte *)(param_1 + 0x5b4) & 0x20) >> 5) << 5;
  return;
}



// FUNCTION 140e101d6 FUN_140e101d6 body=1148 status=ok
// SIG undefined FUN_140e101d6(void)

ulonglong FUN_140e101d6(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 unaff_RBP;
  undefined7 uVar8;
  ulonglong uVar7;
  undefined1 auStack_218 [32];
  double *local_1f8;
  longlong local_1f0;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined8 local_198;
  double local_190;
  double local_188;
  undefined4 local_f4;
  byte local_eb;
  undefined4 local_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_98 = *param_2;
  uStack_90 = param_2[1];
  local_88 = param_2[2];
  (**(code **)(*param_1 + 0x550))(local_98,&local_78);
  if ((local_78 != 0.0) || (NAN(local_78))) {
LAB_140e1027c:
    plVar2 = (longlong *)param_1[0x23];
    if ((plVar2 != (longlong *)0x0) && (lVar3 = *(longlong *)(param_1[0x22] + 0xa8), lVar3 != 0)) {
      (**(code **)(*plVar2 + 0x820))(plVar2,&local_1b0,DAT_14c76140c);
      uVar5 = (**(code **)(*(longlong *)param_1[0x23] + 0x580))();
      local_188 = *(double *)(param_3 + 0x80) + local_68;
      local_190 = *(double *)(param_3 + 0x78) + local_70;
      local_198 = *(double *)(param_3 + 0x70) + local_78;
      local_1f8 = &local_1b0;
      local_1f0 = lVar3;
      cVar4 = (**(code **)(*param_1 + 0x4e0))(param_1,&local_198,param_4,uVar5);
      uVar8 = (undefined7)((ulonglong)unaff_RBP >> 8);
      if (cVar4 == '\0') {
        local_1f0 = CONCAT71(local_1f0._1_7_,1);
        local_1f8 = (double *)0x0;
        (**(code **)(*param_1 + 0x4e8))(param_1,&local_78,param_4,0);
        uVar7 = CONCAT71(uVar8,1);
        goto LAB_140e1051d;
      }
      uVar1 = *(uint *)(param_1 + 0x24);
      *(uint *)(param_1 + 0x24) = uVar1 & 0xfffffffb;
      memset(&local_198,0,0x100);
      local_c8 = 0xffffffff;
      local_f4 = 0xffffffff;
      local_198 = (double)CONCAT44(0x3f800000,(undefined4)local_198);
      local_1f0 = CONCAT71(local_1f0._1_7_,1);
      uVar7 = CONCAT71(uVar8,1);
      local_1f8 = (double *)&local_198;
      cVar4 = (**(code **)(*param_1 + 0x4e8))(param_1,&local_78,param_4,1);
      if (cVar4 == '\0') {
        if ((local_eb & 2) != 0) {
          (**(code **)(*param_1 + 0x4f0))(param_1,&local_1b0,&local_198);
          local_1b8 = local_68 + local_1a0;
          local_1c0 = local_70 + local_1a8;
          local_1c8 = local_78 + local_1b0;
          if ((((local_1b0 == local_78) && (!NAN(local_1b0) && !NAN(local_78))) &&
              (local_1a8 == local_70)) && (!NAN(local_1a8) && !NAN(local_70))) {
            if ((local_1a0 == local_68) && (!NAN(local_1a0) && !NAN(local_68))) goto LAB_140e1048e;
          }
          if (((local_1c8 == 0.0) && ((!NAN(local_1c8) && (local_1c0 == 0.0)))) && (!NAN(local_1c0))
             ) {
            if ((local_1b8 == 0.0) && (!NAN(local_1b8))) goto LAB_140e1048e;
          }
          local_1f0 = CONCAT71(local_1f0._1_7_,1);
          local_1f8 = (double *)0x0;
          uVar7 = CONCAT71(uVar8,1);
          cVar4 = (**(code **)(*param_1 + 0x4e8))(param_1,&local_1c8,param_4,1);
          if (cVar4 != '\0') goto LAB_140e10647;
        }
LAB_140e1048e:
        local_1d0 = *(double *)(param_3 + 0x98) - *(double *)(param_3 + 0x80);
        local_1d8 = *(double *)(param_3 + 0x90) - *(double *)(param_3 + 0x78);
        local_1e0 = *(double *)(param_3 + 0x88) - *(double *)(param_3 + 0x70);
        (**(code **)(*param_1 + 0x550))(param_1,&local_1b0);
        if (((((local_1b0 != 0.0) || (NAN(local_1b0))) || (local_1a8 != 0.0)) ||
            ((NAN(local_1a8) || (local_1a0 != 0.0)))) || (NAN(local_1a0))) {
          local_1b8 = local_1a0 + local_68;
          local_1c0 = local_1a8 + local_70;
          local_1c8 = local_1b0 + local_78;
          local_1f0 = CONCAT71(local_1f0._1_7_,1);
          local_1f8 = (double *)0x0;
          uVar7 = CONCAT71(uVar8,1);
          cVar4 = (**(code **)(*param_1 + 0x4e8))(param_1,&local_1c8,param_4,1);
          if (cVar4 == '\0') {
            if (local_1a0 * local_68 + local_1b0 * local_78 + local_1a8 * local_70 <= 0.0)
            goto LAB_140e10514;
            local_1f0 = CONCAT71(local_1f0._1_7_,1);
            local_1f8 = (double *)0x0;
            uVar6 = (**(code **)(*param_1 + 0x4e8))(param_1,&local_1b0,param_4,1);
            uVar7 = (ulonglong)uVar6;
          }
        }
        else {
LAB_140e10514:
          uVar7 = 0;
        }
      }
LAB_140e10647:
      *(uint *)(param_1 + 0x24) = uVar1;
      goto LAB_140e1051d;
    }
  }
  else {
    if ((local_70 != 0.0) || (NAN(local_70))) goto LAB_140e1027c;
    if ((local_68 != 0.0) || (NAN(local_68))) goto LAB_140e1027c;
  }
  uVar7 = 0;
LAB_140e1051d:
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e10654 FUN_140e10654 body=144 status=ok
// SIG undefined FUN_140e10654(void)

longlong FUN_140e10654(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_140d080c0();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_140e106aa;
  }
  local_38 = 0;
  local_30 = param_3;
  FUN_140e106e6(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_140e106aa:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + lVar2 * 0x28 + 0x10;
}



// FUNCTION 140e106e6 FUN_140e106e6 body=298 status=ok
// SIG undefined FUN_140e106e6(void)

undefined4 *
FUN_140e106e6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140d08188(param_1,local_58);
  FUN_140e10812(param_4,local_50);
  *(undefined4 *)(local_50 + 0x20) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_140d08036(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_50 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0x20) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_140d0836e(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e10812 FUN_140e10812 body=101 status=ok
// SIG undefined FUN_140e10812(void)

undefined8 * FUN_140e10812(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
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
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_1447a1747(0,0);
  return param_2;
}



// FUNCTION 140e10878 FUN_140e10878 body=109 status=ok
// SIG undefined FUN_140e10878(void)

void FUN_140e10878(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0xa40) != 0) {
    local_18 = param_3[2];
    local_28 = *param_3;
    uStack_20 = param_3[1];
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = *(undefined8 *)(param_2 + 4);
    FUN_140e108e6(*(longlong *)(param_1 + 0xa40),&local_48,&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e108e6 FUN_140e108e6 body=286 status=ok
// SIG undefined FUN_140e108e6(void)

void FUN_140e108e6(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = param_2[2];
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    local_48 = *(undefined8 *)(param_3 + 4);
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    puVar3 = (undefined8 *)FUN_14001cc68(0x48,8);
    *puVar3 = &PTR_LAB_149f6d4c0;
    puVar3[1] = param_1;
    puVar3[2] = local_38;
    puVar3[3] = uStack_30;
    puVar3[4] = local_28;
    puVar3[7] = local_48;
    puVar3[5] = CONCAT44(uStack_54,local_58);
    puVar3[6] = CONCAT44(uStack_4c,uStack_50);
    puVar3[8] = lVar1;
    pcVar4 = FUN_142a2604c;
    if (puVar3 + 1 == (longlong *)0x0) {
      pcVar4 = (code *)0x0;
    }
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = pcVar4;
    puVar2[0xc] = puVar3;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e10a14 FUN_140e10a14 body=31 status=ok
// SIG undefined FUN_140e10a14(void)

undefined8 FUN_140e10a14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e10a34 FUN_140e10a34 body=48 status=ok
// SIG undefined FUN_140e10a34(void)

void FUN_140e10a34(longlong param_1)

{
  FUN_1405f1eac();
  FUN_1407c0b34(param_1 + 0x428,param_1 + 0x3c8,param_1);
  FUN_140e10a64(param_1);
  return;
}



// FUNCTION 140e10a64 FUN_140e10a64 body=192 status=ok
// SIG undefined FUN_140e10a64(void)

void FUN_140e10a64(longlong param_1)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x3a8);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar1 + 0x940))(plVar1,0);
  (**(code **)(*plVar1 + 0x730))(plVar1,1);
  if (*(char *)(param_1 + 0x3d0) == '\x01') {
    if (*(char *)(param_1 + 0x3d1) == '\x02') {
      (**(code **)(*plVar1 + 0x720))(plVar1,3);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x938);
      uVar2 = 2;
    }
    else {
      (**(code **)(*plVar1 + 0x720))(plVar1,1);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x938);
      uVar2 = 1;
    }
                    /* WARNING: Could not recover jumptable at 0x000140e10ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,6,uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140e10b19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x720))(plVar1,0);
  return;
}



// FUNCTION 140e10b24 FUN_140e10b24 body=287 status=ok
// SIG undefined FUN_140e10b24(void)

void FUN_140e10b24(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_140e10c43(*(undefined8 *)(param_1 + 0x230),*(undefined4 *)(param_1 + 0x238));
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x1c8);
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
  FUN_140c4e387(*(undefined8 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a8));
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x120));
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  lVar4 = 0x108;
  do {
    if (*(longlong *)(param_1 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x28;
  } while (lVar4 != 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e10c43 FUN_140e10c43 body=67 status=ok
// SIG undefined FUN_140e10c43(void)

void FUN_140e10c43(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x50);
    do {
      *puVar1 = 0;
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_1410a2dfa(puVar1 + -0x12);
      puVar1 = puVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e10c94 FUN_140e10c94 body=64 status=ok
// SIG undefined FUN_140e10c94(void)

undefined8 * FUN_140e10c94(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b490d30;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e10cd4 FUN_140e10cd4 body=172 status=ok
// SIG undefined FUN_140e10cd4(void)

undefined8 FUN_140e10cd4(ulonglong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined7 uVar7;
  byte bVar8;
  
  bVar8 = (byte)param_1;
  if (*(int *)(param_2 + 0x74) == 0) {
LAB_140e10d7c:
    bVar8 = (byte)param_1;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x70);
    bVar3 = 0;
    uVar7 = 0;
    if (-1 < (int)uVar1) {
      if (DAT_14c9647dc <= (int)uVar1) goto LAB_140e10d6e;
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      param_1 = DAT_14c9647c8;
      if ((((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_2 + 0x74))) &&
          (param_1 = (ulonglong)*(uint *)(plVar4 + 1), (*(uint *)(plVar4 + 1) & 0x10200000) == 0))
         && (lVar2 = *plVar4, lVar2 != 0)) {
        lVar5 = FUN_1401726e6();
        param_1 = *(ulonglong *)(lVar2 + 0x10);
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(param_1 + 0x38)) &&
           (param_1 = *(ulonglong *)(param_1 + 0x30),
           *(longlong *)(param_1 + (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          uVar6 = FUN_140e10d80(lVar2,param_2,param_3);
          bVar8 = (byte)uVar6;
          uVar7 = (undefined7)((ulonglong)uVar6 >> 8);
          bVar3 = 1;
          goto LAB_140e10d6e;
        }
      }
      goto LAB_140e10d7c;
    }
  }
  bVar3 = 0;
  uVar7 = 0;
LAB_140e10d6e:
  return CONCAT71(uVar7,bVar3 & bVar8);
}



// FUNCTION 140e10d80 FUN_140e10d80 body=921 status=ok
// SIG undefined FUN_140e10d80(void)

undefined4 FUN_140e10d80(longlong param_1,longlong param_2,float param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auStack_128 [36];
  undefined4 local_104;
  undefined1 local_100 [128];
  undefined1 *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x660) + 8) + 0x1a8) & 0x20) == 0) {
    fVar2 = *(float *)(param_2 + 0x28);
    fVar3 = *(float *)(param_2 + 0x30);
    local_80 = (undefined1 *)0x0;
    local_78 = 0x1000000000;
    if ((longlong)*(int *)(param_1 + 0x680) != 0) {
      lVar22 = *(longlong *)(param_1 + 0x678);
      lVar15 = lVar22 + (longlong)*(int *)(param_1 + 0x680) * 0x48;
      plVar1 = (longlong *)(param_1 + 0x688);
      do {
        lVar16 = FUN_14485cccc(lVar22);
        if (lVar16 != 0) {
          local_104 = *(undefined4 *)(lVar16 + 0xc);
          pfVar17 = (float *)FUN_14882a8dc(param_2 + 0x98);
          puVar18 = local_80;
          if (local_80 == (undefined1 *)0x0) {
            puVar18 = local_100;
          }
          if ((longlong)(int)local_78 != 0) {
            lVar23 = 0;
            do {
              if (*(longlong *)(puVar18 + lVar23) == lVar16) {
                iVar21 = *(int *)(param_1 + 0x690);
                *(uint *)(param_1 + 0x690) = iVar21 + 1U;
                if (*(uint *)(param_1 + 0x694) < iVar21 + 1U) {
                  FUN_1414fa4c8(plVar1,iVar21);
                }
                lVar16 = *plVar1 + (longlong)iVar21 * 0x48;
                FUN_144b23946(lVar16,lVar22);
                uVar5 = *(undefined4 *)(lVar22 + 0x24);
                uVar6 = *(undefined4 *)(lVar22 + 0x28);
                uVar7 = *(undefined4 *)(lVar22 + 0x2c);
                uVar12 = *(undefined8 *)(lVar22 + 0x30);
                uVar13 = *(undefined8 *)(lVar22 + 0x38);
                *(undefined4 *)(lVar16 + 0x20) = *(undefined4 *)(lVar22 + 0x20);
                *(undefined4 *)(lVar16 + 0x24) = uVar5;
                *(undefined4 *)(lVar16 + 0x28) = uVar6;
                *(undefined4 *)(lVar16 + 0x2c) = uVar7;
                *(undefined8 *)(lVar16 + 0x30) = uVar12;
                *(undefined8 *)(lVar16 + 0x38) = uVar13;
                *(undefined1 *)(lVar16 + 0x40) = *(undefined1 *)(lVar22 + 0x40);
                goto LAB_140e10f58;
              }
              lVar23 = lVar23 + 8;
            } while ((longlong)(int)local_78 * 8 != lVar23);
          }
          if (fVar2 / fVar3 <= param_3 - *pfVar17) {
            *pfVar17 = param_3;
            iVar21 = *(int *)(param_1 + 0x690);
            *(uint *)(param_1 + 0x690) = iVar21 + 1U;
            if (*(uint *)(param_1 + 0x694) < iVar21 + 1U) {
              FUN_1414fa4c8(plVar1,iVar21);
            }
            lVar23 = *plVar1 + (longlong)iVar21 * 0x48;
            FUN_144b23946(lVar23,lVar22);
            uVar19 = local_78;
            uVar5 = *(undefined4 *)(lVar22 + 0x24);
            uVar6 = *(undefined4 *)(lVar22 + 0x28);
            uVar7 = *(undefined4 *)(lVar22 + 0x2c);
            uVar8 = *(undefined4 *)(lVar22 + 0x30);
            uVar9 = *(undefined4 *)(lVar22 + 0x34);
            uVar10 = *(undefined4 *)(lVar22 + 0x38);
            uVar11 = *(undefined4 *)(lVar22 + 0x3c);
            *(undefined4 *)(lVar23 + 0x20) = *(undefined4 *)(lVar22 + 0x20);
            *(undefined4 *)(lVar23 + 0x24) = uVar5;
            *(undefined4 *)(lVar23 + 0x28) = uVar6;
            *(undefined4 *)(lVar23 + 0x2c) = uVar7;
            *(undefined4 *)(lVar23 + 0x30) = uVar8;
            *(undefined4 *)(lVar23 + 0x34) = uVar9;
            *(undefined4 *)(lVar23 + 0x38) = uVar10;
            *(undefined4 *)(lVar23 + 0x3c) = uVar11;
            *(undefined1 *)(lVar23 + 0x40) = *(undefined1 *)(lVar22 + 0x40);
            lVar23 = (longlong)(int)local_78;
            uVar14 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,uVar14);
            if (local_78._4_4_ < uVar14) {
              FUN_147e216c0(local_100,uVar19 & 0xffffffff);
            }
            puVar18 = local_80;
            if (local_80 == (undefined1 *)0x0) {
              puVar18 = local_100;
            }
            *(longlong *)(puVar18 + lVar23 * 8) = lVar16;
          }
        }
LAB_140e10f58:
        lVar22 = lVar22 + 0x48;
      } while (lVar22 != lVar15);
      if (local_80 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar21 = *(int *)(param_1 + 0x690);
  }
  else {
    uVar19 = (longlong)*(int *)(param_1 + 0x680);
    if (0 < (longlong)*(int *)(param_1 + 0x680)) {
      do {
        uVar20 = uVar19 - 1;
        lVar15 = FUN_14485cccc(uVar20 * 0x48 + *(longlong *)(param_1 + 0x678));
        if ((lVar15 != 0) && ((longlong)*(int *)(param_2 + 0x80) != 0)) {
          lVar22 = 0;
          do {
            if (*(int *)(*(longlong *)(param_2 + 0x78) + lVar22) == *(int *)(lVar15 + 0xc)) {
              uVar14 = *(uint *)(param_1 + 0x680);
              if (uVar19 != uVar14) {
                iVar21 = uVar14 - (int)uVar19;
                if (0 < iVar21) {
                  iVar21 = 1;
                }
                memmove((void *)(*(longlong *)(param_1 + 0x678) + uVar20 * 0x48),
                        (void *)(*(longlong *)(param_1 + 0x678) +
                                (longlong)(int)(uVar14 - iVar21) * 0x48),(longlong)iVar21 * 0x48);
                uVar14 = *(uint *)(param_1 + 0x680);
              }
              *(uint *)(param_1 + 0x680) = uVar14 - 1;
              break;
            }
            lVar22 = lVar22 + 4;
          } while ((longlong)*(int *)(param_2 + 0x80) * 4 != lVar22);
        }
        bVar4 = 1 < (longlong)uVar19;
        uVar19 = uVar20;
      } while (bVar4);
    }
    if (*(longlong *)(param_1 + 0x688) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x688) = *(undefined8 *)(param_1 + 0x678);
    *(undefined8 *)(param_1 + 0x678) = 0;
    iVar21 = *(int *)(param_1 + 0x680);
    *(int *)(param_1 + 0x690) = iVar21;
    *(undefined4 *)(param_1 + 0x694) = *(undefined4 *)(param_1 + 0x684);
    *(undefined8 *)(param_1 + 0x680) = 0;
  }
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT31((int3)((uint)iVar21 >> 8),0 < iVar21);
}



// FUNCTION 140e1111a FUN_140e1111a body=38 status=ok
// SIG undefined FUN_140e1111a(void)

undefined8 FUN_140e1111a(undefined8 param_1,int param_2)

{
  FUN_140e11140();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e11140 FUN_140e11140 body=73 status=ok
// SIG undefined FUN_140e11140(void)

void FUN_140e11140(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b673b10;
  plVar3 = (longlong *)param_1[5];
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
  FUN_140e1118a(param_1);
  return;
}



// FUNCTION 140e1118a FUN_140e1118a body=65 status=ok
// SIG undefined FUN_140e1118a(void)

void FUN_140e1118a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b6795f0;
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
                    /* WARNING: Could not recover jumptable at 0x000140e111c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e111cc FUN_140e111cc body=40 status=ok
// SIG undefined FUN_140e111cc(void)

undefined8 FUN_140e111cc(undefined8 param_1,int param_2)

{
  FUN_140e111f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e111f4 FUN_140e111f4 body=55 status=ok
// SIG undefined FUN_140e111f4(void)

void FUN_140e111f4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140e1122c FUN_140e1122c body=475 status=ok
// SIG undefined FUN_140e1122c(void)

void FUN_140e1122c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong *local_88;
  int local_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined1 local_68 [8];
  longlong **local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140e115ea(param_1 + 0x17a0);
  if (*(longlong *)(param_1 + 0xe50) != 0) {
    FUN_140c89340(local_68,param_1);
    local_98 = 1;
    (**(code **)(**(longlong **)(param_1 + 0xe50) + 0x18))
              (*(longlong **)(param_1 + 0xe50),param_1,0,*(undefined8 *)(param_1 + 0xe58));
    local_78 = 0;
    uStack_70 = 0;
    local_7c = 0;
    if ((longlong)*(int *)(param_1 + 0x1660) != 0) {
      plVar7 = *(longlong **)(param_1 + 0x1658);
      plVar6 = plVar7 + *(int *)(param_1 + 0x1660);
      do {
        local_88 = (longlong *)*plVar7;
        if (local_88 != (longlong *)0x0) {
          FUN_140e11408();
          if (0 < (int)uStack_70) {
            lVar3 = (**(code **)(*local_88 + 0x4b8))();
            iVar1 = *(int *)(lVar3 + 8);
            if (0 < (longlong)iVar1) {
              lVar3 = 0;
              do {
                plVar4 = (longlong *)(**(code **)(*local_88 + 0x4b8))();
                lVar2 = *(longlong *)(*plVar4 + lVar3 * 8);
                if (lVar2 != 0) {
                  if ((longlong)(int)uStack_70 != 0) {
                    lVar5 = 0;
                    do {
                      if (*(longlong *)(local_78 + lVar5) == lVar2) {
                        (**(code **)(**(longlong **)(param_1 + 0xe50) + 8))
                                  (*(longlong **)(param_1 + 0xe50),param_1,lVar2,local_7c);
                        if (*(longlong *)(param_1 + 0xe60) != 0) {
                          FUN_140e11630(*(longlong *)(param_1 + 0xe60),lVar2,local_7c);
                        }
                        local_60 = &local_88;
                        local_58 = &local_7c;
                        FUN_140e1181e(param_1 + 0x17a0,local_4c,&local_60);
                        local_7c = local_7c + 1;
                        break;
                      }
                      lVar5 = lVar5 + 8;
                    } while ((longlong)(int)uStack_70 * 8 != lVar5);
                  }
                }
                lVar3 = lVar3 + 1;
              } while (lVar3 != iVar1);
            }
          }
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar6);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_140c8931a(local_68);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e11408 FUN_140e11408 body=257 status=ok
// SIG undefined FUN_140e11408(void)

void FUN_140e11408(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_147d1ecc2(param_2,0);
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x388))(param_1);
  if ((plVar3 != (longlong *)0x0) && ((longlong)(int)plVar3[1] != 0)) {
    plVar6 = (longlong *)*plVar3;
    plVar3 = plVar6 + (int)plVar3[1];
    do {
      lVar1 = *plVar6;
      lVar4 = (longlong)*(int *)(lVar1 + 0x18);
      if (0 < lVar4) {
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(lVar1 + 0x10);
          if ((((*(int *)(lVar2 + 0x58 + lVar5) != 0 || *(int *)(lVar2 + 0x54 + lVar5) != 0) ||
               *(int *)(lVar2 + 0x5c + lVar5) != 0) || *(int *)(lVar2 + 0x60 + lVar5) != 0) &&
             (local_50 = FUN_140e11572(param_1,lVar2 + lVar5 + 0x54), local_50 != 0)) {
            FUN_140e1150a(param_2,&local_50);
          }
          lVar5 = lVar5 + 0xf8;
        } while (lVar4 * 0xf8 - lVar5 != 0);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e1150a FUN_140e1150a body=103 status=ok
// SIG undefined FUN_140e1150a(void)

ulonglong FUN_140e1150a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_140e1153d;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14076a0ae(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_140e1153d:
  return uVar4 & 0xffffffff;
}



// FUNCTION 140e11572 FUN_140e11572 body=120 status=ok
// SIG undefined FUN_140e11572(void)

longlong FUN_140e11572(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((param_2[1] != 0 || *param_2 != 0) || param_2[2] != 0) || param_2[3] != 0) {
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x4b0))();
    if ((longlong)*(int *)(puVar2 + 1) != 0) {
      plVar4 = (longlong *)*puVar2;
      lVar3 = (longlong)*(int *)(puVar2 + 1) << 3;
      do {
        lVar1 = *plVar4;
        if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x38) == *param_2)) &&
            (*(int *)(lVar1 + 0x3c) == param_2[1])) &&
           ((*(int *)(lVar1 + 0x40) == param_2[2] && (*(int *)(lVar1 + 0x44) == param_2[3])))) {
          if (plVar4 != (longlong *)0x0) {
            return lVar1;
          }
          return 0;
        }
        plVar4 = plVar4 + 1;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
  }
  return 0;
}



// FUNCTION 140e115ea FUN_140e115ea body=70 status=ok
// SIG undefined FUN_140e115ea(void)

void FUN_140e115ea(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_140e116d8();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 140e11630 FUN_140e11630 body=166 status=ok
// SIG undefined FUN_140e11630(void)

void FUN_140e11630(longlong *param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    local_40 = (**(code **)(*param_1 + 0x2a0))();
    if (local_40 != 0) {
      *(undefined4 *)(local_40 + 0x28) = param_3;
      local_38 = *(longlong **)(param_2 + 0x18);
      FUN_1400021e4(&local_38,local_50);
      local_30 = &local_40;
      local_38 = local_50;
      FUN_140e11ae2(param_1 + 5,local_24,&local_38,0);
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e116d8 FUN_140e116d8 body=325 status=ok
// SIG undefined FUN_140e116d8(void)

void FUN_140e116d8(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e1181e FUN_140e1181e body=707 status=ok
// SIG undefined FUN_140e1181e(void)

int * FUN_140e1181e(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_14482b872(param_1,iVar15);
    }
    iVar16 = (int)param_1[5];
    if (iVar16 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar5 = iVar16 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar7 = param_1 + 2;
    iVar11 = iVar16 + 1;
    iVar14 = iVar16 + 0x1f;
    if (-1 < iVar16) {
      iVar14 = iVar16;
    }
    if (iVar14 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar16) {
        if (iVar16 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar5 = iVar16;
        }
        else {
          uVar17 = iVar16 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar10 = 4;
            if (4 < uVar17) {
              uVar10 = uVar17;
            }
          }
          else {
            uVar10 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
          }
          uVar8 = FUN_144a3809e(uVar10 << 2,0);
          iVar5 = (int)(uVar8 >> 2);
          iVar11 = -0x20;
          if ((int)uVar17 <= iVar5) {
            iVar11 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar7,iVar5);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar5 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar5 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar7;
        }
        bVar9 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar5 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar16 & 0x1f;
    puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar6 = (longlong)iVar15;
    iVar16 = *(int *)(*param_1 + 4 + lVar6 * 0x18);
    *(int *)(param_1 + 6) = iVar16;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar16 * 0x18) = 0xffffffff;
    }
  }
  iVar16 = 1;
  plVar7 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[4];
  }
  iVar5 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar5 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  lVar2 = *param_1;
  puVar3 = (undefined4 *)param_3[1];
  uVar8 = *(ulonglong *)*param_3;
  *(ulonglong *)(lVar2 + lVar6 * 0x18) = uVar8;
  *(undefined4 *)(lVar2 + 8 + lVar6 * 0x18) = *puVar3;
  *(undefined4 *)(lVar2 + 0x10 + lVar6 * 0x18) = 0xffffffff;
  uVar17 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar17) {
    uVar12 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar16 = 1 << ((byte)lVar4 & 0x1f);
  }
  if (((int)uVar17 < 1) || (iVar16 <= (int)param_1[9])) {
    uVar17 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    lVar2 = lVar2 + lVar6 * 0x18;
    uVar17 = (int)param_1[9] - 1U & (uVar17 >> 0x10 ^ uVar17);
    *(uint *)(lVar2 + 0x14) = uVar17;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(lVar2 + 0x10) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4) =
         iVar15;
  }
  else {
    *(int *)(param_1 + 9) = iVar16;
    FUN_140e12164(param_1);
  }
  *param_2 = iVar15;
  return param_2;
}



// FUNCTION 140e11ae2 FUN_140e11ae2 body=1664 status=ok
// SIG undefined FUN_140e11ae2(void)

undefined4 * FUN_140e11ae2(longlong *param_1,undefined4 *param_2,longlong *param_3,char *param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  uint *puVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  undefined4 *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar23 = *(uint *)(param_1 + 1);
    uVar9 = (ulonglong)uVar23;
    *(uint *)(param_1 + 1) = uVar23 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) == uVar23) {
      FUN_14482b872(param_1,uVar23);
    }
    iVar19 = (int)param_1[5];
    if (iVar19 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar5 = iVar19 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar17 = param_1 + 2;
    iVar12 = iVar19 + 1;
    iVar15 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar15 = iVar19;
    }
    if (iVar15 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar12;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar19) {
        if (iVar19 + 0x20U < 0xa0) {
          iVar12 = 0x80;
          iVar5 = iVar19;
        }
        else {
          uVar21 = iVar19 + 0x20U >> 5;
          local_60 = (ulonglong)uVar21;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar21) {
              uVar6 = uVar21;
            }
          }
          else {
            uVar6 = (uVar21 * 3 >> 3) + uVar21 + 0x10;
          }
          uVar8 = FUN_144a3809e(uVar6 << 2,0);
          iVar5 = (int)(uVar8 >> 2);
          iVar12 = -0x20;
          if ((int)local_60 <= iVar5) {
            iVar12 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar12;
        FUN_1446efbd8(plVar17,iVar5);
        iVar12 = (int)param_1[5] + 1;
      }
      iVar5 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar5 = iVar12;
      }
      *(int *)(param_1 + 5) = iVar12;
      if (iVar12 % 0x20 != 0) {
        plVar14 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar14 = plVar17;
        }
        bVar11 = -(char)(iVar12 % 0x20);
        *(uint *)((longlong)plVar14 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar5 >> 5) * 4) << (bVar11 & 0x1f)) >>
             (bVar11 & 0x1f);
      }
    }
    lVar7 = (longlong)(int)uVar23;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar17 = (longlong *)param_1[4];
    }
    bVar11 = (byte)iVar19 & 0x1f;
    puVar1 = (uint *)((longlong)plVar17 + (longlong)(iVar15 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
  }
  else {
    uVar9 = (ulonglong)*(uint *)(param_1 + 6);
    lVar7 = (longlong)(int)*(uint *)(param_1 + 6);
    iVar19 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar19;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar19 * 0x18) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  iVar19 = (int)uVar9;
  puVar13 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar13 = puVar1;
  }
  iVar5 = iVar19 + 0x1f;
  if (-1 < iVar19) {
    iVar5 = iVar19;
  }
  puVar13[iVar5 >> 5] = puVar13[iVar5 >> 5] | 1 << ((byte)uVar9 & 0x1f);
  plVar17 = (longlong *)(*param_1 + lVar7 * 0x18);
  plVar14 = (longlong *)param_3[1];
  iVar19 = *(int *)((undefined8 *)*param_3 + 1);
  iVar5 = iVar19 + -1;
  if (iVar19 == 0) {
    iVar5 = 0;
  }
  FUN_1446f82e2(&local_50,iVar5,*(undefined8 *)*param_3,1);
  *plVar17 = local_50;
  lVar7 = *plVar14;
  plVar17[1] = lVar7;
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  *(undefined4 *)(plVar17 + 2) = 0xffffffff;
  lVar7 = *plVar17;
  uVar23 = (uint)((ulonglong)lVar7 >> 0x10);
  uVar21 = (uint)lVar7 & 0xffff;
  uVar23 = ((uint)lVar7 << 0x10 | uVar21) + (int)((ulonglong)lVar7 >> 0x20) +
           (uVar23 << 0x13 | uVar23 & 0xffff) + (uVar21 >> 4);
  if ((uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) < 2) {
LAB_140e11c69:
    cVar10 = '\0';
  }
  else {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    uVar21 = *(uint *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & uVar23) * 4);
    if (uVar21 == 0xffffffff) goto LAB_140e11c69;
    do {
      plVar14 = (longlong *)(*param_1 + (longlong)(int)uVar21 * 0x18);
      if (*plVar14 == lVar7) {
        uVar3 = *(undefined4 *)((longlong)plVar17 + 4);
        lVar7 = plVar17[1];
        uVar4 = *(undefined4 *)((longlong)plVar17 + 0xc);
        *(int *)plVar14 = (int)*plVar17;
        *(undefined4 *)((longlong)plVar14 + 4) = uVar3;
        *(int *)(plVar14 + 1) = (int)lVar7;
        *(undefined4 *)((longlong)plVar14 + 0xc) = uVar4;
        FUN_146fdf558(param_1,uVar9);
        cVar10 = '\x01';
        uVar9 = (ulonglong)uVar21;
        break;
      }
      uVar21 = *(uint *)(plVar14 + 2);
      cVar10 = '\0';
    } while (uVar21 != 0xffffffff);
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar10;
  }
  if (cVar10 != '\0') goto LAB_140e11f20;
  uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar21 = 1;
  if (3 < uVar6) {
    uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
    lVar7 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar21 = 1 << ((byte)lVar7 & 0x1f);
  }
  if (((int)uVar6 < 1) || ((int)uVar21 <= (int)param_1[9])) {
    uVar23 = (int)param_1[9] - 1U & uVar23;
    *(uint *)((longlong)plVar17 + 0x14) = uVar23;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(undefined4 *)(plVar17 + 2) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar23) * 4);
    plVar17 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar17 = param_1 + 7;
    }
    *(int *)((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar23) * 4) =
         (int)uVar9;
    goto LAB_140e11f20;
  }
  *(uint *)(param_1 + 9) = uVar21;
  plVar17 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar17,0,0,4);
    uVar21 = *(uint *)(param_1 + 9);
  }
  plVar14 = param_1 + 7;
  if (uVar21 == 1) {
    if (*plVar17 != 0) {
      FUN_1446efa72(plVar17,0,0,4);
    }
LAB_140e11ccc:
    uVar23 = 0;
    do {
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = plVar14;
      }
      *(undefined4 *)((longlong)plVar17 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar23) * 4) =
           0xffffffff;
      uVar23 = uVar23 + 1;
    } while (uVar21 != uVar23);
  }
  else {
    if (uVar21 == 0) goto LAB_140e11f20;
    FUN_1446efa72(plVar17,0,uVar21,4);
    if (0 < (int)uVar21) goto LAB_140e11ccc;
  }
  iVar19 = (int)param_1[5];
  if (iVar19 == 0) {
    uVar8 = 0;
    uVar18 = 1;
    iVar5 = 0;
    iVar12 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar23 = *puVar13;
    if (uVar23 == 0) {
      iVar5 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar5 = iVar19 + -1;
      }
      uVar8 = 0;
      uVar18 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar18 = uVar8;
      }
      iVar12 = 0;
      do {
        if (uVar18 == uVar8) goto LAB_140e11f20;
        iVar12 = iVar12 + 0x20;
        uVar23 = puVar13[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar23 == 0);
    }
    else {
      uVar8 = 0;
      iVar12 = 0;
    }
    uVar18 = (ulonglong)(-uVar23 & uVar23);
    uVar22 = uVar18 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar5 = (iVar12 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar19 <= iVar5) {
      iVar5 = iVar19;
    }
  }
  if (iVar5 < iVar19) {
    uVar23 = 0xffffffff;
    do {
      lVar7 = *param_1;
      lVar20 = (longlong)iVar5;
      uVar2 = *(undefined8 *)(lVar7 + lVar20 * 0x18);
      uVar21 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar6 = (uint)uVar2 & 0xffff;
      uVar22 = (longlong)
               (int)(((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
                     (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar6 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar19 = (int)uVar22;
      *(int *)(lVar7 + 0x14 + lVar20 * 0x18) = iVar19;
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = plVar14;
      }
      *(undefined4 *)(lVar7 + 0x10 + lVar20 * 0x18) =
           *(undefined4 *)((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & uVar22) * 4);
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = plVar14;
      }
      *(int *)((longlong)plVar17 + ((longlong)iVar19 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar23 = ~(uint)uVar18 & uVar23;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puVar1;
      }
      iVar19 = (int)param_1[5];
      iVar5 = (int)uVar8;
      lVar7 = (longlong)iVar5;
      uVar21 = puVar13[lVar7] & uVar23;
      local_60 = uVar9;
      local_58 = param_2;
      if (uVar21 == 0) {
        iVar15 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar15 = iVar19 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar16 = iVar15;
        if (iVar15 < iVar5) {
          iVar16 = iVar5;
        }
        if (iVar15 <= iVar5) break;
        lVar20 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar21 = puVar13[lVar7 + lVar20 + 1];
          if (uVar21 != 0) break;
          lVar20 = lVar20 + 1;
          if (iVar16 - lVar7 == lVar20) goto LAB_140e11f20;
        }
        uVar8 = (ulonglong)(iVar5 + (int)lVar20 + 1);
        uVar23 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar21 & uVar21);
      uVar22 = uVar18 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar5 = (iVar12 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar19);
  }
LAB_140e11f20:
  *param_2 = (int)uVar9;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e12164 FUN_140e12164 body=679 status=ok
// SIG undefined FUN_140e12164(void)

void FUN_140e12164(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_140e121c8;
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
LAB_140e121c8:
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
      uVar15 = *(ulonglong *)(lVar6 + lVar12 * 0x18);
      uVar2 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x14 + lVar12 * 0x18) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar12 * 0x18) =
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



// FUNCTION 140e1240b FUN_140e1240b body=894 status=ok
// SIG undefined FUN_140e1240b(void)

void FUN_140e1240b(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
switchD_140e12456_caseD_42:
    local_90 = param_3[2];
    puVar4 = (undefined8 *)param_3[1];
    puVar5 = local_88;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = *(undefined8 *)(*(longlong *)*param_3 + 0x10);
    break;
  case 1:
    local_90 = param_3[2];
    puVar4 = (undefined8 *)param_3[1];
    puVar5 = local_88;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = *(undefined8 *)(*(longlong *)*param_3 + 0x10);
LAB_140e12634:
    local_98 = 0;
    FUN_1405c9af5(uVar3,local_88,param_1);
    goto LAB_140e126af;
  case 3:
    local_90 = param_3[2];
    puVar4 = (undefined8 *)param_3[1];
    puVar5 = local_88;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = *(undefined8 *)(*(longlong *)*param_3 + 0x10);
LAB_140e1266f:
    local_98 = 0;
    FUN_144945691(uVar3,local_88,param_1);
    goto LAB_140e126af;
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_140e1240b(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
    goto LAB_140e126af;
  case 8:
    local_90 = param_3[2];
    puVar4 = (undefined8 *)param_3[1];
    puVar5 = local_88;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = *(undefined8 *)(*(longlong *)*param_3 + 0x10);
LAB_140e126aa:
    local_98 = 0;
    FUN_140ea601d(uVar3,local_88,param_1);
    goto LAB_140e126af;
  default:
    switch(uVar1) {
    case 0x40:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_90 = param_3[2];
      puVar4 = (undefined8 *)param_3[1];
      puVar5 = local_88;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar3 = *(undefined8 *)(*(longlong *)*param_3 + 0x10);
      break;
    case 0x41:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_90 = param_3[2];
      puVar4 = (undefined8 *)param_3[1];
      puVar5 = local_88;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar3 = *(undefined8 *)(*(longlong *)*param_3 + 0x10);
      goto LAB_140e12634;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_140e12456_caseD_42;
    case 0x43:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_90 = param_3[2];
      puVar4 = (undefined8 *)param_3[1];
      puVar5 = local_88;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar3 = *(undefined8 *)(*(longlong *)*param_3 + 0x10);
      goto LAB_140e1266f;
    case 0x48:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_90 = param_3[2];
      puVar4 = (undefined8 *)param_3[1];
      puVar5 = local_88;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar3 = *(undefined8 *)(*(longlong *)*param_3 + 0x10);
      goto LAB_140e126aa;
    default:
      switch(uVar1) {
      case 0x80:
        local_90 = param_3[2];
        puVar4 = (undefined8 *)param_3[1];
        puVar5 = local_88;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_98 = 0;
        FUN_146cd55a9(*(undefined8 *)(*(longlong *)*param_3 + 0x10),local_88,param_1);
        break;
      case 0x81:
        local_90 = param_3[2];
        puVar4 = (undefined8 *)param_3[1];
        puVar5 = local_88;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_98 = 0;
        FUN_146cd93af(*(undefined8 *)(*(longlong *)*param_3 + 0x10),local_88,param_1);
        break;
      default:
        goto switchD_140e12456_caseD_42;
      case 0x83:
        local_90 = param_3[2];
        puVar4 = (undefined8 *)param_3[1];
        puVar5 = local_88;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_98 = 0;
        FUN_146cdd0cb(*(undefined8 *)(*(longlong *)*param_3 + 0x10),local_88,param_1);
        break;
      case 0x88:
        local_90 = param_3[2];
        puVar4 = (undefined8 *)param_3[1];
        puVar5 = local_88;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_98 = 0;
        FUN_140a08058(*(undefined8 *)(*(longlong *)*param_3 + 0x10),local_88,param_1);
      }
      goto LAB_140e126af;
    }
  }
  local_98 = 0;
  FUN_140682465(uVar3,local_88,param_1);
LAB_140e126af:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1278a FUN_140e1278a body=49 status=ok
// SIG undefined FUN_140e1278a(void)

longlong FUN_140e1278a(void)

{
  if (DAT_14cc0b380 == 0) {
    FUN_140f50038(&DAT_14cc0b380,&PTR_s__Script_LiveLinkInterface_14bc11376_2_14bc11358);
  }
  return DAT_14cc0b380;
}



// FUNCTION 140e127bc FUN_140e127bc body=65 status=ok
// SIG undefined FUN_140e127bc(void)

undefined8 * FUN_140e127bc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4bea20;
  FUN_140e127fe(param_1 + 0x1f);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e127fe FUN_140e127fe body=246 status=ok
// SIG undefined FUN_140e127fe(void)

void FUN_140e127fe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a46bfe0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (*(int *)((longlong)param_1 + 0xcc) != 0) {
    FUN_14472eb64(param_1 + 0x18,0);
  }
  param_1[0x1e] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xec)) {
    *(undefined4 *)((longlong)param_1 + 0xec) = 0x80;
    FUN_1446efbd8(param_1 + 0x1a,0);
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dba90(param_1 + 0x11);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbac8(param_1);
  return;
}



// FUNCTION 140e128fa FUN_140e128fa body=228 status=ok
// SIG undefined FUN_140e128fa(void)

longlong FUN_140e128fa(void)

{
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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbbf9a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418c3448;
    local_38 = &LAB_148cb0397;
    local_40 = &LAB_141266941;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2630;
    FUN_14081cfa3(L"/Script/OakGame",L"PlaceableActor",&DAT_14cbbf9a8,&DAT_148cb0396);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbf9a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e129ee FUN_140e129ee body=40 status=ok
// SIG undefined FUN_140e129ee(void)

undefined8 FUN_140e129ee(undefined8 param_1,int param_2)

{
  FUN_140e12a16();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e12a16 FUN_140e12a16 body=745 status=ok
// SIG undefined FUN_140e12a16(void)

void FUN_140e12a16(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7bbfd0;
  param_1[3] = &PTR_FUN_14a7bc0e0;
  if (param_1[0xa6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x98] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  FUN_14010165c(param_1[0x61],*(undefined4 *)(param_1 + 0x62));
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e12d0a FUN_140e12d0a body=168 status=ok
// SIG undefined FUN_140e12d0a(void)

void FUN_140e12d0a(undefined8 *param_1,longlong param_2)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_140e12db4(param_2,param_2 + 0x24);
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 2);
  lVar2 = (longlong)local_38;
  _Src = (void *)param_1[1];
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  FUN_140e12e44(uVar1,*param_1,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e12db4 FUN_140e12db4 body=142 status=ok
// SIG undefined FUN_140e12db4(void)

undefined8 * FUN_140e12db4(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  FUN_14179e7e8(puVar1);
  local_30 = &local_40;
  local_40 = puVar1;
  local_38 = param_2;
  FUN_1401ac3b6(*(undefined8 *)(param_1 + 8),local_24,&local_38,0);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)(local_40,1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e12e44 FUN_140e12e44 body=272 status=ok
// SIG undefined FUN_140e12e44(void)

void FUN_140e12e44(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140e12f56(&DAT_14cab30d0,&local_38);
  *(undefined8 *)(param_1 + 0x18) = local_38;
  lVar4 = FUN_14001cc68(0x78,0x10);
  FUN_140e13128(lVar4,param_2,param_3);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a480e60;
  plVar5[2] = lVar4;
  *(longlong *)(param_1 + 8) = lVar4;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar5 == plVar3) {
    if (plVar5 == (longlong *)0x0) goto LAB_140e12ee6;
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_140e12ee6;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar5;
  }
  else {
    *(longlong **)(param_1 + 0x10) = plVar5;
    if (plVar3 == (longlong *)0x0) goto LAB_140e12ee6;
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_140e12ee6;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_140e12ee6:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e12f56 FUN_140e12f56 body=293 status=ok
// SIG undefined FUN_140e12f56(void)

undefined8 * FUN_140e12f56(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  do {
    LOCK();
    iVar4 = *param_1;
    *param_1 = 1;
    UNLOCK();
  } while (iVar4 != 0);
  plVar1 = (longlong *)(param_1 + 6);
  iVar4 = FUN_140e1307c(plVar1,param_3);
  if (iVar4 == -1) {
    iVar4 = param_1[8];
    param_1[8] = iVar4 + 1U;
    if ((uint)param_1[9] < iVar4 + 1U) {
      FUN_1447a1bd6(plVar1,iVar4);
    }
    lVar3 = *plVar1;
    lVar7 = (longlong)iVar4 * 0x10;
    puVar2 = (undefined8 *)(lVar3 + lVar7);
    *(undefined8 *)(lVar3 + lVar7) = 0;
    iVar4 = *(int *)(param_3 + 1);
    _Src = (void *)*param_3;
    *(int *)(lVar3 + 8 + lVar7) = iVar4;
    if ((longlong)iVar4 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar2,iVar4,0);
      memcpy((void *)*puVar2,_Src,(longlong)iVar4 * 2);
    }
    iVar4 = param_1[4];
    uVar5 = FUN_144a78877((ulonglong)param_1 >> 0x20,iVar4);
    uVar6 = FUN_144a78877((ulonglong)param_1 & 0xffffffff,iVar4);
    iVar4 = param_1[4];
    param_1[4] = iVar4 + 1U;
    if ((uint)param_1[5] < iVar4 + 1U) {
      FUN_1456ea644(param_1 + 2,iVar4);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 2) + (longlong)iVar4 * 8) = CONCAT44(uVar5,uVar6);
    LOCK();
    *param_1 = 0;
    UNLOCK();
    *param_2 = CONCAT44(uVar5,uVar6);
  }
  else {
    *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)iVar4 * 8);
    LOCK();
    *param_1 = 0;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 140e1307c FUN_140e1307c body=171 status=ok
// SIG undefined FUN_140e1307c(void)

ulonglong FUN_140e1307c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if ((longlong)(int)param_1[1] == 0) {
    return 0xffffffff;
  }
  plVar2 = (longlong *)*param_1;
  iVar1 = (int)param_2[1];
  plVar6 = plVar2;
LAB_140e130aa:
  if ((int)plVar6[1] == iVar1) {
    if (1 < iVar1) {
      lVar7 = 0;
      do {
        uVar3 = *(ushort *)(*plVar6 + lVar7);
        uVar4 = (ulonglong)uVar3;
        uVar5 = *(ushort *)(*param_2 + lVar7);
        if (uVar3 == uVar5) {
          if (uVar3 == 0) break;
        }
        else {
          if (0x7f < (uVar5 | uVar3)) goto LAB_140e13116;
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          uVar8 = (ulonglong)uVar5;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[uVar8]) goto LAB_140e13116;
        }
        lVar7 = lVar7 + 2;
      } while( true );
    }
    goto LAB_140e13103;
  }
  if ((int)plVar6[1] + iVar1 == 1) goto LAB_140e13103;
  goto LAB_140e1311c;
LAB_140e13116:
  if (uVar3 == uVar5) {
LAB_140e13103:
    return (ulonglong)((longlong)plVar6 - (longlong)plVar2) >> 4 & 0xffffffff;
  }
LAB_140e1311c:
  plVar6 = plVar6 + 2;
  if (plVar6 == plVar2 + (longlong)(int)param_1[1] * 2) {
    return 0xffffffff;
  }
  goto LAB_140e130aa;
}



// FUNCTION 140e13128 FUN_140e13128 body=416 status=ok
// SIG undefined FUN_140e13128(void)

undefined8 * FUN_140e13128(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],_Src,(longlong)iVar1 * 2);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab34a8) && (FUN_144b3d300(&DAT_14cab34a8), DAT_14cab34a8 == -1)) {
    FUN_140056680(&DAT_14cab3498,&DAT_14a475be0);
    atexit((_func_5014 *)&LAB_1432dd572);
    _Init_thread_footer(&DAT_14cab34a8);
  }
  FUN_1400021e4(param_1 + 0xe,local_50);
  FUN_1407ec8fc(&local_40,&DAT_14cab3498,local_50);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  puVar2 = local_40;
  if (local_38 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_1446f470e(local_50,puVar2,1);
  param_1[0xc] = local_50[0];
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140e132ca FUN_140e132ca body=481 status=ok
// SIG undefined FUN_140e132ca(void)

longlong * FUN_140e132ca(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_3;
  if (param_3 == 0) {
    plVar2 = (longlong *)FUN_140a3272e(param_1 + 0xd0,0,&local_30);
    local_38 = *plVar2;
    if (local_38 != 0) goto LAB_140e133bf;
    *plVar2 = local_30;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    FUN_140e134ac(&DAT_14c846b20,L"-gbx.analytics.redirect=",plVar2);
  }
  else {
    FUN_140e132ca(param_1,&local_38,0);
    if (local_38 != 0 && local_38 != local_30) goto LAB_140e133bf;
    uVar1 = (uint)((ulonglong)local_30 >> 0x10);
    uVar4 = (uint)local_30 & 0xffff;
    plVar2 = (longlong *)
             FUN_140a3272e(param_1 + 0xd0,
                           ((uint)local_30 << 0x10 | uVar4) + (int)((ulonglong)local_30 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4),&local_30);
    local_38 = *plVar2;
    if (local_38 != 0) goto LAB_140e133bf;
    *plVar2 = local_30;
    FUN_1400021e4(&local_30,&local_58);
    puVar3 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar3 = local_58;
    }
    FUN_140002266(&local_48,L"-gbx.analytics.%s.redirect=",puVar3);
    puVar3 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar3 = local_48;
    }
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    FUN_140e134ac(&DAT_14c846b20,puVar3,plVar2);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  local_38 = *plVar2;
LAB_140e133bf:
  *param_2 = local_38;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e134ac FUN_140e134ac body=137 status=ok
// SIG undefined FUN_140e134ac(void)

undefined4 FUN_140e134ac(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_868 [32];
  undefined1 local_848;
  undefined8 local_840;
  undefined8 local_830;
  undefined1 local_828 [2056];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_868;
  local_840 = 0;
  local_848 = 1;
  uVar1 = FUN_140751ea8(param_1,param_2,local_828,0x400);
  if ((char)uVar1 != '\0') {
    FUN_1446f470e(&local_830,local_828,1);
    *param_3 = local_830;
  }
  if ((local_20 ^ (ulonglong)auStack_868) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e13536 FUN_140e13536 body=660 status=ok
// SIG undefined FUN_140e13536(void)

void FUN_140e13536(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[5] != 0) goto LAB_140e1367d;
  if ((char)param_1[4] != '\x01') {
    if ((char)param_1[4] == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    goto LAB_140e1367d;
  }
  lVar3 = param_1[6];
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,4,0x10);
  local_28 = 4;
  plVar4 = (longlong *)param_1[2];
  if (plVar4 == (longlong *)0x0) {
LAB_140e136ce:
    *local_30 = &PTR_LAB_14b430ca0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_30[2] = lVar8;
    *local_30 = &PTR_FUN_14b430070;
    local_30[3] = 0;
    local_30[4] = 0;
    local_30[5] = FUN_140c836b6;
    *(undefined4 *)(local_30 + 6) = 0;
  }
  else {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_140e136ce;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    lVar5 = param_1[1];
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *local_30 = &PTR_LAB_14b430ca0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_30[2] = lVar9;
    *local_30 = &PTR_FUN_14b430070;
    local_30[3] = lVar5;
    local_30[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    local_30[5] = FUN_140c836b6;
    *(undefined4 *)(local_30 + 6) = 0;
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
  FUN_140e137de(lVar3 + 0xf0,&local_38,&local_30);
  if (local_28 == 0) {
LAB_140e1365d:
    if (local_30 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
    goto LAB_140e1365d;
  }
  param_1[5] = local_38;
  (**(code **)(*param_1 + 0x18))(param_1);
LAB_140e1367d:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e137de FUN_140e137de body=370 status=ok
// SIG undefined FUN_140e137de(void)

undefined8 * FUN_140e137de(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140e1399c FUN_140e1399c body=57 status=ok
// SIG undefined FUN_140e1399c(void)

void FUN_140e1399c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb4000 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb4000 = FUN_140002ddd(FUN_1465fa9f2,uVar1,L"OakUINameWeightedListDef");
  }
  return;
}



// FUNCTION 140e139d6 FUN_140e139d6 body=543 status=ok
// SIG undefined FUN_140e139d6(void)

void FUN_140e139d6(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x88);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0x11) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0x10;
    _Src = *(void **)((longlong)param_1 + 0x80);
joined_r0x000140e13b82:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar3;
    if (0x10 < *(uint *)((longlong)param_1 + 0x8c)) {
      lVar7 = lVar7 + ((ulonglong)(lVar7 * 3) >> 3) + 0x10;
    }
    uVar8 = lVar7 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar8 + 0xf;
        if (uVar8 < 0x7ff1) {
          uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar5 = 0x32 - (ulonglong)bVar2;
            do {
              uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar5 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_140e13a6e;
              lVar7 = uVar4 + 1 + uVar5;
              uVar5 = uVar5 - 1;
            } while (lVar7 != 0x33);
          }
          uVar8 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar8 = (ulonglong)DAT_14c841df8;
          }
          uVar8 = -uVar8 & ((uVar1 & 0xfffffffffffffff0) + uVar8) - 1;
        }
      }
      else {
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
      }
    }
LAB_140e13a6e:
    uVar8 = uVar8 >> 3;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 0x7fffffff;
      uVar8 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x80);
    }
    else {
      *(uint *)((longlong)param_1 + 0x8c) = uVar6;
      _Src = *(void **)((longlong)param_1 + 0x80);
      if (uVar6 < 0x11) goto joined_r0x000140e13b82;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x80,0,uVar8,8);
      memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,uVar8,8);
  return;
}



// FUNCTION 140e13bf6 FUN_140e13bf6 body=99 status=ok
// SIG undefined FUN_140e13bf6(void)

void FUN_140e13bf6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000140e13c55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140e13c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 140e13c5a FUN_140e13c5a body=745 status=ok
// SIG undefined FUN_140e13c5a(void)

void FUN_140e13c5a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  code *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((((((*(int *)(param_1 + 0xc) != 0) && (uVar3 = *(uint *)(param_1 + 8), -1 < (int)uVar3)) &&
        ((int)uVar3 < DAT_14c9647dc)) &&
       ((plVar6 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
        plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_1 + 0xc))))) &&
      (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
       ((*plVar6 != 0 && (lVar2 = *(longlong *)(*plVar6 + 0x1f0), lVar2 != 0)))))) &&
     (iVar1 = *(int *)(lVar2 + 0x40), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(lVar2 + 0x38);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar2 + lVar7);
      if ((lVar4 != 0) && (lVar5 = *(longlong *)(lVar4 + 0x30), lVar5 != 0)) {
        if (DAT_14cbadd90 == 0) {
          local_90 = &local_58;
          local_58 = FUN_141030f22;
          local_80 = FUN_14081d0ea;
          local_88 = &LAB_1459f2e4c;
          local_98 = &LAB_148c39de3;
          local_a0 = &LAB_1457a9eb2;
          local_a8 = &DAT_149e063b2;
          local_b0 = 0;
          local_b8 = 0x10000004;
          local_c0 = 0x10;
          local_c8 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          lVar5 = *(longlong *)(lVar4 + 0x30);
          if (lVar5 == 0) goto LAB_140e13e17;
        }
        if ((((DAT_14cbadd90 != 0) && (lVar4 = *(longlong *)(lVar5 + 0x10), lVar4 != 0)) &&
            (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
           (((*(longlong *)
               (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
              DAT_14cbadd90 + 0x30 && (lVar4 = FUN_1402a1246(lVar5), lVar4 != 0)) &&
            (*(longlong *)(lVar5 + 0x3d0) != 0)))) {
          lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x3d0) + 0x1c8);
          if (lVar5 == 0) {
            local_68 = DAT_14c8464f0;
            local_78 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_70 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            local_78 = *(undefined8 *)(lVar5 + 0x260);
            uStack_70 = *(undefined8 *)(lVar5 + 0x268);
            local_68 = *(undefined8 *)(lVar5 + 0x270);
          }
          lVar5 = FUN_144a2b138(param_1,&local_78);
          if (lVar5 != 0) {
            local_58 = *(code **)(lVar5 + 0x3c8);
            local_50 = *(int *)(lVar5 + 0x3d0);
            local_48 = 0;
            if (((local_58 != (code *)0x0) && (local_50 - 1U < 0xfffffffe)) &&
               ((local_58 != *(code **)(lVar4 + 0xde8) || (local_50 != *(int *)(lVar4 + 0xdf0))))) {
              uVar3 = FUN_1457b4d87(lVar4,&local_58);
              FUN_1457b4e32(lVar4,&local_58,uVar3 ^ 1);
            }
          }
        }
      }
LAB_140e13e17:
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e13f44 FUN_140e13f44 body=18 status=ok
// SIG undefined FUN_140e13f44(void)

undefined8 FUN_140e13f44(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140e13f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x3a0))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 140e13f56 FUN_140e13f56 body=173 status=ok
// SIG undefined FUN_140e13f56(void)

void FUN_140e13f56(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140e13fed;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140e13fed:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140e14004 FUN_140e14004 body=39 status=ok
// SIG undefined FUN_140e14004(void)

void FUN_140e14004(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x9b0,0x10);
  FUN_140e1402c(uVar1,param_1);
  return;
}



// FUNCTION 140e1402c FUN_140e1402c body=248 status=ok
// SIG undefined FUN_140e1402c(void)

undefined8 * FUN_140e1402c(undefined8 *param_1)

{
  FUN_140e14124();
  *param_1 = &PTR_FUN_14a7c7bb0;
  param_1[0x119] = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8dc) = 0;
  param_1[0x11d] = 0;
  *(undefined4 *)(param_1 + 0x11e) = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x122] = 0;
  *(byte *)(param_1 + 0x123) = *(byte *)(param_1 + 0x123) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x919) = 0;
  param_1[0x121] = &PTR_FUN_14a7cc610;
  param_1[0x124] = 0;
  *(undefined4 *)(param_1 + 0x125) = 0xffffffff;
  param_1[0x126] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  *(undefined4 *)(param_1 + 0x132) = 0;
  *(undefined4 *)((longlong)param_1 + 0x994) = 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x99c) = 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x9a4) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x135) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x9aa) = 0;
  param_1[0x127] = param_1;
  return param_1;
}



// FUNCTION 140e14124 FUN_140e14124 body=1514 status=ok
// SIG undefined FUN_140e14124(void)

undefined8 * FUN_140e14124(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_14a7b0ba0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3ff00000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xb] = 0x3ff0000000000000;
  param_1[0xc] = 0x3ff0000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3ff00000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x3ff0000000000000;
  param_1[0x17] = 0x3ff0000000000000;
  param_1[0x18] = 0x3ff0000000000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3ff00000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x3ff0000000000000;
  param_1[0x23] = 0x3ff0000000000000;
  param_1[0x24] = 0x3ff0000000000000;
  param_1[0x25] = 0;
  param_1[0x26] = param_2;
  uVar4 = FUN_140721bac(*(undefined8 *)(param_2 + 0x10));
  param_1[0x27] = uVar4;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x3f800000;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  lVar6 = 0x238;
  do {
    *(undefined8 *)((longlong)param_1 + lVar6 + -0x28) = 0;
    *(undefined4 *)((longlong)param_1 + lVar6 + -0x20) = 0;
    puVar3 = (undefined8 *)((longlong)param_1 + lVar6 + -0x48);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar6 + -0x1c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + lVar6 + -0x14) = 0;
    *(undefined8 *)((longlong)param_1 + lVar6 + -8) = 0;
    *(undefined4 *)((longlong)param_1 + lVar6) = 0;
    lVar6 = lVar6 + 0x50;
  } while (lVar6 != 0x2d8);
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined4 *)(param_1 + 0x67) = 0xffffffff;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined8 *)((longlong)param_1 + 900) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0x562906305629063;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  lVar6 = 0x4b8;
  do {
    *(undefined8 *)((longlong)param_1 + lVar6 + -0x28) = 0;
    *(undefined4 *)((longlong)param_1 + lVar6 + -0x20) = 0;
    puVar3 = (undefined8 *)((longlong)param_1 + lVar6 + -0x48);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar6 + -0x1c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + lVar6 + -0x14) = 0;
    *(undefined8 *)((longlong)param_1 + lVar6 + -8) = 0;
    *(undefined4 *)((longlong)param_1 + lVar6) = 0;
    lVar6 = lVar6 + 0x50;
  } while (lVar6 != 0x5a8);
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined8 *)((longlong)param_1 + 0x58c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x594) = 0;
  param_1[0xb4] = 0;
  *(undefined4 *)(param_1 + 0xb5) = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xb9) = 0xffff;
  param_1[0xba] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xbb) = 0xffff;
  param_1[0xbc] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xbd) = 0xffff;
  param_1[0xbe] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xbf) = 0xffff;
  param_1[0xc0] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xc1) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x621) = 0;
  *(undefined1 *)(param_1 + 0xc6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x634) = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  *(undefined4 *)((longlong)param_1 + 0x654) = 0;
  *(undefined4 *)(param_1 + 0xcb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x65c) = 0x3ff00000;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0x3ff0000000000000;
  param_1[0xd1] = 0x3ff0000000000000;
  param_1[0xd2] = 0x3ff0000000000000;
  param_1[0xd3] = 0;
  plVar5 = (longlong *)FUN_14001cc68(0x178);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a7be2e0;
  plVar5[6] = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  *(undefined4 *)((longlong)plVar5 + 0x3c) = 0x80;
  *(undefined1 *)(plVar5 + 0x1b) = 0;
  plVar5[0x26] = 0;
  *(undefined4 *)(plVar5 + 0x27) = 0;
  plVar5[0x1c] = 0;
  plVar5[0x1d] = 0;
  *(undefined1 *)(plVar5 + 0x1e) = 0;
  plVar5[0x1f] = 0;
  plVar5[0x20] = 0;
  *(undefined8 *)((longlong)plVar5 + 0x105) = 0;
  plVar5[0x22] = 0;
  plVar5[0x23] = 0;
  memset(plVar5 + 8,0,0x91);
  *(undefined8 *)((longlong)plVar5 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar5 + 0x144) = 0;
  plVar5[0x2a] = 0;
  *(undefined4 *)(plVar5 + 0x2b) = 0;
  plVar5[0x2c] = 0;
  plVar5[0x2d] = 0;
  plVar5[0x2e] = 2;
  *(undefined4 *)(plVar5 + 7) = 0;
  param_1[0xd4] = plVar5 + 2;
  param_1[0xd5] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  param_1[0xd6] = 0;
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x704) = 0;
  param_1[0xe2] = 0;
  *(undefined4 *)(param_1 + 0xe3) = 0;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x754) = 0;
  param_1[0xec] = 0;
  *(undefined4 *)(param_1 + 0xed) = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  *(undefined1 *)(param_1 + 0xfc) = 0;
  *(byte *)((longlong)param_1 + 0x7e1) = *(byte *)((longlong)param_1 + 0x7e1) & 0xe0;
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  *(undefined8 *)((longlong)param_1 + 0x824) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x82c) = 0;
  param_1[0x107] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  return param_1;
}



// FUNCTION 140e1470e FUN_140e1470e body=286 status=ok
// SIG undefined FUN_140e1470e(void)

undefined8 FUN_140e1470e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140e14826;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140e14826;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140e14826:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140e147d3;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140e147d3;
    }
  }
  uVar6 = 0;
LAB_140e147d3:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1483c FUN_140e1483c body=536 status=ok
// SIG undefined FUN_140e1483c(void)

void FUN_140e1483c(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined1 local_88 [8];
  undefined8 *local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 *local_68;
  longlong local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    local_50 = FUN_1447210f0();
    FUN_140880df0(local_88,&DAT_14cb8cca8);
    lVar2 = local_60;
    local_98 = local_78;
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
    local_90 = local_70;
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
    puVar11 = local_80;
LAB_140e148c0:
    if (puVar11 != local_68) {
      lVar9 = puVar11[2];
      cVar3 = (**(code **)(**(longlong **)(*(longlong *)(lVar9 + 0x28) + 0x58) + 0x3c0))();
      if (cVar3 != '\0') {
        lVar7 = *(longlong *)(param_2 + 0x28);
        if ((lVar7 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar7);
        }
        if (*(longlong *)(lVar9 + 0x28) == lVar7) {
          uVar4 = FUN_1407ca880();
          plVar5 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar4);
          if (plVar5 != (longlong *)0x0) {
            uVar4 = FUN_1407ca880();
            plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
            if ((((plVar5 != plVar6) && (plVar6 != (longlong *)0x0)) &&
                (lVar7 = (**(code **)(*plVar6 + 0x50))(plVar6), lVar7 != 0)) &&
               (iVar1 = *(int *)(lVar7 + 0x48), (longlong)iVar1 != 0)) {
              lVar7 = *(longlong *)(lVar7 + 0x40);
              lVar10 = 0;
              do {
                if (*(longlong **)(*(longlong *)(lVar7 + lVar10) + 0x38) == param_1) {
                  local_50 = 0;
                  local_a0 = lVar7;
                  FUN_140881600(lVar9,*(undefined8 *)(lVar7 + lVar10),0,&local_50);
                  lVar7 = local_a0;
                }
                lVar10 = lVar10 + 0x10;
              } while ((longlong)iVar1 * 0x10 != lVar10);
            }
          }
        }
      }
      puVar8 = (undefined8 *)FUN_140880eba(*puVar11);
      if (puVar8 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        do {
          puVar11 = puVar8;
          lVar9 = (**(code **)(*(longlong *)puVar11[2] + 0x180))();
          if (lVar9 == *local_90) break;
          puVar8 = (undefined8 *)FUN_140880eba(*puVar11);
          puVar11 = (undefined8 *)0x0;
        } while (puVar8 != (undefined8 *)0x0);
      }
      goto LAB_140e148c0;
    }
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + -1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e14a60 FUN_140e14a60 body=1315 status=ok
// SIG undefined FUN_140e14a60(void)

void FUN_140e14a60(longlong param_1)

{
  float *pfVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined1 uVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 in_register_00001284 [12];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_118 [35];
  undefined1 local_f5;
  int local_f4;
  longlong local_f0;
  longlong *local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  undefined1 local_c9;
  longlong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8 [2];
  ulonglong local_a8;
  undefined1 local_98 [16];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar7 = FUN_14477bcf0();
  lVar7 = *(longlong *)(lVar7 + 0xa8);
  *(float *)(param_1 + 0x48) = *(float *)(lVar7 + 0x30) * 0.01;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(lVar7 + 0x34);
  *(float *)(param_1 + 0x50) = *(float *)(lVar7 + 0x38) * 0.01;
  *(float *)(param_1 + 0x54) = *(float *)(lVar7 + 0x3c) * 0.01;
  *(float *)(param_1 + 0x58) = *(float *)(lVar7 + 0x40) * 0.01;
  if (0 < *(int *)(param_1 + 0x10)) {
    local_e8 = (longlong *)(param_1 + 0x18);
    lVar7 = 0;
    local_f0 = param_1;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + lVar7 * 8);
      if (plVar2 != (longlong *)0x0) {
        local_f4 = (**(code **)(*plVar2 + 0x9f8))(plVar2);
        if ((longlong)(int)plVar2[0xd1] != 0) {
          lVar12 = (longlong)(int)plVar2[0xd1] * 0x30;
          puVar13 = (undefined8 *)(plVar2[0xd0] + 0x18);
          do {
            FUN_140e14f84(*puVar13,*(undefined4 *)(puVar13 + 1));
            *(undefined4 *)(puVar13 + 1) = 0;
            if (*(int *)((longlong)puVar13 + 0xc) != 0) {
              FUN_140e15106(puVar13,0);
            }
            puVar13 = puVar13 + 6;
            lVar12 = lVar12 + -0x30;
          } while (lVar12 != 0);
        }
        if (local_f4 == 5) {
          iVar6 = DAT_14cb1c7e8 + 1;
          *(int *)(plVar2 + 0xc6) = DAT_14cb1c7e8;
          DAT_14cb1c7e8 = iVar6;
        }
        if ((longlong)(int)plVar2[0xd1] != 0) {
          plVar10 = (longlong *)plVar2[0xd0];
          local_d8 = plVar10 + (longlong)(int)plVar2[0xd1] * 6;
          local_e0 = lVar7 << 0x20;
          do {
            if ((((plVar10[5] != 0) && (iVar6 = FUN_140e14fac(), iVar6 != -1)) &&
                (lVar12 = *plVar10, lVar12 != 0)) && (0 < *(int *)(lVar12 + 0x20))) {
              auVar16._4_12_ = in_register_00001284;
              auVar16._0_4_ = (float)(double)plVar2[0x49];
              auVar16 = insertps(ZEXT416((uint)(float)(double)plVar2[0x48]),auVar16,0x10);
              auVar16 = insertps(auVar16,ZEXT416((uint)(float)(double)plVar2[0x4a]),0x20);
              local_98 = insertps(auVar16,ZEXT416((uint)(float)(double)plVar2[0x4b]),0x30);
              FUN_144b45650(&local_c8,local_98);
              FUN_144b46c30(&local_c9,&local_c8);
              uVar8 = local_c9;
              fVar17 = (float)(double)plVar2[0x4c] * 0.01;
              fVar18 = (float)(double)plVar2[0x4d] * 0.01;
              fVar19 = (float)(double)plVar2[0x4e] * 0.01;
              fVar20 = (float)(double)plVar2[0x4e] * 0.01;
              uVar11 = (uint)((int)plVar2[0xc6] * 100 + iVar6) | local_e0;
              lVar3 = plVar10[5];
              if ((longlong)*(int *)(param_1 + 0x20) != 0) {
                plVar15 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x18);
                lVar14 = (longlong)*(int *)(param_1 + 0x20) * 0x28;
                do {
                  if (plVar15[-3] == lVar3) {
                    if (local_f4 == 5) {
                      iVar6 = (int)plVar15[1];
                      *(uint *)(plVar15 + 1) = iVar6 + 1U;
                      if (*(uint *)((longlong)plVar15 + 0xc) < iVar6 + 1U) {
                        local_f5 = local_c9;
                        FUN_140e15006(plVar15,iVar6);
                        uVar8 = local_f5;
                      }
                      lVar3 = *plVar15;
                      lVar14 = (longlong)iVar6 * 0x40;
                      *(longlong *)(lVar3 + lVar14) = lVar12;
                      *(undefined1 *)(lVar3 + 0x10 + lVar14) = uVar8;
                      pfVar1 = (float *)(lVar3 + 0x20 + lVar14);
                      *pfVar1 = fVar17;
                      pfVar1[1] = fVar18;
                      pfVar1[2] = fVar19;
                      pfVar1[3] = fVar20;
                      *(ulonglong *)(lVar3 + 0x30 + lVar14) = uVar11;
                    }
                    else {
                      iVar6 = (int)plVar15[-1];
                      *(uint *)(plVar15 + -1) = iVar6 + 1U;
                      if (*(uint *)((longlong)plVar15 + -4) < iVar6 + 1U) {
                        FUN_140e15006(plVar15 + -2,iVar6);
                      }
                      lVar3 = plVar15[-2];
                      lVar14 = (longlong)iVar6 * 0x40;
                      *(longlong *)(lVar3 + lVar14) = lVar12;
                      *(undefined1 *)(lVar3 + 0x10 + lVar14) = uVar8;
                      pfVar1 = (float *)(lVar3 + 0x20 + lVar14);
                      *pfVar1 = fVar17;
                      pfVar1[1] = fVar18;
                      pfVar1[2] = fVar19;
                      pfVar1[3] = fVar20;
                      *(ulonglong *)(lVar3 + 0x30 + lVar14) = uVar11;
                      param_1 = local_f0;
                    }
                    goto LAB_140e14d04;
                  }
                  plVar15 = plVar15 + 5;
                  lVar14 = lVar14 + -0x28;
                } while (lVar14 != 0);
              }
              local_b8[0] = 0;
              local_b8[1] = 0;
              local_c8 = 0;
              uStack_c0 = 0;
              local_a8 = 0;
              if (lVar3 != 0) {
                FUN_1401924dc(lVar3);
                local_c8 = lVar3;
              }
              puVar9 = &uStack_c0;
              if (local_f4 == 5) {
                puVar9 = local_b8 + 1;
              }
              uVar4 = (ulonglong)(local_f4 == 5);
              *(undefined4 *)(local_b8 + uVar4 * 2) = 1;
              FUN_140e15006(puVar9,0);
              plVar5 = local_e8;
              plVar15 = (longlong *)(&uStack_c0)[uVar4 * 2];
              *plVar15 = lVar12;
              *(undefined1 *)(plVar15 + 2) = uVar8;
              *(float *)(plVar15 + 4) = fVar17;
              *(float *)((longlong)plVar15 + 0x24) = fVar18;
              *(float *)(plVar15 + 5) = fVar19;
              *(float *)((longlong)plVar15 + 0x2c) = fVar20;
              plVar15[6] = uVar11;
              iVar6 = *(int *)(param_1 + 0x20);
              *(uint *)(param_1 + 0x20) = iVar6 + 1U;
              if (*(uint *)(param_1 + 0x24) < iVar6 + 1U) {
                FUN_140e15274(local_e8,iVar6);
              }
              lVar12 = local_c8;
              plVar15 = (longlong *)(*plVar5 + (longlong)iVar6 * 0x28);
              *plVar15 = 0;
              if (local_c8 != 0) {
                FUN_1401924dc(local_c8);
                *plVar15 = lVar12;
              }
              uVar4 = local_b8[0];
              uVar11 = uStack_c0;
              plVar15[1] = 0;
              *(int *)(plVar15 + 2) = (int)local_b8[0];
              if ((int)local_b8[0] == 0) {
                *(undefined4 *)((longlong)plVar15 + 0x14) = 0;
              }
              else {
                FUN_140e151aa(plVar15 + 1,local_b8[0] & 0xffffffff);
                FUN_140e15177(plVar15[1],uVar11,uVar4 & 0xffffffff);
              }
              uVar4 = local_a8;
              uVar11 = local_b8[1];
              plVar15[3] = 0;
              *(int *)(plVar15 + 4) = (int)local_a8;
              if ((int)local_a8 == 0) {
                *(undefined4 *)((longlong)plVar15 + 0x24) = 0;
              }
              else {
                FUN_140e151aa(plVar15 + 3,local_a8 & 0xffffffff);
                FUN_140e15177(plVar15[3],uVar11,uVar4 & 0xffffffff);
              }
              param_1 = local_f0;
              if (local_b8[1] != 0) {
                FUN_1400020a8();
              }
              if (uStack_c0 != 0) {
                FUN_1400020a8();
              }
              if ((local_c8 != 0) && (DAT_14c872a72 == '\0')) {
                FUN_140113f48();
              }
            }
LAB_140e14d04:
            plVar10 = plVar10 + 6;
          } while (plVar10 != local_d8);
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x10));
  }
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e14f84 FUN_140e14f84 body=40 status=ok
// SIG undefined FUN_140e14f84(void)

void FUN_140e14f84(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1409f518e(param_1);
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 140e14fac FUN_140e14fac body=89 status=ok
// SIG undefined FUN_140e14fac(void)

int FUN_140e14fac(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar2 = FUN_14477bcf0();
    if ((longlong)*(int *)(lVar2 + 0xc0) != 0) {
      iVar1 = 0x15;
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar2 + 0xb8) + lVar3) == param_1) {
          if (iVar1 == 0x14) {
            return -1;
          }
          return iVar1;
        }
        iVar1 = iVar1 + 1;
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(lVar2 + 0xc0) * 8 != lVar3);
    }
  }
  return -1;
}



// FUNCTION 140e15006 FUN_140e15006 body=255 status=ok
// SIG undefined FUN_140e15006(void)

void FUN_140e15006(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140e15106 FUN_140e15106 body=113 status=ok
// SIG undefined FUN_140e15106(void)

void FUN_140e15106(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 140e15177 FUN_140e15177 body=50 status=ok
// SIG undefined FUN_140e15177(void)

void FUN_140e15177(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = 0;
  do {
    *(undefined8 *)(param_1 + lVar4) = *(undefined8 *)(param_2 + lVar4);
    *(undefined1 *)(param_1 + 0x10 + lVar4) = *(undefined1 *)(param_2 + 0x10 + lVar4);
    puVar1 = (undefined8 *)(param_2 + 0x20 + lVar4);
    uVar3 = puVar1[1];
    puVar2 = (undefined8 *)(param_1 + 0x20 + lVar4);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    *(undefined8 *)(param_1 + 0x30 + lVar4) = *(undefined8 *)(param_2 + 0x30 + lVar4);
    lVar4 = lVar4 + 0x40;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 140e151aa FUN_140e151aa body=201 status=ok
// SIG undefined FUN_140e151aa(void)

void FUN_140e151aa(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = (longlong)param_2 * 0x40;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar1 < 0x7ff1) {
        uVar1 = (ulonglong)
                (ushort)(&DAT_14c841d90)
                        [0x32 - (byte)(&DAT_14c841e00)[((longlong)param_2 & 0x3ffffffffffffffU) * 4]
                        ];
      }
      else {
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
      }
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
    }
  }
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 6)) {
    uVar3 = uVar1 >> 6 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x40,0x10);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 140e15274 FUN_140e15274 body=370 status=ok
// SIG undefined FUN_140e15274(void)

void FUN_140e15274(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x28;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e152fd;
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
LAB_140e152fd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 140e153fa FUN_140e153fa body=73 status=ok
// SIG undefined FUN_140e153fa(void)

undefined8 * FUN_140e153fa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b345010;
  FUN_1400fd473(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e1544a FUN_140e1544a body=228 status=ok
// SIG undefined FUN_140e1544a(void)

longlong FUN_140e1544a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a5bb0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14585d82e;
    local_38 = &LAB_1470d1dbb;
    local_40 = &LAB_1462afa85;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxEngine",L"NexusConfigStoreBasic",&DAT_14c9a5bb0,&DAT_1470d1dba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a5bb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e15530 FUN_140e15530 body=490 status=ok
// SIG undefined FUN_140e15530(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e15530(void)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0x100000000;
  local_50 = &DAT_14c9a0e48;
  local_48 = 0xffffffff;
  local_40 = 0;
  if (DAT_14c9a0e60 == 0) {
    uVar16 = 1;
    local_48._0_4_ = 0xffffffff;
    local_48._4_4_ = 0;
    local_58._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    uVar16 = local_58 >> 0x20;
  }
  puVar7 = local_50;
  iVar15 = (int)local_58;
  uVar13 = (uint)local_48;
  iVar9 = local_48._4_4_;
  iVar12 = local_40;
  if (local_48._4_4_ < *(int *)(local_50 + 0x18)) {
    do {
      plVar5 = *(longlong **)(DAT_14c9a0e38 + 0x10 + (longlong)iVar9 * 0x20);
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
      uVar13 = uVar13 & ~(uint)uVar16;
      puVar10 = *(undefined **)(puVar7 + 0x10);
      if (*(undefined **)(puVar7 + 0x10) == (undefined *)0x0) {
        puVar10 = puVar7;
      }
      iVar4 = *(int *)(puVar7 + 0x18);
      lVar14 = (longlong)iVar15;
      uVar8 = *(uint *)(puVar10 + lVar14 * 4) & uVar13;
      if (uVar8 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar15) {
          iVar6 = iVar15;
        }
        if (iVar9 <= iVar15) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)(puVar10 + lVar11 * 4 + lVar14 * 4 + 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar14 == lVar11) goto LAB_140e15671;
        }
        iVar15 = iVar15 + (int)lVar11 + 1;
        uVar13 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar8 & uVar8);
      uVar3 = uVar16 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar4);
  }
LAB_140e15671:
  DAT_14c9a0e40 = 0;
  if (DAT_14c9a0e44 != 0) {
    FUN_1446f4a44(&DAT_14c9a0e38,0);
  }
  _DAT_14c9a0e68 = 0xffffffff;
  DAT_14c9a0e60 = 0;
  if (0x80 < DAT_14c9a0e64) {
    DAT_14c9a0e64 = 0x80;
    FUN_1446efbd8(&DAT_14c9a0e48,0);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1571c FUN_140e1571c body=92 status=ok
// SIG undefined FUN_140e1571c(void)

void FUN_140e1571c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x58);
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
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140e15778 FUN_140e15778 body=1349 status=ok
// SIG undefined FUN_140e15778(void)

void FUN_140e15778(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405f1eac();
  lVar3 = DAT_14cb83118;
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar2 = *(int *)(lVar12 + 0xc60);
  if (iVar2 == 0x40000002) {
    uVar8 = 0;
  }
  else {
    bVar14 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
      if (iVar2 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        bVar14 = DVar6 == DVar7;
      }
      else {
        bVar14 = false;
      }
    }
    uVar8 = (ulonglong)(bVar14 ^ 1);
  }
  DAT_14cb83104 = *(undefined4 *)(lVar3 + uVar8 * 4);
  plVar9 = *(longlong **)(param_1 + 0x788);
  if (plVar9 != (longlong *)0x0) {
    bVar14 = true;
    (**(code **)(*plVar9 + 0x718))(plVar9,1);
    lVar3 = DAT_14cb83148;
    plVar9 = *(longlong **)(param_1 + 0x788);
    iVar2 = *(int *)(lVar12 + 0xc60);
    if (iVar2 == 0x40000002) {
      uVar8 = 0;
    }
    else {
      if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
        if (iVar2 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          bVar14 = DVar6 == DVar7;
        }
        else {
          bVar14 = false;
        }
      }
      uVar8 = (ulonglong)(bVar14 ^ 1);
    }
    (**(code **)(*plVar9 + 0x910))(plVar9,*(undefined1 *)(lVar3 + uVar8));
  }
  if ((((*(byte *)(param_1 + 0x3e0) & 1) == 0) || (*(longlong *)(param_1 + 0x3f0) == 0)) ||
     (*(char *)(*(longlong *)(param_1 + 0x3f0) + 0x279) == '\x01')) {
    *(undefined4 *)(param_1 + 0x97c) = 0xbf800000;
  }
  else {
    *(undefined4 *)(param_1 + 0x97c) = 0x40c00000;
    FUN_140e15cbe(&local_68);
    local_48 = local_68;
    if (param_1 == 0) {
      uVar8 = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = *(uint *)(param_1 + 0xc);
      if ((int)uVar13 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      uVar5 = *(uint *)(lVar12 + 0x10);
      if (*(uint *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        uVar11 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar11);
        }
        LOCK();
        uVar5 = *(uint *)(lVar12 + 0x10);
        bVar14 = uVar5 == 0;
        if (bVar14) {
          *(uint *)(lVar12 + 0x10) = uVar11;
          uVar5 = 0;
        }
        UNLOCK();
        if (bVar14) {
          uVar5 = uVar11;
        }
      }
      uVar8 = (ulonglong)uVar5;
      if (local_68 == 0) {
        local_48 = 0;
      }
      else if (uVar5 == 0) {
        uVar8 = 0;
      }
      else if ((((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) &&
               ((plVar9 = (longlong *)
                          ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
                plVar9 != (longlong *)0x0 &&
                ((*(uint *)(plVar9 + 2) == uVar5 && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0))))))
              && (*plVar9 != 0)) {
        FUN_1400796d0(*(undefined8 *)(*plVar9 + 0x10),local_68,1);
      }
    }
    FUN_14067d554(param_1 + 0x20d,&local_58);
    local_50 = (ulonglong)uVar13 | uVar8 << 0x20;
    bVar4 = FUN_140a28ca8(param_1,local_58);
    *(byte *)(param_1 + 0x20d) = *(byte *)(param_1 + 0x20d) | bVar4;
  }
  plVar9 = *(longlong **)(param_1 + 0x788);
  if (plVar9 != (longlong *)0x0) {
    if ((*(longlong *)(param_1 + 0x4e8) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x4e8) + 0x148) == '\x01')) {
      if ((*(byte *)((longlong)plVar9 + 0x2d3) & 8) == 0) {
        *(byte *)((longlong)plVar9 + 0x2d3) = *(byte *)((longlong)plVar9 + 0x2d3) | 8;
        (**(code **)(*plVar9 + 0x958))();
        plVar9 = *(longlong **)(param_1 + 0x788);
      }
      plVar10 = plVar9;
      if (DAT_14c76142c == 1) {
        do {
          if ((*(byte *)(plVar10 + 0x3f) & 2) == 0) break;
          *(byte *)(plVar10 + 0x3f) = *(byte *)(plVar10 + 0x3f) & 0xfd;
          plVar1 = plVar10 + 0x24;
          plVar10 = (longlong *)*plVar1;
        } while ((longlong *)*plVar1 != (longlong *)0x0);
      }
      *(byte *)((longlong)plVar9 + 0x1f9) = *(byte *)((longlong)plVar9 + 0x1f9) | 4;
    }
    if ((*(longlong *)(param_1 + 0x3f0) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x3f0) + 0x369) & 0x40) != 0)) {
      plVar9 = *(longlong **)(param_1 + 0x788);
      if ((*(byte *)((longlong)plVar9 + 0x2d3) & 8) == 0) {
        *(byte *)((longlong)plVar9 + 0x2d3) = *(byte *)((longlong)plVar9 + 0x2d3) | 8;
        (**(code **)(*plVar9 + 0x958))();
      }
      FUN_140e15d6e(&local_60);
      if (param_1 == 0) {
        uVar8 = 0;
        uVar13 = 0;
      }
      else {
        uVar13 = *(uint *)(param_1 + 0xc);
        if ((int)uVar13 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        uVar5 = *(uint *)(lVar12 + 0x10);
        if (*(uint *)(lVar12 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          uVar11 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar11);
          }
          LOCK();
          uVar5 = *(uint *)(lVar12 + 0x10);
          bVar14 = uVar5 == 0;
          if (bVar14) {
            *(uint *)(lVar12 + 0x10) = uVar11;
            uVar5 = 0;
          }
          UNLOCK();
          if (bVar14) {
            uVar5 = uVar11;
          }
        }
        uVar8 = (ulonglong)uVar5;
        if (local_60 == 0) {
          local_60 = 0;
        }
        else if (uVar5 == 0) {
          uVar8 = 0;
        }
        else if (((((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) &&
                  (plVar9 = (longlong *)
                            ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
                  plVar9 != (longlong *)0x0)) &&
                 ((*(uint *)(plVar9 + 2) == uVar5 && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0))))
                && (*plVar9 != 0)) {
          FUN_1400796d0(*(undefined8 *)(*plVar9 + 0x10),local_60,1);
        }
      }
      FUN_140649f3e(param_1 + 0x203,&local_58);
      local_50 = (ulonglong)uVar13 | uVar8 << 0x20;
      local_48 = local_60;
      bVar4 = FUN_140a28ca8(param_1,local_58);
      *(byte *)(param_1 + 0x203) = *(byte *)(param_1 + 0x203) | bVar4;
    }
  }
  FUN_14022e476(param_1);
  FUN_140c7cbb8(param_1 + 0x5c0,param_1);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e15cbe FUN_140e15cbe body=175 status=ok
// SIG undefined FUN_140e15cbe(void)

undefined8 * FUN_140e15cbe(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb81b84) {
    FUN_144b3d300(&DAT_14cb81b84);
    if (DAT_14cb81b84 == -1) {
      local_20 = 0x690048006e004f;
      local_18 = 0x74;
      FUN_1446f470e(&DAT_14cb81b7c,&local_20,1);
      _Init_thread_footer(&DAT_14cb81b84);
    }
  }
  *param_1 = DAT_14cb81b7c;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e15d6e FUN_140e15d6e body=176 status=ok
// SIG undefined FUN_140e15d6e(void)

undefined8 * FUN_140e15d6e(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb843e0) {
    FUN_144b3d300(&DAT_14cb843e0);
    if (DAT_14cb843e0 == -1) {
      builtin_wcsncpy(local_38,L"OnActorOverlap",0xf);
      FUN_1446f470e(&DAT_14cb843d8,local_38,1);
      _Init_thread_footer(&DAT_14cb843e0);
    }
  }
  *param_1 = DAT_14cb843d8;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e15e2e FUN_140e15e2e body=59 status=ok
// SIG undefined FUN_140e15e2e(void)

undefined8 * FUN_140e15e2e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b919840;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e15e6a FUN_140e15e6a body=129 status=ok
// SIG undefined FUN_140e15e6a(void)

void FUN_140e15e6a(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  int iVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar1 = lVar3 + (longlong)iVar2 * 0x10;
        if (*(int *)(lVar3 + (longlong)iVar2 * 0x10) == *param_2) {
          iVar6 = *(int *)((longlong)plVar4 + (longlong)*(int *)(lVar1 + 0xc) * 4);
          if (iVar6 == iVar2) {
            piVar5 = (int *)((longlong)plVar4 + (longlong)*(int *)(lVar1 + 0xc) * 4);
          }
          else {
            do {
              piVar5 = (int *)((longlong)iVar6 * 0x10 + lVar3 + 8);
              iVar6 = *piVar5;
            } while (iVar6 != iVar2);
          }
          *piVar5 = *(int *)(lVar1 + 8);
          FUN_140e15eec();
          return;
        }
        iVar2 = *(int *)(lVar1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 140e15eec FUN_140e15eec body=114 status=ok
// SIG undefined FUN_140e15eec(void)

void FUN_140e15eec(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 140e15f6a FUN_140e15f6a body=160 status=ok
// SIG undefined FUN_140e15f6a(void)

undefined8 * FUN_140e15f6a(undefined8 *param_1)

{
  FUN_1406078d6();
  *param_1 = &PTR_FUN_14a4ea030;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x25) = 1;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3ff00000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x3ff0000000000000;
  param_1[0x2f] = 0x3ff0000000000000;
  param_1[0x30] = 0x3ff0000000000000;
  param_1[0x31] = 0;
  *(undefined2 *)(param_1 + 0x32) = 0x200;
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 1;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x11;
  return param_1;
}



// FUNCTION 140e1600a FUN_140e1600a body=33 status=ok
// SIG undefined FUN_140e1600a(void)

void FUN_140e1600a(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000140e16027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 140e1602c FUN_140e1602c body=309 status=ok
// SIG undefined FUN_140e1602c(void)

void FUN_140e1602c(void)

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
  lVar1 = FUN_1407f492e();
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
      lVar1 = FUN_140e16172(lVar1);
      if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e16172 FUN_140e16172 body=105 status=ok
// SIG undefined FUN_140e16172(void)

void FUN_140e16172(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140e16228();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_140e161dc(param_1 + 0x3b38,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e161dc FUN_140e161dc body=76 status=ok
// SIG undefined FUN_140e161dc(void)

void FUN_140e161dc(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140e16228();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140e16219;
    }
  }
  lVar2 = 0;
LAB_140e16219:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140e16228 FUN_140e16228 body=228 status=ok
// SIG undefined FUN_140e16228(void)

longlong FUN_140e16228(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbb2268 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_1440263f2;
    local_28 = &LAB_14102785e;
    local_38 = &LAB_148c58773;
    local_40 = &LAB_145c460ce;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x138;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_Cursor",&DAT_14cbb2268,&DAT_148c58772);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb2268;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e1630e FUN_140e1630e body=293 status=ok
// SIG undefined FUN_140e1630e(void)

void FUN_140e1630e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  void *_Src;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1447f69b6(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x110) = 0;
  iVar4 = DAT_14cbd5bc8;
  _Src = DAT_14cbd5bc0;
  puVar3 = (undefined8 *)(param_1 + 0x100);
  if ((void **)puVar3 != &DAT_14cbd5bc0) {
    lVar5 = (longlong)DAT_14cbd5bc8;
    *(int *)(param_1 + 0x108) = DAT_14cbd5bc8;
    if (iVar4 == 0 && *(int *)(param_1 + 0x10c) == 0) {
      *(undefined4 *)(param_1 + 0x10c) = 0;
    }
    else {
      FUN_1446dd670(puVar3,iVar4);
      if (iVar4 != 0) {
        memcpy((void *)*puVar3,_Src,lVar5 * 2);
      }
    }
  }
  FUN_1449027d0(param_1,&local_38);
  lVar5 = local_38[0x50];
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x20));
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
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
  local_38 = &DAT_14cbd5b50;
  iVar4 = FUN_140c8411c(lVar5);
  if (0 < iVar4) {
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x20));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e16434 FUN_140e16434 body=109 status=ok
// SIG undefined FUN_140e16434(void)

int FUN_140e16434(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return ((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e164b8 FUN_140e164b8 body=162 status=ok
// SIG undefined FUN_140e164b8(void)

undefined8 * FUN_140e164b8(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_14076ffa2();
  *param_1 = &PTR_FUN_14b2c9660;
  param_1[6] = &PTR_LAB_14b2c9950;
  *(undefined4 *)(param_1 + 0x13) = 2;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x15) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x3e4ccccd;
  *(undefined2 *)(param_1 + 0x16) = 0x101;
  lVar1 = 0xb8;
  do {
    FUN_1406d2124((longlong)param_1 + lVar1);
    lVar1 = lVar1 + 0x150;
  } while (lVar1 != 0x5f8);
  param_1[0xbf] = 0x3e99999a00000000;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x604) = 0x3e99999a;
  if (param_1[0xc] != 0) {
    *(undefined1 *)(param_1[0xc] + 0x2b) = 0;
  }
  return param_1;
}



// FUNCTION 140e16568 FUN_140e16568 body=31 status=ok
// SIG undefined FUN_140e16568(void)

undefined8 FUN_140e16568(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e16588 FUN_140e16588 body=458 status=ok
// SIG undefined FUN_140e16588(void)

void FUN_140e16588(longlong param_1)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1448aa298();
  lVar3 = *(longlong *)(param_1 + 0xa8);
  if (lVar3 != 0) {
    if (DAT_14cb46ec8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b4754c;
      local_48 = &LAB_1483e40eb;
      local_50 = &LAB_146486986;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000005;
      local_70 = 8;
      local_78 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if ((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) {
      lVar3 = *(longlong *)(lVar3 + 0x3a0);
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      *(longlong *)(param_1 + 0x1038) = lVar3;
      puVar1 = (undefined8 *)(param_1 + 0x1090);
      lVar3 = FUN_140297002(puVar1);
      if ((lVar3 != 0) && (*(char *)(param_1 + 0x1088) == '\x01')) {
        *puVar1 = 0;
        *(undefined8 *)(param_1 + 0x1098) = 0;
        *(undefined8 *)(param_1 + 0x10a0) = 0;
        *(undefined4 *)(param_1 + 0x10b0) = 0;
        if (*(int *)(param_1 + 0x10b4) < 0) {
          FUN_1446f8c06((undefined8 *)(param_1 + 0x10a8),0);
        }
        puVar2 = *(undefined2 **)(param_1 + 0x10a8);
        if (puVar2 != (undefined2 *)0x0) {
          *puVar2 = 0;
        }
      }
      lVar3 = FUN_140297002(puVar1);
      if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e16768 FUN_140e16768 body=685 status=ok
// SIG undefined FUN_140e16768(void)

void FUN_140e16768(longlong param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  double local_60;
  double local_58;
  double local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == (longlong *)0x0) {
    local_68._0_4_ = 0;
    iVar3 = 0;
    uVar8 = (uint)local_68;
  }
  else {
    uVar8 = *(uint *)((longlong)param_2 + 0xc);
    local_68 = (double)(ulonglong)uVar8;
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar3 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar3 = *(int *)(lVar7 + 0x10);
      bVar10 = iVar3 == 0;
      if (bVar10) {
        *(int *)(lVar7 + 0x10) = iVar5;
        iVar3 = 0;
      }
      UNLOCK();
      uVar8 = (uint)local_68;
      if (bVar10) {
        iVar3 = iVar5;
      }
    }
  }
  local_68._0_4_ = uVar8;
  local_68 = (double)CONCAT44(iVar3,(uint)local_68);
  iVar3 = *(int *)(param_1 + 0x3a8);
  if ((longlong)iVar3 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x3a0);
    uVar9 = 0;
    do {
      cVar1 = FUN_140e16a16(lVar7 + uVar9,&local_68);
      if (cVar1 != '\0') {
        if ((int)(~uVar9 >> 3) != 0) goto LAB_140e16914;
        break;
      }
      uVar9 = uVar9 + 8;
    } while ((longlong)iVar3 * 8 != uVar9);
  }
  if (param_2 == (longlong *)0x0) {
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    uVar8 = *(uint *)((longlong)param_2 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar9 = (ulonglong)*(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar4 = *(uint *)(lVar7 + 0x10);
      bVar10 = uVar4 == 0;
      if (bVar10) {
        *(uint *)(lVar7 + 0x10) = uVar6;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar4 = uVar6;
      }
      uVar9 = (ulonglong)uVar4;
    }
  }
  iVar3 = *(int *)(param_1 + 0x3a8);
  *(uint *)(param_1 + 0x3a8) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x3ac) < iVar3 + 1U) {
    FUN_140e16a7e(param_1 + 0x3a0,iVar3);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x3a0) + (longlong)iVar3 * 8) =
       (ulonglong)uVar8 | uVar9 << 0x20;
  bVar2 = (**(code **)(*param_2 + 0xa08))(param_2);
  cVar1 = (**(code **)(*param_2 + 0xa00))(param_2);
  iVar3 = (uint)bVar2 * 2 + 4;
  if (cVar1 == '\0') {
    iVar3 = (uint)bVar2 + (uint)bVar2;
  }
  local_50 = (double)param_2[0x2d] + (double)param_2[0x30];
  local_58 = (double)param_2[0x2c] + (double)param_2[0x2f];
  local_60 = (double)param_2[0x2d] - (double)param_2[0x30];
  local_68 = (double)param_2[0x2c] - (double)param_2[0x2f];
  local_48 = 1;
  FUN_140aab646(param_1,iVar3);
LAB_140e16914:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e16a16 FUN_140e16a16 body=104 status=ok
// SIG undefined FUN_140e16a16(void)

ulonglong FUN_140e16a16(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 == *param_2) && (uVar2 == param_2[1])) {
    uVar3 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
  }
  else {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)))) &&
       ((*(uint *)(lVar4 + 0x10) == uVar2 && ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar3 = FUN_144729dda(param_2);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// FUNCTION 140e16a7e FUN_140e16a7e body=353 status=ok
// SIG undefined FUN_140e16a7e(void)

void FUN_140e16a7e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e16b03;
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
LAB_140e16b03:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 140e16be0 FUN_140e16be0 body=255 status=ok
// SIG undefined FUN_140e16be0(void)

void FUN_140e16be0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140e16ce0 FUN_140e16ce0 body=162 status=ok
// SIG undefined FUN_140e16ce0(void)

void FUN_140e16ce0(longlong *param_1,undefined4 param_2)

{
  FUN_140e1736e();
  (**(code **)(*param_1 + 0x578))(param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc1e10) {
    FUN_144b3d300(&DAT_14cbc1e10);
    if (DAT_14cbc1e10 == -1) {
      FUN_1446f470e(&DAT_14cbc1e08,L"HiddenInGame",1);
      _Init_thread_footer(&DAT_14cbc1e10);
    }
  }
  FUN_140e16d82(param_1 + 0xc1d,DAT_14cbc1e08,param_2,0,0);
  return;
}



// FUNCTION 140e16d82 FUN_140e16d82 body=1228 status=ok
// SIG undefined FUN_140e16d82(void)

void FUN_140e16d82(longlong param_1,undefined8 param_2,undefined4 param_3,char param_4,char param_5)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 uVar13;
  char cVar14;
  bool bVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar14 = (char)param_3;
  local_60 = param_2;
  if (param_4 == '\0') {
    cVar3 = *(char *)(param_1 + 400);
    if (cVar14 == '\0') {
      FUN_1400bc8c2();
    }
    else {
      FUN_1400bc96c((char *)(param_1 + 400),&local_60);
    }
    if (cVar3 != *(char *)(param_1 + 400)) {
      if (param_5 != '\0') {
        uVar5 = *(undefined8 *)(param_1 + 0x150);
        uVar10 = FUN_141262f1a();
        plVar11 = (longlong *)FUN_144718840(uVar5,uVar10);
        if ((plVar11 != (longlong *)0x0) && (iVar9 = *(int *)(param_1 + 0xa8), 0 < iVar9)) {
          lVar16 = 0x20;
          lVar17 = 0;
          bVar15 = false;
          do {
            lVar4 = *(longlong *)(param_1 + 0xa0);
            lVar6 = *(longlong *)(lVar4 + lVar16);
            if (lVar6 != 0) {
              local_88 = 0;
              (**(code **)(*plVar11 + 200))(plVar11,&local_70,lVar6,param_3);
              lVar6 = local_70;
              if (cVar14 != '\0') {
                if (local_70 == 0) {
                  FUN_140e17250(*(undefined8 *)(lVar4 + lVar16),1);
                }
                else {
                  uVar5 = *(undefined8 *)(param_1 + 0x150);
                  local_58 = (undefined8 *)0x0;
                  local_50 = 0;
                  FUN_1446efa72(&local_58,0,3,0x10);
                  puVar8 = local_58;
                  local_50 = 3;
                  *local_58 = &PTR_LAB_14b3e9c20;
                  LOCK();
                  UNLOCK();
                  lVar12 = DAT_14c758608 + 1;
                  lVar4 = DAT_14c758608 + 1;
                  if (lVar12 == 0) {
                    LOCK();
                    UNLOCK();
                    lVar12 = DAT_14c758608 + 2;
                    lVar4 = DAT_14c758608 + 2;
                  }
                  DAT_14c758608 = lVar4;
                  local_58[2] = lVar12;
                  *local_58 = &PTR_FUN_14b4a9cc0;
                  local_58[3] = 0;
                  FUN_14485c47a(local_58 + 3,uVar5);
                  *(int *)(puVar8 + 4) = (int)lVar17;
                  puVar8[5] = param_1;
                  FUN_140ebcfd8(lVar6 + 0x18,&local_78,&local_58);
                  FUN_1449db362(&local_58);
                  bVar15 = true;
                }
              }
              plVar7 = local_68;
              if (local_68 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_68 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_68)(local_68);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar7 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                }
              }
              iVar9 = *(int *)(param_1 + 0xa8);
            }
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + 0x170;
          } while (lVar17 < iVar9);
          if (bVar15) goto LAB_140e16e34;
        }
      }
      iVar9 = *(int *)(param_1 + 0xa8);
      if ((longlong)iVar9 != 0) {
        lVar16 = *(longlong *)(param_1 + 0xa0);
        lVar17 = 0;
        do {
          lVar4 = *(longlong *)(lVar16 + 0x20 + lVar17);
          if (lVar4 != 0) {
            uVar13 = 1;
            if (cVar14 == '\0') {
              uVar13 = *(undefined1 *)(lVar16 + 0x148 + lVar17);
            }
            FUN_140e17250(lVar4,uVar13);
          }
          lVar17 = lVar17 + 0x170;
        } while ((longlong)iVar9 * 0x170 - lVar17 != 0);
      }
    }
  }
  else if ((*(longlong *)(param_1 + 0x150) != 0) &&
          (*(char *)(*(longlong *)(param_1 + 0x150) + 0x178) == '\x03')) {
    cVar3 = *(char *)(param_1 + 0x168);
    if (cVar14 == '\0') {
      FUN_1400bc8c2();
    }
    else {
      FUN_1400bc96c((char *)(param_1 + 0x168),&local_60);
    }
    if (cVar3 != *(char *)(param_1 + 0x168)) {
      if (param_5 != '\0') {
        uVar5 = *(undefined8 *)(param_1 + 0x150);
        uVar10 = FUN_141262f1a();
        plVar11 = (longlong *)FUN_144718840(uVar5,uVar10);
        if ((plVar11 != (longlong *)0x0) && (iVar9 = *(int *)(param_1 + 0xa8), 0 < iVar9)) {
          lVar16 = 0x20;
          lVar17 = 0;
          bVar15 = false;
          do {
            lVar4 = *(longlong *)(param_1 + 0xa0);
            lVar6 = *(longlong *)(lVar4 + lVar16);
            if (lVar6 != 0) {
              local_88 = 1;
              (**(code **)(*plVar11 + 200))(plVar11,&local_70,lVar6,param_3);
              lVar6 = local_70;
              if (cVar14 != '\0') {
                if (local_70 == 0) {
                  plVar7 = *(longlong **)(lVar4 + lVar16);
                  (**(code **)(*plVar7 + 0x330))(plVar7,1);
                }
                else {
                  uVar5 = *(undefined8 *)(param_1 + 0x150);
                  local_58 = (undefined8 *)0x0;
                  local_50 = 0;
                  FUN_1446efa72(&local_58,0,3,0x10);
                  puVar8 = local_58;
                  local_50 = 3;
                  *local_58 = &PTR_LAB_14b3e9c20;
                  LOCK();
                  UNLOCK();
                  lVar12 = DAT_14c758608 + 1;
                  lVar4 = DAT_14c758608 + 1;
                  if (lVar12 == 0) {
                    LOCK();
                    UNLOCK();
                    lVar12 = DAT_14c758608 + 2;
                    lVar4 = DAT_14c758608 + 2;
                  }
                  DAT_14c758608 = lVar4;
                  local_58[2] = lVar12;
                  *local_58 = &PTR_FUN_14b4a9c50;
                  local_58[3] = 0;
                  FUN_14485c47a(local_58 + 3,uVar5);
                  *(int *)(puVar8 + 4) = (int)lVar17;
                  puVar8[5] = param_1;
                  FUN_140ebcfd8(lVar6 + 0x18,&local_78,&local_58);
                  FUN_1449db362(&local_58);
                  bVar15 = true;
                }
              }
              plVar7 = local_68;
              if (local_68 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_68 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_68)(local_68);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar7 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                }
              }
              iVar9 = *(int *)(param_1 + 0xa8);
            }
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + 0x170;
          } while (lVar17 < iVar9);
          if (bVar15) goto LAB_140e16e34;
        }
      }
      iVar9 = *(int *)(param_1 + 0xa8);
      if ((longlong)iVar9 != 0) {
        lVar16 = *(longlong *)(param_1 + 0xa0);
        lVar17 = 0;
        do {
          plVar11 = *(longlong **)(lVar16 + 0x20 + lVar17);
          if (plVar11 != (longlong *)0x0) {
            uVar13 = 1;
            if (cVar14 == '\0') {
              uVar13 = *(undefined1 *)(lVar16 + 0x120 + lVar17);
            }
            (**(code **)(*plVar11 + 0x330))(plVar11,uVar13);
          }
          lVar17 = lVar17 + 0x170;
        } while ((longlong)iVar9 * 0x170 - lVar17 != 0);
      }
    }
  }
LAB_140e16e34:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e17250 FUN_140e17250 body=285 status=ok
// SIG undefined FUN_140e17250(void)

void FUN_140e17250(longlong param_1,char param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  undefined1 auStack_68 [39];
  byte local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar1 = *(byte *)(param_1 + 0xd50);
  if (((bVar1 & 0x10) == 0) == (bool)param_2) {
    bVar5 = 1;
    bVar6 = 1;
    if ((bVar1 & 0x10) == 0) {
      bVar6 = *(byte *)(param_1 + 0x60) >> 7;
    }
    *(byte *)(param_1 + 0xd50) = bVar1 & 0xef | param_2 << 4;
    if (param_2 == '\0') {
      bVar5 = *(byte *)(param_1 + 0x60) >> 7;
    }
    iVar2 = *(int *)(param_1 + 0xd10);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0xd08);
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        FUN_140cf5864(uVar4);
        FUN_140cf57c4(uVar4);
        FUN_1409d56ca(uVar4);
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar2 * 8 != lVar7);
    }
    iVar2 = *(int *)(param_1 + 0xd20);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0xd18);
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        FUN_140cf5864(uVar4);
        FUN_140cf57c4(uVar4);
        FUN_1409d56ca(uVar4);
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar2 * 8 != lVar7);
    }
    if (bVar6 != bVar5) {
      local_41 = bVar5;
      FUN_1447cd2ec(param_1 + 0xa50);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e1736e FUN_140e1736e body=1961 status=ok
// SIG undefined FUN_140e1736e(void)

void FUN_140e1736e(longlong param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong ****pppplVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  uint *puVar19;
  undefined8 in_R11;
  undefined8 uVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  char local_a1;
  uint *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong ***local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  param_2 = param_2 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140696702();
  FUN_140898514(param_1 + 0x11d0,param_2);
  local_a1 = (char)param_2;
  uVar7 = local_78;
  if (local_a1 != '\0') goto LAB_140e173b3;
  if (DAT_14cb63950 == 0) {
    local_c0 = &local_90;
    local_90 = FUN_144a7958c;
    local_b0 = FUN_14081d0ea;
    local_b8 = (code *)&LAB_1464ec72a;
    local_c8 = &LAB_1486f5f75;
    local_d0 = &LAB_140945686;
    local_d8 = L"Engine";
    local_e0 = 0;
    local_e8 = 0x10000004;
    local_f0 = 0x10;
    local_f8 = 0x19d0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
  }
  lVar2 = DAT_14cb63950;
  if ((DAT_14cb63950 == 0) || (DAT_14c950c29 == 0)) {
    if (DAT_14cb63950 != 0) goto LAB_140e17451;
    uVar20 = CONCAT71((int7)(param_2 >> 8),1);
    if (DAT_14cad00c8 == 0) goto LAB_140e178ec;
    lVar17 = 0;
    uVar20 = CONCAT71((int7)((ulonglong)in_R11 >> 8),1);
LAB_140e17486:
    bVar12 = lVar2 != 0 & DAT_14c950c29;
    if (lVar17 == DAT_14cad00c8) {
      if (bVar12 != 0) {
        FUN_1456cec3c(lVar2);
      }
      pcVar1 = (code *)(param_1 + 0x240);
      lVar2 = param_1 + 0x250;
      local_68 = (longlong ***)&DAT_100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = lVar2;
      if (*(int *)(param_1 + 0x268) == 0) {
        iVar16 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar16 = *(int *)(param_1 + 0x268);
      }
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar7 = local_78;
      local_88 = (longlong ****)local_68;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_90 = pcVar1;
      if ((local_78._4_4_ != iVar16) || (uStack_60 != lVar2)) {
        iVar8 = local_78._4_4_;
        local_78 = uVar7;
        do {
          plVar6 = *(longlong **)(*(longlong *)local_90 + (longlong)iVar8 * 0x10);
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0xcf0))();
          }
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar8 = local_78._4_4_;
          uVar7 = local_78;
        } while (local_90 != pcVar1 ||
                 (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar16));
      }
      goto LAB_140e173b3;
    }
    if (bVar12 != 0) goto LAB_140e179a7;
  }
  else {
    FUN_1456cec3c(DAT_14cb63950);
LAB_140e17451:
    if (DAT_14cad00c8 == 0) {
      local_c0 = &local_90;
      local_90 = FUN_144a7958c;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_14081d0ea;
      local_c8 = &LAB_1479b7a0c;
      local_d0 = &LAB_1463b464e;
      local_d8 = L"Engine";
      local_e0 = 0;
      local_e8 = 0x10000005;
      local_f0 = 8;
      local_f8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) {
        uVar20 = 0;
LAB_140e178ec:
        local_c0 = &local_90;
        local_90 = FUN_144a7958c;
        local_b0 = FUN_14081d0ea;
        local_b8 = FUN_14081d0ea;
        local_c8 = &LAB_1479b7a0c;
        local_d0 = &LAB_1463b464e;
        local_d8 = L"Engine";
        local_e0 = 0;
        local_e8 = 0x10000005;
        local_f0 = 8;
        local_f8 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        lVar17 = 0;
        goto LAB_140e17486;
      }
    }
    if (*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar2 + 0x38)) {
      uVar20 = 0;
      lVar17 = 0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
          == DAT_14cad00c8 + 0x30) {
        lVar17 = lVar2;
      }
      goto LAB_140e17486;
    }
    if (lVar2 == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = 0;
      if (DAT_14c950c29 == 0) goto LAB_140e174a3;
LAB_140e179a7:
      FUN_1456cec3c(lVar2);
    }
  }
LAB_140e174a3:
  puVar19 = (uint *)(param_1 + 0x250);
  iVar16 = *(int *)(param_1 + 0x268);
  uVar7 = local_78;
  if (iVar16 == 0) {
    uVar22 = 1;
    uVar14 = 0;
    iVar8 = 0;
    iVar15 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar9 = puVar19;
    }
    uVar21 = *puVar9;
    if (uVar21 == 0) {
      iVar8 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar8 = iVar16 + -1;
      }
      uVar14 = 0;
      uVar22 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar22 = uVar14;
      }
      iVar15 = 0;
      do {
        if (uVar22 == uVar14) goto LAB_140e173b3;
        iVar15 = iVar15 + 0x20;
        uVar21 = puVar9[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar21 == 0);
    }
    else {
      uVar14 = 0;
      iVar15 = 0;
    }
    uVar22 = (ulonglong)(-uVar21 & uVar21);
    uVar3 = uVar22 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar8 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar16 <= iVar8) {
      iVar8 = iVar16;
    }
  }
  if (iVar8 != iVar16) {
    uVar21 = 0xffffffff;
    local_a0 = puVar19;
    local_98 = uVar20;
    do {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x240) + (longlong)iVar8 * 0x10);
      if (plVar6 != (longlong *)0x0) {
        if ((lVar2 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(lVar2);
          puVar19 = local_a0;
          uVar20 = local_98;
        }
        if ((char)uVar20 == '\0') {
          if (DAT_14cad00c8 == 0) {
            local_c0 = &local_90;
            local_90 = FUN_144a7958c;
            local_b0 = FUN_14081d0ea;
            local_b8 = FUN_14081d0ea;
            local_c8 = &LAB_1479b7a0c;
            local_d0 = &LAB_1463b464e;
            local_d8 = L"Engine";
            local_e0 = 0;
            local_e8 = 0x10000005;
            local_f0 = 8;
            local_f8 = 0x110;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            puVar19 = local_a0;
            uVar20 = local_98;
            if (DAT_14cad00c8 == 0) goto LAB_140e177e6;
          }
          if (*(int *)(lVar2 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_140e177e6;
          lVar17 = 0;
          if (*(longlong *)
               (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
              DAT_14cad00c8 + 0x30) {
            lVar17 = lVar2;
          }
        }
        else {
LAB_140e177e6:
          lVar17 = 0;
        }
        if ((*(int *)(lVar17 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8)
            == lVar17 + 0x30)) {
          (**(code **)(*plVar6 + 0xcf0))(plVar6);
          puVar19 = local_a0;
          uVar20 = local_98;
        }
      }
      uVar21 = uVar21 & ~(uint)uVar22;
      puVar9 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar9 = puVar19;
      }
      iVar4 = *(int *)(param_1 + 0x268);
      iVar8 = (int)uVar14;
      lVar17 = (longlong)iVar8;
      uVar13 = puVar9[lVar17] & uVar21;
      if (uVar13 == 0) {
        iVar10 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar10 = iVar4 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar8) {
          iVar11 = iVar8;
        }
        puVar19 = local_a0;
        if (iVar8 < iVar10) {
          lVar18 = 0;
          do {
            uVar13 = puVar9[lVar17 + lVar18 + 1];
            if (uVar13 != 0) {
              uVar14 = (ulonglong)(iVar8 + (int)lVar18 + 1);
              uVar21 = 0xffffffff;
              goto LAB_140e1762d;
            }
            iVar15 = iVar15 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar11 - lVar17 != lVar18);
          uVar21 = 0xffffffff;
          iVar8 = iVar11;
        }
        uVar14 = (ulonglong)(iVar8 + 1);
        uVar20 = local_98;
        iVar8 = iVar4;
      }
      else {
LAB_140e1762d:
        uVar22 = (ulonglong)(-uVar13 & uVar13);
        uVar3 = uVar22 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar8 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar8) {
          iVar8 = iVar4;
        }
      }
      uVar7 = local_78;
    } while (iVar8 != iVar16);
  }
LAB_140e173b3:
  local_78 = uVar7;
  pppplVar5 = *(longlong *****)(param_1 + 0x35d0);
  if ((pppplVar5 != (longlong ****)0x0) && (*(char *)(pppplVar5 + 0x60) != local_a1)) {
    *(char *)(pppplVar5 + 0x60) = local_a1;
    local_88 = &local_68;
    local_90 = FUN_143d49e3a;
    local_68 = (longlong ***)pppplVar5;
    (*(code *)(*pppplVar5)[8])();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e17b18 FUN_140e17b18 body=103 status=ok
// SIG undefined FUN_140e17b18(void)

void FUN_140e17b18(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140e17bf8(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x20));
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_140e17b7f(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e17b7f FUN_140e17b7f body=121 status=ok
// SIG undefined FUN_140e17b7f(void)

void FUN_140e17b7f(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 8);
    do {
      if (puVar3[9] != 0) {
        FUN_1400020a8();
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar3 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        puVar2 = puVar3;
        if (0x18 < *(ushort *)(puVar3 + 3)) {
          puVar2 = (undefined8 *)*puVar3;
        }
        (*pcVar1)(puVar2);
      }
      if (0x18 < *(ushort *)(puVar3 + 3)) {
        FUN_1400020a8(*puVar3);
      }
      puVar3 = puVar3 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e17bf8 FUN_140e17bf8 body=218 status=ok
// SIG undefined FUN_140e17bf8(void)

void FUN_140e17bf8(longlong param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  if (param_2 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0xd0);
    do {
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar5 + 4) * 0x120));
      if (pcVar2 != (code *)0x0) {
        puVar3 = puVar5;
        if (0x18 < *(ushort *)(puVar5 + 3)) {
          puVar3 = (undefined8 *)*puVar5;
        }
        (*pcVar2)(puVar3);
      }
      if (0x18 < *(ushort *)(puVar5 + 3)) {
        FUN_1400020a8(*puVar5);
      }
      if (puVar5[-0xd] != 0) {
        FUN_1400020a8();
      }
      plVar1 = puVar5 + -0x17;
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar5 + -0x13) * 0x120));
      if (pcVar2 != (code *)0x0) {
        plVar4 = plVar1;
        if (0x18 < *(ushort *)(puVar5 + -0x14)) {
          plVar4 = (longlong *)*plVar1;
        }
        (*pcVar2)(plVar4);
      }
      if (0x18 < *(ushort *)(puVar5 + -0x14)) {
        FUN_1400020a8(*plVar1);
      }
      puVar5 = puVar5 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e17ce4 FUN_140e17ce4 body=2965 status=ok
// SIG undefined FUN_140e17ce4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e17ce4(undefined8 param_1,byte *param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  undefined8 *puVar4;
  byte bVar5;
  ushort uVar6;
  ushort *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  byte bVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 uVar17;
  int **ppiVar18;
  byte *pbVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  undefined4 *puVar23;
  longlong lVar24;
  float *pfVar25;
  int *piVar26;
  int iVar27;
  longlong lVar28;
  float *pfVar29;
  longlong lVar30;
  float *pfVar31;
  longlong lVar32;
  float *pfVar33;
  longlong lVar34;
  float *pfVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  undefined1 auStack_1a8 [32];
  float local_188;
  float local_184;
  float local_180;
  undefined4 local_17c;
  undefined8 local_178;
  longlong local_170;
  ulonglong local_168;
  ulonglong local_160;
  byte *local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  int local_124;
  byte *local_120;
  double local_118;
  undefined8 uStack_110;
  longlong *local_108;
  int *local_100;
  int local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*param_2 == 1) {
    iVar14 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar14 + 1;
    piVar26 = *(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar14 * 8);
    pbVar19 = param_2 + 0x48;
    bVar12 = 1;
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar7 + 1;
    uVar13 = uVar6 & 0x7fff;
    lVar22 = *(longlong *)(param_2 + 0x80);
    iVar14 = **(int **)(lVar22 + 0x20);
    lVar20 = 0;
    if (iVar14 <= (int)uVar13) {
      do {
        uVar13 = uVar13 - iVar14;
        iVar14 = (*(int **)(lVar22 + 0x20))[lVar20 + 1];
        lVar20 = lVar20 + 1;
      } while (iVar14 <= (int)uVar13);
    }
    piVar26 = (int *)((longlong)(int)uVar13 +
                     *(longlong *)(*(longlong *)(lVar22 + 0x18) + lVar20 * 8));
    pbVar19 = (byte *)(lVar22 + 0x38);
    bVar12 = *param_2;
  }
  local_170 = *(longlong *)(*(longlong *)pbVar19 + (longlong)*piVar26 * 8);
  if ((bVar12 & 1) == 0) {
    puVar7 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar7 + 1;
    uVar13 = uVar6 & 0x7fff;
    local_160 = (ulonglong)(uint)(uVar6 >> 0xf);
    lVar20 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar6 < 0) {
      lVar22 = (ulonglong)(uVar13 * *(int *)(lVar20 + 0x80)) + *(longlong *)(lVar20 + 0x70);
    }
    else {
      iVar14 = **(int **)(lVar20 + 0x20);
      lVar22 = 0;
      if (iVar14 <= (int)uVar13) {
        do {
          uVar13 = uVar13 - iVar14;
          iVar14 = (*(int **)(lVar20 + 0x20))[lVar22 + 1];
          lVar22 = lVar22 + 1;
        } while (iVar14 <= (int)uVar13);
      }
      lVar22 = (longlong)(int)uVar13 + *(longlong *)(*(longlong *)(lVar20 + 0x18) + lVar22 * 8);
    }
    iVar14 = *(int *)(lVar20 + 0x4c) * (uint)(uVar6 >> 0xf);
    bVar12 = *param_2;
  }
  else {
    iVar14 = *(int *)(param_2 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar14);
    local_160 = (ulonglong)bVar5;
    *(int *)(param_2 + 0x30) = iVar14 + 1;
    lVar22 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar14 * 8);
    iVar14 = *(int *)(param_2 + 0x44) * (uint)bVar5;
  }
  local_178 = CONCAT44(local_178._4_4_,iVar14);
  if ((bVar12 & 1) == 0) {
    puVar7 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar7 + 1;
    uVar13 = uVar6 & 0x7fff;
    lVar34 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar6 < 0) {
      lVar20 = (ulonglong)(uVar13 * *(int *)(lVar34 + 0x80)) + *(longlong *)(lVar34 + 0x70);
    }
    else {
      iVar14 = **(int **)(lVar34 + 0x20);
      lVar20 = 0;
      if (iVar14 <= (int)uVar13) {
        do {
          uVar13 = uVar13 - iVar14;
          iVar14 = (*(int **)(lVar34 + 0x20))[lVar20 + 1];
          lVar20 = lVar20 + 1;
        } while (iVar14 <= (int)uVar13);
      }
      lVar20 = (longlong)(int)uVar13 + *(longlong *)(*(longlong *)(lVar34 + 0x18) + lVar20 * 8);
    }
    local_130._0_4_ = (uint)(uVar6 >> 0xf);
    iVar14 = *(int *)(lVar34 + 0x4c) * (uint)local_130;
    bVar12 = *param_2;
    local_130 = (ulonglong)(uVar6 >> 0xf);
  }
  else {
    iVar14 = *(int *)(param_2 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar14);
    local_130 = (ulonglong)bVar5;
    *(int *)(param_2 + 0x30) = iVar14 + 1;
    lVar20 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar14 * 8);
    iVar14 = *(int *)(param_2 + 0x44) * (uint)bVar5;
  }
  local_118 = (double)CONCAT44(local_118._4_4_,iVar14);
  if ((bVar12 & 1) == 0) {
    puVar7 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar7 + 1;
    uVar13 = uVar6 & 0x7fff;
    lVar30 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar6 < 0) {
      lVar34 = (ulonglong)(uVar13 * *(int *)(lVar30 + 0x80)) + *(longlong *)(lVar30 + 0x70);
    }
    else {
      iVar14 = **(int **)(lVar30 + 0x20);
      lVar34 = 0;
      if (iVar14 <= (int)uVar13) {
        do {
          uVar13 = uVar13 - iVar14;
          iVar14 = (*(int **)(lVar30 + 0x20))[lVar34 + 1];
          lVar34 = lVar34 + 1;
        } while (iVar14 <= (int)uVar13);
      }
      lVar34 = (longlong)(int)uVar13 + *(longlong *)(*(longlong *)(lVar30 + 0x18) + lVar34 * 8);
    }
    local_138._0_4_ = (uint)(uVar6 >> 0xf);
    local_180 = (float)(*(int *)(lVar30 + 0x4c) * (uint)local_138);
    bVar12 = *param_2;
    local_138 = (ulonglong)(uVar6 >> 0xf);
  }
  else {
    iVar14 = *(int *)(param_2 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar14);
    local_138 = (ulonglong)bVar5;
    *(int *)(param_2 + 0x30) = iVar14 + 1;
    lVar34 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar14 * 8);
    local_180 = (float)(*(int *)(param_2 + 0x44) * (uint)bVar5);
  }
  if ((bVar12 & 1) == 0) {
    puVar7 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar7 + 1;
    uVar13 = uVar6 & 0x7fff;
    lVar32 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar6 < 0) {
      lVar30 = (ulonglong)(uVar13 * *(int *)(lVar32 + 0x80)) + *(longlong *)(lVar32 + 0x70);
    }
    else {
      iVar14 = **(int **)(lVar32 + 0x20);
      lVar30 = 0;
      if (iVar14 <= (int)uVar13) {
        do {
          uVar13 = uVar13 - iVar14;
          iVar14 = (*(int **)(lVar32 + 0x20))[lVar30 + 1];
          lVar30 = lVar30 + 1;
        } while (iVar14 <= (int)uVar13);
      }
      lVar30 = (longlong)(int)uVar13 + *(longlong *)(*(longlong *)(lVar32 + 0x18) + lVar30 * 8);
    }
    local_140._0_4_ = (uint)(uVar6 >> 0xf);
    local_184 = (float)(*(int *)(lVar32 + 0x4c) * (uint)local_140);
    bVar12 = *param_2;
    local_140 = (ulonglong)(uVar6 >> 0xf);
  }
  else {
    iVar14 = *(int *)(param_2 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar14);
    local_140 = (ulonglong)bVar5;
    *(int *)(param_2 + 0x30) = iVar14 + 1;
    lVar30 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar14 * 8);
    local_184 = (float)(*(int *)(param_2 + 0x44) * (uint)bVar5);
  }
  if ((bVar12 & 1) == 0) {
    puVar7 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar7 + 1;
    uVar13 = uVar6 & 0x7fff;
    lVar28 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar6 < 0) {
      lVar32 = (ulonglong)(uVar13 * *(int *)(lVar28 + 0x80)) + *(longlong *)(lVar28 + 0x70);
    }
    else {
      iVar14 = **(int **)(lVar28 + 0x20);
      lVar32 = 0;
      if (iVar14 <= (int)uVar13) {
        do {
          uVar13 = uVar13 - iVar14;
          iVar14 = (*(int **)(lVar28 + 0x20))[lVar32 + 1];
          lVar32 = lVar32 + 1;
        } while (iVar14 <= (int)uVar13);
      }
      lVar32 = (longlong)(int)uVar13 + *(longlong *)(*(longlong *)(lVar28 + 0x18) + lVar32 * 8);
    }
    local_148._0_4_ = (uint)(uVar6 >> 0xf);
    local_188 = (float)(*(int *)(lVar28 + 0x4c) * (uint)local_148);
    bVar12 = *param_2;
    local_148 = (ulonglong)(uVar6 >> 0xf);
  }
  else {
    iVar14 = *(int *)(param_2 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar14);
    local_148 = (ulonglong)bVar5;
    *(int *)(param_2 + 0x30) = iVar14 + 1;
    lVar32 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar14 * 8);
    local_188 = (float)(*(int *)(param_2 + 0x44) * (uint)bVar5);
  }
  if ((bVar12 & 1) == 0) {
    puVar7 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar7 + 1;
    uVar13 = uVar6 & 0x7fff;
    lVar24 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar6 < 0) {
      lVar28 = (ulonglong)(uVar13 * *(int *)(lVar24 + 0x80)) + *(longlong *)(lVar24 + 0x70);
    }
    else {
      iVar14 = **(int **)(lVar24 + 0x20);
      lVar28 = 0;
      if (iVar14 <= (int)uVar13) {
        do {
          uVar13 = uVar13 - iVar14;
          iVar14 = (*(int **)(lVar24 + 0x20))[lVar28 + 1];
          lVar28 = lVar28 + 1;
        } while (iVar14 <= (int)uVar13);
      }
      lVar28 = (longlong)(int)uVar13 + *(longlong *)(*(longlong *)(lVar24 + 0x18) + lVar28 * 8);
    }
    local_150._0_4_ = (uint)(uVar6 >> 0xf);
    local_124 = *(int *)(lVar24 + 0x4c) * (uint)local_150;
    bVar12 = *param_2;
    local_150 = (ulonglong)(uVar6 >> 0xf);
  }
  else {
    iVar14 = *(int *)(param_2 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar14);
    local_150 = (ulonglong)bVar5;
    *(int *)(param_2 + 0x30) = iVar14 + 1;
    lVar28 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar14 * 8);
    local_124 = *(int *)(param_2 + 0x44) * (uint)bVar5;
  }
  if ((bVar12 & 1) == 0) {
    puVar7 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar7 + 1;
    uVar13 = uVar6 & 0x7fff;
    lVar16 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar6 < 0) {
      lVar24 = (ulonglong)(uVar13 * *(int *)(lVar16 + 0x80)) + *(longlong *)(lVar16 + 0x70);
    }
    else {
      iVar14 = **(int **)(lVar16 + 0x20);
      lVar24 = 0;
      if (iVar14 <= (int)uVar13) {
        do {
          uVar13 = uVar13 - iVar14;
          iVar14 = (*(int **)(lVar16 + 0x20))[lVar24 + 1];
          lVar24 = lVar24 + 1;
        } while (iVar14 <= (int)uVar13);
      }
      lVar24 = (longlong)(int)uVar13 + *(longlong *)(*(longlong *)(lVar16 + 0x18) + lVar24 * 8);
    }
    local_168 = (ulonglong)(uVar6 >> 0xf);
    pbVar19 = (byte *)(lVar16 + 0x4c);
  }
  else {
    iVar14 = *(int *)(param_2 + 0x30);
    local_168 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar14);
    *(int *)(param_2 + 0x30) = iVar14 + 1;
    lVar24 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar14 * 8);
    pbVar19 = param_2 + 0x44;
  }
  iVar14 = *(int *)pbVar19;
  iVar27 = (int)local_168;
  ppiVar18 = &local_100;
  local_158 = param_2;
  FUN_140126e42(ppiVar18,param_2);
  lVar16 = *(longlong *)(local_170 + 0x20);
  if (lVar16 == 0) {
    ppiVar18 = (int **)FUN_140067708();
    lVar16 = FUN_14477b664(ppiVar18);
    *(longlong *)(local_170 + 0x20) = lVar16;
  }
  local_17c = (undefined4)CONCAT71((int7)((ulonglong)ppiVar18 >> 8),1);
  if (*(longlong *)(local_170 + 0x28) == 0) {
    if ((lVar16 != 0) && (plVar1 = (longlong *)(local_170 + 0x18), *plVar1 != 0)) {
      local_120 = *(byte **)(lVar16 + 0xb8);
      local_108 = plVar1;
      if ((local_120 == (byte *)0x0) ||
         (lVar16 = (**(code **)(*(longlong *)local_120 + 0x108))(local_120), (char)lVar16 == '\0'))
      {
        *(undefined8 *)(local_170 + 0x28) = 0;
      }
      else {
        uVar17 = (**(code **)(*(longlong *)local_120 + 0x110))();
        lVar16 = FUN_144aff482(uVar17,local_108);
        *(longlong *)(local_170 + 0x28) = lVar16;
        if (lVar16 != 0) goto LAB_140e180a6;
        lVar16 = 0;
      }
    }
    if (*(char *)(local_170 + 8) == '\x01') {
      local_17c = (undefined4)
                  CONCAT71((int7)((ulonglong)lVar16 >> 8),*(longlong *)(local_170 + 0xc) != 0);
    }
    else {
      local_17c = 0;
    }
  }
LAB_140e180a6:
  local_120 = local_158 + 0x3c;
  pbVar19 = (byte *)(*(longlong *)(local_158 + 0x80) + 0x40);
  if (*local_158 != 0) {
    pbVar19 = local_120;
  }
  if (0 < *(int *)pbVar19) {
    puVar23 = (undefined4 *)(lVar22 + (longlong)(int)local_178 * 4);
    pfVar25 = (float *)(lVar20 + (longlong)local_118._0_4_ * 4);
    pfVar35 = (float *)(lVar34 + (longlong)(int)local_180 * 4);
    pfVar31 = (float *)(lVar30 + (longlong)(int)local_184 * 4);
    pfVar33 = (float *)(lVar32 + (longlong)(int)local_188 * 4);
    pfVar29 = (float *)(lVar28 + (longlong)local_124 * 4);
    pfVar21 = (float *)(lVar24 + (longlong)(iVar14 * iVar27) * 4);
    local_168 = (ulonglong)(uint)((int)local_168 << 2);
    local_150 = (ulonglong)(uint)((int)local_150 << 2);
    local_148 = (ulonglong)(uint)((int)local_148 << 2);
    local_160 = (ulonglong)(uint)((int)local_160 << 2);
    local_140 = (ulonglong)(uint)((int)local_140 << 2);
    local_138 = (ulonglong)(uint)((int)local_138 << 2);
    local_130 = (ulonglong)(uint)((int)local_130 << 2);
    iVar14 = 0;
    do {
      local_178 = CONCAT44(local_178._4_4_,*puVar23);
      local_180 = *pfVar31;
      local_184 = *pfVar35;
      local_188 = *pfVar25;
      local_118 = *(double *)(local_170 + 0x48);
      uStack_110 = 0;
      dVar2 = *(double *)(local_170 + 0x38);
      dVar3 = *(double *)(local_170 + 0x40);
      dVar42 = (double)*pfVar29;
      auVar44._8_4_ = SUB84(dVar42,0);
      auVar44._0_8_ = (double)*pfVar33;
      auVar44._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
      auVar44 = divpd(auVar44,_DAT_1499387d0);
      auVar41._0_8_ = (double)*pfVar21 / 360.0;
      auVar41._8_8_ = 0;
      auVar44 = roundpd(auVar44,auVar44,3);
      auVar41 = roundpd(auVar41,auVar41,3);
      dVar39 = ((double)*pfVar33 - auVar44._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar42 = (dVar42 - auVar44._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar45 = ((double)*pfVar21 - auVar41._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar46 = (0.0 - auVar41._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar36 = sin(dVar39);
      dVar37 = sin(dVar42);
      dVar38 = sin(dVar45);
      sin(dVar46);
      dVar39 = cos(dVar39);
      dVar42 = cos(dVar42);
      dVar45 = cos(dVar45);
      cos(dVar46);
      iVar27 = 0;
      if (((int)local_178 != 0 & (byte)local_17c) == 1) {
        dVar46 = dVar36 * dVar37 * dVar38 + dVar39 * dVar42 * dVar45;
        dVar10 = -(dVar42 * dVar36 * dVar45) - dVar37 * dVar39 * dVar38;
        dVar40 = (double)local_188;
        dVar3 = dVar3 + (double)local_184;
        dVar43 = local_118 + (double)local_180;
        local_178 = *(undefined8 *)(local_170 + 0x50);
        puVar15 = (undefined8 *)FUN_14001cc68(0x90,0x10);
        *puVar15 = 0;
        auVar9._8_4_ = SUB84(dVar10,0);
        auVar9._0_8_ = dVar37 * dVar36 * dVar45 - dVar42 * dVar39 * dVar38;
        auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *(undefined1 (*) [16])(puVar15 + 2) = auVar9;
        auVar8._8_4_ = SUB84(dVar46,0);
        auVar8._0_8_ = -(dVar36 * dVar42 * dVar38) + dVar39 * dVar37 * dVar45;
        auVar8._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
        *(undefined1 (*) [16])(puVar15 + 4) = auVar8;
        auVar11._8_4_ = SUB84(dVar3,0);
        auVar11._0_8_ = dVar2 + dVar40;
        auVar11._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        *(undefined1 (*) [16])(puVar15 + 6) = auVar11;
        puVar15[8] = dVar43;
        puVar15[9] = 0;
        puVar15[10] = 0x3ff0000000000000;
        puVar15[0xb] = 0x3ff0000000000000;
        puVar15[0xc] = 0x3ff0000000000000;
        puVar15[0xd] = 0;
        puVar15[0xe] = local_178;
        *(undefined2 *)(puVar15 + 0xf) = 0;
        *(undefined8 *)((longlong)puVar15 + 0x7c) = 0;
        if (puVar15 != (undefined8 *)0x0) {
          LOCK();
          puVar4 = *(undefined8 **)(local_170 + 0x70);
          *(undefined8 **)(local_170 + 0x70) = puVar15;
          UNLOCK();
          LOCK();
          *puVar4 = puVar15;
          UNLOCK();
        }
        iVar27 = -(uint)(puVar15 != (undefined8 *)0x0);
      }
      piVar26 = local_100 + local_f8;
      *local_100 = iVar27;
      iVar14 = iVar14 + 1;
      pbVar19 = (byte *)(*(longlong *)(local_158 + 0x80) + 0x40);
      if (*local_158 != 0) {
        pbVar19 = local_120;
      }
      pfVar21 = (float *)((longlong)pfVar21 + local_168);
      pfVar29 = (float *)((longlong)pfVar29 + local_150);
      pfVar33 = (float *)((longlong)pfVar33 + local_148);
      puVar23 = (undefined4 *)((longlong)puVar23 + local_160);
      pfVar31 = (float *)((longlong)pfVar31 + local_140);
      pfVar35 = (float *)((longlong)pfVar35 + local_138);
      pfVar25 = (float *)((longlong)pfVar25 + local_130);
      local_100 = piVar26;
    } while (iVar14 < *(int *)pbVar19);
  }
  if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


