//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface FBSDKAppEventsState : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_mutableEvents;
    unsigned long long _numSkipped;
    NSString *_tokenString;
    NSString *_appID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, copy, nonatomic) NSString *tokenString; // @synthesize tokenString=_tokenString;
@property(readonly, nonatomic) unsigned long long numSkipped; // @synthesize numSkipped=_numSkipped;
- (void).cxx_destruct;
- (id)JSONStringForEvents:(_Bool)arg1;
- (_Bool)isCompatibleWithTokenString:(id)arg1 appID:(id)arg2;
- (_Bool)isCompatibleWithAppEventsState:(id)arg1;
@property(readonly, nonatomic, getter=areAllEventsImplicit) _Bool allEventsImplicit;
- (id)extractReceiptData;
- (void)addEvent:(id)arg1 isImplicit:(_Bool)arg2;
- (void)addEventsFromAppEventState:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *events;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithToken:(id)arg1 appID:(id)arg2;

@end

