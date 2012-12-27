#!/usr/bin/env python

import subprocess

results = {
    "test0.minivm": "3\n",
    "test1.minivm": "3\n",
    "test2.minivm": "3\n",
    "test3.minivm": "0\n1\n2\n3\n",
    "testA.minivm": "0\n1\n2\n3\n",
    "testB.minivm": "1\n-2147483648\n1073741824\n536870912\n268435456\n134217728\n67108864\n33554432\n16777216\n8388608\n4194304\n2097152\n1048576\n524288\n262144\n131072\n65536\n32768\n16384\n8192\n4096\n2048\n1024\n512\n256\n128\n64\n32\n16\n8\n4\n2\n",
    "tptest3.minivm": "36\n",
    }

for key in results:
    test = subprocess.check_output(["../out/minivm", "../out/%s" % key])
    if test == results[key]:
        print "%s:\tOKAY" % key
    else:
        print "%s:\tERROR" % key
