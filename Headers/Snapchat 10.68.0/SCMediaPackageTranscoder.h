//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMediaPackageTranscoding-Protocol.h"

@class NSString, SCMediaPackageManager;

@interface SCMediaPackageTranscoder : NSObject <SCMediaPackageTranscoding>
{
    SCMediaPackageManager *_mediaPackageManager;
}

- (void).cxx_destruct;
- (void)transcodeWithMediaPackageHandle:(id)arg1 config:(id)arg2 callbackPerformer:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithTranscodingService:(id)arg1 mediaPackageManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

