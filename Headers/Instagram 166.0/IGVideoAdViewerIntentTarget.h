//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBIntentTarget-Protocol.h>

@class IGMedia, IGSponsoredSupportConfiguration, IGVideoPlaybackLoggingConfig, NSString;
@protocol IGVideoAdViewerDelegate;

@interface IGVideoAdViewerIntentTarget : NSObject <FBIntentTarget>
{
    IGMedia *_media;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    IGVideoPlaybackLoggingConfig *_videoPlaybackLoggingConfig;
    NSString *_analyticsModule;
    id <IGVideoAdViewerDelegate> _videoAdViewerDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IGVideoAdViewerDelegate> videoAdViewerDelegate; // @synthesize videoAdViewerDelegate=_videoAdViewerDelegate;
@property(readonly, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) IGVideoPlaybackLoggingConfig *videoPlaybackLoggingConfig; // @synthesize videoPlaybackLoggingConfig=_videoPlaybackLoggingConfig;
@property(readonly, nonatomic) IGSponsoredSupportConfiguration *sponsoredSupportConfiguration; // @synthesize sponsoredSupportConfiguration=_sponsoredSupportConfiguration;
@property(readonly, nonatomic) IGMedia *media; // @synthesize media=_media;
- (id)initWithMedia:(id)arg1 sponsoredSupportConfiguration:(id)arg2 videoPlaybackLoggingConfig:(id)arg3 analyticsModule:(id)arg4 videoAdViewerDelegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

