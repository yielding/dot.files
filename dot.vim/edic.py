#!/usr/bin/env python

import urllib
import formatter
import htmllib
import string
import cStringIO
import tempfile
import re
import os
import sys

def toText(str):
  out = cStringIO.StringIO()
  w   = formatter.DumbWriter(out)
  f   = formatter.AbstractFormatter(w)
  p   = htmllib.HTMLParser(f)
  p.feed(str)
  p.close()
  return out.getvalue()

def translate(word):
  url = "http://kr.engdic.yahoo.com/result.html?p=%s" % string.strip(word)
  m = re.compile("\(image\)")
  data = m.sub("", toText(urllib.urlopen(url).read()))
  tmp = string.split(data[:-388], '[17]')
  return tmp[1]

file = tempfile.mktemp()
f = open(file, 'w')
f.write(translate(sys.argv[1]))
f.close()
os.system("cat %s |less -r" % file)
os.unlink(file)
