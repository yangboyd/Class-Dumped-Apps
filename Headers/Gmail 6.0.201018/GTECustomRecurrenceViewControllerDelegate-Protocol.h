//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GTECustomRecurrenceViewController, GTERecurrenceScheduling;

@protocol GTECustomRecurrenceViewControllerDelegate <NSObject>
- (void)customRecurrenceViewControllerDidCancel:(GTECustomRecurrenceViewController *)arg1;
- (void)customRecurrenceViewController:(GTECustomRecurrenceViewController *)arg1 didCreateRecurrenceScheduling:(GTERecurrenceScheduling *)arg2;
@end

