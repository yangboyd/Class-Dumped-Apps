//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLCaptionDisplayController-Protocol.h"

@class GIMMe, MLHAMQueuePlayerSegmentList, NSString;
@protocol MLCaptionDisplaySettingsProvider, OS_dispatch_queue;

@interface MLHAMQueuePlayerCaptionDisplayController : NSObject <MLCaptionDisplayController>
{
    MLHAMQueuePlayerSegmentList *_segmentList;
    NSObject<OS_dispatch_queue> *_queue;
    id <MLCaptionDisplaySettingsProvider> captionDisplaySettingsProvider;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(retain, nonatomic) id <MLCaptionDisplaySettingsProvider> captionDisplaySettingsProvider; // @synthesize captionDisplaySettingsProvider;
- (void).cxx_destruct;
- (void)setCurrentMediaTime:(CDStruct_d60ef703)arg1;
- (void)setCaptionsHidden:(_Bool)arg1;
- (void)clearCaptions;
- (void)addFormat3Captions:(id)arg1;
- (id)initWithSegmentList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

