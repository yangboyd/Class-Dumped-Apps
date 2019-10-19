//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUAuthPayload-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUIdentityMischiefMobCreationRequest;

@protocol SOJUIdentityCreateMischiefRequest <NSObject, NSCoding, NSCopying, SOJUAuthPayload>
@property(readonly, copy, nonatomic) NSNumber *minimumGroupSizeDisabled;
@property(readonly, copy, nonatomic) NSString *mischiefCreationSource;
@property(readonly, copy, nonatomic) SOJUIdentityMischiefMobCreationRequest *mischiefMobCreationRequest;
@property(readonly, copy, nonatomic) NSArray *participants;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *uuid;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp;
@end

