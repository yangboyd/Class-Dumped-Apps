//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBComponentView.h"

@class GLUELabel, NSLayoutConstraint, SPTPremiumDestinationValueCardStyle;

@interface SPTPremiumDestinationValueCardComponentView : HUBComponentView
{
    SPTPremiumDestinationValueCardStyle *_style;
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    NSLayoutConstraint *_subtitleLeftEdgeLayoutConstraint;
    NSLayoutConstraint *_subtitleRightEdgeLayoutConstraint;
    NSLayoutConstraint *_topEdgeLayoutConstraint;
}

+ (struct CGSize)sizeForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3;
@property(retain, nonatomic) NSLayoutConstraint *topEdgeLayoutConstraint; // @synthesize topEdgeLayoutConstraint=_topEdgeLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleRightEdgeLayoutConstraint; // @synthesize subtitleRightEdgeLayoutConstraint=_subtitleRightEdgeLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleLeftEdgeLayoutConstraint; // @synthesize subtitleLeftEdgeLayoutConstraint=_subtitleLeftEdgeLayoutConstraint;
@property(retain, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SPTPremiumDestinationValueCardStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)configureLabel:(id)arg1 labelStyle:(id)arg2 text:(id)arg3;
- (void)configureWithModel:(id)arg1;
- (void)setupConstraints;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

