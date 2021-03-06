//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface SUPHelpUnitView : UIView
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_snippetLabel;
}

+ (id)attributedText:(id)arg1 font:(id)arg2 color:(id)arg3 highlightText:(id)arg4;
+ (double)heightForHelpUnit:(id)arg1 showSnippet:(_Bool)arg2 constrainedToWidth:(double)arg3;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithHelpUnit:(id)arg1 highlightText:(id)arg2 showSnippet:(_Bool)arg3 ID:(id)arg4;

@end

