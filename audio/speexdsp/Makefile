# $NetBSD: Makefile,v 1.3 2017/09/04 18:08:18 wiz Exp $

DISTNAME=	speexdsp-1.2rc3
CATEGORIES=	audio
MASTER_SITES=	http://downloads.us.xiph.org/releases/speex/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://www.speex.org/
COMMENT=	Open-source, patent-free voice codec DSP library
LICENSE=	modified-bsd

USE_LIBTOOL=		YES
GNU_CONFIGURE=		YES
PKGCONFIG_OVERRIDE=	speexdsp.pc.in
USE_TOOLS+=		pkg-config

.if ${MACHINE_ARCH} == "aarch64"
CONFIGURE_ARGS+=	--disable-neon
.endif

BUILDLINK_API_DEPENDS.speex+=	speex>=1.2rc2
.include "../../audio/speex/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
