//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASMAccountUIParams.h"

@protocol SSOService;

@interface ASMScreenParams : ASMAccountUIParams
{
    id <SSOService> _SSOService;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SSOService> SSOService; // @synthesize SSOService=_SSOService;
- (id)initWithIdentityForActualUser:(id)arg1 effectiveUserID:(id)arg2 SSOService:(id)arg3;
- (id)initWithIdentity:(id)arg1 SSOService:(id)arg2;

@end

