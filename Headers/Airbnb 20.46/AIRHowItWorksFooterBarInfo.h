//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSString, NSURL;

@interface AIRHowItWorksFooterBarInfo : AIRModel
{
    NSString *_componentType;
    NSString *_triggerSectionIndex;
    NSString *_primaryCtaText;
    NSURL *_primaryCtaUrl;
    NSString *_secondaryCtaText;
    NSURL *_secondaryCtaUrl;
}

+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *secondaryCtaUrl; // @synthesize secondaryCtaUrl=_secondaryCtaUrl;
@property(readonly, copy, nonatomic) NSString *secondaryCtaText; // @synthesize secondaryCtaText=_secondaryCtaText;
@property(readonly, copy, nonatomic) NSURL *primaryCtaUrl; // @synthesize primaryCtaUrl=_primaryCtaUrl;
@property(readonly, copy, nonatomic) NSString *primaryCtaText; // @synthesize primaryCtaText=_primaryCtaText;
@property(readonly, copy, nonatomic) NSString *triggerSectionIndex; // @synthesize triggerSectionIndex=_triggerSectionIndex;
@property(readonly, copy, nonatomic) NSString *componentType; // @synthesize componentType=_componentType;

@end

