//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@protocol SSOService;

@interface CRPTConfiguration : NSObject <NSCopying>
{
    _Bool _useEnrollment2;
    _Bool _enableAuthzenMigration;
    id <SSOService> _identityService;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableAuthzenMigration; // @synthesize enableAuthzenMigration=_enableAuthzenMigration;
@property(nonatomic) _Bool useEnrollment2; // @synthesize useEnrollment2=_useEnrollment2;
@property(readonly, nonatomic) id <SSOService> identityService; // @synthesize identityService=_identityService;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentityService:(id)arg1;

@end

