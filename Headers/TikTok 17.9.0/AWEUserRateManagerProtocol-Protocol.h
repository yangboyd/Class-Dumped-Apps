//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEUserModel, NSString;

@protocol AWEUserRateManagerProtocol <NSObject>
+ (id)sharedManager;
@property(nonatomic) long long showDaysLimit;
@property(nonatomic) long long showDetailCountLimit;
@property(nonatomic) long long rateRecordId;
@property(copy, nonatomic) NSString *detailURL;
@property(copy, nonatomic) NSString *remindText;
- (void)resetUserRateData;
- (void)updateUserRateData:(AWEUserModel *)arg1;
- (void)userRateCloseWithType:(unsigned long long)arg1;
- (_Bool)shouldShowUserRateView;
@end

