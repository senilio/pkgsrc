# $NetBSD: Makefile,v 1.8 2019/02/08 23:45:33 wen Exp $

DISTNAME=	HTML-Restrict-v2.5.0
PKGNAME=	p5-${DISTNAME:S/-v/-/}
CATEGORIES=	www perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=HTML/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/HTML-Restrict/
COMMENT=	Perl5 module for stripping unwanted HTML tags and attributes
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-Data-Dump-[0-9]*:../../devel/p5-Data-Dump
DEPENDS+=	p5-HTML-Parser-[0-9]*:../../www/p5-HTML-Parser
DEPENDS+=	p5-List-MoreUtils-[0-9]*:../../devel/p5-List-MoreUtils
DEPENDS+=	p5-Module-Build>=0.28:../../devel/p5-Module-Build
DEPENDS+=	p5-Moo>=1.002000:../../devel/p5-Moo
DEPENDS+=	p5-Type-Tiny>=1.002001:../../devel/p5-Type-Tiny
DEPENDS+=	p5-libwww-[0-9]*:../../www/p5-libwww
DEPENDS+=	p5-namespace-clean-[0-9]*:../../devel/p5-namespace-clean

PERL5_PACKLIST=	auto/HTML/Restrict/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
