//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol AVEInteractionLoggingService <NSObject>
- (void)logInteraction:(CDStruct_1ef3fb1f)arg1 onView:(UIView *)arg2;
- (void)logTapOnView:(UIView *)arg1;
- (void)logImpression:(UIView *)arg1;
@end

