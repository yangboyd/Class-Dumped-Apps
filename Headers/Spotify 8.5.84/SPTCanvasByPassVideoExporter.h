//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCanvasVideoExporter-Protocol.h"

@class NSString, NSURL;

@interface SPTCanvasByPassVideoExporter : NSObject <SPTCanvasVideoExporter>
{
    NSURL *_assetURL;
    double _assetDuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double assetDuration; // @synthesize assetDuration=_assetDuration;
@property(readonly, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
- (void)load:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 assetDuration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

