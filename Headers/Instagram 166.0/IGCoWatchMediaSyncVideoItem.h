//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGCoWatchableMedia-Protocol.h>

@class IGCoWatchVideoViewModel, IGUser, NSArray, NSString;

@interface IGCoWatchMediaSyncVideoItem : NSObject <IGCoWatchableMedia>
{
    IGCoWatchVideoViewModel *_videoViewModel;
    IGUser *_owner;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGCoWatchVideoViewModel *videoViewModel; // @synthesize videoViewModel=_videoViewModel;
@property(readonly, nonatomic) NSArray *captionLocales;
@property(readonly, nonatomic) unsigned long long mediaProductType;
@property(readonly, nonatomic) long long contentSource;
@property(readonly, nonatomic) _Bool supportsVideoControls;
@property(readonly, nonatomic) _Bool hasAudio;
@property(readonly, nonatomic) IGUser *owner;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, copy, nonatomic) NSString *mediaId;
@property(readonly, nonatomic) long long mediaType;
- (id)initWithVideoViewModel:(id)arg1 owner:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

