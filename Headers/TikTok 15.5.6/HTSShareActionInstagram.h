//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSShareAction-Protocol.h"

@class NSMutableDictionary, NSString;

@interface HTSShareActionInstagram : NSObject <HTSShareAction>
{
    NSString *_cachePath;
    NSMutableDictionary *_shareCaches;
}

+ (void)__awe__codeRunnerRun_26;
@property(retain, nonatomic) NSMutableDictionary *shareCaches; // @synthesize shareCaches=_shareCaches;
@property(readonly, copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
- (void).cxx_destruct;
- (void)saveImageToAlbum:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)videoCacheUrlOfModel:(id)arg1;
- (void)shareWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shareActionAvailable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

