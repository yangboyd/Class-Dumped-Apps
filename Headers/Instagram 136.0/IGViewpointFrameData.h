//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IGViewpointFrameData : NSObject
{
    NSArray *_trackedViewData;
    struct CGRect _windowFrame;
}

@property(readonly, nonatomic) NSArray *trackedViewData; // @synthesize trackedViewData=_trackedViewData;
@property(readonly, nonatomic) struct CGRect windowFrame; // @synthesize windowFrame=_windowFrame;
- (void).cxx_destruct;
- (id)initWithWindowFrame:(struct CGRect)arg1 trackedViewData:(id)arg2;

@end

