//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIREarhartV3Airmoji, AIREarhartV3InteractiveVisualStyle, AIREarhartV3TextElement, NSString;

@interface AIREarhartV3Button : AIRModel
{
    NSString *_buttonType;
    AIREarhartV3TextElement *_textElement;
    AIREarhartV3Airmoji *_airmoji;
    AIREarhartV3InteractiveVisualStyle *_style;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AIREarhartV3InteractiveVisualStyle *style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) AIREarhartV3Airmoji *airmoji; // @synthesize airmoji=_airmoji;
@property(readonly, copy, nonatomic) AIREarhartV3TextElement *textElement; // @synthesize textElement=_textElement;
@property(readonly, copy, nonatomic) NSString *buttonType; // @synthesize buttonType=_buttonType;

@end

