//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMPlaybackRequestFactory-Protocol.h"

@class NSString, SPTVideoMediaURLConverter;

@interface SPTVideoPlaybackRequestFactoryImpl : NSObject <BMPlaybackRequestFactory>
{
    SPTVideoMediaURLConverter *_mediaURLConverter;
}

@property(retain, nonatomic) SPTVideoMediaURLConverter *mediaURLConverter; // @synthesize mediaURLConverter=_mediaURLConverter;
- (void).cxx_destruct;
- (id)createPlaybackRequestWithMediaURL:(id)arg1 metadata:(id)arg2 royaltyMedia:(_Bool)arg3 audioOnlyAllowed:(_Bool)arg4;
- (id)createPlaybackRequestWithManifestID:(id)arg1 metadata:(id)arg2 royaltyMedia:(_Bool)arg3 audioOnlyAllowed:(_Bool)arg4;
- (id)initWithMediaURLConverter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

