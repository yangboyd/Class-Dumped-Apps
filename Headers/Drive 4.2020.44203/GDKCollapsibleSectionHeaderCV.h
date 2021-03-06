//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOBaseContentView.h>

#import "GDKCollapsibleSectionHeaderCVOUpdateDelegate-Protocol.h"
#import "GDKThemable-Protocol.h"

@class GDKCollapsibleSectionHeaderCVO, MDCButton, NSString, UIImageView, UILabel, UITraitCollection;
@protocol GDKCollapsibleSectionHeaderCVDelegate;

@interface GDKCollapsibleSectionHeaderCV : GOOBaseContentView <GDKCollapsibleSectionHeaderCVOUpdateDelegate, GDKThemable>
{
    MDCButton *_toggleButton;
    UILabel *_label;
    UIImageView *_arrowImageView;
    id <GDKCollapsibleSectionHeaderCVDelegate> _delegate;
    GDKCollapsibleSectionHeaderCVO *_collapsibleSectionHeaderCVO;
}

+ (id)sizingView;
+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(retain, nonatomic) GDKCollapsibleSectionHeaderCVO *collapsibleSectionHeaderCVO; // @synthesize collapsibleSectionHeaderCVO=_collapsibleSectionHeaderCVO;
@property(nonatomic) __weak id <GDKCollapsibleSectionHeaderCVDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) MDCButton *toggleButton; // @synthesize toggleButton=_toggleButton;
- (void)viewObjectWasUpdated:(id)arg1;
- (void)toggleButtonPressed;
- (void)createConstraints;
- (_Bool)isAccessibilityElement;
- (void)applyTheme:(id)arg1;
- (id)theme;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewWithObject:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) GDKCollapsibleSectionHeaderCVO *object; // @dynamic object;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;

@end

