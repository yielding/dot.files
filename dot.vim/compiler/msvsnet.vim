" Vim compiler file
" Compiler:	Miscrosoft Visual C
" Maintainer:	Bram Moolenaar <Bram@vim.org>
" Last Change:	2001 Sep 24

if exists("current_compiler")
  finish
endif
let current_compiler = "msvsnet"

"setlocal errorformat=\ %#%f(%l)\ :\ %m
setlocal errorformat=\ %#%f(%l)\ :\ %#%t%[A-z]%#\ %m
"setlocal makeprg=devenv\ /build\ debug\ \"D:\\MyData\\project\\Go\\goclient\\GoClient.sln\"
setlocal makeprg=devenv\ /build\ debug\ %:p:r.sln 
