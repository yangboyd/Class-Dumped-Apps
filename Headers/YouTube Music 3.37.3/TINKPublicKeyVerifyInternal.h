//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TINKPublicKeyVerify-Protocol.h"

@class NSString;

@interface TINKPublicKeyVerifyInternal : NSObject <TINKPublicKeyVerify>
{
    unique_ptr_04fe4415 _ccPublicKeyVerify;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct PublicKeyVerify *)ccPublicKeyVerify;
- (_Bool)verifySignature:(id)arg1 forData:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithCCPublicKeyVerify:(unique_ptr_04fe4415)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

