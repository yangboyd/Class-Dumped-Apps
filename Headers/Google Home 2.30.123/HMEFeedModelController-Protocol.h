//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMEModel, NSString;
@protocol HMEFeedModelControllerDelegate;

@protocol HMEFeedModelController <NSObject>
@property(readonly, nonatomic) HMEModel *feedResponseModel;
@property(nonatomic) __weak id <HMEFeedModelControllerDelegate> delegate;
- (void)fetchFeedDetailsWithFeedID:(NSString *)arg1 completion:(void (^)(GHCGetFeedDetailsResponse_FeedDetails *, NSError *))arg2;
- (void)loadFeedCards;
- (void)setHasFeedPriorityCardUpdates:(_Bool)arg1;
@end

