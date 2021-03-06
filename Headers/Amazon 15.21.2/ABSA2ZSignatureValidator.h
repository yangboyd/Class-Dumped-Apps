//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABSSignatureValidator-Protocol.h"

@class NSString;

@interface ABSA2ZSignatureValidator : NSObject <ABSSignatureValidator>
{
}

- (_Bool)validateWithSignature:(id)arg1 forData:(id)arg2 usingPublicKey:(struct __SecKey *)arg3 andError:(id *)arg4;
- (_Bool)validateWithSignature:(id)arg1 forData:(id)arg2 usingTrust:(struct __SecTrust *)arg3 andError:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

