//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MLAuxiliaryManifestManager : NSObject
{
    NSString *_contentCPN;
    NSMutableDictionary *_CPNToAuxiliaryVideo;
    NSObject<OS_dispatch_queue> *_queue;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)buildPlaylistCacheForVideo:(id)arg1 playerConfig:(id)arg2 CPN:(id)arg3;
- (void)fetchSegmentsForVideoSections:(id)arg1 stream:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addVideo:(id)arg1 playerConfig:(id)arg2 forCPN:(id)arg3;
- (id)init;
- (id)initWithCPN:(id)arg1;

@end

