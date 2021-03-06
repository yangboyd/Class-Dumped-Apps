//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSDevice, NSDate, NSObject, NSSet, NSString;

@protocol MSLog <NSObject>
@property(retain, nonatomic) NSObject *tag;
@property(retain, nonatomic) MSDevice *device;
@property(copy, nonatomic) NSString *userId;
@property(copy, nonatomic) NSString *distributionGroupId;
@property(copy, nonatomic) NSString *sid;
@property(retain, nonatomic) NSDate *timestamp;
@property(copy, nonatomic) NSString *type;
- (NSSet *)transmissionTargetTokens;
- (void)addTransmissionTargetToken:(NSString *)arg1;
- (_Bool)isValid;
@end

