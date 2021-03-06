//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEOpenPushGuideManagerProtocol-Protocol.h"

@class NSMapTable, NSString;

@interface AWEOpenPushGuideManager : NSObject <AWEOpenPushGuideManagerProtocol>
{
    NSMapTable *_guidesInfo;
}

+ (void)cleanupAllGuides;
+ (void)updateShowupCondition;
+ (_Bool)checkShowupCondition;
+ (void)showDouyinGuideWithTitle:(id)arg1 linkString:(id)arg2 enterFrom:(id)arg3 bottomOffset:(double)arg4 category:(id)arg5 onView:(id)arg6 withBottomExtended:(_Bool)arg7 actionBlock:(CDUnknownBlockType)arg8;
+ (void)showMTGuideWithTitle:(id)arg1 linkString:(id)arg2 enterFrom:(id)arg3 bottomOffset:(double)arg4 category:(id)arg5 onView:(id)arg6 actionBlock:(CDUnknownBlockType)arg7;
+ (void)showGuideWithTitle:(id)arg1 linkString:(id)arg2 enterFrom:(id)arg3 bottomOffset:(double)arg4 category:(id)arg5 onView:(id)arg6 actionBlock:(CDUnknownBlockType)arg7;
+ (void)showGuideWithTitle:(id)arg1 linkString:(id)arg2 enterFrom:(id)arg3 bottomOffset:(double)arg4 category:(id)arg5 actionBlock:(CDUnknownBlockType)arg6;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMapTable *guidesInfo; // @synthesize guidesInfo=_guidesInfo;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

