//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGBouncyCollectionViewCell.h>

@class NSString, UILabel, UIView;

@interface IGSuggestedHashtagCell : IGBouncyCollectionViewCell
{
    UIView *_backgroundView;
    UILabel *_textLabel;
    NSString *_text;
}

+ (id)_displayStringForText:(id)arg1;
+ (struct CGSize)sizeForConstrainingSize:(struct CGSize)arg1 text:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

