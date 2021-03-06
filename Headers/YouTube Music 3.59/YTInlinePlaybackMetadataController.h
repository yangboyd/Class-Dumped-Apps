//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTResponder-Protocol.h"

@class NSString, YTIInlinePlaybackMetadataRenderer;
@protocol YTInlinePlaybackContainer, YTResponder;

@interface YTInlinePlaybackMetadataController : NSObject <YTResponder>
{
    YTIInlinePlaybackMetadataRenderer *_entry;
    NSString *_videoID;
    id <YTResponder> _parentResponder;
    id <YTInlinePlaybackContainer> _container;
}

@property(nonatomic) __weak id <YTInlinePlaybackContainer> container; // @synthesize container=_container;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (_Bool)handleNavigationEvent:(id)arg1;
- (id)initWithEntry:(id)arg1 videoID:(id)arg2 parentResponder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

