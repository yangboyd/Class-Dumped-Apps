//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GHCSoundDetails, UIViewController;

@protocol HMEFeedSoundSensingCoordinatorFactory
- (UIViewController *)makeWithSoundDetails:(GHCSoundDetails *)arg1 autoplay:(_Bool)arg2 feedActionFactory:(id <HMEFeedAction> (^)(UIViewController *))arg3 dismissBlock:(void (^)(_Bool))arg4;
@end

