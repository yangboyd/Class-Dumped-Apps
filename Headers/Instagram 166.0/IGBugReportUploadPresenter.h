//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGNotificationBar;

@interface IGBugReportUploadPresenter : NSObject
{
    IGNotificationBar *_notificationBar;
}

- (void).cxx_destruct;
- (void)_pushBugReportRetryNotificationWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)pushBugReportRetryNotificationWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)_pushBugReportSucceededNotification;
- (void)pushBugReportSucceededNotification;
- (id)init;

@end

