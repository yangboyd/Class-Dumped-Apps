//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBIntentTarget-Protocol.h>

@class IGGenericMegaphone, IGMedia, IGStoryReel, NSString, UIViewController;

@interface IGBrandedContentViolationUserIntentTarget : NSObject <FBIntentTarget>
{
    UIViewController *_topViewController;
    NSString *_feedItemId;
    IGGenericMegaphone *_megaphone;
    IGMedia *_media;
    IGStoryReel *_reel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGStoryReel *reel; // @synthesize reel=_reel;
@property(readonly, nonatomic) IGMedia *media; // @synthesize media=_media;
@property(readonly, nonatomic) IGGenericMegaphone *megaphone; // @synthesize megaphone=_megaphone;
@property(readonly, nonatomic) NSString *feedItemId; // @synthesize feedItemId=_feedItemId;
@property(readonly, nonatomic) UIViewController *topViewController; // @synthesize topViewController=_topViewController;
- (id)initWithTopViewController:(id)arg1 feedItemId:(id)arg2 megaphone:(id)arg3 media:(id)arg4 reel:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

