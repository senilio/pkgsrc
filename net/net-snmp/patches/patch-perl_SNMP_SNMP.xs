$NetBSD: patch-perl_SNMP_SNMP.xs,v 1.1 2016/06/06 14:11:35 he Exp $

Adopt FreeBSD's patch to make this build with perl 5.24, ref.
https://svnweb.freebsd.org/ports/head/net-mgmt/net-snmp/files/patch-perl5.23?view=co
https://rt.perl.org/Public/Bug/Display.html?id=125907#txn-1363270
https://bugs.gentoo.org/show_bug.cgi?id=582368

--- perl/SNMP/SNMP.xs.orig	2014-12-08 20:23:22.000000000 +0000
+++ perl/SNMP/SNMP.xs
@@ -16,6 +16,10 @@
 #include "perl.h"
 #include "XSUB.h"
 
+#ifdef U64TYPE
+#define U64 U64pairU32
+#endif
+
 #include <net-snmp/net-snmp-config.h>
 #include <net-snmp/net-snmp-includes.h>
 #include <sys/types.h>
