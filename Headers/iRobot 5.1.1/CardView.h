//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MDCCard, NSArray, UILabel, UIStackView;

@interface CardView : UIView
{
    _Bool _isTipCard;
    NSArray *_dynamicViewDescriptor;
    MDCCard *_containerView;
    UIStackView *_stackView;
    UIStackView *_textStackView;
    UIStackView *_textStackViewContainer;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_additionalDescriptionLabel;
    NSArray *_buttonPressedHandlers;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isTipCard; // @synthesize isTipCard=_isTipCard;
@property(retain, nonatomic) NSArray *buttonPressedHandlers; // @synthesize buttonPressedHandlers=_buttonPressedHandlers;
@property(retain, nonatomic) UILabel *additionalDescriptionLabel; // @synthesize additionalDescriptionLabel=_additionalDescriptionLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIStackView *textStackViewContainer; // @synthesize textStackViewContainer=_textStackViewContainer;
@property(retain, nonatomic) UIStackView *textStackView; // @synthesize textStackView=_textStackView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) MDCCard *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSArray *dynamicViewDescriptor; // @synthesize dynamicViewDescriptor=_dynamicViewDescriptor;
- (void)buttonPressed:(id)arg1;
- (void)configureButtonSectionWithDescriptor:(id)arg1;
- (id)wrapView:(id)arg1 intoContainerViewWithEdgeInsets:(struct UIEdgeInsets)arg2;
- (void)populateViewComponentsWithDescriptor:(id)arg1;

@end

