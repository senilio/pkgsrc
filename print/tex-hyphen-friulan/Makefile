# $NetBSD: Makefile,v 1.3 2019/01/26 22:36:46 markd Exp $

DISTNAME=	hyphen-friulan
PKGNAME=	tex-${DISTNAME}-2018
TEXLIVE_REV=	49078

MAINTAINER=	pkgsrc-users@NetBSD.org
COMMENT=	Friulan hyphenation patterns
LICENSE=	lppl-1.3c

DEPENDS+=	tex-hyphen-base-[0-9]*:../../print/tex-hyphen-base
DEPENDS+=	tex-hyph-utf8-[0-9]*:../../print/tex-hyph-utf8

TEX_HYPHEN_DAT+=	friulan loadhyph-fur.tex
TEX_HYPHEN_DEF+=	\\addlanguage{friulan}{loadhyph-fur.tex}{}{2}{2}
TEX_HYPHEN_LUA+=	['friulan']={ \
			  loader='loadhyph-fur.tex', \
			  lefthyphenmin=2, \
			  righthyphenmin=2, \
			  synonyms={}, \
			  patterns='hyph-fur.pat.txt', \
			  hyphenation='', \
			},

.include "../../print/texlive/package.mk"
.include "../../mk/bsd.pkg.mk"
