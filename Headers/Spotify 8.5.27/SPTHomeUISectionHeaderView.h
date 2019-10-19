//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUELabel, NSString;
@protocol GLUETheme;

@interface SPTHomeUISectionHeaderView : UIView
{
    GLUELabel *_titleLabel;
    id <GLUETheme> _theme;
}

+ (id)titleLabelAttributesForTheme:(id)arg1;
+ (double)heightForSectionHeaderWithTitle:(id)arg1 containerWidth:(double)arg2 theme:(id)arg3;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)applyTitleLabelStyle;
@property(copy, nonatomic) NSString *title;
- (void)constrainTitleLabel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end

