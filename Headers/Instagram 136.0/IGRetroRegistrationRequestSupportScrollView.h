//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class IGRetroRegistrationNextButton, IGRetroRegistrationTextView, UIButton, UILabel, UITableView, UIView;

@interface IGRetroRegistrationRequestSupportScrollView : UIScrollView
{
    _Bool _showReasonTable;
    IGRetroRegistrationNextButton *_requestSupportButton;
    IGRetroRegistrationTextView *_emailField;
    IGRetroRegistrationTextView *_contactEmailField;
    IGRetroRegistrationTextView *_additionalInfoField;
    UILabel *_descriptionLabel;
    UITableView *_accountTypeTableView;
    UITableView *_reasonTableView;
    UIButton *_footerButton;
    UILabel *_titleLabel;
    UIView *_footerViewSeperator;
    UIView *_footerView;
}

+ (id)_createDescriptionLabel;
+ (id)_createTitleLabel;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *footerViewSeperator; // @synthesize footerViewSeperator=_footerViewSeperator;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool showReasonTable; // @synthesize showReasonTable=_showReasonTable;
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) UITableView *reasonTableView; // @synthesize reasonTableView=_reasonTableView;
@property(retain, nonatomic) UITableView *accountTypeTableView; // @synthesize accountTypeTableView=_accountTypeTableView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) IGRetroRegistrationTextView *additionalInfoField; // @synthesize additionalInfoField=_additionalInfoField;
@property(retain, nonatomic) IGRetroRegistrationTextView *contactEmailField; // @synthesize contactEmailField=_contactEmailField;
@property(retain, nonatomic) IGRetroRegistrationTextView *emailField; // @synthesize emailField=_emailField;
@property(retain, nonatomic) IGRetroRegistrationNextButton *requestSupportButton; // @synthesize requestSupportButton=_requestSupportButton;
- (void).cxx_destruct;
- (double)_heightOfTextView:(id)arg1;
- (void)updateTextView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

