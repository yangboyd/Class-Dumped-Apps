//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADOAdView, NSString, UIView;

@protocol GADOMRAIDEventHandling <NSObject>
- (void)unloadAdView:(GADOAdView *)arg1;
- (void)handleError:(NSString *)arg1 action:(NSString *)arg2;
- (void)notifyOrientationToMRAIDCreative;
- (void)updatePositionFromView:(UIView *)arg1;
- (void)updateVisibility:(_Bool)arg1;
- (void)MRAIDAdDidUnload;
- (void)MRAIDAdDidLoad;
@end

