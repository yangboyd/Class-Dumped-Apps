//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@interface WAPaymentAccountStatusTableViewCell : UITableViewCell
{
    // Error parsing type: , name: serviceTheme
    // Error parsing type: , name: iconView
    // Error parsing type: , name: descriptionLabel
    // Error parsing type: , name: $__lazy_storage_$_iconLabelStackView
    // Error parsing type: , name: $__lazy_storage_$_actionButtonStackView
    // Error parsing type: , name: constrainedStackView
    // Error parsing type: , name: $__lazy_storage_$_upgradeButton
    // Error parsing type: , name: buttonTapped
    // Error parsing type: , name: buttonTitle
    // Error parsing type: , name: shouldApplyHeaderStyle
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)stopLoadingForButton;
- (void)startLoadingForButton;
- (void)upgradeButtonTapped;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithIcon:(id)arg1 descriptionText:(id)arg2 buttonText:(id)arg3 shouldApplyHeaderStyle:(_Bool)arg4 serviceTheme:(id)arg5;
@property(nonatomic, copy) CDUnknownBlockType buttonTapped;

@end

