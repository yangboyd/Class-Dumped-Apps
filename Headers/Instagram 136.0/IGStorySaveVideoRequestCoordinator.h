//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGStoryOwnStoryMediaLoaderDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGVideoRendererProgressDelegate-Protocol.h>

@class IGStoryOwnStoryMediaLoader, IGUserSession, NSData, NSString, UIImage;
@protocol IGStoryImageProvider, IGStorySaveVideoRequestCoordinatorDelegate, IGVideoURLProvider;

@interface IGStorySaveVideoRequestCoordinator : NSObject <IGVideoRendererProgressDelegate, IGStoryOwnStoryMediaLoaderDelegate>
{
    NSData *_loadedVideoData;
    UIImage *_loadedOverlayImage;
    IGUserSession *_userSession;
    IGStoryOwnStoryMediaLoader *_mediaLoader;
    id <IGVideoURLProvider> _video;
    id <IGStoryImageProvider> _mediaOverlay;
    id <IGStorySaveVideoRequestCoordinatorDelegate> _delegate;
}

@property(nonatomic) __weak id <IGStorySaveVideoRequestCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <IGStoryImageProvider> mediaOverlay; // @synthesize mediaOverlay=_mediaOverlay;
@property(retain, nonatomic) id <IGVideoURLProvider> video; // @synthesize video=_video;
@property(readonly, nonatomic) IGStoryOwnStoryMediaLoader *mediaLoader; // @synthesize mediaLoader=_mediaLoader;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) UIImage *loadedOverlayImage; // @synthesize loadedOverlayImage=_loadedOverlayImage;
@property(retain, nonatomic) NSData *loadedVideoData; // @synthesize loadedVideoData=_loadedVideoData;
- (void).cxx_destruct;
- (void)videoRenderer:(id)arg1 didRenderSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)videoRenderer:(id)arg1 didFailToRenderSegmentsWithError:(id)arg2 canceled:(_Bool)arg3 suspended:(_Bool)arg4;
- (void)videoRendererDidRenderAllSegments:(id)arg1;
- (void)videoRenderer:(id)arg1 willStartRenderingSegmentsCount:(unsigned long long)arg2 videoMetadata:(id)arg3;
- (void)videoRenderer:(id)arg1 didRenderSegment:(id)arg2;
- (void)videoRenderer:(id)arg1 willRenderSegment:(id)arg2 endTime:(CDStruct_1b6d18a9)arg3;
- (void)videoRenderer:(id)arg1 didFailWithError:(id)arg2;
- (void)videoRenderer:(id)arg1 didFinishRenderingVideoToURL:(id)arg2 canceled:(_Bool)arg3;
- (void)videoRendererDidStartRenderingVideo:(id)arg1;
- (void)videoRenderer:(id)arg1 didProgress:(double)arg2;
- (void)storyMediaLoader:(id)arg1 didFailCanRetry:(_Bool)arg2;
- (void)storyMediaLoader:(id)arg1 didLoadImage:(id)arg2;
- (void)storyMediaLoader:(id)arg1 didLoadVideoData:(id)arg2;
- (void)_respondWithFailureCanRetry:(_Bool)arg1;
- (void)_respondWithVideoData:(id)arg1;
- (_Bool)_allDataIsAvailable;
- (_Bool)_hasValidOverlay;
- (void)_renderOverlayAndVideo;
- (void)fetch;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 video:(id)arg3 mediaOverlay:(id)arg4 module:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

