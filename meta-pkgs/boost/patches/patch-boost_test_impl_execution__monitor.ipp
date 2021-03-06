$NetBSD: patch-boost_test_impl_execution__monitor.ipp,v 1.2 2018/04/29 20:41:11 adam Exp $

--- boost/test/impl/execution_monitor.ipp.orig	2018-04-11 13:49:08.000000000 +0000
+++ boost/test/impl/execution_monitor.ipp
@@ -167,7 +167,8 @@ namespace { void _set_se_translator( voi
 #  if defined(SIGPOLL) && !defined(__CYGWIN__)                              && \
       !(defined(macintosh) || defined(__APPLE__) || defined(__APPLE_CC__))  && \
       !defined(__NetBSD__)                                                  && \
-      !defined(__QNXNTO__)
+      !defined(__QNXNTO__)                                                  && \
+      !defined(__DragonFly__)
 #    define BOOST_TEST_CATCH_SIGPOLL
 #  endif
 
@@ -366,6 +367,7 @@ system_signal_exception::report() const
     if( !m_sig_info )
         return; // no error actually occur?
 
+#if !defined(__DragonFly__)
     switch( m_sig_info->si_code ) {
 #ifdef __VXWORKS__
 // a bit of a hack to adapt code to small m_sig_info VxWorks uses             
@@ -386,14 +388,18 @@ system_signal_exception::report() const
         report_error( execution_exception::system_error,
                       "signal: the expiration of a timer set by timer_settimer()" );
         break;
+#if defined(SI_ASYNCIO)
     case SI_ASYNCIO:
         report_error( execution_exception::system_error,
                       "signal: generated by the completion of an asynchronous I/O request" );
         break;
+#endif
+#if defined(SI_MESGQ)
     case SI_MESGQ:
         report_error( execution_exception::system_error,
                       "signal: generated by the the arrival of a message on an empty message queue" );
         break;
+#endif
     default:
         break;
     }
@@ -612,6 +618,7 @@ system_signal_exception::report() const
         report_error( execution_exception::system_error,
                       "unrecognized signal %d", m_sig_info->si_signo );
     }
+#endif /* !__DragonFly__ */
 }
 
 //____________________________________________________________________________//
