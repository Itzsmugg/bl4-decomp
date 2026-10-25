// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144c74c80 FUN_144c74c80 body=105 status=ok
// SIG undefined FUN_144c74c80(void)

void FUN_144c74c80(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(param_1 + lVar3 * 0x18);
    do {
      lVar1 = plVar2[1];
      if (lVar1 != 0) {
        FUN_144be5d10(lVar1);
        (*DAT_14c787678)(0,lVar1,0);
      }
      if (*plVar2 != 0) {
        FUN_144b3f230();
      }
      plVar2 = plVar2 + -3;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144c74d20 FUN_144c74d20 body=132 status=ok
// SIG undefined FUN_144c74d20(void)

void FUN_144c74d20(longlong param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    lVar4 = (longlong)param_4;
    lVar3 = param_1 - (longlong)param_2;
    plVar2 = param_2;
    do {
      if (*(longlong *)((longlong)plVar2 + lVar3) != *plVar2) {
        if (*plVar2 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *(longlong *)((longlong)plVar2 + lVar3);
        *(longlong *)((longlong)plVar2 + lVar3) = *plVar2;
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      *(undefined1 *)(lVar3 + 0x10 + (longlong)plVar2) =
           *(undefined1 *)((longlong)param_2 + (lVar3 - param_1) + 0x10 + (longlong)plVar2);
      plVar2 = plVar2 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 144c74db0 FUN_144c74db0 body=67 status=ok
// SIG undefined FUN_144c74db0(void)

void FUN_144c74db0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144b3e890(param_1);
        FUN_144caec40(param_1 + 0x40);
      }
      param_1 = param_1 + 0x160;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c74e00 FUN_144c74e00 body=80 status=ok
// SIG undefined FUN_144c74e00(void)

void FUN_144c74e00(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c74e80 FUN_144c74e80 body=63 status=ok
// SIG undefined FUN_144c74e80(void)

void FUN_144c74e80(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c74ec0 FUN_144c74ec0 body=80 status=ok
// SIG undefined FUN_144c74ec0(void)

void FUN_144c74ec0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c74f40 FUN_144c74f40 body=97 status=ok
// SIG undefined FUN_144c74f40(void)

void FUN_144c74f40(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c74fb0 FUN_144c74fb0 body=63 status=ok
// SIG undefined FUN_144c74fb0(void)

void FUN_144c74fb0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c74ff0 FUN_144c74ff0 body=97 status=ok
// SIG undefined FUN_144c74ff0(void)

void FUN_144c74ff0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c75100 FUN_144c75100 body=80 status=ok
// SIG undefined FUN_144c75100(void)

void FUN_144c75100(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c75150 FUN_144c75150 body=74 status=ok
// SIG undefined FUN_144c75150(void)

void FUN_144c75150(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c751a0 FUN_144c751a0 body=63 status=ok
// SIG undefined FUN_144c751a0(void)

void FUN_144c751a0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c751e0 FUN_144c751e0 body=80 status=ok
// SIG undefined FUN_144c751e0(void)

void FUN_144c751e0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c75230 FUN_144c75230 body=91 status=ok
// SIG undefined FUN_144c75230(void)

void FUN_144c75230(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c75290 FUN_144c75290 body=63 status=ok
// SIG undefined FUN_144c75290(void)

void FUN_144c75290(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c752d0 FUN_144c752d0 body=97 status=ok
// SIG undefined FUN_144c752d0(void)

void FUN_144c752d0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c75340 FUN_144c75340 body=94 status=ok
// SIG undefined FUN_144c75340(void)

void FUN_144c75340(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x520 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xa4;
      plVar2 = plVar2 + -0xa4;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c753a0 FUN_144c753a0 body=97 status=ok
// SIG undefined FUN_144c753a0(void)

void FUN_144c753a0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c75410 FUN_144c75410 body=505 status=ok
// SIG undefined FUN_144c75410(void)

void FUN_144c75410(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 0x160);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -0x58) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -0x56) = 0xffffffff;
        *(undefined8 *)(puVar2 + -0x54) = 1;
        *(undefined ***)(puVar2 + -0x58) = hkaiWorld::vftable;
        FUN_144c96650(puVar2 + -0x52);
        *(undefined8 *)(puVar2 + -8) = 0;
        *(undefined8 *)(puVar2 + -6) = 0;
        *(undefined8 *)(puVar2 + -4) = 0;
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
        *(undefined8 *)(puVar2 + 8) = 0;
        *(undefined1 *)(puVar2 + 0x2a) = 0;
        *(undefined8 *)(puVar2 + 0x2c) = 0;
        puVar2[0x2e] = 0;
        puVar2[0x2f] = 0x80000000;
        *(undefined1 *)(puVar2 + 0x30) = 0;
        *(undefined8 *)(puVar2 + 0x32) = 0;
        *(undefined8 *)(puVar2 + 0x34) = 0;
        puVar2[0x38] = 0xffffffff;
        FUN_144b40b30(puVar2 + 0x3c);
        FUN_144c31710(puVar2 + 0x84,0);
        puVar2[0xb0] = 1;
        *(undefined1 *)(puVar2 + 0xb4) = 0;
        *(undefined8 *)(puVar2 + 0xb6) = 0;
        *(undefined8 *)(puVar2 + 0xb8) = 0;
        *(undefined8 *)(puVar2 + 0xba) = 0;
        *(undefined8 *)(puVar2 + 0xbc) = 0;
        *(undefined8 *)(puVar2 + 0xbe) = 0;
        *(undefined8 *)(puVar2 + 0xc0) = 0;
        *(undefined8 *)(puVar2 + 0xc2) = 0;
        *(undefined8 *)(puVar2 + 0xc4) = 0;
        *(undefined8 *)(puVar2 + 0xc6) = 0;
        *(undefined8 *)(puVar2 + 200) = 0;
        *(undefined8 *)(puVar2 + 0xca) = 0;
        *(undefined8 *)(puVar2 + 0xcc) = 0;
        *(undefined8 *)(puVar2 + 0xce) = 0;
        *(undefined8 *)(puVar2 + 0xd0) = 0;
        *(undefined8 *)(puVar2 + 0xd2) = 0;
        *(undefined8 *)(puVar2 + 0xd4) = 0;
        puVar2[0xd6] = 0;
        puVar2[0xd7] = 0x3b449ba6;
        FUN_144fae550(puVar2 + 0xd8);
        *(undefined8 *)(puVar2 + 0xda) = 0;
        *(undefined8 *)(puVar2 + 0xde) = 0;
        puVar2[0xe0] = 0;
        *(undefined8 *)(puVar2 + 0xe2) = 0;
        *(undefined8 *)(puVar2 + 0xe6) = 0;
        *(undefined8 *)(puVar2 + 0xe8) = 0;
        puVar2[0xea] = 0;
        puVar2[0xeb] = 0x80000000;
        *(undefined8 *)(puVar2 + 0xec) = 0;
      }
      puVar2 = puVar2 + 0x148;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c75610 FUN_144c75610 body=74 status=ok
// SIG undefined FUN_144c75610(void)

void FUN_144c75610(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c75660 FUN_144c75660 body=18 status=ok
// SIG undefined FUN_144c75660(void)

undefined8 * FUN_144c75660(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e7570;
  return param_2;
}



// FUNCTION 144c75680 FUN_144c75680 body=207 status=ok
// SIG undefined FUN_144c75680(void)

undefined8 * FUN_144c75680(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[3];
  lVar3 = lVar2 + (longlong)*(int *)(param_1 + 4) * 8;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 3);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 144c757e0 FUN_144c757e0 body=712 status=ok
// SIG undefined FUN_144c757e0(void)

void FUN_144c757e0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint *puVar14;
  
  lVar12 = (longlong)param_4;
  if (0 < param_4) {
    puVar14 = (uint *)(param_1 + 0x24);
    do {
      if (puVar14 + -9 != (uint *)0x0) {
        puVar14[-7] = 0xffffffff;
        puVar14[-6] = 0;
        puVar14[-5] = 1;
        puVar14[-4] = 0;
        *(undefined ***)(puVar14 + -9) = hkaiUserEdgeSetupArray::vftable;
        puVar14[-3] = 0;
        puVar14[-2] = 0;
        puVar14[-1] = 0;
        *puVar14 = 0x80000000;
        uVar3 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar14);
        lVar5 = *(longlong *)((param_2 - param_1) + -0xc + (longlong)puVar14);
        if (0 < (int)uVar3) {
          puVar10 = (undefined8 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 * 0x120);
          *(undefined8 **)(puVar14 + -3) = puVar10;
          uVar11 = (ulonglong)uVar3;
          puVar14[-1] = uVar3;
          puVar13 = (undefined8 *)(lVar5 + 0x70);
          *puVar14 = uVar3;
          do {
            if (puVar10 != (undefined8 *)0x0) {
              uVar9 = puVar13[-0xd];
              plVar1 = puVar10 + 0x14;
              *puVar10 = puVar13[-0xe];
              puVar10[1] = uVar9;
              uVar9 = puVar13[-0xb];
              puVar10[2] = puVar13[-0xc];
              puVar10[3] = uVar9;
              uVar9 = puVar13[-9];
              puVar10[4] = puVar13[-10];
              puVar10[5] = uVar9;
              uVar9 = puVar13[-7];
              puVar10[6] = puVar13[-8];
              puVar10[7] = uVar9;
              uVar9 = puVar13[-5];
              puVar10[8] = puVar13[-6];
              puVar10[9] = uVar9;
              uVar9 = puVar13[-3];
              puVar10[10] = puVar13[-4];
              puVar10[0xb] = uVar9;
              uVar9 = puVar13[-1];
              puVar10[0xc] = puVar13[-2];
              puVar10[0xd] = uVar9;
              uVar9 = puVar13[1];
              puVar10[0xe] = *puVar13;
              puVar10[0xf] = uVar9;
              uVar6 = *(undefined4 *)((longlong)puVar13 + 0x14);
              uVar7 = *(undefined4 *)(puVar13 + 3);
              uVar8 = *(undefined4 *)((longlong)puVar13 + 0x1c);
              *(undefined4 *)(puVar10 + 0x10) = *(undefined4 *)(puVar13 + 2);
              *(undefined4 *)((longlong)puVar10 + 0x84) = uVar6;
              *(undefined4 *)(puVar10 + 0x11) = uVar7;
              *(undefined4 *)((longlong)puVar10 + 0x8c) = uVar8;
              uVar6 = *(undefined4 *)((longlong)puVar13 + 0x24);
              uVar7 = *(undefined4 *)(puVar13 + 5);
              uVar8 = *(undefined4 *)((longlong)puVar13 + 0x2c);
              *(undefined4 *)(puVar10 + 0x12) = *(undefined4 *)(puVar13 + 4);
              *(undefined4 *)((longlong)puVar10 + 0x94) = uVar6;
              *(undefined4 *)(puVar10 + 0x13) = uVar7;
              *(undefined4 *)((longlong)puVar10 + 0x9c) = uVar8;
              *plVar1 = (longlong)(puVar10 + 0x16);
              *(undefined4 *)(puVar10 + 0x15) = 0;
              *(undefined4 *)((longlong)puVar10 + 0xac) = 0x80000004;
              if (puVar13 + 6 != plVar1) {
                iVar4 = *(int *)(puVar13 + 7);
                lVar5 = puVar13[6];
                if (4 < iVar4) {
                  FUN_141807e20(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
                }
                FUN_144b3d470(*plVar1,lVar5,(longlong)iVar4 * 4);
                *(int *)(puVar10 + 0x15) = iVar4;
              }
              plVar1 = puVar10 + 0x18;
              *(undefined4 *)(puVar10 + 0x19) = 0;
              *plVar1 = (longlong)(puVar10 + 0x1a);
              *(undefined4 *)((longlong)puVar10 + 0xcc) = 0x80000004;
              if (puVar13 + 10 != plVar1) {
                iVar4 = *(int *)(puVar13 + 0xb);
                lVar5 = puVar13[10];
                if (4 < iVar4) {
                  FUN_141807e20(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
                }
                FUN_144b3d470(*plVar1,lVar5,(longlong)iVar4 * 4);
                *(int *)(puVar10 + 0x19) = iVar4;
              }
              *(undefined4 *)(puVar10 + 0x1c) = *(undefined4 *)(puVar13 + 0xe);
              *(undefined4 *)((longlong)puVar10 + 0xe4) = *(undefined4 *)((longlong)puVar13 + 0x74);
              uVar6 = *(undefined4 *)((longlong)puVar13 + 0x84);
              uVar7 = *(undefined4 *)(puVar13 + 0x11);
              uVar8 = *(undefined4 *)((longlong)puVar13 + 0x8c);
              *(undefined4 *)(puVar10 + 0x1e) = *(undefined4 *)(puVar13 + 0x10);
              *(undefined4 *)((longlong)puVar10 + 0xf4) = uVar6;
              *(undefined4 *)(puVar10 + 0x1f) = uVar7;
              *(undefined4 *)((longlong)puVar10 + 0xfc) = uVar8;
              uVar9 = puVar13[0x13];
              puVar10[0x20] = puVar13[0x12];
              puVar10[0x21] = uVar9;
              *(undefined1 *)(puVar10 + 0x22) = *(undefined1 *)(puVar13 + 0x14);
              *(undefined1 *)((longlong)puVar10 + 0x111) = *(undefined1 *)((longlong)puVar13 + 0xa1)
              ;
              *(undefined1 *)((longlong)puVar10 + 0x112) = *(undefined1 *)((longlong)puVar13 + 0xa2)
              ;
              puVar2 = (undefined4 *)((longlong)puVar13 + 0xa4);
              puVar13 = puVar13 + 0x24;
              *(undefined4 *)((longlong)puVar10 + 0x114) = *puVar2;
            }
            uVar11 = uVar11 - 1;
            puVar10 = puVar10 + 0x24;
          } while (uVar11 != 0);
        }
      }
      puVar14 = puVar14 + 10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 144c75ab0 FUN_144c75ab0 body=18 status=ok
// SIG undefined FUN_144c75ab0(void)

undefined8 * FUN_144c75ab0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e7690;
  return param_2;
}



// FUNCTION 144c75ad0 FUN_144c75ad0 body=80 status=ok
// SIG undefined FUN_144c75ad0(void)

void FUN_144c75ad0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c75b20 FUN_144c75b20 body=88 status=ok
// SIG undefined FUN_144c75b20(void)

void FUN_144c75b20(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x28);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -5;
      plVar2 = plVar2 + -5;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c75b80 FUN_144c75b80 body=63 status=ok
// SIG undefined FUN_144c75b80(void)

void FUN_144c75b80(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c75bf0 FUN_144c75bf0 body=86 status=ok
// SIG undefined FUN_144c75bf0(void)

void FUN_144c75bf0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
        FUN_144b40b30(param_1 + 0x10);
      }
      param_1 = param_1 + 0x130;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c75c50 FUN_144c75c50 body=70 status=ok
// SIG undefined FUN_144c75c50(void)

void FUN_144c75c50(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144c909b0(param_1,param_2 + param_1);
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c75ca0 FUN_144c75ca0 body=97 status=ok
// SIG undefined FUN_144c75ca0(void)

void FUN_144c75ca0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c75d10 FUN_144c75d10 body=80 status=ok
// SIG undefined FUN_144c75d10(void)

void FUN_144c75d10(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c75d70 FUN_144c75d70 body=63 status=ok
// SIG undefined FUN_144c75d70(void)

void FUN_144c75d70(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c75e00 FUN_144c75e00 body=74 status=ok
// SIG undefined FUN_144c75e00(void)

void FUN_144c75e00(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c75e50 FUN_144c75e50 body=97 status=ok
// SIG undefined FUN_144c75e50(void)

void FUN_144c75e50(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c75ec0 FUN_144c75ec0 body=58 status=ok
// SIG undefined FUN_144c75ec0(void)

void FUN_144c75ec0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144c6f5f0(param_1);
      }
      param_1 = param_1 + 0xb0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c75f00 FUN_144c75f00 body=18 status=ok
// SIG undefined FUN_144c75f00(void)

undefined8 * FUN_144c75f00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e7860;
  return param_2;
}



// FUNCTION 144c75f20 FUN_144c75f20 body=533 status=ok
// SIG undefined FUN_144c75f20(void)

void FUN_144c75f20(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  
  if (0 < param_4) {
    puVar14 = (uint *)(param_1 + 0x8c);
    param_2 = param_2 - param_1;
    lVar16 = (longlong)param_4;
    do {
      puVar2 = puVar14 + -0x23;
      if (puVar2 != (uint *)0x0) {
        puVar14[-0x1f] = 1;
        puVar14[-0x1e] = 0;
        *(undefined ***)puVar2 = hkaiSilhouetteGenerator::vftable;
        puVar14[-0x21] = 0xffffffff;
        puVar14[-0x20] = 0;
        *(undefined8 *)(puVar14 + -0x1d) = *(undefined8 *)((longlong)puVar14 + param_2 + -0x74);
        puVar14[-0x1b] = *(uint *)((longlong)puVar14 + param_2 + -0x6c);
        puVar14[-0x1a] = *(uint *)((longlong)puVar14 + param_2 + -0x68);
        lVar5 = *(longlong *)((longlong)puVar14 + param_2 + -100);
        *(longlong *)(puVar14 + -0x19) = lVar5;
        if (lVar5 != 0) {
          FUN_144b3d910();
        }
        puVar1 = (undefined8 *)((longlong)puVar14 + param_2 + -0x5c);
        uVar11 = puVar1[1];
        *(undefined8 *)(puVar14 + -0x17) = *puVar1;
        *(undefined8 *)(puVar14 + -0x15) = uVar11;
        puVar1 = (undefined8 *)(param_2 + -0x4c + (longlong)puVar14);
        uVar11 = puVar1[1];
        *(undefined8 *)(puVar14 + -0x13) = *puVar1;
        *(undefined8 *)(puVar14 + -0x11) = uVar11;
        *(undefined ***)puVar2 = hkaiPointCloudSilhouetteGenerator::vftable;
        puVar2 = (uint *)((longlong)puVar14 + param_2 + -0x3c);
        uVar3 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        puVar14[-0xf] = *puVar2;
        puVar14[-0xe] = uVar3;
        puVar14[-0xd] = uVar6;
        puVar14[-0xc] = uVar7;
        puVar2 = (uint *)(param_2 + -0x2c + (longlong)puVar14);
        uVar3 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        puVar14[-0xb] = *puVar2;
        puVar14[-10] = uVar3;
        puVar14[-9] = uVar6;
        puVar14[-8] = uVar7;
        puVar14[-7] = 0;
        puVar14[-6] = 0;
        puVar14[-5] = 0;
        puVar14[-4] = 0x80000000;
        uVar3 = *(uint *)(param_2 + -0x14 + (longlong)puVar14);
        puVar15 = *(undefined4 **)((longlong)puVar14 + param_2 + -0x1c);
        if (0 < (int)uVar3) {
          puVar12 = (undefined4 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 << 4);
          *(undefined4 **)(puVar14 + -7) = puVar12;
          uVar13 = (ulonglong)uVar3;
          puVar14[-5] = uVar3;
          puVar14[-4] = uVar3;
          do {
            if (puVar12 != (undefined4 *)0x0) {
              uVar4 = *puVar15;
              uVar8 = puVar15[1];
              uVar9 = puVar15[2];
              uVar10 = puVar15[3];
              puVar15 = puVar15 + 4;
              *puVar12 = uVar4;
              puVar12[1] = uVar8;
              puVar12[2] = uVar9;
              puVar12[3] = uVar10;
            }
            uVar13 = uVar13 - 1;
            puVar12 = puVar12 + 4;
          } while (uVar13 != 0);
        }
        puVar14[-3] = 0;
        puVar14[-2] = 0;
        puVar14[-1] = 0;
        *puVar14 = 0x80000000;
        uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar14);
        puVar15 = *(undefined4 **)(param_2 + -0xc + (longlong)puVar14);
        if (0 < (int)uVar3) {
          puVar12 = (undefined4 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 << 2);
          *(undefined4 **)(puVar14 + -3) = puVar12;
          puVar14[-1] = uVar3;
          uVar13 = (ulonglong)uVar3;
          *puVar14 = uVar3;
          do {
            if (puVar12 != (undefined4 *)0x0) {
              uVar4 = *puVar15;
              puVar15 = puVar15 + 1;
              *puVar12 = uVar4;
            }
            uVar13 = uVar13 - 1;
            puVar12 = puVar12 + 1;
          } while (uVar13 != 0);
        }
        *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(param_2 + 4 + (longlong)puVar14);
        puVar14[2] = *(uint *)(param_2 + 8 + (longlong)puVar14);
        puVar14[3] = *(uint *)(param_2 + 0xc + (longlong)puVar14);
        puVar14[4] = *(uint *)(param_2 + 0x10 + (longlong)puVar14);
        puVar14[5] = *(uint *)(param_2 + 0x14 + (longlong)puVar14);
        *(undefined1 *)(puVar14 + 6) = *(undefined1 *)(param_2 + 0x18 + (longlong)puVar14);
        *(undefined1 *)((longlong)puVar14 + 0x19) =
             *(undefined1 *)(param_2 + 0x19 + (longlong)puVar14);
        *(undefined1 *)((longlong)puVar14 + 0x1a) =
             *(undefined1 *)(param_2 + 0x1a + (longlong)puVar14);
        *(undefined1 *)((longlong)puVar14 + 0x1b) =
             *(undefined1 *)(param_2 + 0x1b + (longlong)puVar14);
        *(undefined1 *)(puVar14 + 7) = *(undefined1 *)(param_2 + 0x1c + (longlong)puVar14);
      }
      puVar14 = puVar14 + 0x2c;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}



// FUNCTION 144c76140 FUN_144c76140 body=94 status=ok
// SIG undefined FUN_144c76140(void)

void FUN_144c76140(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xb0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x16;
      plVar2 = plVar2 + -0x16;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c76240 FUN_144c76240 body=80 status=ok
// SIG undefined FUN_144c76240(void)

void FUN_144c76240(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c76290 FUN_144c76290 body=63 status=ok
// SIG undefined FUN_144c76290(void)

void FUN_144c76290(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c763d0 FUN_144c763d0 body=97 status=ok
// SIG undefined FUN_144c763d0(void)

void FUN_144c763d0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c76470 FUN_144c76470 body=63 status=ok
// SIG undefined FUN_144c76470(void)

void FUN_144c76470(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x128 + param_1;
    do {
      FUN_144c2c280(param_1);
      param_1 = param_1 + -0x128;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c76520 FUN_144c76520 body=80 status=ok
// SIG undefined FUN_144c76520(void)

void FUN_144c76520(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c76580 FUN_144c76580 body=63 status=ok
// SIG undefined FUN_144c76580(void)

void FUN_144c76580(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c765c0 FUN_144c765c0 body=97 status=ok
// SIG undefined FUN_144c765c0(void)

void FUN_144c765c0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c766b0 FUN_144c766b0 body=88 status=ok
// SIG undefined FUN_144c766b0(void)

void FUN_144c766b0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
        FUN_144c31710(param_1 + 0x10,0);
      }
      param_1 = param_1 + 0xc0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c76710 FUN_144c76710 body=91 status=ok
// SIG undefined FUN_144c76710(void)

void FUN_144c76710(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c76770 FUN_144c76770 body=236 status=ok
// SIG undefined FUN_144c76770(void)

void FUN_144c76770(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  if (0 < param_4) {
    puVar8 = (undefined8 *)(param_1 + 0x10);
    param_2 = param_2 - param_1;
    lVar9 = (longlong)param_4;
    do {
      if (puVar8 + -2 != (undefined8 *)0x0) {
        *puVar8 = 1;
        puVar8[-1] = 0xffffffff;
        puVar8[-2] = hkaiVolumeNavigator::NavigatorSettings::vftable;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(param_2 + 8 + (longlong)puVar8);
        *(undefined4 *)((longlong)puVar8 + 0xc) = *(undefined4 *)(param_2 + 0xc + (longlong)puVar8);
        *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(param_2 + 0x10 + (longlong)puVar8);
        *(undefined4 *)((longlong)puVar8 + 0x14) =
             *(undefined4 *)(param_2 + 0x14 + (longlong)puVar8);
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(param_2 + 0x18 + (longlong)puVar8);
        puVar1 = (undefined8 *)(param_2 + 0x20 + (longlong)puVar8);
        uVar7 = puVar1[1];
        puVar8[4] = *puVar1;
        puVar8[5] = uVar7;
        puVar1 = (undefined8 *)(param_2 + 0x30 + (longlong)puVar8);
        uVar7 = puVar1[1];
        puVar8[6] = *puVar1;
        puVar8[7] = uVar7;
        puVar2 = (undefined4 *)(param_2 + 0x40 + (longlong)puVar8);
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        *(undefined4 *)(puVar8 + 8) = *puVar2;
        *(undefined4 *)((longlong)puVar8 + 0x44) = uVar4;
        *(undefined4 *)(puVar8 + 9) = uVar5;
        *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar6;
        puVar2 = (undefined4 *)(param_2 + 0x50 + (longlong)puVar8);
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        *(undefined4 *)(puVar8 + 10) = *puVar2;
        *(undefined4 *)((longlong)puVar8 + 0x54) = uVar4;
        *(undefined4 *)(puVar8 + 0xb) = uVar5;
        *(undefined4 *)((longlong)puVar8 + 0x5c) = uVar6;
        lVar3 = *(longlong *)(param_2 + 0x60 + (longlong)puVar8);
        puVar8[0xc] = lVar3;
        if (lVar3 != 0) {
          FUN_144b3d910();
        }
        lVar3 = *(longlong *)(param_2 + 0x68 + (longlong)puVar8);
        puVar8[0xd] = lVar3;
        if (lVar3 != 0) {
          FUN_144b3d910();
        }
      }
      puVar8 = puVar8 + 0x10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144c768b0 FUN_144c768b0 body=77 status=ok
// SIG undefined FUN_144c768b0(void)

void FUN_144c768b0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x80 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x10;
      plVar2 = plVar2 + -0x10;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c76900 FUN_144c76900 body=92 status=ok
// SIG undefined FUN_144c76900(void)

void FUN_144c76900(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 0x18);
    lVar3 = (longlong)param_3;
    do {
      if (puVar2 != (undefined4 *)&DAT_00000018) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 0xc;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c76960 FUN_144c76960 body=235 status=ok
// SIG undefined FUN_144c76960(void)

void FUN_144c76960(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar9 = (longlong)param_4;
    puVar8 = (undefined4 *)(param_1 + 0x18);
    do {
      *puVar8 = *(undefined4 *)(param_2 + (longlong)puVar8);
      puVar8[1] = *(undefined4 *)(param_2 + 4 + (longlong)puVar8);
      puVar8[2] = *(undefined4 *)(param_2 + 8 + (longlong)puVar8);
      puVar8[3] = *(undefined4 *)(param_2 + 0xc + (longlong)puVar8);
      puVar8[4] = *(undefined4 *)(param_2 + 0x10 + (longlong)puVar8);
      puVar1 = (undefined8 *)(param_2 + 0x18 + (longlong)puVar8);
      uVar7 = puVar1[1];
      *(undefined8 *)(puVar8 + 6) = *puVar1;
      *(undefined8 *)(puVar8 + 8) = uVar7;
      puVar1 = (undefined8 *)(param_2 + 0x28 + (longlong)puVar8);
      uVar7 = puVar1[1];
      *(undefined8 *)(puVar8 + 10) = *puVar1;
      *(undefined8 *)(puVar8 + 0xc) = uVar7;
      puVar2 = (undefined4 *)(param_2 + 0x38 + (longlong)puVar8);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar8[0xe] = *puVar2;
      puVar8[0xf] = uVar4;
      puVar8[0x10] = uVar5;
      puVar8[0x11] = uVar6;
      puVar2 = (undefined4 *)(param_2 + 0x48 + (longlong)puVar8);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar8[0x12] = *puVar2;
      puVar8[0x13] = uVar4;
      puVar8[0x14] = uVar5;
      puVar8[0x15] = uVar6;
      lVar3 = *(longlong *)(param_2 + 0x58 + (longlong)puVar8);
      if (*(longlong *)(puVar8 + 0x16) != lVar3) {
        if (lVar3 != 0) {
          FUN_144b3d910();
        }
        lVar3 = *(longlong *)(puVar8 + 0x16);
        *(undefined8 *)(puVar8 + 0x16) = *(undefined8 *)(param_2 + 0x58 + (longlong)puVar8);
        if (lVar3 != 0) {
          FUN_144b3f230();
        }
      }
      lVar3 = *(longlong *)(param_2 + 0x60 + (longlong)puVar8);
      if (*(longlong *)(puVar8 + 0x18) != lVar3) {
        if (lVar3 != 0) {
          FUN_144b3d910();
        }
        lVar3 = *(longlong *)(puVar8 + 0x18);
        *(undefined8 *)(puVar8 + 0x18) = *(undefined8 *)(param_2 + 0x60 + (longlong)puVar8);
        if (lVar3 != 0) {
          FUN_144b3f230();
        }
      }
      puVar8 = puVar8 + 0x20;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144c76a50 FUN_144c76a50 body=89 status=ok
// SIG undefined FUN_144c76a50(void)

void FUN_144c76a50(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 local_res18;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 0x18);
    lVar1 = (longlong)param_3;
    do {
      if (puVar2 + -6 != (undefined4 *)0x0) {
        FUN_144bf91b0(puVar2 + -6,local_res18);
        *(undefined8 *)(puVar2 + -2) = 0xffffffffffffffff;
        *puVar2 = 0xffffffff;
      }
      puVar2 = puVar2 + 8;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 144c76ae0 FUN_144c76ae0 body=60 status=ok
// SIG undefined FUN_144c76ae0(void)

void FUN_144c76ae0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144c31710(param_1,0);
      }
      param_1 = param_1 + 0xb0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c76b20 FUN_144c76b20 body=80 status=ok
// SIG undefined FUN_144c76b20(void)

void FUN_144c76b20(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c76b70 FUN_144c76b70 body=78 status=ok
// SIG undefined FUN_144c76b70(void)

void FUN_144c76b70(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144c31850(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0xb0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c76bc0 FUN_144c76bc0 body=63 status=ok
// SIG undefined FUN_144c76bc0(void)

void FUN_144c76bc0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c76c00 FUN_144c76c00 body=58 status=ok
// SIG undefined FUN_144c76c00(void)

void FUN_144c76c00(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144c37350(param_1);
      }
      param_1 = param_1 + 0xd8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c76c40 FUN_144c76c40 body=94 status=ok
// SIG undefined FUN_144c76c40(void)

void FUN_144c76c40(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xb0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x16;
      plVar2 = plVar2 + -0x16;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c76cb0 FUN_144c76cb0 body=97 status=ok
// SIG undefined FUN_144c76cb0(void)

void FUN_144c76cb0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c76d20 FUN_144c76d20 body=78 status=ok
// SIG undefined FUN_144c76d20(void)

void FUN_144c76d20(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144c37680(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0xd8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c76d70 FUN_144c76d70 body=91 status=ok
// SIG undefined FUN_144c76d70(void)

void FUN_144c76d70(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c76dd0 FUN_144c76dd0 body=73 status=ok
// SIG undefined FUN_144c76dd0(void)

void FUN_144c76dd0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144c319d0(param_1,param_2 + param_1);
      param_1 = param_1 + 0xb0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c76e20 FUN_144c76e20 body=94 status=ok
// SIG undefined FUN_144c76e20(void)

void FUN_144c76e20(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xd8 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x1b;
      plVar2 = plVar2 + -0x1b;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c76e90 FUN_144c76e90 body=271 status=ok
// SIG undefined FUN_144c76e90(void)

void FUN_144c76e90(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  uint *puVar7;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar5 = (uint *)(param_1 + 0xc);
    lVar6 = (longlong)param_4;
    do {
      puVar7 = (uint *)(param_2 + -0xc + (longlong)puVar5);
      puVar1 = puVar5 + -3;
      if (puVar1 != puVar7) {
        uVar3 = *(undefined8 *)puVar7;
        uVar2 = *(uint *)((longlong)puVar5 + param_2 + -4);
        if ((int)(*puVar5 & 0x7fffffff) < (int)uVar2) {
          FUN_144c9f0d0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 8);
        puVar5[-1] = uVar2;
        puVar1 = puVar5 + 1;
        puVar7 = (uint *)(param_2 + 4 + (longlong)puVar5);
        if (puVar7 != puVar1) {
          lVar4 = *(longlong *)puVar1;
          if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != -2)) {
            (*DAT_14c787678)(DAT_14c6e47a8,lVar4,0);
            FUN_144b3ec00(puVar1);
          }
          FUN_140069ea2(puVar1,puVar7);
        }
      }
      puVar5 = puVar5 + 8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c76fa0 FUN_144c76fa0 body=73 status=ok
// SIG undefined FUN_144c76fa0(void)

void FUN_144c76fa0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144c37aa0(param_1,param_2 + param_1);
      param_1 = param_1 + 0xd8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c77050 FUN_144c77050 body=18 status=ok
// SIG undefined FUN_144c77050(void)

undefined8 * FUN_144c77050(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6f42b0;
  return param_2;
}



// FUNCTION 144c77070 FUN_144c77070 body=611 status=ok
// SIG undefined FUN_144c77070(void)

void FUN_144c77070(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  int *piVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  lVar12 = (longlong)param_4;
  if (0 < param_4) {
    puVar10 = (uint *)(param_1 + 0x24);
    do {
      if (puVar10 + -9 != (uint *)0x0) {
        puVar10[-7] = 0xffffffff;
        puVar10[-6] = 0;
        puVar10[-5] = 1;
        puVar10[-4] = 0;
        *(undefined ***)(puVar10 + -9) = hkaiUserEdgePairArray::vftable;
        puVar10[-3] = 0;
        puVar10[-2] = 0;
        puVar10[-1] = 0;
        *puVar10 = 0x80000000;
        uVar3 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar10);
        lVar5 = *(longlong *)((param_2 - param_1) + -0xc + (longlong)puVar10);
        if (0 < (int)uVar3) {
          puVar9 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 * 0x90);
          *(undefined8 **)(puVar10 + -3) = puVar9;
          puVar10[-1] = uVar3;
          uVar13 = (ulonglong)uVar3;
          *puVar10 = uVar3;
          piVar11 = (int *)(lVar5 + 0x68);
          do {
            if (puVar9 != (undefined8 *)0x0) {
              uVar8 = *(undefined8 *)(piVar11 + -0x18);
              plVar1 = puVar9 + 8;
              *puVar9 = *(undefined8 *)(piVar11 + -0x1a);
              puVar9[1] = uVar8;
              iVar4 = piVar11[-0x15];
              iVar6 = piVar11[-0x14];
              iVar7 = piVar11[-0x13];
              *(int *)(puVar9 + 2) = piVar11[-0x16];
              *(int *)((longlong)puVar9 + 0x14) = iVar4;
              *(int *)(puVar9 + 3) = iVar6;
              *(int *)((longlong)puVar9 + 0x1c) = iVar7;
              iVar4 = piVar11[-0x11];
              iVar6 = piVar11[-0x10];
              iVar7 = piVar11[-0xf];
              *(int *)(puVar9 + 4) = piVar11[-0x12];
              *(int *)((longlong)puVar9 + 0x24) = iVar4;
              *(int *)(puVar9 + 5) = iVar6;
              *(int *)((longlong)puVar9 + 0x2c) = iVar7;
              *(int *)(puVar9 + 6) = piVar11[-0xe];
              *(int *)((longlong)puVar9 + 0x34) = piVar11[-0xd];
              *(int *)(puVar9 + 7) = piVar11[-0xc];
              *(int *)((longlong)puVar9 + 0x3c) = piVar11[-0xb];
              *plVar1 = (longlong)(puVar9 + 10);
              *(undefined4 *)(puVar9 + 9) = 0;
              *(undefined4 *)((longlong)puVar9 + 0x4c) = 0x80000004;
              if ((longlong *)(piVar11 + -10) != plVar1) {
                iVar4 = piVar11[-8];
                lVar5 = *(longlong *)(piVar11 + -10);
                if (4 < iVar4) {
                  FUN_141807e20(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
                }
                FUN_144b3d470(*plVar1,lVar5,(longlong)iVar4 * 4);
                *(int *)(puVar9 + 9) = iVar4;
              }
              plVar1 = puVar9 + 0xc;
              *(undefined4 *)(puVar9 + 0xd) = 0;
              *plVar1 = (longlong)(puVar9 + 0xe);
              *(undefined4 *)((longlong)puVar9 + 0x6c) = 0x80000004;
              if ((longlong *)(piVar11 + -2) != plVar1) {
                iVar4 = *piVar11;
                lVar5 = *(longlong *)(piVar11 + -2);
                if (4 < iVar4) {
                  FUN_141807e20(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
                }
                FUN_144b3d470(*plVar1,lVar5,(longlong)iVar4 * 4);
                *(int *)(puVar9 + 0xd) = iVar4;
              }
              *(short *)(puVar9 + 0x10) = (short)piVar11[6];
              *(undefined2 *)((longlong)puVar9 + 0x82) = *(undefined2 *)((longlong)piVar11 + 0x1a);
              piVar2 = piVar11 + 7;
              piVar11 = piVar11 + 0x24;
              *(char *)((longlong)puVar9 + 0x84) = (char)*piVar2;
            }
            uVar13 = uVar13 - 1;
            puVar9 = puVar9 + 0x12;
          } while (uVar13 != 0);
        }
      }
      puVar10 = puVar10 + 10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 144c772e0 FUN_144c772e0 body=91 status=ok
// SIG undefined FUN_144c772e0(void)

void FUN_144c772e0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c77340 FUN_144c77340 body=88 status=ok
// SIG undefined FUN_144c77340(void)

void FUN_144c77340(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x28);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -5;
      plVar2 = plVar2 + -5;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c773a0 FUN_144c773a0 body=804 status=ok
// SIG undefined FUN_144c773a0(void)

void FUN_144c773a0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint *puVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  uint *puVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong *plVar22;
  
  if (0 < param_4) {
    plVar22 = (longlong *)(param_1 + 0x18);
    lVar21 = (longlong)param_4;
    do {
      plVar12 = (longlong *)((param_2 - param_1) + (longlong)plVar22);
      if (plVar12 != plVar22) {
        lVar6 = *plVar12;
        iVar5 = *(int *)((longlong)plVar22 + (param_2 - param_1) + 8);
        if ((int)(*(uint *)((longlong)plVar22 + 0xc) & 0x7fffffff) < iVar5) {
          FUN_144c4f5e0(plVar22,&PTR_vftable_14c6e47a0,(longlong)iVar5);
        }
        if (iVar5 < (int)plVar22[1]) {
          puVar13 = (uint *)((longlong)(int)plVar22[1] * 0x90 + *plVar22);
          puVar18 = (uint *)((longlong)iVar5 * 0x90 + *plVar22);
          if (puVar13 != puVar18) {
            puVar13 = puVar13 + 0x1b;
            do {
              puVar2 = puVar13 + -0x24;
              puVar13[-0x25] = 0;
              if ((-1 < (int)*puVar2) && (*(longlong *)(puVar13 + -0x27) != 0)) {
                (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                          (&PTR_vftable_14c6e47a0,*(longlong *)(puVar13 + -0x27),
                           (ulonglong)(*puVar2 & 0x7fffffff) << 2);
              }
              puVar13[-0x27] = 0;
              puVar13[-0x26] = 0;
              *puVar2 = 0x80000000;
              puVar13[-0x2d] = 0;
              if ((-1 < (int)puVar13[-0x2c]) && (*(longlong *)(puVar13 + -0x2f) != 0)) {
                (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                          (&PTR_vftable_14c6e47a0,*(longlong *)(puVar13 + -0x2f),
                           (ulonglong)(puVar13[-0x2c] & 0x7fffffff) << 2);
              }
              puVar1 = puVar13 + -0x3f;
              puVar13[-0x2f] = 0;
              puVar13[-0x2e] = 0;
              puVar13[-0x2c] = 0x80000000;
              puVar13 = puVar2;
            } while (puVar1 != puVar18);
          }
        }
        lVar19 = *plVar22;
        iVar7 = iVar5;
        if ((int)plVar22[1] < iVar5) {
          iVar7 = (int)plVar22[1];
        }
        if ((lVar19 != lVar6) && (lVar16 = (longlong)iVar7, 0 < iVar7)) {
          puVar14 = (undefined4 *)(lVar19 + 0x10);
          lVar19 = lVar6 - lVar19;
          do {
            puVar20 = (undefined8 *)(lVar19 + -0x10 + (longlong)puVar14);
            uVar11 = puVar20[1];
            *(undefined8 *)(puVar14 + -4) = *puVar20;
            *(undefined8 *)(puVar14 + -2) = uVar11;
            puVar4 = (undefined4 *)(lVar19 + (longlong)puVar14);
            uVar8 = puVar4[1];
            uVar9 = puVar4[2];
            uVar10 = puVar4[3];
            *puVar14 = *puVar4;
            puVar14[1] = uVar8;
            puVar14[2] = uVar9;
            puVar14[3] = uVar10;
            puVar4 = (undefined4 *)(lVar19 + 0x10 + (longlong)puVar14);
            uVar8 = puVar4[1];
            uVar9 = puVar4[2];
            uVar10 = puVar4[3];
            puVar14[4] = *puVar4;
            puVar14[5] = uVar8;
            puVar14[6] = uVar9;
            puVar14[7] = uVar10;
            puVar14[8] = *(undefined4 *)(lVar19 + 0x20 + (longlong)puVar14);
            puVar14[9] = *(undefined4 *)(lVar19 + 0x24 + (longlong)puVar14);
            puVar14[10] = *(undefined4 *)(lVar19 + 0x28 + (longlong)puVar14);
            puVar14[0xb] = *(undefined4 *)(lVar19 + 0x2c + (longlong)puVar14);
            FUN_144c4eb70(puVar14 + 0xc,(longlong)puVar14 + lVar19 + 0x30);
            FUN_144c4eb70(puVar14 + 0x14,(longlong)puVar14 + lVar19 + 0x50);
            *(undefined2 *)(puVar14 + 0x1c) = *(undefined2 *)(lVar19 + 0x70 + (longlong)puVar14);
            *(undefined2 *)((longlong)puVar14 + 0x72) =
                 *(undefined2 *)(lVar19 + 0x72 + (longlong)puVar14);
            *(undefined1 *)(puVar14 + 0x1d) = *(undefined1 *)(lVar19 + 0x74 + (longlong)puVar14);
            puVar14 = puVar14 + 0x24;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        puVar20 = (undefined8 *)((longlong)iVar7 * 0x90 + lVar6);
        if (0 < iVar5 - iVar7) {
          uVar15 = (ulonglong)(uint)(iVar5 - iVar7);
          puVar17 = (undefined8 *)(*plVar22 + (longlong)iVar7 * 0x90);
          do {
            if (puVar17 != (undefined8 *)0x0) {
              uVar11 = puVar20[1];
              *puVar17 = *puVar20;
              puVar17[1] = uVar11;
              uVar8 = *(undefined4 *)((longlong)puVar20 + 0x14);
              uVar9 = *(undefined4 *)(puVar20 + 3);
              uVar10 = *(undefined4 *)((longlong)puVar20 + 0x1c);
              *(undefined4 *)(puVar17 + 2) = *(undefined4 *)(puVar20 + 2);
              *(undefined4 *)((longlong)puVar17 + 0x14) = uVar8;
              *(undefined4 *)(puVar17 + 3) = uVar9;
              *(undefined4 *)((longlong)puVar17 + 0x1c) = uVar10;
              uVar8 = *(undefined4 *)((longlong)puVar20 + 0x24);
              uVar9 = *(undefined4 *)(puVar20 + 5);
              uVar10 = *(undefined4 *)((longlong)puVar20 + 0x2c);
              *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(puVar20 + 4);
              *(undefined4 *)((longlong)puVar17 + 0x24) = uVar8;
              *(undefined4 *)(puVar17 + 5) = uVar9;
              *(undefined4 *)((longlong)puVar17 + 0x2c) = uVar10;
              *(undefined4 *)(puVar17 + 6) = *(undefined4 *)(puVar20 + 6);
              *(undefined4 *)((longlong)puVar17 + 0x34) = *(undefined4 *)((longlong)puVar20 + 0x34);
              *(undefined4 *)(puVar17 + 7) = *(undefined4 *)(puVar20 + 7);
              *(undefined4 *)((longlong)puVar17 + 0x3c) = *(undefined4 *)((longlong)puVar20 + 0x3c);
              puVar17[8] = puVar17 + 10;
              *(undefined4 *)(puVar17 + 9) = 0;
              *(undefined4 *)((longlong)puVar17 + 0x4c) = 0x80000004;
              FUN_144c4eb70(puVar17 + 8,puVar20 + 8);
              *(undefined4 *)(puVar17 + 0xd) = 0;
              puVar17[0xc] = puVar17 + 0xe;
              *(undefined4 *)((longlong)puVar17 + 0x6c) = 0x80000004;
              FUN_144c4eb70(puVar17 + 0xc,puVar20 + 0xc);
              *(undefined2 *)(puVar17 + 0x10) = *(undefined2 *)(puVar20 + 0x10);
              *(undefined2 *)((longlong)puVar17 + 0x82) = *(undefined2 *)((longlong)puVar20 + 0x82);
              puVar3 = (undefined1 *)((longlong)puVar20 + 0x84);
              puVar20 = puVar20 + 0x12;
              *(undefined1 *)((longlong)puVar17 + 0x84) = *puVar3;
            }
            uVar15 = uVar15 - 1;
            puVar17 = puVar17 + 0x12;
          } while (uVar15 != 0);
        }
        *(int *)(plVar22 + 1) = iVar5;
      }
      plVar22 = plVar22 + 5;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  return;
}



// FUNCTION 144c77760 FUN_144c77760 body=159 status=ok
// SIG undefined FUN_144c77760(void)

void FUN_144c77760(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    puVar2 = (undefined8 *)(param_1 + 0x10);
    lVar3 = (longlong)param_4;
    do {
      if (puVar2 + -2 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        puVar2[-2] = hkaiNavVolumeQueryMediator::vftable;
        lVar1 = *(longlong *)((param_2 - param_1) + 8 + (longlong)puVar2);
        puVar2[1] = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        puVar2[2] = *(undefined8 *)((param_2 - param_1) + 0x10 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 5;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c77800 FUN_144c77800 body=120 status=ok
// SIG undefined FUN_144c77800(void)

void FUN_144c77800(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    lVar3 = (longlong)param_4;
    puVar2 = (undefined1 *)(param_1 + 0x10);
    do {
      if ((longlong *)(puVar2 + -0x10) != (longlong *)0x0) {
        lVar1 = *(longlong *)(puVar2 + (param_2 - param_1) + -0x10);
        *(longlong *)(puVar2 + -0x10) = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        *(undefined8 *)(puVar2 + -8) = 0;
        *puVar2 = 0;
        *puVar2 = puVar2[param_2 - param_1];
      }
      puVar2 = puVar2 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c77880 FUN_144c77880 body=74 status=ok
// SIG undefined FUN_144c77880(void)

void FUN_144c77880(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c778d0 FUN_144c778d0 body=88 status=ok
// SIG undefined FUN_144c778d0(void)

void FUN_144c778d0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x28);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -5;
      plVar2 = plVar2 + -5;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c77930 FUN_144c77930 body=105 status=ok
// SIG undefined FUN_144c77930(void)

void FUN_144c77930(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(param_1 + lVar3 * 0x18);
    do {
      lVar1 = plVar2[1];
      if (lVar1 != 0) {
        FUN_144be5d10(lVar1);
        (*DAT_14c787678)(0,lVar1,0);
      }
      if (*plVar2 != 0) {
        FUN_144b3f230();
      }
      plVar2 = plVar2 + -3;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144c77a20 FUN_144c77a20 body=132 status=ok
// SIG undefined FUN_144c77a20(void)

void FUN_144c77a20(longlong param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    lVar4 = (longlong)param_4;
    lVar3 = param_1 - (longlong)param_2;
    plVar2 = param_2;
    do {
      if (*(longlong *)((longlong)plVar2 + lVar3) != *plVar2) {
        if (*plVar2 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *(longlong *)((longlong)plVar2 + lVar3);
        *(longlong *)((longlong)plVar2 + lVar3) = *plVar2;
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      *(undefined1 *)(lVar3 + 0x10 + (longlong)plVar2) =
           *(undefined1 *)((longlong)param_2 + (lVar3 - param_1) + 0x10 + (longlong)plVar2);
      plVar2 = plVar2 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 144c77ab0 FUN_144c77ab0 body=80 status=ok
// SIG undefined FUN_144c77ab0(void)

void FUN_144c77ab0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c77b00 FUN_144c77b00 body=74 status=ok
// SIG undefined FUN_144c77b00(void)

void FUN_144c77b00(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c77b50 FUN_144c77b50 body=63 status=ok
// SIG undefined FUN_144c77b50(void)

void FUN_144c77b50(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c77b90 FUN_144c77b90 body=18 status=ok
// SIG undefined FUN_144c77b90(void)

undefined8 * FUN_144c77b90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e7fe0;
  return param_2;
}



// FUNCTION 144c77bb0 FUN_144c77bb0 body=87 status=ok
// SIG undefined FUN_144c77bb0(void)

undefined8 FUN_144c77bb0(undefined8 param_1,ulonglong param_2)

{
  FUN_14500b980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 144c77c40 FUN_144c77c40 body=97 status=ok
// SIG undefined FUN_144c77c40(void)

void FUN_144c77c40(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c77cb0 FUN_144c77cb0 body=322 status=ok
// SIG undefined FUN_144c77cb0(void)

void FUN_144c77cb0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar10 = (uint *)(param_1 + 0x24);
    lVar11 = (longlong)param_4;
    do {
      if (puVar10 + -9 != (uint *)0x0) {
        puVar10[-7] = 0xffffffff;
        puVar10[-6] = 0;
        puVar10[-5] = 1;
        puVar10[-4] = 0;
        *(undefined ***)(puVar10 + -9) = hkaiPath::vftable;
        puVar10[-3] = 0;
        puVar10[-2] = 0;
        puVar10[-1] = 0;
        *puVar10 = 0x80000000;
        uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar10);
        lVar3 = *(longlong *)(param_2 + -0xc + (longlong)puVar10);
        if (0 < (int)uVar2) {
          puVar8 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x30);
          *(undefined4 **)(puVar10 + -3) = puVar8;
          puVar9 = (undefined4 *)(lVar3 + 0x20);
          puVar10[-1] = uVar2;
          uVar12 = (ulonglong)uVar2;
          *puVar10 = uVar2;
          do {
            if (puVar8 != (undefined4 *)0x0) {
              uVar4 = puVar9[-7];
              uVar5 = puVar9[-6];
              uVar6 = puVar9[-5];
              *puVar8 = puVar9[-8];
              puVar8[1] = uVar4;
              puVar8[2] = uVar5;
              puVar8[3] = uVar6;
              uVar7 = *(undefined8 *)(puVar9 + -2);
              *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar9 + -4);
              *(undefined8 *)(puVar8 + 6) = uVar7;
              puVar8[8] = *puVar9;
              puVar8[9] = puVar9[1];
              puVar1 = puVar9 + 2;
              puVar9 = puVar9 + 0xc;
              *(undefined1 *)(puVar8 + 10) = *(undefined1 *)puVar1;
            }
            uVar12 = uVar12 - 1;
            puVar8 = puVar8 + 0xc;
          } while (uVar12 != 0);
        }
        *(undefined1 *)(puVar10 + 1) = *(undefined1 *)(param_2 + 4 + (longlong)puVar10);
      }
      puVar10 = puVar10 + 0xc;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 144c77e00 FUN_144c77e00 body=88 status=ok
// SIG undefined FUN_144c77e00(void)

void FUN_144c77e00(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x30 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -6;
      plVar2 = plVar2 + -6;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c77e60 FUN_144c77e60 body=101 status=ok
// SIG undefined FUN_144c77e60(void)

undefined8 * FUN_144c77e60(undefined8 *param_1,ulonglong param_2)

{
  FUN_144b3e940(param_1 + 8);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 144c77ed0 FUN_144c77ed0 body=91 status=ok
// SIG undefined FUN_144c77ed0(void)

void FUN_144c77ed0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c77f30 FUN_144c77f30 body=55 status=ok
// SIG undefined FUN_144c77f30(void)

void FUN_144c77f30(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144c6c650(param_1);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c77f70 FUN_144c77f70 body=378 status=ok
// SIG undefined FUN_144c77f70(void)

void FUN_144c77f70(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  uint *puVar14;
  longlong lVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar14 = (uint *)(param_1 + 0x24);
    lVar18 = (longlong)param_4;
    do {
      puVar3 = (uint *)((longlong)puVar14 + param_2 + -0xc);
      puVar1 = puVar14 + -3;
      if (puVar3 != puVar1) {
        lVar5 = *(longlong *)puVar3;
        uVar4 = *(uint *)((longlong)puVar14 + param_2 + -4);
        if ((int)(*puVar14 & 0x7fffffff) < (int)uVar4) {
          FUN_144c311a0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar4);
        }
        lVar15 = *(longlong *)puVar1;
        uVar6 = uVar4;
        if ((int)puVar14[-1] < (int)uVar4) {
          uVar6 = puVar14[-1];
        }
        if ((lVar15 != lVar5) && (lVar12 = (longlong)(int)uVar6, 0 < (int)uVar6)) {
          puVar11 = (undefined8 *)(lVar15 + 0x10);
          lVar15 = lVar5 - lVar15;
          do {
            puVar13 = (undefined4 *)(lVar15 + -0x10 + (longlong)puVar11);
            uVar7 = puVar13[1];
            uVar8 = puVar13[2];
            uVar9 = puVar13[3];
            *(undefined4 *)(puVar11 + -2) = *puVar13;
            *(undefined4 *)((longlong)puVar11 + -0xc) = uVar7;
            *(undefined4 *)(puVar11 + -1) = uVar8;
            *(undefined4 *)((longlong)puVar11 + -4) = uVar9;
            uVar10 = ((undefined8 *)((longlong)puVar11 + lVar15))[1];
            *puVar11 = *(undefined8 *)((longlong)puVar11 + lVar15);
            puVar11[1] = uVar10;
            *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(lVar15 + 0x10 + (longlong)puVar11);
            *(undefined4 *)((longlong)puVar11 + 0x14) =
                 *(undefined4 *)(lVar15 + 0x14 + (longlong)puVar11);
            *(undefined1 *)(puVar11 + 3) = *(undefined1 *)(lVar15 + 0x18 + (longlong)puVar11);
            puVar11 = puVar11 + 6;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        puVar13 = (undefined4 *)((longlong)(int)uVar6 * 0x30 + lVar5);
        if (0 < (int)(uVar4 - uVar6)) {
          uVar17 = (ulonglong)(uVar4 - uVar6);
          puVar16 = (undefined4 *)(*(longlong *)puVar1 + (longlong)(int)uVar6 * 0x30);
          do {
            if (puVar16 != (undefined4 *)0x0) {
              uVar7 = puVar13[1];
              uVar8 = puVar13[2];
              uVar9 = puVar13[3];
              *puVar16 = *puVar13;
              puVar16[1] = uVar7;
              puVar16[2] = uVar8;
              puVar16[3] = uVar9;
              uVar10 = *(undefined8 *)(puVar13 + 6);
              *(undefined8 *)(puVar16 + 4) = *(undefined8 *)(puVar13 + 4);
              *(undefined8 *)(puVar16 + 6) = uVar10;
              puVar16[8] = puVar13[8];
              puVar16[9] = puVar13[9];
              puVar2 = puVar13 + 10;
              puVar13 = puVar13 + 0xc;
              *(undefined1 *)(puVar16 + 10) = *(undefined1 *)puVar2;
            }
            uVar17 = uVar17 - 1;
            puVar16 = puVar16 + 0xc;
          } while (uVar17 != 0);
        }
        puVar14[-1] = uVar4;
      }
      *(undefined1 *)(puVar14 + 1) = *(undefined1 *)((longlong)puVar14 + param_2 + 4);
      puVar14 = puVar14 + 0xc;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  return;
}



// FUNCTION 144c780f0 FUN_144c780f0 body=18 status=ok
// SIG undefined FUN_144c780f0(void)

undefined8 * FUN_144c780f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e8150;
  return param_2;
}



// FUNCTION 144c78110 FUN_144c78110 body=509 status=ok
// SIG undefined FUN_144c78110(void)

void FUN_144c78110(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  longlong local_40;
  
  local_40 = (longlong)param_4;
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    plVar12 = (longlong *)(param_1 + 0x10);
    do {
      plVar6 = (longlong *)(param_2 + -0x10 + (longlong)plVar12);
      plVar1 = plVar12 + -2;
      if (plVar1 != plVar6) {
        lVar3 = *plVar6;
        iVar2 = *(int *)(param_2 + -8 + (longlong)plVar12);
        if ((int)(*(uint *)((longlong)plVar12 + -4) & 0x7fffffff) < iVar2) {
          FUN_144c9e7f0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
        }
        if (iVar2 < (int)plVar12[-1]) {
          lVar4 = *plVar1;
          for (lVar7 = (longlong)(int)plVar12[-1] * 0x30 + *plVar1;
              lVar7 != (longlong)iVar2 * 0x30 + lVar4; lVar7 = lVar7 + -0x30) {
            FUN_144c91db0(lVar7 + -0x20);
          }
        }
        lVar4 = *plVar1;
        iVar5 = iVar2;
        if ((int)plVar12[-1] < iVar2) {
          iVar5 = (int)plVar12[-1];
        }
        if ((lVar4 != lVar3) && (lVar7 = (longlong)iVar5, 0 < iVar5)) {
          lVar8 = lVar4 + 8;
          do {
            *(undefined4 *)(lVar8 + -8) = *(undefined4 *)((lVar3 - lVar4) + -8 + lVar8);
            FUN_144c91fe0(lVar8,(lVar3 - lVar4) + lVar8);
            lVar8 = lVar8 + 0x30;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        puVar9 = (undefined4 *)((longlong)iVar5 * 0x30 + lVar3);
        if (0 < iVar2 - iVar5) {
          uVar10 = (ulonglong)(uint)(iVar2 - iVar5);
          puVar11 = (undefined4 *)(*plVar1 + (longlong)iVar5 * 0x30);
          do {
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = *puVar9;
              puVar11[2] = puVar9[2];
              FUN_144c91e80(puVar11 + 4,puVar9 + 4);
              puVar9 = puVar9 + 0xc;
            }
            uVar10 = uVar10 - 1;
            puVar11 = puVar11 + 0xc;
          } while (uVar10 != 0);
        }
        *(int *)(plVar12 + -1) = iVar2;
        if ((longlong *)(param_2 + (longlong)plVar12) != plVar12) {
          lVar3 = *plVar12;
          if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
            (*DAT_14c787678)(DAT_14c6e47a8,lVar3,0);
            FUN_144b3ec00(plVar12);
          }
          FUN_140069ea2(plVar12,(longlong *)(param_2 + (longlong)plVar12));
        }
      }
      plVar12 = plVar12 + 4;
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  return;
}



// FUNCTION 144c78370 FUN_144c78370 body=18 status=ok
// SIG undefined FUN_144c78370(void)

undefined8 * FUN_144c78370(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e8210;
  return param_2;
}



// FUNCTION 144c78390 FUN_144c78390 body=75 status=ok
// SIG undefined FUN_144c78390(void)

void FUN_144c78390(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144c6c660(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c783e0 FUN_144c783e0 body=88 status=ok
// SIG undefined FUN_144c783e0(void)

void FUN_144c783e0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x18);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -3;
      plVar2 = plVar2 + -3;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c784b0 FUN_144c784b0 body=305 status=ok
// SIG undefined FUN_144c784b0(void)

void FUN_144c784b0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  uint *puVar14;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar14 = (uint *)(param_1 + 0x3c);
    lVar13 = (longlong)param_4;
    do {
      if (puVar14 + -0xf != (uint *)0x0) {
        puVar14[-0xd] = 0xffffffff;
        puVar14[-0xc] = 0;
        puVar14[-0xb] = 1;
        puVar14[-10] = 0;
        *(undefined ***)(puVar14 + -0xf) = hkaiVolumeNavigator::PathRequestInput::vftable;
        puVar1 = (uint *)(param_2 + -0x1c + (longlong)puVar14);
        uVar2 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar14[-7] = *puVar1;
        puVar14[-6] = uVar2;
        puVar14[-5] = uVar4;
        puVar14[-4] = uVar5;
        puVar14[-3] = 0;
        puVar14[-2] = 0;
        puVar14[-1] = 0;
        *puVar14 = 0x80000000;
        uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar14);
        puVar12 = *(undefined4 **)((longlong)puVar14 + param_2 + -0xc);
        if (0 < (int)uVar2) {
          puVar10 = (undefined4 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 4);
          *(undefined4 **)(puVar14 + -3) = puVar10;
          uVar11 = (ulonglong)uVar2;
          puVar14[-1] = uVar2;
          *puVar14 = uVar2;
          do {
            if (puVar10 != (undefined4 *)0x0) {
              uVar6 = *puVar12;
              uVar7 = puVar12[1];
              uVar8 = puVar12[2];
              uVar9 = puVar12[3];
              puVar12 = puVar12 + 4;
              *puVar10 = uVar6;
              puVar10[1] = uVar7;
              puVar10[2] = uVar8;
              puVar10[3] = uVar9;
            }
            uVar11 = uVar11 - 1;
            puVar10 = puVar10 + 4;
          } while (uVar11 != 0);
        }
        lVar3 = *(longlong *)(param_2 + 4 + (longlong)puVar14);
        *(longlong *)(puVar14 + 1) = lVar3;
        if (lVar3 != 0) {
          FUN_144b3d910();
        }
      }
      puVar14 = puVar14 + 0x14;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 144c785f0 FUN_144c785f0 body=18 status=ok
// SIG undefined FUN_144c785f0(void)

undefined8 * FUN_144c785f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e82c0;
  return param_2;
}



// FUNCTION 144c78610 FUN_144c78610 body=91 status=ok
// SIG undefined FUN_144c78610(void)

void FUN_144c78610(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c78670 FUN_144c78670 body=60 status=ok
// SIG undefined FUN_144c78670(void)

void FUN_144c78670(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x10 + param_1;
    do {
      FUN_144c6c6b0(param_1);
      param_1 = param_1 + -0x10;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c78700 FUN_144c78700 body=110 status=ok
// SIG undefined FUN_144c78700(void)

undefined8 * FUN_144c78700(undefined8 *param_1,ulonglong param_2)

{
  FUN_144c91260(param_1 + 8);
  FUN_144c91c00(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 144c78770 FUN_144c78770 body=88 status=ok
// SIG undefined FUN_144c78770(void)

void FUN_144c78770(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x50 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -10;
      plVar2 = plVar2 + -10;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c787d0 FUN_144c787d0 body=70 status=ok
// SIG undefined FUN_144c787d0(void)

void FUN_144c787d0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144c6c6c0(param_1,param_2 + param_1);
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c78820 FUN_144c78820 body=372 status=ok
// SIG undefined FUN_144c78820(void)

void FUN_144c78820(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  if (0 < param_4) {
    plVar9 = (longlong *)(param_1 + 0x10);
    param_2 = param_2 - param_1;
    lVar13 = (longlong)param_4;
    do {
      plVar6 = (longlong *)(param_2 + -0x10 + (longlong)plVar9);
      plVar1 = plVar9 + -2;
      if (plVar1 != plVar6) {
        lVar4 = *plVar6;
        iVar3 = *(int *)(param_2 + -8 + (longlong)plVar9);
        if ((int)(*(uint *)((longlong)plVar9 + -4) & 0x7fffffff) < iVar3) {
          FUN_140069f0e(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
        }
        lVar10 = *plVar1;
        iVar5 = iVar3;
        if ((int)plVar9[-1] < iVar3) {
          iVar5 = (int)plVar9[-1];
        }
        if ((lVar10 != lVar4) && (lVar8 = (longlong)iVar5, 0 < iVar5)) {
          puVar7 = (undefined4 *)(lVar10 + 4);
          lVar10 = lVar4 - lVar10;
          do {
            puVar7[-1] = *(undefined4 *)(lVar10 + -4 + (longlong)puVar7);
            *puVar7 = *(undefined4 *)((longlong)puVar7 + lVar10);
            puVar7[1] = *(undefined4 *)(lVar10 + 4 + (longlong)puVar7);
            puVar7[2] = *(undefined4 *)(lVar10 + 8 + (longlong)puVar7);
            puVar7 = puVar7 + 4;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        puVar7 = (undefined4 *)((longlong)iVar5 * 0x10 + lVar4);
        if (0 < iVar3 - iVar5) {
          uVar12 = (ulonglong)(uint)(iVar3 - iVar5);
          puVar11 = (undefined4 *)(*plVar1 + (longlong)iVar5 * 0x10);
          do {
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = *puVar7;
              puVar11[1] = puVar7[1];
              puVar11[2] = puVar7[2];
              puVar2 = puVar7 + 3;
              puVar7 = puVar7 + 4;
              puVar11[3] = *puVar2;
            }
            uVar12 = uVar12 - 1;
            puVar11 = puVar11 + 4;
          } while (uVar12 != 0);
        }
        *(int *)(plVar9 + -1) = iVar3;
        if ((longlong *)((longlong)plVar9 + param_2) != plVar9) {
          lVar4 = *plVar9;
          if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != -2)) {
            (*DAT_14c787678)(DAT_14c6e47a8,lVar4,0);
            FUN_144b3ec00(plVar9);
          }
          FUN_140069ea2(plVar9,(longlong *)((longlong)plVar9 + param_2));
        }
      }
      plVar9 = plVar9 + 4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 144c789a0 FUN_144c789a0 body=284 status=ok
// SIG undefined FUN_144c789a0(void)

void FUN_144c789a0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  longlong lVar10;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar9 = (uint *)(param_1 + 0x3c);
    lVar10 = (longlong)param_4;
    do {
      puVar2 = (uint *)((longlong)puVar9 + param_2 + -0x1c);
      uVar3 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar1 = puVar9 + -3;
      puVar8 = (uint *)(param_2 + -0xc + (longlong)puVar9);
      puVar9[-7] = *puVar2;
      puVar9[-6] = uVar3;
      puVar9[-5] = uVar6;
      puVar9[-4] = uVar7;
      if (puVar8 != puVar1) {
        uVar4 = *(undefined8 *)puVar8;
        uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar9);
        if ((int)(*puVar9 & 0x7fffffff) < (int)uVar3) {
          FUN_144c9dda0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 << 4);
        puVar9[-1] = uVar3;
      }
      lVar5 = *(longlong *)(param_2 + 4 + (longlong)puVar9);
      if (*(longlong *)(puVar9 + 1) != lVar5) {
        if (lVar5 != 0) {
          FUN_144b3d910();
        }
        lVar5 = *(longlong *)(puVar9 + 1);
        *(undefined8 *)(puVar9 + 1) = *(undefined8 *)(param_2 + 4 + (longlong)puVar9);
        if (lVar5 != 0) {
          FUN_144b3f230();
        }
      }
      puVar9 = puVar9 + 0x14;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 144c78ac0 FUN_144c78ac0 body=87 status=ok
// SIG undefined FUN_144c78ac0(void)

undefined8 FUN_144c78ac0(undefined8 param_1,ulonglong param_2)

{
  FUN_145005240();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144c78b50 FUN_144c78b50 body=55 status=ok
// SIG undefined FUN_144c78b50(void)

void FUN_144c78b50(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144c31c10(param_1);
      }
      param_1 = param_1 + 0x60;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c78bc0 FUN_144c78bc0 body=80 status=ok
// SIG undefined FUN_144c78bc0(void)

void FUN_144c78bc0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c78c10 FUN_144c78c10 body=75 status=ok
// SIG undefined FUN_144c78c10(void)

void FUN_144c78c10(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144c31c70(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x60;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c78c60 FUN_144c78c60 body=80 status=ok
// SIG undefined FUN_144c78c60(void)

void FUN_144c78c60(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c78cb0 FUN_144c78cb0 body=63 status=ok
// SIG undefined FUN_144c78cb0(void)

void FUN_144c78cb0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c78cf0 FUN_144c78cf0 body=88 status=ok
// SIG undefined FUN_144c78cf0(void)

void FUN_144c78cf0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x60 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xc;
      plVar2 = plVar2 + -0xc;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c78d50 FUN_144c78d50 body=74 status=ok
// SIG undefined FUN_144c78d50(void)

void FUN_144c78d50(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 8);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -1;
      plVar2 = plVar2 + -1;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c78da0 FUN_144c78da0 body=63 status=ok
// SIG undefined FUN_144c78da0(void)

void FUN_144c78da0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c78de0 FUN_144c78de0 body=56 status=ok
// SIG undefined FUN_144c78de0(void)

void FUN_144c78de0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144c916e0(param_1 + 8);
      }
      param_1 = param_1 + 0x68;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c78e20 FUN_144c78e20 body=74 status=ok
// SIG undefined FUN_144c78e20(void)

void FUN_144c78e20(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c78e70 FUN_144c78e70 body=18 status=ok
// SIG undefined FUN_144c78e70(void)

undefined8 * FUN_144c78e70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e8380;
  return param_2;
}



// FUNCTION 144c78e90 FUN_144c78e90 body=97 status=ok
// SIG undefined FUN_144c78e90(void)

void FUN_144c78e90(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c78f00 FUN_144c78f00 body=70 status=ok
// SIG undefined FUN_144c78f00(void)

void FUN_144c78f00(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144c31fd0(param_1,param_2 + param_1);
      param_1 = param_1 + 0x60;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c78f50 FUN_144c78f50 body=97 status=ok
// SIG undefined FUN_144c78f50(void)

void FUN_144c78f50(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c78fc0 FUN_144c78fc0 body=32 status=ok
// SIG undefined FUN_144c78fc0(void)

undefined8 FUN_144c78fc0(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2,param_1);
  return param_1;
}



// FUNCTION 144c79010 FUN_144c79010 body=74 status=ok
// SIG undefined FUN_144c79010(void)

void FUN_144c79010(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c79060 FUN_144c79060 body=91 status=ok
// SIG undefined FUN_144c79060(void)

void FUN_144c79060(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c790c0 FUN_144c790c0 body=80 status=ok
// SIG undefined FUN_144c790c0(void)

void FUN_144c790c0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c79140 FUN_144c79140 body=63 status=ok
// SIG undefined FUN_144c79140(void)

void FUN_144c79140(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c79180 FUN_144c79180 body=159 status=ok
// SIG undefined FUN_144c79180(void)

undefined8 * FUN_144c79180(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 4);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144c79220 FUN_144c79220 body=80 status=ok
// SIG undefined FUN_144c79220(void)

void FUN_144c79220(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c79270 FUN_144c79270 body=97 status=ok
// SIG undefined FUN_144c79270(void)

void FUN_144c79270(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c792f0 FUN_144c792f0 body=63 status=ok
// SIG undefined FUN_144c792f0(void)

void FUN_144c792f0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c79360 FUN_144c79360 body=97 status=ok
// SIG undefined FUN_144c79360(void)

void FUN_144c79360(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c793f0 FUN_144c793f0 body=80 status=ok
// SIG undefined FUN_144c793f0(void)

void FUN_144c793f0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c79450 FUN_144c79450 body=63 status=ok
// SIG undefined FUN_144c79450(void)

void FUN_144c79450(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c79490 FUN_144c79490 body=97 status=ok
// SIG undefined FUN_144c79490(void)

void FUN_144c79490(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c79530 FUN_144c79530 body=91 status=ok
// SIG undefined FUN_144c79530(void)

void FUN_144c79530(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c795c0 FUN_144c795c0 body=74 status=ok
// SIG undefined FUN_144c795c0(void)

void FUN_144c795c0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c79610 FUN_144c79610 body=561 status=ok
// SIG undefined FUN_144c79610(void)

void FUN_144c79610(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  longlong local_38;
  
  local_38 = (longlong)param_4;
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    plVar13 = (longlong *)(param_1 + 0x10);
    do {
      plVar7 = (longlong *)(param_2 + -0x10 + (longlong)plVar13);
      plVar1 = plVar13 + -2;
      if (plVar1 != plVar7) {
        lVar3 = *plVar7;
        iVar2 = *(int *)((longlong)plVar13 + param_2 + -8);
        if ((int)(*(uint *)((longlong)plVar13 + -4) & 0x7fffffff) < iVar2) {
          FUN_144c9e700(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
        }
        if (iVar2 < (int)plVar13[-1]) {
          lVar4 = *plVar1;
          lVar8 = (longlong)(int)plVar13[-1] * 0x10 + *plVar1;
          while (lVar8 != (longlong)iVar2 * 0x10 + lVar4) {
            plVar7 = (longlong *)(lVar8 + -8);
            lVar8 = lVar8 + -0x10;
            if (*plVar7 != 0) {
              FUN_144b3f230();
            }
          }
        }
        lVar4 = *plVar1;
        iVar6 = iVar2;
        if ((int)plVar13[-1] < iVar2) {
          iVar6 = (int)plVar13[-1];
        }
        if ((lVar4 != lVar3) && (lVar8 = (longlong)iVar6, 0 < iVar6)) {
          plVar7 = (longlong *)(lVar3 + 8);
          lVar10 = lVar4 - lVar3;
          do {
            *(int *)(lVar10 + -8 + (longlong)plVar7) = (int)plVar7[-1];
            *(undefined4 *)((longlong)plVar7 + lVar10 + -4) =
                 *(undefined4 *)((longlong)plVar7 + (lVar3 - lVar4) + lVar10 + -4);
            if (*(longlong *)((longlong)plVar7 + lVar10) != *plVar7) {
              if (*plVar7 != 0) {
                FUN_144b3d910();
              }
              lVar5 = *(longlong *)((longlong)plVar7 + lVar10);
              *(longlong *)((longlong)plVar7 + lVar10) = *plVar7;
              if (lVar5 != 0) {
                FUN_144b3f230();
              }
            }
            plVar7 = plVar7 + 2;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        puVar9 = (undefined4 *)((longlong)iVar6 * 0x10 + lVar3);
        if (0 < iVar2 - iVar6) {
          uVar11 = (ulonglong)(uint)(iVar2 - iVar6);
          puVar12 = (undefined4 *)(*plVar1 + (longlong)iVar6 * 0x10);
          do {
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = *puVar9;
              puVar12[1] = puVar9[1];
              lVar3 = *(longlong *)(puVar9 + 2);
              *(longlong *)(puVar12 + 2) = lVar3;
              if (lVar3 != 0) {
                FUN_144b3d910();
              }
              puVar9 = puVar9 + 4;
            }
            uVar11 = uVar11 - 1;
            puVar12 = puVar12 + 4;
          } while (uVar11 != 0);
        }
        *(int *)(plVar13 + -1) = iVar2;
        if ((longlong *)(param_2 + (longlong)plVar13) != plVar13) {
          lVar3 = *plVar13;
          if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
            (*DAT_14c787678)(DAT_14c6e47a8,lVar3,0);
            FUN_144b3ec00(plVar13);
          }
          FUN_140069ea2(plVar13,(longlong *)(param_2 + (longlong)plVar13));
        }
      }
      plVar13 = plVar13 + 4;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  return;
}



// FUNCTION 144c79880 FUN_144c79880 body=18 status=ok
// SIG undefined FUN_144c79880(void)

undefined8 * FUN_144c79880(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e8510;
  return param_2;
}



// FUNCTION 144c798a0 FUN_144c798a0 body=91 status=ok
// SIG undefined FUN_144c798a0(void)

void FUN_144c798a0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c79900 FUN_144c79900 body=71 status=ok
// SIG undefined FUN_144c79900(void)

undefined8 * FUN_144c79900(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144c79950 FUN_144c79950 body=157 status=ok
// SIG undefined FUN_144c79950(void)

void FUN_144c79950(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    puVar2 = (undefined8 *)(param_1 + 0x10);
    lVar3 = (longlong)param_4;
    do {
      if (puVar2 + -2 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        puVar2[-2] = hkaiCarver::vftable;
        lVar1 = *(longlong *)((param_2 - param_1) + 8 + (longlong)puVar2);
        puVar2[1] = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((param_2 - param_1) + 0x10 + (longlong)puVar2)
        ;
      }
      puVar2 = puVar2 + 5;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c799f0 FUN_144c799f0 body=74 status=ok
// SIG undefined FUN_144c799f0(void)

void FUN_144c799f0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c79a60 FUN_144c79a60 body=92 status=ok
// SIG undefined FUN_144c79a60(void)

void FUN_144c79a60(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 0x10);
    lVar3 = (longlong)param_3;
    do {
      if (puVar2 != (undefined4 *)&DAT_00000010) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c79ac0 FUN_144c79ac0 body=88 status=ok
// SIG undefined FUN_144c79ac0(void)

void FUN_144c79ac0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x28);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -5;
      plVar2 = plVar2 + -5;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c79b20 FUN_144c79b20 body=105 status=ok
// SIG undefined FUN_144c79b20(void)

void FUN_144c79b20(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar3 = (longlong)param_4;
    plVar2 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar2 != *(longlong *)(param_2 + (longlong)plVar2)) {
        if (*(longlong *)(param_2 + (longlong)plVar2) != 0) {
          FUN_144b3d910();
        }
        lVar1 = *plVar2;
        *plVar2 = *(longlong *)(param_2 + (longlong)plVar2);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      *(undefined4 *)(plVar2 + 1) = *(undefined4 *)(param_2 + 8 + (longlong)plVar2);
      plVar2 = plVar2 + 5;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c79b90 FUN_144c79b90 body=201 status=ok
// SIG undefined FUN_144c79b90(void)

undefined8 * FUN_144c79b90(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[3];
  lVar2 = (longlong)*(int *)(param_1 + 4) * 0x20 + lVar1;
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -0x20;
    FUN_144c90d90(lVar2);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 5);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 144c79c90 FUN_144c79c90 body=80 status=ok
// SIG undefined FUN_144c79c90(void)

void FUN_144c79c90(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c79d90 FUN_144c79d90 body=18 status=ok
// SIG undefined FUN_144c79d90(void)

undefined8 * FUN_144c79d90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e8730;
  return param_2;
}



// FUNCTION 144c79db0 FUN_144c79db0 body=63 status=ok
// SIG undefined FUN_144c79db0(void)

void FUN_144c79db0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c79e20 FUN_144c79e20 body=291 status=ok
// SIG undefined FUN_144c79e20(void)

void FUN_144c79e20(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  if (0 < param_4) {
    puVar7 = (uint *)(param_1 + 0x24);
    param_2 = param_2 - param_1;
    lVar10 = (longlong)param_4;
    do {
      if (puVar7 + -9 != (uint *)0x0) {
        puVar7[-7] = 0xffffffff;
        puVar7[-6] = 0;
        puVar7[-5] = 1;
        puVar7[-4] = 0;
        *(undefined ***)(puVar7 + -9) = hkaiSmoothPath::CompleteEdgePath::vftable;
        puVar7[-3] = 0;
        puVar7[-2] = 0;
        puVar7[-1] = 0;
        *puVar7 = 0x80000000;
        uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar7);
        puVar8 = *(undefined8 **)(param_2 + -0xc + (longlong)puVar7);
        if (0 < (int)uVar3) {
          puVar6 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 * 0xc);
          *(undefined8 **)(puVar7 + -3) = puVar6;
          puVar7[-1] = uVar3;
          uVar9 = (ulonglong)uVar3;
          *puVar7 = uVar3;
          do {
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = *puVar8;
              puVar1 = puVar8 + 1;
              puVar8 = (undefined8 *)((longlong)puVar8 + 0xc);
              *(undefined4 *)(puVar6 + 1) = *(undefined4 *)puVar1;
            }
            uVar9 = uVar9 - 1;
            puVar6 = (undefined8 *)((longlong)puVar6 + 0xc);
          } while (uVar9 != 0);
        }
        puVar2 = (uint *)(param_2 + 0xc + (longlong)puVar7);
        uVar3 = puVar2[1];
        uVar4 = puVar2[2];
        uVar5 = puVar2[3];
        puVar7[3] = *puVar2;
        puVar7[4] = uVar3;
        puVar7[5] = uVar4;
        puVar7[6] = uVar5;
        puVar2 = (uint *)(param_2 + 0x1c + (longlong)puVar7);
        uVar3 = puVar2[1];
        uVar4 = puVar2[2];
        uVar5 = puVar2[3];
        puVar7[7] = *puVar2;
        puVar7[8] = uVar3;
        puVar7[9] = uVar4;
        puVar7[10] = uVar5;
        puVar7[0xb] = *(uint *)(param_2 + 0x2c + (longlong)puVar7);
      }
      puVar7 = puVar7 + 0x18;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 144c79f50 FUN_144c79f50 body=18 status=ok
// SIG undefined FUN_144c79f50(void)

undefined8 * FUN_144c79f50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e87a0;
  return param_2;
}



// FUNCTION 144c79f70 FUN_144c79f70 body=97 status=ok
// SIG undefined FUN_144c79f70(void)

void FUN_144c79f70(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c79fe0 FUN_144c79fe0 body=80 status=ok
// SIG undefined FUN_144c79fe0(void)

void FUN_144c79fe0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c7a030 FUN_144c7a030 body=88 status=ok
// SIG undefined FUN_144c7a030(void)

void FUN_144c7a030(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x60 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xc;
      plVar2 = plVar2 + -0xc;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7a0e0 FUN_144c7a0e0 body=63 status=ok
// SIG undefined FUN_144c7a0e0(void)

void FUN_144c7a0e0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c7a120 FUN_144c7a120 body=213 status=ok
// SIG undefined FUN_144c7a120(void)

void FUN_144c7a120(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  longlong lVar8;
  
  if (0 < param_4) {
    puVar7 = (uint *)(param_1 + 0x24);
    param_2 = param_2 - param_1;
    lVar8 = (longlong)param_4;
    do {
      puVar6 = (uint *)(param_2 + -0xc + (longlong)puVar7);
      puVar1 = puVar7 + -3;
      if (puVar6 != puVar1) {
        uVar3 = *(undefined8 *)puVar6;
        uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar7);
        if ((int)(*puVar7 & 0x7fffffff) < (int)uVar2) {
          FUN_144c9c230(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar2);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar3,(longlong)(int)uVar2 * 0xc);
        puVar7[-1] = uVar2;
      }
      puVar1 = (uint *)(param_2 + 0xc + (longlong)puVar7);
      uVar2 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar7[3] = *puVar1;
      puVar7[4] = uVar2;
      puVar7[5] = uVar4;
      puVar7[6] = uVar5;
      puVar1 = (uint *)(param_2 + 0x1c + (longlong)puVar7);
      uVar2 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar7[7] = *puVar1;
      puVar7[8] = uVar2;
      puVar7[9] = uVar4;
      puVar7[10] = uVar5;
      puVar7[0xb] = *(uint *)(param_2 + 0x2c + (longlong)puVar7);
      puVar7 = puVar7 + 0x18;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 144c7a200 FUN_144c7a200 body=97 status=ok
// SIG undefined FUN_144c7a200(void)

void FUN_144c7a200(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c7a270 FUN_144c7a270 body=55 status=ok
// SIG undefined FUN_144c7a270(void)

void FUN_144c7a270(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_145011940(param_1);
      }
      param_1 = param_1 + 0x70;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7a310 FUN_144c7a310 body=60 status=ok
// SIG undefined FUN_144c7a310(void)

void FUN_144c7a310(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x70 + param_1;
    do {
      FUN_1450119a0(param_1);
      param_1 = param_1 + -0x70;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7a350 FUN_144c7a350 body=273 status=ok
// SIG undefined FUN_144c7a350(void)

void FUN_144c7a350(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint *puVar6;
  
  if (0 < param_4) {
    puVar6 = (uint *)(param_1 + 0x24);
    lVar3 = (longlong)param_4;
    do {
      if (puVar6 + -9 != (uint *)0x0) {
        puVar6[-7] = 0xffffffff;
        puVar6[-6] = 0;
        puVar6[-5] = 1;
        puVar6[-4] = 0;
        *(undefined ***)(puVar6 + -9) = hkaiNavMeshClearanceCacheSeeding::CacheDataSet::vftable;
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x80000000;
        uVar1 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar6);
        uVar4 = (ulonglong)uVar1;
        lVar5 = *(longlong *)((param_2 - param_1) + -0xc + (longlong)puVar6);
        if (0 < (int)uVar1) {
          lVar2 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                            (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 4);
          *(longlong *)(puVar6 + -3) = lVar2;
          puVar6[-1] = uVar1;
          *puVar6 = uVar1;
          do {
            if (lVar2 != 0) {
              FUN_144c6c660(lVar2,lVar5);
              lVar5 = lVar5 + 0x10;
            }
            uVar4 = uVar4 - 1;
            lVar2 = lVar2 + 0x10;
          } while (uVar4 != 0);
        }
      }
      puVar6 = puVar6 + 10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c7a4f0 FUN_144c7a4f0 body=152 status=ok
// SIG undefined FUN_144c7a4f0(void)

void FUN_144c7a4f0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 local_res18;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 0x1c);
    lVar1 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -7) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -7) = 0;
        puVar2[-5] = 0;
        puVar2[-4] = 0x80000000;
        *(undefined8 *)(puVar2 + -3) = 0;
        puVar2[-1] = 0;
        *puVar2 = 0x80000000;
        FUN_144ffd030(puVar2 + 1,local_res18);
        FUN_144ffd030(puVar2 + 9,local_res18);
        *(undefined8 *)(puVar2 + 0x11) = 0;
        puVar2[0x13] = 0;
        puVar2[0x14] = 0x80000000;
      }
      puVar2 = puVar2 + 0x1c;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 144c7a590 FUN_144c7a590 body=88 status=ok
// SIG undefined FUN_144c7a590(void)

void FUN_144c7a590(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x28);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -5;
      plVar2 = plVar2 + -5;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7a5f0 FUN_144c7a5f0 body=684 status=ok
// SIG undefined FUN_144c7a5f0(void)

void FUN_144c7a5f0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar11 = (uint *)(param_1 + 0x54);
    lVar14 = (longlong)param_4;
    do {
      puVar1 = puVar11 + -0x15;
      if (puVar1 != (uint *)0x0) {
        puVar11[-0x11] = 1;
        puVar11[-0x10] = 0;
        *(undefined ***)puVar1 = hkaiPathRequestBase::vftable;
        puVar11[-0x13] = 0xffffffff;
        puVar11[-0x12] = 0;
        *(undefined1 *)(puVar11 + -0xf) = *(undefined1 *)(param_2 + -0x3c + (longlong)puVar11);
        puVar11[-0xe] = *(uint *)(param_2 + -0x38 + (longlong)puVar11);
        *(undefined1 *)(puVar11 + -0xd) = *(undefined1 *)(param_2 + -0x34 + (longlong)puVar11);
        *(undefined ***)puVar1 = hkaiNavVolumePathRequest::vftable;
        lVar4 = *(longlong *)(param_2 + -0x2c + (longlong)puVar11);
        *(longlong *)(puVar11 + -0xb) = lVar4;
        if (lVar4 != 0) {
          FUN_144b3d910();
        }
        lVar4 = *(longlong *)(param_2 + -0x24 + (longlong)puVar11);
        *(longlong *)(puVar11 + -9) = lVar4;
        if (lVar4 != 0) {
          FUN_144b3d910();
        }
        *(undefined ***)puVar1 = hkaiVolumeNavigator::PathRequest::vftable;
        *(undefined8 *)(puVar11 + -7) = *(undefined8 *)(param_2 + -0x1c + (longlong)puVar11);
        lVar4 = *(longlong *)(param_2 + -0x14 + (longlong)puVar11);
        *(longlong *)(puVar11 + -5) = lVar4;
        if (lVar4 != 0) {
          FUN_144b3d910();
        }
        *puVar11 = 0x80000000;
        puVar11[-3] = 0;
        puVar11[-2] = 0;
        puVar11[-1] = 0;
        uVar2 = *(uint *)(param_2 + -4 + (longlong)puVar11);
        lVar4 = *(longlong *)((longlong)puVar11 + param_2 + -0xc);
        if (0 < (int)uVar2) {
          puVar7 = (undefined4 *)(**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0);
          *(undefined4 **)(puVar11 + -3) = puVar7;
          puVar15 = (undefined8 *)(lVar4 + 0x10);
          puVar11[-1] = uVar2;
          uVar13 = (ulonglong)uVar2;
          *puVar11 = uVar2;
          do {
            if (puVar7 != (undefined4 *)0x0) {
              *puVar7 = *(undefined4 *)(puVar15 + -2);
              uVar8 = puVar15[1];
              *(undefined8 *)(puVar7 + 4) = *puVar15;
              *(undefined8 *)(puVar7 + 6) = uVar8;
              uVar8 = puVar15[3];
              *(undefined8 *)(puVar7 + 8) = puVar15[2];
              *(undefined8 *)(puVar7 + 10) = uVar8;
              uVar3 = *(undefined4 *)((longlong)puVar15 + 0x24);
              uVar5 = *(undefined4 *)(puVar15 + 5);
              uVar6 = *(undefined4 *)((longlong)puVar15 + 0x2c);
              puVar7[0xc] = *(undefined4 *)(puVar15 + 4);
              puVar7[0xd] = uVar3;
              puVar7[0xe] = uVar5;
              puVar7[0xf] = uVar6;
              uVar3 = *(undefined4 *)((longlong)puVar15 + 0x34);
              uVar5 = *(undefined4 *)(puVar15 + 7);
              uVar6 = *(undefined4 *)((longlong)puVar15 + 0x3c);
              puVar7[0x10] = *(undefined4 *)(puVar15 + 6);
              puVar7[0x11] = uVar3;
              puVar7[0x12] = uVar5;
              puVar7[0x13] = uVar6;
              *(undefined8 *)(puVar7 + 0x14) = 0;
              puVar7[0x16] = 0;
              puVar7[0x17] = 0x80000000;
              uVar2 = *(uint *)(puVar15 + 9);
              puVar10 = (undefined4 *)puVar15[8];
              if (0 < (int)uVar2) {
                uVar8 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                                  (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 2);
                *(undefined8 *)(puVar7 + 0x14) = uVar8;
                uVar12 = (ulonglong)uVar2;
                puVar7[0x16] = uVar2;
                puVar7[0x17] = uVar2;
                puVar9 = *(undefined4 **)(puVar7 + 0x14);
                do {
                  if (puVar9 != (undefined4 *)0x0) {
                    uVar3 = *puVar10;
                    puVar10 = puVar10 + 1;
                    *puVar9 = uVar3;
                  }
                  uVar12 = uVar12 - 1;
                  puVar9 = puVar9 + 1;
                } while (uVar12 != 0);
              }
              puVar15 = puVar15 + 0xc;
            }
            uVar13 = uVar13 - 1;
            puVar7 = puVar7 + 0x18;
          } while (uVar13 != 0);
        }
      }
      puVar11 = puVar11 + 0x16;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}



// FUNCTION 144c7a8a0 FUN_144c7a8a0 body=80 status=ok
// SIG undefined FUN_144c7a8a0(void)

void FUN_144c7a8a0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c7a8f0 FUN_144c7a8f0 body=77 status=ok
// SIG undefined FUN_144c7a8f0(void)

void FUN_144c7a8f0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x58 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xb;
      plVar2 = plVar2 + -0xb;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7a940 FUN_144c7a940 body=375 status=ok
// SIG undefined FUN_144c7a940(void)

void FUN_144c7a940(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if (0 < param_4) {
    plVar9 = (longlong *)(param_1 + 0x18);
    lVar8 = (longlong)param_4;
    do {
      plVar3 = (longlong *)((param_2 - param_1) + (longlong)plVar9);
      if (plVar3 != plVar9) {
        lVar7 = *plVar3;
        uVar1 = *(uint *)((longlong)plVar9 + (param_2 - param_1) + 8);
        if ((int)(*(uint *)((longlong)plVar9 + 0xc) & 0x7fffffff) < (int)uVar1) {
          FUN_144c9ba20(plVar9,&PTR_vftable_14c6e47a0,(longlong)(int)uVar1);
        }
        if ((int)uVar1 < (int)plVar9[1]) {
          lVar5 = *plVar9;
          lVar4 = (longlong)(int)plVar9[1] * 0x10 + *plVar9;
          while (lVar4 != (longlong)(int)uVar1 * 0x10 + lVar5) {
            lVar4 = lVar4 + -0x10;
            FUN_144c6c6b0(lVar4);
          }
        }
        lVar5 = *plVar9;
        uVar2 = uVar1;
        if ((int)plVar9[1] < (int)uVar1) {
          uVar2 = *(uint *)(plVar9 + 1);
        }
        uVar6 = (ulonglong)uVar2;
        if ((lVar5 != lVar7) && (0 < (int)uVar2)) {
          lVar4 = lVar7 - lVar5;
          do {
            FUN_144c6c6c0(lVar5,lVar4 + lVar5);
            lVar5 = lVar5 + 0x10;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        lVar7 = (longlong)(int)uVar2 * 0x10 + lVar7;
        if (0 < (int)(uVar1 - uVar2)) {
          uVar6 = (ulonglong)(uVar1 - uVar2);
          lVar5 = *plVar9 + (longlong)(int)uVar2 * 0x10;
          do {
            if (lVar5 != 0) {
              FUN_144c6c660(lVar5,lVar7);
              lVar7 = lVar7 + 0x10;
            }
            uVar6 = uVar6 - 1;
            lVar5 = lVar5 + 0x10;
          } while (uVar6 != 0);
        }
        *(uint *)(plVar9 + 1) = uVar1;
      }
      plVar9 = plVar9 + 5;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 144c7aba0 FUN_144c7aba0 body=74 status=ok
// SIG undefined FUN_144c7aba0(void)

void FUN_144c7aba0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7abf0 FUN_144c7abf0 body=63 status=ok
// SIG undefined FUN_144c7abf0(void)

void FUN_144c7abf0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c7ac40 FUN_144c7ac40 body=70 status=ok
// SIG undefined FUN_144c7ac40(void)

void FUN_144c7ac40(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144c98bc0(param_1,param_2 + param_1);
      param_1 = param_1 + 0x58;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7ac90 FUN_144c7ac90 body=80 status=ok
// SIG undefined FUN_144c7ac90(void)

void FUN_144c7ac90(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c7ace0 FUN_144c7ace0 body=97 status=ok
// SIG undefined FUN_144c7ace0(void)

void FUN_144c7ace0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c7ad50 FUN_144c7ad50 body=63 status=ok
// SIG undefined FUN_144c7ad50(void)

void FUN_144c7ad50(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c7ae00 FUN_144c7ae00 body=83 status=ok
// SIG undefined FUN_144c7ae00(void)

void FUN_144c7ae00(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
        FUN_144bda160(param_1 + 8);
      }
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7ae60 FUN_144c7ae60 body=97 status=ok
// SIG undefined FUN_144c7ae60(void)

void FUN_144c7ae60(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c7aed0 FUN_144c7aed0 body=18 status=ok
// SIG undefined FUN_144c7aed0(void)

undefined8 * FUN_144c7aed0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e8d20;
  return param_2;
}



// FUNCTION 144c7af40 FUN_144c7af40 body=62 status=ok
// SIG undefined FUN_144c7af40(void)

undefined8 * FUN_144c7af40(undefined8 param_1,undefined8 *param_2)

{
  FUN_144bf09d0(&DAT_14c6e8d80);
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e8d80;
  return param_2;
}



// FUNCTION 144c7af80 FUN_144c7af80 body=91 status=ok
// SIG undefined FUN_144c7af80(void)

void FUN_144c7af80(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c7afe0 FUN_144c7afe0 body=74 status=ok
// SIG undefined FUN_144c7afe0(void)

void FUN_144c7afe0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7b030 FUN_144c7b030 body=200 status=ok
// SIG undefined FUN_144c7b030(void)

void FUN_144c7b030(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 0x28);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -10) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -8) = 0xffffffff;
        *(undefined8 *)(puVar2 + -6) = 1;
        *(undefined ***)(puVar2 + -10) = &PTR_LAB_14aba2b70;
        *(undefined8 *)(puVar2 + -4) = 0;
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        *(undefined8 *)(puVar2 + 2) = 0;
        puVar2[4] = 0;
        puVar2[5] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 6) = uVar1;
        puVar2[8] = 0;
        *(undefined8 *)(puVar2 + 10) = 0;
        puVar2[0xc] = 0;
        puVar2[0xd] = 0x80000000;
        *(undefined8 *)(puVar2 + 0xe) = 0;
        puVar2[0x10] = 0;
        puVar2[0x11] = 0x80000000;
        *(undefined8 *)(puVar2 + 0x12) = 0;
        puVar2[0x14] = 0;
        puVar2[0x15] = 0x80000000;
      }
      puVar2 = puVar2 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c7b120 FUN_144c7b120 body=120 status=ok
// SIG undefined FUN_144c7b120(void)

undefined8 * FUN_144c7b120(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[4] != 0) {
    FUN_144b3f230();
  }
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 144c7b1a0 FUN_144c7b1a0 body=75 status=ok
// SIG undefined FUN_144c7b1a0(void)

void FUN_144c7b1a0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144c90530(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x80;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7b1f0 FUN_144c7b1f0 body=77 status=ok
// SIG undefined FUN_144c7b1f0(void)

void FUN_144c7b1f0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x80 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x10;
      plVar2 = plVar2 + -0x10;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7b240 FUN_144c7b240 body=95 status=ok
// SIG undefined FUN_144c7b240(void)

void FUN_144c7b240(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144b3e890(param_1);
        FUN_144fc5c10(param_1 + 0x40);
        FUN_145016ce0(param_1 + 0x260);
      }
      param_1 = param_1 + 0x2b0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7b2a0 FUN_144c7b2a0 body=62 status=ok
// SIG undefined FUN_144c7b2a0(void)

undefined8 * FUN_144c7b2a0(undefined8 param_1,undefined8 *param_2)

{
  FUN_144bf09d0(&DAT_14c6e8e90);
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e8e90;
  return param_2;
}



// FUNCTION 144c7b310 FUN_144c7b310 body=74 status=ok
// SIG undefined FUN_144c7b310(void)

void FUN_144c7b310(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7b360 FUN_144c7b360 body=80 status=ok
// SIG undefined FUN_144c7b360(void)

void FUN_144c7b360(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c7b3b0 FUN_144c7b3b0 body=74 status=ok
// SIG undefined FUN_144c7b3b0(void)

void FUN_144c7b3b0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7b400 FUN_144c7b400 body=63 status=ok
// SIG undefined FUN_144c7b400(void)

void FUN_144c7b400(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c7b4c0 FUN_144c7b4c0 body=97 status=ok
// SIG undefined FUN_144c7b4c0(void)

void FUN_144c7b4c0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c7b560 FUN_144c7b560 body=697 status=ok
// SIG undefined FUN_144c7b560(void)

void FUN_144c7b560(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined4 *puVar18;
  longlong lVar19;
  int iVar20;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar17 = (uint *)(param_1 + 0x34);
    lVar19 = (longlong)param_4;
    do {
      if (puVar17 + -0xd != (uint *)0x0) {
        puVar17[-0xb] = 0xffffffff;
        puVar17[-10] = 0;
        puVar17[-9] = 1;
        puVar17[-8] = 0;
        *(undefined ***)(puVar17 + -0xd) = hkaiSmoothPath::Details::InternalPolyline::vftable;
        puVar17[-7] = 0;
        puVar17[-6] = 0;
        iVar20 = 0;
        puVar17[-5] = 0;
        puVar17[-4] = 0x80000000;
        uVar4 = *(uint *)((longlong)puVar17 + param_2 + -0x14);
        puVar14 = *(undefined8 **)((longlong)puVar17 + param_2 + -0x1c);
        if (0 < (int)uVar4) {
          puVar9 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar4 << 3);
          *(undefined8 **)(puVar17 + -7) = puVar9;
          uVar13 = (ulonglong)uVar4;
          puVar17[-5] = uVar4;
          puVar17[-4] = uVar4;
          do {
            if (puVar9 != (undefined8 *)0x0) {
              uVar2 = *puVar14;
              puVar14 = puVar14 + 1;
              *puVar9 = uVar2;
            }
            uVar13 = uVar13 - 1;
            puVar9 = puVar9 + 1;
          } while (uVar13 != 0);
        }
        puVar17[-3] = 0;
        puVar17[-2] = 0;
        puVar17[-1] = 0;
        *puVar17 = 0x80000000;
        uVar4 = *(uint *)((longlong)puVar17 + param_2 + -4);
        puVar15 = *(undefined1 **)((longlong)puVar17 + param_2 + -0xc);
        if (0 < (int)uVar4) {
          puVar10 = (undefined1 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar4);
          *(undefined1 **)(puVar17 + -3) = puVar10;
          puVar17[-1] = uVar4;
          uVar13 = (ulonglong)uVar4;
          *puVar17 = uVar4;
          do {
            if (puVar10 != (undefined1 *)0x0) {
              uVar3 = *puVar15;
              puVar15 = puVar15 + 1;
              *puVar10 = uVar3;
            }
            uVar13 = uVar13 - 1;
            puVar10 = puVar10 + 1;
          } while (uVar13 != 0);
        }
        puVar17[1] = 0;
        puVar17[2] = 0;
        puVar17[3] = 0;
        puVar17[4] = 0x80000000;
        uVar4 = *(uint *)((longlong)puVar17 + param_2 + 0xc);
        puVar16 = *(undefined4 **)((longlong)puVar17 + param_2 + 4);
        if (0 < (int)uVar4) {
          puVar11 = (undefined4 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar4 << 4);
          *(undefined4 **)(puVar17 + 1) = puVar11;
          uVar13 = (ulonglong)uVar4;
          puVar17[3] = uVar4;
          puVar17[4] = uVar4;
          do {
            if (puVar11 != (undefined4 *)0x0) {
              uVar5 = *puVar16;
              uVar6 = puVar16[1];
              uVar7 = puVar16[2];
              uVar8 = puVar16[3];
              puVar16 = puVar16 + 4;
              *puVar11 = uVar5;
              puVar11[1] = uVar6;
              puVar11[2] = uVar7;
              puVar11[3] = uVar8;
            }
            uVar13 = uVar13 - 1;
            puVar11 = puVar11 + 4;
          } while (uVar13 != 0);
        }
        puVar17[5] = 0;
        puVar17[6] = 0;
        puVar17[7] = 0;
        puVar17[8] = 0x80000000;
        uVar4 = *(uint *)((longlong)puVar17 + param_2 + 0x1c);
        puVar16 = *(undefined4 **)((longlong)puVar17 + param_2 + 0x14);
        if (0 < (int)uVar4) {
          puVar11 = (undefined4 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar4 << 3);
          *(undefined4 **)(puVar17 + 5) = puVar11;
          puVar17[7] = uVar4;
          puVar17[8] = uVar4;
          if (3 < (int)uVar4) {
            puVar18 = puVar11 + 5;
            uVar12 = (uVar4 - 4 >> 2) + 1;
            uVar13 = (ulonglong)uVar12;
            iVar20 = uVar12 * 4;
            do {
              if (puVar11 != (undefined4 *)0x0) {
                *puVar11 = *puVar16;
                puVar1 = puVar16 + 1;
                puVar16 = puVar16 + 2;
                puVar18[-4] = *puVar1;
              }
              if (puVar18 + -3 != (undefined4 *)0x0) {
                puVar18[-3] = *puVar16;
                puVar1 = puVar16 + 1;
                puVar16 = puVar16 + 2;
                puVar18[-2] = *puVar1;
              }
              if (puVar18 + -1 != (undefined4 *)0x0) {
                puVar18[-1] = *puVar16;
                puVar1 = puVar16 + 1;
                puVar16 = puVar16 + 2;
                *puVar18 = *puVar1;
              }
              if (puVar18 + 1 != (undefined4 *)0x0) {
                puVar18[1] = *puVar16;
                puVar1 = puVar16 + 1;
                puVar16 = puVar16 + 2;
                puVar18[2] = *puVar1;
              }
              puVar11 = puVar11 + 8;
              puVar18 = puVar18 + 8;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
            if ((int)uVar4 <= iVar20) goto LAB_144c7b7e5;
          }
          uVar13 = (ulonglong)(uVar4 - iVar20);
          do {
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = *puVar16;
              puVar18 = puVar16 + 1;
              puVar16 = puVar16 + 2;
              puVar11[1] = *puVar18;
            }
            puVar11 = puVar11 + 2;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
LAB_144c7b7e5:
      puVar17 = puVar17 + 0x16;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  return;
}



// FUNCTION 144c7b820 FUN_144c7b820 body=80 status=ok
// SIG undefined FUN_144c7b820(void)

void FUN_144c7b820(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c7b870 FUN_144c7b870 body=77 status=ok
// SIG undefined FUN_144c7b870(void)

void FUN_144c7b870(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x58 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xb;
      plVar2 = plVar2 + -0xb;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7b8c0 FUN_144c7b8c0 body=88 status=ok
// SIG undefined FUN_144c7b8c0(void)

void FUN_144c7b8c0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x18);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -3;
      plVar2 = plVar2 + -3;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7b920 FUN_144c7b920 body=63 status=ok
// SIG undefined FUN_144c7b920(void)

void FUN_144c7b920(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c7b960 FUN_144c7b960 body=668 status=ok
// SIG undefined FUN_144c7b960(void)

void FUN_144c7b960(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  uint *puVar9;
  size_t _Size;
  undefined1 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar9 = (uint *)(param_1 + 0x44);
    lVar12 = (longlong)param_4;
    do {
      puVar6 = (uint *)(param_2 + -0x2c + (longlong)puVar9);
      puVar1 = puVar9 + -0xb;
      if (puVar6 != puVar1) {
        uVar4 = *(undefined8 *)puVar6;
        uVar3 = *(uint *)((longlong)puVar9 + param_2 + -0x24);
        if ((int)(puVar9[-8] & 0x7fffffff) < (int)uVar3) {
          FUN_144c9c4e0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 * 8);
        puVar9[-9] = uVar3;
      }
      puVar6 = (uint *)((longlong)puVar9 + param_2 + -0x1c);
      puVar1 = puVar9 + -7;
      if (puVar6 != puVar1) {
        puVar10 = *(undefined1 **)puVar6;
        uVar3 = *(uint *)((longlong)puVar9 + param_2 + -0x14);
        if ((int)(puVar9[-4] & 0x7fffffff) < (int)uVar3) {
          FUN_144c9c580(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        puVar7 = *(undefined1 **)puVar1;
        uVar5 = uVar3;
        if ((int)puVar9[-5] < (int)uVar3) {
          uVar5 = puVar9[-5];
        }
        if (puVar7 != puVar10) {
          _Size = (size_t)(int)uVar5;
          if ((((int)uVar5 < 1) || (uVar5 < 0x10)) ||
             ((puVar7 <= puVar10 + (int)(uVar5 - 1) && (puVar10 <= puVar7 + (int)(uVar5 - 1))))) {
            if (0 < (longlong)_Size) {
              lVar8 = (longlong)puVar10 - (longlong)puVar7;
              do {
                *puVar7 = puVar7[lVar8];
                puVar7 = puVar7 + 1;
                _Size = _Size - 1;
              } while (_Size != 0);
            }
          }
          else {
            memcpy(puVar7,puVar10,_Size);
          }
        }
        puVar10 = puVar10 + (int)uVar5;
        if (0 < (int)(uVar3 - uVar5)) {
          uVar11 = (ulonglong)(uVar3 - uVar5);
          puVar7 = (undefined1 *)(*(longlong *)puVar1 + (longlong)(int)uVar5);
          do {
            if (puVar7 != (undefined1 *)0x0) {
              uVar2 = *puVar10;
              puVar10 = puVar10 + 1;
              *puVar7 = uVar2;
            }
            uVar11 = uVar11 - 1;
            puVar7 = puVar7 + 1;
          } while (uVar11 != 0);
        }
        puVar9[-5] = uVar3;
      }
      puVar6 = (uint *)((longlong)puVar9 + param_2 + -0xc);
      puVar1 = puVar9 + -3;
      if (puVar6 != puVar1) {
        uVar4 = *(undefined8 *)puVar6;
        uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar9);
        if ((int)(*puVar9 & 0x7fffffff) < (int)uVar3) {
          FUN_144c9c630(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 << 4);
        puVar9[-1] = uVar3;
      }
      puVar6 = (uint *)((longlong)puVar9 + param_2 + 4);
      puVar1 = puVar9 + 1;
      if (puVar6 != puVar1) {
        uVar4 = *(undefined8 *)puVar6;
        uVar3 = *(uint *)((longlong)puVar9 + param_2 + 0xc);
        if ((int)(puVar9[4] & 0x7fffffff) < (int)uVar3) {
          FUN_144c9c6d0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 * 8);
        puVar9[3] = uVar3;
      }
      puVar9 = puVar9 + 0x16;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 144c7bc00 FUN_144c7bc00 body=272 status=ok
// SIG undefined FUN_144c7bc00(void)

undefined8 * FUN_144c7bc00(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[3];
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 4) * 2;
  while (plVar2 != plVar1) {
    plVar3 = plVar2 + -2;
    *(undefined4 *)(plVar2 + -1) = 0;
    if ((-1 < (int)*(uint *)((longlong)plVar2 + -4)) && (*plVar3 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar3,
                 (ulonglong)(*(uint *)((longlong)plVar2 + -4) & 0x7fffffff) << 5);
    }
    *plVar3 = 0;
    *(undefined4 *)((longlong)plVar2 + -4) = 0x80000000;
    plVar2 = plVar3;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 4);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 144c7bd20 FUN_144c7bd20 body=97 status=ok
// SIG undefined FUN_144c7bd20(void)

void FUN_144c7bd20(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c7bd90 FUN_144c7bd90 body=18 status=ok
// SIG undefined FUN_144c7bd90(void)

undefined8 * FUN_144c7bd90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e9110;
  return param_2;
}



// FUNCTION 144c7bdb0 FUN_144c7bdb0 body=74 status=ok
// SIG undefined FUN_144c7bdb0(void)

void FUN_144c7bdb0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7be30 FUN_144c7be30 body=120 status=ok
// SIG undefined FUN_144c7be30(void)

undefined8 * FUN_144c7be30(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  if (param_1[5] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 144c7beb0 FUN_144c7beb0 body=80 status=ok
// SIG undefined FUN_144c7beb0(void)

void FUN_144c7beb0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c7bf30 FUN_144c7bf30 body=18 status=ok
// SIG undefined FUN_144c7bf30(void)

undefined8 * FUN_144c7bf30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e91d0;
  return param_2;
}



// FUNCTION 144c7bf50 FUN_144c7bf50 body=63 status=ok
// SIG undefined FUN_144c7bf50(void)

void FUN_144c7bf50(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c7bf90 FUN_144c7bf90 body=80 status=ok
// SIG undefined FUN_144c7bf90(void)

void FUN_144c7bf90(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c7bfe0 FUN_144c7bfe0 body=97 status=ok
// SIG undefined FUN_144c7bfe0(void)

void FUN_144c7bfe0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c7c050 FUN_144c7c050 body=63 status=ok
// SIG undefined FUN_144c7c050(void)

void FUN_144c7c050(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c7c090 FUN_144c7c090 body=120 status=ok
// SIG undefined FUN_144c7c090(void)

undefined8 * FUN_144c7c090(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[4] != 0) {
    FUN_144b3f230();
  }
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 144c7c110 FUN_144c7c110 body=88 status=ok
// SIG undefined FUN_144c7c110(void)

void FUN_144c7c110(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x50 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -10;
      plVar2 = plVar2 + -10;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7c170 FUN_144c7c170 body=97 status=ok
// SIG undefined FUN_144c7c170(void)

void FUN_144c7c170(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c7c1e0 FUN_144c7c1e0 body=74 status=ok
// SIG undefined FUN_144c7c1e0(void)

void FUN_144c7c1e0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7c230 FUN_144c7c230 body=157 status=ok
// SIG undefined FUN_144c7c230(void)

void FUN_144c7c230(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar7 = (longlong)param_4;
    puVar6 = (undefined4 *)(param_1 + 0x40);
    do {
      *(undefined8 *)(puVar6 + -10) = *(undefined8 *)(param_2 + -0x28 + (longlong)puVar6);
      puVar6[-8] = *(undefined4 *)(param_2 + -0x20 + (longlong)puVar6);
      puVar6[-7] = *(undefined4 *)(param_2 + -0x1c + (longlong)puVar6);
      lVar2 = *(longlong *)(param_2 + -0x18 + (longlong)puVar6);
      if (*(longlong *)(puVar6 + -6) != lVar2) {
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
        lVar2 = *(longlong *)(puVar6 + -6);
        *(undefined8 *)(puVar6 + -6) = *(undefined8 *)(param_2 + -0x18 + (longlong)puVar6);
        if (lVar2 != 0) {
          FUN_144b3f230();
        }
      }
      puVar1 = (undefined4 *)(param_2 + -0x10 + (longlong)puVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar6[-4] = *puVar1;
      puVar6[-3] = uVar3;
      puVar6[-2] = uVar4;
      puVar6[-1] = uVar5;
      puVar1 = (undefined4 *)(param_2 + (longlong)puVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar6 = *puVar1;
      puVar6[1] = uVar3;
      puVar6[2] = uVar4;
      puVar6[3] = uVar5;
      puVar6 = puVar6 + 0x14;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144c7c2d0 FUN_144c7c2d0 body=18 status=ok
// SIG undefined FUN_144c7c2d0(void)

undefined8 * FUN_144c7c2d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e9360;
  return param_2;
}



// FUNCTION 144c7c320 FUN_144c7c320 body=58 status=ok
// SIG undefined FUN_144c7c320(void)

void FUN_144c7c320(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144c3aba0(param_1);
      }
      param_1 = param_1 + 0xf0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7c3f0 FUN_144c7c3f0 body=94 status=ok
// SIG undefined FUN_144c7c3f0(void)

void FUN_144c7c3f0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xf0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x1e;
      plVar2 = plVar2 + -0x1e;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7c450 FUN_144c7c450 body=80 status=ok
// SIG undefined FUN_144c7c450(void)

void FUN_144c7c450(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c7c4a0 FUN_144c7c4a0 body=74 status=ok
// SIG undefined FUN_144c7c4a0(void)

void FUN_144c7c4a0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7c4f0 FUN_144c7c4f0 body=88 status=ok
// SIG undefined FUN_144c7c4f0(void)

void FUN_144c7c4f0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x18);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -3;
      plVar2 = plVar2 + -3;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7c550 FUN_144c7c550 body=74 status=ok
// SIG undefined FUN_144c7c550(void)

void FUN_144c7c550(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7c5a0 FUN_144c7c5a0 body=63 status=ok
// SIG undefined FUN_144c7c5a0(void)

void FUN_144c7c5a0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c7c6d0 FUN_144c7c6d0 body=97 status=ok
// SIG undefined FUN_144c7c6d0(void)

void FUN_144c7c6d0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c7c740 FUN_144c7c740 body=354 status=ok
// SIG undefined FUN_144c7c740(void)

void FUN_144c7c740(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  if (0 < param_4) {
    puVar6 = (undefined4 *)(param_1 + 0x6c);
    param_2 = param_2 - param_1;
    lVar7 = (longlong)param_4;
    do {
      if ((undefined8 *)(puVar6 + -0x1b) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar6 + -0x17) = 1;
        *(undefined8 *)(puVar6 + -0x19) = 0xffffffff;
        *(undefined ***)(puVar6 + -0x1b) = hkaiNavigator::NavigatorSettings::vftable;
        puVar6[-0x15] = *(undefined4 *)(param_2 + -0x54 + (longlong)puVar6);
        *(undefined1 *)(puVar6 + -0x14) = *(undefined1 *)(param_2 + -0x50 + (longlong)puVar6);
        *(undefined8 *)(puVar6 + -0x13) = *(undefined8 *)(param_2 + -0x4c + (longlong)puVar6);
        *(undefined1 *)(puVar6 + -0x11) = *(undefined1 *)(param_2 + -0x44 + (longlong)puVar6);
        *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(param_2 + -0x40 + (longlong)puVar6);
        puVar6[-0xe] = *(undefined4 *)(param_2 + -0x38 + (longlong)puVar6);
        *(undefined1 *)(puVar6 + -0xd) = *(undefined1 *)(param_2 + -0x34 + (longlong)puVar6);
        puVar1 = (undefined4 *)(param_2 + -0x2c + (longlong)puVar6);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar6[-0xb] = *puVar1;
        puVar6[-10] = uVar3;
        puVar6[-9] = uVar4;
        puVar6[-8] = uVar5;
        lVar2 = *(longlong *)(param_2 + -0x1c + (longlong)puVar6);
        *(longlong *)(puVar6 + -7) = lVar2;
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
        lVar2 = *(longlong *)(param_2 + -0x14 + (longlong)puVar6);
        *(longlong *)(puVar6 + -5) = lVar2;
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
        lVar2 = *(longlong *)(param_2 + -0xc + (longlong)puVar6);
        *(longlong *)(puVar6 + -3) = lVar2;
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
        puVar6[-1] = *(undefined4 *)(param_2 + -4 + (longlong)puVar6);
        *puVar6 = *(undefined4 *)((longlong)puVar6 + param_2);
        puVar6[1] = *(undefined4 *)(param_2 + 4 + (longlong)puVar6);
        puVar6[2] = *(undefined4 *)(param_2 + 8 + (longlong)puVar6);
        puVar6[3] = *(undefined4 *)(param_2 + 0xc + (longlong)puVar6);
        puVar6[4] = *(undefined4 *)(param_2 + 0x10 + (longlong)puVar6);
        *(undefined8 *)(puVar6 + 5) = *(undefined8 *)(param_2 + 0x14 + (longlong)puVar6);
        puVar6[7] = *(undefined4 *)(param_2 + 0x1c + (longlong)puVar6);
        puVar6[8] = *(undefined4 *)(param_2 + 0x20 + (longlong)puVar6);
        puVar6[9] = *(undefined4 *)(param_2 + 0x24 + (longlong)puVar6);
        puVar6[10] = *(undefined4 *)(param_2 + 0x28 + (longlong)puVar6);
        puVar6[0xb] = *(undefined4 *)(param_2 + 0x2c + (longlong)puVar6);
        puVar6[0xc] = *(undefined4 *)(param_2 + 0x30 + (longlong)puVar6);
      }
      puVar6 = puVar6 + 0x28;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144c7c910 FUN_144c7c910 body=18 status=ok
// SIG undefined FUN_144c7c910(void)

undefined8 * FUN_144c7c910(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e95e0;
  return param_2;
}



// FUNCTION 144c7c930 FUN_144c7c930 body=94 status=ok
// SIG undefined FUN_144c7c930(void)

void FUN_144c7c930(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xa0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x14;
      plVar2 = plVar2 + -0x14;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7c990 FUN_144c7c990 body=274 status=ok
// SIG undefined FUN_144c7c990(void)

void FUN_144c7c990(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  uint *puVar11;
  
  if (0 < param_4) {
    puVar11 = (uint *)(param_1 + 0x24);
    lVar10 = (longlong)param_4;
    do {
      if (puVar11 + -9 != (uint *)0x0) {
        puVar11[-7] = 0xffffffff;
        puVar11[-6] = 0;
        puVar11[-5] = 1;
        puVar11[-4] = 0;
        *(undefined ***)(puVar11 + -9) = hkaiReferencedArray<hkQTransform>::vftable;
        puVar11[-3] = 0;
        puVar11[-2] = 0;
        puVar11[-1] = 0;
        *puVar11 = 0x80000000;
        uVar2 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar11);
        puVar9 = *(undefined4 **)((param_2 - param_1) + -0xc + (longlong)puVar11);
        if (0 < (int)uVar2) {
          puVar7 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 5);
          *(undefined4 **)(puVar11 + -3) = puVar7;
          uVar8 = (ulonglong)uVar2;
          puVar11[-1] = uVar2;
          *puVar11 = uVar2;
          do {
            if (puVar7 != (undefined4 *)0x0) {
              uVar3 = puVar9[1];
              uVar4 = puVar9[2];
              uVar5 = puVar9[3];
              *puVar7 = *puVar9;
              puVar7[1] = uVar3;
              puVar7[2] = uVar4;
              puVar7[3] = uVar5;
              puVar1 = (undefined8 *)(puVar9 + 4);
              uVar6 = *(undefined8 *)(puVar9 + 6);
              puVar9 = puVar9 + 8;
              *(undefined8 *)(puVar7 + 4) = *puVar1;
              *(undefined8 *)(puVar7 + 6) = uVar6;
            }
            uVar8 = uVar8 - 1;
            puVar7 = puVar7 + 8;
          } while (uVar8 != 0);
        }
      }
      puVar11 = puVar11 + 10;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 144c7cab0 FUN_144c7cab0 body=55 status=ok
// SIG undefined FUN_144c7cab0(void)

void FUN_144c7cab0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144c49d80(param_1);
      }
      param_1 = param_1 + 0x70;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7caf0 FUN_144c7caf0 body=91 status=ok
// SIG undefined FUN_144c7caf0(void)

void FUN_144c7caf0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c7cb50 FUN_144c7cb50 body=23 status=ok
// SIG undefined FUN_144c7cb50(void)

undefined8 FUN_144c7cb50(undefined8 param_1,undefined8 param_2)

{
  FUN_144ca1370();
  return param_2;
}



// FUNCTION 144c7cb70 FUN_144c7cb70 body=375 status=ok
// SIG undefined FUN_144c7cb70(void)

void FUN_144c7cb70(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar7 = (longlong)param_4;
    puVar6 = (undefined4 *)(param_1 + 0x6c);
    do {
      puVar6[-0x15] = *(undefined4 *)(param_2 + -0x54 + (longlong)puVar6);
      *(undefined1 *)(puVar6 + -0x14) = *(undefined1 *)(param_2 + -0x50 + (longlong)puVar6);
      *(undefined8 *)(puVar6 + -0x13) = *(undefined8 *)(param_2 + -0x4c + (longlong)puVar6);
      *(undefined1 *)(puVar6 + -0x11) = *(undefined1 *)(param_2 + -0x44 + (longlong)puVar6);
      *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(param_2 + -0x40 + (longlong)puVar6);
      puVar6[-0xe] = *(undefined4 *)(param_2 + -0x38 + (longlong)puVar6);
      *(undefined1 *)(puVar6 + -0xd) = *(undefined1 *)(param_2 + -0x34 + (longlong)puVar6);
      puVar1 = (undefined4 *)(param_2 + -0x2c + (longlong)puVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar6[-0xb] = *puVar1;
      puVar6[-10] = uVar3;
      puVar6[-9] = uVar4;
      puVar6[-8] = uVar5;
      lVar2 = *(longlong *)(param_2 + -0x1c + (longlong)puVar6);
      if (*(longlong *)(puVar6 + -7) != lVar2) {
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
        lVar2 = *(longlong *)(puVar6 + -7);
        *(undefined8 *)(puVar6 + -7) = *(undefined8 *)(param_2 + -0x1c + (longlong)puVar6);
        if (lVar2 != 0) {
          FUN_144b3f230();
        }
      }
      lVar2 = *(longlong *)(param_2 + -0x14 + (longlong)puVar6);
      if (*(longlong *)(puVar6 + -5) != lVar2) {
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
        lVar2 = *(longlong *)(puVar6 + -5);
        *(undefined8 *)(puVar6 + -5) = *(undefined8 *)(param_2 + -0x14 + (longlong)puVar6);
        if (lVar2 != 0) {
          FUN_144b3f230();
        }
      }
      lVar2 = *(longlong *)(param_2 + -0xc + (longlong)puVar6);
      if (*(longlong *)(puVar6 + -3) != lVar2) {
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
        lVar2 = *(longlong *)(puVar6 + -3);
        *(undefined8 *)(puVar6 + -3) = *(undefined8 *)(param_2 + -0xc + (longlong)puVar6);
        if (lVar2 != 0) {
          FUN_144b3f230();
        }
      }
      puVar6[-1] = *(undefined4 *)(param_2 + -4 + (longlong)puVar6);
      *puVar6 = *(undefined4 *)(param_2 + (longlong)puVar6);
      puVar6[1] = *(undefined4 *)(param_2 + 4 + (longlong)puVar6);
      puVar6[2] = *(undefined4 *)(param_2 + 8 + (longlong)puVar6);
      puVar6[3] = *(undefined4 *)(param_2 + 0xc + (longlong)puVar6);
      puVar6[4] = *(undefined4 *)(param_2 + 0x10 + (longlong)puVar6);
      *(undefined8 *)(puVar6 + 5) = *(undefined8 *)(param_2 + 0x14 + (longlong)puVar6);
      puVar6[7] = *(undefined4 *)(param_2 + 0x1c + (longlong)puVar6);
      puVar6[8] = *(undefined4 *)(param_2 + 0x20 + (longlong)puVar6);
      puVar6[9] = *(undefined4 *)(param_2 + 0x24 + (longlong)puVar6);
      puVar6[10] = *(undefined4 *)(param_2 + 0x28 + (longlong)puVar6);
      puVar6[0xb] = *(undefined4 *)(param_2 + 0x2c + (longlong)puVar6);
      puVar6[0xc] = *(undefined4 *)(param_2 + 0x30 + (longlong)puVar6);
      puVar6 = puVar6 + 0x28;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144c7ccf0 FUN_144c7ccf0 body=88 status=ok
// SIG undefined FUN_144c7ccf0(void)

void FUN_144c7ccf0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x28);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -5;
      plVar2 = plVar2 + -5;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7cd50 FUN_144c7cd50 body=75 status=ok
// SIG undefined FUN_144c7cd50(void)

void FUN_144c7cd50(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144c49ef0(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x70;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7cda0 FUN_144c7cda0 body=71 status=ok
// SIG undefined FUN_144c7cda0(void)

undefined8 * FUN_144c7cda0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 144c7cdf0 FUN_144c7cdf0 body=187 status=ok
// SIG undefined FUN_144c7cdf0(void)

void FUN_144c7cdf0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    puVar5 = (uint *)(param_1 + 0x24);
    lVar6 = (longlong)param_4;
    do {
      puVar2 = (uint *)((param_2 - param_1) + -0xc + (longlong)puVar5);
      puVar1 = puVar5 + -3;
      if (puVar2 != puVar1) {
        uVar4 = *(undefined8 *)puVar2;
        uVar3 = *(uint *)((longlong)puVar5 + (param_2 - param_1) + -4);
        if ((int)(*puVar5 & 0x7fffffff) < (int)uVar3) {
          FUN_144c9e900(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 << 5);
        puVar5[-1] = uVar3;
      }
      puVar5 = puVar5 + 10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c7ceb0 FUN_144c7ceb0 body=77 status=ok
// SIG undefined FUN_144c7ceb0(void)

void FUN_144c7ceb0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x70 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xe;
      plVar2 = plVar2 + -0xe;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7cf60 FUN_144c7cf60 body=62 status=ok
// SIG undefined FUN_144c7cf60(void)

undefined8 * FUN_144c7cf60(undefined8 param_1,undefined8 *param_2)

{
  FUN_144bf09d0(&DAT_14c6e9700);
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e9700;
  return param_2;
}



// FUNCTION 144c7cfa0 FUN_144c7cfa0 body=74 status=ok
// SIG undefined FUN_144c7cfa0(void)

void FUN_144c7cfa0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7cff0 FUN_144c7cff0 body=85 status=ok
// SIG undefined FUN_144c7cff0(void)

void FUN_144c7cff0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined1 local_res18;
  
  if (0 < param_3) {
    lVar1 = (longlong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0x5f7ffff0;
      }
      param_1 = param_1 + 0x20;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 144c7d050 FUN_144c7d050 body=74 status=ok
// SIG undefined FUN_144c7d050(void)

void FUN_144c7d050(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 8);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -1;
      plVar2 = plVar2 + -1;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7d0a0 FUN_144c7d0a0 body=341 status=ok
// SIG undefined FUN_144c7d0a0(void)

undefined8 * FUN_144c7d0a0(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[9],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x54) & 0x7fffffff) << 3);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[7],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) << 4);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 3);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 144c7d200 FUN_144c7d200 body=32 status=ok
// SIG undefined FUN_144c7d200(void)

undefined8 FUN_144c7d200(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2,param_1);
  return param_1;
}



// FUNCTION 144c7d260 FUN_144c7d260 body=91 status=ok
// SIG undefined FUN_144c7d260(void)

void FUN_144c7d260(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144c7d2f0 FUN_144c7d2f0 body=937 status=ok
// SIG undefined FUN_144c7d2f0(void)

void FUN_144c7d2f0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong local_58;
  
  local_58 = (longlong)param_4;
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    plVar23 = (longlong *)(param_1 + 0x10);
    do {
      plVar11 = (longlong *)(param_2 + -0x10 + (longlong)plVar23);
      plVar18 = plVar23 + -2;
      if (plVar18 != plVar11) {
        lVar5 = *plVar11;
        iVar2 = *(int *)(param_2 + -8 + (longlong)plVar23);
        if ((int)(*(uint *)((longlong)plVar23 + -4) & 0x7fffffff) < iVar2) {
          FUN_144c9ef40(plVar18,&PTR_vftable_14c6e47a0,(longlong)iVar2);
        }
        if (iVar2 < (int)plVar23[-1]) {
          puVar16 = (undefined4 *)(*plVar18 + (longlong)(int)plVar23[-1] * 0x18);
          puVar20 = (undefined4 *)(*plVar18 + (longlong)iVar2 * 0x18);
          if (puVar16 != puVar20) {
            puVar16 = puVar16 + 5;
            do {
              puVar16[-7] = 0;
              if ((-1 < (int)puVar16[-6]) && (*(longlong *)(puVar16 + -9) != 0)) {
                (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                          (&PTR_vftable_14c6e47a0,*(longlong *)(puVar16 + -9),
                           (ulonglong)(puVar16[-6] & 0x7fffffff) * 0x14);
              }
              puVar14 = puVar16 + -0xb;
              *(undefined8 *)(puVar16 + -9) = 0;
              puVar16[-6] = 0x80000000;
              puVar16 = puVar16 + -6;
            } while (puVar14 != puVar20);
          }
        }
        lVar12 = plVar23[-2];
        iVar6 = iVar2;
        if ((int)plVar23[-1] < iVar2) {
          iVar6 = (int)plVar23[-1];
        }
        if ((lVar12 != lVar5) && (lVar19 = (longlong)iVar6, 0 < iVar6)) {
          plVar18 = (longlong *)(lVar12 + 8);
          lVar12 = lVar5 - lVar12;
          do {
            *(undefined4 *)(plVar18 + -1) = *(undefined4 *)((longlong)plVar18 + lVar12 + -8);
            if ((longlong *)((longlong)plVar18 + lVar12) != plVar18) {
              puVar16 = *(undefined4 **)((longlong)plVar18 + lVar12);
              iVar3 = *(int *)((longlong)plVar18 + lVar12 + 8);
              if ((int)(*(uint *)((longlong)plVar18 + 0xc) & 0x7fffffff) < iVar3) {
                FUN_144ca0f00(plVar18,&PTR_vftable_14c6e47a0,(longlong)iVar3);
              }
              puVar20 = (undefined4 *)*plVar18;
              iVar7 = iVar3;
              if ((int)plVar18[1] < iVar3) {
                iVar7 = (int)plVar18[1];
              }
              if ((puVar20 != puVar16) && (lVar15 = (longlong)iVar7, 0 < iVar7)) {
                puVar14 = puVar20;
                do {
                  puVar17 = (undefined4 *)
                            (((longlong)puVar16 - (longlong)puVar20) + (longlong)puVar14);
                  uVar8 = puVar17[1];
                  uVar9 = puVar17[2];
                  uVar10 = puVar17[3];
                  *puVar14 = *puVar17;
                  puVar14[1] = uVar8;
                  puVar14[2] = uVar9;
                  puVar14[3] = uVar10;
                  puVar14[4] = *(undefined4 *)
                                (((longlong)puVar16 - (longlong)puVar20) + -4 +
                                (longlong)(puVar14 + 5));
                  lVar15 = lVar15 + -1;
                  puVar14 = puVar14 + 5;
                } while (lVar15 != 0);
              }
              puVar16 = puVar16 + (longlong)iVar7 * 5;
              if (0 < iVar3 - iVar7) {
                uVar22 = (ulonglong)(uint)(iVar3 - iVar7);
                puVar20 = (undefined4 *)(*plVar18 + (longlong)iVar7 * 0x14);
                do {
                  if (puVar20 != (undefined4 *)0x0) {
                    uVar8 = puVar16[1];
                    uVar9 = puVar16[2];
                    uVar10 = puVar16[3];
                    *puVar20 = *puVar16;
                    puVar20[1] = uVar8;
                    puVar20[2] = uVar9;
                    puVar20[3] = uVar10;
                    puVar14 = puVar16 + 4;
                    puVar16 = puVar16 + 5;
                    puVar20[4] = *puVar14;
                  }
                  uVar22 = uVar22 - 1;
                  puVar20 = puVar20 + 5;
                } while (uVar22 != 0);
              }
              *(int *)(plVar18 + 1) = iVar3;
            }
            plVar18 = plVar18 + 3;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
        }
        puVar16 = (undefined4 *)(lVar5 + (longlong)iVar6 * 0x18);
        if (0 < iVar2 - iVar6) {
          uVar22 = (ulonglong)(uint)(iVar2 - iVar6);
          puVar20 = (undefined4 *)(plVar23[-2] + (longlong)iVar6 * 0x18);
          do {
            if (puVar20 != (undefined4 *)0x0) {
              *puVar20 = *puVar16;
              *(undefined8 *)(puVar20 + 2) = 0;
              puVar20[4] = 0;
              puVar20[5] = 0x80000000;
              uVar4 = puVar16[4];
              puVar14 = (undefined4 *)0x0;
              if (*(undefined4 **)(puVar16 + 2) != (undefined4 *)0x0) {
                puVar14 = *(undefined4 **)(puVar16 + 2);
              }
              if (0 < (int)uVar4) {
                uVar13 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                                   (&PTR_vftable_14c6e47a0,(longlong)(int)uVar4 * 0x14);
                *(undefined8 *)(puVar20 + 2) = uVar13;
                uVar21 = (ulonglong)uVar4;
                puVar20[4] = uVar4;
                puVar20[5] = uVar4;
                puVar17 = *(undefined4 **)(puVar20 + 2);
                do {
                  if (puVar17 != (undefined4 *)0x0) {
                    uVar8 = puVar14[1];
                    uVar9 = puVar14[2];
                    uVar10 = puVar14[3];
                    *puVar17 = *puVar14;
                    puVar17[1] = uVar8;
                    puVar17[2] = uVar9;
                    puVar17[3] = uVar10;
                    puVar1 = puVar14 + 4;
                    puVar14 = puVar14 + 5;
                    puVar17[4] = *puVar1;
                  }
                  uVar21 = uVar21 - 1;
                  puVar17 = puVar17 + 5;
                } while (uVar21 != 0);
              }
              puVar16 = puVar16 + 6;
            }
            uVar22 = uVar22 - 1;
            puVar20 = puVar20 + 6;
          } while (uVar22 != 0);
        }
        *(int *)(plVar23 + -1) = iVar2;
        if ((longlong *)(param_2 + (longlong)plVar23) != plVar23) {
          lVar5 = *plVar23;
          if ((lVar5 != 0) && (*(int *)(lVar5 + 4) != -2)) {
            (*DAT_14c787678)(DAT_14c6e47a8,lVar5,0);
            FUN_144b3ec00(plVar23);
          }
          FUN_140069ea2(plVar23,(longlong *)(param_2 + (longlong)plVar23));
        }
      }
      plVar23 = plVar23 + 4;
      local_58 = local_58 + -1;
    } while (local_58 != 0);
  }
  return;
}



// FUNCTION 144c7d6a0 FUN_144c7d6a0 body=18 status=ok
// SIG undefined FUN_144c7d6a0(void)

undefined8 * FUN_144c7d6a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e9810;
  return param_2;
}



// FUNCTION 144c7d6c0 FUN_144c7d6c0 body=80 status=ok
// SIG undefined FUN_144c7d6c0(void)

void FUN_144c7d6c0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c7d710 FUN_144c7d710 body=63 status=ok
// SIG undefined FUN_144c7d710(void)

void FUN_144c7d710(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 144c7d7c0 FUN_144c7d7c0 body=97 status=ok
// SIG undefined FUN_144c7d7c0(void)

void FUN_144c7d7c0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c7d830 FUN_144c7d830 body=183 status=ok
// SIG undefined FUN_144c7d830(void)

void FUN_144c7d830(undefined8 *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar5 = (longlong)param_4;
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = 0;
        *(undefined4 *)(param_1 + 1) = 0;
        *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
        iVar2 = *(int *)(param_2 + 8 + (longlong)param_1);
        puVar4 = *(undefined4 **)(param_2 + (longlong)param_1);
        puVar1 = puVar4 + iVar2;
        if (0 < iVar2) {
          FUN_141807aa8(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
        }
        puVar3 = (undefined4 *)*param_1;
        for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *puVar4;
          }
          puVar3 = puVar3 + 1;
        }
        *(int *)(param_1 + 1) = iVar2;
      }
      param_1 = param_1 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144c7d900 FUN_144c7d900 body=104 status=ok
// SIG undefined FUN_144c7d900(void)

void FUN_144c7d900(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        *(undefined4 *)(param_1 + 1) = 0;
        *param_1 = (longlong)(param_1 + 2);
        *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000001;
        FUN_144c98a30(param_1,param_2);
      }
      param_2 = param_2 + 0x40;
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7d980 FUN_144c7d980 body=133 status=ok
// SIG undefined FUN_144c7d980(void)

void FUN_144c7d980(longlong param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar1 = (uint *)(lVar2 * 0x40 + 0xc + param_1);
    do {
      puVar1[-1] = 0;
      if ((-1 < (int)*puVar1) && (*(longlong *)(puVar1 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar1 + -3),
                   (ulonglong)(*puVar1 & 0x7fffffff) * 0x30);
      }
      puVar1[-3] = 0;
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      puVar1 = puVar1 + -0x10;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 144c7da10 FUN_144c7da10 body=305 status=ok
// SIG undefined FUN_144c7da10(void)

void FUN_144c7da10(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint *puVar7;
  ulonglong uVar8;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar7 = (uint *)(param_1 + 0x2c);
    lVar6 = (longlong)param_4;
    do {
      if (puVar7 + -0xb != (uint *)0x0) {
        puVar7[-7] = 1;
        puVar7[-6] = 0;
        puVar7[-9] = 0xffffffff;
        puVar7[-8] = 0;
        *(undefined ***)(puVar7 + -0xb) = hkaiVolumeNavigatorManager::vftable;
        *(undefined8 *)(puVar7 + -5) = *(undefined8 *)(param_2 + -0x14 + (longlong)puVar7);
        puVar7[-3] = 0;
        puVar7[-2] = 0;
        puVar7[-1] = 0;
        *puVar7 = 0x80000000;
        uVar1 = *(uint *)(param_2 + -4 + (longlong)puVar7);
        puVar5 = *(undefined8 **)((longlong)puVar7 + param_2 + -0xc);
        if (0 < (int)uVar1) {
          puVar4 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 3);
          *(undefined8 **)(puVar7 + -3) = puVar4;
          puVar7[-1] = uVar1;
          uVar8 = (ulonglong)uVar1;
          *puVar7 = uVar1;
          do {
            if (puVar4 != (undefined8 *)0x0) {
              uVar2 = *puVar5;
              puVar5 = puVar5 + 1;
              *puVar4 = uVar2;
            }
            uVar8 = uVar8 - 1;
            puVar4 = puVar4 + 1;
          } while (uVar8 != 0);
        }
        lVar3 = *(longlong *)(param_2 + 4 + (longlong)puVar7);
        *(longlong *)(puVar7 + 1) = lVar3;
        if (lVar3 != 0) {
          FUN_144b3d910();
        }
      }
      puVar7 = puVar7 + 0xe;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c7db50 FUN_144c7db50 body=332 status=ok
// SIG undefined FUN_144c7db50(void)

void FUN_144c7db50(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar13 = (longlong)param_4;
    do {
      plVar9 = (longlong *)(param_2 + (longlong)param_1);
      if (plVar9 != param_1) {
        lVar3 = *plVar9;
        iVar2 = *(int *)(param_2 + 8 + (longlong)param_1);
        if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
          FUN_144c9f4a0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
        }
        lVar14 = *param_1;
        iVar4 = iVar2;
        if ((int)param_1[1] < iVar2) {
          iVar4 = (int)param_1[1];
        }
        if ((lVar14 != lVar3) && (lVar11 = (longlong)iVar4, 0 < iVar4)) {
          puVar10 = (undefined8 *)(lVar14 + 0x10);
          lVar14 = lVar3 - lVar14;
          do {
            puVar12 = (undefined4 *)(lVar14 + -0x10 + (longlong)puVar10);
            uVar5 = puVar12[1];
            uVar6 = puVar12[2];
            uVar7 = puVar12[3];
            *(undefined4 *)(puVar10 + -2) = *puVar12;
            *(undefined4 *)((longlong)puVar10 + -0xc) = uVar5;
            *(undefined4 *)(puVar10 + -1) = uVar6;
            *(undefined4 *)((longlong)puVar10 + -4) = uVar7;
            uVar8 = ((undefined8 *)(lVar14 + (longlong)puVar10))[1];
            *puVar10 = *(undefined8 *)(lVar14 + (longlong)puVar10);
            puVar10[1] = uVar8;
            *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(lVar14 + 0x10 + (longlong)puVar10);
            *(undefined4 *)((longlong)puVar10 + 0x14) =
                 *(undefined4 *)(lVar14 + 0x14 + (longlong)puVar10);
            puVar10 = puVar10 + 6;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        puVar12 = (undefined4 *)((longlong)iVar4 * 0x30 + lVar3);
        if (0 < iVar2 - iVar4) {
          uVar16 = (ulonglong)(uint)(iVar2 - iVar4);
          puVar15 = (undefined4 *)(*param_1 + (longlong)iVar4 * 0x30);
          do {
            if (puVar15 != (undefined4 *)0x0) {
              uVar5 = puVar12[1];
              uVar6 = puVar12[2];
              uVar7 = puVar12[3];
              *puVar15 = *puVar12;
              puVar15[1] = uVar5;
              puVar15[2] = uVar6;
              puVar15[3] = uVar7;
              uVar8 = *(undefined8 *)(puVar12 + 6);
              *(undefined8 *)(puVar15 + 4) = *(undefined8 *)(puVar12 + 4);
              *(undefined8 *)(puVar15 + 6) = uVar8;
              puVar15[8] = puVar12[8];
              puVar1 = puVar12 + 9;
              puVar12 = puVar12 + 0xc;
              puVar15[9] = *puVar1;
            }
            uVar16 = uVar16 - 1;
            puVar15 = puVar15 + 0xc;
          } while (uVar16 != 0);
        }
        *(int *)(param_1 + 1) = iVar2;
      }
      param_1 = param_1 + 8;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 144c7dca0 FUN_144c7dca0 body=74 status=ok
// SIG undefined FUN_144c7dca0(void)

void FUN_144c7dca0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144bf91b0(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c7dcf0 FUN_144c7dcf0 body=77 status=ok
// SIG undefined FUN_144c7dcf0(void)

void FUN_144c7dcf0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x38 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -7;
      plVar2 = plVar2 + -7;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144c7dd40 FUN_144c7dd40 body=62 status=ok
// SIG undefined FUN_144c7dd40(void)

undefined8 * FUN_144c7dd40(undefined8 param_1,undefined8 *param_2)

{
  FUN_144bf09d0(&DAT_14c6e9930);
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e9930;
  return param_2;
}



// FUNCTION 144c7dde0 FUN_144c7dde0 body=91 status=ok
// SIG undefined FUN_144c7dde0(void)

void FUN_144c7dde0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 8);
    lVar3 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = FUN_144b3d480();
        *(undefined8 *)(puVar2 + 2) = uVar1;
        puVar2[4] = 0;
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}


