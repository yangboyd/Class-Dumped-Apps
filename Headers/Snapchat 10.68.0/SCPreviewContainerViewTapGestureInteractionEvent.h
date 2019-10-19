//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFeatureInteractionEvent-Protocol.h"

@class NSString, UIGestureRecognizer;

@interface SCPreviewContainerViewTapGestureInteractionEvent : NSObject <SCFeatureInteractionEvent>
{
    UIGestureRecognizer *_gestureRecognizer;
}

+ (id)createWithGestureRecognizer:(id)arg1;
@property(readonly, nonatomic) UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (void).cxx_destruct;
- (unsigned long long)processEventForFeature:(id)arg1;
- (id)initWithGestureRecognizer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

