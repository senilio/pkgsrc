# $NetBSD: Makefile,v 1.2 2019/03/05 21:17:17 tnn Exp $

DISTNAME=	Overpass-3.0.3
CATEGORIES=	fonts
MASTER_SITES=	${MASTER_SITE_GITHUB:=RedHatBrand/}

MAINTAINER=	maya@NetBSD.org
HOMEPAGE=	https://github.com/RedHatBrand/Overpass/
COMMENT=	Font family inspired by Highway Gothic
LICENSE=	ofl-v1.1 AND gnu-lgpl-v2.1

USE_LANGUAGES=	# none
NO_CONFIGURE=	yes
NO_BUILD=	yes

TTF_FONTS_DIR=		${PREFIX}/share/fonts/X11/TTF
OTF_FONTS_DIR=		${PREFIX}/share/fonts/X11/OTF

INSTALLATION_DIRS=	${TTF_FONTS_DIR} ${OTF_FONTS_DIR}

do-install:
	for font in `find ${WRKSRC} -name '*.ttf'`; \
	do \
		${INSTALL_DATA} $${font} ${DESTDIR}${TTF_FONTS_DIR}; \
	done; \
	for font in `find ${WRKSRC} -name '*.otf'`; \
	do \
		${INSTALL_DATA} $${font} ${DESTDIR}${OTF_FONTS_DIR}; \
	done;

.include "../../mk/bsd.pkg.mk"
