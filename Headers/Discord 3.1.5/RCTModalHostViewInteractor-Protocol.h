//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class RCTModalHostView, RCTModalHostViewController;

@protocol RCTModalHostViewInteractor <NSObject>
- (void)dismissModalHostView:(RCTModalHostView *)arg1 withViewController:(RCTModalHostViewController *)arg2 animated:(_Bool)arg3;
- (void)presentModalHostView:(RCTModalHostView *)arg1 withViewController:(RCTModalHostViewController *)arg2 animated:(_Bool)arg3;
@end

