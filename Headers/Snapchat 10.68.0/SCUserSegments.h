//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface SCUserSegments : NSObject
{
    NSSet *_segmentSet;
}

- (void).cxx_destruct;
- (_Bool)_isInUserSegment:(long long)arg1;
- (_Bool)isNewOrHighRiskUser;
- (_Bool)isNewUser;
- (_Bool)isRatingPromptTargetUser;
- (id)initWithUserSegments:(id)arg1;

@end

