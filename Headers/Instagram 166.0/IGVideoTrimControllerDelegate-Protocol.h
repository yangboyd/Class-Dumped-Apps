//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGVideoTrimViewController;

@protocol IGVideoTrimControllerDelegate <NSObject>
- (void)videoTrimController:(IGVideoTrimViewController *)arg1 didFinishUpdatingWithTrimmedRange:(CDStruct_e83c9415)arg2;
- (void)videoTrimController:(IGVideoTrimViewController *)arg1 didUpdateWithTrimmedRange:(CDStruct_e83c9415)arg2;
- (void)videoTrimController:(IGVideoTrimViewController *)arg1 willBeginUpdatingWithTrimmedRange:(CDStruct_e83c9415)arg2;
@end

