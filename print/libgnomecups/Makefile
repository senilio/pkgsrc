# $NetBSD: Makefile,v 1.50 2018/11/14 22:22:18 kleink Exp $
#

DISTNAME=	libgnomecups-0.2.3
PKGREVISION=	25
CATEGORIES=	print gnome
MASTER_SITES=	${MASTER_SITE_GNOME:=sources/libgnomecups/0.2/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://www.gnome.org/
COMMENT=	GNOME interface to CUPS

USE_TOOLS+=		intltool msgfmt pkg-config gmake
GNU_CONFIGURE=		YES
USE_LIBTOOL=		YES
USE_PKGLOCALEDIR=	YES

PKGCONFIG_OVERRIDE=	libgnomecups-1.0.pc.in

.include "../../devel/gettext-lib/buildlink3.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../print/cups-base/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
