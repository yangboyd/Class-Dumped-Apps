//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NFUIDownloadUIUtils : NSObject
{
}

+ (id)titleForWatchableEntity:(id)arg1;
+ (id)accessibilitySubtitleTextForShowWithObserver:(id)arg1;
+ (id)subtitleTextForShowWithObserver:(id)arg1;
+ (id)subtitleTextForDownloadWithObserver:(id)arg1;
+ (id)accessibilityLabelTextForDownloadWithObserver:(id)arg1;
+ (id)statusTextForShowWithObserver:(id)arg1 textColor:(id *)arg2;
+ (id)statusTextForDownloadWithObserver:(id)arg1 textColor:(id *)arg2;
+ (id)statusTextWithDownloadExpiry:(id)arg1 textColor:(id *)arg2;
+ (id)removeActionTitleWithDownload:(id)arg1;
+ (id)defaultActionForDownload:(id)arg1 withSourceModel:(id)arg2 objectContext:(id)arg3;
+ (id)alertMessageWithDownload:(id)arg1;
+ (void)downloadButtonAction:(id)arg1 withExistingDownload:(id)arg2 title:(id)arg3 sourceViewController:(id)arg4 sourceModel:(id)arg5 objectContext:(id)arg6 callback:(CDUnknownBlockType)arg7;
+ (void)downloadButtonAction:(id)arg1 withId:(id)arg2 title:(id)arg3 sourceViewController:(id)arg4 sourceModel:(id)arg5 objectContext:(id)arg6 callback:(CDUnknownBlockType)arg7;

@end

