//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSString, NSURL;

@interface AIRExperienceCategoryValueProp : AIRModel
{
    NSString *_headline;
    NSString *_subheadline;
    NSURL *_iconURL;
    NSString *_ctaText;
    NSURL *_ctaURL;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *ctaURL; // @synthesize ctaURL=_ctaURL;
@property(readonly, copy, nonatomic) NSString *ctaText; // @synthesize ctaText=_ctaText;
@property(readonly, copy, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(readonly, copy, nonatomic) NSString *subheadline; // @synthesize subheadline=_subheadline;
@property(readonly, copy, nonatomic) NSString *headline; // @synthesize headline=_headline;

@end

