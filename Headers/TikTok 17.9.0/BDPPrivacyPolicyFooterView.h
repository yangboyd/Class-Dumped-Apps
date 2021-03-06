//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;
@protocol BDPPrivacyPolicyFooterViewDelegate;

@interface BDPPrivacyPolicyFooterView : UIView
{
    UILabel *_privacyPolicyLabel;
    UIImageView *_privaPolicyImageView;
    id <BDPPrivacyPolicyFooterViewDelegate> _delegate;
    NSString *_appName;
    NSString *_privacyPolicyURL;
}

@property(copy, nonatomic) NSString *privacyPolicyURL; // @synthesize privacyPolicyURL=_privacyPolicyURL;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) __weak id <BDPPrivacyPolicyFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *privaPolicyImageView; // @synthesize privaPolicyImageView=_privaPolicyImageView;
@property(retain, nonatomic) UILabel *privacyPolicyLabel; // @synthesize privacyPolicyLabel=_privacyPolicyLabel;
- (void).cxx_destruct;
- (void)onPrivacyPolicyViewTaped;
- (void)setPrivacyPolicyLabelText:(id)arg1;
- (void)setupUI;
- (id)initWithAppName:(id)arg1 privacyPolicyURL:(id)arg2;

@end

