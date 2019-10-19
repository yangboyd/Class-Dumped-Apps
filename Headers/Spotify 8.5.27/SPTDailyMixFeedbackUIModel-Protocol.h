//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTDailyMixFeedbackUIModelObserver;

@protocol SPTDailyMixFeedbackUIModel <NSObject>
@property(readonly, nonatomic, getter=shouldBanBeAvailable) _Bool banBeAvailable;
@property(readonly, nonatomic, getter=shouldBanBeSelected) _Bool banBeSelected;
@property(readonly, nonatomic, getter=shouldBanBeEnabled) _Bool banBeEnabled;
@property(readonly, nonatomic, getter=shouldHeartBeAvailable) _Bool heartBeAvailable;
@property(readonly, nonatomic, getter=shouldHeartBeSelected) _Bool heartBeSelected;
@property(readonly, nonatomic, getter=shouldHeartBeEnabled) _Bool heartBeEnabled;
@property(readonly, nonatomic, getter=shouldUseDailyMixFeedbackUI) _Bool useDailyMixFeedbackUI;
- (void)removeObserver:(id <SPTDailyMixFeedbackUIModelObserver>)arg1;
- (void)addObserver:(id <SPTDailyMixFeedbackUIModelObserver>)arg1;
- (void)unban:(void (^)(NSError *))arg1;
- (void)ban:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)unheart:(void (^)(NSError *))arg1;
- (void)heart:(void (^)(NSError *))arg1;
- (NSString *)localizedTitleForBanAction:(long long)arg1;
- (NSString *)localizedTitleForHeartAction;
@end

