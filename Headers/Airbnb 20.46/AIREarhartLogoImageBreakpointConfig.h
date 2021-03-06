//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIREarhartLogoImage;

@interface AIREarhartLogoImageBreakpointConfig : AIRModel
{
    AIREarhartLogoImage *_small;
    AIREarhartLogoImage *_medium;
    AIREarhartLogoImage *_large;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AIREarhartLogoImage *large; // @synthesize large=_large;
@property(readonly, copy, nonatomic) AIREarhartLogoImage *medium; // @synthesize medium=_medium;
@property(readonly, copy, nonatomic) AIREarhartLogoImage *small; // @synthesize small=_small;

@end

