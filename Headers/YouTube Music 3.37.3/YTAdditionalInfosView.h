//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;
@protocol YTFormattedStringLabelDelegate;

@interface YTAdditionalInfosView : UIView
{
    NSMutableArray *_additionalInfos;
    id <YTFormattedStringLabelDelegate> _formattedStringLabelDelegate;
}

@property(nonatomic) __weak id <YTFormattedStringLabelDelegate> formattedStringLabelDelegate; // @synthesize formattedStringLabelDelegate=_formattedStringLabelDelegate;
- (void).cxx_destruct;
- (id)buildLabelFromFormattedString:(id)arg1;
- (void)setAdditionalInfos:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

@end

