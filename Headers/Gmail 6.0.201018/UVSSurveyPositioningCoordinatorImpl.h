//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UVSSurveyPositioningCoordinator-Protocol.h"

@class NSString;

@interface UVSSurveyPositioningCoordinatorImpl : NSObject <UVSSurveyPositioningCoordinator>
{
    unsigned long long _anchor;
    double _horizontalMargin;
    double _verticalMargin;
    CDUnknownBlockType _animationBlock;
}

+ (id)defaultCoordinatorForRootView:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType animationBlock; // @synthesize animationBlock=_animationBlock;
@property(nonatomic) double verticalMargin; // @synthesize verticalMargin=_verticalMargin;
@property(nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(nonatomic) unsigned long long anchor; // @synthesize anchor=_anchor;
- (id)init;
- (id)initWithAnchor:(unsigned long long)arg1 horizontalMargin:(double)arg2 verticalMargin:(double)arg3 animationBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

