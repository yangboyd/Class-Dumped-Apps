//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaSecurityProvider, JavaxCryptoCipher, JavaxCryptoCipherSpi;

@interface JavaxCryptoCipher_SpiAndProviderUpdater : NSObject
{
    JavaxCryptoCipher *this$0_;
    id initSpiLock_;
    JavaSecurityProvider *specifiedProvider_;
    JavaxCryptoCipherSpi *specifiedSpi_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (id)getCurrentSpiWithJavaxCryptoCipherSpi:(id)arg1;
- (id)updateAndGetSpiAndProviderWithJavaxCryptoCipherSpi:(id)arg1 withJavaSecurityProvider:(id)arg2;
- (id)updateAndGetSpiAndProviderWithJavaxCryptoCipher_InitParams:(id)arg1 withJavaxCryptoCipherSpi:(id)arg2 withJavaSecurityProvider:(id)arg3;
- (void)setCipherSpiImplAndProviderWithJavaxCryptoCipherSpi:(id)arg1 withJavaSecurityProvider:(id)arg2;
- (id)initWithJavaxCryptoCipher:(id)arg1 withJavaSecurityProvider:(id)arg2 withJavaxCryptoCipherSpi:(id)arg3;

@end

