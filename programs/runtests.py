#!/usr/bin/env python

import subprocess

results = {
    "test0.minivm": "3\n",
    "test1.minivm": "3\n",
    "test2.minivm": "3\n",
    "test3.minivm": "0\n1\n2\n3\n",
    "testA.minivm": "0\n1\n2\n3\n",
    "tptest3.minivm": "36\n",
    }

for key in results:
    test = subprocess.check_output(["../out/minivm", "../out/%s" % key])
    if test == results[key]:
        print "%s:\tOKAY" % key
    else:
        print "%s:\tERROR" % key
