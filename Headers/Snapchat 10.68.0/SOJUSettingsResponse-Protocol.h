//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString;

@protocol SOJUSettingsResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *twoFaRecoveryCode;
@property(readonly, copy, nonatomic) NSArray *twoFaVerifiedDevices;
@property(readonly, copy, nonatomic) NSString *param;
@property(readonly, copy, nonatomic) NSString *message;
@property(readonly, copy, nonatomic) NSNumber *status;
@property(readonly, copy, nonatomic) NSNumber *logged;
@end

